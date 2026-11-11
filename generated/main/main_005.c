#include "cpu.h"
#include "neon_rt.h"
void f_249240(Cpu *c);
void f_249290(Cpu *c);
void f_249604(Cpu *c);
void f_249858(Cpu *c);
void f_25ceb4(Cpu *c);
void f_26b3fc(Cpu *c);
void f_26ff44(Cpu *c);
void f_270824(Cpu *c);
void f_270ffc(Cpu *c);
void f_27105c(Cpu *c);
void f_271078(Cpu *c);
void f_27109c(Cpu *c);
void f_2711e8(Cpu *c);
void f_2712a4(Cpu *c);
void f_271320(Cpu *c);
void f_271330(Cpu *c);
void f_272128(Cpu *c);
void f_27270c(Cpu *c);
void f_277370(Cpu *c);
void f_277478(Cpu *c);
void f_277568(Cpu *c);
void f_2777e0(Cpu *c);
void f_277de4(Cpu *c);
void f_278de0(Cpu *c);
void f_278f7c(Cpu *c);
void f_279330(Cpu *c);
void f_2795ac(Cpu *c);
void f_279abc(Cpu *c);
void f_27a8dc(Cpu *c);
void f_27b1dc(Cpu *c);
void f_27b694(Cpu *c);
void f_27b8a8(Cpu *c);
void f_27be10(Cpu *c);
void f_27bfd8(Cpu *c);
void f_27c184(Cpu *c);
void f_27cab8(Cpu *c);
void f_27dc2c(Cpu *c);
void f_27e2a4(Cpu *c);
void f_27e734(Cpu *c);
void f_27ea84(Cpu *c);
void f_27ee3c(Cpu *c);
void f_27fc24(Cpu *c);
void f_27fc40(Cpu *c);
void f_27fcbc(Cpu *c);
void f_280c48(Cpu *c);
void f_2818c0(Cpu *c);
void f_281c6c(Cpu *c);
void f_282510(Cpu *c);
void f_282538(Cpu *c);
void f_2825ac(Cpu *c);
void f_2825d0(Cpu *c);
void f_2825fc(Cpu *c);
void f_28282c(Cpu *c);
void f_282cd4(Cpu *c);
void f_282d8c(Cpu *c);
void f_282f80(Cpu *c);
void f_28dee0(Cpu *c);
void f_299d14(Cpu *c);
void f_2a1fc8(Cpu *c);
void f_2a2388(Cpu *c);
void f_2a77b0(Cpu *c);
void f_2afda4(Cpu *c);
void f_2afeec(Cpu *c);
void f_2b0694(Cpu *c);
void f_2b07d0(Cpu *c);
void f_2b09bc(Cpu *c);
void f_2b09e4(Cpu *c);
void f_2b09f0(Cpu *c);
void f_2b0a00(Cpu *c);
void f_2b0a24(Cpu *c);
void f_2b0a30(Cpu *c);
void f_2b0a84(Cpu *c);
void f_2b0b4c(Cpu *c);
void f_2b4e58(Cpu *c);
void f_2b6f0c(Cpu *c);
void f_2b70a4(Cpu *c);
void f_2bb5f0(Cpu *c);
void f_2bb638(Cpu *c);
void f_2bb680(Cpu *c);
void f_2bc8b0(Cpu *c);
void f_2bca40(Cpu *c);
void f_2bcb9c(Cpu *c);
void f_2bcc04(Cpu *c);
void f_2bce6c(Cpu *c);
void f_2bd184(Cpu *c);
void f_2bd494(Cpu *c);
void f_2be5d4(Cpu *c);
void f_2becf0(Cpu *c);
void f_2bee80(Cpu *c);
void f_2beecc(Cpu *c);
void f_2bf0f4(Cpu *c);
void f_2bf178(Cpu *c);
void f_2bf6e8(Cpu *c);
void f_2bf7bc(Cpu *c);
void f_2c03f0(Cpu *c);
void f_2c0410(Cpu *c);
void f_2c0644(Cpu *c);
void f_2c0e78(Cpu *c);
void f_2c21c8(Cpu *c);
void f_2c7314(Cpu *c);
void f_368be8(Cpu *c);
void f_369174(Cpu *c);
void f_3696c4(Cpu *c);
void f_394228(Cpu *c);
void f_458ffc(Cpu *c);
void f_474ce4(Cpu *c);
void f_5a5324(Cpu *c);
void f_5a5b80(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_2786bc(Cpu *restrict c) {
    FN_ENTER(0x2786bcu);
L_2786bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = c->r[1];
    c->r[1] = 0x1428u;
    c->r[12] = c->r[2];
    c->r[2] = 0x5e70u;
    c->r[4] = 0x5e74u;
    c->v.s[2] = 0x43160000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x5e78u;
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + c->r[4];
    c->v.s[1] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[2]);
    c->r[2] = c->r[14];
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_277de4(c);
}
void f_278708(Cpu *restrict c) {
    FN_ENTER(0x278708u);
L_278708:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->v.s[16] = c->v.s[2];
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->v.s[18] = c->v.s[1];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[24] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x27874cu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x278758u; f_15efdf4(c);
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_278814; }
    c->v.s[8] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e70u;
    c->r[2] = 0x0u;
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x5e74u;
    c->v.f[10] = c->v.f[0] * c->v.f[8];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[20] * c->v.f[16]);
    ST32(c->r[0], c->v.s[22]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[20] * c->v.f[8]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x5e80u;
    ST32(c->r[0], c->v.s[18]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[10] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->r[1] = c->r[0] + c->r[1];
    ST32(c->r[1], c->v.s[2]);
    c->r[1] = 0x5e84u;
    c->r[1] = c->r[0] + c->r[1];
    ST32(c->r[1], c->v.s[4]);
    c->r[1] = 0x5e88u;
    c->r[1] = c->r[0] + c->r[1];
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x5e8cu;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5e64u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[6]); }
    c->r[1] = 0x5e78u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[1] = 0x5e90u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x5e94u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
L_278814:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_278824(Cpu *restrict c) {
    FN_ENTER(0x278824u);
L_278824:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->v.s[20] = c->v.s[2];
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->v.s[16] = c->v.s[1];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[22] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x278868u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x278874u; f_15efdf4(c);
    c->v.s[26] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.s[8] = LD32(c->r[0] + 464u);
    c->v.s[10] = LD32(c->r[0] + 472u);
    c->v.s[28] = LD32(c->r[0] + 68u);
    c->v.f[2] = c->v.f[0] * c->v.f[26];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[24] * c->v.f[26]);
    c->v.f[20] = c->v.f[0] + c->v.f[4];
    c->v.f[22] = c->v.f[6] + c->v.f[2];
    c->v.f[0] = c->v.f[8] - c->v.f[22];
    c->v.f[1] = c->v.f[10] - c->v.f[20];
    c->r[14] = 0x2788b4u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->v.s[0];
    c->v.f[0] = c->v.f[28] + c->v.f[26];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[0] - c->r[2];
    if (COND_EQ) { goto L_278900; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_278908; }
    c->r[2] = c->r[0] & 0x8000u;
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_CS) { goto L_278900; }
    c->r[6] = 0x1u;
    goto L_278908;
L_278900:;
    c->r[0] = 0x10000u - c->r[0];
    c->r[6] = 0x2u;
L_278908:;
    c->r[2] = 0x5e70u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x5e74u;
    ST32(c->r[1], c->v.s[18]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x5e80u;
    ST32(c->r[1], c->v.s[16]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[2];
    ST32(c->r[2], c->v.s[22]);
    c->r[2] = 0x5e84u;
    c->r[2] = c->r[1] + c->r[2];
    ST32(c->r[2], c->v.s[0]);
    c->r[2] = 0x5e88u;
    c->r[2] = c->r[1] + c->r[2];
    ST32(c->r[2], c->v.s[20]);
    c->r[2] = 0x5e8cu;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x5e64u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[6]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = 0x5e78u;
    (void)f_subs(c, c->r[1], c->r[5]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_CC) { c->r[5] = c->r[0]; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[1] = 0x5e90u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x5e94u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2789ac(Cpu *restrict c) {
    FN_ENTER(0x2789acu);
L_2789ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[1] = 0x140cu;
    c->r[6] = 0x5e88u;
    c->r[2] = 0x5e90u;
    c->r[3] = 0x5e80u;
    c->r[7] = 0x5e94u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[1] = c->r[5] - c->r[1];
    c->v.s[2] = LD32(c->r[1]);
    c->r[1] = 0x5e78u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[8] = v; }
    c->r[1] = 0x5e64u;
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[11] = v; }
    c->r[2] = 0x5e74u;
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[1] = 0x5e70u;
    c->v.s[20] = LD32(c->r[6]);
    c->r[6] = 0x5e84u;
    c->r[2] = c->r[0] + c->r[2];
    c->v.s[24] = LD32(c->r[3]);
    c->r[1] = c->r[0] + c->r[1];
    c->r[6] = c->r[0] + c->r[6];
    c->r[0] = c->r[0] + c->r[7];
    c->v.s[18] = LD32(c->r[2]);
    c->v.s[16] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[22] = LD32(c->r[6]);
    c->v.f[26] = c->v.f[16] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { (void)f_subs(c, c->r[8], c->r[11]); }
    ST32(c->r[0], c->v.s[26]);
    c->r[0] = 0x1u;
    if (COND_LS) { goto L_278b78; }
    vfp_cmp_f(c, c->v.f[16], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_278b78; }
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_278b78; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[24] - c->v.f[0];
    c->v.f[1] = c->v.f[20] - c->v.f[2];
    c->r[14] = 0x278a84u; f_15efd70(c);
    vfp_cmp_f(c, c->v.f[26], c->v.f[18]);
    c->r[9] = c->r[8] - c->r[11];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_278abc; }
    c->v.s[2] = c->r[9];
    c->v.f[0] = c->v.f[18] - c->v.f[16];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64(ceil((double)c->v.f[0]));
    c->r[9] = c->v.s[0];
L_278abc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[9]);
    (void)f_subs(c, c->r[10], 0x1u);
    c->v.s[0] = 0x38c90fdbu;
    c->r[1] = 0x0u - c->r[0];
    if (COND_NE) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_EQ) { c->r[1] = c->r[9]; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = (float)c->v.s[2];
    c->v.s[26] = LD32(c->r[1] + 64u);
    c->v.s[28] = LD32(c->r[1] + 68u);
    c->v.s[30] = LD32(c->r[1] + 72u);
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x278b10u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x278b1cu; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] - c->v.f[26];
    c->v.f[4] = c->v.f[20] - c->v.f[30];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[3] = 0x5e90u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[0]); }
    c->v.f[6] = c->v.f[2] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[18]);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[18]);
    c->v.f[4] = c->v.f[22] - c->v.f[28];
    c->v.f[6] = c->v.f[24] - c->v.f[6];
    c->v.f[2] = c->v.f[22] - c->v.f[4];
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    ST32(c->r[1] + 64u, c->v.s[6]);
    ST32(c->r[1] + 68u, c->v.s[2]);
    ST32(c->r[1] + 72u, c->v.s[0]);
    c->r[1] = c->r[11] + (uint32_t)(uint16_t)(c->r[9]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; ST16(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_LS) { c->r[0] = 0x1u; }
L_278b78:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_278b88(Cpu *restrict c) {
    FN_ENTER(0x278b88u);
L_278b88:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[4] = c->r[1];
    c->r[1] = 0x5e98u;
    c->r[8] = 0x0u;
    c->v.s[16] = c->v.s[0];
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0x5e9cu;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5ea0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x278bd4u; f_2c7314(c);
    c->r[0] = 0xff7fu;
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[4] = c->r[4] & c->r[0]; }
    c->r[0] = 0x10u;
    c->r[7] = c->r[0] & (c->r[4] >> 4);
    c->r[0] = c->r[5];
    c->r[14] = 0x278bf0u; f_2becf0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[1] = c->r[4];
    c->r[0] = c->r[0] + c->r[7];
    c->r[2] = c->r[0] + 0x1d0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x278c0cu; f_279330(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1f8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[7];
    c->r[1] = c->r[1] + 0x1d0u;
    { uint32_t ea = c->r[0] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_278c34(Cpu *restrict c) {
    FN_ENTER(0x278c34u);
L_278c34:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[4] = c->r[1];
    c->r[1] = 0x5e98u;
    c->r[6] = c->r[2];
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_278da4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_278dc4; }
    c->r[1] = 0x5e9cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_278da8; }
    c->v.s[2] = LD32(c->r[0] + 804u);
    c->v.s[0] = LD32(c->r[0] + 800u);
    c->v.s[4] = LD32(c->r[0] + 808u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_278cb8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x278cb8u; f_15efddc(c);
L_278cb8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5ea0u;
    c->r[0] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = 0x43160000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_278da8; }
    { uint32_t ea = c->r[0] + 0x335u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[16] = LD32(c->r[0] + 64u);
    c->v.s[18] = LD32(c->r[0] + 68u);
    c->v.s[20] = LD32(c->r[0] + 72u);
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] & 0x1u;
    c->r[1] = c->r[0] + (c->r[1] << 4);
    c->r[0] = c->r[13];
    c->v.s[22] = LD32(c->r[1] + 464u);
    c->v.s[24] = LD32(c->r[1] + 468u);
    c->v.s[26] = LD32(c->r[1] + 472u);
    c->r[1] = c->r[5];
    c->r[14] = 0x278d20u; f_278de0(c);
    c->v.s[2] = LD32(c->r[13] + 4u);
    c->v.f[4] = c->v.f[24] - c->v.f[18];
    c->v.s[6] = LD32(c->r[13]);
    c->v.f[0] = c->v.f[22] - c->v.f[16];
    c->v.s[8] = LD32(c->r[13] + 8u);
    c->v.f[10] = c->v.f[4] * c->v.f[2];
    c->v.f[2] = c->v.f[26] - c->v.f[20];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_278da8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x334u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[4] = COND_EQ ? c->v.s[6] : c->v.s[4];
    c->v.s[6] = 0x46afc800u;
    c->v.f[4] = c->v.f[4] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_278da8; }
    c->r[1] = 0x5e98u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x334u;
    c->r[2] = 0xfff7u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
L_278da4:;
    c->r[6] = 0x0u;
L_278da8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_278f7c(c);
L_278dc4:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_278de0(Cpu *restrict c) {
    FN_ENTER(0x278de0u);
L_278de0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    c->r[2] = 0x0u;
    c->r[6] = c->r[1];
    c->r[0] = 0x1428u;
    c->r[7] = 0x334u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_278e40; }
    c->v.s[22] = 0x0u;
    c->v.s[26] = 0x3f800000u;
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    c->v.s[16] = c->v.s[22];
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_278ea4; }
    goto L_278eb4;
L_278e40:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x278e6cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x278e78u; f_15efdf4(c);
    c->v.s[26] = 0x0u;
    c->v.s[16] = c->v.s[0];
    c->v.s[22] = c->v.s[18];
    c->v.f[22] = -c->v.f[22] + (float)(c->v.f[16] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[18] * c->v.f[26]);
    ST32(c->r[4], c->v.s[22]);
    ST32(c->r[4] + 4u, c->v.s[16]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_278eb4; }
L_278ea4:;
    c->v.s[24] = c->v.s[26];
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_278f14; }
    goto L_278f24;
L_278eb4:;
    c->r[1] = 0x1u;
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x342u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[18] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x278edcu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x278ee8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[24] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[20]);
    c->r[1] = 0x334u;
    ST32(c->r[4] + 4u, c->v.s[2]);
    ST32(c->r[4] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_278f24; }
L_278f14:;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[0] + c->r[5]; }
    goto L_278f2c;
L_278f24:;
    { uint32_t ea = c->r[0] + 0x330u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
L_278f2c:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x278f48u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x278f54u; f_15efdf4(c);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[22] * c->v.f[18]);
    ST32(c->r[4], c->v.s[2]);
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_278f7c(Cpu *restrict c) {
    FN_ENTER(0x278f7cu);
L_278f7c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[7] = c->r[1];
    c->r[8] = c->r[2];
    c->r[4] = c->r[5];
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x335u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[13];
    c->r[14] = 0x278fbcu; f_278de0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13]);
    c->v.s[2] = LD32(c->r[13] + 4u);
    c->v.s[4] = LD32(c->r[13] + 8u);
    c->r[1] = 0x334u;
    c->v.s[10] = LD32(c->r[0] + 804u);
    c->v.s[8] = LD32(c->r[0] + 800u);
    c->v.s[12] = LD32(c->r[0] + 808u);
    c->v.s[6] = LD32(c->r[0] + 496u);
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] - c->v.f[10];
    ST32(c->r[0] + 496u, c->v.s[6]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[22] = LD32(c->r[0] + 68u);
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[24] = LD32(c->r[0] + 64u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.s[20] = LD32(c->r[0] + 72u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->v.f[6] = c->v.f[22] - c->v.f[6];
    c->v.f[10] = c->v.f[24] - c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[20] - c->v.f[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.s[0] = LD32(c->r[0] + 496u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_279084; }
    c->r[9] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279314; }
    c->r[1] = c->r[6] & 0x1u;
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2790f8; }
    c->r[3] = c->r[2] & 0x80u;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279120; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27920c; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 8u);
    goto L_279218;
L_279084:;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27909c; }
    c->r[1] = 0x0u;
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[1]); }
    goto L_279314;
L_27909c:;
    c->r[1] = 0x5e98u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[6]); }
    c->r[1] = 0x5e9cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x5ea0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x2790c8u; f_2c7314(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_279114; }
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[6]); }
    c->r[9] = 0x1u;
    goto L_279314;
L_2790f8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_279314; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279170; }
    c->r[1] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] + 0x1d0u;
    goto L_27917c;
L_279114:;
    if (COND_NE) { goto L_279138; }
    c->v.s[16] = LD32(c->r[0] + 500u);
    goto L_27913c;
L_279120:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27922c; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    goto L_279234;
L_279138:;
    c->v.s[16] = 0x0u;
L_27913c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x279144u; f_2becf0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x334u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + (c->r[2] << 4);
    c->r[0] = c->r[5];
    c->r[14] = 0x279168u; f_279330(c);
    c->r[9] = 0x0u;
    goto L_279314;
L_279170:;
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 4);
L_27917c:;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[26] = LD32(c->r[1]);
    c->v.s[28] = LD32(c->r[1] + 4u);
    c->v.s[30] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x2791acu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[24] = c->v.f[26] - c->v.f[24];
    c->v.f[20] = c->v.f[30] - c->v.f[20];
    c->r[14] = 0x2791c0u; f_15efdf4(c);
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[18]);
    c->v.f[1] = c->v.f[28] - c->v.f[22];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x2791d4u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->r[3] = c->r[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x279200u; f_2c0e78(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[0]); }
    goto L_279314;
L_27920c:;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[0] + 464u);
    c->v.s[2] = LD32(c->r[0] + 472u);
L_279218:;
    c->v.f[0] = c->v.f[0] - c->v.f[24];
    c->v.f[1] = c->v.f[2] - c->v.f[20];
    c->r[14] = 0x279224u; f_15efd70(c);
    c->v.s[16] = c->v.s[0];
    goto L_2792b8;
L_27922c:;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[0] = c->r[0] + 0x1d0u;
L_279234:;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[26] = LD32(c->r[0] + 4u);
    c->v.f[18] = c->v.f[0] - c->v.f[24];
    c->v.f[20] = c->v.f[2] - c->v.f[20];
    c->v.s[0] = c->v.s[18];
    c->v.s[1] = c->v.s[20];
    c->r[14] = 0x279254u; f_15efd70(c);
    c->v.s[16] = c->v.s[0];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[18] = c->v.f[26] - c->v.f[22];
    c->v.f[1] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[1], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_27927c; }
    c->r[14] = 0x279278u; f_15efddc(c);
    c->v.s[1] = c->v.s[0];
L_27927c:;
    c->v.s[0] = c->v.s[18] ^ 0x80000000u;
    c->r[14] = 0x279284u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->r[3] = c->r[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x2792b0u; f_2c0e78(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; ST32(ea, c->r[0]); }
L_2792b8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x334u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279314; }
    c->v.s[0] = 0x4622f983u;
    c->v.s[2] = 0x3f000000u;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    if (COND_NE) { goto L_2792f0; }
    c->r[1] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    goto L_2792f4;
L_2792f0:;
    { uint32_t ea = c->r[0] + 0x330u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2792f4:;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[7];
    c->r[0] = c->r[5];
    c->r[3] = c->r[8];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[14] = 0x27930cu; f_2c0e78(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; ST32(ea, c->r[0]); }
L_279314:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_279330(Cpu *restrict c) {
    FN_ENTER(0x279330u);
L_279330:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->v.s[16] = c->v.s[0];
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    c->r[5] = c->r[2];
    c->r[0] = 0x1428u;
    c->r[7] = c->r[6];
    { uint32_t r = c->r[4] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279384; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    { uint32_t r = c->r[4] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    if (COND_NE) { goto L_2793e8; }
    c->v.s[2] = 0x0u;
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    goto L_2793fc;
L_279384:;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[0] + 68u);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.s[10] = LD32(c->r[0] + 72u);
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_2793d0; }
    c->r[14] = 0x2793ccu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_2793d0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    ST32(c->r[0] + 496u, c->v.s[2]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x342u; ST8(ea, c->r[1]); }
    goto L_279428;
L_2793e8:;
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
L_2793fc:;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] * c->v.f[4];
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_279420; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x279420u; f_15efddc(c);
L_279420:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0] + 496u, c->v.s[0]);
L_279428:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 496u);
    c->v.f[0] = c->v.f[0] + c->v.f[16];
    ST32(c->r[0] + 496u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 496u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_279464; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[4] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_279464; }
    c->r[0] = c->r[6];
    c->r[14] = 0x279464u; f_2c0644(c);
L_279464:;
    { uint32_t r = c->r[4] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2794ac; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[1] = c->v.f[2] - c->v.f[6];
    c->r[14] = 0x27948cu; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x330u; ST32(ea, c->r[0]); }
L_2794ac:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x334u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[4]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x320u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x324u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x328u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x32cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2794e0(Cpu *restrict c) {
    FN_ENTER(0x2794e0u);
L_2794e0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[8] = c->r[1];
    c->r[1] = 0x5e98u;
    c->r[7] = 0x0u;
    c->r[9] = c->r[3];
    c->r[5] = c->r[2];
    c->v.s[16] = c->v.s[0];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[7]); }
    c->r[1] = 0x5e9cu;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = 0x5ea0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x279534u; f_2c7314(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2795a0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    ST32(c->r[0] + 500u, c->v.s[16]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[0] = c->r[0] - 0x1u; }
    { uint32_t ea = c->r[1] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x279570u; f_2becf0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x0u;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = COND_EQ ? c->v.s[16] : c->v.s[2];
    c->r[2] = c->r[5] + (c->r[0] << 4);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_279330(c);
L_2795a0:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2795ac(Cpu *restrict c) {
    FN_ENTER(0x2795acu);
L_2795ac:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[9] = c->r[1];
    c->r[8] = c->r[0];
    c->r[14] = 0x2795c8u; f_2c7314(c);
    c->r[0] = 0x1428u;
    c->r[4] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x336u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x338u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x339u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x33cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x340u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = (c->r[2] >> 7) & 0x1u;
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[22] = LD32(c->r[0] + 72u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] + (c->r[1] << 4);
    c->v.s[2] = LD32(c->r[1] + 464u);
    c->v.s[24] = LD32(c->r[1] + 472u);
    c->v.f[16] = c->v.f[2] - c->v.f[0];
    if (COND_NE) { goto L_27963c; }
    c->v.f[1] = c->v.f[24] - c->v.f[22];
    goto L_279688;
L_27963c:;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[26] = LD32(c->r[0] + 68u);
    c->v.s[28] = LD32(c->r[1] + 468u);
    c->r[2] = 0x0u - c->r[2];
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[2] = c->r[2];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[18] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x279668u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->v.f[22] = c->v.f[24] - c->v.f[22];
    c->r[14] = 0x279678u; f_15efdf4(c);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[20]);
    c->v.f[1] = c->v.f[28] - c->v.f[26];
    c->v.s[16] = c->v.s[0] ^ 0x80000000u;
L_279688:;
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x279690u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x200u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2796d0; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_2796dc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8000u;
    goto L_2796d8;
L_2796d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
L_2796d8:;
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[1]); }
L_2796dc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x336u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279764; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279708u; f_2c21c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_279790; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c30u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27972cu; rt_dispatch(c);
    c->r[1] = 0x17c0460u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x27973cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_279754; }
    goto L_279774;
L_279748:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279774; }
L_279754:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_279748; }
    goto L_279790;
L_279764:;
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] - c->r[0];
    goto L_27979c;
L_279774:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_279790; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
L_279790:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[5];
L_27979c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    if (COND_EQ) { goto L_2797f4; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { goto L_279828; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = (c->r[0] << 16);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_LE) { goto L_279820; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GT) { { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_GT) { c->r[2] = 0x2u; }
    goto L_279820;
L_2797f4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = (c->r[0] << 16);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_LE) { c->r[7] = 0x0u - c->r[7]; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LE) { goto L_279820; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x1u;
L_279820:;
    { uint32_t ea = c->r[1] + 0x339u; ST8(ea, c->r[2]); }
    goto L_27982c;
L_279828:;
    c->r[6] = c->r[9];
L_27982c:;
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x279840u; f_277370(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279880; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x279864u; f_277478(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x33au;
    { uint32_t ea = c->r[1] + c->r[2]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0x27987cu; f_2777e0(c);
    goto L_279894;
L_279880:;
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x279894u; f_277568(c);
L_279894:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x336u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279924; }
    (void)f_subs(c, c->r[5], c->r[1]);
    c->r[3] = c->r[5];
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { goto L_27999c; }
    c->r[0] = c->r[8];
    c->r[14] = 0x2798c8u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2799e8; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x2798ecu; rt_dispatch(c);
    c->r[1] = 0x17c02a0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x2798fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_279914; }
    goto L_279a18;
L_279908:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279a18; }
L_279914:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_279908; }
    goto L_279a6c;
L_279924:;
    (void)f_subs(c, c->r[5], c->r[1]);
    c->r[3] = c->r[5];
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { goto L_2799c0; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279940u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2799f0; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x279964u; rt_dispatch(c);
    c->r[1] = 0x17c0228u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x279974u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27998c; }
    goto L_279a3c;
L_279980:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279a3c; }
L_27998c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_279980; }
    goto L_279a6c;
L_27999c:;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2799fc; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279a64; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[3] + c->r[0];
    goto L_279a68;
L_2799c0:;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279a08; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279aa0; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    goto L_279a6c;
L_2799e8:;
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_279a68;
L_2799f0:;
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    goto L_279a6c;
L_2799fc:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    goto L_279a68;
L_279a08:;
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    goto L_279a6c;
L_279a18:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_279a6c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_279a68;
L_279a3c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_279a6c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    goto L_279a6c;
L_279a64:;
    c->r[0] = c->r[3] - c->r[0];
L_279a68:;
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[0]); }
L_279a6c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x338u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_279a98; }
    { uint32_t ea = c->r[0] + 0x336u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279a98; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_2c0644(c);
L_279a98:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_279aa0:;
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    goto L_279a6c;
}
void f_279abc(Cpu *restrict c) {
    FN_ENTER(0x279abcu);
L_279abc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[9] = c->r[2];
    c->r[10] = c->r[1];
    c->r[0] = 0x1428u;
    c->r[4] = c->r[8];
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_279b10; }
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_NE) { goto L_279b28; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x339u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_279b3c; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_279b34; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_279b40;
L_279b10:;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x339u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_279b34; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_279b40;
L_279b28:;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[11] = c->r[10];
    goto L_279b40;
L_279b34:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_279b40;
L_279b3c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
L_279b40:;
    c->v.s[16] = LD32(c->r[0] + 828u);
    c->r[0] = c->r[8];
    c->r[14] = 0x279b4cu; f_2b09bc(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[8] + 28u);
    c->r[1] = 0x336u;
    c->v.s[4] = LD32(c->r[0] + 828u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[0] + 828u, c->v.s[4]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279c10; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279b80u; f_2c21c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_279bf0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c30u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x279ba4u; rt_dispatch(c);
    c->r[1] = 0x17bffe8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x279bb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279bd4; }
L_279bbc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_279bf0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_279bbc; }
L_279bd4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_279bf0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[7] = (uint32_t)(uint16_t)(c->r[0]);
L_279bf0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] - c->r[7];
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279c34; }
    goto L_279c24;
L_279c10:;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] - c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279c34; }
L_279c24:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[11];
    c->r[14] = 0x279c30u; f_2777e0(c);
    goto L_279c48;
L_279c34:;
    c->v.s[0] = c->v.s[16];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[0] = c->r[8];
    c->r[1] = c->r[11];
    c->r[14] = 0x279c48u; f_277568(c);
L_279c48:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x336u;
    c->r[6] = ~0x0u;
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279cf4; }
    (void)f_subs(c, c->r[2], c->r[6]);
    c->r[3] = c->r[2];
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { goto L_279d84; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279c80u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_279dcc; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x279ca4u; rt_dispatch(c);
    c->r[1] = 0x17bfee8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x279cb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279cd4; }
L_279cbc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_279dfc; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_279cbc; }
L_279cd4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_279dfc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_279df8;
L_279cf4:;
    (void)f_subs(c, c->r[2], c->r[6]);
    c->r[3] = c->r[2];
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { goto L_279da8; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279d10u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_279dd4; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x279d34u; rt_dispatch(c);
    c->r[1] = 0x17bfe58u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x279d44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279d64; }
L_279d4c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_279e88; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_279d4c; }
L_279d64:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_279e88; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_279e84;
L_279d84:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279ddc; }
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279df4; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[3] + c->r[0];
    goto L_279df8;
L_279da8:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279de8; }
    { uint32_t ea = c->r[7] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_279e80; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[3] + c->r[0];
    goto L_279e84;
L_279dcc:;
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_279df8;
L_279dd4:;
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_279e84;
L_279ddc:;
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    goto L_279df8;
L_279de8:;
    { uint32_t ea = c->r[7] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    goto L_279e84;
L_279df4:;
    c->r[0] = c->r[3] - c->r[0];
L_279df8:;
    { uint32_t ea = c->r[7] + 0x54u; ST32(ea, c->r[0]); }
L_279dfc:;
    c->r[0] = c->r[8];
    c->r[14] = 0x279e04u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_279e78; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x279e28u; rt_dispatch(c);
    c->r[1] = 0x17bfd64u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x279e38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_279e58; }
L_279e40:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_279e88; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_279e40; }
L_279e58:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_279e88; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[7] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_279e8c;
L_279e78:;
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_279e8c;
L_279e80:;
    c->r[0] = c->r[3] - c->r[0];
L_279e84:;
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
L_279e88:;
    c->r[7] = 0x0u;
L_279e8c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x338u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_279ec8; }
    c->v.s[0] = LD32(c->r[11] + 8u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_279ec8; }
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x279ec0u; f_2b0a24(c);
    c->r[5] = c->r[0];
    goto L_279ed4;
L_279ec8:;
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[5] = (c->r[0] >> 4) & 0x1u;
L_279ed4:;
    c->r[0] = c->r[8];
    c->r[14] = 0x279edcu; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_27a2b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; } }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[5] = c->r[2] - c->r[7];
    if (COND_NE) { goto L_279f28; }
    c->r[1] = c->r[10];
    c->r[10] = c->r[9];
    c->r[9] = c->r[1];
    c->r[1] = 0x33au;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_279fc0;
L_279f28:;
    { uint32_t ea = c->r[0] + 0x338u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_279f60; }
    c->v.s[16] = LD32(c->r[11] + 8u);
    c->r[6] = c->r[10];
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_279f54; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279f50u; f_2b09f0(c);
    c->v.s[16] = c->v.s[0];
L_279f54:;
    c->r[10] = c->r[9];
    c->r[0] = c->r[11] + 0xeu;
    goto L_279f98;
L_279f60:;
    c->v.s[2] = LD32(c->r[11]);
    c->v.s[0] = LD32(c->r[11] + 4u);
    c->r[6] = c->r[10];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[0], 0.0f); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_NE) { goto L_279f8c; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279f88u; f_2b09f0(c);
    c->v.s[2] = LD32(c->r[11]);
L_279f8c:;
    c->v.f[16] = c->v.f[0] - c->v.f[2];
    c->r[10] = c->r[9];
    c->r[0] = c->r[11] + 0xcu;
L_279f98:;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[9] = c->r[6];
    c->r[14] = 0x279fa8u; f_2b09bc(c);
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.s[2] = c->r[7];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[0] = vcvt_u32_f64(ceil((double)c->v.f[0]));
    c->r[0] = c->v.s[0];
L_279fc0:;
    c->r[1] = (c->r[5] << 16);
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[7] = 0x1u;
    c->r[6] = 0x0u - c->r[5];
    (void)f_adds(c, c->r[1], 0x10000u);
    c->r[11] = c->r[6];
    if (COND_GT) { c->r[11] = c->r[5]; }
    (void)f_subs(c, c->r[11], c->r[0]);
    if (COND_LE) { goto L_27a2b4; }
    c->r[0] = c->r[8];
    c->r[14] = 0x279fecu; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27a2b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a2b4; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a2b0; }
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_EQ) { goto L_27a04c; }
    (void)f_subs(c, c->r[10], 0x1u);
    c->r[10] = ~0x0u;
    if (COND_NE) { goto L_27a090; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[11], c->r[2]);
    if (COND_LE) { goto L_27a08c; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    goto L_27a08c;
L_27a04c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[11], c->r[2]);
    if (COND_LE) { goto L_27a08c; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[11], c->r[2]);
    if (COND_LE) { goto L_27a08c; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
L_27a08c:;
    { uint32_t ea = c->r[0] + 0x339u; ST8(ea, c->r[1]); }
L_27a090:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[2] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x27a0a4u; f_277370(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a0e4; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27a0c8u; f_277478(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x33au;
    { uint32_t ea = c->r[1] + c->r[2]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0x27a0e0u; f_2777e0(c);
    goto L_27a0f8;
L_27a0e4:;
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27a0f8u; f_277568(c);
L_27a0f8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x336u;
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a198; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_GT) { c->r[6] = c->r[5]; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_27a228; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a124u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27a274; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x27a148u; rt_dispatch(c);
    c->r[1] = 0x17bfa44u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x27a158u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27a178; }
L_27a160:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27a2b0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27a160; }
L_27a178:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27a2b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_27a2ac;
L_27a198:;
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_GT) { c->r[6] = c->r[5]; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_27a24c; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a1b0u; f_2c21c8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27a27c; }
    c->r[0] = 0x5c30u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x27a1d4u; rt_dispatch(c);
    c->r[1] = 0x17bf9b8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x27a1e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27a204; }
L_27a1ec:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27a2b0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27a1ec; }
L_27a204:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27a2b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    goto L_27a2b0;
L_27a228:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a288; }
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a2a8; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[2] + c->r[0];
    goto L_27a2ac;
L_27a24c:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a294; }
    { uint32_t ea = c->r[7] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a2ec; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    goto L_27a2b0;
L_27a274:;
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27a2ac;
L_27a27c:;
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    goto L_27a2b0;
L_27a288:;
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    goto L_27a2ac;
L_27a294:;
    { uint32_t ea = c->r[7] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    goto L_27a2b0;
L_27a2a8:;
    c->r[0] = c->r[2] - c->r[0];
L_27a2ac:;
    { uint32_t ea = c->r[7] + 0x54u; ST32(ea, c->r[0]); }
L_27a2b0:;
    c->r[7] = 0x0u;
L_27a2b4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x338u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27a2d8; }
    { uint32_t ea = c->r[0] + 0x336u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27a2d8; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a2d8u; f_2c0644(c);
L_27a2d8:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27a2ec:;
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    goto L_27a2b0;
}
void f_27a314(Cpu *restrict c) {
    FN_ENTER(0x27a314u);
L_27a314:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0x27a330u; f_2795ac(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27a338(Cpu *restrict c) {
    FN_ENTER(0x27a338u);
L_27a338:;
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_279abc(c);
}
void f_27a340(Cpu *restrict c) {
    FN_ENTER(0x27a340u);
L_27a340:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0x27a35cu; f_2795ac(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27a364(Cpu *restrict c) {
    FN_ENTER(0x27a364u);
L_27a364:;
    c->r[2] = 0x1u;
    __attribute__((musttail)) return f_279abc(c);
}
void f_27a36c(Cpu *restrict c) {
    FN_ENTER(0x27a36cu);
L_27a36c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0x27a388u; f_2795ac(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27a390(Cpu *restrict c) {
    FN_ENTER(0x27a390u);
L_27a390:;
    c->r[2] = 0x2u;
    __attribute__((musttail)) return f_279abc(c);
}
void f_27a398(Cpu *restrict c) {
    FN_ENTER(0x27a398u);
L_27a398:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.s[1] = LD32(c->r[1] + 48u);
    c->v.s[0] = LD32(c->r[1] + 44u);
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[4] = c->r[0];
    c->r[14] = 0x27a3b4u; f_2afda4(c);
    c->r[0] = 0x1428u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27a3c8(Cpu *restrict c) {
    FN_ENTER(0x27a3c8u);
L_27a3c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.s[1] = LD32(c->r[1] + 36u);
    c->v.s[0] = LD32(c->r[1] + 32u);
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[4] = c->r[0];
    c->r[14] = 0x27a3e4u; f_2afda4(c);
    c->r[0] = 0x1428u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27a3f8(Cpu *restrict c) {
    FN_ENTER(0x27a3f8u);
L_27a3f8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[4] = c->r[1];
    c->v.s[16] = c->v.s[0];
    c->r[8] = c->r[0];
    c->r[6] = 0x1u;
    c->v.s[0] = LD32(c->r[4] + 16u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_27a888; }
    c->r[0] = 0x1428u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_27a470; }
    c->r[0] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x52au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x919u; ST8(ea, c->r[0]); }
    c->r[1] = 0x7452u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x7453u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = 0x5b58u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
L_27a470:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_27a668; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27a67c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27a884; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a490u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27a884; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->r[14] = 0x27a4b4u; f_2bca40(c);
    c->v.s[1] = LD32(c->r[4] + 64u);
    c->v.s[0] = LD32(c->r[4] + 60u);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a4ccu; f_2afda4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->v.s[24] = LD32(c->r[4]);
    c->v.s[26] = LD32(c->r[4] + 8u);
    c->r[14] = 0x27a4e8u; f_2be5d4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[20] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27a50cu; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27a518u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[18];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x0u;
    c->r[1] = 0x0u;
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[8] = c->v.f[2] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[22]);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[20]);
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a5a4u; f_2be5d4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 16u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[4] + 4u);
    c->v.s[22] = LD32(c->r[0] + 68u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27a5e0u; f_2be5d4(c);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.f[6] = c->v.f[16] - c->v.f[22];
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[24] = LD32(c->r[4] + 28u);
    c->v.s[18] = 0x42480000u;
    c->r[0] = c->r[8];
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.f[16] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    c->v.s[22] = COND_GT ? c->v.s[4] : c->v.s[6];
    c->r[14] = 0x27a614u; f_2be5d4(c);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[24] * c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[16]);
    c->v.s[2] = LD32(c->r[4] + 16u);
    c->v.s[4] = 0xc0000000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[16] : c->v.s[22];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[18] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[20], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[18] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    ST32(c->r[0] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.f[0] = -(float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    goto L_27a884;
L_27a668:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27a670u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = 0x0u; }
    goto L_27a888;
L_27a67c:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[26] = LD32(c->r[5] + 32u);
    c->v.s[28] = LD32(c->r[5] + 36u);
    c->v.s[30] = LD32(c->r[5] + 40u);
    c->v.s[17] = LD32(c->r[5] + 20u);
    c->v.s[19] = LD32(c->r[5] + 24u);
    c->v.s[21] = LD32(c->r[5] + 16u);
    c->v.s[24] = LD32(c->r[8] + 28u);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27a6b4u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27a6c0u; f_15efdf4(c);
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27a6dcu; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27a6e8u; f_15efdf4(c);
    c->v.f[4] = c->v.f[24] * c->v.f[24];
    c->v.f[6] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[21] * c->v.f[16];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[18]);
    c->v.s[2] = 0x3f000000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[26] * c->v.f[22]);
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[6] = c->v.f[2] * c->v.f[28];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[17]);
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.f[4] = c->v.f[19] * c->v.f[16];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[21] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0] + 32u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.s[6] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[6]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x27a790u; f_2b09e4(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = LD32(c->r[4] + 16u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27a7c4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27a7c4; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[4] + 16u);
L_27a7c4:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27a7ccu; f_2b0a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27a7f4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0xbf800000u;
    c->v.s[0] = LD32(c->r[0] + 36u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = 0x0u; }
    if (COND_GT) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u; }
    if (COND_GT) { { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); } }
L_27a7f4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27a824; }
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
L_27a824:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27a884; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27a83cu; f_2bf178(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27a884; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x27a860u; f_2bc8b0(c);
    c->v.s[1] = LD32(c->r[4] + 80u);
    c->v.s[0] = LD32(c->r[4] + 76u);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27a878u; f_2afda4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
L_27a884:;
    c->r[6] = 0x0u;
L_27a888:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27a8a0(Cpu *restrict c) {
    FN_ENTER(0x27a8a0u);
L_27a8a0:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    return;
}
void f_27a8dc(Cpu *restrict c) {
    FN_ENTER(0x27a8dcu);
L_27a8dc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[5] = c->r[1];
    c->r[1] = 0x140cu;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[1] = c->r[4] - c->r[1];
    c->r[10] = c->r[0] + 0x20u;
    c->r[11] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[10]; c->r[7] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    { uint32_t ea = c->r[11]; c->r[6] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); }
    c->v.s[17] = LD32(c->r[1]);
    if (COND_NE) { goto L_27aa50; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_27aa50; }
    c->r[1] = 0x1u;
    c->r[2] = 0x76u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27aa50; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[28] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[18] = c->v.f[0] * c->v.f[28];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x27a958u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x27a964u; f_15efdf4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[28];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27a980u; f_15efde8(c);
    ST32(c->r[13] + 4u, c->v.s[0]);
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27a98cu; f_15efdf4(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[24] = c->v.f[0] * c->v.f[28];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x27a9a8u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x27a9b4u; f_15efdf4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[24] = c->v.s[0];
    c->v.s[19] = c->r[8];
    c->v.s[21] = c->r[9];
    c->v.s[23] = c->r[6];
    c->v.s[27] = c->r[7];
    c->v.s[31] = c->r[11];
    c->v.f[25] = c->v.f[19] * c->v.f[18];
    c->v.f[29] = c->v.f[21] * c->v.f[24];
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[23] * c->v.f[22]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
    c->v.s[0] = c->v.s[28];
    c->r[14] = 0x27a9f0u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[28];
    c->v.f[18] = c->v.f[23] * c->v.f[18];
    c->v.f[23] = c->v.f[31] * c->v.f[20];
    c->v.s[16] = c->r[10];
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[27] * c->v.f[26]);
    c->v.f[20] = c->v.f[25] * c->v.f[20];
    c->v.f[24] = c->v.f[27] * c->v.f[24];
    c->r[14] = 0x27aa14u; f_15efdf4(c);
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[29] * c->v.f[0];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[19] * c->v.f[22]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[21] * c->v.f[26]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[16] * c->v.f[30]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[31] * c->v.f[4]);
    c->r[6] = c->v.s[18];
    c->r[7] = c->v.s[24];
    c->r[10] = c->v.s[2];
    c->r[9] = c->v.s[0];
    c->r[11] = c->v.s[23];
    c->r[8] = c->v.s[20];
L_27aa50:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27aa6cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27aa78u; f_15efdf4(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27aa94u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27aaa0u; f_15efdf4(c);
    c->v.s[2] = c->r[7];
    c->v.s[4] = c->r[6];
    c->v.s[10] = c->r[10];
    c->v.s[14] = c->r[11];
    c->v.f[8] = c->v.f[17] * c->v.f[17];
    c->v.s[6] = 0x3f000000u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[2] * c->v.f[0];
    c->v.f[1] = c->v.f[4] * c->v.f[16];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[22]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[14] * c->v.f[18]);
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    c->v.s[8] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[12] = c->v.f[6] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[17] * c->v.f[1]);
    c->v.s[1] = c->r[8];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[12];
    ST32(c->r[0] + 64u, c->v.s[8]);
    c->v.s[8] = c->r[9];
    c->v.s[12] = LD32(c->r[0] + 68u);
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] + c->v.f[12];
    ST32(c->r[0] + 68u, c->v.s[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[16];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[4] * c->v.f[18]);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0] + 32u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.s[6] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[2]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[4]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[6]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27ab6c(Cpu *restrict c) {
    FN_ENTER(0x27ab6cu);
L_27ab6c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[4] = c->r[1];
    c->v.s[16] = c->v.s[0];
    c->r[8] = c->r[0];
    c->r[6] = 0x1u;
    c->v.s[0] = LD32(c->r[4] + 16u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_27b1c4; }
    c->r[0] = 0x1428u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_27abe4; }
    c->r[0] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x52au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x919u; ST8(ea, c->r[0]); }
    c->r[1] = 0x7452u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x7453u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = 0x5b58u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x1a3u; uint32_t v = LD8(ea); c->r[0] = v; }
L_27abe4:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_27b1c0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27abf8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27ac0cu: goto L_27ac0c; case 0x27ad80u: goto L_27ad80; case 0x27af50u: goto L_27af50; case 0x27af70u: goto L_27af70; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ac0c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x1a3u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->v.s[24] = LD32(c->r[4]);
    c->v.s[26] = LD32(c->r[4] + 8u);
    c->r[14] = 0x27ac24u; f_2be5d4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[20] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27ac48u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27ac54u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[18];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x0u;
    c->r[1] = 0x0u;
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[8] = c->v.f[2] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[22]);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[20]);
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x27ace0u; f_2be5d4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 16u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 24u, c->v.s[0]);
    if (COND_LE) { goto L_27b18c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[4] + 4u);
    c->v.s[22] = LD32(c->r[0] + 68u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27ad28u; f_2be5d4(c);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.f[6] = c->v.f[16] - c->v.f[22];
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[24] = LD32(c->r[4] + 28u);
    c->v.s[18] = 0x42480000u;
    c->r[0] = c->r[8];
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.f[16] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    c->v.s[22] = COND_GT ? c->v.s[4] : c->v.s[6];
    c->r[14] = 0x27ad5cu; f_2be5d4(c);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[24] * c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[16]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[16] : c->v.s[22];
    c->v.f[0] = c->v.f[18] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[20], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[18] : c->v.s[0];
    goto L_27b190;
L_27ad80:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[26] = LD32(c->r[5] + 32u);
    c->v.s[28] = LD32(c->r[5] + 36u);
    c->v.s[30] = LD32(c->r[5] + 40u);
    c->v.s[17] = LD32(c->r[5] + 20u);
    c->v.s[19] = LD32(c->r[5] + 24u);
    c->v.s[21] = LD32(c->r[5] + 16u);
    c->v.s[24] = LD32(c->r[8] + 28u);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27adb8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27adc4u; f_15efdf4(c);
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27ade0u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27adecu; f_15efdf4(c);
    c->v.f[4] = c->v.f[24] * c->v.f[24];
    c->v.f[6] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[21] * c->v.f[16];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[18]);
    c->v.s[2] = 0x3f000000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[26] * c->v.f[22]);
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[6] = c->v.f[2] * c->v.f[28];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[17]);
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.f[4] = c->v.f[19] * c->v.f[16];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[21] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0] + 32u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.s[6] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[6]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x27ae94u; f_2b09e4(c);
    c->v.s[2] = LD32(c->r[4] + 16u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27aebc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[1] = 0x0u; }
    if (COND_LS) { { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); } }
L_27aebc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27aeec; }
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
L_27aeec:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27b1c0; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27af04u; f_2bf178(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b1c0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x27af28u; f_2bc8b0(c);
    c->v.s[1] = LD32(c->r[4] + 80u);
    c->v.s[0] = LD32(c->r[4] + 76u);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27af40u; f_2afda4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    goto L_27b1c0;
L_27af50:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27af58u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = 0x0u; }
    goto L_27b1c4;
L_27af70:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[26] = LD32(c->r[5] + 32u);
    c->v.s[28] = LD32(c->r[5] + 36u);
    c->v.s[30] = LD32(c->r[5] + 40u);
    c->v.s[17] = LD32(c->r[5] + 20u);
    c->v.s[19] = LD32(c->r[5] + 24u);
    c->v.s[21] = LD32(c->r[5] + 16u);
    c->v.s[24] = LD32(c->r[8] + 28u);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27afa8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27afb4u; f_15efdf4(c);
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27afd0u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27afdcu; f_15efdf4(c);
    c->v.f[4] = c->v.f[24] * c->v.f[24];
    c->v.f[6] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[21] * c->v.f[16];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[18]);
    c->v.s[2] = 0x3f000000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[26] * c->v.f[22]);
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[6] = c->v.f[2] * c->v.f[28];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[17]);
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.f[4] = c->v.f[19] * c->v.f[16];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[21] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0] + 32u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.s[6] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[6]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x27b084u; f_2b09e4(c);
    c->v.s[2] = LD32(c->r[4] + 16u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27b0ac; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[1] = 0x0u; }
    if (COND_LS) { { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); } }
L_27b0ac:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27b0dc; }
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
L_27b0dc:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27b138; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27b0f4u; f_2bf178(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b138; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x27b114u; f_2bc8b0(c);
    c->v.s[1] = LD32(c->r[4] + 80u);
    c->v.s[0] = LD32(c->r[4] + 76u);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27b12cu; f_2afda4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
L_27b138:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27b140u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b1c0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->r[14] = 0x27b164u; f_2bca40(c);
    c->v.s[1] = LD32(c->r[4] + 64u);
    c->v.s[0] = LD32(c->r[4] + 60u);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27b17cu; f_2afda4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    goto L_27b1c0;
L_27b18c:;
    c->v.s[0] = LD32(c->r[4] + 20u);
L_27b190:;
    c->v.s[4] = LD32(c->r[4] + 16u);
    c->v.s[2] = 0xc0000000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    ST32(c->r[0] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.f[0] = -(float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[0] + 20u, c->v.s[0]);
L_27b1c0:;
    c->r[6] = 0x0u;
L_27b1c4:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27b1d4(Cpu *restrict c) {
    FN_ENTER(0x27b1d4u);
L_27b1d4:;
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_27b1dc(c);
}
void f_27b1dc(Cpu *restrict c) {
    FN_ENTER(0x27b1dcu);
L_27b1dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[7] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[8] = c->r[2];
    c->r[2] = 0x1u;
    c->r[6] = c->r[1];
    c->v.s[16] = c->v.s[0];
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x919u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_27b244; }
    c->r[1] = 0x7452u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x7453u;
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x5b58u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
L_27b244:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_27b3cc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_27b368; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27b5b8; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27b268u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b5b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x27b28cu; f_2bca40(c);
    c->v.s[1] = LD32(c->r[6] + 52u);
    c->v.s[0] = LD32(c->r[6] + 48u);
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27b2a4u; f_2afda4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[0] + 68u);
    c->r[0] = c->r[7];
    c->r[14] = 0x27b2dcu; f_2b09f0(c);
    c->v.f[2] = c->v.f[16] - c->v.f[18];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x1u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    if (COND_NE) { goto L_27b5b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[20] = LD32(c->r[6] + 12u);
    c->v.s[22] = LD32(c->r[6] + 16u);
    c->v.s[24] = LD32(c->r[6] + 20u);
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27b320u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27b32cu; f_15efdf4(c);
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[18]);
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[20] * c->v.f[18]);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] + 64u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.f[2] = c->v.f[22] + c->v.f[2];
    ST32(c->r[0] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0] + 72u, c->v.s[0]);
    goto L_27b5b8;
L_27b368:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[0] + 0x5bdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[7] + 28u);
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    ST32(c->r[0] + 64u, c->v.s[8]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[0] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 68u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    if (COND_EQ) { goto L_27b4ec; }
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27b4f4; }
    ST32(c->r[0] + 68u, c->v.s[16]);
    goto L_27b4f4;
L_27b3cc:;
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_27b400; }
    c->v.s[2] = 0x0u;
    c->v.s[0] = c->v.s[1];
    c->r[0] = c->r[7];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->v.s[1] = c->v.s[2];
    c->r[14] = 0x27b3f4u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b408; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_27b400:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x918u; ST8(ea, c->r[1]); }
L_27b408:;
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_27b460; }
    c->v.s[0] = LD32(c->r[6] + 76u);
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[7];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x27b428u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b460; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5b4u;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[0] + 68u);
    c->v.s[2] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_27b460; }
    c->v.s[2] = LD32(c->r[7] + 28u);
    c->v.s[4] = 0xc0400000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[0] + 68u, c->v.s[0]);
L_27b460:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27b4bc; }
    c->v.s[0] = LD32(c->r[6] + 76u);
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[7];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x27b488u; f_2b0a24(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_27b4bc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0xc1200000u;
    c->v.f[2] = c->v.f[16] + c->v.f[2];
    c->v.s[0] = LD32(c->r[0] + 68u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_27b4bc; }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x27b4bcu; f_2bc8b0(c);
L_27b4bc:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27b4c4u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b5b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x27b4e4u; f_2bc8b0(c);
    c->r[4] = 0x1u;
    goto L_27b5b8;
L_27b4ec:;
    vfp_mrs_flags(c);
    if (COND_GT) { ST32(c->r[0] + 68u, c->v.s[16]); }
L_27b4f4:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27b4fcu; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27b5b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1a3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x918u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->v.s[1] = LD32(c->r[6] + 68u);
    c->v.s[0] = LD32(c->r[6] + 64u);
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x27b538u; f_2afda4(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_27b5b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[22] = LD32(c->r[6] + 12u);
    c->v.s[24] = LD32(c->r[6] + 16u);
    c->v.s[26] = LD32(c->r[6] + 20u);
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[18] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x27b56cu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x27b578u; f_15efdf4(c);
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[20]);
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[22] * c->v.f[20]);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] + 64u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.f[2] = c->v.f[24] + c->v.f[2];
    ST32(c->r[0] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0] + 72u, c->v.s[0]);
L_27b5b0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0] + 68u, c->v.s[16]);
L_27b5b8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27b5cc(Cpu *restrict c) {
    FN_ENTER(0x27b5ccu);
L_27b5cc:;
    c->r[2] = 0x1u;
    __attribute__((musttail)) return f_27b1dc(c);
}
void f_27b5d4(Cpu *restrict c) {
    FN_ENTER(0x27b5d4u);
L_27b5d4:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    return;
}
void f_27b5f8(Cpu *restrict c) {
    FN_ENTER(0x27b5f8u);
L_27b5f8:;
    c->r[1] = 0x1428u;
    c->v.s[0] = LD32(c->r[0] + 28u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = LD32(c->r[1] + 16u);
    c->v.s[8] = LD32(c->r[1] + 64u);
    c->v.s[2] = LD32(c->r[1] + 20u);
    c->v.s[4] = LD32(c->r[1] + 24u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    ST32(c->r[1] + 64u, c->v.s[8]);
    c->v.s[6] = LD32(c->r[1] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[1] + 68u, c->v.s[6]);
    c->v.s[2] = LD32(c->r[1] + 72u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[1] + 72u, c->v.s[2]);
    return;
}
void f_27b638(Cpu *restrict c) {
    FN_ENTER(0x27b638u);
L_27b638:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->v.s[16] = c->v.s[1];
    c->v.s[18] = c->v.s[0];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = LD32(c->r[0] + 68u);
    c->r[0] = c->r[7];
    c->r[14] = 0x27b66cu; f_2be5d4(c);
    c->v.f[2] = c->v.f[18] - c->v.f[20];
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_27b694(c);
}
void f_27b694(Cpu *restrict c) {
    FN_ENTER(0x27b694u);
L_27b694:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[7] = 0x5e5cu;
    c->r[4] = c->r[1];
    c->v.s[16] = c->v.s[0];
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b6e4; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
L_27b6e4:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b708; }
    c->r[1] = 0x7452u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x7453u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x5e5cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_27b708:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b728; }
    c->r[1] = 0x5b58u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x5e5cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_27b728:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b7b0; }
    c->r[7] = 0x5e58u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[3] = 0x5e4cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5e50u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[3] = c->r[0] + c->r[3];
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[2] = LD32(c->r[1]);
    c->r[2] = c->r[2] - c->r[7];
    c->r[1] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = 0x5e54u;
    (void)f_subs(c, c->r[1], 0x8000u);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    if (COND_HI) { c->r[1] = 0x10000u - c->r[1]; }
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[0] = vcvt_u32_f64(ceil((double)c->v.f[0]));
    c->r[1] = c->v.s[0];
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x27b7acu; f_27be10(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_27b7b0:;
    c->r[1] = 0x5e44u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x27b7c8u; f_2bc8b0(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[1] = LD32(c->r[4] + 52u);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[14] = 0x27b7fcu; f_2afda4(c);
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_27b818; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[3] = c->r[10];
    c->r[14] = 0x27b818u; f_27dc2c(c);
L_27b818:;
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { goto L_27b834; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27b834u; f_27dc2c(c);
L_27b834:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->v.s[0] = 0xc0000000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->v.s[2] = LD32(c->r[4] + 16u);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    ST32(c->r[0] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.f[0] = -(float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27b8a4(Cpu *restrict c) {
    FN_ENTER(0x27b8a4u);
L_27b8a4:;
    __attribute__((musttail)) return f_27b8a8(c);
}
void f_27b8a8(Cpu *restrict c) {
    FN_ENTER(0x27b8a8u);
L_27b8a8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[5] = c->r[1];
    c->r[1] = 0x5e44u;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_27ba80; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_27ba9c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27bd24; }
    c->r[2] = 0x5e5cu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b90c; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
L_27b90c:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b930; }
    c->r[1] = 0x7452u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x7453u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x5e5cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_27b930:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27b950; }
    c->r[1] = 0x5b58u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x5e5cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_27b950:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0x27b95cu; f_27be10(c); }
    c->r[0] = c->r[8];
    c->r[14] = 0x27b964u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27bd24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e44u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x27b988u; f_2bca40(c);
    c->v.s[22] = LD32(c->r[5] + 8u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27b994u; f_2be5d4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[18] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x27b9b8u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x27b9c4u; f_15efdf4(c);
    c->v.s[2] = 0x0u;
    c->v.f[6] = c->v.f[22] * c->v.f[16];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[8] = c->v.f[0] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[5] + 88u);
    c->v.s[1] = LD32(c->r[5] + 92u);
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[14] = 0x27ba38u; f_2afda4(c);
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_27ba54; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[3] = c->r[10];
    c->r[14] = 0x27ba54u; f_27dc2c(c);
L_27ba54:;
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { goto L_27ba70; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x27ba70u; f_27dc2c(c);
L_27ba70:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x919u; ST8(ea, c->r[1]); }
    goto L_27bd24;
L_27ba80:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27ba88u; f_2b0a84(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    goto L_27bd28;
L_27ba9c:;
    c->r[1] = 0x1u;
    c->r[2] = 0x5e5cu;
    { uint32_t ea = c->r[0] + 0x919u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; } }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = 0x1u; }
    if (COND_GT) { { uint32_t ea = c->r[0] + 0x5bdu; ST8(ea, c->r[1]); } }
    c->v.s[0] = LD32(c->r[5] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_27bb00; }
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x27baf8u; f_2b0a24(c);
    c->r[6] = c->r[0];
    goto L_27bb08;
L_27bb00:;
    c->r[9] = 0x1u;
    c->r[6] = 0x0u;
L_27bb08:;
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x27bb20u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27bb34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_27bb34:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[24] = LD32(c->r[8] + 28u);
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[26] = LD32(c->r[7] + 32u);
    c->v.s[28] = LD32(c->r[7] + 36u);
    c->v.s[30] = LD32(c->r[7] + 40u);
    c->v.s[17] = LD32(c->r[7] + 20u);
    c->v.s[19] = LD32(c->r[7] + 24u);
    c->v.s[21] = LD32(c->r[7] + 16u);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27bb70u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27bb7cu; f_15efdf4(c);
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27bb98u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27bba4u; f_15efdf4(c);
    c->v.f[4] = c->v.f[24] * c->v.f[24];
    c->v.f[6] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[21] * c->v.f[16];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[18]);
    c->v.s[2] = 0x3f000000u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[26] * c->v.f[22]);
    c->r[1] = 0x5e5cu;
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[6] = c->v.f[2] * c->v.f[28];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[17]);
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.f[4] = c->v.f[19] * c->v.f[16];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[21] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0] + 32u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.s[6] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[4]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[6]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27bc6c; }
    c->v.s[0] = LD32(c->r[5] + 28u);
    c->v.s[2] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { ST32(c->r[0] + 20u, c->v.s[0]); }
L_27bc6c:;
    c->r[0] = c->r[6] | c->r[9];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27bd24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27bd24; }
    c->v.s[0] = LD32(c->r[5] + 24u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27bc98u; f_2bf178(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27bd24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e44u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x27bcbcu; f_2bc8b0(c);
    c->v.s[0] = LD32(c->r[5] + 128u);
    c->v.s[1] = LD32(c->r[5] + 132u);
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27bcecu; f_2afda4(c);
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_27bd08; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[3] = c->r[10];
    c->r[14] = 0x27bd08u; f_27dc2c(c);
L_27bd08:;
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { goto L_27bd24; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[3] = c->r[4];
    c->r[14] = 0x27bd24u; f_27dc2c(c);
L_27bd24:;
    c->r[0] = 0x0u;
L_27bd28:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27bd40(Cpu *restrict c) {
    FN_ENTER(0x27bd40u);
L_27bd40:;
    __attribute__((musttail)) return f_27b694(c);
}
void f_27bd44(Cpu *restrict c) {
    FN_ENTER(0x27bd44u);
L_27bd44:;
    __attribute__((musttail)) return f_27b8a8(c);
}
void f_27bd48(Cpu *restrict c) {
    FN_ENTER(0x27bd48u);
L_27bd48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[2] = 0x1428u;
    c->r[3] = c->r[0];
    c->r[12] = 0x5e58u;
    c->r[14] = 0x5e4cu;
    c->r[4] = 0x5e50u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[12]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[14];
    ST32(c->r[1], c->v.s[0]);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[4];
    ST32(c->r[1], c->v.s[1]);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[12]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[1] + c->r[4];
    c->r[4] = c->r[1] + c->r[14];
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[4]);
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = 0x5e54u;
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_HI) { c->r[2] = 0x10000u - c->r[2]; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = c->r[2];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[0] = vcvt_u32_f64(ceil((double)c->v.f[0]));
    c->r[2] = c->v.s[0];
    { uint32_t ea = c->r[1] + c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_27be10(c);
}
void f_27bdd4(Cpu *restrict c) {
    FN_ENTER(0x27bdd4u);
L_27bdd4:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    return;
}
void f_27be10(Cpu *restrict c) {
    FN_ENTER(0x27be10u);
L_27be10:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x5e4cu;
    c->r[2] = 0x5e50u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1428u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[2] = c->r[13] + 0x4u;
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x27be58u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27bfb8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e58u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] - c->r[0];
    c->r[6] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x27be80u; f_2b0b4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27bf48; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27be90u; f_27270c(c);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27bf48; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e4cu;
    c->r[2] = 0x4fcu;
    c->v.s[4] = 0x0u;
    c->r[3] = 0x5e54u;
    c->v.s[8] = 0x3bb40000u;
    c->r[2] = c->r[4] + c->r[2];
    c->v.s[0] = LD32(c->r[2]);
    c->r[2] = 0x13b8u;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[1]);
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = 0x13b0u;
    c->r[3] = c->r[4] + c->r[3];
    c->v.s[6] = c->r[1];
    c->r[1] = c->r[4] + c->r[2];
    c->r[2] = 0x13b4u;
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->r[2] = c->r[4] + c->r[2];
    { float t0 = nftz(vmax_f(nftz(c->v.f[2]), nftz(c->v.f[4]))); float t1 = nftz(vmax_f(nftz(c->v.f[3]), nftz(c->v.f[5]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    c->v.s[4] = LD32(c->r[3]);
    c->v.f[6] = (float)c->v.s[6];
    c->v.s[10] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->v.s[8] = 0x43360b61u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.s[6] = 0x3f000000u;
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = c->v.s[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[6]);
    c->r[1] = c->v.s[0];
    c->r[2] = c->v.s[2];
    c->r[1] = c->r[1] + c->r[2];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    goto L_27bf7c;
L_27bf48:;
    c->r[0] = 0x13b8u;
    c->r[2] = 0x5e54u;
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->r[1] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1]);
    c->r[2] = c->r[0] + c->r[2];
    c->v.s[0] = LD32(c->r[2]);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[0] = vcvt_u32_f64(ceil((double)c->v.f[0]));
    c->r[1] = c->v.s[0];
L_27bf7c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[6] >> 15));
    if (COND_NE) { goto L_27bf9c; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_27bfb4; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    goto L_27bfb0;
L_27bf9c:;
    c->r[2] = 0x10000u - c->r[6];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_27bfb4; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
L_27bfb0:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[1]);
L_27bfb4:;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[5]); }
L_27bfb8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27bfcc(Cpu *restrict c) {
    FN_ENTER(0x27bfccu);
L_27bfcc:;
    c->r[3] = c->r[2];
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_27bfd8(c);
}
void f_27bfd8(Cpu *restrict c) {
    FN_ENTER(0x27bfd8u);
L_27bfd8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->v.s[16] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x27c000u; f_27fcbc(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x27c008u; f_2c0410(c);
    c->r[0] = 0x1428u;
    c->r[4] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x5b58u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[1]); }
    c->r[0] = 0x7452u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x7453u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; ST8(ea, c->r[1]); }
    c->r[1] = 0x5e44u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[14] = 0x27c054u; f_2bc8b0(c);
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->v.s[0] = LD32(c->r[6] + 44u);
    c->v.s[1] = LD32(c->r[6] + 48u);
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[14] = 0x27c088u; f_2afda4(c);
    (void)f_subs(c, c->r[9], 0xffu);
    if (COND_EQ) { goto L_27c0a4; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[2] = c->r[8];
    c->r[3] = c->r[7];
    c->r[14] = 0x27c0a4u; f_27dc2c(c);
L_27c0a4:;
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_EQ) { goto L_27c0c0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[5];
    c->r[2] = c->r[11];
    c->r[14] = 0x27c0c0u; f_27dc2c(c);
L_27c0c0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x5e45u;
    c->r[3] = 0x5e58u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x5e48u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    ST32(c->r[0], c->v.s[16]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[7] = 0x5e4cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e50u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + c->r[2];
    c->v.s[2] = LD32(c->r[2]);
    c->r[2] = 0x5e54u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = c->r[0] + c->r[7];
    c->v.s[0] = LD32(c->r[3]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { c->r[1] = 0x10000u - c->r[1]; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[0] = vcvt_u32_f64(ceil((double)c->v.f[0]));
    c->r[1] = c->v.s[0];
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[10];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27be10(c);
}
void f_27c174(Cpu *restrict c) {
    FN_ENTER(0x27c174u);
L_27c174:;
    c->v.s[0] = 0x3f800000u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    __attribute__((musttail)) return f_27c184(c);
}
void f_27c184(Cpu *restrict c) {
    FN_ENTER(0x27c184u);
L_27c184:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[5] = c->r[1];
    c->r[1] = 0x5e44u;
    c->v.s[16] = c->v.s[0];
    c->r[10] = c->r[3];
    c->r[6] = c->r[2];
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_27c884; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27c1d0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27c1e4u: goto L_27c1e4; case 0x27c45cu: goto L_27c45c; case 0x27c4c8u: goto L_27c4c8; case 0x27c564u: goto L_27c564; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27c1e4:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c1ecu; f_27fcbc(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x27c1f4u; f_2c0410(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[7]); }
    c->r[0] = 0x7452u;
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x7453u;
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x5b58u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x27c228u; f_27be10(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x27c230u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27c884; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e44u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x27c250u; f_2bca40(c);
    c->v.s[24] = LD32(c->r[5] + 8u);
    c->r[0] = c->r[8];
    c->r[14] = 0x27c25cu; f_2be5d4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[20] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27c280u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27c28cu; f_15efdf4(c);
    c->v.s[2] = 0x0u;
    c->v.f[6] = c->v.f[24] * c->v.f[18];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 64u);
    c->v.f[8] = c->v.f[0] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[22]);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[5] + 84u);
    c->v.s[1] = LD32(c->r[5] + 88u);
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[14] = 0x27c308u; f_2afda4(c);
    (void)f_subs(c, c->r[9], 0xffu);
    if (COND_EQ) { goto L_27c324; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = c->r[11];
    c->r[14] = 0x27c324u; f_27dc2c(c);
L_27c324:;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_27c33c; }
    { uint32_t ea = c->r[13] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0x27c33cu; f_27dc2c(c);
L_27c33c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x5e45u;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27c378; }
    c->r[1] = 0x5e58u;
    c->v.s[0] = 0x3fa66666u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27c364u; f_2a77b0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e48u;
    c->r[0] = c->r[0] + c->r[1];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_27c378:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->v.s[18] = LD32(c->r[5] + 24u);
    c->r[14] = 0x27c3b4u; f_2b09f0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e48u;
    c->v.f[6] = c->v.f[0] - c->v.f[18];
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[0] = COND_GT ? c->v.s[6] : c->v.s[0];
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_27c5dc; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27c884; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c43c; }
    c->r[1] = 0x914u;
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[0] + c->r[1];
    ST32(c->r[0], c->v.s[16]);
    if (COND_EQ) { goto L_27c43c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x900u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x904u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x908u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x90cu; ST32(ea, c->r[0]); }
L_27c43c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27c884; }
    c->r[1] = 0x5e45u;
    c->r[2] = 0x2u;
    goto L_27c64c;
L_27c45c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c464u; f_27fcbc(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x27c46cu; f_2c0410(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[1]); }
    c->r[1] = 0x5e45u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_27c6b8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27c498u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27c4acu: goto L_27c4ac; case 0x27c580u: goto L_27c580; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27c4ac:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_27c6b8; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x918u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x919u; ST8(ea, c->r[1]); }
    goto L_27c6b8;
L_27c4c8:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c4d0u; f_27fcbc(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x27c4d8u; f_2c0410(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x52au; ST8(ea, c->r[1]); }
    c->r[1] = 0x5e45u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { (void)f_subs(c, c->r[6], 0x1u); }
    if (COND_NE) { goto L_27c510; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x918u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x919u; ST8(ea, c->r[1]); }
L_27c510:;
    c->v.s[0] = LD32(c->r[5] + 28u);
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x27c528u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27c884; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e44u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x27c54cu; f_2bc8b0(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c884; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    goto L_27c884;
L_27c564:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c56cu; f_2b0a84(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    goto L_27c888;
L_27c580:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_27c6b8; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_27c664; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27c5b0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27c5ccu: goto L_27c5cc; case 0x27c664u: goto L_27c664; case 0x27c670u: goto L_27c670; case 0x27c688u: goto L_27c688; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27c5cc:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c5d4u; f_2712a4(c);
    c->r[0] = c->r[0] + 0xcu;
    goto L_27c694;
L_27c5dc:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_27c5f8; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x918u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x919u; ST8(ea, c->r[1]); }
    goto L_27c630;
L_27c5f8:;
    c->r[1] = 0x914u;
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[0] + c->r[1];
    ST32(c->r[0], c->v.s[16]);
    if (COND_EQ) { goto L_27c630; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x900u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x904u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x908u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x90cu; ST32(ea, c->r[0]); }
L_27c630:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_27c884; }
    c->r[1] = 0x5e45u;
    c->r[2] = 0x3u;
L_27c64c:;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    goto L_27c884;
L_27c664:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c66cu; f_2712a4(c);
    goto L_27c694;
L_27c670:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c678u; f_2712a4(c);
    c->r[0] = c->r[0] + 0x18u;
    goto L_27c694;
L_27c688:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c690u; f_2712a4(c);
    c->r[0] = c->r[0] + 0x24u;
L_27c694:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x900u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x904u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x908u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x90cu; ST32(ea, c->r[0]); }
L_27c6b8:;
    c->v.s[16] = 0x0u;
    c->r[0] = 0x3f800000u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[5] + 24u);
    c->v.s[1] = c->v.s[16];
    c->r[14] = 0x27c6dcu; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27c774; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x10u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    c->r[14] = 0x27c6f8u; f_2b09bc(c);
    c->v.s[2] = LD32(c->r[13] + 12u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->v.s[4] = LD32(c->r[0] + 16u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[2] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0] + 16u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[8] + 28u);
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    ST32(c->r[0] + 64u, c->v.s[8]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[0] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
L_27c774:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c77cu; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27c884; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5e48u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x5e44u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[8];
    c->v.s[24] = LD32(c->r[5] + 20u);
    c->r[14] = 0x27c7b0u; f_2be5d4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = 0x38c90fdbu;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[20] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27c7d4u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27c7e0u; f_15efdf4(c);
    c->v.f[4] = c->v.f[24] * c->v.f[18];
    c->v.f[6] = c->v.f[0] * c->v.f[16];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[22]);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[22] * c->v.f[16]);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0] + 64u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.f[2] = c->v.f[2] + c->v.f[16];
    ST32(c->r[0] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0] + 72u, c->v.s[0]);
    c->r[0] = c->r[8];
    c->v.s[0] = LD32(c->r[5] + 124u);
    c->v.s[1] = LD32(c->r[5] + 128u);
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[14] = 0x27c84cu; f_2afda4(c);
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_27c868; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[3] = c->r[10];
    c->r[14] = 0x27c868u; f_27dc2c(c);
L_27c868:;
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { goto L_27c884; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[3] = c->r[4];
    c->r[14] = 0x27c884u; f_27dc2c(c);
L_27c884:;
    c->r[0] = 0x0u;
L_27c888:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27c8a0(Cpu *restrict c) {
    FN_ENTER(0x27c8a0u);
L_27c8a0:;
    c->r[3] = c->r[2];
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_27c184(c);
}
void f_27c8ac(Cpu *restrict c) {
    FN_ENTER(0x27c8acu);
L_27c8ac:;
    c->v.s[0] = 0x0u;
    c->r[3] = c->r[2];
    c->r[2] = 0x1u;
    __attribute__((musttail)) return f_27bfd8(c);
}
void f_27c8c0(Cpu *restrict c) {
    FN_ENTER(0x27c8c0u);
L_27c8c0:;
    c->v.s[0] = 0x3f800000u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    __attribute__((musttail)) return f_27c184(c);
}
void f_27c8d0(Cpu *restrict c) {
    FN_ENTER(0x27c8d0u);
L_27c8d0:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_27c91c(Cpu *restrict c) {
    FN_ENTER(0x27c91cu);
L_27c91c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_27c9e4; }
    c->r[1] = 0x1u;
    c->r[2] = 0x76u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9e4; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27c978u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27c984u; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[24] = c->r[4];
    c->v.s[26] = c->r[5];
    c->v.f[28] = c->v.f[24] * c->v.f[16];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27c9acu; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->v.s[30] = c->r[7];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[18]);
    c->v.f[16] = c->v.f[26] * c->v.f[16];
    c->r[14] = 0x27c9c4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[30] * c->v.f[22]);
    c->r[5] = c->v.s[16];
    c->r[7] = c->v.s[2];
    c->r[4] = c->v.s[0];
L_27c9e4:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27ca00u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27ca0cu; f_15efdf4(c);
    c->v.s[2] = c->r[5];
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[8] + 28u);
    c->r[1] = 0x5b4u;
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[18]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[10] = c->r[4];
    ST32(c->r[0] + 64u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.s[0] = 0x43fa0000u;
    ST32(c->r[0] + 72u, c->v.s[6]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_27caa0; }
    c->v.s[2] = 0x42c80000u;
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27caa0; }
    c->v.s[2] = 0x3ed9999au;
    c->v.s[4] = LD32(c->r[8] + 28u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[0] + 20u, c->v.s[0]);
L_27caa0:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27cab8(Cpu *restrict c) {
    FN_ENTER(0x27cab8u);
L_27cab8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[9] = c->r[1];
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_27cb8c; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_27cb8c; }
    c->r[1] = 0x1u;
    c->r[2] = 0x76u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb8c; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27cb20u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27cb2cu; f_15efdf4(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[24] = c->r[4];
    c->v.s[26] = c->r[5];
    c->v.f[28] = c->v.f[24] * c->v.f[16];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27cb54u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->v.s[30] = c->r[7];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[18]);
    c->v.f[16] = c->v.f[26] * c->v.f[16];
    c->r[14] = 0x27cb6cu; f_15efdf4(c);
    c->v.f[2] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[30] * c->v.f[22]);
    c->r[5] = c->v.s[16];
    c->r[7] = c->v.s[2];
    c->r[4] = c->v.s[0];
L_27cb8c:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27cba8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27cbb4u; f_15efdf4(c);
    c->v.s[2] = c->r[5];
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[8] + 28u);
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[18]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[10] = c->r[4];
    ST32(c->r[0] + 64u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[0] + 72u, c->v.s[6]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27cc08(Cpu *restrict c) {
    FN_ENTER(0x27cc08u);
L_27cc08:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    c->v.s[0] = 0x447a0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0a00000u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x5b4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->v.s[4] = LD32(c->r[1] + 68u);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { return; }
    c->v.s[6] = LD32(c->r[1] + 20u);
    c->v.s[2] = 0xc3480000u;
    c->v.s[4] = 0xbed9999au;
L_27cc88:;
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { c->v.f[6] = c->v.f[6] + c->v.f[4]; }
    if (COND_GE) { ST32(c->r[1] + 20u, c->v.s[6]); }
    if (COND_GE) { { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->v.s[6] = LD32(c->r[1] + 20u); }
    if (COND_GE) { c->v.f[0] = c->v.f[0] + c->v.f[6]; }
    if (COND_GE) { vfp_cmp_f(c, c->v.f[0], 0.0f); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_GT) { goto L_27cc88; }
    return;
}
void f_27ccc0(Cpu *restrict c) {
    FN_ENTER(0x27ccc0u);
L_27ccc0:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0a00000u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[1] + 68u);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { return; }
    c->v.s[6] = LD32(c->r[1] + 20u);
    c->v.s[2] = 0xc3480000u;
    c->v.s[4] = 0xbed9999au;
L_27cd2c:;
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { c->v.f[6] = c->v.f[6] + c->v.f[4]; }
    if (COND_GE) { ST32(c->r[1] + 20u, c->v.s[6]); }
    if (COND_GE) { { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->v.s[6] = LD32(c->r[1] + 20u); }
    if (COND_GE) { c->v.f[0] = c->v.f[0] + c->v.f[6]; }
    if (COND_GE) { vfp_cmp_f(c, c->v.f[0], 0.0f); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_GT) { goto L_27cd2c; }
    return;
}
void f_27cd60(Cpu *restrict c) {
    FN_ENTER(0x27cd60u);
L_27cd60:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_27ce28; }
    c->r[1] = 0x1u;
    c->r[2] = 0x76u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ce28; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27cdbcu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27cdc8u; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[24] = c->r[4];
    c->v.s[26] = c->r[5];
    c->v.f[28] = c->v.f[24] * c->v.f[16];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27cdf0u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->v.s[30] = c->r[7];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[18]);
    c->v.f[16] = c->v.f[26] * c->v.f[16];
    c->r[14] = 0x27ce08u; f_15efdf4(c);
    c->v.f[2] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[30] * c->v.f[22]);
    c->r[5] = c->v.s[16];
    c->r[7] = c->v.s[2];
    c->r[4] = c->v.s[0];
L_27ce28:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27ce44u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x27ce50u; f_15efdf4(c);
    c->v.s[2] = c->r[5];
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[8] + 28u);
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[18]);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[18]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[10] = c->r[4];
    ST32(c->r[0] + 64u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.s[0] = 0xc0a00000u;
    ST32(c->r[0] + 72u, c->v.s[6]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27cedc; }
    c->v.s[4] = 0x3ed9999au;
    c->v.s[6] = LD32(c->r[8] + 28u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[4]);
    ST32(c->r[0] + 20u, c->v.s[2]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = 0x0u; }
    if (COND_GT) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0a00000u; }
    if (COND_GT) { { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); } }
L_27cedc:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27ceec(Cpu *restrict c) {
    FN_ENTER(0x27ceecu);
L_27ceec:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0] + 20u, c->v.s[0]);
    return;
}
void f_27cf30(Cpu *restrict c) {
    FN_ENTER(0x27cf30u);
L_27cf30:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->v.s[16] = c->v.s[2];
    c->v.s[18] = c->v.s[1];
    c->v.s[20] = c->v.s[0];
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_27d004; }
    c->r[1] = 0x1u;
    c->r[2] = 0x76u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d004; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[26] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[22] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x27cf98u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x27cfa4u; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[22] = c->v.s[0];
    c->v.s[30] = c->r[4];
    c->v.s[17] = c->r[5];
    c->v.f[19] = c->v.f[30] * c->v.f[22];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[26];
    c->r[14] = 0x27cfccu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[26];
    c->v.s[21] = c->r[7];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[17] * c->v.f[24]);
    c->v.f[22] = c->v.f[17] * c->v.f[22];
    c->r[14] = 0x27cfe4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[21] * c->v.f[0];
    c->v.f[0] = c->v.f[19] * c->v.f[0];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[30] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[21] * c->v.f[28]);
    c->r[5] = c->v.s[22];
    c->r[7] = c->v.s[2];
    c->r[4] = c->v.s[0];
L_27d004:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[22] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x27d020u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x27d02cu; f_15efdf4(c);
    c->v.s[2] = c->r[5];
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[8] + 28u);
    c->r[1] = 0x5b4u;
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[24]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[10] = c->r[4];
    ST32(c->r[0] + 64u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[0] + 72u, c->v.s[6]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[22] = LD32(c->r[0] + 68u);
    c->r[0] = c->r[8];
    c->v.s[24] = LD32(c->r[1]);
    c->r[14] = 0x27d090u; f_2be5d4(c);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_27d0c0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27d0c0; }
    c->v.s[2] = LD32(c->r[8] + 28u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[16]);
    ST32(c->r[0] + 20u, c->v.s[0]);
L_27d0c0:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27d0cc(Cpu *restrict c) {
    FN_ENTER(0x27d0ccu);
L_27d0cc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x1428u;
    c->v.s[18] = c->v.s[1];
    c->v.s[16] = c->v.s[0];
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_27d19c; }
    c->r[1] = 0x1u;
    c->r[2] = 0x76u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d19c; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[24] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27d130u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27d13cu; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = c->v.s[0];
    c->v.s[28] = c->r[4];
    c->v.s[30] = c->r[7];
    c->v.f[17] = c->v.f[28] * c->v.f[20];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x27d164u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->v.s[19] = c->r[9];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[30] * c->v.f[22]);
    c->v.f[20] = c->v.f[30] * c->v.f[20];
    c->r[14] = 0x27d17cu; f_15efdf4(c);
    c->v.f[2] = c->v.f[19] * c->v.f[0];
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[28] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[19] * c->v.f[26]);
    c->r[7] = c->v.s[20];
    c->r[9] = c->v.s[2];
    c->r[4] = c->v.s[0];
L_27d19c:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x38c90fdbu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[20] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27d1b8u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x27d1c4u; f_15efdf4(c);
    c->v.s[2] = c->r[7];
    c->v.s[8] = c->r[9];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[8] + 28u);
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[10] = c->r[4];
    ST32(c->r[0] + 64u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    ST32(c->r[0] + 68u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[0] + 72u, c->v.s[6]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27d240; }
    c->v.s[2] = LD32(c->r[8] + 28u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[18]);
    ST32(c->r[0] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_GT) { ST32(c->r[0] + 20u, c->v.s[16]); }
L_27d240:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27d24c(Cpu *restrict c) {
    FN_ENTER(0x27d24cu);
L_27d24c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[1] = LD32(c->r[5] + 24u);
    c->v.s[0] = LD32(c->r[5] + 20u);
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x27d26cu; f_2afda4(c);
    c->r[0] = 0x1428u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x360u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x350u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x354u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x358u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x35cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 40u);
    c->v.s[2] = LD32(c->r[0] + 24u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { ST32(c->r[0] + 24u, c->v.s[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_2afeec(c);
}
void f_27d2ec(Cpu *restrict c) {
    FN_ENTER(0x27d2ecu);
L_27d2ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[8] = c->r[1];
    c->r[1] = 0x1u;
    c->r[9] = c->r[2];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x341u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 464u);
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[0] + 472u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.s[24] = LD32(c->r[0] + 468u);
    c->v.s[26] = LD32(c->r[0] + 68u);
    c->v.f[16] = c->v.f[0] - c->v.f[6];
    c->v.f[18] = c->v.f[2] - c->v.f[4];
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[18];
    c->r[14] = 0x27d34cu; f_15efd70(c);
    c->v.s[20] = 0x3f000000u;
    c->v.s[22] = 0x4622f983u;
    c->v.s[2] = c->v.s[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[11] = c->r[0] - c->r[1];
    c->r[10] = (uint32_t)(uint16_t)(c->r[11]);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_27d39c; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[11]);
    c->v.s[0] = 0x3bb40000u;
    c->v.s[2] = 0x42b40000u;
    c->v.s[4] = c->r[0];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    goto L_27d3a0;
L_27d39c:;
    c->v.s[0] = 0x0u;
L_27d3a0:;
    c->v.s[1] = 0x3d4ccccdu;
    c->r[0] = c->r[4];
    c->r[14] = 0x27d3acu; f_2b07d0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x3dcccccdu;
    c->v.s[0] = LD32(c->r[0] + 776u);
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_27d434; }
    c->v.s[2] = 0xbdcccccdu;
    c->v.s[8] = 0x44d00000u;
    c->v.s[10] = 0x42800000u;
    c->v.s[4] = LD32(c->r[4] + 28u);
    c->v.s[6] = 0xbfd9999au;
    c->v.s[12] = LD32(c->r[0] + 24u);
    c->r[6] = 0x3000u;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[20];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[4] = c->v.f[0] * c->v.f[6];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[2]);
    c->r[5] = c->v.s[0];
    ST32(c->r[0] + 24u, c->v.s[12]);
    c->r[0] = c->r[5] + (c->r[5] << 2);
    c->r[1] = (c->r[0] << 1);
    (void)f_subs(c, c->r[1], 0x3000u);
    if (COND_CC) { c->r[6] = (c->r[0] << 1); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 776u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[6] = 0x0u - c->r[6]; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d444; }
    goto L_27d4c0;
L_27d434:;
    c->r[5] = 0x40u;
    c->r[6] = 0x0u;
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d4c0; }
L_27d444:;
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x342u; ST8(ea, c->r[1]); }
    c->v.f[24] = c->v.f[24] - c->v.f[26];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[8] & 0x40u;
    c->v.f[1] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[1], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_27d478; }
    c->r[14] = 0x27d474u; f_15efddc(c);
    c->v.s[1] = c->v.s[0];
L_27d478:;
    c->v.s[0] = c->v.s[24] ^ 0x80000000u;
    c->r[14] = 0x27d480u; f_15efd70(c);
    c->v.s[2] = c->v.s[20];
    c->r[3] = 0x80u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[3] = 0x200u; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d4b0u; f_2c0e78(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
L_27d4c0:;
    c->v.s[2] = LD32(c->r[0] + 776u);
    c->v.s[0] = LD32(c->r[4] + 28u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27d510; }
    c->r[1] = 0x10000u - c->r[10];
    c->v.s[2] = c->r[5];
    c->v.s[4] = c->r[1];
    c->r[1] = 0x10000u - c->r[5];
    (void)f_subs(c, c->r[10], c->r[1]);
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    if (COND_CC) { c->v.s[4] = c->v.s[2]; }
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[2] - c->r[1];
    goto L_27d538;
L_27d510:;
    (void)f_subs(c, c->r[10], c->r[5]);
    if (COND_HI) { c->r[11] = c->r[5]; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[11]);
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->v.s[0];
    c->r[1] = c->r[2] + (uint32_t)(uint16_t)(c->r[1]);
L_27d538:;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->v.s[0] = 0x43a00000u;
    c->r[1] = c->r[6] + 0x8000u;
    c->r[0] = 0x8000u;
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[6]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->v.s[0];
    c->r[5] = c->r[6] + 0x8000u;
    c->r[6] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_CS) { goto L_27d58c; }
    c->r[5] = c->r[2] + c->r[5];
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_LS) { c->r[0] = c->r[6] + (uint32_t)(uint16_t)(c->r[2]); }
    goto L_27d59c;
L_27d58c:;
    c->r[2] = c->r[5] - c->r[2];
    c->r[6] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_CS) { c->r[0] = c->r[2]; }
L_27d59c:;
    c->r[0] = c->r[0] + 0x8000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[9] + 36u);
    c->v.s[2] = LD32(c->r[0] + 24u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[2];
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[14] = 0x27d5d0u; f_2b0a00(c);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_27d64c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d5e0u; f_2b0a84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27d608; }
    c->v.s[1] = LD32(c->r[9] + 8u);
    c->v.s[0] = LD32(c->r[9] + 4u);
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d600u; f_2afda4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x27d608u; f_2afeec(c);
L_27d608:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[9] + 36u);
    c->v.s[0] = LD32(c->r[0] + 24u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27d68c; }
    c->r[1] = 0x27d628u + 0xe8u;
    c->v.s[2] = LD32(c->r[4] + 28u);
    { uint32_t r = c->r[8] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x4u; }
    c->v.s[4] = LD32(c->r[1]);
    c->v.f[2] = c->v.f[2] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    { uint32_t r = c->r[8] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d694; }
    goto L_27d6d0;
L_27d64c:;
    { uint32_t r = c->r[8] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d68c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[9] + 40u);
    c->v.s[2] = LD32(c->r[0] + 24u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27d68c; }
    c->v.s[1] = LD32(c->r[9] + 24u);
    c->v.s[0] = LD32(c->r[9] + 20u);
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d684u; f_2afda4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x27d68cu; f_2afeec(c);
L_27d68c:;
    { uint32_t r = c->r[8] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d6d0; }
L_27d694:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27d69cu; f_2b0a00(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_27d6d0; }
    { uint32_t ea = c->r[9] + 0x22u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27d6b8u; f_2b09e4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->v.s[1] = LD32(c->r[0] + 776u);
    c->r[0] = c->r[4];
    c->r[14] = 0x27d6d0u; f_2b0694(c);
L_27d6d0:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27d718(Cpu *restrict c) {
    FN_ENTER(0x27d718u);
L_27d718:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x140cu;
    c->v.s[14] = 0x3f000000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[0] - c->r[2];
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[6] = LD32(c->r[1] + 16u);
    c->v.s[12] = LD32(c->r[1] + 32u);
    c->v.s[2] = LD32(c->r[1] + 20u);
    c->v.s[8] = LD32(c->r[1] + 36u);
    c->v.s[4] = LD32(c->r[1] + 24u);
    c->v.s[10] = LD32(c->r[1] + 40u);
    c->v.f[1] = c->v.f[0] * c->v.f[0];
    c->v.f[14] = c->v.f[1] * c->v.f[14];
    c->v.s[1] = LD32(c->r[1] + 64u);
    c->v.f[12] = c->v.f[14] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[6] = c->v.f[12] + c->v.f[1];
    ST32(c->r[1] + 64u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[1] + 68u);
    c->v.f[2] = c->v.f[8] + c->v.f[6];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[1] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[1] + 72u);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[1] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->v.s[4] = LD32(c->r[0] + 32u);
    c->v.s[6] = LD32(c->r[0] + 36u);
    c->v.s[8] = LD32(c->r[0] + 40u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[0] + 16u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[6]);
    ST32(c->r[0] + 20u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[0] + 24u, c->v.s[2]);
    return;
}
void f_27d7c4(Cpu *restrict c) {
    FN_ENTER(0x27d7c4u);
L_27d7c4:;
    c->v.s[2] = LD32(c->r[0] + 28u);
    c->r[1] = 0x1428u;
    c->r[2] = c->r[0];
    c->v.s[1] = 0x3f000000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->v.f[3] = c->v.f[2] * c->v.f[2];
    c->v.s[8] = LD32(c->r[1] + 16u);
    c->v.s[14] = LD32(c->r[1] + 32u);
    c->v.s[4] = LD32(c->r[1] + 20u);
    c->v.s[10] = LD32(c->r[1] + 36u);
    c->v.s[6] = LD32(c->r[1] + 24u);
    c->v.s[12] = LD32(c->r[1] + 40u);
    c->v.f[1] = c->v.f[3] * c->v.f[1];
    c->v.s[3] = LD32(c->r[1] + 64u);
    c->v.f[14] = c->v.f[1] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[10] = c->v.f[1] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[8] = c->v.f[14] + c->v.f[3];
    ST32(c->r[1] + 64u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[1] + 68u);
    c->v.f[4] = c->v.f[10] + c->v.f[8];
    c->v.f[8] = c->v.f[1] * c->v.f[12];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[6]);
    ST32(c->r[1] + 68u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1] + 72u);
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    ST32(c->r[1] + 72u, c->v.s[4]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[4] = LD32(c->r[1] + 16u);
    c->v.s[6] = LD32(c->r[1] + 32u);
    c->v.s[8] = LD32(c->r[1] + 36u);
    c->v.s[10] = LD32(c->r[1] + 40u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[6]);
    ST32(c->r[1] + 16u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1] + 20u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[1] + 20u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1] + 24u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[10]);
    ST32(c->r[1] + 24u, c->v.s[4]);
    __attribute__((musttail)) return f_2bf0f4(c);
}
void f_27d86c(Cpu *restrict c) {
    FN_ENTER(0x27d86cu);
L_27d86c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->v.s[8] = 0x3f000000u;
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->v.f[10] = c->v.f[0] * c->v.f[0];
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.s[6] = LD32(c->r[0] + 92u);
    c->r[0] = c->r[4];
    c->v.f[8] = c->v.f[10] * c->v.f[8];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[0] = c->v.f[6] + c->v.f[4];
    c->r[14] = 0x27d8b0u; f_2bf7bc(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[4] = LD32(c->r[0] + 36u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[0] + 20u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27d8cc(Cpu *restrict c) {
    FN_ENTER(0x27d8ccu);
L_27d8cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->v.s[16] = c->v.s[0];
    c->r[4] = c->r[0];
    c->r[14] = 0x27d8e0u; f_27cab8(c);
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2bf0f4(c);
}
void f_27d8f4(Cpu *restrict c) {
    FN_ENTER(0x27d8f4u);
L_27d8f4:;
    c->v.f[10] = c->v.f[0] * c->v.f[0];
    c->v.s[2] = 0x3f000000u;
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[1]);
    c->r[3] = 0x1428u;
    c->v.s[6] = LD32(c->r[2] + 4u);
    c->v.s[14] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[2] + 8u);
    c->v.s[1] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.s[10] = LD32(c->r[0] + 64u);
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    ST32(c->r[0] + 64u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 68u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[2] + c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    return;
}
void f_27d960(Cpu *restrict c) {
    FN_ENTER(0x27d960u);
L_27d960:;
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 8u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[1], c->v.s[8]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[1] + 4u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    ST32(c->r[1] + 8u, c->v.s[2]);
    return;
}
void f_27d994(Cpu *restrict c) {
    FN_ENTER(0x27d994u);
L_27d994:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->v.s[16] = c->v.s[0];
    c->r[4] = c->r[0];
    c->r[14] = 0x27d9a8u; f_27a8dc(c);
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2bf0f4(c);
}
void f_27d9bc(Cpu *restrict c) {
    FN_ENTER(0x27d9bcu);
L_27d9bc:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    return;
}
void f_27d9e0(Cpu *restrict c) {
    FN_ENTER(0x27d9e0u);
L_27d9e0:;
    c->r[1] = 0x1428u;
    c->v.s[4] = 0x0u;
    c->v.s[10] = 0x3f800000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[6] = c->v.s[2] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.f[8] = c->v.f[6] / c->v.f[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    c->v.s[4] = COND_GT ? c->v.s[6] : c->v.s[8];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[10]);
    c->v.s[4] = COND_GE ? c->v.s[6] : c->v.s[4];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    if (COND_HI) { c->r[1] = 0x1u; }
    ST32(c->r[0] + 36u, c->v.s[4]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    return;
}
void f_27da44(Cpu *restrict c) {
    FN_ENTER(0x27da44u);
L_27da44:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->v.s[16] = c->v.s[1];
    c->v.s[18] = c->v.s[0];
    c->r[5] = c->r[0];
    c->r[14] = 0x27da60u; f_2b09bc(c);
    c->v.s[2] = LD32(c->r[5] + 28u);
    c->r[0] = c->r[5];
    c->r[1] = 0x4u;
    c->r[2] = 0x0u;
    c->v.f[20] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = c->v.s[18];
    c->v.f[1] = c->v.f[20] + c->v.f[16];
    c->r[14] = 0x27da80u; f_2b0a24(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27dafc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27da90u; f_2b09e4(c);
    c->v.f[2] = c->v.f[0] - c->v.f[18];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27daa8; }
    c->v.f[20] = c->v.f[20] + c->v.f[2];
    goto L_27dabc;
L_27daa8:;
    c->v.f[0] = c->v.f[20] + c->v.f[0];
    c->v.f[0] = c->v.f[0] - c->v.f[16];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.f[20] = c->v.f[20] - c->v.f[0]; }
L_27dabc:;
    c->v.f[8] = c->v.f[16] - c->v.f[18];
    c->r[0] = 0x1428u;
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[2] = LD32(c->r[4] + 4u);
    c->v.s[4] = LD32(c->r[4] + 8u);
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[20] / c->v.f[8];
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[0] + 64u, c->v.s[6]);
    c->v.s[0] = LD32(c->r[0] + 68u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[2]);
    ST32(c->r[0] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[4]);
    ST32(c->r[0] + 72u, c->v.s[0]);
L_27dafc:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27db04(Cpu *restrict c) {
    FN_ENTER(0x27db04u);
L_27db04:;
    c->v.s[2] = c->r[2];
    c->v.s[0] = LD32(c->r[0] + 28u);
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_27db4c; }
    c->r[2] = 0x0u;
    c->r[1] = (c->r[0] << 16);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0b70000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { c->r[0] = 0xc0b7u; }
    if (COND_LT) { c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x4000u);
    if (COND_GE) { c->r[0] = 0x4000u; }
L_27db4c:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    return;
}
void f_27db54(Cpu *restrict c) {
    FN_ENTER(0x27db54u);
L_27db54:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x17d4d54u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x27db7cu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x27dbd8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x27dbf0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x27dc08u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27dc2c(Cpu *restrict c) {
    FN_ENTER(0x27dc2cu);
L_27dc2c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[10] = c->r[1];
    c->r[6] = c->r[0];
    c->r[4] = c->r[3];
    c->r[8] = c->r[2];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_HI) { goto L_27df7c; }
    c->r[0] = 0x1428u;
    c->r[9] = c->r[6];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[5] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27dc70u; f_270ffc(c);
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_27dd14; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[11];
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x27dca0u; f_2c21c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27dd2c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c30u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x27dcc4u; rt_dispatch(c);
    c->r[1] = 0x17bbec8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x27dcd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27dcf4; }
L_27dcdc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27dd1c; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27dcdc; }
L_27dcf4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27dd1c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    goto L_27dd20;
L_27dd14:;
    c->r[0] = 0x0u;
    goto L_27df7c;
L_27dd1c:;
    c->r[0] = 0x0u;
L_27dd20:;
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
L_27dd2c:;
    c->r[5] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27dd64; }
    { uint32_t ea = c->r[11]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_27dd64; }
    c->r[0] = 0x4f4u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[16] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_27dd78; }
    c->v.s[16] = 0x0u;
    goto L_27dd88;
L_27dd64:;
    c->r[0] = 0x0u - c->r[5];
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1au; ST16(ea, c->r[0]); }
    goto L_27ddd8;
L_27dd78:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27dd80u; f_27270c(c);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->v.s[16] = 0x0u; }
L_27dd88:;
    c->r[0] = c->r[6] + 0x500u;
    c->v.s[2] = c->r[5];
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[11] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] - c->v.f[0];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x1au; ST16(ea, c->r[0]); }
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[1]); }
    if (COND_GE) { goto L_27ddd8; }
    c->r[1] = c->r[0] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1au; ST16(ea, c->r[1]); }
    c->r[1] = (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_LT) { goto L_27df7c; }
L_27ddd8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xb8u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[9];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x998u;
    c->r[9] = c->r[0] + c->r[1];
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[14] = 0x27de00u; f_27105c(c);
    { uint32_t ea = c->r[11] + 0x19u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    { uint32_t r = c->r[4] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x17u;
    if (COND_NE) { c->r[2] = 0x10u; }
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = 0x2u; }
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x20u;
    if (COND_NE) { c->r[2] = 0x5u; }
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] & (c->r[4] >> 2);
    if (COND_NE) { c->r[2] = 0x8u; }
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] & (c->r[5] >> 15);
    c->r[1] = c->r[2] | c->r[1];
    c->r[2] = 0x8u;
    if (COND_EQ) { c->r[2] = c->r[2] & (c->r[4] >> 9); }
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = c->r[6];
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x27de74u; f_368be8(c);
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27dea0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27de84u; f_2b0a00(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x27dea0u; f_3696c4(c);
L_27dea0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xb8u;
    c->r[2] = 0x80u;
    { uint32_t r = c->r[4] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] & (c->r[4] >> 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + 0x9c8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] | 0x200u; }
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    { uint32_t r = c->r[4] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[10] << 1);
    c->r[0] = 0xb0cu;
    { uint32_t ea = c->r[1] + c->r[0]; ST16(ea, c->r[2]); }
    if (COND_EQ) { goto L_27df00; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[10] << 1);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
L_27df00:;
    { uint32_t r = c->r[4] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27df30; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb08u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27df30; }
    c->r[2] = 0xb0au;
    c->r[1] = 0xb8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[2] = 0x9ccu;
    { uint32_t ea = c->r[1] + c->r[2]; ST16(ea, c->r[0]); }
L_27df30:;
    { uint32_t r = c->r[4] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27df50; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[4] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_27df64; }
    goto L_27df7c;
L_27df50:;
    c->r[0] = 0xb8u;
    c->r[1] = 0x9ccu;
    c->r[2] = 0x1u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
L_27df64:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0xb0au;
    { uint32_t ea = c->r[0] + c->r[3]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb08u; ST8(ea, c->r[2]); }
    c->r[0] = 0x1u;
L_27df7c:;
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27df94(Cpu *restrict c) {
    FN_ENTER(0x27df94u);
L_27df94:;
    c->r[3] = 0x0u;
    __attribute__((musttail)) return f_27dc2c(c);
}
void f_27df9c(Cpu *restrict c) {
    FN_ENTER(0x27df9cu);
L_27df9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x27dfc0u; f_27dc2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27dfec; }
    c->r[0] = 0x1428u;
    c->r[1] = 0xb8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x998u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_369174(c);
L_27dfec:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27dff0(Cpu *restrict c) {
    FN_ENTER(0x27dff0u);
L_27dff0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[3];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[3] = 0x0u;
    c->r[14] = 0x27e018u; f_27dc2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e044; }
    c->r[0] = 0x1428u;
    c->r[1] = 0xb8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x998u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_369174(c);
L_27e044:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27e048(Cpu *restrict c) {
    FN_ENTER(0x27e048u);
L_27e048:;
    c->r[2] = 0x1428u;
    c->r[3] = 0xb8u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t ea = c->r[2] + 0x99du; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = 0xffu;
    { uint32_t ea = c->r[2] + 0x99eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[1] = 0xb0cu;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[12]); }
    return;
}
void f_27e084(Cpu *restrict c) {
    FN_ENTER(0x27e084u);
L_27e084:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x0u;
    c->r[12] = 0xffu;
    c->r[3] = 0xb0cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x99du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x99eu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa55u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa56u; ST8(ea, c->r[12]); }
    c->r[1] = 0xb0eu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    return;
}
void f_27e0cc(Cpu *restrict c) {
    FN_ENTER(0x27e0ccu);
L_27e0cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x1404u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27e114; }
    c->r[1] = 0xb7d1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27e100; }
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_27e100:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x27e10cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x0u; }
L_27e114:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27e11c(Cpu *restrict c) {
    FN_ENTER(0x27e11cu);
L_27e11c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1404u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27e16c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x27e148u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e168; }
    c->r[0] = 0xb5f7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x0u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_27e168:;
    c->r[4] = 0x0u;
L_27e16c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27e174(Cpu *restrict c) {
    FN_ENTER(0x27e174u);
L_27e174:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1404u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27e1c4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x27e1a0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e1c0; }
    c->r[0] = 0xb5f7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x0u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_27e1c0:;
    c->r[4] = 0x0u;
L_27e1c4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27e1cc(Cpu *restrict c) {
    FN_ENTER(0x27e1ccu);
L_27e1cc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x17d473cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x27e1f4u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x27e250u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x27e268u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x27e280u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27e2a4(Cpu *restrict c) {
    FN_ENTER(0x27e2a4u);
L_27e2a4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    c->r[0] = 0x17baa9cu;
    c->r[8] = c->r[1];
    c->r[5] = c->r[2];
    { uint32_t ea = 0x27e2c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x33u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27e2e8; }
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27e714; }
L_27e2e8:;
    c->r[0] = 0x1428u;
    c->r[6] = c->r[4];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27e714; }
    c->r[1] = 0x72fcu;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_EQ) { goto L_27e714; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27e334; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[0] + 0x2c3u; ST8(ea, c->r[2]); }
L_27e334:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x27e340u; f_2bcb9c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x27e34cu; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e714; }
    (void)f_subs(c, c->r[8], 0xffu);
    if (COND_EQ) { goto L_27e56c; }
    c->r[0] = 0x1054u;
    c->r[1] = 0x0u;
    c->r[10] = c->r[4] + c->r[0];
    c->r[0] = 0x17baa0cu;
    { uint32_t ea = 0x27e374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e378u; f_474ce4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3e4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x27e394u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e3e4; }
    c->r[0] = 0x1051u;
    c->r[11] = c->r[7];
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD8(ea); c->r[11] = ea; c->r[0] = v; }
    c->r[14] = 0x27e3acu; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e3e4; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27e3e4; }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27e3c4u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e3e4; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27e564; }
L_27e3e4:;
    c->r[0] = 0x17ba98cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x27e3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3f8u; f_474ce4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e464; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x27e414u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e464; }
    c->r[0] = 0x1051u;
    c->r[11] = c->r[7];
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD8(ea); c->r[11] = ea; c->r[0] = v; }
    c->r[14] = 0x27e42cu; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e464; }
    { uint32_t r = c->r[8] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27e464; }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27e444u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e464; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27e564; }
L_27e464:;
    c->r[0] = 0x17ba90cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x27e474u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e478u; f_474ce4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e4e4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x27e494u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e4e4; }
    c->r[0] = 0x1051u;
    c->r[11] = c->r[7];
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD8(ea); c->r[11] = ea; c->r[0] = v; }
    c->r[14] = 0x27e4acu; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e4e4; }
    { uint32_t r = c->r[8] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27e4e4; }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27e4c4u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e4e4; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27e564; }
L_27e4e4:;
    c->r[0] = 0x17ba88cu;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x27e4f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e4f8u; f_474ce4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e56c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x27e514u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27e56c; }
    c->r[0] = 0x1051u;
    c->r[11] = c->r[7];
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD8(ea); c->r[11] = ea; c->r[0] = v; }
    c->r[14] = 0x27e52cu; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e56c; }
    { uint32_t r = c->r[8] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27e56c; }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27e544u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e56c; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27e56c; }
L_27e564:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x368u; ST8(ea, c->r[0]); }
L_27e56c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27e638; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27e584u; f_2825d0(c);
    c->r[1] = 0x73f3u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    if (COND_NE) { goto L_27e64c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27e5bc; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e5bc; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e5c8; }
L_27e5bc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27e5c8u; f_28dee0(c);
L_27e5c8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[4];
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27e608u; f_282538(c);
    c->r[1] = 0x73bcu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    goto L_27e6f0;
L_27e638:;
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e674; }
    goto L_27e654;
L_27e64c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27e674; }
L_27e654:;
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e674; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e680; }
L_27e674:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27e680u; f_28dee0(c);
L_27e680:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[4];
    c->r[7] = c->r[4];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27e6c4u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[8]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x1u;
L_27e6f0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27e704u; f_282510(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x27e714u; rt_dispatch(c);
L_27e714:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27e734(Cpu *restrict c) {
    FN_ENTER(0x27e734u);
L_27e734:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x17ba610u;
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    { uint32_t ea = 0x27e750u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x33u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27e774; }
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27ea68; }
L_27e774:;
    c->r[0] = 0x1428u;
    c->r[8] = c->r[4];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27ea68; }
    c->r[1] = 0x72fcu;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_EQ) { goto L_27ea68; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27e7c0; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[0] + 0x2c3u; ST8(ea, c->r[2]); }
L_27e7c0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x27e7ccu; f_2bcb9c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x27e7d8u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ea68; }
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { goto L_27e8c4; }
    c->r[0] = 0x17ba3c4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x27e7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e7fcu; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27e81c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27e814u; f_2b70a4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27e8b8; }
L_27e81c:;
    c->r[0] = 0x17ba390u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x27e82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e830u; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27e850; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27e848u; f_2b70a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e8b8; }
L_27e850:;
    c->r[0] = 0x17ba35cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x27e860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e864u; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27e884; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27e87cu; f_2b70a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e8b8; }
L_27e884:;
    c->r[0] = 0x17ba328u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x27e894u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e898u; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[6] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27e8c4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27e8b0u; f_2b70a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e8c4; }
L_27e8b8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x368u; ST8(ea, c->r[1]); }
L_27e8c4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27e98c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27e8dcu; f_2825d0(c);
    c->r[1] = 0x73f3u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    if (COND_NE) { goto L_27e9a0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27e914; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e914; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e920; }
L_27e914:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27e920u; f_28dee0(c);
L_27e920:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[4];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27e960u; f_282538(c);
    c->r[1] = 0x73bcu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27ea40;
L_27e98c:;
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e9c8; }
    goto L_27e9a8;
L_27e9a0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27e9c8; }
L_27e9a8:;
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e9c8; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e9d4; }
L_27e9c8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27e9d4u; f_28dee0(c);
L_27e9d4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[4];
    c->r[6] = c->r[4];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27ea18u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    c->r[0] = 0x72f4u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_27ea40:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27ea58u; f_282510(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x27ea68u; rt_dispatch(c);
L_27ea68:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27ea84(Cpu *restrict c) {
    FN_ENTER(0x27ea84u);
L_27ea84:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x17ba2c4u;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x27ea9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x33u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27eac0; }
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27ee20; }
L_27eac0:;
    c->r[0] = 0x72fcu;
    c->r[7] = c->r[4];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_27ee20; }
    c->r[0] = 0x1428u;
    c->r[8] = c->r[4];
    c->r[1] = 0x59cu;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_27ee20; }
    c->r[1] = 0x5a4u;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_27ee20; }
    { uint32_t ea = c->r[0] + 0x24au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ee20; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27eb2cu; f_2bcb9c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x27eb38u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ee20; }
    c->r[0] = 0x1054u;
    c->r[1] = 0x0u;
    c->r[9] = c->r[4] + c->r[0];
    c->r[0] = 0x17ba228u;
    { uint32_t ea = 0x27eb58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27eb5cu; f_474ce4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ebc8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27eb78u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ebc8; }
    c->r[0] = 0x1051u;
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[14] = 0x27eb90u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ebc8; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27ebc8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27eba8u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ebc8; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27ed48; }
L_27ebc8:;
    c->r[0] = 0x17ba1a8u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x27ebd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ebdcu; f_474ce4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ec48; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27ebf8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ec48; }
    c->r[0] = 0x1051u;
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[14] = 0x27ec10u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ec48; }
    { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27ec48; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27ec28u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ec48; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27ed48; }
L_27ec48:;
    c->r[0] = 0x17ba128u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x27ec58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ec5cu; f_474ce4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ecc8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27ec78u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ecc8; }
    c->r[0] = 0x1051u;
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[14] = 0x27ec90u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ecc8; }
    { uint32_t r = c->r[5] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27ecc8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27eca8u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ecc8; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27ed48; }
L_27ecc8:;
    c->r[0] = 0x17ba0a8u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x27ecd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ecdcu; f_474ce4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ed50; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27ecf8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ed50; }
    c->r[0] = 0x1051u;
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[14] = 0x27ed10u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ed50; }
    { uint32_t r = c->r[5] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_27ed50; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27ed28u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ed50; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_27ed50; }
L_27ed48:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x368u; ST8(ea, c->r[0]); }
L_27ed50:;
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ed80; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27ed80; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27ed8c; }
L_27ed80:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27ed8cu; f_28dee0(c);
L_27ed8c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[4];
    c->r[6] = c->r[4];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27edd0u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[9]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x27ee10u; f_282510(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x27ee20u; rt_dispatch(c);
L_27ee20:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27ee3c(Cpu *restrict c) {
    FN_ENTER(0x27ee3cu);
L_27ee3c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x17b9f0cu;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x27ee54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x33u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27ee78; }
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27f0b0; }
L_27ee78:;
    c->r[0] = 0x72fcu;
    c->r[7] = c->r[4];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_27f0b0; }
    c->r[0] = 0x1428u;
    c->r[8] = c->r[4];
    c->r[1] = 0x59cu;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_27f0b0; }
    c->r[1] = 0x5a4u;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_27f0b0; }
    { uint32_t ea = c->r[0] + 0x24au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f0b0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27eee4u; f_2bcb9c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x27eef0u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27f0b0; }
    c->r[0] = 0x17b9cb4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x27ef08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ef0cu; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27ef30; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27ef24u; f_2b70a4(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27efd8; }
L_27ef30:;
    c->r[0] = 0x17b9c7cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x27ef40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ef44u; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27ef68; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27ef5cu; f_2b70a4(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27efd8; }
L_27ef68:;
    c->r[0] = 0x17b9c44u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x27ef78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ef7cu; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[5] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27efa0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27ef94u; f_2b70a4(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27efd8; }
L_27efa0:;
    c->r[0] = 0x17b9c0cu;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x27efb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27efb4u; f_458ffc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[5] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27efe0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27efccu; f_2b70a4(c);
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27efe0; }
L_27efd8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x368u; ST8(ea, c->r[1]); }
L_27efe0:;
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f010; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f010; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f01c; }
L_27f010:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x27f01cu; f_28dee0(c);
L_27f01c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[4];
    c->r[6] = c->r[4];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f060u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[9]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x27f0a0u; f_282510(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x27f0b0u; rt_dispatch(c);
L_27f0b0:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27f0cc(Cpu *restrict c) {
    FN_ENTER(0x27f0ccu);
L_27f0cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[5] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[7] = 0x0u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x362u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f128; }
    c->v.s[0] = 0x3f800000u;
    c->r[1] = c->r[0] + 0x364u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27f104u; f_272128(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 868u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_27f128; }
    c->r[1] = 0x0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + 0x364u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
L_27f128:;
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x368u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27f240; }
    { uint32_t ea = c->r[0] + 0x2beu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27f24c; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[9] = 0x1051u;
    c->r[8] = 0x0u;
    c->r[4] = c->r[5] + c->r[0];
    c->r[0] = 0x17b9c00u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x27f180u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_27f184:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x27f190u; f_474ce4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27f21c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27f1acu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27f21c; }
    c->r[11] = c->r[6];
    { uint32_t ea = c->r[11] + c->r[9]; uint32_t v = LD8(ea); c->r[11] = ea; c->r[0] = v; }
    c->r[14] = 0x27f1c0u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f21c; }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x27f1d0u; f_249240(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f21c; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_27f21c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[2], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f21c; }
    c->r[1] = sh_lsl(c->r[2], c->r[5]);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2beu; ST8(ea, c->r[2]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[8] = c->r[1] | c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_27f21c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_NE) { goto L_27f184; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[0] & 0x1u;
    goto L_27f24c;
L_27f240:;
    c->r[8] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2beu; ST8(ea, c->r[8]); }
L_27f24c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27f27c; }
    c->r[1] = 0x73e4u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x36bu; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27f27c:;
    c->r[1] = 0x7420u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27f2d4; }
    { uint32_t ea = c->r[0] + 0x341u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xfdu;
    c->r[14] = 0x27f2a4u; f_2a1fc8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
    c->r[0] = 0x73e0u;
    c->r[9] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_27f2dc; }
    c->r[2] = 0x7f00u;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f2dc; }
L_27f2d4:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27f2dc:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f2e8u; f_281c6c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27f2f8u; f_2825fc(c);
    c->r[0] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_EQ) { goto L_27f2d4; }
    c->r[0] = c->r[5];
    c->r[11] = c->r[7];
    c->r[14] = 0x27f310u; f_2bb5f0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27f384; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_27f37c; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_EQ) { goto L_27f37c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_EQ) { goto L_27f37c; }
    c->r[1] = 0x59cu;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_27f37c; }
    c->r[1] = 0x5a4u;
    c->r[10] = 0x1u;
    c->r[0] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_27f390; }
L_27f37c:;
    c->r[8] = 0x0u;
    goto L_27f38c;
L_27f384:;
    { uint32_t ea = c->r[0] + 0x24du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = c->r[0] & c->r[7];
L_27f38c:;
    c->r[10] = 0x0u;
L_27f390:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27f398u; f_2bb638(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x24fu; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[4] = c->r[1] & c->r[9]; }
    { uint32_t r = c->r[8] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f3dc; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[0] + 0x2beu; ST8(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[0] = c->r[5];
    c->r[14] = 0x27f3d4u; f_27e2a4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27f408; }
L_27f3dc:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27f424; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[0] + 0x2beu; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x27f400u; f_27e734(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27f424; }
L_27f408:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x2c1u; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27f424:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27f578; }
L_27f434:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27f70c; }
    c->r[1] = 0x72fcu;
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_27f70c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27f5dc; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[10] = c->r[6];
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t r = c->r[7] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_27f888; }
L_27f478:;
    { uint32_t ea = c->r[0] + 0x368u; ST8(ea, c->r[1]); }
L_27f47c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27f484u; f_2bb680(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x27f490u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[10];
    if (COND_NE) { goto L_27f5dc; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x2c2u; ST8(ea, c->r[1]); }
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f4d8; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f4d8; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f4e4; }
L_27f4d8:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x27f4e4u; f_28dee0(c);
L_27f4e4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[6] = c->r[5];
    c->r[7] = c->r[5];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f528u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[8]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f568u; f_282510(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    goto L_27f700;
L_27f578:;
    { uint32_t ea = c->r[0] + 0x24du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27f5b8; }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27f5a8; }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x27f59cu; f_27e2a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f5b8; }
    goto L_27f2d4;
L_27f5a8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27f5b0u; f_27ea84(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
L_27f5b8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24fu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27f834; }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27f874; }
    c->r[0] = c->r[5];
    goto L_27f860;
L_27f5dc:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27f70c; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[5];
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t r = c->r[9] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_27f9ac; }
L_27f5fc:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x368u; ST8(ea, c->r[0]); }
L_27f604:;
    c->r[5] = c->r[7];
    c->r[0] = c->r[5];
    c->r[14] = 0x27f610u; f_2bb680(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x27f61cu; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27f70c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[0] + 0x2c2u; ST8(ea, c->r[1]); }
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f664; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f664; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f670; }
L_27f664:;
    c->r[0] = c->r[7];
    c->r[1] = 0x2u;
    c->r[14] = 0x27f670u; f_28dee0(c);
L_27f670:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x73b4u;
    c->r[5] = c->r[7];
    c->r[6] = c->r[7];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f6b4u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[8]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f6f4u; f_282510(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
L_27f700:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_27f70c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27f714u; f_2825fc(c);
    (void)f_subs(c, c->r[0], 0x11u);
    if (COND_HI) { goto L_27f730; }
    c->r[2] = 0xf8c0u;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27f2d4; }
L_27f730:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x362u;
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f8b0; }
    c->r[0] = c->r[5];
    c->r[1] = 0x11u;
    c->r[14] = 0x27f754u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f8a4; }
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f78c; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f78c; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f798; }
L_27f78c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x27f798u; f_28dee0(c);
L_27f798:;
    c->r[6] = c->r[5];
    c->r[0] = 0x72fcu;
    c->r[1] = 0x73b4u;
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f7dcu; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x11u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f818u; f_282510(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27f828u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x2u;
    goto L_27f9a0;
L_27f834:;
    { uint32_t ea = c->r[0] + 0x2bfu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f434; }
    c->r[0] = c->r[5];
    c->r[1] = 0xffu;
    c->r[2] = 0x0u;
    c->r[14] = 0x27f850u; f_27e2a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f2d4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xffu;
L_27f860:;
    c->r[2] = 0x0u;
    c->r[14] = 0x27f868u; f_27e734(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f434; }
    goto L_27f2d4;
L_27f874:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27f87cu; f_27ee3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f434; }
    goto L_27f2d4;
L_27f888:;
    c->r[1] = 0x2u;
    { uint32_t r = c->r[7] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27f478; }
    c->r[1] = 0x3u;
    { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x368u; ST8(ea, c->r[1]); } }
    goto L_27f47c;
L_27f8a4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x362u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
L_27f8b0:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27f9d4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x27f8c4u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f9c8; }
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f8fc; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27f8fc; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27f908; }
L_27f8fc:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x27f908u; f_28dee0(c);
L_27f908:;
    c->r[6] = c->r[5];
    c->r[0] = 0x72fcu;
    c->r[1] = 0x73b4u;
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f94cu; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x6u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x27f988u; f_282510(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27f998u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
L_27f9a0:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_2bce6c(c);
L_27f9ac:;
    c->r[0] = 0x2u;
    { uint32_t r = c->r[9] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27f5fc; }
    c->r[0] = 0x3u;
    { uint32_t r = c->r[9] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27f5fc; }
    goto L_27f604;
L_27f9c8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x362u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
L_27f9d4:;
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27facc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xbu;
    c->r[14] = 0x27f9e8u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27facc; }
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27fa20; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27fa20; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27fa2c; }
L_27fa20:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x27fa2cu; f_28dee0(c);
L_27fa2c:;
    c->r[6] = c->r[5];
    c->r[0] = 0x72fcu;
    c->r[1] = 0x73b4u;
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x27fa70u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xbu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x27faacu; f_282510(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x27fabcu; rt_dispatch(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x362u;
    c->r[2] = 0xfff7u;
    goto L_27fbf0;
L_27facc:;
    (void)f_subs(c, c->r[11], 0x1u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_27f2d4; }
    c->r[1] = 0x7u;
    c->r[14] = 0x27fae0u; f_2825ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27fbc8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x73f3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x369u; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27fb20; }
    c->r[0] = 0x73f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27fb20; }
    c->r[0] = 0x73f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27fb2c; }
L_27fb20:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x27fb2cu; f_28dee0(c);
L_27fb2c:;
    c->r[0] = 0x72fcu;
    c->r[4] = c->r[5];
    c->r[1] = 0x73b4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[6] = c->r[4];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[1] = 0x73b5u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[1] = 0x73b8u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27fb74u; f_282538(c);
    c->r[1] = 0x73bcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x7u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[8]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x27fbb4u; f_282510(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x27fbc4u; rt_dispatch(c);
    goto L_27fbe4;
L_27fbc8:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[2] = 0x0u;
    c->r[14] = 0x27fbd8u; f_282d8c(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x27fbe4u; f_282510(c);
L_27fbe4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x362u;
    c->r[2] = 0xfffdu;
L_27fbf0:;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27fc08(Cpu *restrict c) {
    FN_ENTER(0x27fc08u);
L_27fc08:;
    c->r[2] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x362u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_27fc24(Cpu *restrict c) {
    FN_ENTER(0x27fc24u);
L_27fc24:;
    c->r[2] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x362u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[2] & ~c->r[1];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    return;
}
void f_27fc40(Cpu *restrict c) {
    FN_ENTER(0x27fc40u);
L_27fc40:;
    c->r[2] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x362u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    return;
}
void f_27fc5c(Cpu *restrict c) {
    FN_ENTER(0x27fc5cu);
L_27fc5c:;
    c->r[3] = 0x1428u;
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[12] = v; }
    c->r[3] = 0x362u;
    { uint32_t ea = c->r[12] + c->r[3]; uint32_t v = LD16(ea); c->r[12] = ea; c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[12]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[3] + 868u, c->v.s[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x369u; ST8(ea, c->r[2]); }
    return;
}
void f_27fc90(Cpu *restrict c) {
    FN_ENTER(0x27fc90u);
L_27fc90:;
    c->r[1] = 0x1428u;
    c->r[2] = 0x362u;
    c->r[3] = 0xfffdu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x364u; ST32(ea, c->r[1]); }
    return;
}
void f_27fcbc(Cpu *restrict c) {
    FN_ENTER(0x27fcbcu);
L_27fcbc:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x36bu; ST8(ea, c->r[1]); }
    return;
}
void f_27fcd0(Cpu *restrict c) {
    FN_ENTER(0x27fcd0u);
L_27fcd0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x17d2c98u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x27fcf8u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x27fd54u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x27fd6cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x27fd84u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27fda8(Cpu *restrict c) {
    FN_ENTER(0x27fda8u);
L_27fda8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[1] = 0x5dc4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27feb0; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27fdfc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x27fde0u; f_2bcb9c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5dc4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfdu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
L_27fdfc:;
    c->r[6] = 0x5dc4u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27fe80; }
    c->r[3] = 0x5dc6u;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27fe6c; }
    c->r[2] = 0x1054u;
    c->r[12] = 0x5dc5u;
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_27fe80; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[1] = c->r[1] & 0xfeu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[12]; ST8(ea, c->r[1]); }
    c->r[1] = 0x5dc6u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[14] = 0x27fe68u; f_27fc24(c);
    goto L_27fe80;
L_27fe6c:;
    c->r[0] = 0x1u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x27fe80u; f_27fc40(c);
L_27fe80:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x5dc8u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x5dc4u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfbu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27feb0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_27feb4(Cpu *restrict c) {
    FN_ENTER(0x27feb4u);
L_27feb4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x17b8cf4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x27feccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27fed0u; f_26b3fc(c);
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27ff34; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27fee0u; f_271320(c);
    c->r[6] = c->r[0];
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ff2c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27fef8u; f_271330(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27ff2c; }
    c->r[7] = 0x0u;
L_27ff04:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27ff34; }
    c->r[0] = c->r[5];
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x2u;
    c->r[14] = 0x27ff20u; f_271330(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_27ff04; }
    c->r[7] = 0x0u;
L_27ff2c:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_27ff34:;
    c->r[7] = 0x1u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27ff44(Cpu *restrict c) {
    FN_ENTER(0x27ff44u);
L_27ff44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xb5f9u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27ff88; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27ff64u; f_270824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27ff88; }
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_27ff88:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27ff90(Cpu *restrict c) {
    FN_ENTER(0x27ff90u);
L_27ff90:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xeu); }
    if (COND_NE) { goto L_27ffac; }
    c->r[0] = 0x1u;
    return;
L_27ffac:;
    c->r[1] = 0xcu;
    c->r[2] = 0xffu;
    __attribute__((musttail)) return f_26ff44(c);
}
void f_27ffb8(Cpu *restrict c) {
    FN_ENTER(0x27ffb8u);
L_27ffb8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x73e0u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xeu); }
    if (COND_EQ) { goto L_280030; }
    c->r[0] = c->r[5];
    c->r[1] = 0xcu;
    c->r[2] = 0xffu;
    c->r[14] = 0x27ffe8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280030; }
    c->r[0] = 0xb5f7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28002c; }
    c->r[0] = 0xb5f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_28002c; }
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bbu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[4] = 0x0u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28002c:;
    c->r[4] = 0x0u;
L_280030:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_280038(Cpu *restrict c) {
    FN_ENTER(0x280038u);
L_280038:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_280060; }
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_CS) { c->r[0] = 0x0u; }
    return;
L_280060:;
    c->r[0] = 0x0u;
    return;
}
void f_280068(Cpu *restrict c) {
    FN_ENTER(0x280068u);
L_280068:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_2800a4; }
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x14u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_2800a4; }
    c->r[0] = c->r[0] & 0x7fu;
    c->r[1] = 0x77u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[2] & sh_lsr(c->r[1], c->r[0]);
    return;
L_2800a4:;
    c->r[0] = 0x0u;
    return;
}
void f_2800ac(Cpu *restrict c) {
    FN_ENTER(0x2800acu);
L_2800ac:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_2800d8; }
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x72u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CS) { c->r[0] = 0x0u; }
    return;
L_2800d8:;
    c->r[0] = 0x0u;
    return;
}
void f_2800e0(Cpu *restrict c) {
    FN_ENTER(0x2800e0u);
L_2800e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_280108; }
    c->r[0] = 0x1428u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
L_280108:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x60u;
    c->r[14] = 0x280118u; f_26ff44(c);
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x61u;
    c->r[14] = 0x280134u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x65u;
    c->r[14] = 0x28014cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x66u;
    c->r[14] = 0x280164u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x63u;
    c->r[14] = 0x28017cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x64u;
    c->r[14] = 0x280194u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x67u;
    c->r[14] = 0x2801acu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xbu;
    c->r[2] = 0x7u;
    c->r[14] = 0x2801c4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2801e4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xbu;
    c->r[2] = 0x12u;
    c->r[14] = 0x2801dcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2801ec; }
L_2801e4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2801ec:;
    c->r[0] = c->r[5];
    c->r[1] = 0xbu;
    c->r[2] = 0x1au;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_280200(Cpu *restrict c) {
    FN_ENTER(0x280200u);
L_280200:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[6] = c->r[0];
    c->r[0] = 0xb5f9u;
    c->v.s[16] = c->v.s[0];
    c->r[7] = c->r[3];
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2802f4; }
    c->r[0] = c->r[6];
    c->r[14] = 0x280238u; f_270824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2802f4; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_2802f4; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_28026c; }
    c->r[0] = 0x73e0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xeu); }
    if (COND_EQ) { goto L_2802f4; }
L_28026c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x280280u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2802a0; }
    c->r[0] = c->r[6];
    c->r[1] = 0xau;
    c->r[2] = 0x69u;
    c->r[14] = 0x280298u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2802f4; }
L_2802a0:;
    c->r[0] = 0x1428u;
    c->v.s[2] = LD32(c->r[8]);
    c->v.s[4] = LD32(c->r[8] + 8u);
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0] + 64u);
    c->v.s[8] = LD32(c->r[0] + 72u);
    c->v.f[2] = c->v.f[6] - c->v.f[2];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_2802e4; }
    c->r[14] = 0x2802e0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_2802e4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[16]);
    c->r[4] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[4] = 0x1u; }
L_2802f4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_280304(Cpu *restrict c) {
    FN_ENTER(0x280304u);
L_280304:;
    c->r[1] = 0xau;
    c->r[2] = 0x69u;
    __attribute__((musttail)) return f_26ff44(c);
}
void f_280310(Cpu *restrict c) {
    FN_ENTER(0x280310u);
L_280310:;
    c->r[1] = 0xau;
    c->r[2] = 0x6eu;
    __attribute__((musttail)) return f_26ff44(c);
}
void f_28031c(Cpu *restrict c) {
    FN_ENTER(0x28031cu);
L_28031c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[6] = c->r[0];
    c->r[0] = 0xb5f9u;
    c->v.s[16] = c->v.s[0];
    c->r[7] = c->r[3];
    c->r[8] = c->r[2];
    c->r[5] = c->r[1];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_280444; }
    c->r[0] = c->r[6];
    c->r[14] = 0x280354u; f_270824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_280444; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_280444; }
    c->r[0] = c->r[6];
    c->r[1] = 0xau;
    c->r[2] = 0x6eu;
    c->r[14] = 0x28037cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2803bc; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_280444; }
    c->r[0] = c->r[6];
    c->r[1] = 0xbu;
    c->r[2] = 0x10u;
    c->r[14] = 0x28039cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2803bc; }
    c->r[0] = c->r[6];
    c->r[1] = 0xbu;
    c->r[2] = 0x11u;
    c->r[14] = 0x2803b4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_280444; }
L_2803bc:;
    c->r[0] = 0x1428u;
    c->v.s[0] = LD32(c->r[8]);
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 64u);
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    if (COND_NE) { goto L_280404; }
    c->v.s[0] = LD32(c->r[8] + 4u);
    c->v.s[6] = LD32(c->r[0] + 68u);
    c->v.s[4] = LD32(c->r[8] + 8u);
    c->v.s[8] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    goto L_28041c;
L_280404:;
    c->v.s[0] = 0x0u;
    c->v.s[4] = LD32(c->r[8] + 8u);
    c->v.s[6] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
L_28041c:;
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_280434; }
    c->r[14] = 0x280430u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_280434:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[16]);
    c->r[4] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[4] = 0x0u; }
L_280444:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_280454(Cpu *restrict c) {
    FN_ENTER(0x280454u);
L_280454:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x7bu;
    c->r[4] = c->r[0];
    c->r[14] = 0x280468u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x7fu;
    c->r[14] = 0x280480u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x80u;
    c->r[14] = 0x280498u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x7du;
    c->r[14] = 0x2804b0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x7eu;
    c->r[14] = 0x2804c8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x81u;
    c->r[14] = 0x2804e0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x85u;
    c->r[14] = 0x2804f8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x86u;
    c->r[14] = 0x280510u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280530; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x83u;
    c->r[14] = 0x280528u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_280538; }
L_280530:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_280538:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x84u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_28054c(Cpu *restrict c) {
    FN_ENTER(0x28054cu);
L_28054c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x88u;
    c->r[4] = c->r[0];
    c->r[14] = 0x280560u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x89u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_280580(Cpu *restrict c) {
    FN_ENTER(0x280580u);
L_280580:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x8bu;
    c->r[4] = c->r[0];
    c->r[14] = 0x280594u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2805cc; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x8au;
    c->r[14] = 0x2805acu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2805cc; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x8du;
    c->r[14] = 0x2805c4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2805d4; }
L_2805cc:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2805d4:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x8cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_2805e8(Cpu *restrict c) {
    FN_ENTER(0x2805e8u);
L_2805e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x59u;
    c->r[4] = c->r[0];
    c->r[14] = 0x2805fcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28067c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x5au;
    c->r[14] = 0x280614u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28067c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x5bu;
    c->r[14] = 0x28062cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28067c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x5cu;
    c->r[14] = 0x280644u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28067c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x5du;
    c->r[14] = 0x28065cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28067c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x5eu;
    c->r[14] = 0x280674u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_280684; }
L_28067c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_280684:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x5fu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_280698(Cpu *restrict c) {
    FN_ENTER(0x280698u);
L_280698:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_EQ) { goto L_2806f0; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_280720; }
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x7bu;
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_HI) { goto L_280720; }
    c->r[2] = 0x1u;
    c->r[3] = 0x3du;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { return; }
    c->r[0] = 0xf40u;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { return; }
    c->r[0] = 0xffu;
    return;
L_2806f0:;
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x22u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_CS) { goto L_280720; }
    c->r[1] = 0x100u;
    c->r[0] = (c->r[0] << 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1000000u;
    c->r[0] = sh_lsr(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    return;
L_280720:;
    c->r[0] = 0xffu;
    return;
}
void f_280728(Cpu *restrict c) {
    FN_ENTER(0x280728u);
L_280728:;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_2807f8; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[2], 0x64u);
    if (COND_GT) { goto L_2807e4; }
    c->r[1] = c->r[2] - 0x1fu;
    (void)f_subs(c, c->r[1], 0x22u);
    if (COND_HI) { goto L_2807f8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x280754u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2807f8u: goto L_2807f8; case 0x2807fcu: goto L_2807fc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2807e4:;
    (void)f_subs(c, c->r[2], 0x65u);
    if (COND_EQ) { return; }
    (void)f_subs(c, c->r[2], 0x7fu);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x85u); }
    if (COND_EQ) { goto L_2807fc; }
L_2807f8:;
    c->r[0] = 0x0u;
L_2807fc:;
    return;
}
void f_280800(Cpu *restrict c) {
    FN_ENTER(0x280800u);
L_280800:;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_2809f4; }
    c->r[1] = c->r[2] - 0x1du;
    (void)f_subs(c, c->r[1], 0x72u);
    if (COND_HI) { goto L_2809f4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x280820u + 0x8u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2809f4u: goto L_2809f4; case 0x2809f8u: goto L_2809f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2809f4:;
    c->r[0] = 0x0u;
L_2809f8:;
    return;
}
void f_2809fc(Cpu *restrict c) {
    FN_ENTER(0x2809fcu);
L_2809fc:;
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_NE) { goto L_280a18; }
    c->r[1] = c->r[2] - 0x10u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { c->r[0] = 0x0u; }
    return;
L_280a18:;
    c->r[0] = 0x0u;
    return;
}
void f_280a20(Cpu *restrict c) {
    FN_ENTER(0x280a20u);
L_280a20:;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_280af0; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[2], 0x65u);
    if (COND_GT) { goto L_280adc; }
    c->r[1] = c->r[2] - 0x20u;
    (void)f_subs(c, c->r[1], 0x22u);
    if (COND_HI) { goto L_280af0; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x280a4cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x280af0u: goto L_280af0; case 0x280af4u: goto L_280af4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_280adc:;
    (void)f_subs(c, c->r[2], 0x66u);
    if (COND_EQ) { return; }
    (void)f_subs(c, c->r[2], 0x80u);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x86u); }
    if (COND_EQ) { goto L_280af4; }
L_280af0:;
    c->r[0] = 0x0u;
L_280af4:;
    return;
}
void f_280af8(Cpu *restrict c) {
    FN_ENTER(0x280af8u);
L_280af8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x25u;
    c->r[4] = c->r[0];
    c->r[14] = 0x280b0cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280b5c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x38u;
    c->r[14] = 0x280b24u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280b5c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x3du;
    c->r[14] = 0x280b3cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280b5c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x3eu;
    c->r[14] = 0x280b54u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_280b64; }
L_280b5c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_280b64:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x43u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_280b78(Cpu *restrict c) {
    FN_ENTER(0x280b78u);
L_280b78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_280b94; }
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_280b94:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x77u;
    c->r[14] = 0x280ba4u; f_26ff44(c);
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280c40; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x6eu;
    c->r[14] = 0x280bc0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280c40; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x6fu;
    c->r[14] = 0x280bd8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280c40; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x70u;
    c->r[14] = 0x280bf0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280c40; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x71u;
    c->r[14] = 0x280c08u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280c40; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x72u;
    c->r[14] = 0x280c20u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280c40; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x73u;
    c->r[14] = 0x280c38u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x0u; }
L_280c40:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_280c48(Cpu *restrict c) {
    FN_ENTER(0x280c48u);
L_280c48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x6au;
    c->r[4] = c->r[0];
    c->r[14] = 0x280c5cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x6bu;
    c->r[14] = 0x280c74u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x6cu;
    c->r[14] = 0x280c8cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x6du;
    c->r[14] = 0x280ca4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc8u;
    c->r[14] = 0x280cbcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc9u;
    c->r[14] = 0x280cd4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xcau;
    c->r[14] = 0x280cecu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280d0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xcbu;
    c->r[14] = 0x280d04u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_280d14; }
L_280d0c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_280d14:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xe4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_280d28(Cpu *restrict c) {
    FN_ENTER(0x280d28u);
L_280d28:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[1] = 0xau;
    c->r[2] = 0xa1u;
    c->r[5] = c->r[0];
    c->r[14] = 0x280d40u; f_26ff44(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_280ddc; }
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa2u;
    c->r[14] = 0x280d64u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa3u;
    c->r[14] = 0x280d7cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa4u;
    c->r[14] = 0x280d94u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa5u;
    c->r[14] = 0x280dacu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xbbu;
    c->r[14] = 0x280dc4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xbfu;
    goto L_280e3c;
L_280ddc:;
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa2u;
    c->r[14] = 0x280df8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa3u;
    c->r[14] = 0x280e10u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa4u;
    c->r[14] = 0x280e28u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa5u;
L_280e3c:;
    c->r[14] = 0x280e40u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xbdu;
    c->r[14] = 0x280e58u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xc1u;
    c->r[14] = 0x280e70u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xdau;
    c->r[14] = 0x280e88u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xbeu;
    c->r[14] = 0x280ea0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xc2u;
    c->r[14] = 0x280eb8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xdcu;
    c->r[14] = 0x280ed0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_280ef0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa6u;
    c->r[14] = 0x280ee8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x0u; }
L_280ef0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_280ef8(Cpu *restrict c) {
    FN_ENTER(0x280ef8u);
L_280ef8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0xa1u;
    c->r[4] = c->r[0];
    c->r[14] = 0x280f0cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa2u;
    c->r[14] = 0x280f24u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa3u;
    c->r[14] = 0x280f3cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa4u;
    c->r[14] = 0x280f54u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa5u;
    c->r[14] = 0x280f6cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa6u;
    c->r[14] = 0x280f84u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa7u;
    c->r[14] = 0x280f9cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa8u;
    c->r[14] = 0x280fb4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdbu;
    c->r[14] = 0x280fccu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa9u;
    c->r[14] = 0x280fe4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xaau;
    c->r[14] = 0x280ffcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdeu;
    c->r[14] = 0x281014u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc5u;
    c->r[14] = 0x28102cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc6u;
    c->r[14] = 0x281044u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdfu;
    c->r[14] = 0x28105cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xabu;
    c->r[14] = 0x281074u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xacu;
    c->r[14] = 0x28108cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xddu;
    c->r[14] = 0x2810a4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xadu;
    c->r[14] = 0x2810bcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xaeu;
    c->r[14] = 0x2810d4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbdu;
    c->r[14] = 0x2810ecu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc1u;
    c->r[14] = 0x281104u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdau;
    c->r[14] = 0x28111cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbeu;
    c->r[14] = 0x281134u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc2u;
    c->r[14] = 0x28114cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28116c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdcu;
    c->r[14] = 0x281164u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_281174; }
L_28116c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_281174:;
    c->r[0] = c->r[4];
    c->r[14] = 0x28117cu; f_2825fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281190(Cpu *restrict c) {
    FN_ENTER(0x281190u);
L_281190:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0xa1u;
    c->r[4] = c->r[0];
    c->r[14] = 0x2811a4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa2u;
    c->r[14] = 0x2811bcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa3u;
    c->r[14] = 0x2811d4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa4u;
    c->r[14] = 0x2811ecu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa5u;
    c->r[14] = 0x281204u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa6u;
    c->r[14] = 0x28121cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbdu;
    c->r[14] = 0x281234u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc1u;
    c->r[14] = 0x28124cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbeu;
    c->r[14] = 0x281264u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281284; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc2u;
    c->r[14] = 0x28127cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28128c; }
L_281284:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_28128c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x281294u; f_2825fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2812a8(Cpu *restrict c) {
    FN_ENTER(0x2812a8u);
L_2812a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0xau;
    c->r[2] = 0xbbu;
    c->r[5] = c->r[0];
    c->r[14] = 0x2812bcu; f_26ff44(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa1u;
    c->r[14] = 0x2812d8u; f_26ff44(c);
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa2u;
    c->r[14] = 0x2812f4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa3u;
    c->r[14] = 0x28130cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa4u;
    c->r[14] = 0x281324u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa5u;
    c->r[14] = 0x28133cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xa6u;
    c->r[14] = 0x281354u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xbdu;
    c->r[14] = 0x28136cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xc1u;
    c->r[14] = 0x281384u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xbeu;
    c->r[14] = 0x28139cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2813bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0xc2u;
    c->r[14] = 0x2813b4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2813c4; }
L_2813bc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2813c4:;
    c->r[0] = c->r[5];
    c->r[14] = 0x2813ccu; f_2825fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2813e0(Cpu *restrict c) {
    FN_ENTER(0x2813e0u);
L_2813e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x9au;
    c->r[4] = c->r[0];
    c->r[14] = 0x2813f4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281474; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x9bu;
    c->r[14] = 0x28140cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281474; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x9du;
    c->r[14] = 0x281424u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281474; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x9eu;
    c->r[14] = 0x28143cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281474; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x9fu;
    c->r[14] = 0x281454u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281474; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x9cu;
    c->r[14] = 0x28146cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28147c; }
L_281474:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_28147c:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xa0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_281490(Cpu *restrict c) {
    FN_ENTER(0x281490u);
L_281490:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0xbbu;
    c->r[4] = c->r[0];
    c->r[14] = 0x2814a4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28153c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbdu;
    c->r[14] = 0x2814bcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28153c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbeu;
    c->r[14] = 0x2814d4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28153c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xbfu;
    c->r[14] = 0x2814ecu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28153c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc1u;
    c->r[14] = 0x281504u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28153c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc2u;
    c->r[14] = 0x28151cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28153c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdau;
    c->r[14] = 0x281534u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_281544; }
L_28153c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_281544:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xdcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_281558(Cpu *restrict c) {
    FN_ENTER(0x281558u);
L_281558:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xau;
    c->r[2] = 0x94u;
    c->r[4] = c->r[0];
    c->r[14] = 0x28156cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2815a4; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x96u;
    c->r[14] = 0x281584u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2815a4; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x98u;
    c->r[14] = 0x28159cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2815ac; }
L_2815a4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2815ac:;
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0xc3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_26ff44(c);
}
void f_2815c0(Cpu *restrict c) {
    FN_ENTER(0x2815c0u);
L_2815c0:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xeu);
    if (COND_EQ) { goto L_2815f4; }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_NE) { goto L_281608; }
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0xfeu;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_NE) { c->r[0] = 0x0u; }
    return;
L_2815f4:;
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { return; }
L_281608:;
    c->r[0] = 0x0u;
    return;
}
void f_281610(Cpu *restrict c) {
    FN_ENTER(0x281610u);
L_281610:;
    c->r[1] = 0x15e9u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { return; }
    c->r[1] = 0x1428u;
    c->r[2] = 0x5cb7u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1b6u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_249604(c);
}
void f_281640(Cpu *restrict c) {
    FN_ENTER(0x281640u);
L_281640:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x73e1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0xbu);
    if (COND_EQ) { goto L_281678; }
    (void)f_subs(c, c->r[2], 0xeu);
    c->r[2] = 0x0u;
    if (COND_NE) { goto L_2816c8; }
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    return;
L_281678:;
    c->r[3] = c->r[1] - 0x10u;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CC) { goto L_2816c8; }
    (void)f_subs(c, c->r[1], 0x26u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x28u); }
    if (COND_EQ) { goto L_2816c4; }
    (void)f_subs(c, c->r[1], 0x27u);
    if (COND_NE) { c->r[2] = 0x0u; }
    if (COND_NE) { c->r[0] = (uint32_t)(uint8_t)(c->r[2]); }
    if (COND_NE) { return; }
    c->r[1] = 0xb5f0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x102au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[2] = 0x2u; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    return;
L_2816c4:;
    c->r[2] = 0x2u;
L_2816c8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    return;
}
void f_2816d0(Cpu *restrict c) {
    FN_ENTER(0x2816d0u);
L_2816d0:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x505u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0xfeu;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_2816f0(Cpu *restrict c) {
    FN_ENTER(0x2816f0u);
L_2816f0:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x518u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x505u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    c->r[0] = c->r[2] | c->r[0];
    return;
}
void f_28172c(Cpu *restrict c) {
    FN_ENTER(0x28172cu);
L_28172c:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x518u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    return;
}
void f_281744(Cpu *restrict c) {
    FN_ENTER(0x281744u);
L_281744:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1409u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { return; }
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x518u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    return;
}
void f_281774(Cpu *restrict c) {
    FN_ENTER(0x281774u);
L_281774:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x518u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_281790(Cpu *restrict c) {
    FN_ENTER(0x281790u);
L_281790:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5df3u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_2817a4(Cpu *restrict c) {
    FN_ENTER(0x2817a4u);
L_2817a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x1428u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 880u);
    c->v.s[2] = LD32(c->r[1] + 884u);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[16] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0x2817d0u; f_2beecc(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2817e8(Cpu *restrict c) {
    FN_ENTER(0x2817e8u);
L_2817e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x17b752cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x2817fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x281800u; f_5a5b80(c);
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_281868; }
    c->r[0] = 0x17b7510u;
    { uint32_t ea = 0x281818u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_281834; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_281840; }
    goto L_28184c;
L_281834:;
    c->r[14] = 0x281838u; f_5a5324(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_28184c; }
L_281840:;
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_28184c:;
    c->r[0] = 0x17b74ccu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x28185cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x281860u; f_5a5b80(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[4] = 0x0u; }
L_281868:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_28187c(Cpu *restrict c) {
    FN_ENTER(0x28187cu);
L_28187c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2818ac; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2818a0u; f_2818c0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_2818ac:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_2818c0(Cpu *restrict c) {
    FN_ENTER(0x2818c0u);
L_2818c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x1u;
    c->r[5] = c->r[0];
    c->r[14] = 0x2818d4u; f_2b6f0c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2819ec; }
    c->r[0] = 0x1068u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2819ec; }
    c->r[0] = 0x1054u;
    c->r[7] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[6] + 0x3d4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x40u;
    c->r[14] = 0x281918u; f_249858(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2819ec; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x281930u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x8u);
    c->r[4] = 0x1u;
    if (COND_EQ) { { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x7u); }
    if (COND_NE) { goto L_2819ec; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x44b5a000u;
    c->v.s[16] = 0x0u;
    c->v.s[6] = 0xc40dc000u;
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_281988; }
    c->r[14] = 0x281984u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_281988:;
    c->v.s[0] = 0x447a0000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_2819a0; }
    c->r[4] = 0x0u;
    goto L_2819ec;
L_2819a0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0xc38d0000u;
    c->v.s[6] = 0xc3ea8000u;
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[4] + c->v.f[6];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_2819dc; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x2819dcu; f_15efddc(c);
L_2819dc:;
    c->v.s[2] = 0x44bb8000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[4] = 0x0u; }
L_2819ec:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_281a14(Cpu *restrict c) {
    FN_ENTER(0x281a14u);
L_281a14:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[1];
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_281a44; }
    c->r[0] = 0x1428u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5acu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_281a4c; }
L_281a44:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_281a4c:;
    { uint32_t ea = c->r[6] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_281a68; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_EQ) { goto L_281a90; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_281ad0; }
L_281a68:;
    c->r[0] = c->r[5];
    c->r[1] = 0x20u;
    c->r[14] = 0x281a74u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_281a44; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281a44; }
    goto L_281ab8;
L_281a90:;
    c->r[0] = c->r[5];
    c->r[1] = 0x40u;
    c->r[14] = 0x281a9cu; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_281a44; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_281a44; }
L_281ab8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x281ac8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281a44; }
L_281ad0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x344u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x281ae4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_281a44; }
    { uint32_t ea = c->r[6] + 0x33u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_281b04; }
    c->r[4] = 0x1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_281b04:;
    c->r[0] = 0xb5f7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281a44; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_281b2c(Cpu *restrict c) {
    FN_ENTER(0x281b2cu);
L_281b2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x281b38u; f_2bee80(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_281ba8; }
    c->r[0] = 0x1428u;
    c->r[2] = 0x5d6cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_281ba4; }
    c->v.s[0] = LD32(c->r[0] + 880u);
    c->v.s[2] = LD32(c->r[0] + 884u);
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->v.s[6] = 0x42c80000u;
    c->r[0] = 0x1u;
    c->v.s[4] = c->r[1];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_281ba4:;
    c->r[0] = 0x0u;
L_281ba8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281bb0(Cpu *restrict c) {
    FN_ENTER(0x281bb0u);
L_281bb0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x281bccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281bf4; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x6eu;
    c->r[14] = 0x281be4u; f_26ff44(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_281bf4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x281bfcu; f_2bee80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_281c60; }
    c->r[1] = 0x1428u;
    c->r[2] = 0x5d6cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_281c60; }
    c->v.s[0] = LD32(c->r[1] + 880u);
    c->v.s[2] = LD32(c->r[1] + 884u);
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->v.s[6] = 0x42c80000u;
    c->v.s[4] = c->r[0];
    c->r[0] = 0x1u;
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_281c60:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281c6c(Cpu *restrict c) {
    FN_ENTER(0x281c6cu);
L_281c6c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_281ca4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_281db0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x281c94u; f_2a1fc8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_281da8; }
    c->r[0] = 0x1428u;
    goto L_281d98;
L_281ca4:;
    c->r[0] = 0x73e0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { goto L_281d90; }
    c->r[0] = 0x73e1u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1eu;
    (void)f_subs(c, c->r[1], 0x22u);
    if (COND_HI) { goto L_281d68; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x281cd8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x281d90u: goto L_281d90; case 0x281da8u: goto L_281da8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_281d68:;
    c->r[1] = c->r[0] - 0x7eu;
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_281d88; }
    c->r[3] = 0x41u;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x20000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_281da8; }
L_281d88:;
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_EQ) { goto L_281da8; }
L_281d90:;
    c->r[0] = 0x1428u;
    c->r[5] = 0x1u;
L_281d98:;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x522u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_281db0; }
L_281da8:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_281db0:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_281dbc(Cpu *restrict c) {
    FN_ENTER(0x281dbcu);
L_281dbc:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x522u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_281dd4(Cpu *restrict c) {
    FN_ENTER(0x281dd4u);
L_281dd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[1];
    c->r[14] = 0x281e00u; f_2bf6e8(c);
    c->v.s[2] = 0x3f666666u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->v.s[4] = LD32(c->r[1] + 92u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281e28(Cpu *restrict c) {
    FN_ENTER(0x281e28u);
L_281e28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x1428u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1bau; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_281e6c; }
    c->r[14] = 0x281e48u; f_2bf6e8(c);
    c->v.s[2] = 0x3f666666u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->v.s[4] = LD32(c->r[1] + 92u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_281e6c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281e78(Cpu *restrict c) {
    FN_ENTER(0x281e78u);
L_281e78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_281ed8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x281ea0u; f_2bf6e8(c);
    c->v.s[2] = 0x3f666666u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 92u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_281ed8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x281ec4u; f_2c03f0(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_281ed8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_281ee4(Cpu *restrict c) {
    FN_ENTER(0x281ee4u);
L_281ee4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[8] = 0x1428u;
    c->r[4] = 0x0u;
    c->r[9] = 0x1b6u;
    c->r[10] = c->r[0] + c->r[8];
    c->r[0] = 0x17b6cb8u;
    { uint32_t ea = 0x281f08u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_281f04:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x281f10u; f_25ceb4(c);
    c->r[5] = c->r[0];
    c->r[7] = 0x4u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_281f58; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_281f58; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[8]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x281f48u; f_249290(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_281f58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36cu; uint32_t v = LD8(ea); c->r[7] = v; }
L_281f58:;
    c->r[0] = c->r[7] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_281f78; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_CC) { goto L_281f04; }
    c->r[7] = 0x2u;
L_281f78:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_281f90(Cpu *restrict c) {
    FN_ENTER(0x281f90u);
L_281f90:;
    c->r[1] = 0x1068u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 6) & 0x1u;
    return;
}
void f_281fa0(Cpu *restrict c) {
    FN_ENTER(0x281fa0u);
L_281fa0:;
    c->r[1] = 0x1069u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x1u;
    return;
}
void f_281fb0(Cpu *restrict c) {
    FN_ENTER(0x281fb0u);
L_281fb0:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x523u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_281fc8(Cpu *restrict c) {
    FN_ENTER(0x281fc8u);
L_281fc8:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x524u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_281fe0(Cpu *restrict c) {
    FN_ENTER(0x281fe0u);
L_281fe0:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x525u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_281ff8(Cpu *restrict c) {
    FN_ENTER(0x281ff8u);
L_281ff8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x214u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_282004(Cpu *restrict c) {
    FN_ENTER(0x282004u);
L_282004:;
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cdeu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    return;
}
void f_282020(Cpu *restrict c) {
    FN_ENTER(0x282020u);
L_282020:;
    c->r[2] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x527u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_282038(Cpu *restrict c) {
    FN_ENTER(0x282038u);
L_282038:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x17b6b84u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x28204cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282050u; f_394228(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    (void)f_subs(c, c->r[4], 0xcfu);
    if (COND_EQ) { goto L_282070; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_EQ) { goto L_282084; }
L_282070:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[4], 0x5du); }
    if (COND_EQ) { goto L_282084; }
    (void)f_subs(c, c->r[4], 0x64u);
    if (COND_NE) { c->r[0] = 0x0u; }
L_282084:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_28208c(Cpu *restrict c) {
    FN_ENTER(0x28208cu);
L_28208c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1428u;
    c->r[6] = c->r[1];
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x444u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2820f0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3f8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x2820c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x69u;
    c->r[14] = 0x2820e0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2820fc; }
L_2820e8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2820f0:;
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2820fc:;
    c->r[0] = c->r[6] - 0x8u;
    (void)f_subs(c, c->r[0], 0x43u);
    if (COND_HI) { goto L_2820e8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x282114u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x2820e8u: goto L_2820e8; case 0x282228u: goto L_282228; case 0x282240u: goto L_282240; case 0x28227cu: goto L_28227c; case 0x2822d8u: goto L_2822d8; case 0x28232cu: goto L_28232c; case 0x282374u: goto L_282374; case 0x2823b4u: goto L_2823b4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_282228:;
    c->r[0] = c->r[5];
    c->r[1] = 0x20u;
    c->r[14] = 0x282234u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    goto L_282364;
L_282240:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x6eu;
    c->r[14] = 0x282250u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x40u;
    c->r[14] = 0x282264u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3aeu;
    c->r[2] = 0xdu;
    goto L_2823a4;
L_28227c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x282284u; f_280c48(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x8000u;
    c->r[14] = 0x282298u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2822b4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_2820e8; }
L_2822b4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x400u;
    c->r[14] = 0x2822c0u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3aeu;
    c->r[2] = 0x12u;
    goto L_2823a4;
L_2822d8:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x88u;
    c->r[14] = 0x2822e8u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x89u;
    c->r[14] = 0x282300u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x40000u;
    c->r[14] = 0x282314u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3aeu;
    c->r[2] = 0x17u;
    goto L_2823a4;
L_28232c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x20u;
    c->r[14] = 0x282338u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x282350u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282364; }
    c->r[0] = c->r[5];
    c->r[1] = 0x12cu;
    c->r[14] = 0x282364u; f_2a2388(c);
L_282364:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3aeu;
    c->r[2] = 0xcu;
    goto L_2823a4;
L_282374:;
    c->r[0] = c->r[5];
    c->r[14] = 0x28237cu; f_280c48(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x400u;
    c->r[14] = 0x282390u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3aeu;
    c->r[2] = 0x2fu;
L_2823a4:;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2823b4:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x8bu;
    c->r[14] = 0x2823c4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x8au;
    c->r[14] = 0x2823dcu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x8du;
    c->r[14] = 0x2823f4u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x8cu;
    c->r[14] = 0x28240cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2820e8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x80000u;
    c->r[14] = 0x282420u; f_299d14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2820e8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3aeu;
    c->r[2] = 0x18u;
    goto L_2823a4;
}
void f_282438(Cpu *restrict c) {
    FN_ENTER(0x282438u);
L_282438:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x17d0590u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x282460u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x2824bcu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x2824d4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x2824ecu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_282510(Cpu *restrict c) {
    FN_ENTER(0x282510u);
L_282510:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[1] = 0x72f0u; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); } }
    return;
}
void f_282524(Cpu *restrict c) {
    FN_ENTER(0x282524u);
L_282524:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[1] = 0x72f0u; }
    if (COND_EQ) { c->r[2] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); } }
    return;
}
void f_282538(Cpu *restrict c) {
    FN_ENTER(0x282538u);
L_282538:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x282554u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_EQ) { goto L_2825a8; }
    c->r[1] = 0x73ddu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_2825a8; }
    c->r[1] = 0x7420u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2825a8; }
    c->r[0] = 0x72f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
L_2825a8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2825ac(Cpu *restrict c) {
    FN_ENTER(0x2825acu);
L_2825ac:;
    c->r[2] = 0x72f4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_2825d0(Cpu *restrict c) {
    FN_ENTER(0x2825d0u);
L_2825d0:;
    c->r[3] = 0x72f4u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_2825f8; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
L_2825f8:;
    return;
}
void f_2825fc(Cpu *restrict c) {
    FN_ENTER(0x2825fcu);
L_2825fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x7340u;
    c->r[14] = 0x7350u;
    c->r[2] = c->r[0] + c->r[1];
    c->r[1] = 0x73c0u;
    c->r[3] = c->r[0] + c->r[1];
    c->r[1] = 0x72fcu;
    c->r[4] = c->r[0] + c->r[1];
    c->r[1] = 0x734cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[12] = v; }
    goto L_28262c;
L_282628:;
    c->r[4] = c->r[3];
L_28262c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[4] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[4], 0x11u);
    if (COND_HI) { goto L_2826ac; }
    c->r[4] = (c->r[4] << 2);
    c->r[5] = 0x282648u + 0x8u;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[2];
    c->pc = c->r[6] + c->r[5]; switch (c->pc) { case 0x282628u: goto L_282628; case 0x28262cu: goto L_28262c; case 0x282698u: goto L_282698; case 0x2826acu: goto L_2826ac; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_282698:;
    c->r[12] = c->r[12] - 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[12]);
    c->r[1] = c->r[0] + (c->r[1] << 3);
    c->r[4] = c->r[1] + c->r[14];
    goto L_28262c;
L_2826ac:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2826b4(Cpu *restrict c) {
    FN_ENTER(0x2826b4u);
L_2826b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x2826c0u; f_27109c(c);
    c->r[1] = 0x72f4u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_282710; }
    c->r[1] = 0x72fcu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x72f8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7304u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x308u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x28270cu; rt_dispatch(c);
    goto L_28272c;
L_282710:;
    c->r[0] = 0x72fcu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x72fdu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x72f8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_28272c:;
    c->r[1] = 0x7306u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x7305u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x7307u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x734cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c2u; ST8(ea, c->r[0]); }
    c->r[1] = 0x5f15u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5f16u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5f17u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5ff8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2827b8; }
    c->r[1] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73f3u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xba52u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xb7b0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
L_2827b8:;
    c->r[1] = 0x7300u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x73c8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x73d0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73d1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73d4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73d3u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73d8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x73d5u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2827fc(Cpu *restrict c) {
    FN_ENTER(0x2827fcu);
L_2827fc:;
    c->r[1] = 0x73d0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d4u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d3u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d8u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    return;
}
void f_28282c(Cpu *restrict c) {
    FN_ENTER(0x28282cu);
L_28282c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1408u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[5], 0x2u);
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffeffu;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x758cu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_282898; }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_282898; }
    c->r[1] = 0x72fcu;
    c->r[2] = 0xdu;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_282934;
L_282898:;
    c->r[0] = 0x1428u;
    c->r[1] = 0x59cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_2828d0; }
    c->r[1] = 0x5a4u;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_2828fc; }
L_2828d0:;
    c->r[1] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_2828fc; }
    c->r[0] = 0x72fcu;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_282934;
L_2828fc:;
    c->r[1] = 0x73e0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_NE) { goto L_282a38; }
    c->r[1] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_282a38; }
    c->r[0] = 0x72fcu;
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282934:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x72f8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7304u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
L_28294c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282b0c; }
    c->r[1] = 0x7420u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282b0c; }
    c->r[1] = 0x1418u;
    c->r[7] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = 0x1414u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xfffffe7fu) | ((c->r[1] << 7) & 0x180u);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x72fcu;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; ST8(ea, c->r[1]); c->r[6] = ea; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x2829a8u; f_2b4e58(c);
    c->r[1] = 0x72fdu;
    c->r[2] = 0x1428u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xba60u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1d0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xba64u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1d4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xba68u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1dcu; ST32(ea, c->r[7]); }
    c->r[0] = 0x72f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282b04; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282b04; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x72f8u;
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x7304u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[3]); }
    if (COND_NE) { goto L_282b0c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x308u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x282a34u; rt_dispatch(c);
    goto L_282b0c;
L_282a38:;
    { uint32_t ea = c->r[0] + 0x505u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_282a9c; }
    c->r[0] = 0x72f4u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_282a9c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[14] = 0x282a6cu; f_2a1fc8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_282cac; }
    c->r[0] = c->r[4];
    c->r[14] = 0x282a7cu; f_282cd4(c);
    c->r[0] = 0xba44u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_28294c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x282a98u; f_28282c(c);
    goto L_28294c;
L_282a9c:;
    c->r[0] = 0x73dcu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] - 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282c40; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c8c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282c48; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28294c; }
    c->r[1] = 0x72fcu;
    c->r[3] = 0x13u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x72f8u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7304u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
    goto L_28294c;
L_282b04:;
    c->r[0] = 0x72f8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
L_282b0c:;
    c->r[0] = 0x7307u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x300u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x282b24u; rt_dispatch(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x734cu;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c2u; ST8(ea, c->r[0]); }
    c->r[1] = 0x5f15u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5f16u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5f17u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5ff8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282b9c; }
    c->r[1] = 0x73f0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73f3u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x73f4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xba52u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xb7b0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
L_282b9c:;
    c->r[1] = 0x7300u;
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x73c8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_282be4; }
    c->r[0] = 0x73d0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x73d1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x73d4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x73d3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x73d8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_282c30;
L_282be4:;
    c->r[1] = 0x73d8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282c30; }
    c->r[1] = 0x73d5u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282c30; }
    c->r[1] = 0x73d0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73d3u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_282c30:;
    c->r[0] = 0x73d5u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_282c40:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c8c; }
L_282c48:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282c8c; }
    c->r[1] = 0x72fcu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x72f8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7304u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x308u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x282c88u; rt_dispatch(c);
    goto L_28294c;
L_282c8c:;
    c->r[0] = 0x72fcu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x72fdu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x72f8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_28294c;
L_282cac:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_28294c; }
    c->r[1] = 0x72fcu;
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_282934;
}
void f_282cd4(Cpu *restrict c) {
    FN_ENTER(0x282cd4u);
L_282cd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x282ce0u; f_2711e8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282d04; }
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x39fu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_282d08;
L_282d04:;
    c->r[0] = 0x1f4u;
L_282d08:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x282d14u; f_2bd494(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x282d20u; f_2bd184(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x282d28u; f_271078(c);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282d4c; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f4ccccdu;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    goto L_282d50;
L_282d4c:;
    c->v.s[0] = 0x43f00000u;
L_282d50:;
    c->r[0] = 0x1428u;
    c->r[1] = 0x510u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x258u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2bcc04(c);
}
void f_282d8c(Cpu *restrict c) {
    FN_ENTER(0x282d8cu);
L_282d8c:;
    c->r[1] = 0xba44u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_282da4; }
    return;
L_282da4:;
    c->r[1] = 0x1u;
    __attribute__((musttail)) return f_28282c(c);
}
void f_282dac(Cpu *restrict c) {
    FN_ENTER(0x282dacu);
L_282dac:;
    c->r[1] = 0x73f0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73f3u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x73f4u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xba52u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xb7b0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    return;
}
void f_282ddc(Cpu *restrict c) {
    FN_ENTER(0x282ddcu);
L_282ddc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0x72f8u;
    { uint32_t ea = c->r[13] + 0x7u; ST8(ea, c->r[5]); }
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282f74; }
    c->r[1] = c->r[4] + 0x7300u;
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_282e28; }
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x282e24u; f_272128(c);
    goto L_282f74;
L_282e28:;
    c->r[0] = 0x7340u;
    c->r[12] = 0x7350u;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0x73c0u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = 0x72fcu;
    c->r[8] = c->r[4] + c->r[0];
    c->r[0] = 0x734cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    goto L_282e58;
L_282e54:;
    c->r[0] = c->r[1];
L_282e58:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x11u);
    if (COND_HI) { goto L_282ed8; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = 0x282e74u + 0x8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[5] + c->r[3]; switch (c->pc) { case 0x282e54u: goto L_282e54; case 0x282e58u: goto L_282e58; case 0x282ec4u: goto L_282ec4; case 0x282ed8u: goto L_282ed8; case 0x282f44u: goto L_282f44; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_282ec4:;
    c->r[2] = c->r[2] - 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    c->r[0] = c->r[0] + c->r[12];
    goto L_282e58;
L_282ed8:;
    c->r[0] = 0x72f4u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_282f44; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x282f00u; f_2b6f0c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_282f44; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_282f44; }
    c->r[1] = 0xcu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
    c->r[1] = 0x72fdu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7304u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
L_282f44:;
    c->r[2] = c->r[13] + 0x7u;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x282f58u; f_282f80(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0x1u; }
    if (COND_EQ) { c->r[0] = 0x72f0u; }
    if (COND_EQ) { c->r[1] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); } }
L_282f74:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
