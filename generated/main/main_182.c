#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_3e7644(Cpu *c);
void f_4332ac(Cpu *c);
void f_521f9c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9aef68(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af518(Cpu *c);
void f_9af53c(Cpu *c);
void f_9af55c(Cpu *c);
void f_9af630(Cpu *c);
void f_9af6e4(Cpu *c);
void f_9bb638(Cpu *c);
void f_9bba44(Cpu *c);
void f_9c5e4c(Cpu *c);
void f_9c8508(Cpu *c);
void f_9c86b4(Cpu *c);
void f_9c87a4(Cpu *c);
void f_9c8a6c(Cpu *c);
void f_9c8ee0(Cpu *c);
void f_9d9734(Cpu *c);
void f_a032e0(Cpu *c);
void f_a04790(Cpu *c);
void f_a0488c(Cpu *c);
void f_a098b4(Cpu *c);
void f_a1f9ec(Cpu *c);
void f_a2fb08(Cpu *c);
void f_a2fb10(Cpu *c);
void f_a2fb14(Cpu *c);
void f_a31b90(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a83f74(Cpu *c);
void f_a8454c(Cpu *c);
void f_a84d5c(Cpu *c);
void f_a857c4(Cpu *c);
void f_a85804(Cpu *c);
void f_a85824(Cpu *c);
void f_a85834(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a87a24(Cpu *c);
void f_b3eff4(Cpu *c);
void f_b4cf88(Cpu *c);
void f_b4d770(Cpu *c);
void f_b6f8b8(Cpu *c);
void f_bf0ff8(Cpu *c);
void f_bf1550(Cpu *c);
void f_bf2708(Cpu *c);
void f_bf2c18(Cpu *c);
void f_bf3f30(Cpu *c);
void f_bf4ed0(Cpu *c);
void f_bf5058(Cpu *c);
void f_bf5360(Cpu *c);
void f_bf6340(Cpu *c);
void f_bf66a0(Cpu *c);
void f_bf6a14(Cpu *c);
void f_bf6b40(Cpu *c);
void f_bfa3d8(Cpu *c);
void f_bfba6c(Cpu *c);
void f_bfc990(Cpu *c);
void f_bfcdb4(Cpu *c);
void f_bfda44(Cpu *c);
void f_bfeb88(Cpu *c);
void f_bff218(Cpu *c);
void f_bff43c(Cpu *c);
void f_c01404(Cpu *c);
void f_c03ddc(Cpu *c);
void f_c06460(Cpu *c);
void f_c1709c(Cpu *c);
void f_c17d04(Cpu *c);
void f_c17d64(Cpu *c);
void f_c28a2c(Cpu *c);
void f_c29344(Cpu *c);
void f_c29350(Cpu *c);
void f_c293d0(Cpu *c);
void f_c2948c(Cpu *c);
void f_d21388(Cpu *c);
void f_d213cc(Cpu *c);
void f_d215b4(Cpu *c);
void f_d219cc(Cpu *c);
void f_d21a04(Cpu *c);
void f_d21a64(Cpu *c);
void f_d85a14(Cpu *c);
void f_da84f0(Cpu *c);
void f_dba2c8(Cpu *c);
void f_dba9a4(Cpu *c);
void f_dbaa08(Cpu *c);
void f_dbabf4(Cpu *c);
void f_dd0dac(Cpu *c);
void f_dd3814(Cpu *c);
void f_dd43a4(Cpu *c);
void f_dd4aa0(Cpu *c);
void f_e179e4(Cpu *c);
void f_e1b778(Cpu *c);
void f_e1bb28(Cpu *c);
void f_e1c3b8(Cpu *c);
void f_e32e98(Cpu *c);
void f_e33cac(Cpu *c);
void f_e33d80(Cpu *c);
void f_e33e58(Cpu *c);
void f_e3aeb0(Cpu *c);
void f_e8cdd4(Cpu *c);
void f_e8cff4(Cpu *c);
void f_e8d16c(Cpu *c);
void f_e8d5d0(Cpu *c);
void f_e8d9c4(Cpu *c);
void f_e8ec60(Cpu *c);
void f_e8f36c(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15effb0(Cpu *c);
void f_15f004c(Cpu *c);
void f_15f0184(Cpu *c);
void f_15f0190(Cpu *c);
void f_bf0f08(Cpu *restrict c) {
    FN_ENTER(0xbf0f08u);
L_bf0f08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x61u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x67u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_bf0f5c; }
    { uint32_t ea = c->r[2] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_bf0f5c; }
    { uint32_t ea = c->r[2] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + (c->r[3] << 2);
    c->r[2] = c->r[1] + (c->r[2] << 5);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xffu); }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xffu); }
    if (COND_NE) { goto L_bf0f74; }
L_bf0f5c:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffdffu;
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x280u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bf0f74:;
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[1] + (c->r[2] << 5);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x69u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xffu); }
    if (COND_EQ) { goto L_bf0f5c; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { c->r[2] = c->r[2] + (c->r[2] << 2); }
    if (COND_NE) { c->r[2] = c->r[1] + (c->r[2] << 5); }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_bf0f5c; }
    { uint32_t ea = c->r[4] + 0x6au; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_bf0fd8; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf0fd8; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbf0fd0u; f_bf1550(c);
    c->r[0] = 0x4u;
    goto L_bf0fe4;
L_bf0fd8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbf0fe0u; f_bf0ff8(c);
    c->r[0] = 0x3u;
L_bf0fe4:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x280u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bf0ff8(Cpu *restrict c) {
    FN_ENTER(0xbf0ff8u);
L_bf0ff8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->v.s[20] = LD32(c->r[4] + 68u);
    vfp_cmp_f(c, c->v.f[20], 0.0f);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_bf102c; }
L_bf1020:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bf102c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf104c; }
    c->v.s[24] = LD32(c->r[0] + 96u);
    vfp_cmp_f(c, c->v.f[24], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf1020; }
    goto L_bf1050;
L_bf104c:;
    c->v.s[24] = 0x3f800000u;
L_bf1050:;
    { uint32_t ea = c->r[4] + 0x67u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_bf1078; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[7] = c->r[7] + (c->r[3] << 5);
L_bf1078:;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_bf1098; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 5);
L_bf1098:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x69u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_EQ) { goto L_bf10c0; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 2);
    c->r[6] = c->r[6] + (c->r[5] << 5);
L_bf10c0:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6au; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bf10e0; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[3] = c->r[0] + (c->r[2] << 5);
L_bf10e0:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf10f8; }
    c->v.s[16] = LD32(c->r[4] + 648u);
    goto L_bf1164;
L_bf10f8:;
    c->v.s[0] = LD32(c->r[1] + 132u);
    c->v.s[2] = LD32(c->r[1] + 128u);
    c->v.s[4] = LD32(c->r[1] + 136u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1128; }
    c->r[14] = 0xbf1124u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf1128:;
    ST32(c->r[4] + 644u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[6] + 132u);
    c->v.s[2] = LD32(c->r[6] + 128u);
    c->v.s[4] = LD32(c->r[6] + 136u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf115c; }
    c->r[14] = 0xbf1158u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bf115c:;
    ST32(c->r[4] + 648u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD16(ea); c->r[0] = v; }
L_bf1164:;
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[1]); }
    c->v.s[17] = LD32(c->r[4] + 644u);
    if (COND_NE) { goto L_bf11b0; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf11c8;
L_bf11b0:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
L_bf11c8:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[13] + 0x10u; }
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xbf11dcu; f_bf2708(c); }
    c->v.s[22] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[20], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bf1240; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.f[12] = c->v.f[22] - c->v.f[20];
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.s[8] = LD32(c->r[0] + 68u);
    c->v.s[10] = LD32(c->r[0] + 72u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[20] * c->v.f[2];
    c->v.f[4] = c->v.f[20] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[10]);
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_bf1240:;
    c->v.s[26] = LD32(c->r[13] + 16u);
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[28] = LD32(c->r[13] + 20u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[30] = LD32(c->r[13] + 24u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->v.f[21] = c->v.f[28] - c->v.f[2];
    c->v.f[23] = c->v.f[26] - c->v.f[0];
    c->v.f[19] = c->v.f[30] - c->v.f[4];
    c->v.f[0] = c->v.f[21] * c->v.f[21];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1288; }
    c->r[14] = 0xbf1284u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_bf1288:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3] & 0x3u;
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[2] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    if (COND_NE) { c->r[1] = c->r[1] ^ 0x80000000u; }
    if (COND_NE) { c->r[2] = c->r[2] ^ 0x80000000u; }
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x80000000u; }
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[2];
    c->v.s[4] = c->r[0];
    c->v.f[25] = c->v.f[19] * c->v.f[0];
    c->v.f[27] = c->v.f[21] * c->v.f[2];
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[23] * c->v.f[2]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[29] = c->v.f[23] * c->v.f[4];
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[2] = c->v.f[25] * c->v.f[25];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf12f4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf12f4u; f_15efddc(c);
L_bf12f4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf1314; }
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.f[29] = c->v.f[0] * c->v.f[29];
    c->v.f[25] = c->v.f[0] * c->v.f[25];
    c->v.f[27] = c->v.f[0] * c->v.f[27];
L_bf1314:;
    c->v.f[0] = c->v.f[19] * c->v.f[25];
    c->v.f[4] = c->v.f[23] * c->v.f[29];
    c->v.f[6] = c->v.f[21] * c->v.f[27];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[21] * c->v.f[29]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[19] * c->v.f[27]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[23] * c->v.f[25]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[2]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    ST32(c->r[13], c->v.s[0]);
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_MI) { goto L_bf1020; }
    c->v.f[4] = c->v.f[24] * c->v.f[16];
    c->v.f[0] = c->v.f[24] * c->v.f[17];
    c->v.f[2] = c->v.f[0] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[18], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_bf13c0; }
    c->v.f[2] = c->v.f[0] - c->v.f[4];
    c->v.f[6] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf1418; }
    c->v.f[4] = c->v.f[22] / c->v.f[18];
    c->v.s[26] = LD32(c->r[4] + 384u);
    c->v.s[28] = LD32(c->r[4] + 388u);
    c->v.s[30] = LD32(c->r[4] + 392u);
    c->r[0] = 0x0u;
    c->v.s[10] = c->v.s[26];
    c->v.s[12] = c->v.s[28];
    c->v.s[14] = c->v.s[30];
    c->v.f[6] = c->v.f[23] * c->v.f[4];
    c->v.f[8] = c->v.f[21] * c->v.f[4];
    c->v.f[4] = c->v.f[19] * c->v.f[4];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[2] * c->v.f[6]);
    goto L_bf1404;
L_bf13c0:;
    c->v.f[4] = c->v.f[22] / c->v.f[18];
    c->v.s[26] = LD32(c->r[4] + 384u);
    c->v.s[28] = LD32(c->r[4] + 388u);
    c->v.s[30] = LD32(c->r[4] + 392u);
    c->r[0] = 0x0u;
    c->v.s[10] = c->v.s[26];
    c->v.s[12] = c->v.s[28];
    c->v.s[14] = c->v.s[30];
    c->v.f[6] = c->v.f[23] * c->v.f[4];
    c->v.f[8] = c->v.f[21] * c->v.f[4];
    c->v.f[4] = c->v.f[19] * c->v.f[4];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[2] * c->v.f[6]);
L_bf1404:;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 400u, c->v.s[10]);
    ST32(c->r[4] + 404u, c->v.s[12]);
    ST32(c->r[4] + 408u, c->v.s[14]);
    goto L_bf14bc;
L_bf1418:;
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.s[0] = c->v.s[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[4] = c->v.f[18] + c->v.f[18];
    c->v.f[16] = c->v.f[0] / c->v.f[4];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf144c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf144cu; f_15efddc(c);
L_bf144c:;
    c->v.f[8] = c->v.f[16] / c->v.f[18];
    c->v.s[6] = LD32(c->r[4] + 384u);
    c->v.s[4] = LD32(c->r[4] + 388u);
    c->v.s[2] = LD32(c->r[4] + 392u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    c->v.f[10] = c->v.f[25] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[23] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[21] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[8]);
    c->v.f[8] = c->v.f[29] * c->v.f[0];
    c->v.f[0] = c->v.f[27] * c->v.f[0];
    ST32(c->r[4] + 400u, c->v.s[6]);
    ST32(c->r[4] + 404u, c->v.s[4]);
    ST32(c->r[4] + 408u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf14a4; }
    c->v.f[6] = c->v.f[0] + c->v.f[6];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[0] = c->v.f[8] + c->v.f[2];
    goto L_bf14b0;
L_bf14a4:;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] - c->v.f[8];
L_bf14b0:;
    ST32(c->r[4] + 400u, c->v.s[6]);
    ST32(c->r[4] + 404u, c->v.s[4]);
    ST32(c->r[4] + 408u, c->v.s[0]);
L_bf14bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 416u, c->v.s[26]);
    ST32(c->r[4] + 420u, c->v.s[28]);
    ST32(c->r[4] + 424u, c->v.s[30]);
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf150c; }
    { uint32_t ea = c->r[4] + 0x2b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] & 0x1u;
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { goto L_bf150c; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bf1504; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_bf1504:;
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbf150cu; rt_dispatch(c);
L_bf150c:;
    c->r[2] = c->r[13] + 0x28u;
    c->r[3] = c->r[13];
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0xbf1520u; f_bf2c18(c);
    vfp_cmp_f(c, c->v.f[20], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf1020; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf1020; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0xbf1548u; f_bf3f30(c);
    goto L_bf1020;
}
void f_bf1550(Cpu *restrict c) {
    FN_ENTER(0xbf1550u);
L_bf1550:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x150u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->v.s[22] = LD32(c->r[4] + 68u);
    vfp_cmp_f(c, c->v.f[22], 0.0f);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_bf1584; }
L_bf1578:;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bf1584:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf15a4; }
    c->v.s[17] = LD32(c->r[0] + 96u);
    vfp_cmp_f(c, c->v.f[17], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf1578; }
    goto L_bf15a8;
L_bf15a4:;
    c->v.s[17] = 0x3f800000u;
L_bf15a8:;
    { uint32_t ea = c->r[4] + 0x67u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_bf15d0; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[5] = c->r[7] + (c->r[3] << 5);
L_bf15d0:;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_bf15f0; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 5);
L_bf15f0:;
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x69u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_bf1618; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[7] = c->r[7] + (c->r[3] << 5);
L_bf1618:;
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x6au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bf1638; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[6] = c->r[0] + (c->r[2] << 5);
L_bf1638:;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf1650; }
    c->v.s[18] = LD32(c->r[4] + 652u);
    goto L_bf16f0;
L_bf1650:;
    c->v.s[0] = LD32(c->r[1] + 132u);
    c->v.s[2] = LD32(c->r[1] + 128u);
    c->v.s[4] = LD32(c->r[1] + 136u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1680; }
    c->r[14] = 0xbf167cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf1680:;
    ST32(c->r[4] + 644u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[7] + 132u);
    c->v.s[2] = LD32(c->r[7] + 128u);
    c->v.s[4] = LD32(c->r[7] + 136u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf16b4; }
    c->r[14] = 0xbf16b0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf16b4:;
    ST32(c->r[4] + 648u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[6] + 132u);
    c->v.s[2] = LD32(c->r[6] + 128u);
    c->v.s[4] = LD32(c->r[6] + 136u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf16e8; }
    c->r[14] = 0xbf16e4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_bf16e8:;
    ST32(c->r[4] + 652u, c->v.s[18]);
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD16(ea); c->r[0] = v; }
L_bf16f0:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[1]); }
    c->v.s[26] = LD32(c->r[4] + 644u);
    c->v.s[30] = LD32(c->r[4] + 648u);
    if (COND_NE) { goto L_bf1740; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf1758;
L_bf1740:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[2]); }
L_bf1758:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[13] + 0x130u; }
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xbf176cu; f_bf2708(c); }
    c->v.s[0] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[22], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bf17d4; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[13] + 304u);
    c->v.s[2] = LD32(c->r[13] + 308u);
    c->v.s[4] = LD32(c->r[13] + 312u);
    c->v.f[6] = c->v.f[6] - c->v.f[22];
    c->v.s[8] = LD32(c->r[0] + 64u);
    c->v.s[10] = LD32(c->r[0] + 68u);
    c->v.s[12] = LD32(c->r[0] + 72u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[4] = c->v.f[22] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[12]);
    ST32(c->r[13] + 304u, c->v.s[0]);
    ST32(c->r[13] + 308u, c->v.s[2]);
    ST32(c->r[13] + 312u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
L_bf17d4:;
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[6] = LD32(c->r[13] + 304u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[8] = LD32(c->r[13] + 308u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->v.s[10] = LD32(c->r[13] + 312u);
    c->r[0] = 0x0u;
    c->v.f[21] = c->v.f[8] - c->v.f[2];
    c->v.f[27] = c->v.f[6] - c->v.f[0];
    c->v.f[25] = c->v.f[10] - c->v.f[4];
    c->v.f[20] = c->v.f[21] * c->v.f[21];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[27] * c->v.f[27]);
    ST32(c->r[13] + 288u, c->v.s[27]);
    ST32(c->r[13] + 292u, c->v.s[21]);
    ST32(c->r[13] + 296u, c->v.s[25]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1834; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xbf1830u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bf1834:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[3] & 0x3u;
    c->r[2] = c->r[5];
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[2] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    if (COND_NE) { c->r[1] = c->r[1] ^ 0x80000000u; }
    if (COND_NE) { c->r[2] = c->r[2] ^ 0x80000000u; }
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x80000000u; }
    c->v.s[24] = c->r[1];
    c->v.s[28] = c->r[2];
    c->v.s[19] = c->r[0];
    c->v.f[23] = c->v.f[24] * c->v.f[25];
    c->v.f[29] = c->v.f[28] * c->v.f[21];
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[28] * c->v.f[27]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[19] * c->v.f[25]);
    c->v.f[31] = c->v.f[19] * c->v.f[27];
    c->v.f[31] = c->v.f[31] - (float)(c->v.f[24] * c->v.f[21]);
    c->v.f[2] = c->v.f[23] * c->v.f[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf18a4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf18a4u; f_15efddc(c);
L_bf18a4:;
    c->v.s[6] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf18c8; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[31] = c->v.f[0] * c->v.f[31];
    c->v.f[23] = c->v.f[0] * c->v.f[23];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
L_bf18c8:;
    c->v.f[0] = c->v.f[23] * c->v.f[25];
    c->v.f[2] = c->v.f[31] * c->v.f[27];
    c->v.f[4] = c->v.f[21] * c->v.f[29];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[31] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[25] * c->v.f[29]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[23] * c->v.f[27]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[6]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 272u, c->v.s[29]);
    ST32(c->r[13] + 276u, c->v.s[23]);
    ST32(c->r[13] + 280u, c->v.s[31]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    ST32(c->r[13] + 256u, c->v.s[0]);
    ST32(c->r[13] + 260u, c->v.s[2]);
    ST32(c->r[13] + 264u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    if (COND_LS) { goto L_bf1b20; }
    c->v.f[0] = c->v.f[17] * c->v.f[30];
    c->v.f[29] = c->v.f[17] * c->v.f[26];
    c->v.f[2] = c->v.f[17] * c->v.f[18];
    c->v.f[31] = c->v.f[29] + c->v.f[0];
    c->v.f[23] = c->v.f[31] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[16], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_bf1b34; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 16u, c->v.s[2]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xe4d2a4u;
    c->r[3] = c->r[13] + 0x120u;
    c->v.s[2] = LD32(c->r[5] + 64u);
    c->v.s[4] = LD32(c->r[5] + 68u);
    c->v.s[6] = LD32(c->r[5] + 72u);
    c->v.s[8] = LD32(c->r[5] + 76u);
    c->v.s[0] = LD32(c->r[1] + 76u);
    c->v.s[30] = LD32(c->r[1] + 64u);
    c->v.s[21] = LD32(c->r[1] + 68u);
    c->v.s[26] = LD32(c->r[1] + 72u);
    c->v.s[20] = LD32(c->r[0] + 64u);
    c->v.s[17] = LD32(c->r[0] + 68u);
    c->v.s[18] = LD32(c->r[0] + 72u);
    c->r[0] = 0x0u;
    { uint32_t ea = 0xbf1980u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x110u;
    c->v.f[2] = c->v.f[30] - c->v.f[2];
    c->v.f[4] = c->v.f[21] - c->v.f[4];
    c->v.f[0] = c->v.f[0] - c->v.f[8];
    c->v.f[6] = c->v.f[26] - c->v.f[6];
    c->v.f[8] = c->v.f[28] * c->v.f[4];
    ST32(c->r[13] + 112u, c->v.s[2]);
    ST32(c->r[13] + 116u, c->v.s[4]);
    ST32(c->r[13] + 120u, c->v.s[6]);
    ST32(c->r[13] + 124u, c->v.s[0]);
    c->v.f[0] = c->v.f[24] * c->v.f[6];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[6] = c->v.f[19] * c->v.f[2];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[24] * c->v.f[4]);
    ST32(c->r[13] + 96u, c->v.s[8]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    ST32(c->r[13] + 104u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); }
    c->r[2] = c->r[0] & 0x7u;
    c->r[1] = (c->r[1] >> 12) & 0x7u;
    c->r[0] = c->r[13] + 0xc0u;
    c->r[14] = 0xbf19e4u; f_bf6340(c);
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x60u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); }
    c->r[5] = c->r[13] + 0x80u;
    c->r[2] = c->r[0] & 0x7u;
    c->r[1] = (c->r[1] >> 12) & 0x7u;
    c->r[0] = c->r[5];
    c->r[14] = 0xbf1a0cu; f_bf6340(c);
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xbf1a18u; f_4332ac(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.f[2] = c->v.f[21] - c->v.f[17];
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.f[5] = c->v.f[30] - c->v.f[20];
    c->v.s[3] = LD32(c->r[13] + 48u);
    c->v.s[12] = LD32(c->r[13] + 32u);
    c->v.s[8] = LD32(c->r[13] + 68u);
    c->v.f[7] = c->v.f[26] - c->v.f[18];
    c->v.s[6] = LD32(c->r[13] + 64u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.s[1] = LD32(c->r[13] + 40u);
    c->v.s[4] = LD32(c->r[13] + 72u);
    c->v.s[11] = LD32(c->r[13] + 208u);
    c->v.s[9] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST32(c->r[13] + 28u, c->v.s[29]);
    ST32(c->r[13] + 24u, c->v.s[31]);
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[13] + 216u);
    c->v.f[3] = c->v.f[2] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[13] + 196u);
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[10] = LD32(c->r[13] + 212u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[7] * c->v.f[6]);
    c->v.s[8] = LD32(c->r[13] + 192u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[7] * c->v.f[4]);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.f[20] = c->v.f[0] * c->v.f[10];
    c->v.f[18] = c->v.f[0] * c->v.f[14];
    c->v.f[24] = c->v.f[0] * c->v.f[11];
    c->v.s[10] = LD32(c->r[13] + 228u);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[3] * c->v.f[9]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[2] * c->v.f[0]);
    if (COND_NE) { goto L_bf1c10; }
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1af8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf1af8u; f_15efddc(c);
L_bf1af8:;
    c->v.f[2] = c->v.f[0] - c->v.f[16];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_bf1c28; }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[21] = c->v.s[24];
    c->v.s[31] = c->v.s[20];
    c->v.s[27] = c->v.s[18];
    c->r[0] = c->r[0] & 0xffffff3fu;
    goto L_bf2250;
L_bf1b20:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffff3fu) | ((c->r[1] << 6) & 0xc0u);
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
    goto L_bf1578;
L_bf1b34:;
    c->v.f[0] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1b50; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xbf1b4cu; f_15efddc(c);
    c->v.s[6] = 0x34000000u;
L_bf1b50:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf1b70; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[25] = c->v.f[0] * c->v.f[25];
    c->v.f[21] = c->v.f[0] * c->v.f[21];
    c->v.f[27] = c->v.f[0] * c->v.f[27];
L_bf1b70:;
    c->r[0] = 0x0u;
    ST32(c->r[13] + 288u, c->v.s[27]);
    ST32(c->r[13] + 292u, c->v.s[21]);
    ST32(c->r[13] + 296u, c->v.s[25]);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->v.s[6] = c->v.s[0];
    c->v.s[8] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[29] * c->v.f[27]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[29] * c->v.f[21]);
    ST32(c->r[4] + 400u, c->v.s[6]);
    c->v.s[6] = c->v.s[4];
    ST32(c->r[4] + 404u, c->v.s[8]);
    c->v.s[8] = c->v.s[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[21]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[29] * c->v.f[25]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[31] * c->v.f[21]);
    ST32(c->r[4] + 408u, c->v.s[6]);
    c->v.s[6] = c->v.s[0];
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[27]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[31] * c->v.f[27]);
    ST32(c->r[4] + 416u, c->v.s[6]);
    c->v.s[6] = c->v.s[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[23] * c->v.f[25]);
    ST32(c->r[4] + 420u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[31] * c->v.f[25]);
    ST32(c->r[4] + 424u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 432u, c->v.s[0]);
    ST32(c->r[4] + 436u, c->v.s[2]);
    ST32(c->r[4] + 440u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xffffff3fu) | ((c->r[1] << 6) & 0xc0u);
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
    goto L_bf2660;
L_bf1c10:;
    c->v.s[5] = 0x34000000u;
    c->v.s[21] = c->v.s[24];
    c->v.s[31] = c->v.s[20];
    c->v.s[27] = c->v.s[18];
    goto L_bf2258;
L_bf1c28:;
    c->v.s[6] = 0x34000000u;
    if (COND_LE) { goto L_bf1ccc; }
    c->v.s[4] = LD32(c->r[4] + 112u);
    c->v.s[23] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_bf1c5c; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[23] = c->v.s[0];
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[23] = 0x0u; }
L_bf1c5c:;
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1c84; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf1c80u; f_15efddc(c);
    c->v.s[6] = 0x34000000u;
L_bf1c84:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[30] = c->v.s[24];
    c->v.s[28] = c->v.s[20];
    c->v.s[26] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf1cb0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[18] * c->v.f[0];
    c->v.f[28] = c->v.f[20] * c->v.f[0];
    c->v.f[30] = c->v.f[24] * c->v.f[0];
L_bf1cb0:;
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[17] = LD32(c->r[13] + 272u);
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf1da8; }
    c->v.s[19] = LD32(c->r[13] + 276u);
    c->v.s[21] = LD32(c->r[13] + 280u);
    goto L_bf1dbc;
L_bf1ccc:;
    c->v.s[4] = LD32(c->r[4] + 108u);
    c->v.f[0] = c->v.f[23] - c->v.f[0];
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = 0x3f800000u;
    c->v.s[23] = c->v.s[2];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_bf1d04; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[23] = c->v.s[0];
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[23] = 0x0u; }
L_bf1d04:;
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1d2c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf1d28u; f_15efddc(c);
    c->v.s[6] = 0x34000000u;
L_bf1d2c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[30] = c->v.s[24];
    c->v.s[28] = c->v.s[20];
    c->v.s[26] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf1d58; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[18] * c->v.f[0];
    c->v.f[28] = c->v.f[20] * c->v.f[0];
    c->v.f[30] = c->v.f[24] * c->v.f[0];
L_bf1d58:;
    c->v.s[2] = LD32(c->r[13] + 292u);
    c->v.s[0] = LD32(c->r[13] + 288u);
    c->v.s[4] = LD32(c->r[13] + 296u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1d8c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf1d88u; f_15efddc(c);
    c->v.s[6] = 0x34000000u;
L_bf1d8c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf1e00; }
    c->v.s[21] = LD32(c->r[13] + 288u);
    c->v.s[17] = LD32(c->r[13] + 292u);
    c->v.s[19] = LD32(c->r[13] + 296u);
    goto L_bf1e20;
L_bf1da8:;
    c->v.s[0] = LD32(c->r[13] + 276u);
    c->v.s[2] = LD32(c->r[13] + 280u);
    c->v.s[17] = c->v.s[17] ^ 0x80000000u;
    c->v.s[21] = c->v.s[2] ^ 0x80000000u;
    c->v.s[19] = c->v.s[0] ^ 0x80000000u;
L_bf1dbc:;
    c->v.f[0] = c->v.f[28] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[17]);
    c->v.s[2] = 0xbf7fbe77u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[21]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf1e64; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[2] = fabsf(c->v.f[30]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf1f14; }
    c->r[0] = 0xe47410u;
    { uint32_t ea = 0xbf1df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bf1f50;
L_bf1e00:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 288u);
    c->v.s[4] = LD32(c->r[13] + 292u);
    c->v.s[6] = LD32(c->r[13] + 296u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[19] = c->v.f[0] * c->v.f[6];
    c->v.f[17] = c->v.f[0] * c->v.f[4];
    c->v.f[21] = c->v.f[0] * c->v.f[2];
L_bf1e20:;
    c->v.f[0] = c->v.f[28] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[21]);
    c->v.s[2] = 0xbf7fbe77u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[19]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf1ebc; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[2] = fabsf(c->v.f[30]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf1ff8; }
    c->r[0] = 0xe473acu;
    { uint32_t ea = 0xbf1e5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bf2034;
L_bf1e64:;
    c->v.s[25] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[25];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1e88; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf1e88u; f_15efddc(c);
L_bf1e88:;
    c->v.f[10] = c->v.f[25] / c->v.f[0];
    c->v.f[2] = c->v.f[30] * c->v.f[19];
    c->v.f[6] = c->v.f[26] * c->v.f[17];
    c->v.f[8] = c->v.f[28] * c->v.f[21];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[28] * c->v.f[17]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[21]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[26] * c->v.f[19]);
    c->v.s[4] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[4] = c->v.f[2] * c->v.f[10];
    c->v.f[2] = c->v.f[6] * c->v.f[10];
    c->v.f[6] = c->v.f[8] * c->v.f[10];
    goto L_bf1fb0;
L_bf1ebc:;
    c->v.s[25] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[25];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1ee0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf1ee0u; f_15efddc(c);
L_bf1ee0:;
    c->v.f[10] = c->v.f[25] / c->v.f[0];
    c->v.f[2] = c->v.f[30] * c->v.f[17];
    c->v.f[6] = c->v.f[26] * c->v.f[21];
    c->v.f[8] = c->v.f[28] * c->v.f[19];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[28] * c->v.f[21]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[19]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[26] * c->v.f[17]);
    c->v.s[4] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[4] = c->v.f[2] * c->v.f[10];
    c->v.f[2] = c->v.f[6] * c->v.f[10];
    c->v.f[6] = c->v.f[8] * c->v.f[10];
    goto L_bf2094;
L_bf1f14:;
    c->r[0] = 0xe472dcu;
    c->v.f[2] = fabsf(c->v.f[28]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbf1f28u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe47320u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbf1f38u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bf1f50:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[19] = c->v.f[26] * c->v.f[2];
    c->v.f[17] = c->v.f[28] * c->v.f[0];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[30] * c->v.f[0]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] * c->v.f[4];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf1f98; }
    c->r[14] = 0xbf1f94u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf1f98:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[6] = c->v.f[0] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[4] = c->v.f[30] * c->v.f[6];
    c->v.f[2] = c->v.f[6] * c->v.f[19];
    c->v.f[6] = c->v.f[17] * c->v.f[6];
L_bf1fb0:;
    c->r[0] = 0xe47bc0u;
    c->v.s[5] = 0x0u;
    c->v.s[13] = 0x3ddd0956u;
    c->v.s[7] = 0x3bbfa681u;
    c->v.s[9] = 0xbc80625au;
    c->v.s[15] = 0xbd0dee73u;
    c->v.s[26] = 0x3db056e5u;
    c->v.s[30] = 0xbe31325eu;
    c->v.s[28] = 0x3c687b9cu;
    c->v.s[17] = 0xbe36a584u;
    c->v.s[19] = 0x3f183577u;
    c->v.s[21] = 0xbb8eacddu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0xbf1fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bf20cc;
L_bf1ff8:;
    c->r[0] = 0xe471f8u;
    c->v.f[2] = fabsf(c->v.f[28]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbf200cu + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe4723cu;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbf201cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bf2034:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[19] = c->v.f[26] * c->v.f[2];
    c->v.f[17] = c->v.f[28] * c->v.f[0];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[30] * c->v.f[0]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] * c->v.f[4];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf207c; }
    c->r[14] = 0xbf2078u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf207c:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[6] = c->v.f[0] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[4] = c->v.f[30] * c->v.f[6];
    c->v.f[2] = c->v.f[6] * c->v.f[19];
    c->v.f[6] = c->v.f[17] * c->v.f[6];
L_bf2094:;
    c->r[0] = 0xe47adcu;
    c->v.s[5] = 0x0u;
    c->v.s[13] = 0x3ddd0956u;
    c->v.s[7] = 0x3bbfa681u;
    c->v.s[9] = 0xbc80625au;
    c->v.s[15] = 0xbd0dee73u;
    c->v.s[26] = 0x3db056e5u;
    c->v.s[30] = 0xbe31325eu;
    c->v.s[28] = 0x3c687b9cu;
    c->v.s[17] = 0xbe36a584u;
    c->v.s[19] = 0x3f183577u;
    c->v.s[21] = 0xbb8eacddu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0xbf20d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf20cc:;
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[0] + 12u);
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[2] * c->v.f[10];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[5], c->v.f[1]);
    c->v.s[3] = c->v.s[1] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[11] = COND_GT ? c->v.s[3] : c->v.s[1];
    c->v.s[3] = 0xbc6bd4b8u;
    vfp_cmp_f(c, c->v.f[5], c->v.f[1]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[11] * c->v.f[7]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[11] * c->v.f[15]);
    c->v.s[7] = 0x3d30f1f4u;
    c->v.s[15] = 0x3da2cff9u;
    vfp_mrs_flags(c);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[11] * c->v.f[3]);
    c->v.s[3] = 0x3f800000u;
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[11] * c->v.f[7]);
    c->v.s[7] = 0xbf256968u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[11] * c->v.f[9]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[11] * c->v.f[26]);
    c->v.s[9] = 0x3f107581u;
    c->v.f[26] = c->v.f[23] * c->v.f[23];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[11] * c->v.f[13]);
    c->v.s[13] = 0x3fc91658u;
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[11] * c->v.f[17]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[11] * c->v.f[28]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[11] * c->v.f[19]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[30]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[11] * c->v.f[9]);
    c->v.f[30] = c->v.f[3] - c->v.f[23];
    c->v.s[9] = c->v.s[7];
    c->v.f[11] = c->v.f[11] + c->v.f[3];
    c->v.s[28] = c->v.s[15];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[21]);
    c->v.s[17] = c->v.s[13];
    c->v.f[11] = c->v.f[3] / c->v.f[11];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[26] * c->v.f[28]);
    c->v.f[28] = c->v.f[30] * c->v.f[30];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[28] * c->v.f[21]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[26] * c->v.f[9]);
    c->v.s[9] = 0xbf800000u;
    c->v.s[1] = COND_GT ? c->v.s[9] : c->v.s[3];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[28] * c->v.f[15]);
    c->v.f[15] = c->v.f[23] * c->v.f[17];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[28] * c->v.f[7]);
    c->v.f[5] = c->v.f[11] * c->v.f[15];
    c->v.f[7] = c->v.f[30] * c->v.f[13];
    c->v.f[1] = c->v.f[1] * c->v.f[5];
    c->v.f[5] = c->v.f[11] * c->v.f[7];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[10] = c->v.f[4] + c->v.f[4];
    c->v.f[14] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[6] + c->v.f[6];
    c->v.f[8] = c->v.f[6] * c->v.f[12];
    c->v.f[4] = c->v.f[4] * c->v.f[10];
    c->v.f[1] = c->v.f[2] * c->v.f[14];
    c->v.f[12] = c->v.f[0] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[7] = c->v.f[0] * c->v.f[14];
    c->v.f[9] = c->v.f[6] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[14];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[8] + c->v.f[4];
    c->v.f[4] = c->v.f[1] + c->v.f[4];
    c->v.f[11] = c->v.f[2] + c->v.f[12];
    c->v.f[8] = c->v.f[8] + c->v.f[1];
    c->v.f[1] = c->v.f[6] + c->v.f[0];
    c->v.f[14] = c->v.f[9] - c->v.f[7];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[10] = c->v.f[3] - c->v.f[5];
    c->v.f[4] = c->v.f[3] - c->v.f[4];
    c->v.f[27] = c->v.f[20] * c->v.f[11];
    c->v.f[31] = c->v.f[20] * c->v.f[10];
    c->v.f[21] = c->v.f[24] * c->v.f[4];
    c->v.f[4] = c->v.f[3] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[12];
    c->v.f[6] = c->v.f[9] + c->v.f[7];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[24] * c->v.f[14]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[24] * c->v.f[1]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[20] * c->v.f[0]);
    c->r[0] = (c->r[0] & 0xffffff3fu) | ((c->r[1] << 6) & 0xc0u);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[18] * c->v.f[6]);
L_bf2250:;
    c->v.s[5] = 0x34000000u;
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
L_bf2258:;
    c->v.s[25] = LD32(c->r[13] + 304u);
    c->v.s[23] = LD32(c->r[13] + 308u);
    c->v.s[30] = LD32(c->r[13] + 312u);
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->v.f[28] = c->v.f[23] - c->v.f[31];
    c->v.f[26] = c->v.f[25] - c->v.f[21];
    c->v.f[17] = c->v.f[30] - c->v.f[27];
    c->v.f[24] = c->v.f[28] - c->v.f[2];
    c->v.f[19] = c->v.f[26] - c->v.f[0];
    c->v.f[29] = c->v.f[17] - c->v.f[4];
    c->v.f[20] = c->v.f[24] * c->v.f[24];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[18] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf22b4; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xbf22acu; f_15efddc(c);
    c->v.s[5] = 0x34000000u;
    c->v.s[18] = c->v.s[0];
L_bf22b4:;
    c->v.s[0] = LD32(c->r[13] + 24u);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf23ac; }
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.s[4] = LD32(c->r[13] + 16u);
    c->v.s[0] = c->v.s[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[4] = c->v.f[16] + c->v.f[16];
    c->v.f[18] = c->v.f[0] / c->v.f[4];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2300; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf22fcu; f_15efddc(c);
    c->v.s[5] = 0x34000000u;
L_bf2300:;
    c->v.f[1] = c->v.f[18] / c->v.f[16];
    c->v.s[2] = LD32(c->r[4] + 384u);
    c->v.s[10] = LD32(c->r[13] + 288u);
    c->v.s[6] = LD32(c->r[4] + 388u);
    c->v.s[12] = LD32(c->r[13] + 292u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->v.s[14] = LD32(c->r[13] + 296u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
    c->v.s[8] = c->v.s[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.s[10] = c->v.s[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.s[12] = c->v.s[4];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[14]);
    ST32(c->r[4] + 416u, c->v.s[8]);
    ST32(c->r[4] + 420u, c->v.s[10]);
    ST32(c->r[4] + 424u, c->v.s[12]);
    c->v.s[1] = LD32(c->r[13] + 276u);
    c->v.s[14] = LD32(c->r[13] + 280u);
    c->v.s[3] = LD32(c->r[13] + 272u);
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[24] = LD32(c->r[13] + 28u);
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    c->v.f[1] = c->v.f[0] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[3];
    if (COND_NE) { goto L_bf24e0; }
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[10] = c->v.f[10] - c->v.f[1];
    c->v.f[8] = c->v.f[12] - c->v.f[14];
    goto L_bf24ec;
L_bf23ac:;
    c->v.s[0] = LD32(c->r[13] + 28u);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.f[16] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = fabsf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_bf257c; }
    c->v.s[2] = LD32(c->r[13] + 256u);
    c->v.s[0] = LD32(c->r[13] + 260u);
    c->v.s[4] = LD32(c->r[13] + 264u);
    c->v.f[16] = c->v.f[29] * c->v.f[2];
    c->v.f[20] = c->v.f[24] * c->v.f[4];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[29] * c->v.f[0]);
    c->v.f[21] = c->v.f[19] * c->v.f[0];
    c->v.f[21] = c->v.f[21] - (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2414; }
    c->r[14] = 0xbf240cu; f_15efddc(c);
    c->v.s[5] = 0x34000000u;
    c->v.s[2] = c->v.s[0];
L_bf2414:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[5]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf2434; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[21] = c->v.f[0] * c->v.f[21];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
L_bf2434:;
    c->v.s[0] = LD32(c->r[13] + 28u);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.s[0] = c->v.s[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[4] = c->v.f[18] + c->v.f[18];
    c->v.f[27] = c->v.f[0] / c->v.f[4];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2470; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf2470u; f_15efddc(c);
L_bf2470:;
    c->v.f[8] = c->v.f[27] / c->v.f[18];
    c->v.s[6] = LD32(c->r[4] + 384u);
    c->v.s[4] = LD32(c->r[4] + 388u);
    c->v.s[2] = LD32(c->r[4] + 392u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    c->v.f[10] = c->v.f[16] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[19] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[8]);
    c->v.f[8] = c->v.f[21] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[4] + 400u, c->v.s[6]);
    ST32(c->r[4] + 404u, c->v.s[4]);
    ST32(c->r[4] + 408u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x62u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf2624; }
    c->v.f[6] = c->v.f[0] + c->v.f[6];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[0] = c->v.f[8] + c->v.f[2];
    goto L_bf2630;
L_bf24e0:;
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[10] = c->v.f[1] + c->v.f[10];
    c->v.f[8] = c->v.f[14] + c->v.f[12];
L_bf24ec:;
    c->v.f[16] = c->v.f[10] - c->v.f[6];
    c->v.f[20] = c->v.f[0] - c->v.f[2];
    c->v.f[18] = c->v.f[8] - c->v.f[4];
    ST32(c->r[4] + 416u, c->v.s[0]);
    ST32(c->r[4] + 420u, c->v.s[10]);
    ST32(c->r[4] + 424u, c->v.s[8]);
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf252c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf2528u; f_15efddc(c);
    c->v.s[5] = 0x34000000u;
L_bf252c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[5]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf254c; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
L_bf254c:;
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[16]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[18]);
    ST32(c->r[4] + 400u, c->v.s[0]);
    ST32(c->r[4] + 404u, c->v.s[2]);
    ST32(c->r[4] + 408u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    goto L_bf2650;
L_bf257c:;
    c->v.f[0] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2598; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xbf2594u; f_15efddc(c);
    c->v.s[5] = 0x34000000u;
L_bf2598:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[5]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf25b8; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
L_bf25b8:;
    c->v.s[0] = LD32(c->r[4] + 384u);
    c->v.s[10] = LD32(c->r[13] + 28u);
    c->v.s[2] = LD32(c->r[4] + 388u);
    c->v.s[4] = LD32(c->r[4] + 392u);
    c->r[0] = 0x0u;
    c->v.s[6] = c->v.s[0];
    c->v.s[8] = c->v.s[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[16] * c->v.f[19]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[24]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[10] * c->v.f[19]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[24]);
    ST32(c->r[4] + 400u, c->v.s[6]);
    c->v.s[6] = c->v.s[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[29]);
    ST32(c->r[4] + 404u, c->v.s[8]);
    c->v.f[0] = c->v.f[21] + c->v.f[0];
    c->v.f[2] = c->v.f[31] + c->v.f[2];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[10] * c->v.f[29]);
    ST32(c->r[4] + 408u, c->v.s[6]);
    c->v.f[4] = c->v.f[27] + c->v.f[4];
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 416u, c->v.s[0]);
    ST32(c->r[4] + 420u, c->v.s[2]);
    ST32(c->r[4] + 424u, c->v.s[4]);
    goto L_bf2660;
L_bf2624:;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] - c->v.f[8];
L_bf2630:;
    c->r[0] = 0x0u;
    ST32(c->r[4] + 400u, c->v.s[6]);
    ST32(c->r[4] + 404u, c->v.s[4]);
    ST32(c->r[4] + 408u, c->v.s[0]);
    ST32(c->r[4] + 416u, c->v.s[26]);
    ST32(c->r[4] + 420u, c->v.s[28]);
    ST32(c->r[4] + 424u, c->v.s[17]);
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
L_bf2650:;
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 432u, c->v.s[25]);
    ST32(c->r[4] + 436u, c->v.s[23]);
    ST32(c->r[4] + 440u, c->v.s[30]);
L_bf2660:;
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf269c; }
    { uint32_t ea = c->r[4] + 0x2b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2acu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] & 0x1u;
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { goto L_bf269c; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bf2694; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_bf2694:;
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbf269cu; rt_dispatch(c);
L_bf269c:;
    c->r[2] = c->r[13] + 0x140u;
    c->r[3] = c->r[13] + 0x100u;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0xbf26b0u; f_bf2c18(c);
    c->v.s[0] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[22], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf1578; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf1578; }
    c->r[2] = c->r[13] + 0x140u;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0xbf26dcu; f_bf3f30(c);
    goto L_bf1578;
}
void f_bf2708(Cpu *restrict c) {
    FN_ENTER(0xbf2708u);
L_bf2708:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0xf0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffbffu;
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf2744; }
    c->v.s[0] = LD32(c->r[0] + 96u);
    goto L_bf2748;
L_bf2744:;
    c->v.s[0] = 0x3f800000u;
L_bf2748:;
    c->v.s[2] = LD32(c->r[4] + 120u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[4] + 128u);
    c->v.s[8] = LD32(c->r[4] + 132u);
    c->v.s[4] = LD32(c->r[4] + 124u);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[2]); }
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    c->v.f[18] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[16];
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    ST32(c->r[13] + 180u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 196u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x294u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bf2804; }
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[4] + 664u);
    c->r[1] = 0xe46a44u;
    { uint32_t ea = 0xbf27c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    ST32(c->r[4] + 656u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[0]); }
    if (COND_LS) { goto L_bf2924; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x294u; ST32(ea, c->r[0]); } }
    goto L_bf2bdc;
L_bf2804:;
    c->r[6] = c->r[13] + 0x10u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbf2810u; f_e1c3b8(c);
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_bf2940; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_bf299c; }
    c->r[0] = 0xe46ad0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4] + 0x90u;
    c->r[6] = c->r[4] + 0x1e0u;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[6];
    { uint32_t ea = 0xbf2850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf2854u; f_e33e58(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf2bd4; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbf2868u; f_e1b778(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x70u;
    c->r[3] = c->r[4] + 0x240u;
    { uint32_t ea = c->r[4] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x228u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x59u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x229u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x250u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x254u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x258u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x260u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x264u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x268u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x26cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x274u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x270u; ST32(ea, c->r[0]); }
    goto L_bf2b6c;
L_bf2924:;
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    c->r[1] = 0x0u;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x290u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x294u; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 4u, c->v.s[0]);
    goto L_bf2bdc;
L_bf2940:;
    c->r[0] = 0xe469c8u;
    { uint32_t ea = c->r[4] + 0x2a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[4] + 0x90u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbf2958u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[4]; }
    c->r[8] = c->r[1] + 0x1d0u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    c->r[14] = 0xbf2974u; f_e33d80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf2b6c; }
    { uint32_t ea = c->r[4] + 0x2a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf29cc; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf29e0; }
    c->v.s[0] = LD32(c->r[0] + 96u);
    goto L_bf29e4;
L_bf299c:;
    c->r[0] = 0xe46964u;
    c->r[1] = c->r[4] + 0x90u;
    c->r[3] = c->r[13] + 0x10u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb0u;
    { uint32_t ea = 0xbf29bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf29c0u; f_e33cac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf2b6c; }
    goto L_bf2bd4;
L_bf29cc:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bf2a90; }
    c->v.s[0] = LD32(c->r[3] + 96u);
    goto L_bf2a94;
L_bf29e0:;
    c->v.s[0] = 0x3f800000u;
L_bf29e4:;
    { uint32_t ea = c->r[1] + 0x2b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[1] + 0x2b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[2], 0xfeu);
    if (COND_HI) { goto L_bf2a38; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bf2a38; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf2a38; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[9] = v; }
L_bf2a38:;
    c->r[0] = 0x5u;
    c->v.s[2] = LD32(c->r[1] + 356u);
    c->r[2] = c->r[1] + 0x1d0u;
    c->r[3] = c->r[1] + 0x90u;
    c->r[1] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4e128u;
    { uint32_t ea = 0xbf2a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4f2e8u;
    { uint32_t ea = 0xbf2a70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe46890u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 236u, c->v.s[0]);
    { uint32_t ea = 0xbf2a90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bf2b3c;
L_bf2a90:;
    c->v.s[0] = 0x3f800000u;
L_bf2a94:;
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x400u;
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0xfeu);
    if (COND_HI) { goto L_bf2ae8; }
    { uint32_t ea = c->r[3] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_bf2ae8; }
    { uint32_t ea = c->r[3] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf2ae8; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bf2ae8:;
    c->r[0] = 0x5u;
    c->v.s[2] = LD32(c->r[4] + 356u);
    c->r[1] = c->r[13] + 0xd0u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4e07cu;
    { uint32_t ea = 0xbf2b08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4f23cu;
    { uint32_t ea = 0xbf2b1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe467e0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0x1d0u;
    ST32(c->r[13] + 236u, c->v.s[0]);
    { uint32_t ea = 0xbf2b40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf2b3c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf2b44u; f_e32e98(c);
    c->r[0] = 0xe467c4u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbf2b5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    c->r[14] = 0xbf2b64u; f_e33d80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf2bd4; }
L_bf2b6c:;
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[13] + 132u);
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    ST32(c->r[4] + 656u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[0]); }
    if (COND_LS) { goto L_bf2bc0; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    if (COND_MI) { { uint32_t ea = c->r[4] + 0x294u; ST32(ea, c->r[0]); } }
    goto L_bf2bd4;
L_bf2bc0:;
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x290u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x294u; ST32(ea, c->r[1]); }
    ST32(c->r[5] + 4u, c->v.s[0]);
L_bf2bd4:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0xbf2bdcu; f_e1bb28(c);
L_bf2bdc:;
    { uint32_t ea = c->r[4] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bf2c18(Cpu *restrict c) {
    FN_ENTER(0xbf2c18u);
L_bf2c18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xe8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf2cd4; }
    c->v.s[16] = LD32(c->r[1] + 96u);
    goto L_bf2cd8;
L_bf2cd4:;
    c->v.s[16] = 0x3f800000u;
L_bf2cd8:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf2da0; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bf31f4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[8] + 0x180u;
    c->r[10] = c->r[13] + 0x50u;
    c->r[4] = c->r[13] + 0xd0u;
L_bf2d20:;
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    ST32(c->r[13] + 208u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] - c->v.f[2];
    ST32(c->r[13] + 212u, c->v.s[8]);
    ST32(c->r[13] + 216u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x2b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x62u; uint32_t v = LD16(ea); c->r[1] = v; }
    ST32(c->r[13] + 80u, c->v.s[4]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    ST32(c->r[13] + 88u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
    c->r[3] = c->r[4];
    c->r[0] = c->r[0] + 0x10u;
    c->r[1] = (c->r[1] >> 12) & 0x7u;
    c->r[2] = c->r[2] & 0x7u;
    c->r[14] = 0xbf2d90u; f_bf6340(c);
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[5] = c->r[5] + 0x10u;
    if (COND_NE) { goto L_bf2d20; }
    goto L_bf31f4;
L_bf2da0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bf31f4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = 0x3f800000u;
    c->v.s[22] = 0x34000000u;
    c->v.s[24] = 0xbf7fbe77u;
    c->v.s[26] = 0x3c23d70au;
    c->v.s[28] = 0xb33bbd2eu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[30] = 0x3f000000u;
    c->r[9] = 0x0u;
    c->v.f[20] = c->v.f[18] / c->v.f[16];
    c->r[5] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x198u;
    c->r[0] = 0xe46420u;
    { uint32_t ea = 0xbf2de8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe46400u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xbf2e04u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xe4644cu;
    { uint32_t ea = 0xbf2e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_bf2e08:;
    c->v.s[0] = LD32(c->r[8] - 20u);
    c->v.s[8] = LD32(c->r[8] - 4u);
    c->v.s[2] = LD32(c->r[8] - 16u);
    c->v.s[10] = LD32(c->r[8]);
    c->v.s[4] = LD32(c->r[8] - 24u);
    c->v.s[6] = LD32(c->r[8] - 8u);
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    ST32(c->r[13] + 208u, c->v.s[4]);
    ST32(c->r[13] + 212u, c->v.s[0]);
    ST32(c->r[13] + 216u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] - 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[6] = LD32(c->r[1] + 64u);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[8] = LD32(c->r[1] + 68u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.s[10] = LD32(c->r[1] + 72u);
    c->v.f[17] = c->v.f[8] - c->v.f[2];
    c->v.f[21] = c->v.f[6] - c->v.f[0];
    c->v.f[19] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2e88; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf2e88u; f_15efddc(c);
L_bf2e88:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf2ea4; }
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_bf2ea4:;
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2ed4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf2ed4u; f_15efddc(c);
L_bf2ed4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf2ef0; }
    c->v.s[27] = LD32(c->r[13] + 208u);
    c->v.s[23] = LD32(c->r[13] + 212u);
    c->v.s[25] = LD32(c->r[13] + 216u);
    goto L_bf2f0c;
L_bf2ef0:;
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.f[25] = c->v.f[0] * c->v.f[6];
    c->v.f[23] = c->v.f[0] * c->v.f[4];
    c->v.f[27] = c->v.f[0] * c->v.f[2];
L_bf2f0c:;
    c->v.f[0] = c->v.f[17] * c->v.f[23];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[27]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[25]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf2fdc; }
    c->v.f[0] = fabsf(c->v.f[21]);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf2f6c; }
    c->v.f[0] = fabsf(c->v.f[17]);
    c->r[0] = c->r[10];
    c->r[1] = c->r[10] + 0x8u;
    c->r[2] = c->r[10] + 0x4u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    if (COND_MI) { c->r[0] = c->r[4]; }
    if (COND_MI) { c->r[1] = c->r[4] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[4] + 0x4u; }
L_bf2f6c:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[25] = c->v.f[19] * c->v.f[2];
    c->v.f[23] = c->v.f[17] * c->v.f[0];
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[21] = c->v.f[21] * c->v.f[4];
    c->v.f[21] = c->v.f[21] - (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2fb4; }
    c->r[14] = 0xbf2fb0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf2fb4:;
    c->v.f[0] = c->v.f[18] / c->v.f[2];
    c->v.f[17] = c->v.f[21] * c->v.f[0];
    c->v.f[21] = c->v.f[23] * c->v.f[0];
    c->v.f[19] = c->v.f[0] * c->v.f[25];
    c->v.s[23] = c->v.s[28];
    goto L_bf3028;
L_bf2fdc:;
    c->v.f[0] = c->v.f[0] + c->v.f[18];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf2ffc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf2ffcu; f_15efddc(c);
L_bf2ffc:;
    c->v.f[8] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[21] * c->v.f[23];
    c->v.f[4] = c->v.f[19] * c->v.f[27];
    c->v.f[6] = c->v.f[17] * c->v.f[25];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[17] * c->v.f[27]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[19] * c->v.f[23]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[21] * c->v.f[25]);
    c->v.f[23] = c->v.f[0] * c->v.f[30];
    c->v.f[17] = c->v.f[2] * c->v.f[8];
    c->v.f[19] = c->v.f[4] * c->v.f[8];
    c->v.f[21] = c->v.f[6] * c->v.f[8];
L_bf3028:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf30d0; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 28u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 44u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 44u, c->v.s[0]);
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 52u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0] + 60u, c->v.s[0]);
L_bf30d0:;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0xbf30e0u; f_272ea8(c);
    c->v.s[2] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 88u);
    c->v.s[6] = LD32(c->r[13] + 92u);
    c->v.s[0] = LD32(c->r[13] + 80u);
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x4u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->v.f[8] = c->v.f[23] * c->v.f[4];
    c->v.f[10] = c->v.f[23] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[17] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[19] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[12] = c->v.f[23] * c->v.f[6];
    c->v.f[14] = c->v.f[23] * c->v.f[0];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[21] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[0] = c->v.f[8] + c->v.f[8];
    c->v.f[6] = c->v.f[10] + c->v.f[10];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    c->v.f[1] = c->v.f[10] * c->v.f[6];
    c->v.f[3] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[12] * c->v.f[0];
    c->v.f[5] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[1] + c->v.f[8];
    c->v.f[7] = c->v.f[3] + c->v.f[4];
    c->v.f[9] = c->v.f[5] - c->v.f[6];
    c->v.f[4] = c->v.f[3] - c->v.f[4];
    c->v.f[2] = c->v.f[18] - c->v.f[2];
    ST32(c->r[0] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[14] + c->v.f[14];
    ST32(c->r[0] + 20u, c->v.s[7]);
    ST32(c->r[0] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    ST32(c->r[0] + 32u, c->v.s[4]);
    c->v.f[14] = c->v.f[14] * c->v.f[2];
    c->v.f[2] = c->v.f[12] * c->v.f[2];
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    c->v.f[4] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[8] = c->v.f[18] - c->v.f[8];
    ST32(c->r[0] + 36u, c->v.s[8]);
    ST32(c->r[0] + 40u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] + c->v.f[5];
    c->v.f[6] = c->v.f[14] + c->v.f[1];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[9]); }
    c->v.f[2] = c->v.f[18] - c->v.f[6];
    ST32(c->r[0] + 48u, c->v.s[4]);
    ST32(c->r[0] + 52u, c->v.s[0]);
    ST32(c->r[0] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] - 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x10u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_bf2e08; }
L_bf31f4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1800u;
    (void)f_subs(c, c->r[0], 0x800u);
    if (COND_NE) { goto L_bf339c; }
    c->r[0] = c->r[5];
    c->v.s[18] = 0x3f800000u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->v.s[2] = LD32(c->r[1] + 100u);
    c->v.s[4] = LD32(c->r[1] + 104u);
    c->v.s[0] = LD32(c->r[1] + 96u);
    c->v.s[6] = LD32(c->r[1] + 108u);
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[18] - c->v.f[14];
    ST32(c->r[1] + 16u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] + c->v.f[0];
    ST32(c->r[1] + 20u, c->v.s[7]);
    ST32(c->r[1] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    ST32(c->r[1] + 32u, c->v.s[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[18] - c->v.f[4];
    c->v.f[0] = c->v.f[18] - c->v.f[0];
    ST32(c->r[1] + 36u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    ST32(c->r[1] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    ST32(c->r[1] + 48u, c->v.s[4]);
    ST32(c->r[1] + 52u, c->v.s[2]);
    ST32(c->r[1] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[1] = c->r[1] + 0x10u;
    c->r[14] = 0xbf32f4u; f_21ebe8(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf339c; }
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 28u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 44u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 44u, c->v.s[0]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 52u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 60u, c->v.s[0]);
L_bf339c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x63u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_bf33e4; }
    c->r[1] = c->r[4] + (c->r[6] << 4);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x3f800000u;
    { uint32_t ea = c->r[1] + 0x180u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x184u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x188u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[0] = 0x0u;
    goto L_bf3d8c;
L_bf33e4:;
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[2] = c->r[1] & 0x18000u;
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_NE) { goto L_bf340c; }
    c->v.s[18] = LD32(c->r[4] + 668u);
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf3448; }
    goto L_bf3450;
L_bf340c:;
    c->v.s[18] = 0x3f800000u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_bf343c; }
    c->v.s[0] = LD32(c->r[4] + 124u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf343c; }
    c->v.s[2] = LD32(c->r[4] + 656u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.s[4] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[18] = c->v.f[4] - c->v.f[0];
L_bf343c:;
    ST32(c->r[4] + 668u, c->v.s[18]);
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf3450; }
L_bf3448:;
    c->v.s[0] = LD32(c->r[4] + 68u);
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_bf3450:;
    c->r[2] = (c->r[1] >> 13) & 0x3u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_bf34d4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_bf3538; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bf3d8c; }
    c->v.s[20] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[18], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_bf3750; }
    c->r[2] = c->r[4] + (c->r[6] << 4);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x180u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x184u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x188u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0x1c0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 3) & 0x7u;
    c->r[2] = (c->r[7] >> 3) & 0x7u;
    c->r[14] = 0xbf34d0u; f_bf6340(c);
    goto L_bf3d88;
L_bf34d4:;
    c->r[0] = 0xe45d18u;
    c->v.s[8] = LD32(c->r[4] + 448u);
    c->v.s[6] = LD32(c->r[4] + 452u);
    c->v.s[10] = LD32(c->r[4] + 456u);
    { uint32_t ea = 0xbf34ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[8] = 0xbf7fbe77u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf3678; }
    c->v.s[6] = 0x3c23d70au;
    c->v.f[8] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf37c8; }
    c->r[0] = 0xe45cd8u;
    { uint32_t ea = 0xbf3530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bf3804;
L_bf3538:;
    c->v.s[20] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf35f4; }
    c->v.f[2] = c->v.f[20] / c->v.f[16];
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 28u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 44u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 44u, c->v.s[0]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 52u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 60u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | (c->r[0] << 16);
L_bf35f4:;
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x30u;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[2] = LD32(c->r[4] + 448u);
    c->v.s[0] = LD32(c->r[4] + 452u);
    c->v.s[4] = LD32(c->r[4] + 456u);
    c->r[0] = c->r[0] & (c->r[1] << 1);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x80000000u; }
    c->v.s[26] = c->r[0];
    if (COND_NE) { c->r[3] = c->r[3] ^ 0x80000000u; }
    if (COND_NE) { c->r[2] = c->r[2] ^ 0x80000000u; }
    c->v.s[22] = c->r[3];
    c->v.s[24] = c->r[2];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.s[2] = 0xbf7fbe77u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf36f0; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[2] = fabsf(c->v.f[26]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf3b04; }
    c->r[0] = 0xe45b98u;
    { uint32_t ea = 0xbf3670u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bf3b40;
L_bf3678:;
    c->v.s[20] = 0x3f800000u;
    c->v.f[0] = c->v.f[6] + c->v.f[20];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf369c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf369cu; f_15efddc(c);
L_bf369c:;
    c->r[0] = 0xe45b44u;
    c->v.f[7] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[4] + 448u);
    c->v.s[4] = LD32(c->r[4] + 452u);
    c->v.s[6] = LD32(c->r[4] + 456u);
    c->v.s[5] = 0x3f000000u;
    c->v.f[28] = c->v.f[0] * c->v.f[5];
    { uint32_t ea = 0xbf36c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.f[14] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[12] * c->v.f[2];
    c->v.f[3] = c->v.f[10] * c->v.f[6];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[22] = c->v.f[7] * c->v.f[14];
    c->v.f[24] = c->v.f[7] * c->v.f[1];
    c->v.f[26] = c->v.f[7] * c->v.f[3];
    goto L_bf3864;
L_bf36f0:;
    c->v.f[0] = c->v.f[0] + c->v.f[20];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf3710; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf3710u; f_15efddc(c);
L_bf3710:;
    c->v.f[1] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[4] + 448u);
    c->v.s[4] = LD32(c->r[4] + 452u);
    c->v.s[6] = LD32(c->r[4] + 456u);
    c->v.s[14] = 0x3f000000u;
    c->v.f[8] = c->v.f[26] * c->v.f[4];
    c->v.f[10] = c->v.f[24] * c->v.f[2];
    c->v.f[12] = c->v.f[22] * c->v.f[6];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[22] = c->v.f[0] * c->v.f[14];
    c->v.f[24] = c->v.f[1] * c->v.f[8];
    c->v.f[26] = c->v.f[1] * c->v.f[10];
    c->v.f[28] = c->v.f[1] * c->v.f[12];
    goto L_bf3b9c;
L_bf3750:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[13] + 0x50u;
    c->r[3] = c->r[4] + 0x1c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0xe4b4b4u;
    { uint32_t ea = 0xbf3770u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 3) & 0x7u;
    c->r[2] = (c->r[0] >> 3) & 0x7u;
    c->r[0] = c->r[7];
    c->r[14] = 0xbf3780u; f_bf6340(c);
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[7];
    c->r[14] = 0xbf378cu; f_272ea8(c);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xbf379cu; f_272ea8(c);
    c->v.s[14] = LD32(c->r[13] + 64u);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->v.s[2] = LD32(c->r[13] + 76u);
    c->v.s[1] = LD32(c->r[13] + 48u);
    c->v.s[12] = LD32(c->r[13] + 52u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.s[4] = LD32(c->r[13] + 60u);
    goto L_bf39a4;
L_bf37c8:;
    c->r[0] = 0xe45a28u;
    c->v.f[8] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    { uint32_t ea = 0xbf37dcu + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe45a6cu;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    { uint32_t ea = 0xbf37ecu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bf3804:;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[2]);
    c->v.f[24] = c->v.f[4] * c->v.f[6];
    c->v.f[20] = c->v.f[2] * c->v.f[8];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[22] = c->v.f[0] * c->v.f[10];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf384c; }
    c->r[14] = 0xbf3848u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf384c:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[28] = 0xb33bbd2eu;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[26] = c->v.f[20] * c->v.f[0];
L_bf3864:;
    c->v.s[20] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf3908; }
    c->v.f[2] = c->v.f[20] / c->v.f[16];
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 148u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 148u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 152u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 152u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 156u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 164u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 164u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 168u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 168u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 172u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 172u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 180u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 184u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 184u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 188u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 188u, c->v.s[0]);
L_bf3908:;
    c->r[0] = c->r[13] + 0x50u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0xbf3914u; f_272ea8(c);
    c->v.s[6] = LD32(c->r[13] + 92u);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->v.s[2] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 88u);
    c->v.f[8] = c->v.f[26] * c->v.f[6];
    c->v.f[10] = c->v.f[24] * c->v.f[6];
    c->v.f[12] = c->v.f[22] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[6] = c->v.f[28] * c->v.f[6];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[22] * c->v.f[4]);
    ST32(c->r[13] + 80u, c->v.s[8]);
    ST32(c->r[13] + 84u, c->v.s[10]);
    ST32(c->r[13] + 88u, c->v.s[12]);
    ST32(c->r[13] + 92u, c->v.s[6]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xbf3984u; f_272ea8(c);
    c->v.s[14] = LD32(c->r[13] + 80u);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->v.s[6] = LD32(c->r[13] + 88u);
    c->v.s[2] = LD32(c->r[13] + 92u);
    c->v.s[1] = LD32(c->r[13] + 64u);
    c->v.s[12] = LD32(c->r[13] + 68u);
    c->v.s[10] = LD32(c->r[13] + 72u);
    c->v.s[4] = LD32(c->r[13] + 76u);
L_bf39a4:;
    c->v.f[3] = c->v.f[12] * c->v.f[0];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[14]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[20] - c->v.f[18];
    c->v.f[14] = c->v.f[18] * c->v.f[14];
    c->v.f[1] = c->v.f[8] * c->v.f[1];
    vfp_cmp_f(c, c->v.f[3], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf3a1c; }
    c->v.f[22] = c->v.f[8] * c->v.f[12];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[26] = c->v.f[8] * c->v.f[10];
    c->v.f[24] = c->v.f[1] - c->v.f[14];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[28] = c->v.f[8] * c->v.f[4];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf3a10; }
    c->r[14] = 0xbf3a0cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf3a10:;
    c->v.f[4] = c->v.f[20] / c->v.f[2];
    c->v.f[0] = c->v.f[28] * c->v.f[4];
    goto L_bf3a68;
L_bf3a1c:;
    c->v.f[22] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[26] = c->v.f[18] * c->v.f[6];
    c->v.f[24] = c->v.f[1] + c->v.f[14];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[18] = c->v.f[18] * c->v.f[2];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf3a60; }
    c->r[14] = 0xbf3a5cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf3a60:;
    c->v.f[4] = c->v.f[20] / c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[4];
L_bf3a68:;
    c->v.f[6] = c->v.f[26] * c->v.f[4];
    c->v.f[2] = c->v.f[22] * c->v.f[4];
    c->v.f[4] = c->v.f[24] * c->v.f[4];
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[6];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[20] - c->v.f[14];
    ST32(c->r[0] + 16u, c->v.s[14]);
    c->v.f[14] = c->v.f[4] + c->v.f[4];
    ST32(c->r[0] + 20u, c->v.s[7]);
    ST32(c->r[0] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 32u, c->v.s[1]);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[6] = c->v.f[20] - c->v.f[6];
    c->v.f[2] = c->v.f[20] - c->v.f[4];
    ST32(c->r[0] + 36u, c->v.s[6]);
    c->v.f[6] = c->v.f[5] + c->v.f[10];
    ST32(c->r[0] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 48u, c->v.s[6]);
    goto L_bf3d58;
L_bf3b04:;
    c->r[0] = 0xe456ecu;
    c->v.f[2] = fabsf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbf3b18u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe45730u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xbf3b28u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bf3b40:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[30] = c->v.f[24] * c->v.f[2];
    c->v.f[28] = c->v.f[22] * c->v.f[0];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] * c->v.f[4];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf3b88; }
    c->r[14] = 0xbf3b84u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf3b88:;
    c->v.f[0] = c->v.f[20] / c->v.f[2];
    c->v.s[22] = 0xb33bbd2eu;
    c->v.f[24] = c->v.f[26] * c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[30];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_bf3b9c:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf3c6c; }
    c->r[0] = 0xe45ff0u;
    c->v.f[4] = c->v.f[20] - c->v.f[18];
    c->v.f[6] = c->v.f[18] * c->v.f[28];
    { uint32_t ea = 0xbf3bbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[0] + 12u);
    c->v.f[12] = c->v.f[26] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[28] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[10] = c->v.f[4] * c->v.f[10];
    c->v.f[28] = c->v.f[4] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf3c18; }
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[18] * c->v.f[26]);
    c->v.f[30] = c->v.f[10] - c->v.f[6];
    c->v.f[26] = c->v.f[4] * c->v.f[0];
    c->v.f[17] = c->v.f[4] * c->v.f[2];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[18] * c->v.f[24]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[18] * c->v.f[22]);
    goto L_bf3c30;
L_bf3c18:;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.f[30] = c->v.f[6] + c->v.f[10];
    c->v.f[26] = c->v.f[4] * c->v.f[0];
    c->v.f[17] = c->v.f[4] * c->v.f[2];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[18] * c->v.f[24]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[18] * c->v.f[22]);
L_bf3c30:;
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf3c58; }
    c->r[14] = 0xbf3c54u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf3c58:;
    c->v.f[0] = c->v.f[20] / c->v.f[2];
    c->v.f[24] = c->v.f[26] * c->v.f[0];
    c->v.f[26] = c->v.f[28] * c->v.f[0];
    c->v.f[22] = c->v.f[17] * c->v.f[0];
    c->v.f[28] = c->v.f[30] * c->v.f[0];
L_bf3c6c:;
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0xbf3c7cu; f_272ea8(c);
    c->v.s[6] = LD32(c->r[13] + 92u);
    c->v.s[2] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 88u);
    c->v.s[0] = LD32(c->r[13] + 80u);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->v.f[8] = c->v.f[24] * c->v.f[6];
    c->v.f[10] = c->v.f[26] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[12] = c->v.f[22] * c->v.f[6];
    c->v.f[6] = c->v.f[28] * c->v.f[6];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[28] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[26] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[0] = c->v.f[8] + c->v.f[8];
    c->v.f[14] = c->v.f[10] + c->v.f[10];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    c->v.f[1] = c->v.f[10] * c->v.f[14];
    c->v.f[3] = c->v.f[6] * c->v.f[14];
    c->v.f[4] = c->v.f[12] * c->v.f[0];
    c->v.f[5] = c->v.f[6] * c->v.f[0];
    c->v.f[14] = c->v.f[12] * c->v.f[14];
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[1] + c->v.f[8];
    c->v.f[7] = c->v.f[3] + c->v.f[4];
    c->v.f[9] = c->v.f[5] - c->v.f[14];
    c->v.f[4] = c->v.f[3] - c->v.f[4];
    c->v.f[2] = c->v.f[20] - c->v.f[2];
    ST32(c->r[0] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] + c->v.f[6];
    ST32(c->r[0] + 20u, c->v.s[7]);
    ST32(c->r[0] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 32u, c->v.s[4]);
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    c->v.f[2] = c->v.f[12] * c->v.f[2];
    c->v.f[8] = c->v.f[6] + c->v.f[8];
    c->v.f[4] = c->v.f[0] + c->v.f[2];
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[8] = c->v.f[20] - c->v.f[8];
    c->v.f[2] = c->v.f[20] - c->v.f[6];
    ST32(c->r[0] + 36u, c->v.s[8]);
    ST32(c->r[0] + 40u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[14];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 48u, c->v.s[4]);
L_bf3d58:;
    ST32(c->r[0] + 52u, c->v.s[0]);
    ST32(c->r[0] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + (c->r[6] << 4);
    { uint32_t ea = c->r[1] + 0x180u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x188u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_bf3d88:;
    c->r[0] = 0x1u;
L_bf3d8c:;
    c->v.s[0] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf3ef4; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bf3e50; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
L_bf3dac:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->v.s[0] = LD32(c->r[3] + 16u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 20u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 24u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 24u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 28u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[3] + 32u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 36u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 40u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 44u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 44u, c->v.s[0]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[3] = v; }
    c->v.s[0] = LD32(c->r[3] + 48u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 52u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 56u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 60u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[3] + 60u, c->v.s[0]);
    if (COND_NE) { goto L_bf3dac; }
L_bf3e50:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf3ef4; }
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 28u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 44u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 44u, c->v.s[0]);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 52u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0] + 60u, c->v.s[0]);
L_bf3ef4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bf3f30(Cpu *restrict c) {
    FN_ENTER(0xbf3f30u);
L_bf3f30:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0x90u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = LD32(c->r[6] + 68u);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf3f6c; }
    c->v.s[20] = LD32(c->r[0] + 96u);
    goto L_bf3f70;
L_bf3f6c:;
    c->v.s[20] = 0x3f800000u;
L_bf3f70:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf3f78u; f_b4cf88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf3f88; }
    c->r[0] = c->r[0] + 0x10u;
    goto L_bf3f9c;
L_bf3f88:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbf3f9cu; rt_dispatch(c);
L_bf3f9c:;
    c->v.s[18] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bf40a0; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_bf407c; }
    c->r[7] = c->r[4] + (c->r[8] << 2);
    c->r[10] = c->r[13] + 0x10u;
    c->r[5] = c->r[8];
L_bf3fc4:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[10];
    c->r[14] = 0xbf3fdcu; f_4332ac(c);
    c->r[1] = c->r[9] + 0x10u;
    c->r[0] = c->r[13] + 0x50u;
    c->r[2] = c->r[10];
    c->r[14] = 0xbf3fecu; f_229d48(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_bf3fc4; }
L_bf407c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[13] + 0x10u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbf4090u; f_4332ac(c);
    c->r[1] = c->r[5] + 0x10u;
    c->r[0] = c->r[13] + 0x50u;
    c->r[2] = c->r[6];
    goto L_bf4308;
L_bf40a0:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_bf4228; }
    c->r[10] = c->r[4] + (c->r[8] << 2);
    c->r[5] = c->r[8];
L_bf40b0:;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->v.s[4] = c->r[2];
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->v.s[1] = c->r[6];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->v.s[14] = c->r[7];
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->v.s[6] = c->r[2];
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    c->v.s[10] = LD32(c->r[1] + 68u);
    c->v.s[8] = LD32(c->r[1] + 64u);
    c->v.s[12] = LD32(c->r[1] + 72u);
    c->r[1] = c->r[12] + 0x10u;
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.s[4] = c->r[0];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[10] = c->r[3];
    c->v.s[14] = c->r[2];
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x10u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0xbf4198u; f_229d48(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_bf40b0; }
L_bf4228:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.s[10] = c->r[2];
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[14]); }
    c->v.s[1] = c->r[14];
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->v.s[14] = c->r[7];
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->v.s[0] = c->r[6];
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    c->v.s[12] = c->r[5];
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->v.s[6] = LD32(c->r[3] + 52u);
    c->v.s[4] = LD32(c->r[3] + 48u);
    c->v.s[8] = LD32(c->r[3] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[2] = c->r[1];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[12] = c->r[6];
    c->v.s[14] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = c->r[12] + 0x10u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 68u, c->v.s[0]);
    ST32(c->r[13] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
L_bf4308:;
    c->r[14] = 0xbf430cu; f_229d48(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[20] = c->v.f[18] - c->v.f[16];
    c->r[6] = 0x0u;
    c->r[10] = c->r[13] + 0x50u;
    c->r[9] = 0x3f800000u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_bf43a4:;
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = c->r[10];
    c->r[14] = 0xbf43b4u; f_272ea8(c);
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[13] + 80u);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->v.s[6] = LD32(c->r[13] + 88u);
    c->v.s[2] = LD32(c->r[13] + 92u);
    c->v.s[10] = LD32(c->r[0] + 100u);
    c->v.s[14] = LD32(c->r[0] + 96u);
    c->v.s[8] = LD32(c->r[0] + 104u);
    c->v.s[4] = LD32(c->r[0] + 108u);
    c->v.f[1] = c->v.f[10] * c->v.f[0];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[12] = c->v.f[16] * c->v.f[12];
    c->v.f[14] = c->v.f[20] * c->v.f[14];
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf441c; }
    c->v.f[22] = c->v.f[20] * c->v.f[10];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[24] = c->v.f[14] - c->v.f[12];
    c->v.f[26] = c->v.f[20] * c->v.f[8];
    c->v.f[28] = c->v.f[20] * c->v.f[4];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[16] * c->v.f[2]);
    goto L_bf4438;
L_bf441c:;
    c->v.f[22] = c->v.f[16] * c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[20] * c->v.f[10]);
    c->v.f[24] = c->v.f[14] + c->v.f[12];
    c->v.f[26] = c->v.f[16] * c->v.f[6];
    c->v.f[28] = c->v.f[16] * c->v.f[2];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[20] * c->v.f[8]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[20] * c->v.f[4]);
L_bf4438:;
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf4460; }
    c->r[14] = 0xbf445cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf4460:;
    c->v.f[4] = c->v.f[18] / c->v.f[2];
    c->v.f[6] = c->v.f[26] * c->v.f[4];
    c->v.f[2] = c->v.f[22] * c->v.f[4];
    c->v.f[0] = c->v.f[28] * c->v.f[4];
    c->v.f[4] = c->v.f[24] * c->v.f[4];
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    ST32(c->r[13] + 80u, c->v.s[4]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[6]);
    ST32(c->r[13] + 92u, c->v.s[0]);
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[8]);
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->r[3] = c->r[0] + 0x40u;
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->v.f[14] = c->v.f[12] + c->v.f[6];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[18] - c->v.f[14];
    ST32(c->r[0] + 16u, c->v.s[14]);
    c->v.f[14] = c->v.f[4] + c->v.f[4];
    ST32(c->r[0] + 20u, c->v.s[7]);
    ST32(c->r[0] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 32u, c->v.s[1]);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[6] = c->v.f[18] - c->v.f[6];
    c->v.f[2] = c->v.f[18] - c->v.f[4];
    ST32(c->r[0] + 36u, c->v.s[6]);
    c->v.f[6] = c->v.f[5] + c->v.f[10];
    ST32(c->r[0] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    ST32(c->r[0] + 48u, c->v.s[6]);
    ST32(c->r[0] + 52u, c->v.s[0]);
    ST32(c->r[0] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[9]); }
    if (COND_LS) { goto L_bf43a4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[14] = 0xbf4544u; f_21ebe8(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_bf457c; }
    c->r[5] = 0x0u;
L_bf4550:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[0] = c->r[0] + 0x10u;
    c->r[14] = 0xbf4568u; f_21ebe8(c);
    c->r[1] = c->r[5] + 0x2u;
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[8]);
    c->r[5] = c->r[0];
    if (COND_LS) { goto L_bf4550; }
L_bf457c:;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bf458c(Cpu *restrict c) {
    FN_ENTER(0xbf458cu);
L_bf458c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bf4590(Cpu *restrict c) {
    FN_ENTER(0xbf4590u);
L_bf4590:;
    c->r[0] = 0xe4ea88u;
    { uint32_t ea = 0xbf459cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bf45a0(Cpu *restrict c) {
    FN_ENTER(0xbf45a0u);
L_bf45a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbf45acu; f_bf5058(c);
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffeffu;
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bf45bc(Cpu *restrict c) {
    FN_ENTER(0xbf45bcu);
L_bf45bc:;
    { uint32_t ea = c->r[0] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bf45c4(Cpu *restrict c) {
    FN_ENTER(0xbf45c4u);
L_bf45c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x172e39cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0xbf45f0u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0xe4d7d8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[0] = 0xe4e9dcu;
    { uint32_t ea = 0xbf463cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xb82d1eu;
    c->r[3] = 0x2c0u;
    { uint32_t ea = 0xbf4648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbf464cu + c->r[1];
    c->r[14] = 0xbf464cu; f_9aedcc(c);
    c->r[1] = 0xe4ea40u;
    { uint32_t ea = 0xbf4658u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bf4678(Cpu *restrict c) {
    FN_ENTER(0xbf4678u);
L_bf4678:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe4df8cu;
    { uint32_t ea = 0xbf4688u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbf468cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0xbf46a4u; rt_dispatch(c);
    c->r[1] = 0xe4d710u;
    { uint32_t ea = 0xbf46b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bf46c0(Cpu *restrict c) {
    FN_ENTER(0xbf46c0u);
L_bf46c0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xbf46f8u; f_9bb638(c);
    c->r[1] = 0xb794dfu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf470cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bf4758(Cpu *restrict c) {
    FN_ENTER(0xbf4758u);
L_bf4758:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bf4794; }
L_bf4770:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbf4788u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_bf4770; }
L_bf4794:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf4798(Cpu *restrict c) {
    FN_ENTER(0xbf4798u);
L_bf4798:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf47b4(Cpu *restrict c) {
    FN_ENTER(0xbf47b4u);
L_bf47b4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf47d0(Cpu *restrict c) {
    FN_ENTER(0xbf47d0u);
L_bf47d0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x30u; }
    return;
}
void f_bf47f0(Cpu *restrict c) {
    FN_ENTER(0xbf47f0u);
L_bf47f0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x30u; }
    return;
}
void f_bf4810(Cpu *restrict c) {
    FN_ENTER(0xbf4810u);
L_bf4810:;
    c->r[0] = 0x0u;
    return;
}
void f_bf4818(Cpu *restrict c) {
    FN_ENTER(0xbf4818u);
L_bf4818:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_bf481c(Cpu *restrict c) {
    FN_ENTER(0xbf481cu);
L_bf481c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[9] = c->r[1];
    c->r[11] = c->r[0];
    c->r[14] = 0xbf4830u; f_a87a24(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xbf4838u; f_9bb638(c);
    c->r[1] = 0xb82c6cu;
    c->r[8] = 0x0u;
    c->r[1] = 0xbf4848u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0xe4e83cu;
    { uint32_t ea = 0xbf4860u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x58u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf48ccu; f_9bb638(c);
    c->r[1] = 0xb6ec7cu;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xbf48e4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x48u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4948u; f_9bb638(c);
    c->r[1] = 0xb82b5cu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf495cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x130000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x38u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf49c0u; f_9bb638(c);
    c->r[1] = 0xb82aeeu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf49d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x130000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x3cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4a3cu; f_9bb638(c);
    c->r[1] = 0xb82a7cu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf4a50u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x130000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x40u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4ab4u; f_9bb638(c);
    c->r[1] = 0xb82a10u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf4ac8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x18u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa0000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x60u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4b38u; f_9bb638(c);
    c->r[1] = 0xb82993u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf4b4cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x18u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa0000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4bb8u; f_9bb638(c);
    c->r[1] = 0xb7e2f1u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf4bccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x61u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4c30u; f_9bb638(c);
    c->r[1] = 0xb7de93u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf4c44u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x5cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4ca4u; f_9bb638(c);
    c->r[1] = 0xb8282eu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbf4cb8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x58u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbf4d1cu; f_9bb638(c);
    c->r[1] = 0xb827cau;
    c->r[1] = 0xbf4d28u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x44u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xbf4d74u; f_9bb638(c);
    c->r[1] = 0xb7d2e1u;
    c->r[2] = 0x78u;
    c->r[1] = 0xbf4d84u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x900000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x70u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bf4e18(Cpu *restrict c) {
    FN_ENTER(0xbf4e18u);
L_bf4e18:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bf4e20(Cpu *restrict c) {
    FN_ENTER(0xbf4e20u);
L_bf4e20:;
    c->r[3] = 0xd70au;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3ca30000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x61u; ST8(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3e8u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    return;
}
void f_bf4e74(Cpu *restrict c) {
    FN_ENTER(0xbf4e74u);
L_bf4e74:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf4e9c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbf4e9cu; rt_dispatch(c);
L_bf4e9c:;
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf4ea4(Cpu *restrict c) {
    FN_ENTER(0xbf4ea4u);
L_bf4ea4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbf4ebcu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf4ed0(Cpu *restrict c) {
    FN_ENTER(0xbf4ed0u);
L_bf4ed0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf4f70; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf4f20; }
    c->r[0] = 0x0u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf4f58; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    goto L_bf4f58;
L_bf4f20:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf4f48; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x30u;
    goto L_bf4f4c;
L_bf4f48:;
    c->r[1] = 0x0u;
L_bf4f4c:;
    c->r[14] = 0xbf4f50u; f_b4d770(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_bf4f58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_bf4f70:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bf4fe8; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bf4fc8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xbf4f94u; rt_dispatch(c);
    c->r[1] = 0xe4d670u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf4fa4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf4fbc; }
    goto L_bf4ff0;
L_bf4fb0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf4ff0; }
L_bf4fbc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf4fb0; }
L_bf4fc8:;
    c->r[1] = c->r[4] + 0x30u;
    c->r[0] = c->r[5];
    c->r[14] = 0xbf4fd4u; f_b4d770(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bf4fe8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bf4ff0:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_bf5000:;
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bf5028; }
    { uint32_t ea = c->r[2] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[4]);
    c->r[1] = c->r[2];
    if (COND_NE) { goto L_bf5000; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bf5028:;
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbf504cu; rt_dispatch(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf5058(Cpu *restrict c) {
    FN_ENTER(0xbf5058u);
L_bf5058:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf50a4; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf50ac; }
    c->r[0] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf50e4; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    goto L_bf50e4;
L_bf50a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bf50ac:;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf50d4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x30u;
    goto L_bf50d8;
L_bf50d4:;
    c->r[1] = 0x0u;
L_bf50d8:;
    c->r[14] = 0xbf50dcu; f_b4d770(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_bf50e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf5104(Cpu *restrict c) {
    FN_ENTER(0xbf5104u);
L_bf5104:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf51a8; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf5158; }
    c->r[0] = 0x0u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf5190; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    goto L_bf5190;
L_bf5158:;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf5180; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x30u;
    goto L_bf5184;
L_bf5180:;
    c->r[1] = 0x0u;
L_bf5184:;
    c->r[14] = 0xbf5188u; f_b4d770(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_bf5190:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_bf51a8:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bf51f4; }
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_HI) { goto L_bf51f4; }
    { uint32_t ea = c->r[5] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = c->r[5] + 0x490u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_bf51f4; }
    { uint32_t ea = c->r[5] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 5);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf51f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbf51f0u; f_bf4ed0(c);
    c->r[0] = 0x1u;
L_bf51f4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bf51f8(Cpu *restrict c) {
    FN_ENTER(0xbf51f8u);
L_bf51f8:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_bf5230; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf522c; }
    { uint32_t ea = c->r[0] + 0x490u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { c->r[0] = 0x1u; }
    return;
L_bf522c:;
    c->r[2] = 0x1u;
L_bf5230:;
    c->r[0] = c->r[2];
    return;
}
void f_bf5238(Cpu *restrict c) {
    FN_ENTER(0xbf5238u);
L_bf5238:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf5284; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf528c; }
    c->r[0] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf52c4; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    goto L_bf52c4;
L_bf5284:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bf528c:;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf52b4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x30u;
    goto L_bf52b8;
L_bf52b4:;
    c->r[1] = 0x0u;
L_bf52b8:;
    c->r[14] = 0xbf52bcu; f_b4d770(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_bf52c4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf52e4(Cpu *restrict c) {
    FN_ENTER(0xbf52e4u);
L_bf52e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbf5308u; rt_dispatch(c);
    c->r[1] = 0xe4dd88u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf5318u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf5330; }
    goto L_bf5340;
L_bf5324:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf5340; }
L_bf5330:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf5324; }
    goto L_bf5350;
L_bf5340:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
L_bf5350:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf5358(Cpu *restrict c) {
    FN_ENTER(0xbf5358u);
L_bf5358:;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    __attribute__((musttail)) return f_bf5360(c);
}
void f_bf5360(Cpu *restrict c) {
    FN_ENTER(0xbf5360u);
L_bf5360:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x84u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf5518; }
L_bf5378:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_bf5378; }
    c->r[2] = 0x0u;
    c->r[9] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    goto L_bf53a0;
L_bf5398:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x2u;
L_bf53a0:;
    { uint32_t ea = c->r[3] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bf53d0; }
    c->r[7] = c->r[9] + (c->r[2] << 2);
    (void)f_subs(c, c->r[14], 0x1fu);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[3]); }
    if (COND_GE) { goto L_bf53cc; }
    { uint32_t ea = c->r[3] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_bf5398; }
L_bf53cc:;
    c->r[14] = c->r[2] + 0x2u;
L_bf53d0:;
    (void)f_subs(c, c->r[14], 0x2u);
    if (COND_LT) { goto L_bf5518; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[14] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf5400; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = ~0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[2]); }
L_bf5400:;
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_EQ) { goto L_bf5448; }
    c->r[1] = c->r[9] + (c->r[3] << 2);
    c->r[2] = c->r[14] - c->r[3];
    c->r[5] = 0x0u;
    c->r[6] = ~0x0u;
    c->r[3] = c->r[1] + 0x4u;
L_bf541c:;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_bf541c; }
L_bf5448:;
    c->r[12] = c->r[14] - 0x1u;
    c->r[10] = c->r[9] + 0x4u;
    c->r[8] = 0x0u;
    c->r[11] = c->r[12];
L_bf5458:;
    c->r[5] = c->r[8];
    c->r[8] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[14]);
    if (COND_GE) { goto L_bf5498; }
    c->r[6] = c->r[11];
    c->r[7] = c->r[10];
L_bf5470:;
    { uint32_t ea = c->r[9] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { { uint32_t ea = c->r[9] + (c->r[5] << 2); ST32(ea, c->r[1]); } }
    if (COND_HI) { { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); } }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->r[7] = c->r[7] + 0x4u;
    if (COND_NE) { goto L_bf5470; }
L_bf5498:;
    c->r[11] = c->r[11] - 0x1u;
    c->r[10] = c->r[10] + 0x4u;
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_NE) { goto L_bf5458; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[14], 0x1u);
    { uint32_t ea = c->r[3] + 0x3cu; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_bf5510; }
    c->r[2] = c->r[14] - 0x2u;
    c->r[4] = 0x0u;
L_bf54c4:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_bf54dc; }
    c->r[7] = c->r[9] + (c->r[4] << 2);
    { uint32_t ea = c->r[9] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[7]); }
L_bf54dc:;
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_LE) { goto L_bf54f0; }
    { uint32_t ea = c->r[9] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[4] + 0x1u;
    goto L_bf5500;
L_bf54f0:;
    c->r[7] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[9] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[1]); }
L_bf5500:;
    { uint32_t ea = c->r[6] + 0x4cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[7], c->r[14]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_bf54c4; }
L_bf5510:;
    c->r[1] = c->r[3] + 0x30u;
    c->r[14] = 0xbf5518u; f_b4d770(c);
L_bf5518:;
    c->r[13] = c->r[13] + 0x84u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bf5520(Cpu *restrict c) {
    FN_ENTER(0xbf5520u);
L_bf5520:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    return;
}
void f_bf552c(Cpu *restrict c) {
    FN_ENTER(0xbf552cu);
L_bf552c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf5570; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_bf5574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbf5564u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    goto L_bf5574;
L_bf5570:;
    c->r[0] = 0x0u;
L_bf5574:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf558c; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bf558c:;
    c->r[2] = 0xe437dcu;
    c->v.s[2] = LD32(c->r[4] + 68u);
    c->v.s[0] = LD32(c->r[4] + 92u);
    c->r[1] = c->r[0] + 0x1cu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xbf55a8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] + 0x68u; }
    vfp_mrs_flags(c);
    c->v.s[4] = LD32(c->r[1]);
    if (COND_LE) { goto L_bf55d8; }
    c->v.s[6] = LD32(c->r[4] + 88u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[6]);
    ST32(c->r[4] + 68u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { ST32(c->r[4] + 68u, c->v.s[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bf55d8:;
    if (COND_PL) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->v.s[6] = LD32(c->r[4] + 88u);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[6]);
    ST32(c->r[4] + 68u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bf55f8; }
    ST32(c->r[4] + 68u, c->v.s[0]);
L_bf55f8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bf5600(Cpu *restrict c) {
    FN_ENTER(0xbf5600u);
L_bf5600:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { return; }
    c->r[2] = c->r[1] & 0x7u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LS) { c->r[2] = 0x3u; }
    if (COND_LS) { c->r[1] = (c->r[1] & 0xfffffff8u) | ((c->r[2] << 0) & 0x7u); }
    if (COND_LS) { { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf5630(Cpu *restrict c) {
    FN_ENTER(0xbf5630u);
L_bf5630:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x10cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[0];
    c->r[0] = 0xe4457cu;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = 0xbf5654u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[10] = c->r[10] + 0x4u; c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_bf56e4; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf5710; }
    { uint32_t ea = c->r[2] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 6); uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[7] = c->r[3] + 0x8u;
    c->r[6] = c->r[3] + 0x3cu;
    c->r[10] = c->r[3] + 0x38u;
    c->r[1] = c->r[3] + 0x34u;
    c->r[2] = c->r[3] + 0x30u;
    c->r[14] = c->r[3] + 0x2cu;
    c->r[5] = c->r[3] + 0x1cu;
    c->r[4] = c->r[3] + 0x18u;
    c->r[12] = c->r[3] + 0x14u;
    c->r[9] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x28u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x24u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x20u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x10u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0xcu;
    goto L_bf5778;
L_bf56e4:;
    c->r[0] = c->r[5] + 0x3cu;
    c->r[9] = c->r[5] + 0x2cu;
    c->r[6] = c->r[5] + 0x28u;
    c->r[7] = c->r[5] + 0x24u;
    c->r[2] = c->r[5] + 0x20u;
    c->r[3] = c->r[5] + 0x1cu;
    c->r[12] = c->r[5] + 0x14u;
    c->r[14] = c->r[5] + 0x10u;
    c->r[1] = c->r[5] + 0xcu;
    c->r[4] = c->r[5] + 0x8u;
    goto L_bf5a14;
L_bf5710:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe444a8u;
    { uint32_t ea = 0xbf5728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[3] = c->r[0] + 0xcu;
    c->r[6] = c->r[0] + 0x3cu;
    c->r[9] = c->r[0] + 0x4u;
    c->r[12] = c->r[0] + 0x14u;
    c->r[4] = c->r[0] + 0x18u;
    c->r[5] = c->r[0] + 0x1cu;
    c->r[14] = c->r[0] + 0x2cu;
    c->r[2] = c->r[0] + 0x30u;
    c->r[10] = c->r[0] + 0x38u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x34u;
    c->r[0] = c->r[3];
L_bf5778:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[13] + 0x8cu;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[12]); }
    c->r[0] = c->r[13] + 0x98u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_bf5878; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf5884; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_bf58bc; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbf5874u; rt_dispatch(c);
    goto L_bf58d0;
L_bf5878:;
    c->r[0] = 0xe4434cu;
    { uint32_t ea = 0xbf5884u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_bf588c;
L_bf5884:;
    c->r[0] = 0xe44340u;
    { uint32_t ea = 0xbf5890u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_bf588c:;
    c->r[0] = c->r[5] + 0x3cu;
    c->r[9] = c->r[5] + 0x2cu;
    c->r[6] = c->r[5] + 0x28u;
    c->r[7] = c->r[5] + 0x24u;
    c->r[2] = c->r[5] + 0x20u;
    c->r[3] = c->r[5] + 0x1cu;
    c->r[12] = c->r[5] + 0x14u;
    c->r[14] = c->r[5] + 0x10u;
    c->r[1] = c->r[5] + 0xcu;
    c->r[4] = c->r[5] + 0x8u;
    c->r[10] = c->r[5] + 0x4u;
    goto L_bf5a14;
L_bf58bc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 5);
    c->r[0] = c->r[0] + 0x10u;
L_bf58d0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[13] + 0xc0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0xbf5964u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[5] + 0x2cu;
    c->r[6] = c->r[5] + 0x28u;
    c->r[7] = c->r[5] + 0x24u;
    c->r[2] = c->r[5] + 0x20u;
    c->r[3] = c->r[5] + 0x1cu;
    c->r[12] = c->r[5] + 0x14u;
    c->r[14] = c->r[5] + 0x10u;
    c->r[1] = c->r[5] | 0xcu;
    c->r[4] = c->r[5] | 0x8u;
    c->r[10] = c->r[5] | 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x3cu;
L_bf5a14:;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x38u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x34u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x18u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bf5adc(Cpu *restrict c) {
    FN_ENTER(0xbf5adcu);
L_bf5adc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[1];
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[22] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.f[16] = c->v.f[10] * c->v.f[2];
    c->v.f[18] = c->v.f[8] * c->v.f[4];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf5c2c; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5b54; }
    c->r[14] = 0xbf5b50u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf5b54:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf5b74; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_bf5b74:;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5ba4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf5ba4u; f_15efddc(c);
L_bf5ba4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf5bc0; }
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    goto L_bf5be0;
L_bf5bc0:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[8] = c->v.f[8] / c->v.f[0];
    c->v.f[0] = c->v.f[8] * c->v.f[6];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
L_bf5be0:;
    c->v.f[6] = c->v.f[16] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[4];
    c->v.f[10] = c->v.f[18] * c->v.f[2];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[16] * c->v.f[4]);
    c->r[0] = 0x0u;
    ST32(c->r[5], c->v.s[6]);
    ST32(c->r[5] + 4u, c->v.s[8]);
    ST32(c->r[5] + 8u, c->v.s[10]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 16u, c->v.s[18]);
    ST32(c->r[5] + 20u, c->v.s[16]);
    ST32(c->r[5] + 24u, c->v.s[20]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[4]);
    ST32(c->r[5] + 36u, c->v.s[2]);
    ST32(c->r[5] + 40u, c->v.s[0]);
L_bf5c2c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf5c58(Cpu *restrict c) {
    FN_ENTER(0xbf5c58u);
L_bf5c58:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[1];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[18] = c->v.f[10] * c->v.f[2];
    c->v.f[16] = c->v.f[8] * c->v.f[4];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = 0x34000000u;
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf5d7c; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5cd0; }
    c->r[14] = 0xbf5cccu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf5cd0:;
    c->v.s[22] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] * c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5d14; }
    c->r[14] = 0xbf5d10u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf5d14:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[8] = c->v.f[20] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[10] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[16] * c->v.f[4]);
    ST32(c->r[5], c->v.s[8]);
    ST32(c->r[5] + 4u, c->v.s[2]);
    ST32(c->r[5] + 8u, c->v.s[10]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 16u, c->v.s[0]);
    ST32(c->r[5] + 20u, c->v.s[4]);
    ST32(c->r[5] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[16]);
    ST32(c->r[5] + 36u, c->v.s[18]);
    ST32(c->r[5] + 40u, c->v.s[20]);
L_bf5d7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf5da8(Cpu *restrict c) {
    FN_ENTER(0xbf5da8u);
L_bf5da8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[1];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->v.s[22] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[18] = c->v.f[10] * c->v.f[2];
    c->v.f[16] = c->v.f[8] * c->v.f[4];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf5ef8; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5e20; }
    c->r[14] = 0xbf5e1cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf5e20:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf5e40; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
L_bf5e40:;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5e70; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf5e70u; f_15efddc(c);
L_bf5e70:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf5e8c; }
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    goto L_bf5eac;
L_bf5e8c:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[8] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    c->v.f[0] = c->v.f[8] * c->v.f[6];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
L_bf5eac:;
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[8] = c->v.f[16] * c->v.f[4];
    ST32(c->r[5], c->v.s[2]);
    ST32(c->r[5] + 4u, c->v.s[0]);
    ST32(c->r[5] + 8u, c->v.s[4]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[20] * c->v.f[2]);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 16u, c->v.s[16]);
    ST32(c->r[5] + 20u, c->v.s[18]);
    ST32(c->r[5] + 24u, c->v.s[20]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[6]);
    ST32(c->r[5] + 36u, c->v.s[8]);
    ST32(c->r[5] + 40u, c->v.s[4]);
L_bf5ef8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf5f24(Cpu *restrict c) {
    FN_ENTER(0xbf5f24u);
L_bf5f24:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[1];
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[22] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.f[16] = c->v.f[10] * c->v.f[2];
    c->v.f[18] = c->v.f[8] * c->v.f[4];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf6074; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5f9c; }
    c->r[14] = 0xbf5f98u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf5f9c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf5fbc; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_bf5fbc:;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf5fec; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf5fecu; f_15efddc(c);
L_bf5fec:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf6008; }
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    goto L_bf6028;
L_bf6008:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
L_bf6028:;
    c->v.f[6] = c->v.f[16] * c->v.f[2];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    ST32(c->r[5], c->v.s[0]);
    ST32(c->r[5] + 4u, c->v.s[4]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[18] * c->v.f[2]);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[5] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 16u, c->v.s[6]);
    ST32(c->r[5] + 20u, c->v.s[8]);
    ST32(c->r[5] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[18]);
    ST32(c->r[5] + 36u, c->v.s[16]);
    ST32(c->r[5] + 40u, c->v.s[20]);
L_bf6074:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf60a0(Cpu *restrict c) {
    FN_ENTER(0xbf60a0u);
L_bf60a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[1];
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.f[18] = c->v.f[10] * c->v.f[2];
    c->v.f[16] = c->v.f[8] * c->v.f[4];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = 0x34000000u;
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf61c4; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf6118; }
    c->r[14] = 0xbf6114u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf6118:;
    c->v.s[22] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] * c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf615c; }
    c->r[14] = 0xbf6158u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf615c:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    ST32(c->r[5], c->v.s[16]);
    ST32(c->r[5] + 4u, c->v.s[18]);
    ST32(c->r[5] + 8u, c->v.s[20]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[18] * c->v.f[2];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    ST32(c->r[5] + 16u, c->v.s[0]);
    ST32(c->r[5] + 20u, c->v.s[4]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[16] * c->v.f[2]);
    ST32(c->r[5] + 24u, c->v.s[2]);
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[6]);
    ST32(c->r[5] + 36u, c->v.s[8]);
    ST32(c->r[5] + 40u, c->v.s[4]);
L_bf61c4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf61f0(Cpu *restrict c) {
    FN_ENTER(0xbf61f0u);
L_bf61f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[1];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[18] = c->v.f[10] * c->v.f[2];
    c->v.f[16] = c->v.f[8] * c->v.f[4];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = 0x34000000u;
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf6314; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf6268; }
    c->r[14] = 0xbf6264u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf6268:;
    c->v.s[22] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] * c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf62ac; }
    c->r[14] = 0xbf62a8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf62ac:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    ST32(c->r[5], c->v.s[16]);
    ST32(c->r[5] + 4u, c->v.s[18]);
    ST32(c->r[5] + 8u, c->v.s[20]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[8] = c->v.f[20] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[10] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[16] * c->v.f[4]);
    ST32(c->r[5] + 16u, c->v.s[8]);
    ST32(c->r[5] + 20u, c->v.s[2]);
    ST32(c->r[5] + 24u, c->v.s[10]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[0]);
    ST32(c->r[5] + 36u, c->v.s[4]);
    ST32(c->r[5] + 40u, c->v.s[6]);
L_bf6314:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf6340(Cpu *restrict c) {
    FN_ENTER(0xbf6340u);
L_bf6340:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[14] = c->r[1] & 0x3u;
    c->r[12] = c->r[2] & 0x3u;
    c->r[14] = c->r[14] + (c->r[14] << 1);
    c->r[12] = c->r[14] + c->r[12];
    c->r[12] = c->r[12] - 0x4u;
    (void)f_subs(c, c->r[12], 0x8u);
    if (COND_HI) { goto L_bf6440; }
    c->r[14] = 0xeeu;
    c->r[4] = 0x1u;
    { uint32_t r = c->r[4] & shc_lsr(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf6440; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    c->r[1] = 0xd98098u;
    c->r[14] = c->r[2] & 0x4u;
    c->r[1] = 0xbf6390u + c->r[1];
    if (COND_NE) { goto L_bf63ac; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    goto L_bf63d0;
L_bf63ac:;
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
L_bf63d0:;
    { uint32_t ea = c->r[1] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[14], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_bf6408; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    goto L_bf642c;
L_bf6408:;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13], c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 4u, c->v.s[2]);
    ST32(c->r[13] + 8u, c->v.s[0]);
L_bf642c:;
    c->r[1] = 0x0u;
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    c->pc = c->r[12]; c->r[14] = 0xbf6440u; rt_dispatch(c);
L_bf6440:;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf644c(Cpu *restrict c) {
    FN_ENTER(0xbf644cu);
L_bf644c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bf6450(Cpu *restrict c) {
    FN_ENTER(0xbf6450u);
L_bf6450:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bf6454(Cpu *restrict c) {
    FN_ENTER(0xbf6454u);
L_bf6454:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe4c1acu;
    { uint32_t ea = 0xbf6468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf6468u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf6480(Cpu *restrict c) {
    FN_ENTER(0xbf6480u);
L_bf6480:;
    c->r[0] = 0xe4c188u;
    { uint32_t ea = 0xbf648cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bf6490(Cpu *restrict c) {
    FN_ENTER(0xbf6490u);
L_bf6490:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bf6498(Cpu *restrict c) {
    FN_ENTER(0xbf6498u);
L_bf6498:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbf64a4u; f_a879b4(c);
    c->r[0] = 0xe4b964u;
    { uint32_t ea = 0xbf64b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf64b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf64c8(Cpu *restrict c) {
    FN_ENTER(0xbf64c8u);
L_bf64c8:;
    c->r[0] = 0xe4b940u;
    { uint32_t ea = 0xbf64d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bf64d8(Cpu *restrict c) {
    FN_ENTER(0xbf64d8u);
L_bf64d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x172c4c8u;
    c->r[4] = 0x0u;
    c->r[5] = 0x1u;
    c->r[1] = 0x2u;
    c->r[2] = 0x6u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[0] = 0xbf650cu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe43640u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0xe4c0b8u;
    { uint32_t ea = 0xbf6554u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xb80f2fu;
    { uint32_t ea = 0xbf655cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbf6560u + c->r[1];
    c->r[14] = 0xbf6560u; f_9aedcc(c);
    c->r[1] = 0xe4cb34u;
    c->r[3] = 0x68u;
    { uint32_t ea = 0xbf6570u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe42d74u;
    c->r[0] = 0xe4b880u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0xbf658cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xb80f10u;
    { uint32_t ea = 0xbf6594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbf6598u + c->r[1];
    c->r[14] = 0xbf6598u; f_9aedcc(c);
    c->r[1] = 0xe4cb04u;
    { uint32_t ea = 0xbf65a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf65d4(Cpu *restrict c) {
    FN_ENTER(0xbf65d4u);
L_bf65d4:;
    c->r[1] = 0xe4cac8u;
    c->r[12] = 0x3f800000u;
    { uint32_t ea = 0xbf65e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe435dcu;
    { uint32_t ea = 0xbf65f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe43560u;
    { uint32_t ea = 0xbf667cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[12]); }
    return;
}
void f_bf66a0(Cpu *restrict c) {
    FN_ENTER(0xbf66a0u);
L_bf66a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[3] = 0xe4b4c4u;
    c->r[4] = c->r[1];
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = 0xbf66c4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1a8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_bf66f4; }
    c->r[3] = 0xfffeu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bf66f4:;
    c->r[0] = 0xe42660u;
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbf6704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_bf6728; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_bf6728; }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_bf6768; }
L_bf6728:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf6750; }
    c->r[1] = 0xe48878u;
    c->r[2] = 0xe48878u;
    { uint32_t ea = 0xbf6740u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbf6744u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf6750:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_bf6768:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbf6770u; f_a826fc(c);
    c->r[0] = 0xe425e4u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbf6780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = udiv32(c->r[0], c->r[5]);
    c->r[0] = c->r[4];
    c->r[14] = 0xbf6794u; f_b3eff4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a82760(c);
}
void f_bf67b4(Cpu *restrict c) {
    FN_ENTER(0xbf67b4u);
L_bf67b4:;
    c->r[0] = c->r[0] + 0x50u;
    __attribute__((musttail)) return f_a032e0(c);
}
void f_bf67bc(Cpu *restrict c) {
    FN_ENTER(0xbf67bcu);
L_bf67bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    c->v.s[2] = 0x3f8a8bd4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 36u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 56u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x10u;
    c->r[1] = c->r[13];
    c->r[14] = 0xbf6880u; f_21ebe8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 92u, c->v.s[16]);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf68ac(Cpu *restrict c) {
    FN_ENTER(0xbf68acu);
L_bf68ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x70u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0xe4c7d8u;
    c->v.s[0] = 0x3f800000u;
    c->v.s[1] = c->v.s[0];
    c->v.s[2] = c->v.s[0];
    { uint32_t ea = 0xbf68d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe432e8u;
    { uint32_t ea = 0xbf68e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[14] = 0xbf696cu; f_9c86b4(c);
    { uint32_t ea = c->r[13]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = c->r[4] + 0x70u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[4] + 0x90u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    c->r[3] = c->r[4] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bf6a14(Cpu *restrict c) {
    FN_ENTER(0xbf6a14u);
L_bf6a14:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[3] = 0xe4b150u;
    c->r[4] = c->r[1];
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = 0xbf6a38u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1a8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_bf6a68; }
    c->r[3] = 0xfffeu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bf6a68:;
    c->r[0] = 0xe422ecu;
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbf6a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_bf6a9c; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_bf6a9c; }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_bf6adc; }
L_bf6a9c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf6ac4; }
    c->r[1] = 0xe48504u;
    c->r[2] = 0xe48504u;
    { uint32_t ea = 0xbf6ab4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbf6ab8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf6ac4:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_bf6adc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbf6ae4u; f_a826fc(c);
    c->r[0] = 0xe42270u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbf6af4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = udiv32(c->r[0], c->r[5]);
    c->r[0] = c->r[4];
    c->r[14] = 0xbf6b08u; f_b3eff4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a82760(c);
}
void f_bf6b28(Cpu *restrict c) {
    FN_ENTER(0xbf6b28u);
L_bf6b28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] + 0x50u;
    c->r[14] = 0xbf6b34u; f_9c8a6c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bf6b40(Cpu *restrict c) {
    FN_ENTER(0xbf6b40u);
L_bf6b40:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xb0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[18] = c->v.s[0];
    c->v.s[28] = 0x3f000000u;
    c->v.s[22] = 0x3c8efa36u;
    c->v.s[16] = c->v.s[1];
    c->r[6] = c->r[2];
    c->r[8] = c->r[1];
    c->r[4] = c->r[0];
    c->v.f[0] = c->v.f[18] * c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->r[14] = 0xbf6b7cu; f_15f0184(c);
    c->v.s[20] = 0x0u;
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.s[24] = 0x3f8a8bd4u;
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[4] = c->v.f[4] * c->v.f[20];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[20]);
    c->v.s[2] = 0xbf7fbe77u;
    c->v.f[26] = c->v.f[0] * c->v.f[24];
    c->v.f[0] = c->v.f[4] - c->v.f[6];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bf6c20; }
    c->r[0] = 0xe42648u;
    { uint32_t ea = 0xbf6bc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.f[4] = c->v.f[4] * c->v.f[20];
    c->v.s[6] = c->v.s[2] ^ 0x80000000u;
    c->v.f[17] = c->v.f[0] * c->v.f[20];
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[28] = c->v.f[6] - c->v.f[4];
    c->v.f[30] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf6c04; }
    c->r[14] = 0xbf6c00u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bf6c04:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[4] = c->v.f[0] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[6] = c->v.f[17] * c->v.f[4];
    c->v.f[2] = c->v.f[4] * c->v.f[28];
    c->v.f[4] = c->v.f[30] * c->v.f[4];
    goto L_bf6c7c;
L_bf6c20:;
    c->v.s[30] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[30];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bf6c44; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbf6c44u; f_15efddc(c);
L_bf6c44:;
    c->v.f[12] = c->v.f[30] / c->v.f[0];
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[28];
    c->v.f[6] = c->v.f[6] * c->v.f[20];
    c->v.f[8] = c->v.f[4] * c->v.f[20];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[20]);
    c->v.s[10] = c->v.s[2] ^ 0x80000000u;
    c->v.f[2] = c->v.f[10] - c->v.f[6];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    c->v.f[6] = c->v.f[12] * c->v.f[8];
    c->v.f[2] = c->v.f[12] * c->v.f[2];
    c->v.f[4] = c->v.f[12] * c->v.f[4];
L_bf6c7c:;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.s[20] = 0x3f800000u;
    c->r[7] = 0x0u;
    c->r[5] = 0x3f800000u;
    c->r[1] = c->r[13];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[6];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[20] - c->v.f[14];
    ST32(c->r[13] + 112u, c->v.s[14]);
    c->v.f[14] = c->v.f[4] + c->v.f[4];
    ST32(c->r[13] + 116u, c->v.s[7]);
    ST32(c->r[13] + 120u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 128u, c->v.s[1]);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[6] = c->v.f[20] - c->v.f[6];
    c->v.f[2] = c->v.f[20] - c->v.f[4];
    ST32(c->r[13] + 132u, c->v.s[6]);
    c->v.f[6] = c->v.f[5] + c->v.f[10];
    ST32(c->r[13] + 136u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 144u, c->v.s[6]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xbf6d80u; f_21ebe8(c);
    c->v.s[0] = c->v.s[16] ^ 0x80000000u;
    c->r[6] = c->r[4] + 0x10u;
    c->r[1] = c->r[13];
    ST32(c->r[4] + 16u, c->v.s[26]);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[7]); }
    ST32(c->r[4] + 36u, c->v.s[26]);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    ST32(c->r[4] + 56u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[6];
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xbf6e10u; f_21ebe8(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[14] = 0xbf6e1cu; f_21ebe8(c);
    c->v.f[3] = c->v.f[16] * c->v.f[24];
    c->v.f[0] = c->v.f[18] * c->v.f[22];
    c->v.s[1] = c->v.s[20];
    c->r[0] = c->r[13];
    c->v.f[16] = c->v.f[3] - c->v.f[16];
    c->v.s[2] = c->v.s[16];
    c->r[14] = 0xbf6e38u; f_9c8508(c);
    { uint32_t ea = c->r[13]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = c->r[4] + 0x50u;
    c->r[6] = c->r[13];
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = c->r[4] + 0x70u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[4] + 0x90u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    c->r[3] = c->r[4] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 56u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xbf6f18u; f_21ebe8(c);
    c->r[0] = c->r[4] + 0x50u;
    c->r[1] = c->r[6];
    c->r[14] = 0xbf6f24u; f_9c87a4(c);
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bf6f48(Cpu *restrict c) {
    FN_ENTER(0xbf6f48u);
L_bf6f48:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bf8b00; }
    c->r[0] = 0xe41e38u;
    { uint32_t ea = 0xbf6f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x22du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf8b00; }
    { uint32_t ea = c->r[5] + 0x360u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf8b00; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x110000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bf8b00; }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; } }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[9] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bf8b00; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0xbf6fd0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf8b00; }
    c->r[0] = 0xe41b60u;
    c->r[1] = 0xe49e0cu;
    c->v.s[0] = LD32(c->r[5] + 80u);
    { uint32_t ea = 0xbf6fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = 0xbf6ff4u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bf7068; }
    c->r[0] = 0xe41b30u;
    c->r[1] = 0xe49ddcu;
    c->v.s[0] = LD32(c->r[5] + 84u);
    { uint32_t ea = 0xbf701cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 4u);
    { uint32_t ea = 0xbf7024u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bf7068; }
    c->r[1] = 0xe41b00u;
    c->r[0] = 0xe49db0u;
    c->v.s[0] = LD32(c->r[5] + 88u);
    { uint32_t ea = 0xbf704cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbf7050u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_bf8b00; }
L_bf7068:;
    c->r[0] = c->r[4] + 0x164u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7410; }
    c->r[0] = 0xe41cd4u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0xbf7090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf7094u; f_dd43a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf7410; }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xbf70acu; f_b6f8b8(c);
    c->r[0] = 0x3854u;
    c->r[1] = c->r[4];
    c->r[3] = 0x3650u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xc7bcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7164; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7138; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6cau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf7138:;
    c->r[2] = 0x3650u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x3858u;
    c->r[2] = 0x6cau;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_bf7164:;
    c->r[3] = 0x4ab0u;
    c->r[2] = 0x3984u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7214; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf71e4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6f0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf71e4:;
    c->r[2] = 0x4ab0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xc956u;
    c->r[1] = 0x3988u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x67100000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_bf7214:;
    c->v.s[0] = LD32(c->r[5] + 60u);
    c->r[2] = 0x3b0cu;
    c->r[1] = c->r[4];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf72c4; }
    c->r[3] = 0x3950u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7410; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf72a8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf72a8:;
    c->r[2] = 0x3950u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x872au;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x99490000u;
    goto L_bf73f8;
L_bf72c4:;
    c->v.s[0] = LD32(c->r[5] + 64u);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf736c; }
    c->r[3] = 0x3958u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7410; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7350; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf7350:;
    c->r[2] = 0x3958u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xe72bu;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xea400000u;
    goto L_bf73f8;
L_bf736c:;
    c->r[3] = 0x3908u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7410; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf73e4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf73e4:;
    c->r[2] = 0x3908u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b10u;
    c->r[1] = 0x721u;
L_bf73f8:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf7410:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0xbf742cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0xe02eu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xb86d0000u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_bf74b4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf749c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bf749c:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_bf74b4:;
    c->r[14] = 0xc000u;
    { uint32_t sc = 0; uint32_t r = c->r[9] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xfa060000u;
    if (COND_EQ) { goto L_bf7fb0; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_bf7b1c; }
    c->r[1] = 0x3b2cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[8] + 0x308u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc4e4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_bf757c; }
    c->r[3] = 0x3928u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7620; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7564; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x725u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf7564:;
    c->r[2] = 0x3928u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x3b30u;
    c->r[2] = 0x725u;
    goto L_bf7608;
L_bf757c:;
    c->r[3] = 0x3930u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7620; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf75f0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x725u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf75f0:;
    c->r[2] = 0x3930u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xf726u;
    c->r[0] = 0x3b30u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd3210000u;
L_bf7608:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
L_bf7620:;
    c->v.s[2] = LD32(c->r[5] + 60u);
    c->r[2] = 0x3b0cu;
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[5] + 64u);
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf76dc; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf782c; }
    c->r[3] = 0x3948u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf78d0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf76c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf76c0:;
    c->r[2] = 0x3948u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1729u;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xec770000u;
    goto L_bf78b8;
L_bf76dc:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf7994; }
    c->r[3] = 0x3940u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf778c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf775c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf775c:;
    c->r[2] = 0x3940u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xb728u;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf9ab0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf778c:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe404u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf7b1c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7810; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x37bu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf7810:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7ac8; }
    c->r[2] = 0xe47790u;
    c->r[3] = 0xe47790u;
    { uint32_t ea = 0xbf7828u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf782cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bf796c;
L_bf782c:;
    c->r[3] = 0x3938u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf78d0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf78a0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf78a0:;
    c->r[2] = 0x3938u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xd727u;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8aa20000u;
L_bf78b8:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf78d0:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe404u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf7b1c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7954; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x37bu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf7954:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7ac8; }
    c->r[2] = 0xe4764cu;
    c->r[3] = 0xe4764cu;
    { uint32_t ea = 0xbf796cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf7970u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_bf796c:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc4960000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bf7ad0;
L_bf7994:;
    c->r[3] = 0x3908u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7a34; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7a08; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf7a08:;
    c->r[2] = 0x3908u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3b10u;
    c->r[1] = 0x721u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf7a34:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7b1c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7aa8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x37bu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bf7aa8:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1de0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bf7af4; }
    goto L_bf7ae4;
L_bf7ac8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf7ad0:;
    c->r[2] = 0x1de0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf7af4; }
L_bf7ae4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf7b10;
L_bf7af4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf7b10:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf7b1c:;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf7bec; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7bec; }
    c->r[2] = 0x1eecu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf7cd4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7bb4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x39du;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf7bb4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7c80; }
    c->r[2] = 0xe473ecu;
    c->r[3] = 0xe473ecu;
    { uint32_t ea = 0xbf7bccu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf7bd0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[14];
    goto L_bf7c88;
L_bf7bec:;
    c->r[1] = 0x1eecu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7cd4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7c60; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x39du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bf7c60:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1ef0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bf7cac; }
    goto L_bf7c9c;
L_bf7c80:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf7c88:;
    c->r[2] = 0x1ef0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf7cac; }
L_bf7c9c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf7cc8;
L_bf7cac:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf7cc8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf7cd4:;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf7da8; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7da8; }
    c->r[2] = 0x1d7cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf7eac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7d6c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x36fu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf7d6c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7e3c; }
    c->r[2] = 0xe47234u;
    c->r[3] = 0xe47234u;
    { uint32_t ea = 0xbf7d84u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf7d88u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x61000u;
    c->r[1] = c->r[0] | 0xf0000000u;
    goto L_bf7e44;
L_bf7da8:;
    c->r[1] = 0x1d7cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf7eac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7e1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x36fu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bf7e1c:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1d80u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bf7e84; }
    goto L_bf7e58;
L_bf7e3c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf7e44:;
    c->r[2] = 0x1d80u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf7e84; }
L_bf7e58:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf7ea0;
L_bf7e84:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf7ea0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf7eac:;
    c->r[1] = 0x3b74u;
    c->r[0] = c->r[4];
    c->r[3] = 0x3978u;
    c->r[8] = c->r[14];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc49cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf7f6c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf7f3c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x72eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf7f3c:;
    c->r[2] = 0x3978u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe72fu;
    c->r[0] = 0x3b78u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x31e50000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf7f6c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[2] = 0x0u;
    c->r[14] = 0xbf7f7cu; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[0] = c->r[0] | (c->r[5] << 5);
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[7]; c->r[14] = 0xbf7facu; rt_dispatch(c);
    c->r[14] = c->r[8];
L_bf7fb0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_bf84c4; }
    c->v.s[2] = LD32(c->r[5] + 60u);
    c->r[1] = 0x3b0cu;
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[5] + 64u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc504u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf8084; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf81d4; }
    c->r[3] = 0x3920u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf8278; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8064; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf8064:;
    c->r[2] = 0x3920u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf724u;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe4660000u;
    goto L_bf8260;
L_bf8084:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf833c; }
    c->r[3] = 0x3918u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf8134; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8104; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf8104:;
    c->r[2] = 0x3918u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7723u;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb340000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf8134:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe404u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf84c4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf81b8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x37bu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf81b8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf8470; }
    c->r[2] = 0xe46de8u;
    c->r[3] = 0xe46de8u;
    { uint32_t ea = 0xbf81d0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf81d4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bf8314;
L_bf81d4:;
    c->r[3] = 0x3910u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf8278; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8248; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf8248:;
    c->r[2] = 0x3910u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1722u;
    c->r[0] = 0x3b10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x783d0000u;
L_bf8260:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf8278:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe404u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf84c4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf82fc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x37bu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf82fc:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf8470; }
    c->r[2] = 0xe46ca4u;
    c->r[3] = 0xe46ca4u;
    { uint32_t ea = 0xbf8314u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf8318u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_bf8314:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc4960000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bf8478;
L_bf833c:;
    c->r[3] = 0x3908u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf83dc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf83b0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf83b0:;
    c->r[2] = 0x3908u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3b10u;
    c->r[1] = 0x721u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf83dc:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf84c4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8450; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x37bu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bf8450:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1de0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bf849c; }
    goto L_bf848c;
L_bf8470:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf8478:;
    c->r[2] = 0x1de0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf849c; }
L_bf848c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf84b8;
L_bf849c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf84b8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf84c4:;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf8594; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf8594; }
    c->r[2] = 0x1eecu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf867c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf855c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x39du;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf855c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf8628; }
    c->r[2] = 0xe46a44u;
    c->r[3] = 0xe46a44u;
    { uint32_t ea = 0xbf8574u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf8578u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[14];
    goto L_bf8630;
L_bf8594:;
    c->r[1] = 0x1eecu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf867c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8608; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x39du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bf8608:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1ef0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bf8654; }
    goto L_bf8644;
L_bf8628:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf8630:;
    c->r[2] = 0x1ef0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf8654; }
L_bf8644:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf8670;
L_bf8654:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf8670:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf867c:;
    c->r[3] = 0xe40714u;
    c->r[1] = 0x3adcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc534u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0xbf869cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x21au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf8740; }
    c->r[3] = 0x38d8u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf87e4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8720; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x71bu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf8720:;
    c->r[2] = 0x38d8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3ae0u;
    c->r[1] = 0x71bu;
    goto L_bf87cc;
L_bf8740:;
    c->r[3] = 0x38e0u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf87e4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf87b4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x71bu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf87b4:;
    c->r[2] = 0x38e0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x171cu;
    c->r[0] = 0x3ae0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf50000u;
L_bf87cc:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf87e4:;
    c->r[1] = 0xe485f8u;
    c->r[0] = 0xe40568u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbf87f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbf87fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x34000000u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[14] = 0xbf8830u; f_dd0dac(c);
    c->r[1] = 0x1bf4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe5ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x280u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf8950; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf88b4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33eu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bf88b4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf88f4; }
    c->r[2] = 0xe466ecu;
    c->r[3] = 0xe466ecu;
    { uint32_t ea = 0xbf88ccu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf88d0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x377b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bf88fc;
L_bf88f4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf88fc:;
    c->r[2] = 0x1bf8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf8928; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf8944;
L_bf8928:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf8944:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bf8950:;
    c->r[1] = 0x3b74u;
    c->r[0] = c->r[4];
    c->r[3] = 0x3970u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc49cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf8a08; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf89dc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x72eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf89dc:;
    c->r[2] = 0x3970u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3b78u;
    c->r[1] = 0x72eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf8a08:;
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    c->r[14] = 0xbf8a18u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[0] = c->r[0] | (c->r[5] << 5);
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[7]; c->r[14] = 0xbf8a48u; rt_dispatch(c);
    c->r[1] = 0x3b0cu;
    c->r[0] = c->r[4];
    c->r[3] = 0x3908u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc504u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf8b00; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf8ad4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x721u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf8ad4:;
    c->r[2] = 0x3908u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3b10u;
    c->r[1] = 0x721u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bf8b00:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bf8b44(Cpu *restrict c) {
    FN_ENTER(0xbf8b44u);
L_bf8b44:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x70u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x31u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bf8b9c; }
    c->r[0] = 0xe40790u;
    { uint32_t ea = 0xbf8b70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf8b70u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[3]; c->r[14] = 0xbf8b84u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0xe4a534u;
    { uint32_t ea = 0xbf8b94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf8b90:;
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    goto L_bf8fa0;
L_bf8b9c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbf8bacu; rt_dispatch(c);
    c->r[1] = 0xe497ecu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf8bbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf8bd4; }
    goto L_bf8c94;
L_bf8bc8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf8c94; }
L_bf8bd4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf8bc8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbf8bf0u; rt_dispatch(c);
    c->r[1] = 0xe497b8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf8c00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf8c18; }
    goto L_bf8de0;
L_bf8c0c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf8de0; }
L_bf8c18:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf8c0c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbf8c34u; rt_dispatch(c);
    c->r[1] = 0xe4977cu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf8c44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf8c5c; }
    goto L_bf8e24;
L_bf8c50:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf8e24; }
L_bf8c5c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf8c50; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbf8c78u; rt_dispatch(c);
    c->r[1] = 0xe49740u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf8c88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf8d9c; }
    goto L_bf8fac;
L_bf8c94:;
    c->r[0] = 0xe40660u;
    { uint32_t ea = 0xbf8ca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf8ca0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xc0u;
    c->pc = c->r[3]; c->r[14] = 0xbf8cb4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4a3f4u;
    { uint32_t ea = 0xbf8cd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4a3ccu;
    { uint32_t ea = 0xbf8ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40ee0u;
    { uint32_t ea = 0xbf8cf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40e64u;
    { uint32_t ea = 0xbf8d78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[3]); }
    goto L_bf8fa0;
L_bf8d90:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf8fac; }
L_bf8d9c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bf8d90; }
    c->r[0] = 0xe4054cu;
    { uint32_t ea = 0xbf8db4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf8db4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xa0u;
    c->pc = c->r[3]; c->r[14] = 0xbf8dc8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4a2d4u;
    { uint32_t ea = 0xbf8de0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bf8b90;
L_bf8de0:;
    c->r[0] = 0xe40514u;
    { uint32_t ea = 0xbf8decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf8decu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xf0u;
    c->pc = c->r[3]; c->r[14] = 0xbf8e00u; rt_dispatch(c);
    c->r[1] = 0xe4a2a8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0xbf8e18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf8e14:;
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    goto L_bf8fa0;
L_bf8e24:;
    c->r[0] = 0xe404d0u;
    { uint32_t ea = 0xbf8e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf8e30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x120u;
    c->pc = c->r[3]; c->r[14] = 0xbf8e44u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4a254u;
    c->v.s[1] = c->v.s[0];
    c->v.s[2] = c->v.s[0];
    { uint32_t ea = 0xbf8e68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4a238u;
    { uint32_t ea = 0xbf8e78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40d48u;
    { uint32_t ea = 0xbf8e88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[14] = 0xbf8f0cu; f_9c86b4(c);
    { uint32_t ea = c->r[13]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = c->r[4] + 0xb0u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = c->r[4] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[4] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[4] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    c->r[3] = c->r[4] + 0x100u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x110u; ST8(ea, c->r[0]); }
L_bf8fa0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bf8fac:;
    c->r[0] = 0xe40348u;
    { uint32_t ea = 0xbf8fb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf8fb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xf0u;
    c->pc = c->r[3]; c->r[14] = 0xbf8fccu; rt_dispatch(c);
    c->r[1] = 0xe4a0d4u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0xbf8fe4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bf8e14;
}
void f_bf9038(Cpu *restrict c) {
    FN_ENTER(0xbf9038u);
L_bf9038:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x360u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x31u; uint32_t v = LD8(ea); c->r[3] = v; } }
    if (COND_NE) { { uint32_t r = c->r[3] & 0x40u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_bf9064; }
    c->r[0] = c->r[2] & ~0x11u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    return;
L_bf9064:;
    c->r[2] = c->r[2] | 0x11u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bf9078(Cpu *restrict c) {
    FN_ENTER(0xbf9078u);
L_bf9078:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[5] + 0x31u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf943c; }
    c->r[1] = c->r[5] + 0x390u;
    c->r[0] = c->r[4];
    c->r[14] = 0xbf90b0u; f_a84d5c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_bf943c; }
    c->r[0] = 0xe3fce4u;
    c->r[8] = 0xfffcu;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = 0xbf90ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x23cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bf92ac; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbf90e0u; f_a85804(c);
    c->v.s[0] = LD32(c->r[5] + 912u);
    c->v.s[2] = LD32(c->r[5] + 916u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[5] + 920u);
    c->v.s[10] = LD32(c->r[0] + 40u);
    c->r[1] = 0xe3fca8u;
    c->v.s[12] = LD32(c->r[0] + 56u);
    { uint32_t ea = 0xbf9108u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[18] = LD32(c->r[0] + 576u);
    c->v.f[0] = c->v.f[12] + c->v.f[2];
    c->v.f[16] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bf9138; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_bf943c; }
L_bf9138:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bf91ac; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x27eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x15f4u;
    c->r[2] = 0x15f8u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bf91ac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbf91c0u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[8] & (c->r[6] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bf920c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbf9208u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf920c:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x15f4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bf942c; }
    c->v.s[0] = 0x3e4ccccdu;
    c->v.f[2] = c->v.f[18] - c->v.f[16];
    c->v.s[6] = 0x3f800000u;
    c->v.s[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0xe3fb50u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    { uint32_t ea = 0xbf9260u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = vminnm_f(c->v.f[0], c->v.f[6]);
    c->v.f[0] = vmaxnm_f(c->v.f[0], c->v.f[4]);
    c->v.s[0] = COND_EQ ? c->v.s[6] : c->v.s[0];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x248u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->v.s[0] = LD32(c->r[5] + 924u);
    c->v.f[2] = c->v.f[16] - c->v.f[0];
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    ST32(c->r[13], c->v.s[2]);
    ST32(c->r[13] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 4u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    goto L_bf942c;
L_bf92ac:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bf9320; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x27eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x15f4u;
    c->r[2] = 0x15f8u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bf9320:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbf9334u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = c->r[8] & (c->r[6] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_bf9380; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbf937cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_bf9380:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bf942c; }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3f9f0u;
    { uint32_t ea = 0xbf93c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbf93d0u; f_a85804(c);
    c->v.s[0] = LD32(c->r[5] + 912u);
    c->v.s[2] = LD32(c->r[5] + 916u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[5] + 920u);
    c->v.s[12] = LD32(c->r[0] + 40u);
    c->v.s[14] = LD32(c->r[0] + 56u);
    c->v.s[6] = LD32(c->r[5] + 924u);
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[0] = c->v.f[14] + c->v.f[2];
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[2] = c->v.f[0] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[13], c->v.s[2]);
    ST32(c->r[13] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 4u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
L_bf942c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_bf943c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bf9464(Cpu *restrict c) {
    FN_ENTER(0xbf9464u);
L_bf9464:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x60u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->pc = c->r[3]; c->r[14] = 0xbf949cu; rt_dispatch(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bf950c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x173u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xda0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[9] + 0xd9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_bf950c:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbf9520u; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[4] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[4] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_bf9574; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xbf9570u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
L_bf9574:;
    c->r[0] = c->r[4] + c->r[5];
    c->r[8] = c->r[9];
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xd9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_bf9688; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbf95acu; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
L_bf9688:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3f6bcu;
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf96a8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbf96acu; f_dd3814(c);
    c->r[1] = 0x1ef4u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf97bc; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9730; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9] + 0xecu;
    c->r[5] = c->r[7];
    c->r[4] = 0x39eu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[2]); }
L_bf9730:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf9770; }
    c->r[2] = 0xe45870u;
    c->r[3] = 0xe45870u;
    { uint32_t ea = 0xbf9748u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbf974cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3be60000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bf9778;
L_bf9770:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bf9778:;
    c->r[2] = 0x1ef8u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bf9798; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bf97b0;
L_bf9798:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_bf97b0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_bf97bc:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_bf9858; }
    c->r[0] = 0x3b88u;
    c->v.s[16] = LD32(c->r[6] + 924u);
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[5] << 3); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xbf97e4u; f_a85804(c);
    c->v.s[0] = LD32(c->r[6] + 912u);
    c->v.s[2] = LD32(c->r[6] + 916u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[6] + 920u);
    c->v.s[10] = LD32(c->r[0] + 40u);
    c->v.s[12] = LD32(c->r[0] + 56u);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = 0xe3f5a0u;
    { uint32_t ea = 0xbf9810u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.s[6] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[4] = 0x3e800000u;
    c->v.f[0] = c->v.f[12] + c->v.f[2];
    c->v.s[2] = 0x34000000u;
    c->v.f[0] = fabsf(c->v.f[0]);
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    c->v.s[2] = COND_EQ ? c->v.s[6] : c->v.s[4];
    c->v.f[4] = c->v.f[16] * c->v.f[16];
    c->v.s[6] = LD32(c->r[0] + 580u);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bf9f30; }
L_bf9858:;
    { uint32_t ea = c->r[9] + 0x1e0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bf9880; }
    { uint32_t ea = c->r[5] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_bf9880; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    goto L_bf988c;
L_bf9880:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
L_bf988c:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[2] = 0x3b84u;
    c->r[3] = 0x3990u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bf9944; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9920; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = c->r[7];
    c->r[7] = 0x732u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bf9920:;
    c->r[2] = 0x3990u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3b98u;
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bf9944:;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_bf9968; }
    c->r[0] = 0xe48240u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x20u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xbf9968u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_bf997c;
L_bf9968:;
    c->r[0] = 0xe48228u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x20u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0xbf9980u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_bf997c:;
    c->r[0] = c->r[9];
    c->r[14] = 0xbf9984u; f_a80108(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[9];
    c->r[1] = c->r[0] & 0x600u;
    (void)f_subs(c, c->r[1], 0x200u);
    if (COND_NE) { c->r[1] = 0x19ffu; }
    if (COND_NE) { c->r[0] = c->r[0] & c->r[1]; }
    c->r[1] = 0x107cu;
    if (COND_NE) { c->r[0] = c->r[0] | 0x2200u; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0xf5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_bf9a0c; }
    c->r[2] = 0x15bcu;
    c->r[3] = 0x38u;
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x80000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[1] = (uint32_t)(uint8_t)(c->r[0]); }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_EQ) { goto L_bf9a38; }
    c->r[0] = c->r[0] & 0x1f00u;
    c->r[1] = 0x2001u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] | c->r[1];
    goto L_bf9a34;
L_bf9a0c:;
    c->r[2] = 0x15c4u;
    c->r[3] = 0x38u;
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x80000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bf9a38; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] | 0x2000u;
L_bf9a34:;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
L_bf9a38:;
    c->r[2] = 0xfff8u;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9a7c; }
    c->r[2] = 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[3], 0x1u);
    c->r[3] = ~0x0u;
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bf9a7c:;
    c->r[4] = c->r[9];
    c->r[5] = 0xaafdu;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[3] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x87a40000u;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_bf9abc; }
    c->r[6] = (c->r[7] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_bf9af4; }
L_bf9abc:;
    c->r[1] = 0xaafdu;
    c->r[7] = c->r[7] & 0xffff00ffu;
    c->r[0] = c->r[0] | 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x87a40000u;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[7] | (c->r[6] << 8);
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xafdu;
    c->r[1] = c->r[1] | (c->r[6] << 16);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bf9af4:;
    c->r[2] = 0x3b64u;
    c->r[10] = c->r[9];
    c->r[7] = 0x3968u;
    c->r[5] = 0x38u;
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[3] = v; }
    c->r[2] = 0xc4acu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_bf9bb0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9b8c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x72cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bf9b8c:;
    c->r[3] = 0x3968u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x72du;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x5a50000u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[2]); }
    c->r[2] = 0x3b68u;
    { uint32_t ea = c->r[9] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bf9bb0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0xbf9bc4u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfff8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[0] = c->r[2] & 0x600u;
    (void)f_subs(c, c->r[0], 0x400u);
    if (COND_NE) { c->r[0] = 0x19ffu; }
    if (COND_NE) { c->r[0] = c->r[2] & c->r[0]; }
    if (COND_NE) { c->r[2] = c->r[0] | 0x2400u; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->r[3] = c->r[0] & c->r[1];
    { uint32_t r = c->r[3] ^ c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9c28; }
    c->r[1] = 0x6u;
    c->r[3] = f_adds(c, c->r[5], 0x1u);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = ~0x0u;
    c->r[0] = c->r[0] | c->r[3];
    c->r[3] = 0x0u;
    c->r[1] = c->r[12] & c->r[1];
    c->r[3] = c->r[3] + 0x0u + c->cf;
    c->r[12] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); }
L_bf9c28:;
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0xaafdu;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x87a40000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[1] = (c->r[7] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], c->r[5]); }
    if (COND_NE) { goto L_bf9c5c; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bf9c94; }
L_bf9c5c:;
    c->r[1] = 0xaafdu;
    c->r[7] = c->r[7] & 0xffff00ffu;
    c->r[0] = c->r[0] | 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x87a40000u;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] | (c->r[5] << 8);
    c->r[7] = c->r[6] | (c->r[5] >> 24);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xafdu;
    c->r[12] = c->r[1] | (c->r[5] << 16);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); }
L_bf9c94:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_bf9cd0; }
    { uint32_t ea = c->r[14] + 0x304u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_bf9cd0; }
    c->r[1] = 0xe3f858u;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xbf9cbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { c->r[1] = 0x15e4u; }
    if (COND_EQ) { c->r[1] = 0x15ecu; }
    goto L_bf9cf0;
L_bf9cd0:;
    c->r[1] = 0xe3f834u;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xbf9ce0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bf9d00; }
    c->r[1] = 0x15dcu;
L_bf9cf0:;
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_bf9d18; }
    goto L_bf9d0c;
L_bf9d00:;
    { uint32_t ea = c->r[9] + 0xfbcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_bf9d18; }
L_bf9d0c:;
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_bf9d2c; }
L_bf9d18:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[3]); }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_bf9d2c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bf9d6c; }
    c->r[1] = 0x15d4u;
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bf9d60; }
    c->r[1] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_bf9d60:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bf9d98;
L_bf9d6c:;
    c->r[1] = 0x15ccu;
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bf9d90; }
    c->r[1] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_bf9d90:;
    c->r[1] = 0x1014u;
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
L_bf9d98:;
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x3960u;
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_bf9e50; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9e30; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x72cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bf9e30:;
    c->r[1] = 0x3960u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x72cu;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3b68u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); }
L_bf9e50:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0xbf9e64u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x600u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = 0x19ffu; }
    if (COND_NE) { c->r[0] = c->r[0] & c->r[1]; }
    if (COND_NE) { c->r[0] = c->r[0] | 0x2000u; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); } }
L_bf9e7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3960u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf9f20; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9ef8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x72cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bf9ef8:;
    c->r[1] = 0x3960u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3b64u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b68u;
    c->r[1] = 0x72cu;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bf9f20:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_bf9f30:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x1e0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bf9f58; }
    { uint32_t ea = c->r[3] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_bf9f58; }
    c->r[6] = 0x5u;
    c->r[0] = 0x1u;
    goto L_bf9f60;
L_bf9f58:;
    c->r[6] = 0x4u;
    c->r[0] = 0x0u;
L_bf9f60:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfff8u;
    c->r[1] = 0x38u;
    { uint32_t ea = c->r[8]; c->r[12] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1f0000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80000u;
    c->r[0] = c->r[12] & c->r[0];
    { uint32_t r = c->r[0] ^ c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bf9fb0; }
    c->r[0] = 0x6u;
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[12] & c->r[0];
    c->r[12] = c->r[0] | c->r[1];
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    c->r[0] = c->r[0] + 0x0u + c->cf;
    c->r[1] = c->r[14] & c->r[1];
    c->r[14] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
L_bf9fb0:;
    c->r[4] = c->r[9];
    c->r[7] = 0xaafdu;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x87a40000u;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_EQ) { c->r[7] = (c->r[0] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[7], c->r[6]); }
    if (COND_NE) { goto L_bf9fe4; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bfa01c; }
L_bf9fe4:;
    c->r[0] = c->r[0] & 0xffff00ffu;
    c->r[7] = 0xaafdu;
    c->r[1] = c->r[1] | (c->r[6] >> 24);
    c->r[12] = c->r[12] | 0x3u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x87a40000u;
    c->r[0] = c->r[0] | (c->r[6] << 8);
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xafdu;
    c->r[14] = c->r[0] | (c->r[6] << 16);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
L_bfa01c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bfa058; }
    { uint32_t ea = c->r[3] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_bfa058; }
    c->r[1] = 0xe3f4d0u;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbfa044u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { c->r[1] = 0x15e4u; }
    if (COND_EQ) { c->r[1] = 0x15ecu; }
    goto L_bfa078;
L_bfa058:;
    c->r[1] = 0xe3f4acu;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbfa068u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bfa088; }
    c->r[1] = 0x15dcu;
L_bfa078:;
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_bfa0a0; }
    goto L_bfa094;
L_bfa088:;
    { uint32_t ea = c->r[9] + 0xfbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_bfa0a0; }
L_bfa094:;
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_bfa0b8; }
L_bfa0a0:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[3]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
L_bfa0b8:;
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bfa0e0; }
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] & 0x1f00u;
    c->r[2] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_bfa0e0:;
    c->r[0] = 0x1014u;
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[5] | (c->r[4] << 12);
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[1] = 0x3960u;
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[0] << 13) & 0xffffe000u); }
    c->r[0] = 0x3b54u;
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); } }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_bfa1b0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfa190; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x72cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[12] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfa190:;
    c->r[0] = 0x3960u;
    c->r[12] = c->r[12] | 0x3u;
    c->r[1] = 0x72cu;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b68u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
L_bfa1b0:;
    c->r[0] = 0x3b94u;
    c->r[6] = c->r[9];
    c->r[5] = 0xe730u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x15220000u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_bfa258; }
    c->r[1] = 0x3998u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_bfa2f0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfa244; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[12] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfa244:;
    c->r[0] = 0x3998u;
    c->r[1] = 0xc733u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f820000u;
    goto L_bfa2dc;
L_bfa258:;
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_bfa2f0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfa2d0; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[12] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfa2d0:;
    c->r[0] = 0x3990u;
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfa2dc:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b98u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[12] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[14]); }
L_bfa2f0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0xbfa304u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_bf9e7c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bf9e7c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfa388; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfa388:;
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b98u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_bf9e7c;
}
void f_bfa3d8(Cpu *restrict c) {
    FN_ENTER(0xbfa3d8u);
L_bfa3d8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xbfa3f8u; f_a85834(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xbfa404u; f_a85824(c);
    c->v.s[6] = LD32(c->r[6] + 12u);
    c->v.s[14] = LD32(c->r[6] + 28u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[12] = LD32(c->r[6] + 24u);
    c->v.s[1] = 0x0u;
    c->v.s[9] = LD32(c->r[6] + 44u);
    c->v.s[3] = LD32(c->r[6] + 32u);
    c->v.s[5] = LD32(c->r[6] + 36u);
    c->v.s[7] = LD32(c->r[6] + 40u);
    c->v.s[16] = LD32(c->r[6] + 60u);
    c->v.s[11] = LD32(c->r[6] + 48u);
    c->v.s[13] = LD32(c->r[6] + 52u);
    c->v.s[15] = LD32(c->r[6] + 56u);
    c->v.f[6] = c->v.f[6] + c->v.f[14];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[8] = c->v.f[0] + c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[6] = c->v.f[16] + c->v.f[6];
    c->v.f[0] = c->v.f[15] + c->v.f[4];
    c->v.f[2] = c->v.f[13] + c->v.f[2];
    c->v.f[4] = c->v.f[11] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bfa498; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
L_bfa498:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[9]); }
    ST32(c->r[4] + 80u, c->v.s[4]);
    ST32(c->r[4] + 84u, c->v.s[2]);
    ST32(c->r[4] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[3]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfa56c(Cpu *restrict c) {
    FN_ENTER(0xbfa56cu);
L_bfa56c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[0] = LD32(c->r[1] + 884u);
    c->v.s[8] = LD32(c->r[1] + 900u);
    c->v.s[2] = LD32(c->r[1] + 888u);
    c->v.s[4] = LD32(c->r[1] + 880u);
    c->v.s[6] = LD32(c->r[1] + 896u);
    c->v.s[10] = LD32(c->r[1] + 904u);
    c->v.s[12] = 0x3f000000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[0] = c->v.f[2] + c->v.f[10];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[0] * c->v.f[12]);
    ST32(c->r[0] + 96u, c->v.s[6]);
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 116u, c->v.s[8]);
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 136u, c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x60u;
    c->v.s[0] = LD32(c->r[1] + 896u);
    c->v.s[10] = LD32(c->r[1] + 880u);
    c->v.s[2] = LD32(c->r[1] + 900u);
    c->v.s[6] = LD32(c->r[1] + 884u);
    c->v.s[4] = LD32(c->r[1] + 904u);
    c->v.s[8] = LD32(c->r[1] + 888u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[13];
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[12];
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[14] = 0xbfa67cu; f_21ebe8(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    return;
}
void f_bfa688(Cpu *restrict c) {
    FN_ENTER(0xbfa688u);
L_bfa688:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[2];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_bfa6ac; }
    c->r[14] = 0xbfa69cu; f_bfa3d8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] + 0x370u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a04790(c);
L_bfa6ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfa6b4(Cpu *restrict c) {
    FN_ENTER(0xbfa6b4u);
L_bfa6b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[4] = c->r[1];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfa700; }
    c->r[3] = 0xfffeu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bfa700:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfa708u; f_a826fc(c);
    c->r[1] = 0xcu;
    c->r[0] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    c->r[3] = 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xbfa72cu; f_a8454c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfa764; }
    c->r[1] = 0xc76f28u;
    c->r[2] = 0x48u;
    c->r[1] = 0xbfa750u + c->r[1];
    c->r[14] = 0xbfa750u; f_15efe30(c);
    c->r[0] = 0xc76e88u;
    c->r[2] = 0x60u;
    c->r[1] = 0xbfa760u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xbfa764u; f_15efdd0(c);
L_bfa764:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfa76cu; f_a82760(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfa77c(Cpu *restrict c) {
    FN_ENTER(0xbfa77cu);
L_bfa77c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bfa868; }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    c->v.s[0] = LD32(c->r[5] + 1012u);
    c->v.s[2] = 0x3f8a8bd4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x3d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 112u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 132u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 152u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x70u;
    c->r[1] = c->r[13];
    c->r[14] = 0xbfa84cu; f_21ebe8(c);
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 188u, c->v.s[16]);
L_bfa868:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfa878(Cpu *restrict c) {
    FN_ENTER(0xbfa878u);
L_bfa878:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbfa884u; f_bfa3d8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] + 0xb0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a032e0(c);
}
void f_bfa894(Cpu *restrict c) {
    FN_ENTER(0xbfa894u);
L_bfa894:;
    __attribute__((musttail)) return f_bf66a0(c);
}
void f_bfa898(Cpu *restrict c) {
    FN_ENTER(0xbfa898u);
L_bfa898:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bfad0c; }
    c->v.s[0] = LD32(c->r[5] + 996u);
    c->v.s[8] = LD32(c->r[5] + 1012u);
    c->v.s[4] = LD32(c->r[5] + 992u);
    c->v.s[6] = LD32(c->r[5] + 1008u);
    c->v.s[2] = LD32(c->r[5] + 1000u);
    c->v.s[10] = LD32(c->r[5] + 1016u);
    c->v.f[22] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[24] = c->v.f[10] - c->v.f[2];
    c->v.f[18] = c->v.f[22] * c->v.f[22];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[16] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfa90c; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xbfa908u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bfa90c:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_bfa940; }
    c->r[0] = 0xe3e930u;
    { uint32_t ea = 0xbfa928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[17] = c->v.s[0];
    c->v.s[28] = c->v.s[2];
    c->v.s[30] = c->v.s[4];
    goto L_bfa980;
L_bfa940:;
    c->v.f[0] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfa958; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xbfa958u; f_15efddc(c);
L_bfa958:;
    c->v.s[2] = 0x3f800000u;
    c->r[0] = 0xe3e8ecu;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    { uint32_t ea = 0xbfa96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[30] = c->v.f[24] * c->v.f[0];
    c->v.f[28] = c->v.f[22] * c->v.f[0];
    c->v.f[17] = c->v.f[20] * c->v.f[0];
    c->v.s[0] = LD32(c->r[0]);
L_bfa980:;
    c->r[0] = 0x404u;
    c->v.s[8] = LD32(c->r[5] + 1008u);
    c->v.s[3] = LD32(c->r[5] + 992u);
    c->v.f[6] = c->v.f[28] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[0]);
    c->v.s[10] = LD32(c->r[5] + 1012u);
    c->v.s[14] = LD32(c->r[5] + 996u);
    c->v.s[12] = LD32(c->r[5] + 1016u);
    c->v.s[1] = LD32(c->r[5] + 1000u);
    c->v.s[19] = 0x3f000000u;
    c->r[0] = c->r[5] + c->r[0];
    c->v.s[18] = LD32(c->r[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.s[20] = c->v.s[18];
    c->v.f[8] = c->v.f[3] + c->v.f[8];
    c->v.f[12] = c->v.f[1] + c->v.f[12];
    c->v.f[10] = c->v.f[14] + c->v.f[10];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[16] * c->v.f[19]);
    c->v.f[26] = c->v.f[8] * c->v.f[19];
    c->v.s[8] = 0xbf7fbe77u;
    c->v.f[22] = c->v.f[12] * c->v.f[19];
    c->v.f[24] = c->v.f[10] * c->v.f[19];
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bfaa0c; }
    c->v.s[6] = 0x3c23d70au;
    c->v.f[8] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bfaa78; }
    c->r[0] = 0xe3e804u;
    { uint32_t ea = 0xbfaa04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_bfaab4;
L_bfaa0c:;
    c->v.s[16] = 0x3f800000u;
    c->v.f[0] = c->v.f[6] + c->v.f[16];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfaa30; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbfaa30u; f_15efddc(c);
L_bfaa30:;
    c->r[0] = 0xe3e814u;
    c->v.f[14] = c->v.f[16] / c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    { uint32_t ea = 0xbfaa44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[28] * c->v.f[2];
    c->v.f[10] = c->v.f[17] * c->v.f[6];
    c->v.f[12] = c->v.f[30] * c->v.f[4];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[28] * c->v.f[6]);
    c->v.f[6] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[14] * c->v.f[10];
    c->v.f[4] = c->v.f[14] * c->v.f[12];
    goto L_bfab14;
L_bfaa78:;
    c->r[0] = 0xe3e778u;
    c->v.f[8] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    { uint32_t ea = 0xbfaa8cu + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe3e7bcu;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    { uint32_t ea = 0xbfaa9cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_bfaab4:;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[2]);
    c->v.f[28] = c->v.f[4] * c->v.f[6];
    c->v.f[16] = c->v.f[2] * c->v.f[8];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[30] = c->v.f[0] * c->v.f[10];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfaafc; }
    c->r[14] = 0xbfaaf8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bfaafc:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[4] = c->v.f[0] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[6] = c->v.f[30] * c->v.f[4];
    c->v.f[2] = c->v.f[4] * c->v.f[28];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
L_bfab14:;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.s[14] = 0x3f800000u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[13] + 0x20u;
    c->r[7] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 144u, c->v.s[26]);
    ST32(c->r[13] + 148u, c->v.s[24]);
    ST32(c->r[13] + 152u, c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[5] = c->v.f[4] * c->v.f[10];
    c->v.f[7] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[12] + c->v.f[6];
    c->v.f[9] = c->v.f[5] + c->v.f[3];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[3] = c->v.f[5] - c->v.f[3];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    ST32(c->r[13] + 32u, c->v.s[1]);
    c->v.f[1] = c->v.f[4] + c->v.f[4];
    ST32(c->r[13] + 36u, c->v.s[9]);
    ST32(c->r[13] + 40u, c->v.s[11]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 48u, c->v.s[3]);
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[0] = c->v.f[1] * c->v.f[0];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[6] = c->v.f[14] - c->v.f[6];
    c->v.f[2] = c->v.f[14] - c->v.f[4];
    ST32(c->r[13] + 52u, c->v.s[6]);
    c->v.f[6] = c->v.f[7] + c->v.f[10];
    ST32(c->r[13] + 56u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 64u, c->v.s[6]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    ST32(c->r[13] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    c->r[14] = 0xbfac10u; f_21ebe8(c);
    c->r[0] = c->r[4] + 0xb0u;
    c->r[1] = c->r[5];
    ST32(c->r[4] + 176u, c->v.s[18]);
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 196u, c->v.s[18]);
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 216u, c->v.s[20]);
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[7]); }
    c->r[14] = 0xbfac5cu; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 160u, c->v.s[18]);
    ST32(c->r[4] + 164u, c->v.s[18]);
    ST32(c->r[4] + 168u, c->v.s[20]);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x6cu;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
L_bfad0c:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfad40(Cpu *restrict c) {
    FN_ENTER(0xbfad40u);
L_bfad40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbfad4cu; f_bfa3d8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a0488c(c);
}
void f_bfad5c(Cpu *restrict c) {
    FN_ENTER(0xbfad5cu);
L_bfad5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[4] = c->r[1];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfada8; }
    c->r[3] = 0xfffeu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bfada8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfadb0u; f_a826fc(c);
    c->r[1] = 0xcu;
    c->r[0] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    c->r[3] = 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xbfadd4u; f_a8454c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfae0c; }
    c->r[1] = 0xc76880u;
    c->r[2] = 0x48u;
    c->r[1] = 0xbfadf8u + c->r[1];
    c->r[14] = 0xbfadf8u; f_15efe30(c);
    c->r[0] = 0xc767e0u;
    c->r[2] = 0x60u;
    c->r[1] = 0xbfae08u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xbfae0cu; f_15efdd0(c);
L_bfae0c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfae14u; f_a82760(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfae24(Cpu *restrict c) {
    FN_ENTER(0xbfae24u);
L_bfae24:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    c->r[2] = 0x418u;
    c->r[3] = 0x414u;
    c->r[0] = c->r[0] + 0x60u;
    c->r[2] = c->r[1] + c->r[2];
    c->r[3] = c->r[1] + c->r[3];
    c->v.s[1] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[2]);
    c->r[3] = c->r[1] + 0x3f0u;
    c->r[2] = c->r[1] + 0x400u;
    c->r[1] = c->r[3];
    __attribute__((musttail)) return f_bf6b40(c);
}
void f_bfae58(Cpu *restrict c) {
    FN_ENTER(0xbfae58u);
L_bfae58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbfae64u; f_bfa3d8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] + 0xb0u;
    c->r[14] = 0xbfae70u; f_9c8a6c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfae7c(Cpu *restrict c) {
    FN_ENTER(0xbfae7cu);
L_bfae7c:;
    __attribute__((musttail)) return f_bf6a14(c);
}
void f_bfae80(Cpu *restrict c) {
    FN_ENTER(0xbfae80u);
L_bfae80:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x168u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfb244; }
    c->v.s[0] = LD32(c->r[1] + 964u);
    c->v.s[8] = LD32(c->r[1] + 980u);
    c->v.s[2] = LD32(c->r[1] + 968u);
    c->v.s[10] = LD32(c->r[1] + 984u);
    c->v.s[4] = LD32(c->r[1] + 960u);
    c->v.s[6] = LD32(c->r[1] + 976u);
    c->r[0] = 0x438u;
    c->r[2] = 0x444u;
    c->r[3] = 0x434u;
    c->r[7] = c->r[1] + 0x430u;
    c->r[5] = c->r[1] + 0x3c0u;
    c->r[6] = 0x0u;
    c->r[0] = c->r[1] + c->r[0];
    c->r[2] = c->r[1] + c->r[2];
    c->r[3] = c->r[1] + c->r[3];
    c->v.s[22] = LD32(c->r[7]);
    c->v.s[18] = LD32(c->r[3]);
    c->v.s[20] = LD32(c->r[2]);
    c->v.s[16] = LD32(c->r[0]);
    c->r[3] = c->r[1] + 0x3e0u;
    c->r[0] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = c->r[5];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 224u, c->v.s[4]);
    ST32(c->r[13] + 228u, c->v.s[0]);
    ST32(c->r[13] + 232u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    c->r[14] = 0xbfaf20u; f_9c5e4c(c);
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[16] + c->v.f[20];
    c->v.s[0] = 0x3f000000u;
    c->r[8] = c->r[13] + 0x60u;
    c->r[9] = 0x3f800000u;
    c->r[1] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[6]); }
    c->v.f[16] = c->v.f[22] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 160u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 180u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[6]); }
    c->v.f[20] = c->v.f[20] - c->v.f[2];
    ST32(c->r[13] + 280u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 200u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xbfb04cu; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 144u);
    c->v.s[6] = LD32(c->r[13] + 148u);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = LD32(c->r[13] + 152u);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[10] = c->r[13] + 0x68u;
    c->v.s[12] = c->r[7];
    c->v.s[10] = c->r[5];
    c->v.s[8] = c->r[3];
    c->v.s[14] = c->r[1];
    c->v.s[1] = c->r[2];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[13] + 0xa0u;
    c->r[2] = c->r[8];
    c->v.f[12] = c->v.f[12] * c->v.f[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.s[0] = c->r[0];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[8] = c->r[14];
    c->v.s[14] = c->r[12];
    c->r[0] = c->r[13] + 0x20u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.s[0] = c->v.s[12] ^ 0x80000000u;
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xbfb114u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    ST32(c->r[4] + 160u, c->v.s[16]);
    ST32(c->r[4] + 164u, c->v.s[18]);
    ST32(c->r[4] + 168u, c->v.s[20]);
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x6cu;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
L_bfb244:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfb254(Cpu *restrict c) {
    FN_ENTER(0xbfb254u);
L_bfb254:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbfb260u; f_bfa3d8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a0488c(c);
}
void f_bfb270(Cpu *restrict c) {
    FN_ENTER(0xbfb270u);
L_bfb270:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[4] = c->r[1];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfb2bc; }
    c->r[3] = 0xfffeu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | 0x1u;
    c->r[1] = c->r[1] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_bfb2bc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfb2c4u; f_a826fc(c);
    c->r[1] = 0xcu;
    c->r[0] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    c->r[3] = 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xbfb2e8u; f_a8454c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfb320; }
    c->r[1] = 0xc7636cu;
    c->r[2] = 0x48u;
    c->r[1] = 0xbfb30cu + c->r[1];
    c->r[14] = 0xbfb30cu; f_15efe30(c);
    c->r[0] = 0xc762ccu;
    c->r[2] = 0x60u;
    c->r[1] = 0xbfb31cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xbfb320u; f_15efdd0(c);
L_bfb320:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfb328u; f_a82760(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfb338(Cpu *restrict c) {
    FN_ENTER(0xbfb338u);
L_bfb338:;
    return;
}
void f_bfb33c(Cpu *restrict c) {
    FN_ENTER(0xbfb33cu);
L_bfb33c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3dfb0u;
    { uint32_t ea = 0xbfb350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb350u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb368(Cpu *restrict c) {
    FN_ENTER(0xbfb368u);
L_bfb368:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x360u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bfb398; }
    c->r[2] = 0xe3da24u;
    { uint32_t ea = 0xbfb38cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x22cu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bfb3a4; }
L_bfb398:;
    c->r[0] = c->r[0] & ~0x11u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    return;
L_bfb3a4:;
    c->r[0] = c->r[0] | 0x11u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    return;
}
void f_bfb3b4(Cpu *restrict c) {
    FN_ENTER(0xbfb3b4u);
L_bfb3b4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[10] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bfb3e8; }
    { uint32_t ea = c->r[1] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_bfb3e8; }
    c->r[0] = 0x1u;
    c->r[5] = 0x9u;
    goto L_bfb3f0;
L_bfb3e8:;
    c->r[0] = 0x0u;
    c->r[5] = 0x8u;
L_bfb3f0:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3d95cu;
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[10];
    { uint32_t ea = 0xbfb408u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb40cu; f_dd3814(c);
    c->r[1] = 0x1ef4u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bfb51c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfb488; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[6] = 0x39eu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[2]); }
L_bfb488:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfb4c8; }
    c->r[2] = 0xe43b18u;
    c->r[3] = 0xe43b18u;
    { uint32_t ea = 0xbfb4a0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbfb4a4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3be60000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bfb4d0;
L_bfb4c8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bfb4d0:;
    c->r[2] = 0x1ef8u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bfb4f4; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bfb510;
L_bfb4f4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bfb510:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bfb51c:;
    c->r[0] = 0x3b64u;
    c->r[11] = c->r[10];
    c->r[2] = 0x3960u;
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD32(ea); c->r[11] = ea; c->r[1] = v; }
    c->r[0] = 0xc4acu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_bfb5d4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfb5a8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x72cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[11]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfb5a8:;
    c->r[1] = 0x3960u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x72cu;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b68u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_bfb5d4:;
    { uint32_t ea = c->r[10] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x38u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x80000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_bfb604; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[10] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
L_bfb604:;
    c->r[9] = c->r[10];
    c->r[2] = 0xfff8u;
    c->r[12] = 0xaafdu;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x87a40000u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfb650; }
    c->r[2] = 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = f_adds(c, c->r[7], 0x1u);
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[14] = c->r[14] | c->r[2];
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
L_bfb650:;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[4] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_EQ) { c->r[6] = (c->r[2] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[5]); }
    if (COND_NE) { goto L_bfb67c; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bfb6ac; }
L_bfb67c:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    c->r[3] = c->r[3] | (c->r[5] >> 24);
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] | 0x3u;
    c->r[2] = c->r[2] | (c->r[5] << 8);
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[2]); }
    c->r[2] = 0xafdu;
    c->r[14] = c->r[2] | (c->r[5] << 16);
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
L_bfb6ac:;
    c->r[2] = 0x100cu;
    { uint32_t ea = c->r[10] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x120u; ST32(ea, c->r[2]); } }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[2] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bfb714; }
    { uint32_t ea = c->r[7] + 0x304u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_NE) { goto L_bfb714; }
    c->r[3] = 0xe3de1cu;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbfb6f8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { c->r[7] = 0x15e4u; }
    if (COND_EQ) { c->r[7] = 0x15ecu; }
    { uint32_t ea = c->r[10] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { goto L_bfb75c; }
    goto L_bfb750;
L_bfb714:;
    c->r[3] = 0xe3ddecu;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbfb728u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_bfb744; }
    c->r[7] = 0x15dcu;
    { uint32_t ea = c->r[10] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { goto L_bfb75c; }
    goto L_bfb750;
L_bfb744:;
    { uint32_t ea = c->r[10] + 0xfbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { goto L_bfb75c; }
L_bfb750:;
    { uint32_t ea = c->r[10] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_bfb770; }
L_bfb75c:;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x108u; ST32(ea, c->r[3]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[2] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
L_bfb770:;
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1fe00000u;
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfb79c; }
    c->r[0] = 0xfffeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[1] & c->r[0];
    c->r[0] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x800000u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[14]); }
L_bfb79c:;
    c->r[0] = c->r[10];
    c->r[14] = 0xbfb7a4u; f_a826fc(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[2] = 0xcu;
    c->r[14] = 0xbfb7b4u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfb7d4; }
    c->r[1] = 0xc75e80u;
    c->r[1] = 0xbfb7c8u + c->r[1];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_bfb7d4:;
    c->r[0] = c->r[10];
    c->r[14] = 0xbfb7dcu; f_a82760(c);
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3960u;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bfb87c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfb858; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x72cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[11]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfb858:;
    c->r[1] = 0x3960u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x72cu;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b68u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_bfb87c:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfb89c(Cpu *restrict c) {
    FN_ENTER(0xbfb89cu);
L_bfb89c:;
    c->r[0] = c->r[0] + 0x10u;
    return;
}
void f_bfb8a4(Cpu *restrict c) {
    FN_ENTER(0xbfb8a4u);
L_bfb8a4:;
    return;
}
void f_bfb8a8(Cpu *restrict c) {
    FN_ENTER(0xbfb8a8u);
L_bfb8a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3da44u;
    { uint32_t ea = 0xbfb8bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb8bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb8d4(Cpu *restrict c) {
    FN_ENTER(0xbfb8d4u);
L_bfb8d4:;
    c->r[0] = c->r[0] + 0x10u;
    return;
}
void f_bfb8dc(Cpu *restrict c) {
    FN_ENTER(0xbfb8dcu);
L_bfb8dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3da10u;
    { uint32_t ea = 0xbfb8f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb8f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb908(Cpu *restrict c) {
    FN_ENTER(0xbfb908u);
L_bfb908:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3d9e4u;
    { uint32_t ea = 0xbfb91cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb91cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb934(Cpu *restrict c) {
    FN_ENTER(0xbfb934u);
L_bfb934:;
    c->r[0] = c->r[0] + 0x60u;
    return;
}
void f_bfb93c(Cpu *restrict c) {
    FN_ENTER(0xbfb93cu);
L_bfb93c:;
    return;
}
void f_bfb940(Cpu *restrict c) {
    FN_ENTER(0xbfb940u);
L_bfb940:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3d9acu;
    { uint32_t ea = 0xbfb954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb954u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb96c(Cpu *restrict c) {
    FN_ENTER(0xbfb96cu);
L_bfb96c:;
    c->r[0] = c->r[0] + 0x70u;
    return;
}
void f_bfb974(Cpu *restrict c) {
    FN_ENTER(0xbfb974u);
L_bfb974:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3d978u;
    { uint32_t ea = 0xbfb988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb988u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb9a0(Cpu *restrict c) {
    FN_ENTER(0xbfb9a0u);
L_bfb9a0:;
    c->r[0] = c->r[0] + 0xb0u;
    return;
}
void f_bfb9a8(Cpu *restrict c) {
    FN_ENTER(0xbfb9a8u);
L_bfb9a8:;
    return;
}
void f_bfb9ac(Cpu *restrict c) {
    FN_ENTER(0xbfb9acu);
L_bfb9ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3d940u;
    { uint32_t ea = 0xbfb9c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb9c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfb9d8(Cpu *restrict c) {
    FN_ENTER(0xbfb9d8u);
L_bfb9d8:;
    c->r[0] = c->r[0] + 0x70u;
    return;
}
void f_bfb9e0(Cpu *restrict c) {
    FN_ENTER(0xbfb9e0u);
L_bfb9e0:;
    return;
}
void f_bfb9e4(Cpu *restrict c) {
    FN_ENTER(0xbfb9e4u);
L_bfb9e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3d908u;
    { uint32_t ea = 0xbfb9f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfb9f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfba10(Cpu *restrict c) {
    FN_ENTER(0xbfba10u);
L_bfba10:;
    c->r[0] = c->r[0] + 0xb0u;
    return;
}
void f_bfba18(Cpu *restrict c) {
    FN_ENTER(0xbfba18u);
L_bfba18:;
    c->r[0] = 0x0u;
    return;
}
void f_bfba20(Cpu *restrict c) {
    FN_ENTER(0xbfba20u);
L_bfba20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe3f808u;
    { uint32_t ea = 0xbfba30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfba34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0xbfba4cu; rt_dispatch(c);
    c->r[1] = 0xe3f7d4u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbfba5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfba6c(Cpu *restrict c) {
    FN_ENTER(0xbfba6cu);
L_bfba6c:;
    c->r[1] = 0xe3f7b4u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbfba7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_bfba88(Cpu *restrict c) {
    FN_ENTER(0xbfba88u);
L_bfba88:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xbfbac0u; f_9bb638(c);
    c->r[1] = 0xb61286u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbfbad4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bfbb20(Cpu *restrict c) {
    FN_ENTER(0xbfbb20u);
L_bfbb20:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_bfbb24(Cpu *restrict c) {
    FN_ENTER(0xbfbb24u);
L_bfbb24:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[6] = c->r[13] + 0xcu;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbb44u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbb64u; f_a31b90(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbb6cu; f_a2fb10(c);
    c->r[13] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfbb74(Cpu *restrict c) {
    FN_ENTER(0xbfbb74u);
L_bfbb74:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x340u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbb94u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbbb0u; f_a2fb14(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbbb8u; f_a2fb10(c);
    c->r[13] = c->r[13] + 0x340u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfbbc0(Cpu *restrict c) {
    FN_ENTER(0xbfbbc0u);
L_bfbbc0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[4] = c->r[0];
    c->r[6] = c->r[13] + 0x8u;
    c->r[5] = c->r[1];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xbfbbe4u; f_d21388(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbfbbf4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbc00u; f_d215b4(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbc08u; f_d213cc(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bfbc34; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bfbc70; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbfbc30u; rt_dispatch(c);
    goto L_bfbd34;
L_bfbc34:;
    c->r[6] = c->r[13] + 0x8u;
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbc44u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbc64u; f_a31b90(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbc6cu; f_a2fb10(c);
    goto L_bfbd34;
L_bfbc70:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbfbc80u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfffcu;
    c->r[7] = c->r[13] + 0x8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1ff0000u;
    c->r[6] = c->r[1] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0xbfbca4u; f_15efe30(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbfbcb4u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbfbcc0u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bfbd08; }
    c->r[1] = c->r[7] | 0x1u;
    c->r[2] = c->r[0] + 0x1u;
    c->r[3] = c->r[6];
L_bfbcd4:;
    { uint32_t ea = c->r[2] - 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] - 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->r[7] = c->r[5] ^ c->r[7];
    { uint32_t ea = c->r[1] - 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x2u;
    c->r[7] = c->r[5] ^ c->r[7];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x2u;
    if (COND_NE) { goto L_bfbcd4; }
    goto L_bfbd10;
L_bfbd08:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfbd1c; }
L_bfbd10:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbfbd1cu; rt_dispatch(c);
L_bfbd1c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x8u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xbfbd34u; rt_dispatch(c);
L_bfbd34:;
    c->r[13] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfbd40(Cpu *restrict c) {
    FN_ENTER(0xbfbd40u);
L_bfbd40:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xbfbd60u; f_d219cc(c);
    c->r[14] = 0xbfbd64u; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbfbd70u; f_d21a04(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbd78u; f_9aef68(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfbe80; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbfbd90u; rt_dispatch(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_bfbe80; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bfbdc8; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bfbe00; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbfbdc4u; rt_dispatch(c);
    goto L_bfbe7c;
L_bfbdc8:;
    c->r[6] = c->r[13] + 0x8u;
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbdd8u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbdf4u; f_a2fb14(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xbfbdfcu; f_a2fb10(c);
    goto L_bfbe7c;
L_bfbe00:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbfbe10u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfffcu;
    c->r[7] = c->r[13] + 0x8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1ff0000u;
    c->r[6] = c->r[1] & (c->r[0] << 2);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbfbe3cu; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_bfbe7c; }
    c->r[0] = c->r[4] + 0x1u;
    c->r[1] = c->r[7] + 0x1u;
L_bfbe4c:;
    { uint32_t ea = c->r[1] - 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x2u);
    c->r[2] = c->r[3] ^ c->r[2];
    { uint32_t ea = c->r[0] - 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x2u;
    c->r[2] = c->r[3] ^ c->r[2];
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x2u;
    if (COND_NE) { goto L_bfbe4c; }
L_bfbe7c:;
    c->r[6] = c->r[4];
L_bfbe80:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfbe90(Cpu *restrict c) {
    FN_ENTER(0xbfbe90u);
L_bfbe90:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bfbe94(Cpu *restrict c) {
    FN_ENTER(0xbfbe94u);
L_bfbe94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3f388u;
    { uint32_t ea = 0xbfbea8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3f380u;
    { uint32_t ea = 0xbfbeb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfbeb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfbed4(Cpu *restrict c) {
    FN_ENTER(0xbfbed4u);
L_bfbed4:;
    c->r[0] = 0xe3f358u;
    { uint32_t ea = 0xbfbee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfbee4(Cpu *restrict c) {
    FN_ENTER(0xbfbee4u);
L_bfbee4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0xe3cc54u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3f320u;
    { uint32_t ea = 0xbfbf10u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xb5a2acu;
    { uint32_t ea = 0xbfbf18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbfbf1cu + c->r[1];
    c->r[14] = 0xbfbf1cu; f_9aedcc(c);
    c->r[1] = 0xe471a4u;
    { uint32_t ea = 0xbfbf28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfbf44(Cpu *restrict c) {
    FN_ENTER(0xbfbf44u);
L_bfbf44:;
    c->r[0] = 0x0u;
    return;
}
void f_bfbf4c(Cpu *restrict c) {
    FN_ENTER(0xbfbf4cu);
L_bfbf4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3f2c8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbfbf6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    c->r[14] = 0xbfbf8cu; f_15effb0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfbfa4(Cpu *restrict c) {
    FN_ENTER(0xbfbfa4u);
L_bfbfa4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbfbfdcu; f_9bb638(c);
    c->r[1] = 0xb6756cu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xbfbff4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x24u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbfc058u; f_9bb638(c);
    c->r[1] = 0xb67bf6u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbfc06cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbfc0d8u; f_9bb638(c);
    c->r[1] = 0xb7b413u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbfc0ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbfc14cu; f_9bb638(c);
    c->r[1] = 0xb7b3aeu;
    c->r[1] = 0xbfc158u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x11u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfc1b0(Cpu *restrict c) {
    FN_ENTER(0xbfc1b0u);
L_bfc1b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe46efcu;
    c->r[5] = c->r[1];
    c->r[2] = 0x0u;
    c->r[1] = c->r[4];
    c->r[3] = c->r[5];
    { uint32_t ea = 0xbfc1d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc1d8u; f_dba2c8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_bfc254; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfc234; }
L_bfc1f0:;
    c->r[0] = ldrex32(c, c->r[1]);
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = strex32(c, c->r[1], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_bfc1f0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bfc228; }
    c->r[0] = 0xe3c96cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbfc21cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xbfc228u; rt_dispatch(c);
L_bfc228:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfc234:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_bfc254; }
L_bfc240:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bfc240; }
L_bfc254:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfc268(Cpu *restrict c) {
    FN_ENTER(0xbfc268u);
L_bfc268:;
    c->r[1] = c->r[0];
    c->r[0] = 0xe46e58u;
    { uint32_t ea = 0xbfc278u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    __attribute__((musttail)) return f_dbaa08(c);
}
void f_bfc288(Cpu *restrict c) {
    FN_ENTER(0xbfc288u);
L_bfc288:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = c->r[1];
    c->r[1] = c->r[0] + 0x4u;
    c->r[0] = c->r[13];
    c->r[3] = c->r[2];
    c->r[14] = 0xbfc2a4u; f_bfc990(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfc2ac(Cpu *restrict c) {
    FN_ENTER(0xbfc2acu);
L_bfc2ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfc37c; }
    c->r[0] = 0xe46de8u;
    c->r[1] = c->r[4];
    c->r[2] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbfc2e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc2ecu; f_dbabf4(c);
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc37c; }
    c->r[0] = 0xe46dc8u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0xbfc308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc30cu; f_dba9a4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bfc37c; }
    c->r[0] = 0xe3d09cu;
    c->r[6] = ~0x0u;
    { uint32_t ea = 0xbfc328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_bfc364; }
    c->r[14] = 0xbfc33cu; f_da84f0(c);
    c->r[1] = 0x41d0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfc364; }
    c->r[0] = 0xe3d06cu;
    { uint32_t ea = 0xbfc358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc35cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
L_bfc364:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbfc37cu; rt_dispatch(c);
L_bfc37c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfc394(Cpu *restrict c) {
    FN_ENTER(0xbfc394u);
L_bfc394:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfc3d0; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0xe46d0cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2];
    c->r[2] = 0xc0u;
    { uint32_t ea = 0xbfc3c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc3c8u; f_dbabf4(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_bfc3d0:;
    return;
}
void f_bfc3d8(Cpu *restrict c) {
    FN_ENTER(0xbfc3d8u);
L_bfc3d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_bfc418; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfc418; }
    c->r[0] = 0xe46cbcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2];
    c->r[2] = c->r[12];
    { uint32_t ea = 0xbfc414u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc418u; f_dbabf4(c);
L_bfc418:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfc424(Cpu *restrict c) {
    FN_ENTER(0xbfc424u);
L_bfc424:;
    c->r[0] = 0x0u;
    return;
}
void f_bfc42c(Cpu *restrict c) {
    FN_ENTER(0xbfc42cu);
L_bfc42c:;
    c->r[0] = 0x0u;
    return;
}
void f_bfc434(Cpu *restrict c) {
    FN_ENTER(0xbfc434u);
L_bfc434:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[0];
    c->r[5] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xbfc454u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc480; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbfc470u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc480; }
    c->r[7] = 0x1u;
    goto L_bfc4a8;
L_bfc480:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xbfc49cu; rt_dispatch(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[7] = 0x1u; }
L_bfc4a8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xbfc4b8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc4e8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xbfc4d4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc4e8; }
    c->r[7] = 0x1u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bfc4e8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[4]; c->r[14] = 0xbfc504u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[7] = 0x1u; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfc514(Cpu *restrict c) {
    FN_ENTER(0xbfc514u);
L_bfc514:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[3] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x48u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_bfc55c; }
    { uint32_t ea = c->r[3] + 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[3] & 0x1u;
    { uint32_t r = c->r[4] | c->r[12]; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { goto L_bfc55c; }
    c->r[0] = c->r[14] + (uint32_t)((int32_t)c->r[3] >> 1);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_bfc554; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
L_bfc554:;
    c->pc = c->r[12]; c->r[14] = 0xbfc558u; rt_dispatch(c);
    c->r[0] = 0x1u;
L_bfc55c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfc560(Cpu *restrict c) {
    FN_ENTER(0xbfc560u);
L_bfc560:;
    c->r[0] = 0x0u;
    return;
}
void f_bfc568(Cpu *restrict c) {
    FN_ENTER(0xbfc568u);
L_bfc568:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xe46b5cu;
    { uint32_t ea = 0xbfc578u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfc57cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x5cu;
    c->pc = c->r[4]; c->r[14] = 0xbfc594u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0xe3ec80u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0xbfc5b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    c->r[14] = 0xbfc5d4u; f_15effb0(c);
    c->r[0] = 0xe46ae8u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0xbfc5f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfc61c(Cpu *restrict c) {
    FN_ENTER(0xbfc61cu);
L_bfc61c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe46ab0u;
    { uint32_t ea = 0xbfc62cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfc630u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0xbfc648u; rt_dispatch(c);
    c->r[14] = 0xbfc64cu; f_bfba6c(c);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe46a80u;
    { uint32_t ea = 0xbfc660u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfc670(Cpu *restrict c) {
    FN_ENTER(0xbfc670u);
L_bfc670:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[2]);
    { uint32_t ea = c->r[6] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3cd30u;
    { uint32_t ea = 0xbfc694u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc698u; f_da84f0(c);
    c->r[1] = 0x2f3cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_bfc6ec; }
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[1] = c->r[3] & 0x1u; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bfc6f0; }
    c->r[1] = c->r[0] & c->r[3];
    c->r[4] = 0x1u;
    c->r[1] = c->r[1] & 0x1u;
L_bfc6c8:;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + 0x2u;
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bfc6c8; }
    goto L_bfc6f0;
L_bfc6ec:;
    c->r[1] = 0x0u;
L_bfc6f0:;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { c->r[0] = 0x1u; }
    if (COND_GE) { { uint32_t ea = c->r[6] + 0x59u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfc704(Cpu *restrict c) {
    FN_ENTER(0xbfc704u);
L_bfc704:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bfc708(Cpu *restrict c) {
    FN_ENTER(0xbfc708u);
L_bfc708:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3eb18u;
    { uint32_t ea = 0xbfc71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe469a4u;
    { uint32_t ea = 0xbfc72cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc73c; }
    c->r[1] = c->r[4];
    c->r[14] = 0xbfc73cu; f_dbaa08(c);
L_bfc73c:;
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0xbfc744u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc790; }
L_bfc750:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_bfc750; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bfc788; }
    c->r[0] = 0xe3c40cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbfc77cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xbfc788u; rt_dispatch(c);
L_bfc788:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_bfc790:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xbfc79cu; f_3e7644(c);
    c->r[0] = 0xe3ebc0u;
    { uint32_t ea = 0xbfc7a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc7a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfc7cc(Cpu *restrict c) {
    FN_ENTER(0xbfc7ccu);
L_bfc7cc:;
    c->r[0] = 0xe3eb90u;
    { uint32_t ea = 0xbfc7d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfc7dc(Cpu *restrict c) {
    FN_ENTER(0xbfc7dcu);
L_bfc7dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bfc7e0(Cpu *restrict c) {
    FN_ENTER(0xbfc7e0u);
L_bfc7e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bfc7e4(Cpu *restrict c) {
    FN_ENTER(0xbfc7e4u);
L_bfc7e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3ea3cu;
    { uint32_t ea = 0xbfc7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe468c8u;
    { uint32_t ea = 0xbfc808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc818; }
    c->r[1] = c->r[4];
    c->r[14] = 0xbfc818u; f_dbaa08(c);
L_bfc818:;
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0xbfc820u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfc86c; }
L_bfc82c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_bfc82c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bfc864; }
    c->r[0] = 0xe3c330u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xbfc858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xbfc864u; rt_dispatch(c);
L_bfc864:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_bfc86c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xbfc878u; f_3e7644(c);
    c->r[0] = 0xe46850u;
    { uint32_t ea = 0xbfc884u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc884u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfc8a8(Cpu *restrict c) {
    FN_ENTER(0xbfc8a8u);
L_bfc8a8:;
    c->r[0] = 0xe46820u;
    { uint32_t ea = 0xbfc8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfc8b8(Cpu *restrict c) {
    FN_ENTER(0xbfc8b8u);
L_bfc8b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_bfc91c; }
    c->r[0] = 0xe467fcu;
    { uint32_t ea = 0xbfc8e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xbfc8f0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_bfc91c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbfc914u; rt_dispatch(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bfc91c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfc940(Cpu *restrict c) {
    FN_ENTER(0xbfc940u);
L_bfc940:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3e8dcu;
    { uint32_t ea = 0xbfc954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe46778u;
    { uint32_t ea = 0xbfc964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfc964u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfc980(Cpu *restrict c) {
    FN_ENTER(0xbfc980u);
L_bfc980:;
    c->r[0] = 0xe46750u;
    { uint32_t ea = 0xbfc98cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfc990(Cpu *restrict c) {
    FN_ENTER(0xbfc990u);
L_bfc990:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[1];
    c->r[8] = c->r[3];
    c->r[11] = c->r[2];
    c->r[9] = c->r[0];
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bfca88; }
    c->r[4] = c->r[10] + 0x4u;
L_bfc9bc:;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_bfca8c; }
    c->r[7] = c->r[5];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bfca1c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bfca30; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_bfca00; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[3];
    c->r[14] = 0xbfca00u; f_9c8ee0(c);
L_bfca00:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_bfca1c; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_NE) { goto L_bfca3c; }
    goto L_bfcb50;
L_bfca1c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[7];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_bfc9bc; }
    goto L_bfcb44;
L_bfca30:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { goto L_bfcb50; }
L_bfca3c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfca70; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bfcb3c; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_bfca68; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[3];
    c->r[14] = 0xbfca68u; f_9c8ee0(c);
L_bfca68:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_bfcb3c; }
L_bfca70:;
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_bfc9bc; }
    c->r[5] = c->r[7];
    goto L_bfca8c;
L_bfca88:;
    c->r[5] = c->r[4];
L_bfca8c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_bfcb2c; }
    c->r[0] = 0xe3c9a0u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xbfcaacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[3]; c->r[14] = 0xbfcabcu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_bfcae4; }
L_bfcad0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_bfcad0; }
L_bfcae4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfcb10; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bfcb14;
L_bfcb10:;
    c->r[1] = c->r[6];
L_bfcb14:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfcb1cu; f_a1f9ec(c);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_bfcb2c:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_bfcb3c:;
    c->r[5] = c->r[7];
    goto L_bfca8c;
L_bfcb44:;
    c->r[5] = c->r[7];
    c->r[4] = c->r[7];
    goto L_bfca8c;
L_bfcb50:;
    c->r[5] = c->r[7];
    goto L_bfca8c;
}
void f_bfcb5c(Cpu *restrict c) {
    FN_ENTER(0xbfcb5cu);
L_bfcb5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1725f3cu;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0xbfcb84u + c->r[0];
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0xbfcbc8u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0xbfcbe0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xbfcbf8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0xe3e73cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbfcc2cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xe3bf30u;
    { uint32_t ea = 0xbfcc34u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xb5957bu;
    c->r[1] = 0xbfcc3cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbfcc40u; f_9aedcc(c);
    c->r[0] = 0xe46480u;
    c->r[1] = 0xb7a8a4u;
    c->r[2] = c->r[4];
    c->r[3] = 0x5cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbfcc64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbfcc68u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4645cu;
    { uint32_t ea = 0xbfcc78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfcc78u; f_9aedcc(c);
    c->r[1] = 0xe46454u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbfcc94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe3e590u;
    c->r[0] = 0xe4642cu;
    { uint32_t ea = 0xbfcca8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xb7a86eu;
    { uint32_t ea = 0xbfccb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbfccb4u + c->r[1];
    c->r[14] = 0xbfccb4u; f_9aedcc(c);
    c->r[1] = 0xe4642cu;
    { uint32_t ea = 0xbfccc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfccfc(Cpu *restrict c) {
    FN_ENTER(0xbfccfcu);
L_bfccfc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe463e4u;
    { uint32_t ea = 0xbfcd0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfcd10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0xbfcd28u; rt_dispatch(c);
    c->r[1] = 0xe463b4u;
    c->r[2] = ~0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x3f800000u;
    { uint32_t ea = 0xbfcd40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfcd54(Cpu *restrict c) {
    FN_ENTER(0xbfcd54u);
L_bfcd54:;
    c->r[1] = 0xe46388u;
    c->r[12] = ~0x0u;
    c->r[3] = 0x1u;
    c->r[2] = 0x3f800000u;
    { uint32_t ea = 0xbfcd6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    return;
}
void f_bfcd84(Cpu *restrict c) {
    FN_ENTER(0xbfcd84u);
L_bfcd84:;
    return;
}
void f_bfcd88(Cpu *restrict c) {
    FN_ENTER(0xbfcd88u);
L_bfcd88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe46354u;
    { uint32_t ea = 0xbfcd9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfcd9cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfcdb4(Cpu *restrict c) {
    FN_ENTER(0xbfcdb4u);
L_bfcdb4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[9] = c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0xbfcdccu; f_9bb638(c);
    c->r[1] = 0xb7a763u;
    c->r[7] = 0x6u;
    c->r[6] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x800000u;
    c->r[1] = 0xbfcde4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe46304u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = 0xbfcdf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe462f0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xbfce0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0xbfce44u; f_9bb638(c);
    c->r[1] = 0xb770a1u;
    c->r[8] = 0x0u;
    c->r[1] = 0xbfce54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xe462a0u;
    { uint32_t ea = 0xbfce60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe4628cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xbfce78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbfceccu; f_9bb638(c);
    c->r[1] = 0xb7a66du;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xbfcee4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbfcf44u; f_9bb638(c);
    c->r[1] = 0xb7a612u;
    c->r[1] = 0xbfcf50u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfcfb8(Cpu *restrict c) {
    FN_ENTER(0xbfcfb8u);
L_bfcfb8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfcfc0(Cpu *restrict c) {
    FN_ENTER(0xbfcfc0u);
L_bfcfc0:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_bfcfc8(Cpu *restrict c) {
    FN_ENTER(0xbfcfc8u);
L_bfcfc8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfcfd0(Cpu *restrict c) {
    FN_ENTER(0xbfcfd0u);
L_bfcfd0:;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    return;
}
void f_bfcfd8(Cpu *restrict c) {
    FN_ENTER(0xbfcfd8u);
L_bfcfd8:;
    c->r[0] = 0x0u;
    return;
}
void f_bfcfe0(Cpu *restrict c) {
    FN_ENTER(0xbfcfe0u);
L_bfcfe0:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_bfcfe4(Cpu *restrict c) {
    FN_ENTER(0xbfcfe4u);
L_bfcfe4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[7] = c->r[0];
    c->r[0] = 0xe3bd58u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[3];
    c->r[8] = c->r[2];
    { uint32_t ea = 0xbfd00cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xbfd01cu; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xbfd030u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xbfd044u; rt_dispatch(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[18];
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    c->r[14] = 0xbfd068u; f_dd4aa0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bfd078(Cpu *restrict c) {
    FN_ENTER(0xbfd078u);
L_bfd078:;
    c->v.s[0] = LD32(c->r[0] + 12u);
    return;
}
void f_bfd080(Cpu *restrict c) {
    FN_ENTER(0xbfd080u);
L_bfd080:;
    c->v.s[0] = LD32(c->r[0] + 16u);
    return;
}
void f_bfd088(Cpu *restrict c) {
    FN_ENTER(0xbfd088u);
L_bfd088:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe46070u;
    { uint32_t ea = 0xbfd098u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfd09cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x24u;
    c->pc = c->r[4]; c->r[14] = 0xbfd0b4u; rt_dispatch(c);
    c->r[1] = 0xe46030u;
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    c->r[4] = ~0x0u;
    c->r[14] = 0x1u;
    c->r[3] = 0x3f800000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xbfd0dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfd100(Cpu *restrict c) {
    FN_ENTER(0xbfd100u);
L_bfd100:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xe45fe0u;
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = ~0x0u;
    c->r[14] = 0x1u;
    c->r[4] = 0x3f800000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xbfd12cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfd14c(Cpu *restrict c) {
    FN_ENTER(0xbfd14cu);
L_bfd14c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe45facu;
    { uint32_t ea = 0xbfd160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd17c; }
    c->r[14] = 0xbfd174u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_bfd17c:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd194; }
    c->r[14] = 0xbfd18cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_bfd194:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd1ac; }
    c->r[14] = 0xbfd1a4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_bfd1ac:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bfd1b8(Cpu *restrict c) {
    FN_ENTER(0xbfd1b8u);
L_bfd1b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe45f40u;
    { uint32_t ea = 0xbfd1ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd1e8; }
    c->r[14] = 0xbfd1e0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_bfd1e8:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd200; }
    c->r[14] = 0xbfd1f8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_bfd200:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd218; }
    c->r[14] = 0xbfd210u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_bfd218:;
    c->r[0] = 0xe45ee4u;
    { uint32_t ea = 0xbfd224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfd224u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bfd240(Cpu *restrict c) {
    FN_ENTER(0xbfd240u);
L_bfd240:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[10] = c->r[1];
    c->r[8] = c->r[0];
    c->r[14] = 0xbfd254u; f_bfcdb4(c);
    c->r[0] = 0xe45e88u;
    c->r[11] = 0x0u;
    c->r[9] = c->r[13] + 0x28u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xbfd288u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe45e80u;
    { uint32_t ea = 0xbfd294u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7a2d6u;
    c->r[2] = 0xbfd2a0u + c->r[0];
    c->r[0] = 0xb60765u;
    c->r[3] = 0xbfd2a8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xbfd2acu; f_9af6e4(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xbfd2b4u; f_9bb638(c);
    c->r[12] = c->r[9];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe45e04u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[1] = c->r[8];
    { uint32_t ea = 0xbfd314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe45df8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xbfd324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7a24eu;
    c->r[2] = 0xbfd330u + c->r[0];
    c->r[0] = 0xb606d5u;
    c->r[3] = 0xbfd338u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xbfd33cu; f_9af6e4(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xbfd344u; f_9bb638(c);
    c->r[12] = c->r[9];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xbfd3a4u; f_9bb638(c);
    c->r[1] = 0xb77f6au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbfd3b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x14u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x20u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xb7a17bu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xbfd410u + c->r[0];
    c->r[0] = 0xb605f5u;
    c->r[3] = 0xbfd418u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xbfd41cu; f_9af630(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xbfd424u; f_9bb638(c);
    { uint32_t ea = c->r[9]; c->r[9] = c->r[9] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bfd48c(Cpu *restrict c) {
    FN_ENTER(0xbfd48cu);
L_bfd48c:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfd494(Cpu *restrict c) {
    FN_ENTER(0xbfd494u);
L_bfd494:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_bfd4b0; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfd4b0u; f_a87648(c);
L_bfd4b0:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd4c8; }
    c->r[14] = 0xbfd4c0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
L_bfd4c8:;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfd4d0(Cpu *restrict c) {
    FN_ENTER(0xbfd4d0u);
L_bfd4d0:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bfd4d8(Cpu *restrict c) {
    FN_ENTER(0xbfd4d8u);
L_bfd4d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_bfd4f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfd4f4u; f_a87648(c);
L_bfd4f4:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd50c; }
    c->r[14] = 0xbfd504u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
L_bfd50c:;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfd514(Cpu *restrict c) {
    FN_ENTER(0xbfd514u);
L_bfd514:;
    c->r[0] = 0x0u;
    return;
}
void f_bfd51c(Cpu *restrict c) {
    FN_ENTER(0xbfd51cu);
L_bfd51c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_bfd520(Cpu *restrict c) {
    FN_ENTER(0xbfd520u);
L_bfd520:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x34u;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfd538u; f_15efd7c(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfd55c; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[0]); }
L_bfd55c:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bfd584(Cpu *restrict c) {
    FN_ENTER(0xbfd584u);
L_bfd584:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + (c->r[2] << 6); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + (c->r[2] << 6); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    return;
}
void f_bfd5a8(Cpu *restrict c) {
    FN_ENTER(0xbfd5a8u);
L_bfd5a8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_bfd6e0; }
    { uint32_t ea = c->r[12] + 0x32u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfd6e0; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[3] = 0x100au;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1a6a0000u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[1] + 0x1ccu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { c->r[3] = 0xf00cu; }
    if (COND_NE) { c->r[3] = (c->r[3] & 0xFFFFu) | 0xf3670000u; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_bfd678; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfd65c; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[1] + 0xecu;
    c->r[7] = 0x1u;
    c->r[4] = c->r[4] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] | 0x80000000u;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x1ccu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[4] = c->r[4] + (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[4]); }
L_bfd65c:;
    { uint32_t ea = c->r[1] + 0x1ccu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] | 0x3u;
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
L_bfd678:;
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x13cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = (c->r[4] >> 16);
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0x128u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[5]); }
    if (COND_EQ) { goto L_bfd9fc; }
L_bfd698:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_bfd6c0; }
    c->r[6] = 0xe41908u;
    c->r[7] = 0xe41908u;
    { uint32_t ea = 0xbfd6b0u + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0xbfd6b4u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + c->r[6];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
L_bfd6c0:;
    { uint32_t ea = c->r[1] + 0x128u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x135u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x13cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + 0x150u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_bfd6d8:;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = 0x2u;
L_bfd6e0:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_bfd820; }
    { uint32_t ea = c->r[14] + 0x32u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[14] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfd820; }
    c->r[6] = 0xba2e8cu;
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[5] = 0xba2e8cu;
    c->r[10] = c->r[1] + (c->r[3] << 2);
    c->r[6] = 0xbfd714u + c->r[6];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[6] = 0xbfd71cu + c->r[5]; }
    c->r[4] = c->r[6] + (c->r[3] << 2);
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[6] + 0x1c8u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_EQ) { goto L_bfd7ac; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfd790; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[1] + 0xecu;
    c->r[5] = c->r[5] + 0x30c00u;
    c->r[9] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[5] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x80000000u;
    c->r[7] = c->r[7] | c->r[3];
    { uint32_t ea = c->r[5] + (c->r[9] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[5] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x80000000u;
    { uint32_t ea = c->r[5] + (c->r[9] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[5] + (c->r[7] << 2);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[5]); }
L_bfd790:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[14] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
L_bfd7ac:;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = (c->r[7] >> 16);
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x138u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x124u; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[4], c->r[7]); }
    if (COND_EQ) { goto L_bfda10; }
L_bfd7d0:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bfd7f8; }
    c->r[4] = 0xe417d4u;
    { uint32_t ea = 0xbfd7e4u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = 0xe417ccu;
    { uint32_t ea = 0xbfd7f0u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + c->r[9];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
L_bfd7f8:;
    c->r[4] = c->r[1] + 0x124u;
    { uint32_t ea = c->r[4] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    c->r[4] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[8]); }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x150u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
L_bfd818:;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[5]); }
L_bfd820:;
    c->r[6] = 0xc73e80u;
    c->r[7] = 0x329cu;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    c->r[7] = 0xcd74u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = 0xbfd840u + c->r[6];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[6] + (c->r[3] << 2);
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = c->r[14];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[7] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_bfd8f0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfd8c0; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[1] + 0xecu;
    c->r[4] = c->r[4] + 0x30c00u;
    c->r[8] = c->r[5] + (c->r[5] << 1);
    c->r[5] = 0x613u;
    { uint32_t ea = c->r[4] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[4] + (c->r[8] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[4] = c->r[4] + (c->r[5] << 2);
    { uint32_t ea = c->r[2]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
L_bfd8c0:;
    { uint32_t ea = c->r[7] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x32a0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    c->r[2] = 0xa000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x64f10000u;
    c->r[2] = c->r[14] ^ c->r[2];
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[7]); }
L_bfd8f0:;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_HI) { goto L_bfd9c8; }
    c->r[4] = c->r[1] + 0xecu;
    c->r[2] = c->r[1] + 0x154u;
    c->r[14] = 0x0u;
    c->r[8] = 0x1u;
    c->r[4] = c->r[4] + 0x30c00u;
L_bfd90c:;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[6] + 0x138u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_bfd938; }
    { uint32_t ea = c->r[6] + 0x124u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_bfd938; }
    c->r[7] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[7] + 0x134u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bfd94c; }
L_bfd938:;
    c->r[7] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[6] + 0x124u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x134u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x150u; ST32(ea, c->r[8]); }
L_bfd94c:;
    { uint32_t ea = c->r[6] + 0x1c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bfd9bc; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfd9ac; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[4] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x80000000u;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x1c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[5] = c->r[4] + (c->r[5] << 2);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[5]); }
L_bfd9ac:;
    { uint32_t ea = c->r[6] + 0x1c8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[5] = c->r[5] | 0x3u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
L_bfd9bc:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_NE) { goto L_bfd90c; }
L_bfd9c8:;
    { uint32_t ea = c->r[1] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2080000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[2] = (c->r[7] >> 27) & 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[7] >> 25) & 0x1u;
    c->r[3] = (c->r[7] >> 26) & 0x1u;
    c->r[14] = 0xbfd9f4u; f_bfda44(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bfd9fc:;
    { uint32_t ea = c->r[1] + 0x135u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_bfd698; }
    goto L_bfd6d8;
L_bfda10:;
    c->r[4] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[4] = (uint32_t)(uint8_t)(c->r[8]);
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_NE) { goto L_bfd7d0; }
    goto L_bfd818;
}
void f_bfda44(Cpu *restrict c) {
    FN_ENTER(0xbfda44u);
L_bfda44:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x32f4u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[0] = 0xcd1cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_bfdb08; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_bfdc54; }
    c->r[3] = 0x3110u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_bfdcf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdaec; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x61eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfdaec:;
    c->r[3] = 0x3110u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x1622u;
    c->r[1] = 0x32f8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa26a0000u;
    goto L_bfdce0;
L_bfdb08:;
    c->r[2] = 0x30f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_bfdba8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdb7c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x61eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfdb7c:;
    c->r[2] = 0x30f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x32f8u;
    c->r[1] = 0x61eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bfdba8:;
    c->r[1] = 0x1f54u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfe08c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdc1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x3aau;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_bfdc1c:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1f58u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bfe078; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    goto L_bfe080;
L_bfdc54:;
    c->r[3] = 0x3108u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_bfdcf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdcc8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x61eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfdcc8:;
    c->r[3] = 0x3108u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0xa621u;
    c->r[1] = 0x32f8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xf9a10000u;
L_bfdce0:;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[3]); }
L_bfdcf8:;
    c->r[7] = 0x32fcu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_NE) { goto L_bfdda0; }
    c->r[2] = 0x3100u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_bfde40; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdd84; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x61fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfdd84:;
    c->r[2] = 0x3100u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0xe620u;
    c->r[2] = 0x3300u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3e830000u;
    goto L_bfde28;
L_bfdda0:;
    c->r[2] = 0x30f8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_bfde40; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfde14; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x61fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfde14:;
    c->r[2] = 0x30f8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x3300u;
    c->r[3] = 0x61fu;
L_bfde28:;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[3]); }
L_bfde40:;
    c->r[3] = 0x32d4u;
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    if (COND_NE) { goto L_bfded8; }
    c->r[1] = 0x30d0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_bfdf7c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdec8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x61au;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfdec8:;
    c->r[1] = 0x30d0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x61au;
    goto L_bfdf5c;
L_bfded8:;
    c->r[1] = 0x30d8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_bfdf7c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfdf4c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x61au;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfdf4c:;
    c->r[1] = 0x30d8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x61bu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x758a0000u;
L_bfdf5c:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x32d8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_bfdf7c:;
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfe08c; }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x5b0au;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x17e10000u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_bfe08c; }
    c->v.s[2] = 0xb4000000u;
    c->v.s[0] = LD32(c->r[5] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bfdfc0; }
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bfe08c; }
L_bfdfc0:;
    c->r[2] = 0x1f54u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bfe0e4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfe038; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[7] = 0x3aau;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_bfe038:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfe090; }
    c->r[2] = 0xe40f68u;
    c->r[3] = 0xe40f68u;
    { uint32_t ea = 0xbfe050u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbfe054u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xeebd0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_bfe098;
L_bfe078:;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfe080:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_bfe08c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bfe090:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_bfe098:;
    c->r[2] = 0x1f58u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bfe0bc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bfe0d8;
L_bfe0bc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bfe0d8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_bfe0e4:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bfe158; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x261u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x150cu;
    c->r[2] = 0x1510u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bfe158:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x984u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbfe16cu; f_a6a438(c);
    c->r[3] = 0xfffcu;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x30000u;
    c->r[3] = c->r[3] & (c->r[6] << 2);
    c->r[1] = c->r[1] + c->r[2];
    c->r[1] = c->r[1] & c->r[0];
    c->r[2] = c->r[2] + c->r[3];
    c->r[0] = c->r[2] & c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0xfu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LS) { goto L_bfe1c0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbfe1bcu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bfe1c0:;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x150cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    if (COND_EQ) { goto L_bfe200; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
L_bfe200:;
    c->r[1] = c->r[4];
    c->r[12] = 0xbaf3u;
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x53e90000u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6] & 0x1fu;
    (void)f_subs(c, c->r[2], 0x11u);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xdu); }
    if (COND_EQ) { goto L_bfe26c; }
    (void)f_subs(c, c->r[2], 0xcu);
    if (COND_NE) { goto L_bfe08c; }
    c->r[2] = c->r[5] & 0xff00u;
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[8]); }
    if (COND_NE) { goto L_bfe250; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_EQ) { goto L_bfe08c; }
L_bfe250:;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    c->r[5] = (c->r[5] & 0xffff00ffu) | ((c->r[2] << 8) & 0xff00u);
    c->r[2] = 0xb0au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x20000u;
    goto L_bfe2a4;
L_bfe26c:;
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_EQ) { c->r[2] = c->r[5] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x300u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_bfe28c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_bfe28c:;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    c->r[5] = (c->r[5] & 0xffff00ffu) | ((c->r[2] << 8) & 0xff00u);
    c->r[2] = 0xb0au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
L_bfe2a4:;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfe2d0(Cpu *restrict c) {
    FN_ENTER(0xbfe2d0u);
L_bfe2d0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bfe320; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { goto L_bfe320; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[6] = c->r[1]; }
    if (COND_NE) { c->r[7] = 0x0u; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bfe32c; }
    goto L_bfe374;
L_bfe320:;
    c->r[7] = c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfe374; }
L_bfe32c:;
    c->r[1] = 0xe3aa28u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = 0xbfe33cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_bfe438; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = 0x3f800000u;
    c->v.s[2] = c->v.s[1];
    c->v.s[0] = LD32(c->r[0] + 116u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[4];
    c->r[2] = 0x8u;
    c->r[3] = c->r[5];
    goto L_bfe468;
L_bfe374:;
    c->r[1] = 0x28ecu;
    c->r[0] = c->r[4];
    c->r[3] = 0x26f0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd724u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_bfe724; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfe400; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4ddu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_bfe400:;
    c->r[2] = 0x26f0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x64deu;
    c->r[0] = 0x28f0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfd9f0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bfe438:;
    c->r[2] = 0x0u;
    c->r[0] = ~0x0u;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40ba8u;
    c->r[2] = 0x0u;
    c->v.s[1] = c->v.s[0];
    c->v.s[2] = c->v.s[0];
    { uint32_t ea = 0xbfe464u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[4];
L_bfe468:;
    c->r[14] = 0xbfe46cu; f_dd4aa0(c);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[8] = 0xfffcu;
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x32u; uint32_t v = LD8(ea); c->r[0] = v; } }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x30000u;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bfe5e8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bfe4f8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x23fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x13fcu;
    c->r[2] = 0x1400u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bfe4f8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbfe50cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[8] & (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bfe558; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xbfe554u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfe558:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x13fcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bfe724; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    goto L_bfe718;
L_bfe5e8:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bfe65c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x23eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x13f4u;
    c->r[2] = 0x13f8u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bfe65c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbfe670u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[8] & (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bfe6bc; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xbfe6b8u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfe6bc:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bfe724; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_bfe718:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_bfe724:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bfe734(Cpu *restrict c) {
    FN_ENTER(0xbfe734u);
L_bfe734:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[9] = c->r[0];
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bfeb78; }
    { uint32_t ea = c->r[0] + 0x6fu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[12] = 0x5618u;
    { uint32_t ea = c->r[0] + 0x6du; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[14] = 0x7610u;
    { uint32_t ea = c->r[0] + 0x6eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[5];
    c->r[3] = 0x8611u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xae6a0000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x17920000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x48ad0000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[12] = 0x5619u; }
    if (COND_NE) { c->r[12] = (c->r[12] & 0xFFFFu) | 0x517e0000u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x32a4u;
    if (COND_NE) { c->r[14] = 0xf60fu; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[6] = v; }
    c->r[2] = 0xcd6cu;
    if (COND_NE) { c->r[14] = (c->r[14] & 0xFFFFu) | 0x15d00000u; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = 0xc72f08u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    if (COND_NE) { c->r[3] = 0xa612u; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[3] = (c->r[3] & 0xFFFFu) | 0x73e60000u; }
    c->r[7] = 0xbfe7c4u + c->r[7];
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0];
    c->r[7] = c->r[7] & 0xfffu;
    { uint32_t ea = c->r[2] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_bfe86c; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfe83c; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[10] = c->r[2] + (c->r[2] << 1);
    c->r[2] = 0x614u;
    { uint32_t ea = c->r[1] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[10] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfe83c:;
    { uint32_t ea = c->r[2] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x668b0000u;
    c->r[0] = c->r[0] ^ c->r[1];
    c->r[1] = 0x32a8u;
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[1]); }
L_bfe86c:;
    c->r[0] = 0x3294u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    c->r[0] = 0x613u;
    c->r[0] = c->r[3] & c->r[0];
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_bfe920; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfe8f0; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + 0xecu;
    c->r[6] = 0x612u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfe8f0:;
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3298u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xa000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x73e60000u;
    c->r[0] = c->r[3] ^ c->r[0];
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[1]); }
L_bfe920:;
    c->r[0] = 0x327cu;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    c->r[0] = 0x61fu;
    c->r[0] = c->r[14] & c->r[0];
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_bfe9d4; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfe9a4; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + 0xecu;
    c->r[6] = 0x60fu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfe9a4:;
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3280u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x15d00000u;
    c->r[0] = c->r[14] ^ c->r[0];
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[1]); }
L_bfe9d4:;
    c->r[0] = 0x32c4u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = 0x619u;
    c->r[0] = c->r[12] & c->r[0];
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_bfea88; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfea58; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[5] + 0xecu;
    c->r[6] = 0x618u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfea58:;
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5000u;
    c->r[1] = 0x32c8u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xae6a0000u;
    c->r[0] = c->r[12] ^ c->r[0];
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[1]); }
L_bfea88:;
    c->r[3] = 0x2690u;
    c->r[1] = 0x2894u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { goto L_bfeb34; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfeb08; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + 0xecu;
    c->r[7] = 0x4d2u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_bfeb08:;
    c->r[1] = 0x2690u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2898u;
    c->r[1] = 0x4d2u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[1]); }
L_bfeb34:;
    c->r[1] = c->r[5];
    c->r[14] = 0xbfeb3cu; f_bfeb88(c);
    c->r[0] = 0xe3a208u;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[1] = 0x3f800000u;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = c->v.s[1];
    { uint32_t ea = 0xbfeb5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[3] + 116u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x8u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbfeb78u; f_dd4aa0(c);
L_bfeb78:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bfeb88(Cpu *restrict c) {
    FN_ENTER(0xbfeb88u);
L_bfeb88:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2080000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bfed20; }
    c->r[0] = 0x14dcu;
    c->v.s[22] = 0x34000000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->v.s[18] = LD32(c->r[0] + 24u);
    c->v.s[20] = LD32(c->r[0] + 20u);
    c->v.s[16] = LD32(c->r[0] + 28u);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bfed20; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfebf8; }
    c->r[14] = 0xbfebf4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bfebf8:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    c->v.f[0] = fabsf(c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bfec1c; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[2];
    c->v.f[20] = c->v.f[20] * c->v.f[2];
L_bfec1c:;
    c->v.s[2] = 0x3f7ff972u;
    c->v.s[4] = 0x0u;
    c->v.s[30] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.f[28] = c->v.f[18] * c->v.f[4];
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[4] : c->v.s[30];
    c->v.s[0] = COND_GT ? c->v.s[30] : c->v.s[4];
    c->v.f[26] = c->v.f[0] * c->v.f[20];
    c->v.f[24] = c->v.f[2] * c->v.f[16];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[18]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfec74; }
    c->r[14] = 0xbfec70u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bfec74:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bfec90; }
    c->v.f[0] = c->v.f[30] / c->v.f[2];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
L_bfec90:;
    c->v.f[2] = c->v.f[18] * c->v.f[28];
    c->v.f[14] = c->v.f[16] * c->v.f[24];
    c->v.f[6] = c->v.f[20] * c->v.f[26];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[26]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[18] * c->v.f[24]);
    c->v.s[0] = c->v.s[24] ^ 0x80000000u;
    c->v.s[4] = c->v.s[20] ^ 0x80000000u;
    c->v.s[8] = c->v.s[26] ^ 0x80000000u;
    c->v.s[1] = c->v.s[18] ^ 0x80000000u;
    c->v.s[10] = c->v.s[28] ^ 0x80000000u;
    c->v.s[12] = c->v.s[16] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[7] = c->r[5] | 0x4u;
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 32u, c->v.s[2]);
    ST32(c->r[13] + 48u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 20u, c->v.s[8]);
    ST32(c->r[13] + 36u, c->v.s[14]);
    ST32(c->r[13] + 52u, c->v.s[1]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 24u, c->v.s[10]);
    ST32(c->r[13] + 40u, c->v.s[6]);
    ST32(c->r[13] + 56u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_bfedd4;
L_bfed20:;
    c->r[0] = c->r[4];
    c->r[14] = 0xbfed28u; f_a857c4(c);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->r[14] = 0xbfed30u; f_15f0190(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[16] ^ 0x80000000u;
    c->r[14] = 0xbfed3cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbfed48u; f_15efdf4(c);
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xbfed9cu; f_a85824(c);
    c->r[5] = c->r[13] + 0x10u;
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xbfedacu; f_21ebe8(c);
    c->v.s[12] = LD32(c->r[13] + 56u);
    c->v.s[6] = LD32(c->r[13] + 40u);
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[8] = LD32(c->r[13] + 20u);
    c->v.s[10] = LD32(c->r[13] + 24u);
    c->v.s[2] = LD32(c->r[13] + 32u);
    c->v.s[1] = LD32(c->r[13] + 52u);
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.s[4] = LD32(c->r[13] + 48u);
    c->r[7] = c->r[5] | 0x4u;
L_bfedd4:;
    c->v.s[3] = 0x0u;
    c->v.s[5] = c->v.s[14] ^ 0x80000000u;
    c->v.s[7] = c->v.s[2] ^ 0x80000000u;
    c->v.f[14] = c->v.f[8] - c->v.f[14];
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[5] - c->v.f[8];
    c->v.f[0] = c->v.f[7] - c->v.f[0];
    c->v.s[5] = c->v.s[6] ^ 0x80000000u;
    c->v.f[6] = c->v.f[10] - c->v.f[6];
    c->v.f[1] = c->v.f[1] * c->v.f[3];
    c->v.f[4] = c->v.f[4] * c->v.f[3];
    c->v.f[12] = c->v.f[12] * c->v.f[3];
    c->v.f[10] = c->v.f[5] - c->v.f[10];
    c->v.f[14] = c->v.f[14] + c->v.f[1];
    c->v.f[8] = c->v.f[8] + c->v.f[1];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.f[4] = c->v.f[6] + c->v.f[12];
    c->v.f[6] = c->v.f[10] + c->v.f[12];
    c->v.f[16] = c->v.f[8] - c->v.f[14];
    c->v.f[18] = c->v.f[0] - c->v.f[2];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bfee58; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbfee58u; f_15efddc(c);
L_bfee58:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bfee7c; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_bfee7c:;
    c->r[0] = 0x0u;
    ST32(c->r[13], c->v.s[18]);
    ST32(c->r[13] + 4u, c->v.s[16]);
    ST32(c->r[13] + 8u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bfef04; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x241u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x140cu;
    c->r[2] = 0x1410u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_bfef04:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x904u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xbfef18u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_bfef6c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xbfef68u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bfef6c:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x140cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bff03c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_bff03c:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bff050(Cpu *restrict c) {
    FN_ENTER(0xbff050u);
L_bff050:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x74u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = c->r[0] + 0xcu; }
    c->v.s[0] = LD32(c->r[2]);
    return;
}
void f_bff068(Cpu *restrict c) {
    FN_ENTER(0xbff068u);
L_bff068:;
    c->v.s[0] = LD32(c->r[0] + 16u);
    return;
}
void f_bff070(Cpu *restrict c) {
    FN_ENTER(0xbff070u);
L_bff070:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bff074(Cpu *restrict c) {
    FN_ENTER(0xbff074u);
L_bff074:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_bff078(Cpu *restrict c) {
    FN_ENTER(0xbff078u);
L_bff078:;
    c->r[0] = 0xe4406cu;
    { uint32_t ea = 0xbff084u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bff088(Cpu *restrict c) {
    FN_ENTER(0xbff088u);
L_bff088:;
    c->r[0] = 0xe44074u;
    { uint32_t ea = 0xbff094u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bff098(Cpu *restrict c) {
    FN_ENTER(0xbff098u);
L_bff098:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1723a38u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0xbff0c8u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0xe43fe0u;
    { uint32_t ea = 0xbff110u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xe39a4cu;
    { uint32_t ea = 0xbff118u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xb56fa6u;
    c->r[1] = 0xbff120u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xbff124u; f_9aedcc(c);
    c->r[0] = 0xe43fd8u;
    c->r[1] = 0xb7841eu;
    c->r[2] = c->r[4];
    c->r[3] = 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbff148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbff14cu + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe43facu;
    { uint32_t ea = 0xbff15cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbff15cu; f_9aedcc(c);
    c->r[1] = 0xe43fbcu;
    { uint32_t ea = 0xbff168u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bff194(Cpu *restrict c) {
    FN_ENTER(0xbff194u);
L_bff194:;
    c->r[0] = 0x0u;
    return;
}
void f_bff19c(Cpu *restrict c) {
    FN_ENTER(0xbff19cu);
L_bff19c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe43f7cu;
    { uint32_t ea = 0xbff1acu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbff1b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[4]; c->r[14] = 0xbff1c8u; rt_dispatch(c);
    c->r[1] = 0xe43f58u;
    { uint32_t ea = 0xbff1d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xe39968u;
    { uint32_t ea = 0xbff1e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bff218(Cpu *restrict c) {
    FN_ENTER(0xbff218u);
L_bff218:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbff224u; f_e8cdd4(c);
    c->r[0] = 0xe43ef8u;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0xbff238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe39918u;
    { uint32_t ea = 0xbff248u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x114u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48u;
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1a0u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x44u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4cu;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x50u;
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x54u;
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe39844u;
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbff308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x189u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18bu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[5]); }
    c->r[1] = 0xe43d90u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42700000u;
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x184u;
    { uint32_t ea = c->r[4] + 0x1b8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1b9u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x174u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x175u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x188u; ST8(ea, c->r[6]); }
    { uint32_t ea = 0xbff3a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x186u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x1c8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3d7fcu;
    { uint32_t ea = 0xbff3ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbff3d0u; f_d85a14(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bff3ec; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18au; ST8(ea, c->r[6]); }
    c->r[14] = 0xbff3e4u; f_c17d04(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_bff3ec:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bff40c(Cpu *restrict c) {
    FN_ENTER(0xbff40cu);
L_bff40c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbff418u; f_c1709c(c);
    c->r[0] = 0xe43d14u;
    { uint32_t ea = 0xbff424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbff424u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_bff43c(Cpu *restrict c) {
    FN_ENTER(0xbff43cu);
L_bff43c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[9] = c->r[1];
    c->r[11] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff474u; f_9bb638(c);
    c->r[1] = 0xb78138u;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xbff48cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x130u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff4f0u; f_9bb638(c);
    c->r[1] = 0xb780cau;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff504u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x124u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff56cu; f_9bb638(c);
    c->r[1] = 0xb7805au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff580u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x140u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff5e4u; f_9bb638(c);
    c->r[1] = 0xb77feau;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff5f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x128u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff660u; f_9bb638(c);
    c->r[1] = 0xb77f78u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff674u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x18au;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff6d8u; f_9bb638(c);
    c->r[1] = 0xb77e76u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff6ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1bcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff750u; f_9bb638(c);
    c->r[1] = 0xb77e9bu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff764u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1c0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff7c4u; f_9bb638(c);
    c->r[1] = 0xb77e3bu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff7d8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1c4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff83cu; f_9bb638(c);
    c->r[1] = 0xb77dcau;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbff850u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1b8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xbff8b0u; f_9bb638(c);
    c->r[1] = 0xb77d6bu;
    c->r[1] = 0xbff8bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x1b9u;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[1] = c->r[9];
    c->r[14] = 0xbff90cu; f_e8cff4(c);
    c->r[0] = 0xb77d18u;
    c->r[1] = 0x19u;
    c->r[2] = 0xbff91cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xbff920u; f_9bba44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); } }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bff960(Cpu *restrict c) {
    FN_ENTER(0xbff960u);
L_bff960:;
    __attribute__((musttail)) return f_c28a2c(c);
}
void f_bff964(Cpu *restrict c) {
    FN_ENTER(0xbff964u);
L_bff964:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[4] + 0x188u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bff9fc; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_LS) { goto L_bff9e8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bff9e8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbff9b4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x184u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bff9f4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbff9e0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_bff9f4;
L_bff9e8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x184u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
L_bff9f4:;
    c->r[1] = 0x186u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
L_bff9fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xbffa10u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_bffa48; }
    c->r[0] = 0xe3d194u;
    c->r[1] = 0xe43704u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xbffa34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbffa38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbffa3cu; f_d85a14(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_bffac0; }
L_bffa48:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[7] + 92u);
    c->v.s[0] = LD32(c->r[7] + 96u);
    c->r[6] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = c->r[10];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->pc = c->r[5]; c->r[14] = 0xbffa80u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    c->r[2] = c->r[9];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[7] + 92u);
    c->v.s[0] = LD32(c->r[7] + 96u);
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->pc = c->r[5]; c->r[14] = 0xbffab8u; rt_dispatch(c);
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
L_bffac0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x4au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bffb68; }
    c->v.s[0] = LD32(c->r[5] + 112u);
    c->v.s[6] = c->r[3];
    c->v.s[2] = LD32(c->r[5] + 116u);
    c->v.s[4] = LD32(c->r[5] + 120u);
    c->v.s[8] = c->r[7];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.s[6] = c->r[6];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.s[8] = c->r[1];
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.s[6] = c->r[14];
    ST32(c->r[4] + 304u, c->v.s[0]);
    ST32(c->r[4] + 308u, c->v.s[2]);
    ST32(c->r[4] + 312u, c->v.s[4]);
    c->v.s[0] = LD32(c->r[5] + 112u);
    c->v.s[2] = LD32(c->r[5] + 116u);
    c->v.s[4] = LD32(c->r[5] + 120u);
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.s[6] = c->r[2];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    ST32(c->r[4] + 320u, c->v.s[0]);
    ST32(c->r[4] + 324u, c->v.s[2]);
    ST32(c->r[4] + 328u, c->v.s[4]);
L_bffb68:;
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bffb88; }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_bffb88:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bffb9c(Cpu *restrict c) {
    FN_ENTER(0xbffb9cu);
L_bffb9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[6] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_LS) { c->r[5] = c->r[1] - 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bffbe4; }
    c->r[0] = 0xe3cfecu;
    c->r[1] = 0xe4355cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xbffbdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbffbe0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbffbe4u; f_d85a14(c);
L_bffbe4:;
    { uint32_t ea = c->r[6] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    c->v.s[2] = c->r[2];
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->v.s[4] = c->r[3];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    c->v.s[0] = c->r[1];
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_bffd00; }
    { uint32_t ea = c->r[0] + 0x4eu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bffc3c; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bffc44;
L_bffc3c:;
    c->r[1] = 0xe39f88u;
    { uint32_t ea = 0xbffc48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_bffc44:;
    c->v.s[10] = LD32(c->r[1] + 28u);
    c->v.s[13] = LD32(c->r[1] + 12u);
    c->v.s[15] = LD32(c->r[1] + 44u);
    c->v.s[18] = LD32(c->r[1] + 60u);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->v.s[9] = LD32(c->r[1] + 16u);
    c->v.s[11] = LD32(c->r[1] + 20u);
    c->v.s[7] = LD32(c->r[1] + 24u);
    c->v.s[3] = LD32(c->r[1] + 32u);
    c->v.s[14] = LD32(c->r[1] + 36u);
    c->v.s[5] = LD32(c->r[1] + 48u);
    c->v.s[1] = LD32(c->r[1] + 52u);
    c->v.s[12] = LD32(c->r[1] + 56u);
    c->v.f[16] = c->v.f[10] * c->v.f[4];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[13] * c->v.f[2]);
    c->v.s[10] = LD32(c->r[1] + 40u);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[15] * c->v.f[0]);
    c->v.s[15] = LD32(c->r[1]);
    c->v.f[13] = c->v.f[18] + c->v.f[16];
    vfp_cmp_f(c, c->v.f[13], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bffcac; }
    c->v.s[16] = 0x3f800000u;
    c->v.f[13] = c->v.f[16] / c->v.f[13];
    goto L_bffcb0;
L_bffcac:;
    c->v.s[13] = 0x0u;
L_bffcb0:;
    c->v.f[9] = c->v.f[9] * c->v.f[4];
    c->v.f[11] = c->v.f[11] * c->v.f[4];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[15] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[8] * c->v.f[2]);
    c->r[1] = 0x0u;
    c->v.f[4] = c->v.f[7] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[2]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[3] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[2] = c->v.f[5] + c->v.f[9];
    c->v.f[0] = c->v.f[1] + c->v.f[11];
    c->v.f[6] = c->v.f[12] + c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[13];
    c->v.f[4] = c->v.f[0] * c->v.f[13];
    c->v.f[0] = c->v.f[6] * c->v.f[13];
    ST32(c->r[4], c->v.s[2]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[0]);
L_bffd00:;
    { uint32_t ea = c->r[0] + 0x4au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bffd30; }
    c->v.s[6] = LD32(c->r[0] + 112u);
    c->v.s[8] = LD32(c->r[0] + 116u);
    c->v.s[10] = LD32(c->r[0] + 120u);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    ST32(c->r[4], c->v.s[2]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[0]);
L_bffd30:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bffd48(Cpu *restrict c) {
    FN_ENTER(0xbffd48u);
L_bffd48:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x168u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0xe3ce3cu;
    c->r[5] = c->r[1];
    c->r[1] = 0xe433a4u;
    c->r[6] = c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xbffd8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xbffd90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xbffd94u; f_d85a14(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_c00c54; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xbffdacu; f_c17d64(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_c00c54; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c000a4; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0xbffdd4u; f_e8ec60(c);
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_bffdfc; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_bffe30; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 6);
    goto L_bffe38;
L_bffdfc:;
    c->r[0] = 0xe39dc8u;
    { uint32_t ea = 0xbffe08u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x38u;
    c->r[2] = c->r[1] + 0x2cu;
    c->r[5] = c->r[1] + 0x20u;
    c->r[9] = c->r[1] + 0x1cu;
    c->r[7] = c->r[1] + 0x14u;
    c->r[12] = c->r[1] + 0x10u;
    c->r[6] = c->r[1] + 0xcu;
    c->r[14] = c->r[1] + 0x8u;
    c->r[10] = c->r[1] + 0x4u;
    c->r[3] = c->r[1] + 0x3cu;
    goto L_bffe60;
L_bffe30:;
    c->r[0] = 0xe39d94u;
    { uint32_t ea = 0xbffe3cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_bffe38:;
    c->r[0] = c->r[1] + 0x38u;
    c->r[3] = c->r[1] + 0x3cu;
    c->r[2] = c->r[1] + 0x2cu;
    c->r[5] = c->r[1] + 0x20u;
    c->r[9] = c->r[1] + 0x1cu;
    c->r[7] = c->r[1] + 0x14u;
    c->r[12] = c->r[1] + 0x10u;
    c->r[6] = c->r[1] + 0xcu;
    c->r[14] = c->r[1] + 0x8u;
    c->r[10] = c->r[1] + 0x4u;
L_bffe60:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x34u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x18u;
    c->v.s[22] = LD32(c->r[13] + 96u);
    c->v.s[28] = LD32(c->r[13] + 100u);
    c->v.s[15] = LD32(c->r[9]);
    c->v.s[11] = LD32(c->r[6]);
    c->v.s[7] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = LD32(c->r[13] + 104u);
    c->v.s[9] = LD32(c->r[2]);
    c->v.s[16] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[14] = LD32(c->r[14]);
    c->v.s[5] = LD32(c->r[12]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[3] = c->v.f[15] * c->v.f[28];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[22]);
    c->v.s[1] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[9] * c->v.f[24]);
    c->v.s[12] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[13] = c->v.f[16] + c->v.f[3];
    c->v.s[3] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[13], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bfff10; }
    c->v.s[18] = 0x3f800000u;
    c->v.f[30] = c->v.f[18] / c->v.f[13];
    goto L_bfff14;
L_bfff10:;
    c->v.s[30] = 0x0u;
L_bfff14:;
    c->v.f[18] = c->v.f[5] * c->v.f[28];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[22]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[10] * c->v.f[24]);
    c->v.s[13] = LD32(c->r[9] + 16u);
    c->v.f[18] = c->v.f[12] + c->v.f[18];
    c->v.f[20] = c->v.f[18] * c->v.f[30];
    vfp_cmp_f(c, c->v.f[20], c->v.f[13]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c000a0; }
    c->v.f[18] = c->v.f[7] * c->v.f[28];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[14] * c->v.f[22]);
    c->v.s[26] = LD32(c->r[9] + 24u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[1] * c->v.f[24]);
    c->v.f[18] = c->v.f[3] + c->v.f[18];
    c->v.f[17] = c->v.f[18] * c->v.f[30];
    vfp_cmp_f(c, c->v.f[17], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c000a0; }
    c->v.s[18] = LD32(c->r[9] + 32u);
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c000a0; }
    c->v.s[20] = LD32(c->r[9] + 40u);
    vfp_cmp_f(c, c->v.f[17], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c000a0; }
    c->v.f[28] = c->v.f[6] * c->v.f[28];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[4] * c->v.f[22]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.f[22] = c->v.f[0] + c->v.f[28];
    c->v.f[28] = c->v.f[22] * c->v.f[30];
    c->v.s[22] = LD32(c->r[9] + 20u);
    vfp_cmp_f(c, c->v.f[28], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c000a0; }
    c->v.s[24] = LD32(c->r[9] + 36u);
    vfp_cmp_f(c, c->v.f[28], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c000a0; }
    c->v.s[17] = LD32(c->r[13] + 84u);
    c->v.s[30] = LD32(c->r[13] + 80u);
    c->v.s[28] = LD32(c->r[13] + 88u);
    c->v.f[15] = c->v.f[15] * c->v.f[17];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[30]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[9] * c->v.f[28]);
    c->v.f[9] = c->v.f[16] + c->v.f[15];
    vfp_cmp_f(c, c->v.f[9], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bfffe8; }
    c->v.s[11] = 0x3f800000u;
    c->v.f[9] = c->v.f[11] / c->v.f[9];
    goto L_bfffec;
L_bfffe8:;
    c->v.s[9] = 0x0u;
L_bfffec:;
    c->v.f[7] = c->v.f[7] * c->v.f[17];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[14] * c->v.f[30]);
    c->r[1] = 0x0u;
    c->v.f[5] = c->v.f[5] * c->v.f[17];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[30]);
    c->r[2] = 0x0u;
    c->v.f[6] = c->v.f[6] * c->v.f[17];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[30]);
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[1] * c->v.f[28]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[28]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.f[8] = c->v.f[3] + c->v.f[7];
    c->v.f[10] = c->v.f[12] + c->v.f[5];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[8] = c->v.f[8] * c->v.f[9];
    c->v.f[10] = c->v.f[10] * c->v.f[9];
    c->v.f[0] = c->v.f[0] * c->v.f[9];
    vfp_cmp_f(c, c->v.f[8], c->v.f[26]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[13]);
    if (COND_PL) { c->r[1] = 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[18]);
    if (COND_PL) { c->r[2] = 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[20]);
    if (COND_LE) { c->r[3] = 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    if (COND_LE) { c->r[7] = 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    if (COND_PL) { c->r[0] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c000a0; }
    c->r[1] = c->r[2] & c->r[1];
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] & c->r[7];
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_c000a0; }
    c->r[7] = 0x0u;
    goto L_c00c54;
L_c000a0:;
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[5] = v; }
L_c000a4:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[9] + 0x10u;
    c->r[2] = c->r[13] + 0x164u;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0xc000e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c00c50; }
    c->r[0] = 0xe3934cu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xc00100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 4);
    c->pc = c->r[3]; c->r[14] = 0xc00114u; rt_dispatch(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0015c; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_c0012c:;
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + c->r[5];
    c->r[1] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xc00148u; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_c0012c; }
L_c0015c:;
    c->r[0] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    c->v.s[24] = 0x0u;
    c->v.s[4] = LD32(c->r[13] + 336u);
    c->v.s[6] = LD32(c->r[13] + 344u);
    c->v.s[26] = 0x42c80000u;
    c->r[12] = c->r[10] + 0x8u;
    c->r[14] = 0x0u;
    c->r[7] = 0x0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xa0u;
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x130u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x110u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x74u;
    c->v.s[20] = c->v.s[24];
    c->r[8] = 0x0u;
    c->v.s[22] = c->v.s[24];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe39130u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = 0xc001f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[16] = c->v.f[2] - c->v.f[6];
    c->v.f[18] = c->v.f[0] - c->v.f[4];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe399bcu;
    { uint32_t ea = 0xc00204u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3910cu;
    { uint32_t ea = 0xc00214u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe399a0u;
    { uint32_t ea = 0xc00220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_c00608;
L_c00234:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[21] = LD32(c->r[3] - 4u);
    c->v.s[23] = LD32(c->r[5] + 4u);
    c->v.f[2] = c->v.f[17] + c->v.f[24];
    c->v.f[4] = c->v.f[28] + c->v.f[24];
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 436u);
    ST32(c->r[13] + 288u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[21] + c->v.f[0];
    c->v.f[0] = c->v.f[23] + c->v.f[0];
    ST32(c->r[13] + 292u, c->v.s[2]);
    c->v.f[2] = c->v.f[19] + c->v.f[24];
    ST32(c->r[13] + 296u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[8]); }
    ST32(c->r[13] + 304u, c->v.s[2]);
    c->v.f[2] = c->v.f[30] + c->v.f[24];
    ST32(c->r[13] + 308u, c->v.s[0]);
    ST32(c->r[13] + 312u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xc002acu; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[8]); }
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc0033cu; f_e3aeb0(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xc00348u; f_e179e4(c);
    c->v.f[0] = c->v.f[21] - c->v.f[23];
    c->v.f[2] = c->v.f[17] - c->v.f[19];
    c->v.f[4] = c->v.f[28] - c->v.f[30];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.f[22] = c->v.f[22] + c->v.f[0];
    goto L_c00608;
L_c00380:;
    c->v.s[12] = LD32(c->r[3] - 20u);
    c->v.s[14] = LD32(c->r[5] + 4u);
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    c->r[0] = c->r[13] + 0x148u;
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c00410; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); ST32(ea, c->r[6]); }
    c->v.s[3] = LD32(c->r[13] + 340u);
    c->v.f[7] = c->v.f[30] - c->v.f[6];
    c->v.f[6] = c->v.f[28] - c->v.f[6];
    c->v.s[1] = LD32(c->r[1] + 4u);
    c->v.f[5] = c->v.f[14] - c->v.f[1];
    c->v.f[1] = c->v.f[12] - c->v.f[1];
    c->v.f[14] = c->v.f[14] - c->v.f[3];
    c->v.f[12] = c->v.f[12] - c->v.f[3];
    c->v.f[3] = c->v.f[19] - c->v.f[10];
    c->v.f[10] = c->v.f[17] - c->v.f[10];
    c->v.f[5] = c->v.f[5] * c->v.f[5];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] * c->v.f[1];
    c->v.f[12] = c->v.f[12] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[7] * c->v.f[7]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[0]);
    vfp_cmp_f(c, c->v.f[5], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[14] : c->v.s[5];
    vfp_cmp_f(c, c->v.f[1], c->v.f[12]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[12] : c->v.s[1];
    goto L_c00488;
L_c00410:;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); ST32(ea, c->r[2]); }
    c->v.s[3] = LD32(c->r[13] + 340u);
    c->v.f[7] = c->v.f[28] - c->v.f[6];
    c->r[2] = c->r[6];
    c->v.s[1] = LD32(c->r[1] + 4u);
    c->v.f[5] = c->v.f[12] - c->v.f[1];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    c->v.f[12] = c->v.f[12] - c->v.f[3];
    c->v.f[14] = c->v.f[14] - c->v.f[3];
    c->v.f[3] = c->v.f[17] - c->v.f[10];
    c->v.f[10] = c->v.f[19] - c->v.f[10];
    c->v.f[5] = c->v.f[5] * c->v.f[5];
    c->v.f[12] = c->v.f[12] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[4] = c->v.f[30] - c->v.f[6];
    c->v.f[1] = c->v.f[1] * c->v.f[1];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[7] * c->v.f[7]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[5], c->v.f[12]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[12] : c->v.s[5];
    vfp_cmp_f(c, c->v.f[1], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[14] : c->v.s[1];
L_c00488:;
    c->r[0] = c->r[13] + 0x140u;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[7] = c->r[6] + 0x1u;
    c->v.f[22] = c->v.f[22] + c->v.f[2];
    c->v.f[20] = c->v.f[20] + c->v.f[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); ST32(ea, c->r[2]); }
    c->r[0] = c->r[8];
    if (COND_NE) { c->r[8] = 0x1u; }
    if (COND_EQ) { c->r[0] = c->r[0] + 0x1u; }
    c->r[14] = c->r[14] | c->r[8];
    c->r[8] = c->r[0];
    goto L_c00608;
L_c004c0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[21] = LD32(c->r[3] - 4u);
    c->v.s[23] = LD32(c->r[5] + 4u);
    c->v.f[2] = c->v.f[17] + c->v.f[24];
    c->v.f[4] = c->v.f[28] + c->v.f[24];
    c->r[4] = c->r[8];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 436u);
    ST32(c->r[13] + 288u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[21] + c->v.f[0];
    c->v.f[0] = c->v.f[23] + c->v.f[0];
    ST32(c->r[13] + 292u, c->v.s[2]);
    c->v.f[2] = c->v.f[19] + c->v.f[24];
    ST32(c->r[13] + 296u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[8]); }
    ST32(c->r[13] + 304u, c->v.s[2]);
    c->v.f[2] = c->v.f[30] + c->v.f[24];
    ST32(c->r[13] + 308u, c->v.s[0]);
    ST32(c->r[13] + 312u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xc00538u; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[8]); }
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[13] + 0x120u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc005c8u; f_e3aeb0(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xc005d4u; f_e179e4(c);
    c->v.f[0] = c->v.f[21] - c->v.f[23];
    c->v.f[2] = c->v.f[17] - c->v.f[19];
    c->v.f[4] = c->v.f[28] - c->v.f[30];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.f[20] = c->v.f[20] + c->v.f[0];
L_c00608:;
    c->v.s[12] = LD32(c->r[13] + 336u);
    c->v.s[14] = LD32(c->r[13] + 344u);
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[12] + (c->r[7] << 4);
    c->r[0] = c->r[7] - 0x1u;
L_c0061c:;
    c->r[6] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CS) { goto L_c006e0; }
    c->r[7] = c->r[0] + 0x2u;
    c->v.s[28] = LD32(c->r[3]);
    c->v.s[17] = LD32(c->r[3] - 8u);
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] + 8u);
    (void)f_subs(c, c->r[7], c->r[4]);
    c->r[2] = c->r[7];
    if (COND_GE) { c->r[2] = 0x0u; }
    c->r[5] = c->r[10] + (c->r[2] << 4);
    c->v.s[19] = LD32(c->r[5]);
    c->v.s[30] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[28] - c->v.f[14];
    c->v.f[4] = c->v.f[17] - c->v.f[12];
    c->v.f[2] = c->v.f[30] - c->v.f[14];
    c->v.f[8] = c->v.f[19] - c->v.f[12];
    c->v.f[1] = c->v.f[18] * c->v.f[0];
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[3] = c->v.f[18] * c->v.f[2];
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[16] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { vfp_cmp_f(c, c->v.f[3], 0.0f); }
    if (COND_GT) { vfp_mrs_flags(c); }
    if (COND_GT) { goto L_c00234; }
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { vfp_cmp_f(c, c->v.f[3], 0.0f); }
    if (COND_MI) { vfp_mrs_flags(c); }
    if (COND_MI) { goto L_c004c0; }
    c->v.f[3] = c->v.f[14] - c->v.f[28];
    c->v.f[5] = c->v.f[19] - c->v.f[17];
    c->v.f[7] = c->v.f[6] - c->v.f[28];
    c->v.f[9] = c->v.f[12] - c->v.f[17];
    c->v.f[11] = c->v.f[30] - c->v.f[28];
    c->v.f[13] = c->v.f[10] - c->v.f[17];
    c->r[3] = c->r[3] + 0x10u;
    c->r[0] = c->r[6];
    c->v.f[3] = c->v.f[5] * c->v.f[3];
    c->v.f[5] = c->v.f[5] * c->v.f[7];
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[11] * c->v.f[9]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[11] * c->v.f[13]);
    c->v.f[3] = c->v.f[3] * c->v.f[5];
    vfp_cmp_f(c, c->v.f[3], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c0061c; }
    goto L_c00380;
L_c006e0:;
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[14] | c->r[0];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c00710; }
    { uint32_t r = c->r[14] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_NE) { goto L_c0082c; }
    goto L_c00c30;
L_c00710:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_c0081c; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x7f7fffffu;
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_c00738:;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8] + (c->r[7] << 4); uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[10] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[10], c->r[4]);
    c->r[9] = c->r[10];
    if (COND_CS) { c->r[9] = 0x0u; }
    { uint32_t ea = c->r[0] + (c->r[9] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xc0079cu; f_a098b4(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[24], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c007f4; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[8] + 8u);
    c->v.s[24] = c->v.s[0];
    c->r[5] = c->r[7];
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.s[8] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[7]); }
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[5] = c->r[9]; }
    if (COND_GT) { c->r[9] = c->r[7]; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
L_c007f4:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[10], c->r[4]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_CC) { goto L_c00738; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
L_c0081c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_c00c30; }
L_c0082c:;
    vfp_cmp_f(c, c->v.f[22], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c00a34; }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->r[1] = c->r[2] + (c->r[0] << 4);
    c->r[2] = c->r[2] + (c->r[10] << 4);
    c->r[8] = c->r[0];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->v.s[1] = LD32(c->r[1] + 8u);
    c->v.f[8] = c->v.f[2] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[14];
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[0] = c->v.f[0] - c->v.f[12];
    c->v.f[10] = c->v.f[4] - c->v.f[10];
    c->v.f[4] = c->v.f[4] - c->v.f[1];
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[8] = c->r[10]; }
    if (COND_MI) { c->r[10] = c->r[0]; }
    c->r[0] = 0xe42868u;
    { uint32_t ea = 0xc008c0u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0xe42864u;
    { uint32_t ea = 0xc008c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe38274u;
    { uint32_t ea = 0xc008d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe38278u;
    { uint32_t ea = 0xc008e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_c008ec;
L_c008e8:;
    c->r[10] = c->r[10] - 0x1u;
L_c008ec:;
    c->r[0] = c->r[9];
    c->r[14] = 0xc008f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc0090cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[10] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CS) { goto L_c00988; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c00a14;
L_c00988:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc00990u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0x10u;
    c->r[6] = c->r[9];
    c->r[9] = c->r[8];
    c->r[8] = (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0xc009b8u; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[8] = c->r[9];
    c->r[7] = c->r[0];
    c->r[9] = c->r[6];
    c->r[14] = 0xc009ccu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xc009e0u; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc009e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc009f8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[1]); }
L_c00a14:;
    (void)f_subs(c, c->r[10], c->r[8]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_c00c30; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_GT) { goto L_c008e8; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_c008e8;
L_c00a34:;
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->r[1] = c->r[8] + (c->r[0] << 4);
    c->r[2] = c->r[8] + (c->r[6] << 4);
    c->r[10] = c->r[0];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->v.s[1] = LD32(c->r[1] + 8u);
    c->v.f[8] = c->v.f[2] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[14];
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[0] = c->v.f[0] - c->v.f[12];
    c->v.f[10] = c->v.f[4] - c->v.f[10];
    c->v.f[4] = c->v.f[4] - c->v.f[1];
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[10] = c->r[6]; }
    if (COND_MI) { c->r[6] = c->r[0]; }
    c->r[0] = 0xe42668u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = 0xc00ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe42660u;
    { uint32_t ea = 0xc00accu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe38070u;
    { uint32_t ea = 0xc00adcu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0xe38078u;
    { uint32_t ea = 0xc00ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    goto L_c00b08;
L_c00af0:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { c->r[6] = 0x0u; }
L_c00b08:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc00b14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc00b2cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + (c->r[6] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CS) { goto L_c00ba4; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c00c24;
L_c00ba4:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xc00bb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[7] + 0x10u;
    c->r[2] = 0x10u;
    c->r[8] = (c->r[10] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0xc00bccu; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[7] = c->r[0];
    c->r[14] = 0xc00bd8u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xc00becu; f_15efdd0(c);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0xc00bf8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc00c08u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[1]); }
L_c00c24:;
    (void)f_subs(c, c->r[6], c->r[10]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_c00af0; }
L_c00c30:;
    c->r[0] = 0xe38810u;
    { uint32_t ea = 0xc00c3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc00c4cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[5] = v; }
L_c00c50:;
    c->r[7] = c->r[5];
L_c00c54:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_c00cb0(Cpu *restrict c) {
    FN_ENTER(0xc00cb0u);
L_c00cb0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xe3bee8u;
    c->v.s[16] = LD32(c->r[1]);
    c->v.s[20] = LD32(c->r[1] + 4u);
    c->v.s[18] = LD32(c->r[1] + 8u);
    c->r[1] = 0xe42450u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0xc00ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc00ce4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc00ce8u; f_d85a14(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_c00dd4; }
    c->v.s[0] = 0x3f800000u;
    c->v.s[22] = 0xc1a00000u;
    c->v.s[24] = 0x41a00000u;
    c->r[6] = 0x0u;
    c->v.f[20] = c->v.f[20] + c->v.f[0];
L_c00d10:;
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_c00dc4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0xc00d28u; f_c17d64(c);
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.f[0] = c->v.f[0] + c->v.f[22];
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c00dc4; }
    c->v.s[4] = LD32(c->r[0] + 32u);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.s[8] = LD32(c->r[0] + 40u);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[6] = LD32(c->r[0] + 36u);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->v.f[4] = c->v.f[4] + c->v.f[24];
    c->v.f[0] = c->v.f[0] + c->v.f[22];
    vfp_cmp_f(c, c->v.f[16], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    c->v.f[0] = c->v.f[8] + c->v.f[24];
    if (COND_LE) { c->r[0] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[1] = 0x1u; }
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    c->v.f[0] = c->v.f[2] + c->v.f[22];
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[2] = 0x1u; }
    vfp_cmp_f(c, c->v.f[20], c->v.f[0]);
    c->v.f[0] = c->v.f[6] + c->v.f[24];
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[3] = 0x1u; }
    vfp_cmp_f(c, c->v.f[20], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c00dc4; }
    c->r[0] = c->r[1] & c->r[0];
    c->r[0] = c->r[2] & c->r[0];
    c->r[0] = c->r[3] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c00de0; }
L_c00dc4:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_CC) { goto L_c00d10; }
    c->r[6] = 0x0u;
L_c00dd4:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_c00de0:;
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[6]); }
    c->r[6] = 0x1u;
    goto L_c00dd4;
}
void f_c00df4(Cpu *restrict c) {
    FN_ENTER(0xc00df4u);
L_c00df4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[12] = c->r[0];
    c->r[0] = 0x1u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->r[14] = 0x0u;
L_c00e1c:;
    c->v.s[4] = LD32(c->r[3] + 8u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c00ec0; }
    c->v.s[4] = LD32(c->r[3] + 16u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { c->v.s[0] = LD32(c->r[3] + 24u); }
    if (COND_LE) { vfp_cmp_f(c, c->v.f[2], c->v.f[0]); }
    if (COND_LE) { vfp_mrs_flags(c); }
    if (COND_GT) { goto L_c00ec0; }
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[0] = LD32(c->r[1] + 4u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c00ec0; }
    c->v.s[2] = LD32(c->r[3] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c00ec0; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x10cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_CS) { goto L_c00ec4; }
    { uint32_t ea = c->r[12] + 0x118u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    c->v.s[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    c->v.s[2] = c->r[4];
    c->v.s[4] = LD32(c->r[3]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c00e1c; }
L_c00ec0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_c00ec4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_c00ecc(Cpu *restrict c) {
    FN_ENTER(0xc00eccu);
L_c00ecc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[4] = c->r[0];
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c00f20; }
    c->r[5] = 0x0u;
L_c00ef4:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c00f14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc00f10u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c00f14:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_c00ef4; }
L_c00f20:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c00f48; }
    c->r[0] = 0xe37c24u;
    { uint32_t ea = 0xc00f38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc00f38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc00f48u; rt_dispatch(c);
L_c00f48:;
    c->r[5] = 0x0u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c00f84; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[14] = 0xc00f7cu; f_9af53c(c);
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
L_c00f84:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c00fb4; }
    c->r[0] = 0xe4219cu;
    { uint32_t ea = 0xc00f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc00f9cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc00facu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
L_c00fb4:;
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c00fe4; }
    c->r[0] = 0xe4216cu;
    { uint32_t ea = 0xc00fccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc00fccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc00fdcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
L_c00fe4:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18bu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c0102c; }
L_c01000:;
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01020; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc0101cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[1] = v; }
L_c01020:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_c01000; }
L_c0102c:;
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01054; }
    c->r[0] = 0xe37b18u;
    { uint32_t ea = 0xc01044u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc01044u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc01054u; rt_dispatch(c);
L_c01054:;
    c->r[5] = 0x0u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c010a0; }
    c->r[0] = 0xe420acu;
    { uint32_t ea = 0xc0108cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc0108cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1acu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0109cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[5]); }
L_c010a0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_c29344(c);
}
void f_c010c0(Cpu *restrict c) {
    FN_ENTER(0xc010c0u);
L_c010c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xc010e0u; rt_dispatch(c);
    c->r[1] = 0xe42050u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc010f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_c01124; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xc01108u; rt_dispatch(c);
    c->r[1] = 0xe42028u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc01118u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_c01188; }
L_c01124:;
    { uint32_t ea = c->r[6] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01188; }
    { uint32_t ea = c->r[6] + 0x164u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] & 0x1u;
    c->r[1] = c->r[4];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_c01164; }
    c->r[1] = c->r[1] & c->r[6];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_c01164:;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[4] >> 1);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_c01178; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_c01178:;
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_c01188:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_c01194(Cpu *restrict c) {
    FN_ENTER(0xc01194u);
L_c01194:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xc011b4u; rt_dispatch(c);
    c->r[1] = 0xe41f7cu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc011c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_c011f8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xc011dcu; rt_dispatch(c);
    c->r[1] = 0xe41f54u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc011ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_c01238; }
L_c011f8:;
    { uint32_t ea = c->r[6] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01238; }
    { uint32_t ea = c->r[6] + 0x170u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x16cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] & 0x1u;
    c->r[1] = c->r[4];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_c01240; }
    c->r[1] = c->r[1] & c->r[6];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_c01240; }
L_c01238:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_c01240:;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[4] >> 1);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_c01254; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_c01254:;
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_c0126c(Cpu *restrict c) {
    FN_ENTER(0xc0126cu);
L_c0126c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->v.s[16] = 0x0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_c01330; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xc0129cu; rt_dispatch(c);
    c->r[1] = 0xe41e94u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc012acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_c012e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xc012c4u; rt_dispatch(c);
    c->r[1] = 0xe41e6cu;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc012d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_c01330; }
L_c012e0:;
    c->v.s[2] = LD32(c->r[5] + 52u);
    c->v.s[8] = LD32(c->r[4] + 52u);
    c->v.s[0] = LD32(c->r[5] + 48u);
    c->v.s[6] = LD32(c->r[4] + 48u);
    c->v.s[4] = LD32(c->r[5] + 56u);
    c->v.s[10] = LD32(c->r[4] + 56u);
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01328; }
    c->r[14] = 0xc01324u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c01328:;
    c->v.s[0] = 0x3c23d70au;
    c->v.f[16] = c->v.f[2] * c->v.f[0];
L_c01330:;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_c0134c(Cpu *restrict c) {
    FN_ENTER(0xc0134cu);
L_c0134c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[5] + 0x175u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c013f4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xc0137cu; rt_dispatch(c);
    c->r[1] = 0xe41db4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc0138cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_c013f4; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[6] << 3) - c->r[6];
    c->v.s[0] = 0x3a83126fu;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->v.s[4] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->v.s[2] = LD32(c->r[0] + 24u); }
    if (COND_PL) { vfp_cmp_f(c, c->v.f[2], c->v.f[0]); }
    if (COND_PL) { vfp_mrs_flags(c); }
    if (COND_MI) { goto L_c013f4; }
    c->v.s[6] = LD32(c->r[5] + 376u);
    c->v.f[4] = c->v.f[4] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c013f0; }
    c->v.s[4] = LD32(c->r[5] + 380u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[4] = 0x0u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_c013f0:;
    c->r[4] = 0x0u;
L_c013f4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_c01404(Cpu *restrict c) {
    FN_ENTER(0xc01404u);
L_c01404:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[11] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_c02144; }
    c->r[0] = 0xe37730u;
    { uint32_t ea = 0xc01430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_c01dbc; }
    c->r[1] = c->r[1] - 0x2u;
    c->v.s[2] = LD32(c->r[11] + 452u);
    c->v.s[0] = 0x42b40000u;
    c->v.s[4] = 0x3c8efa36u;
    c->v.s[28] = 0x0u;
    c->v.s[20] = 0x3f800000u;
    c->v.s[30] = 0xbf800000u;
    c->v.s[26] = 0x40400000u;
    c->r[5] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe41c98u;
    { uint32_t ea = 0xc01490u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe41c88u;
    c->v.f[24] = c->v.f[0] * c->v.f[4];
    { uint32_t ea = 0xc014a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 20u, c->v.s[24]);
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe37694u;
    { uint32_t ea = 0xc014b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe37698u;
    { uint32_t ea = 0xc014c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe3768cu;
    { uint32_t ea = 0xc014d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe41c4cu;
    { uint32_t ea = 0xc014dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe41c44u;
    { uint32_t ea = 0xc014e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe37654u;
    { uint32_t ea = 0xc014f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0xe37658u;
    { uint32_t ea = 0xc01504u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
L_c01504:;
    c->r[7] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = LD32(c->r[10] + 16u);
    c->v.s[2] = LD32(c->r[10] + 20u);
    c->v.s[4] = LD32(c->r[10] + 24u);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.f[18] = c->v.f[8] - c->v.f[2];
    c->v.f[16] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01558; }
    c->r[14] = 0xc01554u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c01558:;
    c->v.f[0] = c->v.f[20] / c->v.f[2];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[16] * c->v.f[0];
    c->v.f[16] = fabsf(c->v.f[2]);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[4] * c->v.f[28]);
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c015a0; }
    c->r[14] = 0xc0159cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c015a0:;
    c->v.f[0] = c->v.f[16] / c->v.f[2];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    vfp_cmp_f(c, c->v.f[28], c->v.f[0]);
    c->v.f[2] = fabsf(c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[30] : c->v.s[20];
    vfp_cmp_f(c, c->v.f[2], c->v.f[20]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c016fc; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc015e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc015f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[0];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    c->r[14] = 0xc01638u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[5]; c->r[14] = 0xc01650u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c02158; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c01844; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    goto L_c018bc;
L_c016fc:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c01970; }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_c01a58; }
    c->v.s[2] = LD32(c->r[6] + 20u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[0] = LD32(c->r[6] + 16u);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[6] + 24u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01770; }
    c->r[14] = 0xc0176cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c01770:;
    c->v.s[0] = LD32(c->r[9] + 16u);
    c->v.s[28] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[9] + 20u);
    c->v.s[30] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[9] + 24u);
    c->v.s[17] = LD32(c->r[5] + 24u);
    c->v.s[24] = LD32(c->r[11] + 444u);
    c->r[10] = c->r[6] + 0x18u;
    c->r[8] = c->r[6] + 0x14u;
    c->r[6] = c->r[6] + 0x10u;
    c->v.f[22] = c->v.f[30] - c->v.f[2];
    c->v.f[18] = c->v.f[28] - c->v.f[0];
    c->v.f[27] = c->v.f[17] - c->v.f[4];
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c017c8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc017c8u; f_15efddc(c);
L_c017c8:;
    c->v.f[23] = c->v.f[16] * c->v.f[24];
    c->v.s[2] = LD32(c->r[8]);
    c->v.s[19] = LD32(c->r[5] + 20u);
    c->v.s[16] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[21] = LD32(c->r[5] + 24u);
    c->v.s[6] = LD32(c->r[10]);
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.f[24] = c->v.f[19] - c->v.f[2];
    c->v.f[25] = c->v.f[16] - c->v.f[4];
    c->v.f[29] = c->v.f[21] - c->v.f[6];
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[27] = c->v.f[27] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01824; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc01824u; f_15efddc(c);
L_c01824:;
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[23] * c->v.f[27]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[23] * c->v.f[22]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[23] * c->v.f[18]);
    c->v.f[4] = c->v.f[20] / c->v.f[0];
    goto L_c01b78;
L_c01844:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xc01850u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xc0186cu; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[8] = c->r[0];
    c->r[14] = 0xc01878u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[8];
    c->r[14] = 0xc0188cu; f_15efdd0(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xc01894u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc018a4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_c018bc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c018e4; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    goto L_c0195c;
L_c018e4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc018f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc0190cu; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc01918u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc0192cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc01934u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc01944u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_c0195c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + 0x2u;
    goto L_c01dac;
L_c01970:;
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[2] = LD32(c->r[1] + 20u);
    c->v.s[8] = LD32(c->r[4] + 20u);
    c->v.s[0] = LD32(c->r[1] + 16u);
    c->v.s[6] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[1] + 24u);
    c->v.s[10] = LD32(c->r[4] + 24u);
    c->r[10] = c->r[1] + 0x18u;
    c->r[8] = c->r[1] + 0x14u;
    c->r[6] = c->r[1] + 0x10u;
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c019d4; }
    c->r[14] = 0xc019d0u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c019d4:;
    c->v.s[28] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[30] = LD32(c->r[4] + 20u);
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[17] = LD32(c->r[4] + 24u);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[24] = LD32(c->r[11] + 444u);
    c->v.f[22] = c->v.f[0] - c->v.f[30];
    c->v.f[18] = c->v.f[2] - c->v.f[28];
    c->v.f[27] = c->v.f[4] - c->v.f[17];
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01a20; }
    c->r[14] = 0xc01a1cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c01a20:;
    c->v.s[4] = LD32(c->r[5] + 20u);
    c->v.s[8] = LD32(c->r[8]);
    c->v.f[23] = c->v.f[16] * c->v.f[24];
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[10] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[5] + 24u);
    c->v.s[16] = LD32(c->r[4] + 16u);
    c->v.s[19] = LD32(c->r[4] + 20u);
    c->v.s[21] = LD32(c->r[4] + 24u);
    c->v.f[2] = c->v.f[20] / c->v.f[2];
    c->v.f[24] = c->v.f[8] - c->v.f[4];
    c->v.s[4] = LD32(c->r[10]);
    c->v.f[25] = c->v.f[10] - c->v.f[0];
    goto L_c01b34;
L_c01a58:;
    c->v.s[2] = LD32(c->r[6] + 20u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[0] = LD32(c->r[6] + 16u);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[6] + 24u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01aa8; }
    c->r[14] = 0xc01aa4u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c01aa8:;
    c->v.s[0] = LD32(c->r[9] + 16u);
    c->v.s[28] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[9] + 20u);
    c->v.s[30] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[9] + 24u);
    c->v.s[17] = LD32(c->r[5] + 24u);
    c->v.s[24] = LD32(c->r[11] + 444u);
    c->r[10] = c->r[6] + 0x18u;
    c->r[8] = c->r[6] + 0x14u;
    c->r[6] = c->r[6] + 0x10u;
    c->v.f[22] = c->v.f[30] - c->v.f[2];
    c->v.f[18] = c->v.f[28] - c->v.f[0];
    c->v.f[27] = c->v.f[17] - c->v.f[4];
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01b00; }
    c->r[14] = 0xc01afcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c01b00:;
    c->v.f[2] = c->v.f[20] / c->v.f[2];
    c->v.s[4] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[8]);
    c->v.f[23] = c->v.f[16] * c->v.f[24];
    c->v.s[0] = LD32(c->r[7] + 16u);
    c->v.s[10] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[7] + 24u);
    c->v.s[16] = LD32(c->r[5] + 16u);
    c->v.s[19] = LD32(c->r[5] + 20u);
    c->v.s[21] = LD32(c->r[5] + 24u);
    c->v.f[24] = c->v.f[8] - c->v.f[4];
    c->v.f[25] = c->v.f[10] - c->v.f[0];
    c->v.s[4] = LD32(c->r[10]);
L_c01b34:;
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[29] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[27] = c->v.f[27] * c->v.f[2];
    c->v.f[22] = c->v.f[22] * c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c01b68; }
    c->r[14] = 0xc01b64u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c01b68:;
    c->v.f[4] = c->v.f[20] / c->v.f[2];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[23] * c->v.f[27]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[23] * c->v.f[22]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[23] * c->v.f[18]);
L_c01b78:;
    { uint32_t ea = c->r[11] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[29] * c->v.f[4];
    c->v.f[2] = c->v.f[24] * c->v.f[4];
    c->v.f[4] = c->v.f[25] * c->v.f[4];
    c->v.s[6] = c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[6] = (float)c->v.s[6];
    if (COND_EQ) { goto L_c01d6c; }
    c->v.s[18] = LD32(c->r[8]);
    c->v.s[24] = LD32(c->r[10]);
    c->v.s[29] = LD32(c->r[6]);
    c->v.f[22] = c->v.f[20] / c->v.f[6];
    c->v.s[31] = LD32(c->r[6]);
    c->r[8] = 0x0u;
    c->v.f[8] = c->v.f[18] - c->v.f[30];
    c->v.s[27] = c->v.s[24];
    c->v.s[25] = c->v.s[18];
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[23] * c->v.f[0]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[23] * c->v.f[2]);
    c->v.f[23] = c->v.f[8] / c->v.f[6];
L_c01bcc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc01bd8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc01bf0u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c01e78; }
    c->v.s[0] = c->r[8];
    c->r[0] = 0x0u;
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[20] - c->v.f[2];
    c->v.f[10] = c->v.f[2] * c->v.f[2];
    c->v.f[6] = c->v.f[2] * c->v.f[26];
    c->v.f[8] = c->v.f[4] * c->v.f[4];
    c->v.f[12] = c->v.f[10] * c->v.f[26];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[4] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[14] = c->v.f[16] * c->v.f[6];
    c->v.f[1] = c->v.f[19] * c->v.f[6];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[28] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[30] * c->v.f[8]);
    c->v.f[6] = c->v.f[21] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[8]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[29] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[27] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[31] * c->v.f[2]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[5] + 16u, c->v.s[14]);
    ST32(c->r[5] + 20u, c->v.s[1]);
    ST32(c->r[5] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[11] + 0x1b9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c01cbc; }
    c->v.s[2] = c->v.s[30];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[0]);
    ST32(c->r[5] + 20u, c->v.s[2]);
L_c01cbc:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c01ce0; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    goto L_c01d58;
L_c01ce0:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xc01cecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xc01d08u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[7] = c->r[0];
    c->r[14] = 0xc01d14u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xc01d28u; f_15efdd0(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xc01d30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc01d40u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_c01d58:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[11] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { goto L_c01bcc; }
L_c01d6c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[13] + 0x44u;
    c->r[2] = c->r[4];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->pc = c->r[7]; c->r[14] = 0xc01d98u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = LD32(c->r[13] + 20u);
    c->v.s[28] = 0x0u;
    c->v.s[30] = 0xbf800000u;
    c->r[5] = c->r[0] + c->r[5];
L_c01dac:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c01504; }
L_c01dbc:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xe41358u;
    { uint32_t ea = 0xc01dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc01dd4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc01decu; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0xe4132cu;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = 0xc01e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe36d3cu;
    { uint32_t ea = 0xc01e10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c01ecc; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_c01f20; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    goto L_c01f9c;
L_c01e78:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c01eb4; }
    c->r[4] = 0x0u;
L_c01e88:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01ea8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc01ea4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_c01ea8:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c01e88; }
L_c01eb4:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c02110; }
    c->r[0] = 0xe36c90u;
    { uint32_t ea = 0xc01eccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c020fc;
L_c01ecc:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c01f08; }
    c->r[4] = 0x0u;
L_c01edc:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01efc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc01ef8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_c01efc:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c01edc; }
L_c01f08:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c02110; }
    c->r[0] = 0xe36c3cu;
    { uint32_t ea = 0xc01f20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c020fc;
L_c01f20:;
    c->r[0] = 0xe36c30u;
    { uint32_t ea = 0xc01f2cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc01f30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc01f4cu; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc01f58u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc01f6cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc01f74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc01f84u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_c01f9c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c01fdc; }
    c->r[4] = 0x0u;
L_c01fb0:;
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c01fd0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc01fccu; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c01fd0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c01fb0; }
L_c01fdc:;
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c02004; }
    c->r[0] = 0xe36b68u;
    { uint32_t ea = 0xc01ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc01ff4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc02004u; rt_dispatch(c);
L_c02004:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[11] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x110u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x10cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c020ec; }
    c->r[1] = 0xe36b28u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0xc02034u + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    goto L_c02040;
L_c02038:;
    { uint32_t ea = c->r[11] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
L_c02040:;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CS) { goto L_c02060; }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    goto L_c020d4;
L_c02060:;
    c->r[0] = c->r[8];
    c->r[14] = 0xc02068u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[6] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[5] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc02084u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[6] = c->r[0];
    c->r[14] = 0xc02090u; f_15efd7c(c);
    { uint32_t ea = c->r[11] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xc020a4u; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc020acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc020bcu; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x110u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] + 0x10cu; ST32(ea, c->r[1]); }
L_c020d4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c02038; }
L_c020ec:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c02110; }
    c->r[0] = 0xe36a5cu;
    { uint32_t ea = 0xc02100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c020fc:;
    c->r[14] = 0xc02100u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc02110u; rt_dispatch(c);
L_c02110:;
    c->r[1] = 0xe36a34u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0xc0212cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); } }
L_c02144:;
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_c02158:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c02170; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xc02170u; rt_dispatch(c);
L_c02170:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c02188; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xc02188u; rt_dispatch(c);
L_c02188:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c021c4; }
    c->r[4] = 0x0u;
L_c02198:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c021b8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc021b4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_c021b8:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c02198; }
L_c021c4:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c02110; }
    c->r[0] = 0xe36980u;
    { uint32_t ea = 0xc021dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c020fc;
}
void f_c02230(Cpu *restrict c) {
    FN_ENTER(0xc02230u);
L_c02230:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x1c9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c0230c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xc0225cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xc02278u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_c0230c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_c0230c; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LS) { goto L_c022b0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 2);
    c->r[2] = c->r[2] + (c->r[6] << 2);
L_c022b0:;
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LS) { goto L_c0230c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] + (c->r[0] << 2); }
    if (COND_NE) { c->r[0] = c->r[1] + (c->r[0] << 2); }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_c0230c; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_c022f0; }
    goto L_c0230c;
L_c022e4:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c0230c; }
L_c022f0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_c022e4; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_c022e4; }
    goto L_c02350;
L_c0230c:;
    { uint32_t ea = c->r[4] + 0x1c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c02354; }
    c->r[1] = 0xe36a58u;
    c->v.s[0] = LD32(c->r[4] + 460u);
    { uint32_t ea = 0xc0232cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[1] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 460u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[4] + 464u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[0]); }
L_c02350:;
    c->r[0] = 0x1u;
L_c02354:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_c0235c(Cpu *restrict c) {
    FN_ENTER(0xc0235cu);
L_c0235c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xe40dd8u;
    { uint32_t ea = 0xc0236cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc02370u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[4]; c->r[14] = 0xc02388u; rt_dispatch(c);
    c->r[14] = 0xc0238cu; f_bff218(c);
    c->r[1] = 0xe40db0u;
    { uint32_t ea = 0xc02398u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x428c0000u;
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3e000000u;
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1f4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c023fc(Cpu *restrict c) {
    FN_ENTER(0xc023fcu);
L_c023fc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xc02410u; f_bff43c(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xc02438u; f_9bb638(c);
    c->r[1] = 0xb751fcu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xc02450u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x1f2u;
    c->r[1] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xc024b4u; f_9bb638(c);
    c->r[1] = 0xb7519cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xc024c8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1f4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xc0252cu; f_9bb638(c);
    c->r[1] = 0xb75134u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xc02540u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1f8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xc025a0u; f_9bb638(c);
    c->r[1] = 0xb71f57u;
    c->r[1] = 0xc025acu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1d4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_c02604(Cpu *restrict c) {
    FN_ENTER(0xc02604u);
L_c02604:;
    __attribute__((musttail)) return f_c28a2c(c);
}
void f_c02608(Cpu *restrict c) {
    FN_ENTER(0xc02608u);
L_c02608:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0xc02620u; f_c293d0(c);
    c->r[6] = c->r[0];
    c->r[14] = 0xc02628u; f_e8f36c(c);
    c->r[0] = 0xe40b10u;
    c->r[7] = 0x0u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0xc0263cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + 0x8u;
    c->r[0] = 0xe40af8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xc02658u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    c->r[14] = 0xc02668u; f_c2948c(c);
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0xc02674u; f_c293d0(c);
    c->r[6] = c->r[0];
    c->r[14] = 0xc0267cu; f_e8f36c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40ab8u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xc0269cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    c->r[14] = 0xc026acu; f_c2948c(c);
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0xc026b8u; f_c293d0(c);
    c->r[6] = c->r[0];
    c->r[14] = 0xc026c0u; f_e8f36c(c);
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40a78u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xc026e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    c->r[14] = 0xc026f0u; f_c2948c(c);
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0xc026fcu; f_c293d0(c);
    c->r[6] = c->r[0];
    c->r[14] = 0xc02704u; f_e8f36c(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40a38u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xc02724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_c2948c(c);
}
void f_c0274c(Cpu *restrict c) {
    FN_ENTER(0xc0274cu);
L_c0274c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xc8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[10] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c0280c; }
    { uint32_t ea = c->r[10] + 0x1f2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0280c; }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c027a8; }
    c->r[0] = 0xe3a428u;
    c->r[1] = 0xe409bcu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xc027a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc027a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc027a8u; f_d85a14(c);
L_c027a8:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x128u; uint32_t v = LD32(ea); c->r[9] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_NE) { goto L_c027d4; }
    c->r[0] = 0x90u;
    { uint32_t ea = c->r[10] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xc027d0u; f_c29344(c);
    { uint32_t ea = c->r[10] + 0x128u; uint32_t v = LD32(ea); c->r[9] = v; }
L_c027d4:;
    c->v.s[16] = LD32(c->r[10] + 304u);
    c->v.s[20] = LD32(c->r[10] + 320u);
    c->v.s[30] = 0x0u;
    c->v.s[18] = LD32(c->r[10] + 312u);
    c->v.s[22] = LD32(c->r[10] + 328u);
    c->v.s[24] = 0x3a83126fu;
    c->v.f[28] = c->v.f[16] - c->v.f[20];
    c->v.s[0] = c->v.s[30];
    c->v.f[17] = c->v.f[18] - c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c02824; }
L_c0280c:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_c29350(c);
L_c02824:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    c->v.s[26] = LD32(c->r[10] + 324u);
    c->v.s[19] = LD32(c->r[10] + 308u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c02844; }
    c->r[14] = 0xc02840u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c02844:;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xe36300u;
    c->v.f[6] = c->v.f[19] * c->v.f[30];
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    { uint32_t ea = 0xc02860u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[17] * c->v.f[0];
    c->v.f[2] = -(float)(c->v.f[17] * c->v.f[0]);
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[16] * c->v.f[4]);
    ST32(c->r[13] + 176u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe362bcu;
    ST32(c->r[13] + 184u, c->v.s[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[0]);
    { uint32_t ea = 0xc028a0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 188u, c->v.s[0]);
    c->r[14] = 0xc028acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x190u;
    c->pc = c->r[3]; c->r[14] = 0xc028c0u; rt_dispatch(c);
    c->r[1] = 0x190u;
    c->r[7] = c->r[0];
    c->r[14] = 0xc028ccu; f_15efd7c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xc028d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->pc = c->r[2]; c->r[14] = 0xc028e4u; rt_dispatch(c);
    c->r[0] = 0x64u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe36b4cu;
    { uint32_t ea = 0xc02900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x640u;
    c->pc = c->r[3]; c->r[14] = 0xc02910u; rt_dispatch(c);
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[4] = c->r[0];
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[9], c->r[0]); }
    if (COND_EQ) { goto L_c02f98; }
    c->r[0] = 0xe36204u;
    c->v.f[28] = c->v.f[22] - c->v.f[18];
    c->v.f[30] = c->v.f[20] - c->v.f[16];
    c->v.s[17] = 0x358637beu;
    c->r[6] = 0x64u;
    c->r[14] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xc02948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe361f8u;
    { uint32_t ea = 0xc02954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe36aecu;
    { uint32_t ea = 0xc02960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe36ae0u;
    { uint32_t ea = 0xc0296cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe36ad4u;
    { uint32_t ea = 0xc02978u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe361d8u;
    { uint32_t ea = 0xc02984u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
L_c02988:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x82u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    if (COND_CC) { goto L_c029b4; }
    { uint32_t ea = c->r[12] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
L_c029b4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c03064; }
    c->v.s[4] = c->r[0];
    c->v.s[6] = c->r[1];
    c->v.f[8] = c->v.f[0] - c->v.f[18];
    c->v.f[10] = c->v.f[2] - c->v.f[23];
    c->v.f[0] = c->v.f[0] - c->v.f[19];
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    c->v.f[12] = c->v.f[4] - c->v.f[18];
    c->v.f[14] = c->v.f[6] - c->v.f[23];
    c->v.f[4] = c->v.f[4] - c->v.f[19];
    c->v.f[6] = c->v.f[6] - c->v.f[16];
    c->v.f[25] = c->v.f[10] * c->v.f[8];
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[27] = c->v.f[14] * c->v.f[12];
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[6] * c->v.f[4]);
L_c02a08:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], c->r[0]); }
    if (COND_NE) { goto L_c02a30; }
L_c02a1c:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
L_c02a20:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_c02a08; }
    goto L_c03060;
L_c02a30:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c02a1c; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[5];
    { uint32_t ea = c->r[10] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c02ab4; }
    { uint32_t ea = c->r[10] + 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] & 0x1u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[2] | c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c02a84; }
    c->r[6] = c->r[5] & c->r[6];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_c02ab4; }
L_c02a84:;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 1);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_c02a98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
L_c02a98:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[4]; c->r[14] = 0xc02aa4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[14] = 0x0u;
    if (COND_EQ) { goto L_c02b88; }
L_c02ab4:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[8]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x1u;
    c->r[2] = c->r[0] + (c->r[2] << 1);
    (void)f_subs(c, c->r[1], c->r[3]);
    { uint32_t ea = c->r[12] + 0x80u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_c02af0; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c02af8;
L_c02af0:;
    { uint32_t ea = c->r[12] + 0x84u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[6] + (c->r[2] << 4);
L_c02af8:;
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[6] = c->r[2] + 0x4u;
    c->r[5] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CS) { goto L_c02b30; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4] + 0x8u;
    c->r[6] = c->r[4] + 0x4u;
    c->r[5] = c->r[4];
    goto L_c02b40;
L_c02b30:;
    { uint32_t ea = c->r[12] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + (c->r[4] << 4);
    c->r[3] = c->r[5] + 0x8u;
    c->r[6] = c->r[5] + 0x4u;
L_c02b40:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->r[2];
    c->v.s[14] = c->r[1];
    c->v.s[2] = c->r[0];
    c->v.s[4] = c->r[5];
    c->v.s[6] = c->r[6];
    c->v.s[8] = c->r[3];
    c->v.f[10] = c->v.f[0] - c->v.f[4];
    c->v.f[1] = c->v.f[14] - c->v.f[6];
    c->v.f[12] = c->v.f[2] - c->v.f[8];
    c->v.f[3] = c->v.f[10] * c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[12] * c->v.f[12]);
    vfp_cmp_f(c, c->v.f[3], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c02b9c; }
L_c02b88:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[9];
    goto L_c02a20;
L_c02b9c:;
    c->v.f[3] = c->v.f[26] - c->v.f[14];
    c->v.f[1] = c->v.f[20] - c->v.f[0];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[14]); }
    c->v.f[5] = c->v.f[3] * c->v.f[3];
    c->v.f[3] = c->v.f[22] - c->v.f[2];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[3]);
    vfp_cmp_f(c, c->v.f[5], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c02a1c; }
    c->v.f[7] = c->v.f[26] - c->v.f[6];
    c->v.f[5] = c->v.f[20] - c->v.f[4];
    c->v.f[9] = c->v.f[7] * c->v.f[7];
    c->v.f[7] = c->v.f[22] - c->v.f[8];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[5]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[7] * c->v.f[7]);
    vfp_cmp_f(c, c->v.f[9], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c02a1c; }
    c->v.f[7] = c->v.f[30] * c->v.f[7];
    c->v.f[3] = c->v.f[30] * c->v.f[3];
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[28] * c->v.f[5]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[28] * c->v.f[1]);
    c->v.f[1] = c->v.f[3] * c->v.f[7];
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c02a1c; }
    c->v.f[5] = c->v.f[8] - c->v.f[18];
    c->v.f[1] = c->v.f[4] - c->v.f[0];
    c->v.f[9] = c->v.f[8] - c->v.f[22];
    c->v.f[3] = c->v.f[8] - c->v.f[2];
    c->v.f[7] = c->v.f[4] - c->v.f[16];
    c->v.f[13] = c->v.f[4] - c->v.f[20];
    c->v.f[11] = c->v.f[1] * c->v.f[5];
    c->v.f[9] = c->v.f[1] * c->v.f[9];
    c->v.f[11] = c->v.f[11] - (float)(c->v.f[7] * c->v.f[3]);
    c->v.f[9] = c->v.f[9] - (float)(c->v.f[13] * c->v.f[3]);
    c->v.f[9] = c->v.f[9] * c->v.f[11];
    vfp_cmp_f(c, c->v.f[9], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c02a1c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c02ce0; }
    c->v.f[14] = c->v.f[21] - c->v.f[14];
    c->v.f[9] = c->v.f[23] - c->v.f[0];
    c->v.f[11] = c->v.f[19] - c->v.f[2];
    c->v.f[14] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[9] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[11]);
    vfp_cmp_f(c, c->v.f[14], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c02c9c; }
    c->v.f[0] = c->v.f[10] * c->v.f[5];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[7] * c->v.f[12]);
    c->v.f[0] = c->v.f[27] * c->v.f[0];
    goto L_c02cd4;
L_c02c9c:;
    c->v.f[6] = c->v.f[21] - c->v.f[6];
    c->v.f[4] = c->v.f[23] - c->v.f[4];
    c->v.f[8] = c->v.f[19] - c->v.f[8];
    c->v.f[6] = c->v.f[6] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c02ce0; }
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    c->v.f[0] = c->v.f[0] - c->v.f[16];
    c->v.f[2] = c->v.f[1] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[3]);
    c->v.f[0] = c->v.f[25] * c->v.f[2];
L_c02cd4:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_c02a1c; }
L_c02ce0:;
    { uint32_t ea = c->r[10] + 0x1f3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = 0xffffu;
    c->r[8] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x7f7f0000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c02d30; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
L_c02d10:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_c02d30; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_NE) { goto L_c02d10; }
    goto L_c03884;
L_c02d30:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CS) { goto L_c02d50; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    goto L_c02ddc;
L_c02d50:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc02d5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0x10u;
    c->r[5] = (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xc02d7cu; rt_dispatch(c);
    c->r[1] = c->r[5];
    c->r[7] = c->r[0];
    c->r[14] = 0xc02d88u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xc02d9cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[8] = 0x1u;
    c->r[14] = 0xc02da8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc02db8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
L_c02ddc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_c02f04; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[6] << 4);
    c->pc = c->r[3]; c->r[14] = 0xc02e08u; rt_dispatch(c);
    c->r[14] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[12] = 0x0u;
    if (COND_EQ) { goto L_c02e50; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[6];
L_c02e20:;
    c->r[2] = c->r[4];
    c->r[7] = c->r[14];
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[3]); c->r[7] = ea; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[12]); }
    if (COND_NE) { goto L_c02e20; }
L_c02e50:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[4] = c->r[14];
    c->pc = c->r[2]; c->r[14] = 0xc02e6cu; rt_dispatch(c);
    c->r[6] = c->r[6] + 0x64u;
    c->r[0] = c->r[13] + 0x9cu;
    c->r[1] = c->r[6];
    c->r[14] = 0xc02e7cu; f_521f9c(c);
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[6] << 4);
    c->pc = c->r[3]; c->r[14] = 0xc02e94u; rt_dispatch(c);
    c->r[1] = c->r[4];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c02ef0; }
    c->r[0] = c->r[1] + 0x8u;
    c->r[14] = c->r[1] + 0x4u;
    c->r[2] = c->r[4] + 0x8u;
    c->r[3] = 0x0u;
L_c02ebc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14] + (c->r[3] << 4); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[12]); }
    c->r[2] = c->r[2] + 0x10u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CC) { goto L_c02ebc; }
L_c02ef0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc02f04u; rt_dispatch(c);
L_c02f04:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0xc4u;
    c->r[3] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x70u;
    c->r[14] = 0xc02f3cu; f_9d9734(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 8u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
    if (COND_EQ) { goto L_c02f98; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[23] = LD32(c->r[13] + 112u);
    c->v.s[21] = LD32(c->r[13] + 116u);
    c->v.s[19] = LD32(c->r[13] + 120u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_NE) { goto L_c02988; }
L_c02f98:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_c03064; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[10] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe40174u;
    { uint32_t ea = 0xc02fb4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc02fb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc02fd0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0xe40148u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = 0xc02fe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35b58u;
    { uint32_t ea = 0xc02ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c0318c; }
    { uint32_t ea = c->r[10] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x110u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_c03230; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c032ac;
L_c03060:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
L_c03064:;
    c->r[0] = c->r[10];
    c->r[14] = 0xc0306cu; f_c29350(c);
L_c0306c:;
    c->r[0] = 0xe363d4u;
    { uint32_t ea = 0xc03078u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xc03088u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c030b0; }
    c->r[0] = 0xe35abcu;
    { uint32_t ea = 0xc030a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc030a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc030b0u; rt_dispatch(c);
L_c030b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
L_c030c0:;
    c->r[0] = 0xe35a94u;
    { uint32_t ea = 0xc030ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03154; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c03118; }
    c->r[4] = 0x0u;
L_c030ec:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0310c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc03108u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
L_c0310c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_c030ec; }
L_c03118:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03140; }
    c->r[0] = 0xe35a2cu;
    { uint32_t ea = 0xc03130u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03130u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03140u; rt_dispatch(c);
L_c03140:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    goto L_c0317c;
L_c03154:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0317c; }
    c->r[0] = 0xe359f0u;
    { uint32_t ea = 0xc0316cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc0316cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0317cu; rt_dispatch(c);
L_c0317c:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_c0318c:;
    c->r[0] = 0xe362b4u;
    { uint32_t ea = 0xc03198u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xc031a8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c031d0; }
    c->r[0] = 0xe3599cu;
    { uint32_t ea = 0xc031c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc031c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc031d0u; rt_dispatch(c);
L_c031d0:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c03218; }
L_c031ec:;
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0320c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc03208u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c0320c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_c031ec; }
L_c03218:;
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c037bc; }
    c->r[0] = 0xe3592cu;
    { uint32_t ea = 0xc03230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c037a8;
L_c03230:;
    c->r[0] = 0xe35920u;
    { uint32_t ea = 0xc0323cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc03240u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[5] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[9] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc0325cu; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[5] = c->r[0];
    c->r[14] = 0xc03268u; f_15efd7c(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc0327cu; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc03284u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03294u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[1]); }
L_c032ac:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[6] + 0x1u;
    { uint64_t r = (uint64_t)c->r[5] * c->r[4]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    { uint32_t ea = c->r[10] + 0x84u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { c->r[0] = ~0x0u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0xc032e4u; f_9af518(c);
    c->r[1] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    if (COND_EQ) { goto L_c03370; }
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[6] = c->r[6] & 0xfffffffu;
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_c03328; }
    c->r[2] = 0xe3fe54u;
    { uint32_t ea = 0xc03310u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x18u;
L_c03328:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_c03370; }
    c->r[3] = 0xe3fe20u;
    c->r[0] = c->r[1] + (c->r[5] << 4);
    c->r[7] = 0x0u;
    { uint32_t ea = 0xc03344u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
L_c03344:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x20u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_c03344; }
L_c03370:;
    { uint32_t ea = c->r[10] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_c033c0; }
    c->r[0] = ~0x3u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] + (c->r[6] << 2);
L_c03390:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + (c->r[3] << 4);
    c->r[7] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[7] - (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[3] << 4);
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[3]);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_HI) { goto L_c03390; }
L_c033c0:;
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c0357c; }
    c->r[0] = 0xe3fd28u;
    c->r[8] = ~0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xc03400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe3fd20u;
    { uint32_t ea = 0xc0340cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35730u;
    { uint32_t ea = 0xc0341cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35734u;
    { uint32_t ea = 0xc03428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_c03428:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[10];
    c->r[10] = c->r[3];
    c->r[0] = c->r[5];
    c->r[14] = 0xc0343cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc03454u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_c03630; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + c->r[8];
    c->r[3] = c->r[10];
    c->r[10] = c->r[9];
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CS) { goto L_c034e4; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c03568;
L_c034e4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xc034f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[6] + 0x10u;
    c->r[2] = 0x10u;
    c->r[6] = (c->r[9] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xc03510u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[7] = c->r[0];
    c->r[14] = 0xc0351cu; f_15efd7c(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xc03530u; f_15efdd0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xc03538u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03548u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x110u; ST32(ea, c->r[9]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[1]); }
L_c03568:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[8] = c->r[8] - 0x1u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_CC) { goto L_c03428; }
L_c0357c:;
    c->r[0] = 0xe3fba0u;
    { uint32_t ea = 0xc03588u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc0358cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[7]; c->r[14] = 0xc035a4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0xe3fb74u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = 0xc035b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe35584u;
    { uint32_t ea = 0xc035c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c03708; }
    { uint32_t ea = c->r[10] + 0x140u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x110u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_c037dc; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_c03858;
L_c03630:;
    c->r[0] = 0xe35e10u;
    { uint32_t ea = 0xc0363cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0364cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03674; }
    c->r[0] = 0xe354f8u;
    { uint32_t ea = 0xc03664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03664u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03674u; rt_dispatch(c);
L_c03674:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c036bc; }
L_c03690:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c036b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc036acu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c036b0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_c03690; }
L_c036bc:;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c036e4; }
    c->r[0] = 0xe35488u;
    { uint32_t ea = 0xc036d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc036d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc036e4u; rt_dispatch(c);
L_c036e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xc036fcu; f_c29344(c);
    goto L_c030c0;
L_c03708:;
    c->r[0] = 0xe35d38u;
    { uint32_t ea = 0xc03714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03724u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c0374c; }
    c->r[0] = 0xe35420u;
    { uint32_t ea = 0xc0373cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc0373cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc0374cu; rt_dispatch(c);
L_c0374c:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c03794; }
L_c03768:;
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03788; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc03784u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c03788:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_c03768; }
L_c03794:;
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c037bc; }
    c->r[0] = 0xe353b0u;
    { uint32_t ea = 0xc037acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_c037a8:;
    c->r[14] = 0xc037acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc037bcu; rt_dispatch(c);
L_c037bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xc037d4u; f_c29344(c);
    goto L_c030c0;
L_c037dc:;
    c->r[0] = 0xe35374u;
    { uint32_t ea = 0xc037e8u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc037ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[5] + 0x10u;
    c->r[2] = 0x10u;
    c->r[7] = (c->r[9] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xc03808u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[5] = c->r[0];
    c->r[14] = 0xc03814u; f_15efd7c(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xc03828u; f_15efdd0(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xc03830u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03840u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[1]); }
L_c03858:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xc03870u; f_c29344(c);
    goto L_c0306c;
L_c03884:;
    c->r[0] = 0xe35bbcu;
    { uint32_t ea = 0xc03890u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xc038a0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c038c8; }
    c->r[0] = 0xe352a4u;
    { uint32_t ea = 0xc038b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc038b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc038c8u; rt_dispatch(c);
L_c038c8:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c03910; }
L_c038e4:;
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03904; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xc03900u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_c03904:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_c038e4; }
L_c03910:;
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03938; }
    c->r[0] = 0xe35234u;
    { uint32_t ea = 0xc03928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03928u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc03938u; rt_dispatch(c);
L_c03938:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xc03950u; f_c29350(c);
    goto L_c030c0;
}
void f_c039e0(Cpu *restrict c) {
    FN_ENTER(0xc039e0u);
L_c039e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_c03a68; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c03ac8; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c03a2c; }
    c->r[0] = 0xe391acu;
    c->r[1] = 0xe3f740u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xc03a1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc03a20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03a24u; f_d85a14(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03ac0; }
L_c03a2c:;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c03a78; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[4] + 0x60u; ST16(ea, c->r[1]); }
    if (COND_LS) { goto L_c03a80; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c03a8c; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_c03a90;
L_c03a68:;
    { uint32_t ea = c->r[4] + 0x189u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c03b00; }
    goto L_c03a80;
L_c03a78:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST16(ea, c->r[0]); }
L_c03a80:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c29350(c);
L_c03a8c:;
    c->r[3] = 0x0u;
L_c03a90:;
    c->r[0] = c->r[4];
    c->r[14] = 0xc03a98u; f_e8d16c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c03ac8; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[0] = 0x110u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_c03abc; }
    c->r[0] = 0x90u;
L_c03abc:;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
L_c03ac0:;
    c->r[0] = c->r[4];
    c->r[14] = 0xc03ac8u; f_c29344(c);
L_c03ac8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xc03ad0u; f_e8d9c4(c);
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_c03af0; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xc03aecu; f_c29350(c);
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c03af0:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x210u;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
L_c03b00:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c29344(c);
}
void f_c03b14(Cpu *restrict c) {
    FN_ENTER(0xc03b14u);
L_c03b14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_c03b3c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_c03bd0; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_c03ba4; }
L_c03b3c:;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c03b6c; }
    c->r[0] = 0xe3906cu;
    c->r[1] = 0xe3f600u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xc03b5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc03b60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc03b64u; f_d85a14(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03c3c; }
L_c03b6c:;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; } }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xc03b9cu; f_e8d5d0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03bec; }
L_c03ba4:;
    c->r[0] = c->r[4];
    c->r[14] = 0xc03bacu; f_e8d9c4(c);
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_c03c14; }
    { uint32_t ea = c->r[4] + 0x189u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03c0c; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc03bccu; f_c29344(c);
    goto L_c03c14;
L_c03bd0:;
    { uint32_t ea = c->r[4] + 0x189u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c03c3c; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c29350(c);
L_c03bec:;
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[0] = 0x110u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_c03c38; }
    c->r[0] = 0x90u;
    goto L_c03c38;
L_c03c0c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xc03c14u; f_c29350(c);
L_c03c14:;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[13] = c->r[13] + 0x8u; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_c03c3c; }
    c->r[0] = 0x50u;
L_c03c38:;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
L_c03c3c:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c29344(c);
}
void f_c03c54(Cpu *restrict c) {
    FN_ENTER(0xc03c54u);
L_c03c54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_c03ca4; }
    { uint32_t ea = c->r[4] + 0x1f4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0x130u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c03c84; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc03c80u; f_c03ddc(c);
    goto L_c03c8c;
L_c03c84:;
    c->r[0] = c->r[4];
    c->r[14] = 0xc03c8cu; f_c06460(c);
L_c03c8c:;
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xc03c9cu; f_c01404(c); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
L_c03ca4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c29344(c);
}
void f_c03cb0(Cpu *restrict c) {
    FN_ENTER(0xc03cb0u);
L_c03cb0:;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->v.s[12] = LD32(c->r[1] + 24u);
    c->v.s[2] = LD32(c->r[2] + 24u);
    c->v.s[9] = LD32(c->r[1] + 8u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[7] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[2] + 16u);
    c->v.s[11] = LD32(c->r[1] + 16u);
    c->v.s[10] = LD32(c->r[2]);
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.f[1] = c->v.f[14] - c->v.f[7];
    c->v.f[3] = c->v.f[2] - c->v.f[4];
    c->v.f[5] = c->v.f[14] - c->v.f[10];
    c->v.f[6] = c->v.f[14] - c->v.f[11];
    c->v.f[8] = c->v.f[2] - c->v.f[12];
    c->v.f[0] = c->v.f[2] - c->v.f[9];
    c->v.f[2] = c->v.f[12] - c->v.f[2];
    c->v.f[4] = c->v.f[12] - c->v.f[4];
    c->v.f[14] = c->v.f[11] - c->v.f[14];
    c->v.f[10] = c->v.f[11] - c->v.f[10];
    c->v.f[12] = c->v.f[12] - c->v.f[9];
    c->v.f[7] = c->v.f[11] - c->v.f[7];
    if (COND_EQ) { goto L_c03d60; }
    c->v.s[13] = LD32(c->r[1] + 20u);
    c->v.s[9] = LD32(c->r[2] + 20u);
    c->v.s[20] = LD32(c->r[1] + 4u);
    c->v.s[22] = LD32(c->r[2] + 4u);
    (void)f_subs(c, c->r[3], 0x0u);
    c->v.f[15] = c->v.f[9] - c->v.f[13];
    c->v.f[18] = c->v.f[9] - c->v.f[20];
    c->v.f[11] = c->v.f[9] - c->v.f[22];
    c->v.f[16] = c->v.f[13] - c->v.f[9];
    c->v.f[9] = c->v.f[13] - c->v.f[22];
    c->v.f[13] = c->v.f[13] - c->v.f[20];
    if (COND_NE) { goto L_c03d84; }
    c->v.f[0] = c->v.f[11] * c->v.f[0];
    c->v.f[2] = c->v.f[13] * c->v.f[2];
    c->v.f[4] = c->v.f[13] * c->v.f[4];
    c->v.f[6] = c->v.f[15] * c->v.f[3];
    c->v.f[8] = c->v.f[11] * c->v.f[8];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[3]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[16]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[12] * c->v.f[9]);
    goto L_c03da4;
L_c03d60:;
    c->v.f[0] = c->v.f[5] * c->v.f[0];
    c->v.f[2] = c->v.f[7] * c->v.f[2];
    c->v.f[4] = c->v.f[7] * c->v.f[4];
    c->v.f[6] = c->v.f[6] * c->v.f[3];
    c->v.f[8] = c->v.f[5] * c->v.f[8];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[12] * c->v.f[10]);
    goto L_c03da4;
L_c03d84:;
    c->v.f[0] = c->v.f[5] * c->v.f[18];
    c->v.f[2] = c->v.f[7] * c->v.f[16];
    c->v.f[4] = c->v.f[7] * c->v.f[9];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[1] * c->v.f[11]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[13] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[13] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] * c->v.f[11];
    c->v.f[8] = c->v.f[5] * c->v.f[15];
L_c03da4:;
    c->v.f[6] = c->v.f[8] - c->v.f[6];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = 0x1u; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    return;
}
