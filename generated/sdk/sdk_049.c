#include "cpu.h"
#include "neon_rt.h"
void f_270aae0(Cpu *c);
void f_270abb8(Cpu *c);
void f_270ad74(Cpu *c);
void f_270b078(Cpu *c);
void f_270b184(Cpu *c);
void f_270b310(Cpu *c);
void f_270c01c(Cpu *c);
void f_270d230(Cpu *c);
void f_2718960(Cpu *c);
void f_2718d80(Cpu *c);
void f_271a430(Cpu *c);
void f_271aac8(Cpu *c);
void f_271ad84(Cpu *c);
void f_271af04(Cpu *c);
void f_271b2b0(Cpu *c);
void f_271b5b0(Cpu *c);
void f_271ba3c(Cpu *c);
void f_271ba88(Cpu *c);
void f_271c64c(Cpu *c);
void f_271c82c(Cpu *c);
void f_271cfcc(Cpu *c);
void f_271d0bc(Cpu *c);
void f_271d0d0(Cpu *c);
void f_2720144(Cpu *c);
void f_27205a4(Cpu *c);
void f_2720888(Cpu *c);
void f_2720e68(Cpu *c);
void f_2721380(Cpu *c);
void f_2722730(Cpu *c);
void f_2722750(Cpu *c);
void f_2722770(Cpu *c);
void f_2722774(Cpu *c);
void f_2722778(Cpu *c);
void f_2722874(Cpu *c);
void f_2722d18(Cpu *c);
void f_2722e08(Cpu *c);
void f_2723578(Cpu *c);
void f_2723978(Cpu *c);
void f_2723ba8(Cpu *c);
void f_27249b0(Cpu *c);
void f_2724c18(Cpu *c);
void f_27250e0(Cpu *c);
void f_27257a0(Cpu *c);
void f_2725ff8(Cpu *c);
void f_272650c(Cpu *c);
void f_2741684(Cpu *c);
void f_2742ef0(Cpu *c);
void f_2743a60(Cpu *c);
void f_2744498(Cpu *c);
void f_274450c(Cpu *c);
void f_2744574(Cpu *c);
void f_27523f8(Cpu *c);
void f_2752434(Cpu *c);
void f_2752b6c(Cpu *c);
void f_2753d14(Cpu *c);
void f_2753f5c(Cpu *c);
void f_27548d8(Cpu *c);
void f_283ab44(Cpu *c);
void f_283ac04(Cpu *c);
void f_283afac(Cpu *c);
void f_283b30c(Cpu *c);
void f_284c91c(Cpu *c);
void f_284c934(Cpu *c);
void f_284c940(Cpu *c);
void f_285039c(Cpu *c);
void f_28503b4(Cpu *c);
void f_285042c(Cpu *c);
void f_285048c(Cpu *c);
void f_2850678(Cpu *c);
void f_2850774(Cpu *c);
void f_285081c(Cpu *c);
void f_28508a0(Cpu *c);
void f_2850960(Cpu *c);
void f_285096c(Cpu *c);
void f_2851ee4(Cpu *c);
void f_2851ef0(Cpu *c);
void f_2851f80(Cpu *c);
void f_2852034(Cpu *c);
void f_2852040(Cpu *c);
void f_285204c(Cpu *c);
void f_2852058(Cpu *c);
void f_2852064(Cpu *c);
void f_2852070(Cpu *c);
void f_285207c(Cpu *c);
void f_2852088(Cpu *c);
void f_2721190(Cpu *restrict c) {
    FN_ENTER(0x2721190u);
L_2721190:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[2];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_27211f0; }
    c->r[7] = 0x0u;
L_27211ac:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27211d8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & 0xfffffffeu;
    (void)f_subs(c, c->r[7], (c->r[0] >> 16));
    if (COND_EQ) { goto L_27211d8; }
    c->r[1] = (c->r[0] >> 16);
    c->r[0] = c->r[6];
    c->r[14] = 0x27211d4u; f_2720888(c);
    goto L_27211e4;
L_27211d8:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[2];
    c->r[14] = 0x27211e4u; f_2720e68(c);
L_27211e4:;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[4] = c->r[4] + 0x8u;
    if (COND_NE) { goto L_27211ac; }
L_27211f0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_27211f4(Cpu *restrict c) {
    FN_ENTER(0x27211f4u);
L_27211f4:;
    __attribute__((musttail)) return f_2720144(c);
}
void f_27211f8(Cpu *restrict c) {
    FN_ENTER(0x27211f8u);
L_27211f8:;
    c->r[1] = 0x1550u;
    c->r[2] = 0x1504u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x150cu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] - c->r[0];
    return;
}
void f_272121c(Cpu *restrict c) {
    FN_ENTER(0x272121cu);
L_272121c:;
    c->r[1] = 0x1504u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x150cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[2] = 0x1518u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x155cu;
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x1510u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[1] = c->r[0] + c->r[1]; }
    c->r[0] = c->r[12] + (c->r[1] << 3);
    return;
}
void f_2721264(Cpu *restrict c) {
    FN_ENTER(0x2721264u);
L_2721264:;
    c->r[1] = 0x1560u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2721270(Cpu *restrict c) {
    FN_ENTER(0x2721270u);
L_2721270:;
    c->r[1] = 0x1550u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x155cu;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1560u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    return;
}
void f_2721290(Cpu *restrict c) {
    FN_ENTER(0x2721290u);
L_2721290:;
    c->r[0] = c->r[0] + 0x10u;
    __attribute__((musttail)) return f_271d0d0(c);
}
void f_2721298(Cpu *restrict c) {
    FN_ENTER(0x2721298u);
L_2721298:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x53b798u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x27212b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27212bcu; f_2718960(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27212c8(Cpu *restrict c) {
    FN_ENTER(0x27212c8u);
L_27212c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x53b768u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x27212e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27212ecu; f_2718960(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2752434(c);
}
void f_27212fc(Cpu *restrict c) {
    FN_ENTER(0x27212fcu);
L_27212fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2721310u; f_270d230(c);
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2721328(Cpu *restrict c) {
    FN_ENTER(0x2721328u);
L_2721328:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_2721338(Cpu *restrict c) {
    FN_ENTER(0x2721338u);
L_2721338:;
    return;
}
void f_272133c(Cpu *restrict c) {
    FN_ENTER(0x272133cu);
L_272133c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x53b6f4u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x2721354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2721360u; f_2718960(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2752434(c);
}
void f_2721370(Cpu *restrict c) {
    FN_ENTER(0x2721370u);
L_2721370:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    return;
}
void f_2721380(Cpu *restrict c) {
    FN_ENTER(0x2721380u);
L_2721380:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[6] = c->r[2];
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_27213d8; }
    c->r[2] = c->r[1] - c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x27213c0u; f_2721380(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2721448; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x14u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_27213d8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - c->r[0];
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_27213f4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
L_27213f4:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_LT) { goto L_2721448; }
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[7] = c->r[6];
    if (COND_NE) { goto L_2721434; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { goto L_2721420; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[7] = c->r[1] - c->r[0];
    goto L_2721434;
L_2721420:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] - c->r[0];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[7] = c->r[7] - 0x1u; }
L_2721434:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x14u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_2721448:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2721450(Cpu *restrict c) {
    FN_ENTER(0x2721450u);
L_2721450:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    goto L_2721464;
L_272145c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x2721464u; f_2718960(c);
L_2721464:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_272145c; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2721478(Cpu *restrict c) {
    FN_ENTER(0x2721478u);
L_2721478:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2721494u; f_271ad84(c);
    { uint32_t ea = c->r[4] + 0x101u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27214a8; }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27214a8u; f_27523f8(c);
L_27214a8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x100u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27214b4(Cpu *restrict c) {
    FN_ENTER(0x27214b4u);
L_27214b4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27214bc(Cpu *restrict c) {
    FN_ENTER(0x27214bcu);
L_27214bc:;
    c->v.d[16] = 0x100000001ull; c->v.d[17] = 0x100000001ull;
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] + 0x4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x1u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    return;
}
void f_2721514(Cpu *restrict c) {
    FN_ENTER(0x2721514u);
L_2721514:;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_272151c(Cpu *restrict c) {
    FN_ENTER(0x272151cu);
L_272151c:;
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    return;
}
void f_2721528(Cpu *restrict c) {
    FN_ENTER(0x2721528u);
L_2721528:;
    ST32(c->r[0] + 24u, c->v.s[0]);
    ST32(c->r[0] + 28u, c->v.s[1]);
    return;
}
void f_2721534(Cpu *restrict c) {
    FN_ENTER(0x2721534u);
L_2721534:;
    ST32(c->r[0] + 32u, c->v.s[0]);
    return;
}
void f_272153c(Cpu *restrict c) {
    FN_ENTER(0x272153cu);
L_272153c:;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    return;
}
void f_2721548(Cpu *restrict c) {
    FN_ENTER(0x2721548u);
L_2721548:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    return;
}
void f_272156c(Cpu *restrict c) {
    FN_ENTER(0x272156cu);
L_272156c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    return;
}
void f_2721590(Cpu *restrict c) {
    FN_ENTER(0x2721590u);
L_2721590:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    return;
}
void f_27215b4(Cpu *restrict c) {
    FN_ENTER(0x27215b4u);
L_27215b4:;
    ST32(c->r[0] + 60u, c->v.s[0]);
    return;
}
void f_27215bc(Cpu *restrict c) {
    FN_ENTER(0x27215bcu);
L_27215bc:;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    return;
}
void f_27215c4(Cpu *restrict c) {
    FN_ENTER(0x27215c4u);
L_27215c4:;
    ST32(c->r[0] + 68u, c->v.s[0]);
    return;
}
void f_27215cc(Cpu *restrict c) {
    FN_ENTER(0x27215ccu);
L_27215cc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_27215e0(Cpu *restrict c) {
    FN_ENTER(0x27215e0u);
L_27215e0:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    return;
}
void f_27215fc(Cpu *restrict c) {
    FN_ENTER(0x27215fcu);
L_27215fc:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_2721610(Cpu *restrict c) {
    FN_ENTER(0x2721610u);
L_2721610:;
    c->v.s[0] = LD32(c->r[0] + 32u);
    return;
}
void f_2721618(Cpu *restrict c) {
    FN_ENTER(0x2721618u);
L_2721618:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_272162c(Cpu *restrict c) {
    FN_ENTER(0x272162cu);
L_272162c:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_2721650(Cpu *restrict c) {
    FN_ENTER(0x2721650u);
L_2721650:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_2721674(Cpu *restrict c) {
    FN_ENTER(0x2721674u);
L_2721674:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_2721698(Cpu *restrict c) {
    FN_ENTER(0x2721698u);
L_2721698:;
    c->v.s[0] = LD32(c->r[0] + 60u);
    return;
}
void f_27216a0(Cpu *restrict c) {
    FN_ENTER(0x27216a0u);
L_27216a0:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_27216a8(Cpu *restrict c) {
    FN_ENTER(0x27216a8u);
L_27216a8:;
    c->v.s[0] = LD32(c->r[0] + 68u);
    return;
}
void f_27216b0(Cpu *restrict c) {
    FN_ENTER(0x27216b0u);
L_27216b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = 0x48u;
    c->r[14] = 0x27216f4u; f_283ac04(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27216fc(Cpu *restrict c) {
    FN_ENTER(0x27216fcu);
L_27216fc:;
    return;
}
void f_2721700(Cpu *restrict c) {
    FN_ENTER(0x2721700u);
L_2721700:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_2721714(Cpu *restrict c) {
    FN_ENTER(0x2721714u);
L_2721714:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    return;
}
void f_2721730(Cpu *restrict c) {
    FN_ENTER(0x2721730u);
L_2721730:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_2721744(Cpu *restrict c) {
    FN_ENTER(0x2721744u);
L_2721744:;
    c->v.s[0] = LD32(c->r[0] + 40u);
    return;
}
void f_272174c(Cpu *restrict c) {
    FN_ENTER(0x272174cu);
L_272174c:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_2721760(Cpu *restrict c) {
    FN_ENTER(0x2721760u);
L_2721760:;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_2721784(Cpu *restrict c) {
    FN_ENTER(0x2721784u);
L_2721784:;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_27217a8(Cpu *restrict c) {
    FN_ENTER(0x27217a8u);
L_27217a8:;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_27217cc(Cpu *restrict c) {
    FN_ENTER(0x27217ccu);
L_27217cc:;
    c->v.s[0] = LD32(c->r[0] + 68u);
    return;
}
void f_27217d4(Cpu *restrict c) {
    FN_ENTER(0x27217d4u);
L_27217d4:;
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_27217e0(Cpu *restrict c) {
    FN_ENTER(0x27217e0u);
L_27217e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x90u;
    c->v.d[8] = 0x0ull; c->v.d[9] = 0x0ull;
    c->r[7] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    c->v.d[10] = 0x0ull;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[11] = c->r[7] + 0x30u;
    c->r[8] = c->r[7] + 0x20u;
    c->r[9] = c->r[7] + 0xcu;
    c->r[10] = c->r[7] + 0x34u;
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    c->r[0] = c->r[7] + 0x40u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[11]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[8]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    c->r[0] = 0x2721858u + 0x1f8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[9]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[10]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    ST64(c->r[13] + 80u, c->v.d[10]);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x27218acu; f_2742ef0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x27218bcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_272192c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x2721928u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_272192c:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[11]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[8]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[7] = ea + 16u; }
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    c->r[1] = 0x2721958u + 0xf8u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[9]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x40000000u;
    { uint32_t ea = c->r[10]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    ST64(c->r[13] + 80u, c->v.d[10]);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27219b0u; f_2742ef0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x27219c0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2721a30; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x2721a30u; rt_dispatch(c);
L_2721a30:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2721a60(Cpu *restrict c) {
    FN_ENTER(0x2721a60u);
L_2721a60:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[1] = c->r[2] + 0x8u;
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2721a84u; f_2742ef0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2721a94u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 5); ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2721b08; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[5] << 5);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x2721b08u; rt_dispatch(c);
L_2721b08:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2721b10(Cpu *restrict c) {
    FN_ENTER(0x2721b10u);
L_2721b10:;
    return;
}
void f_2721b14(Cpu *restrict c) {
    FN_ENTER(0x2721b14u);
L_2721b14:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[3] = c->r[13];
    c->r[5] = c->r[1];
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2721b3cu; f_2742ef0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2721b4cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 5); ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2721bc0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[5] << 5);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x2721bc0u; rt_dispatch(c);
L_2721bc0:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2721bc8(Cpu *restrict c) {
    FN_ENTER(0x2721bc8u);
L_2721bc8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2721bd0(Cpu *restrict c) {
    FN_ENTER(0x2721bd0u);
L_2721bd0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2721bd8(Cpu *restrict c) {
    FN_ENTER(0x2721bd8u);
L_2721bd8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2721be0(Cpu *restrict c) {
    FN_ENTER(0x2721be0u);
L_2721be0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[1];
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    c->v.s[0] = LD32(c->r[6] + 32u);
    c->v.s[2] = LD32(c->r[5] + 32u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_2721cec; }
    c->v.s[0] = LD32(c->r[6] + 36u);
    c->v.s[2] = LD32(c->r[5] + 36u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_2721cec; }
    c->v.s[0] = LD32(c->r[6] + 40u);
    c->v.s[2] = LD32(c->r[5] + 40u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2721cec; }
    c->r[0] = c->r[5] + 0x34u;
    c->r[1] = c->r[6] + 0x34u;
    c->r[2] = 0x10u;
    c->r[14] = 0x2721cbcu; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2721cec; }
    c->v.s[0] = LD32(c->r[6] + 68u);
    c->v.s[2] = LD32(c->r[5] + 68u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_2721cec; }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { c->r[4] = 0x1u; }
L_2721cec:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2721cf4(Cpu *restrict c) {
    FN_ENTER(0x2721cf4u);
L_2721cf4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    return;
}
void f_2721d00(Cpu *restrict c) {
    FN_ENTER(0x2721d00u);
L_2721d00:;
    c->r[1] = 0x102u;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x110c0000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1020000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_2721d1c(Cpu *restrict c) {
    FN_ENTER(0x2721d1cu);
L_2721d1c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfffffff8u;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721d30(Cpu *restrict c) {
    FN_ENTER(0x2721d30u);
L_2721d30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[12] = 0xff00u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x80800000u;
    c->r[14] = c->r[12] & (c->r[2] << 8);
    c->r[12] = 0x8080u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x80800000u;
    c->r[2] = c->r[12] + 0x7fu;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80ff0000u;
    c->r[1] = c->r[14] | c->r[1];
    c->r[2] = c->r[2] & (c->r[3] << 16);
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & c->r[12];
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2721d80(Cpu *restrict c) {
    FN_ENTER(0x2721d80u);
L_2721d80:;
    c->r[3] = 0x8f000000u;
    c->r[1] = c->r[3] & (c->r[1] << 24);
    c->r[1] = c->r[1] | (c->r[2] << 28);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & ~0x77000000u;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721da0(Cpu *restrict c) {
    FN_ENTER(0x2721da0u);
L_2721da0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffc0ffu;
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721db4(Cpu *restrict c) {
    FN_ENTER(0x2721db4u);
L_2721db4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfffcffffu;
    c->r[1] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721dc8(Cpu *restrict c) {
    FN_ENTER(0x2721dc8u);
L_2721dc8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfffbffffu;
    c->r[1] = c->r[2] | (c->r[1] << 18);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721de4(Cpu *restrict c) {
    FN_ENTER(0x2721de4u);
L_2721de4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfff7ffffu;
    c->r[1] = c->r[2] | (c->r[1] << 19);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721e00(Cpu *restrict c) {
    FN_ENTER(0x2721e00u);
L_2721e00:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    return;
}
void f_2721e0c(Cpu *restrict c) {
    FN_ENTER(0x2721e0cu);
L_2721e0c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[12] = c->r[12] & 0x7fu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 8) & 0x7fu;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fu;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7fu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    return;
}
void f_2721e44(Cpu *restrict c) {
    FN_ENTER(0x2721e44u);
L_2721e44:;
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 28) & 0x7u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_2721e60(Cpu *restrict c) {
    FN_ENTER(0x2721e60u);
L_2721e60:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0x3fu;
    return;
}
void f_2721e6c(Cpu *restrict c) {
    FN_ENTER(0x2721e6cu);
L_2721e6c:;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
    return;
}
void f_2721e78(Cpu *restrict c) {
    FN_ENTER(0x2721e78u);
L_2721e78:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 18) & 0x1u;
    return;
}
void f_2721e84(Cpu *restrict c) {
    FN_ENTER(0x2721e84u);
L_2721e84:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 19) & 0x1u;
    return;
}
void f_2721e90(Cpu *restrict c) {
    FN_ENTER(0x2721e90u);
L_2721e90:;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721e9c(Cpu *restrict c) {
    FN_ENTER(0x2721e9cu);
L_2721e9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[14] = (c->r[1] << 2);
    c->r[1] = 0xfu;
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = (c->r[3] << 1);
    c->r[1] = c->r[12] & ~sh_lsl(c->r[1], c->r[14]);
    c->r[12] = 0x1u;
    if (COND_NE) { c->r[4] = c->r[12] | (c->r[3] << 1); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    c->r[2] = c->r[4] | (c->r[2] << 2);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = 0x1u; }
    c->r[2] = c->r[2] | (c->r[3] << 3);
    c->r[1] = c->r[1] | sh_lsl(c->r[2], c->r[14]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2721ef4(Cpu *restrict c) {
    FN_ENTER(0x2721ef4u);
L_2721ef4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] & sh_lsr(c->r[12], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = sh_lsr(c->r[12], c->r[1]);
    c->r[1] = (c->r[0] >> 1) & 0x1u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 2) & 0x1u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    return;
}
void f_2721f30(Cpu *restrict c) {
    FN_ENTER(0x2721f30u);
L_2721f30:;
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8030000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721f40(Cpu *restrict c) {
    FN_ENTER(0x2721f40u);
L_2721f40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    c->r[12] = (c->r[14] >> 8);
    c->r[14] = c->r[14] & 0xffff00ffu;
    c->r[3] = c->r[12] & ~sh_lsl(c->r[3], c->r[1]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[1] = c->r[3] | sh_lsl(c->r[2], c->r[1]);
    c->r[1] = c->r[14] | (c->r[1] << 8);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2721f74(Cpu *restrict c) {
    FN_ENTER(0x2721f74u);
L_2721f74:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xff00ffffu;
    c->r[1] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721f88(Cpu *restrict c) {
    FN_ENTER(0x2721f88u);
L_2721f88:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xf0ffffffu;
    c->r[1] = c->r[2] | (c->r[1] << 24);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721f9c(Cpu *restrict c) {
    FN_ENTER(0x2721f9cu);
L_2721f9c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    c->r[0] = c->r[2] & sh_lsr(c->r[0], c->r[1]);
    return;
}
void f_2721fb0(Cpu *restrict c) {
    FN_ENTER(0x2721fb0u);
L_2721fb0:;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_2721fb8(Cpu *restrict c) {
    FN_ENTER(0x2721fb8u);
L_2721fb8:;
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    return;
}
void f_2721fc4(Cpu *restrict c) {
    FN_ENTER(0x2721fc4u);
L_2721fc4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721fd0(Cpu *restrict c) {
    FN_ENTER(0x2721fd0u);
L_2721fd0:;
    c->r[1] = (c->r[1] << 21);
    c->r[1] = c->r[1] | (c->r[2] << 7);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x8000003fu;
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2721ff0(Cpu *restrict c) {
    FN_ENTER(0x2721ff0u);
L_2721ff0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffe0u;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722004(Cpu *restrict c) {
    FN_ENTER(0x2722004u);
L_2722004:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 21) & 0x3ffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 7) & 0x3fffu;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_2722020(Cpu *restrict c) {
    FN_ENTER(0x2722020u);
L_2722020:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    return;
}
void f_272202c(Cpu *restrict c) {
    FN_ENTER(0x272202cu);
L_272202c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_272203c(Cpu *restrict c) {
    FN_ENTER(0x272203cu);
L_272203c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722044(Cpu *restrict c) {
    FN_ENTER(0x2722044u);
L_2722044:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_272204c(Cpu *restrict c) {
    FN_ENTER(0x272204cu);
L_272204c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722054(Cpu *restrict c) {
    FN_ENTER(0x2722054u);
L_2722054:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_272205c(Cpu *restrict c) {
    FN_ENTER(0x272205cu);
L_272205c:;
    c->r[2] = 0x1118u;
    c->r[1] = 0x22u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x11180000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_2722070(Cpu *restrict c) {
    FN_ENTER(0x2722070u);
L_2722070:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[2] & 0xfffffffeu;
    if (COND_NE) { c->r[2] = c->r[2] | 0x1u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    return;
}
void f_2722088(Cpu *restrict c) {
    FN_ENTER(0x2722088u);
L_2722088:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfffffffdu;
    c->r[1] = c->r[2] | (c->r[1] << 1);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27220a4(Cpu *restrict c) {
    FN_ENTER(0x27220a4u);
L_27220a4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffff0fu;
    c->r[1] = c->r[2] | (c->r[1] << 4);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27220b8(Cpu *restrict c) {
    FN_ENTER(0x27220b8u);
L_27220b8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfffffffbu;
    c->r[1] = c->r[2] | (c->r[1] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27220d4(Cpu *restrict c) {
    FN_ENTER(0x27220d4u);
L_27220d4:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27220ec; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0xfffffff0u;
    c->r[3] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
L_27220ec:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfff0ffffu;
    c->r[1] = c->r[1] | (c->r[2] << 16);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_2722108(Cpu *restrict c) {
    FN_ENTER(0x2722108u);
L_2722108:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_272213c; }
    c->r[14] = 0xf0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
    c->r[14] = c->r[14] & (c->r[2] << 4);
    c->r[4] = c->r[4] & 0xffff000fu;
    c->r[14] = c->r[14] | (c->r[3] << 12);
    c->r[14] = c->r[14] | (c->r[12] << 8);
    c->r[4] = c->r[14] | c->r[4];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
L_272213c:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = (c->r[2] << 20);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = uxtb16(c->r[1]);
    c->r[1] = c->r[1] | (c->r[3] << 28);
    c->r[2] = c->r[2] & 0xfffffu;
    c->r[1] = c->r[1] | (c->r[12] << 24);
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2722168(Cpu *restrict c) {
    FN_ENTER(0x2722168u);
L_2722168:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    return;
}
void f_2722174(Cpu *restrict c) {
    FN_ENTER(0x2722174u);
L_2722174:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 1) & 0x1u;
    return;
}
void f_2722180(Cpu *restrict c) {
    FN_ENTER(0x2722180u);
L_2722180:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 4) & 0xfu;
    return;
}
void f_272218c(Cpu *restrict c) {
    FN_ENTER(0x272218cu);
L_272218c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 2) & 0x1u;
    return;
}
void f_2722198(Cpu *restrict c) {
    FN_ENTER(0x2722198u);
L_2722198:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = (c->r[0] >> 16); }
    c->r[0] = c->r[0] & 0xfu;
    return;
}
void f_27221ac(Cpu *restrict c) {
    FN_ENTER(0x27221acu);
L_27221ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_27221d8; }
    c->r[1] = (c->r[14] >> 20) & 0xfu;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 28);
    c->r[1] = 0x18u;
    goto L_27221ec;
L_27221d8:;
    c->r[1] = (c->r[14] >> 4) & 0xfu;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 12) & 0xfu;
    c->r[1] = 0x8u;
L_27221ec:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] & sh_lsr(c->r[0], c->r[1]);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2722204(Cpu *restrict c) {
    FN_ENTER(0x2722204u);
L_2722204:;
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722210(Cpu *restrict c) {
    FN_ENTER(0x2722210u);
L_2722210:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfffffffcu;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722224(Cpu *restrict c) {
    FN_ENTER(0x2722224u);
L_2722224:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfffffffbu;
    c->r[1] = c->r[2] | (c->r[1] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722238(Cpu *restrict c) {
    FN_ENTER(0x2722238u);
L_2722238:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffffe7u;
    c->r[1] = c->r[2] | (c->r[1] << 3);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_272224c(Cpu *restrict c) {
    FN_ENTER(0x272224cu);
L_272224c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfff87fffu;
    c->r[1] = c->r[2] | (c->r[1] << 15);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722260(Cpu *restrict c) {
    FN_ENTER(0x2722260u);
L_2722260:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
    return;
}
void f_272226c(Cpu *restrict c) {
    FN_ENTER(0x272226cu);
L_272226c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 2) & 0x1u;
    return;
}
void f_2722278(Cpu *restrict c) {
    FN_ENTER(0x2722278u);
L_2722278:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x3u;
    return;
}
void f_2722284(Cpu *restrict c) {
    FN_ENTER(0x2722284u);
L_2722284:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 15) & 0xfu;
    return;
}
void f_2722290(Cpu *restrict c) {
    FN_ENTER(0x2722290u);
L_2722290:;
    c->r[3] = 0x8888u;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x88880000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_27222b8(Cpu *restrict c) {
    FN_ENTER(0x27222b8u);
L_27222b8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[2] & 0xfffffffeu;
    if (COND_NE) { c->r[2] = c->r[2] | 0x1u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    return;
}
void f_27222d0(Cpu *restrict c) {
    FN_ENTER(0x27222d0u);
L_27222d0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfffffffdu;
    c->r[1] = c->r[2] | (c->r[1] << 1);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27222ec(Cpu *restrict c) {
    FN_ENTER(0x27222ecu);
L_27222ec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfffffffbu;
    c->r[1] = c->r[2] | (c->r[1] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722308(Cpu *restrict c) {
    FN_ENTER(0x2722308u);
L_2722308:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffffe0ffu;
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_272231c(Cpu *restrict c) {
    FN_ENTER(0x272231cu);
L_272231c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    return;
}
void f_2722328(Cpu *restrict c) {
    FN_ENTER(0x2722328u);
L_2722328:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0x1fu;
    return;
}
void f_2722334(Cpu *restrict c) {
    FN_ENTER(0x2722334u);
L_2722334:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 1) & 0x1u;
    return;
}
void f_2722340(Cpu *restrict c) {
    FN_ENTER(0x2722340u);
L_2722340:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 2) & 0x1u;
    return;
}
void f_272234c(Cpu *restrict c) {
    FN_ENTER(0x272234cu);
L_272234c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xfff07fffu;
    c->r[1] = c->r[2] | (c->r[1] << 15);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722360(Cpu *restrict c) {
    FN_ENTER(0x2722360u);
L_2722360:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 15) & 0x1fu;
    return;
}
void f_272236c(Cpu *restrict c) {
    FN_ENTER(0x272236cu);
L_272236c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xffff9fffu;
    c->r[1] = c->r[2] | (c->r[1] << 13);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722380(Cpu *restrict c) {
    FN_ENTER(0x2722380u);
L_2722380:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x3u;
    return;
}
void f_272238c(Cpu *restrict c) {
    FN_ENTER(0x272238cu);
L_272238c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xffefffffu;
    c->r[1] = c->r[2] | (c->r[1] << 20);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27223a8(Cpu *restrict c) {
    FN_ENTER(0x27223a8u);
L_27223a8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 20) & 0x1u;
    return;
}
void f_27223b4(Cpu *restrict c) {
    FN_ENTER(0x27223b4u);
L_27223b4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xff1fffffu;
    c->r[1] = c->r[2] | (c->r[1] << 21);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27223c8(Cpu *restrict c) {
    FN_ENTER(0x27223c8u);
L_27223c8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 21) & 0x7u;
    return;
}
void f_27223d4(Cpu *restrict c) {
    FN_ENTER(0x27223d4u);
L_27223d4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xfffffff7u;
    c->r[1] = c->r[2] | (c->r[1] << 3);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27223f0(Cpu *restrict c) {
    FN_ENTER(0x27223f0u);
L_27223f0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x1u;
    return;
}
void f_27223fc(Cpu *restrict c) {
    FN_ENTER(0x27223fcu);
L_27223fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = (c->r[0] >> 15) & 0x1fu;
    c->r[3] = (c->r[0] >> 8) & 0x1fu;
    (void)f_subs(c, c->r[12], c->r[3]);
    if (COND_HI) { c->r[3] = c->r[12]; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_HI) { goto L_27224a8; }
    c->r[3] = (c->r[3] << 2);
    c->r[0] = 0x2722428u + 0xcu;
    c->r[12] = 0x4u;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[0]; switch (c->pc) { case 0x2722478u: goto L_2722478; case 0x2722480u: goto L_2722480; case 0x272248cu: goto L_272248c; case 0x2722498u: goto L_2722498; case 0x27224a0u: goto L_27224a0; case 0x27224a8u: goto L_27224a8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2722478:;
    c->r[14] = 0x2u;
    goto L_27224a0;
L_2722480:;
    c->r[14] = 0x2u;
    c->r[12] = 0x2u;
    goto L_27224a0;
L_272248c:;
    c->r[12] = 0x2u;
    c->r[14] = 0x1u;
    goto L_27224a0;
L_2722498:;
    c->r[14] = 0x1u;
    c->r[12] = 0x1u;
L_27224a0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
L_27224a8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27224ac(Cpu *restrict c) {
    FN_ENTER(0x27224acu);
L_27224ac:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = c->r[2] & 0xffffffefu;
    c->r[1] = c->r[2] | (c->r[1] << 4);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_27224c8(Cpu *restrict c) {
    FN_ENTER(0x27224c8u);
L_27224c8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 4) & 0x1u;
    return;
}
void f_27224d4(Cpu *restrict c) {
    FN_ENTER(0x27224d4u);
L_27224d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x80u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_2722724; }
    c->r[14] = (c->r[1] << 1);
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[7] = 0x0u;
    if (COND_LS) { goto L_2722638; }
    c->r[8] = c->r[2];
    c->r[7] = 0x0u;
    c->r[8] = c->r[8] & 0xfffffffcu;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2722638; }
    c->r[4] = c->r[2] - 0x1u;
    c->r[5] = 0x8u;
    c->r[9] = c->r[13];
    c->r[11] = 0x1u;
    c->r[7] = 0x1u;
    { uint64_t r = (uint64_t)c->r[4] * c->r[5]; c->r[10] = (uint32_t)r; c->r[6] = (uint32_t)(r >> 32); }
    c->r[4] = c->r[14] | 0x1u;
    c->r[4] = c->r[9] + (c->r[4] << 2);
    c->r[5] = c->r[4] + c->r[10];
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[5] = c->r[9] + (c->r[14] << 2);
    if (COND_CS) { c->r[11] = 0x0u; }
    c->r[4] = c->r[5] + c->r[10];
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_CS) { c->r[7] = 0x0u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_2722638; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_2722638; }
    (void)f_subs(c, c->r[11], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_2722638; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_2722638; }
    c->v.d[18] = 0x1f0000001full; c->v.d[19] = 0x1f0000001full;
    c->v.d[16] = 0x3f8000003f800000ull; c->v.d[17] = 0x3f8000003f800000ull;
    c->r[6] = c->r[8];
    c->r[7] = c->r[3];
    { uint32_t t0 = (uint32_t)(-(int32_t)c->v.s[36]); uint32_t t1 = (uint32_t)(-(int32_t)c->v.s[37]); uint32_t t2 = (uint32_t)(-(int32_t)c->v.s[38]); uint32_t t3 = (uint32_t)(-(int32_t)c->v.s[39]); c->v.s[36] = t0; c->v.s[37] = t1; c->v.s[38] = t2; c->v.s[39] = t3; }
    { uint32_t ea = c->r[7]; c->v.s[40] = LD32(ea + 0u); c->v.s[44] = LD32(ea + 4u); c->v.s[41] = LD32(ea + 8u); c->v.s[45] = LD32(ea + 12u); c->v.s[42] = LD32(ea + 16u); c->v.s[46] = LD32(ea + 20u); c->v.s[43] = LD32(ea + 24u); c->v.s[47] = LD32(ea + 28u); c->r[7] = ea + 32u; }
    c->r[6] = f_subs(c, c->r[6], 0x4u);
    { uint32_t t0 = (nftz(c->v.f[40]) > nftz(c->v.f[32])) ? 0xFFFFFFFFu : 0u; uint32_t t1 = (nftz(c->v.f[41]) > nftz(c->v.f[33])) ? 0xFFFFFFFFu : 0u; uint32_t t2 = (nftz(c->v.f[42]) > nftz(c->v.f[34])) ? 0xFFFFFFFFu : 0u; uint32_t t3 = (nftz(c->v.f[43]) > nftz(c->v.f[35])) ? 0xFFFFFFFFu : 0u; c->v.s[52] = t0; c->v.s[53] = t1; c->v.s[54] = t2; c->v.s[55] = t3; }
    rt_udf(c, 0x27225a0u); /* neon 2misc f3f984e4 */
L_2722638:;
    c->v.s[0] = 0x0u;
    c->r[3] = c->r[3] + (c->r[7] << 3);
    c->r[4] = c->r[2] - c->r[7];
    c->r[7] = c->r[14] + (c->r[7] << 1);
    c->r[6] = c->r[13];
    c->v.s[2] = 0x3f800000u;
    c->r[7] = c->r[6] + (c->r[7] << 2);
L_2722654:;
    c->r[6] = c->r[3] + c->r[12];
    c->v.s[6] = c->v.s[0];
    c->v.s[4] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_272267c; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[6] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_LE) { c->v.s[6] = c->v.s[4]; }
L_272267c:;
    c->r[5] = c->r[7] + c->r[12];
    ST32(c->r[5], c->v.s[6]);
    c->v.s[6] = c->v.s[0];
    c->v.s[4] = LD32(c->r[6] + 4u);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_27226a8; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[6] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_LE) { c->v.s[6] = c->v.s[4]; }
L_27226a8:;
    c->r[12] = c->r[12] + 0x8u;
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    ST32(c->r[5] + 4u, c->v.s[6]);
    if (COND_NE) { goto L_2722654; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_2722724; }
    c->r[3] = c->r[13];
    c->v.s[0] = 0x3f700000u;
    c->v.s[2] = 0x41800000u;
    c->v.s[4] = 0x3f000000u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[3] = c->r[3] + (c->r[1] << 3);
    c->r[0] = c->r[0] + 0x4u;
    c->r[3] = c->r[3] + 0x4u;
L_27226e0:;
    c->v.s[8] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[3] - 4u);
    c->v.s[10] = c->v.s[4];
    c->r[3] = c->r[3] + 0x8u;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->v.f[8] = vminnm_f(c->v.f[8], c->v.f[0]);
    c->v.f[6] = vminnm_f(c->v.f[6], c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[8] = c->v.s[4];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[6] = vcvt_u32_f64((double)c->v.f[10]);
    c->v.s[8] = vcvt_u32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[6];
    c->r[7] = c->v.s[8];
    c->r[1] = c->r[7] | (c->r[1] << 4);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); c->r[0] = c->r[0] + 0x1u; }
    if (COND_NE) { goto L_27226e0; }
L_2722724:;
    c->r[13] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2722730(Cpu *restrict c) {
    FN_ENTER(0x2722730u);
L_2722730:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[2] = 0x0u;
    c->r[3] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x1u;
    return;
}
void f_2722750(Cpu *restrict c) {
    FN_ENTER(0x2722750u);
L_2722750:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[2] = 0x0u;
    c->r[3] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x1u;
    return;
}
void f_2722770(Cpu *restrict c) {
    FN_ENTER(0x2722770u);
L_2722770:;
    return;
}
void f_2722774(Cpu *restrict c) {
    FN_ENTER(0x2722774u);
L_2722774:;
    return;
}
void f_2722778(Cpu *restrict c) {
    FN_ENTER(0x2722778u);
L_2722778:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27227d8; }
    c->r[0] = c->r[6] + 0x10u;
    c->r[1] = c->r[13] + 0x8u;
    c->r[14] = 0x27227a4u; f_271d0bc(c);
    { uint32_t ea = c->r[6] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    c->r[1] = c->r[7] + (c->r[0] << 4);
    { uint32_t ea = c->r[1] + 0x530u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_27227d8:;
    c->r[0] = 0x14f8u;
    c->r[2] = c->r[3] & 0x1u;
    c->r[3] = c->r[13] + 0x8u;
    c->r[5] = c->r[6] + c->r[0];
    c->r[0] = c->r[6] + 0x10u;
    c->r[1] = c->r[5];
    c->r[14] = 0x27227f4u; f_271cfcc(c);
    { uint32_t ea = c->r[6] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + (c->r[0] << 4);
    { uint32_t ea = c->r[1] + 0x530u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x534u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[3] = c->r[3] + 0x0u + c->cf;
    { uint32_t ea = c->r[1] + 0x530u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x534u; ST32(ea, c->r[3]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1534u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2722848u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_adds(c, c->r[0], (c->r[2] << 4));
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[0] = c->r[5];
    c->r[3] = c->r[1] + 0x0u + c->cf;
    c->r[14] = 0x2722864u; f_2744574(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_272286c(Cpu *restrict c) {
    FN_ENTER(0x272286cu);
L_272286c:;
    __attribute__((musttail)) return f_2722778(c);
}
void f_2722870(Cpu *restrict c) {
    FN_ENTER(0x2722870u);
L_2722870:;
    __attribute__((musttail)) return f_2722874(c);
}
void f_2722874(Cpu *restrict c) {
    FN_ENTER(0x2722874u);
L_2722874:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[0];
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_27228cc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27228a8u + 0x8u;
    c->r[4] = 0x3u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27228c4u: goto L_27228c4; case 0x27228d4u: goto L_27228d4; case 0x27228f8u: goto L_27228f8; case 0x2722accu: goto L_2722acc; case 0x2722cd0u: goto L_2722cd0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27228c4:;
    c->r[4] = 0x0u;
    goto L_2722cd0;
L_27228cc:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_2722924;
L_27228d4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1534u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x27228ecu; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    goto L_272291c;
L_27228f8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1538u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2722910u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[0] = c->r[0] + c->r[1];
L_272291c:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2722924:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2722cd0; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = 0x3e8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x2722954u; f_283b30c(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x53a054u;
    c->r[11] = c->r[1];
    { uint32_t ea = 0x2722968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0]; c->r[14] = 0x272296cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x86a0u;
    c->r[7] = c->r[1];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[2] = f_adds(c, c->r[6], c->r[4]);
    c->r[4] = 0x2u;
    c->r[3] = c->r[7] + c->r[11] + c->cf;
    c->r[5] = f_adds(c, c->r[6], c->r[0]);
    c->r[0] = c->r[9] & c->r[8];
    c->r[11] = c->r[7] + 0x0u + c->cf;
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27229a8; }
    c->r[1] = f_subs(c, c->r[6], c->r[2]);
    c->r[1] = f_sbcs(c, c->r[7], c->r[3]);
    if (COND_GE) { goto L_2722cd0; }
L_27229a8:;
    c->r[1] = c->r[10] + 0x14u;
    (void)f_adds(c, c->r[0], 0x1u);
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x4f0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_2722b44; }
    c->r[0] = 0x539fe4u;
    { uint32_t ea = 0x27229d8u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x539fdcu;
    { uint32_t ea = 0x27229e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_27229e0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2722ccc; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2722a64; }
    c->r[0] = f_subs(c, c->r[2], c->r[6]);
    c->r[2] = 0x86a0u;
    c->r[12] = 0x3e8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[3] - c->r[7] - 1u + c->cf;
    c->r[3] = c->r[2];
    c->r[2] = f_subs(c, c->r[0], c->r[3]);
    c->r[2] = f_sbcs(c, c->r[1], 0x0u);
    c->r[2] = 0x0u;
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint64_t r = (uint64_t)c->r[0] * c->r[12]; c->r[0] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    if (COND_NE) { c->r[2] = c->r[1]; }
    { uint32_t r = c->r[2] * c->r[12] + c->r[3]; c->r[1] = r; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2722a58u; f_271c82c(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_2722a74; }
    goto L_2722c60;
L_2722a64:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    c->pc = c->r[1]; c->r[14] = 0x2722a74u; rt_dispatch(c);
L_2722a74:;
    c->r[0] = f_subs(c, c->r[5], c->r[6]);
    c->r[0] = f_sbcs(c, c->r[11], c->r[7]);
    if (COND_GE) { goto L_2722aa4; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2722aa4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2722a94u; f_27205a4(c);
    c->r[0] = 0x86a0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[5] = f_adds(c, c->r[6], c->r[0]);
    c->r[11] = c->r[7] + 0x0u + c->cf;
L_2722aa4:;
    { uint32_t ea = c->r[9] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0]; c->r[14] = 0x2722aacu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[0];
    c->r[7] = c->r[1];
    c->r[3] = c->r[8];
    c->r[0] = f_subs(c, c->r[6], c->r[2]);
    c->r[0] = f_sbcs(c, c->r[7], c->r[3]);
    if (COND_LT) { goto L_27229e0; }
    goto L_2722cd0;
L_2722acc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[10] + 0xcu;
    c->r[4] = 0x0u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[6] = c->r[0] + 0x4f0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2722af4u; f_271c82c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2722cd0; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_2722b3c; }
    { uint32_t r = c->r[9] | c->r[8]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_2722c58; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x2722b24u; f_271c82c(c);
    c->r[4] = 0x3u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { c->r[4] = 0x2u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x1u; }
    goto L_2722cd0;
L_2722b3c:;
    c->r[4] = 0x3u;
    goto L_2722cd0;
L_2722b44:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2722cd0; }
    c->r[0] = 0x539e50u;
    { uint32_t ea = 0x2722b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x539e48u;
    { uint32_t ea = 0x2722b74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_2722b74:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2722be0; }
    c->r[0] = f_subs(c, c->r[2], c->r[6]);
    c->r[2] = 0x86a0u;
    c->r[4] = 0x3e8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[3] - c->r[7] - 1u + c->cf;
    c->r[3] = c->r[2];
    c->r[2] = f_subs(c, c->r[0], c->r[3]);
    c->r[2] = f_sbcs(c, c->r[1], 0x0u);
    c->r[2] = 0x0u;
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint64_t r = (uint64_t)c->r[0] * c->r[4]; c->r[0] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    if (COND_NE) { c->r[2] = c->r[1]; }
    { uint32_t r = c->r[2] * c->r[4] + c->r[3]; c->r[1] = r; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2722bd4u; f_271c82c(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_2722bf0; }
    goto L_2722c60;
L_2722be0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    c->pc = c->r[1]; c->r[14] = 0x2722bf0u; rt_dispatch(c);
L_2722bf0:;
    c->r[0] = f_subs(c, c->r[5], c->r[6]);
    c->r[0] = f_sbcs(c, c->r[11], c->r[7]);
    if (COND_GE) { goto L_2722c20; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2722c20; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2722c10u; f_27205a4(c);
    c->r[0] = 0x86a0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[5] = f_adds(c, c->r[6], c->r[0]);
    c->r[11] = c->r[7] + 0x0u + c->cf;
L_2722c20:;
    { uint32_t ea = c->r[9] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0]; c->r[14] = 0x2722c28u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[1];
    c->r[4] = 0x1u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2722b74; }
    goto L_2722cd0;
L_2722c58:;
    c->r[4] = 0x2u;
    goto L_2722cd0;
L_2722c60:;
    c->r[4] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2722cd0; }
    c->r[0] = 0x539d3cu;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = 0x2722c80u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_2722c98;
L_2722c80:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2722c88u; f_27205a4(c);
    c->r[0] = 0x86a0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[6] = f_adds(c, c->r[4], c->r[0]);
    c->r[11] = c->r[5] + 0x0u + c->cf;
L_2722c98:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2722ccc; }
    { uint32_t ea = c->r[8] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0]; c->r[14] = 0x2722cb4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = f_subs(c, c->r[6], c->r[4]);
    c->r[0] = f_sbcs(c, c->r[11], c->r[5]);
    if (COND_GE) { goto L_2722c98; }
    goto L_2722c80;
L_2722ccc:;
    c->r[4] = 0x1u;
L_2722cd0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2722cf4(Cpu *restrict c) {
    FN_ENTER(0x2722cf4u);
L_2722cf4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14f8u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = 0x2722d10u; f_274450c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2722d18(Cpu *restrict c) {
    FN_ENTER(0x2722d18u);
L_2722d18:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_2722dfc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x2722d44u + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x2722d60u: goto L_2722d60; case 0x2722d88u: goto L_2722d88; case 0x2722dc0u: goto L_2722dc0; case 0x2722dfcu: goto L_2722dfc; case 0x2722e00u: goto L_2722e00; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2722d60:;
    c->r[0] = 0x1534u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2722d74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_adds(c, c->r[0], (c->r[2] << 4));
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    goto L_2722dac;
L_2722d88:;
    c->r[0] = 0x1538u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2722d9cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[2] = f_adds(c, c->r[2], c->r[0]);
L_2722dac:;
    c->r[0] = 0x14f8u;
    c->r[3] = c->r[1] + 0x0u + c->cf;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0x2722dbcu; f_274450c(c);
    goto L_2722dfc;
L_2722dc0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2722dfc; }
    c->r[0] = 0x14f8u;
    c->r[6] = c->r[4] + 0xcu;
    c->r[7] = 0x0u;
    c->r[5] = c->r[5] + c->r[0];
L_2722ddc:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x2722de8u; f_2744498(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_2722ddc; }
L_2722dfc:;
    c->r[0] = 0x1u;
L_2722e00:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2722e08(Cpu *restrict c) {
    FN_ENTER(0x2722e08u);
L_2722e08:;
    __attribute__((musttail)) return f_2722d18(c);
}
void f_2722e0c(Cpu *restrict c) {
    FN_ENTER(0x2722e0cu);
L_2722e0c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2722e20(Cpu *restrict c) {
    FN_ENTER(0x2722e20u);
L_2722e20:;
    c->r[2] = 0x2722e28u + 0x48u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[3] = 0x2722e38u + 0x48u;
    c->r[2] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[3]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    return;
}
void f_2722e90(Cpu *restrict c) {
    FN_ENTER(0x2722e90u);
L_2722e90:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_2722e98(Cpu *restrict c) {
    FN_ENTER(0x2722e98u);
L_2722e98:;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    return;
}
void f_2722ea0(Cpu *restrict c) {
    FN_ENTER(0x2722ea0u);
L_2722ea0:;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_2722ea8(Cpu *restrict c) {
    FN_ENTER(0x2722ea8u);
L_2722ea8:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_2722eb0(Cpu *restrict c) {
    FN_ENTER(0x2722eb0u);
L_2722eb0:;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
}
void f_2722eb8(Cpu *restrict c) {
    FN_ENTER(0x2722eb8u);
L_2722eb8:;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    return;
}
void f_2722ecc(Cpu *restrict c) {
    FN_ENTER(0x2722eccu);
L_2722ecc:;
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    return;
}
void f_2722edc(Cpu *restrict c) {
    FN_ENTER(0x2722edcu);
L_2722edc:;
    c->r[0] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    return;
}
void f_2722ee8(Cpu *restrict c) {
    FN_ENTER(0x2722ee8u);
L_2722ee8:;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    return;
}
void f_2722ef0(Cpu *restrict c) {
    FN_ENTER(0x2722ef0u);
L_2722ef0:;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    return;
}
void f_2722ef8(Cpu *restrict c) {
    FN_ENTER(0x2722ef8u);
L_2722ef8:;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    return;
}
void f_2722f00(Cpu *restrict c) {
    FN_ENTER(0x2722f00u);
L_2722f00:;
    c->r[12] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    return;
}
void f_2722f14(Cpu *restrict c) {
    FN_ENTER(0x2722f14u);
L_2722f14:;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_2722f1c(Cpu *restrict c) {
    FN_ENTER(0x2722f1cu);
L_2722f1c:;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_2722f24(Cpu *restrict c) {
    FN_ENTER(0x2722f24u);
L_2722f24:;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    return;
}
void f_2722f2c(Cpu *restrict c) {
    FN_ENTER(0x2722f2cu);
L_2722f2c:;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    return;
}
void f_2722f34(Cpu *restrict c) {
    FN_ENTER(0x2722f34u);
L_2722f34:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f3c(Cpu *restrict c) {
    FN_ENTER(0x2722f3cu);
L_2722f3c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f44(Cpu *restrict c) {
    FN_ENTER(0x2722f44u);
L_2722f44:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f4c(Cpu *restrict c) {
    FN_ENTER(0x2722f4cu);
L_2722f4c:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f54(Cpu *restrict c) {
    FN_ENTER(0x2722f54u);
L_2722f54:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f5c(Cpu *restrict c) {
    FN_ENTER(0x2722f5cu);
L_2722f5c:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f64(Cpu *restrict c) {
    FN_ENTER(0x2722f64u);
L_2722f64:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f6c(Cpu *restrict c) {
    FN_ENTER(0x2722f6cu);
L_2722f6c:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722f74(Cpu *restrict c) {
    FN_ENTER(0x2722f74u);
L_2722f74:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    return;
}
void f_2722f9c(Cpu *restrict c) {
    FN_ENTER(0x2722f9cu);
L_2722f9c:;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722fa4(Cpu *restrict c) {
    FN_ENTER(0x2722fa4u);
L_2722fa4:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722fac(Cpu *restrict c) {
    FN_ENTER(0x2722facu);
L_2722fac:;
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722fb4(Cpu *restrict c) {
    FN_ENTER(0x2722fb4u);
L_2722fb4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722fbc(Cpu *restrict c) {
    FN_ENTER(0x2722fbcu);
L_2722fbc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2722fc4(Cpu *restrict c) {
    FN_ENTER(0x2722fc4u);
L_2722fc4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = 0x80u;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[4] = 0x20u; }
    if (COND_EQ) { { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_2722ff4; }
L_2722fe8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2722ff4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_2723024; }
    c->r[1] = 0x539998u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x34u;
    { uint32_t ea = 0x2723014u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0xcu);
    if (COND_EQ) { c->r[4] = 0x4u; }
    goto L_2722fe8;
L_2723024:;
    c->r[4] = 0x200u;
    { uint32_t r = c->r[0] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2722fe8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27230a4; }
    c->r[2] = 0x16acu;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27230a4; }
    c->r[2] = 0x539940u;
    c->r[3] = 0x34u;
    c->r[14] = 0x5656u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x76160000u;
    { uint32_t ea = 0x272306cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2723090; }
    c->r[2] = 0x539928u;
    { uint32_t ea = 0x2723084u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xfu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27230d0; }
L_2723090:;
    c->r[2] = 0x1554u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_NE) { c->r[3] = 0x1u; }
L_27230a4:;
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] >> 8) & 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] + 0x4f0u;
    c->r[14] = 0x27230b8u; f_271c64c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xfeu); }
    if (COND_EQ) { goto L_2722fe8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_2722fe8;
L_27230d0:;
    c->r[2] = 0x5398ccu;
    c->r[3] = 0x34u;
    { uint32_t ea = 0x27230e0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_HI) { goto L_2723104; }
    c->r[2] = 0x5398b4u;
    { uint32_t ea = 0x27230f8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_CS) { goto L_272310c; }
L_2723104:;
    c->r[3] = 0x0u;
    goto L_27230a4;
L_272310c:;
    c->r[2] = 0x1550u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_EQ) { c->r[3] = 0x0u; }
    goto L_27230a4;
}
void f_2723138(Cpu *restrict c) {
    FN_ENTER(0x2723138u);
L_2723138:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_EQ) { goto L_27231f0; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[12] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27231f0; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[12] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27231d0; }
    c->r[2] = 0x16acu;
    { uint32_t ea = c->r[14] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27231d0; }
    c->r[2] = 0x53981cu;
    c->r[3] = 0x34u;
    { uint32_t ea = 0x2723190u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = 0x5656u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x76160000u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_27231bc; }
    c->r[4] = 0x5397fcu;
    { uint32_t ea = 0x27231b0u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[4]; c->r[3] = r; }
    { uint32_t ea = c->r[3] + 0xfu; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27231f8; }
L_27231bc:;
    c->r[3] = 0x1554u;
    { uint32_t ea = c->r[14] + c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_NE) { c->r[3] = 0x1u; }
L_27231d0:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[12] >> 8) & 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x4f0u;
    c->r[14] = 0x27231e4u; f_271c64c(c);
    c->r[1] = c->r[0];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
L_27231f0:;
    c->r[0] = c->r[1] | 0x100u;
    return;
L_27231f8:;
    c->r[3] = 0x5397a8u;
    { uint32_t ea = 0x2723204u + c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x34u;
    { uint32_t r = c->r[1] * c->r[3] + c->r[4]; c->r[4] = r; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_HI) { goto L_272322c; }
    c->r[4] = 0x53978cu;
    { uint32_t ea = 0x2723220u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[4]; c->r[3] = r; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x4u);
    if (COND_CS) { goto L_2723234; }
L_272322c:;
    c->r[3] = 0x0u;
    goto L_27231d0;
L_2723234:;
    c->r[3] = 0x1550u;
    { uint32_t ea = c->r[14] + c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_EQ) { c->r[3] = 0x0u; }
    goto L_27231d0;
}
void f_272325c(Cpu *restrict c) {
    FN_ENTER(0x272325cu);
L_272325c:;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2723264(Cpu *restrict c) {
    FN_ENTER(0x2723264u);
L_2723264:;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    return;
}
void f_272326c(Cpu *restrict c) {
    FN_ENTER(0x272326cu);
L_272326c:;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0xfffffff0u) | ((c->r[3] << 0) & 0xfu);
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xffffff01u;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] & 0xffffff0fu) | ((c->r[3] << 4) & 0xf0u);
    c->r[3] = 0xf0f1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[2]); }
    c->r[12] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xf00u;
    c->r[2] = c->r[2] & (c->r[3] << 4);
    c->r[3] = 0xff1u;
    c->r[2] = c->r[12] | c->r[2];
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[2] & c->r[3];
    c->r[3] = 0xf000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[3] & (c->r[1] << 4);
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[1]); }
    return;
}
void f_27232cc(Cpu *restrict c) {
    FN_ENTER(0x27232ccu);
L_27232cc:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    return;
}
void f_27232e4(Cpu *restrict c) {
    FN_ENTER(0x27232e4u);
L_27232e4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[2]); }
    return;
}
void f_27232fc(Cpu *restrict c) {
    FN_ENTER(0x27232fcu);
L_27232fc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[2]); }
    return;
}
void f_2723314(Cpu *restrict c) {
    FN_ENTER(0x2723314u);
L_2723314:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    return;
}
void f_2723328(Cpu *restrict c) {
    FN_ENTER(0x2723328u);
L_2723328:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[12] = c->r[12] | 0x8u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[12]); }
    c->r[12] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_2723348(Cpu *restrict c) {
    FN_ENTER(0x2723348u);
L_2723348:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
}
void f_272335c(Cpu *restrict c) {
    FN_ENTER(0x272335cu);
L_272335c:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    return;
}
void f_2723378(Cpu *restrict c) {
    FN_ENTER(0x2723378u);
L_2723378:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 1) & 0x1u;
    return;
}
void f_2723394(Cpu *restrict c) {
    FN_ENTER(0x2723394u);
L_2723394:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 2) & 0x1u;
    return;
}
void f_27233a8(Cpu *restrict c) {
    FN_ENTER(0x27233a8u);
L_27233a8:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 3) & 0x1u;
    return;
}
void f_27233d8(Cpu *restrict c) {
    FN_ENTER(0x27233d8u);
L_27233d8:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 4) & 0x1u;
    return;
}
void f_27233ec(Cpu *restrict c) {
    FN_ENTER(0x27233ecu);
L_27233ec:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x1u;
    return;
}
void f_2723400(Cpu *restrict c) {
    FN_ENTER(0x2723400u);
L_2723400:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    return;
}
void f_2723414(Cpu *restrict c) {
    FN_ENTER(0x2723414u);
L_2723414:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] ^ c->r[6];
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x3fu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[3] = 0x1u;
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2723468; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_2723574; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { c->r[3] = 0x1u; }
L_2723468:;
    { uint32_t r = c->r[6] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[2] = c->r[3] & c->r[0];
    if (COND_EQ) { goto L_27234b0; }
    { uint32_t r = c->r[3] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_27234b0; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_2723574; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { c->r[2] = 0x1u; }
L_27234b0:;
    { uint32_t r = c->r[6] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[2];
    if (COND_EQ) { goto L_27234dc; }
    { uint32_t r = c->r[2] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_27234dc; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[0] = 0x1u; }
L_27234dc:;
    { uint32_t r = c->r[6] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[2] = c->r[1] & c->r[0];
    if (COND_EQ) { goto L_2723518; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_2723518; }
    c->r[0] = c->r[4] + 0xcu;
    c->r[1] = c->r[5] + 0xcu;
    c->r[2] = 0x10u;
    c->r[14] = 0x272350cu; f_283afac(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0x1u; }
L_2723518:;
    { uint32_t r = c->r[6] & 0x10u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[7] = 0x1u; }
    c->r[1] = c->r[7] & c->r[2];
    if (COND_EQ) { goto L_2723544; }
    { uint32_t r = c->r[2] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_2723544; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { c->r[1] = 0x1u; }
L_2723544:;
    { uint32_t r = c->r[6] & 0x20u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] & c->r[1];
    if (COND_EQ) { goto L_2723574; }
    { uint32_t r = c->r[1] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_2723574; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[0] = 0x1u; }
L_2723574:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2723578(Cpu *restrict c) {
    FN_ENTER(0x2723578u);
L_2723578:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_EQ) { goto L_27235c0; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_27235c8; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    goto L_27235c4;
L_27235c0:;
    c->r[0] = 0x6u;
L_27235c4:;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_27235c8:;
    c->r[1] = 0x5393d0u;
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x34u;
    { uint32_t ea = 0x27235dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x15u; ST8(ea, c->r[1]); }
    c->r[14] = 0x27235f8u; f_271aac8(c);
    { uint32_t ea = c->r[4] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[2], 0xfu);
    if (COND_HI) { goto L_2723678; }
    c->r[2] = (c->r[2] << 2);
    c->r[6] = 0x2723618u + 0x10u;
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2u;
    c->pc = c->r[5] + c->r[6]; switch (c->pc) { case 0x2723668u: goto L_2723668; case 0x2723678u: goto L_2723678; case 0x2723688u: goto L_2723688; case 0x2723694u: goto L_2723694; case 0x27236a0u: goto L_27236a0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2723668:;
    c->r[0] = 0x1u;
    c->r[1] = 0x2u;
    c->r[2] = 0x2u;
    goto L_27236a0;
L_2723678:;
    c->r[2] = 0x1u;
    c->r[1] = 0x0u;
    c->r[0] = 0x1u;
    goto L_27236a0;
L_2723688:;
    c->r[2] = 0x4u;
    c->r[1] = c->r[3];
    goto L_27236a0;
L_2723694:;
    c->r[2] = 0x4u;
    c->r[1] = c->r[3];
    c->r[0] = 0x4u;
L_27236a0:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xfu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_NE) { goto L_27236f0; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] * c->r[1]; c->r[2] = r; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x18u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x16u; ST8(ea, c->r[0]); }
    goto L_2723738;
L_27236f0:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2723744; }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[1] * c->r[0]; c->r[2] = r; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x18u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x16u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_2723738:;
    { uint32_t ea = c->r[4] + 0x17u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_2723744:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[2] - 0x5u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_2723768; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = 0x27u;
    c->r[5] = 0x1u;
    { uint32_t r = c->r[5] & shc_lsr(c, c->r[3], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[6] = 0x1u; }
L_2723768:;
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x15u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[12] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x27237a8u; f_270aae0(c);
    { uint32_t ea = c->r[4] + 0x16u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x17u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27237e4; }
    c->r[0] = (c->r[0] >> 4) & 0xfu;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x45u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 12);
    { uint32_t ea = c->r[4] + 0x3cu; ST8(ea, c->r[0]); }
    goto L_27237f0;
L_27237e4:;
    c->r[1] = c->r[4] + 0x3cu;
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x27237f0u; f_270abb8(c);
L_27237f0:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_EQ) { goto L_2723894; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[12] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2723894; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[12] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2723880; }
    c->r[2] = 0x16acu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2723880; }
    c->r[2] = 0x53916cu;
    c->r[3] = 0x34u;
    { uint32_t ea = 0x2723840u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = 0x5656u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x76160000u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_272386c; }
    c->r[6] = 0x53914cu;
    { uint32_t ea = 0x2723860u + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[3] + 0xfu; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2723910; }
L_272386c:;
    c->r[3] = 0x1554u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_NE) { c->r[3] = 0x1u; }
L_2723880:;
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = (c->r[12] >> 8) & 0x1u;
    c->r[0] = c->r[0] + 0x4f0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2723894u; f_271c64c(c);
L_2723894:;
    { uint32_t ea = c->r[4] + 0x18u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4] + 0x3cu;
    c->r[0] = c->r[13] + 0x24u;
    c->r[14] = 0x27238a4u; f_270b078(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_27238c0; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint64_t r = (uint64_t)c->r[2] * c->r[0]; c->r[0] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[3]; c->r[1] = r; }
L_27238c0:;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xfeu); }
    if (COND_EQ) { goto L_2723908; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = f_adds(c, c->r[2], c->r[0]);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[2] = f_subs(c, 0x0u, c->r[2]);
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] - 0x0u - 1u + c->cf;
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_2723908:;
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_2723910:;
    c->r[3] = 0x539090u;
    { uint32_t ea = 0x272391cu + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x34u;
    { uint32_t r = c->r[1] * c->r[3] + c->r[6]; c->r[6] = r; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_HI) { goto L_2723944; }
    c->r[6] = 0x539074u;
    { uint32_t ea = 0x2723938u + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x4u);
    if (COND_CS) { goto L_272394c; }
L_2723944:;
    c->r[3] = 0x0u;
    goto L_2723880;
L_272394c:;
    c->r[3] = 0x1550u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { c->r[3] = 0x0u; }
    goto L_2723880;
}
void f_2723978(Cpu *restrict c) {
    FN_ENTER(0x2723978u);
L_2723978:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x94u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[10] = c->r[2];
    c->r[1] = 0x34u;
    c->r[9] = c->r[3];
    c->r[0] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x538ff4u;
    { uint32_t ea = 0x27239b8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xfu; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27239e0; }
    c->r[2] = 0x538fd8u;
    { uint32_t ea = 0x27239d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2723b94; }
L_27239e0:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[6] = 0x2u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[8]); }
    c->r[14] = 0x2723a04u; f_2718d80(c);
    { uint32_t r = c->r[11] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2723a68; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] + 0x8cu;
    c->r[3] = c->r[4] + 0x10u;
    c->r[1] = c->r[10] + c->r[0];
    c->r[1] = c->r[1] - 0x1u;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + c->r[0];
    c->r[1] = c->r[1] - 0x1u;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[2] = c->r[8];
    c->r[3] = c->r[6];
    c->r[14] = 0x2723a64u; f_2753f5c(c);
    goto L_2723b70;
L_2723a68:;
    { uint32_t ea = c->r[5] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = ~0x0u;
    c->r[1] = c->r[5] + 0x8cu;
    c->r[3] = c->r[10] + c->r[0];
    (void)f_subs(c, c->r[12], 0x8u);
    c->r[3] = c->r[3] - 0x1u;
    c->r[3] = udiv32(c->r[3], c->r[0]);
    { uint32_t r = c->r[3] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[9] + c->r[0];
    c->r[3] = c->r[3] - 0x1u;
    c->r[3] = udiv32(c->r[3], c->r[0]);
    { uint32_t r = c->r[3] * c->r[0]; c->r[0] = r; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x48u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4au; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x38u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x60u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x64u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x65u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST8(ea, c->r[3]); }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1560u;
    c->r[3] = c->r[6];
    c->r[2] = c->r[5] + c->r[2];
    c->r[14] = 0x2723b44u; f_2752b6c(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
L_2723b70:;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[3] = c->r[5] + 0x9cu;
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x94u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2723b94:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x94u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2723ba8(Cpu *restrict c) {
    FN_ENTER(0x2723ba8u);
L_2723ba8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x8cu;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[12] = 0x0u;
    c->r[10] = 0x0u;
    c->r[11] = 0x0u;
    if (COND_EQ) { goto L_2723bfc; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[11] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[11] = v; } }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2723bf4; }
    c->r[10] = 0x0u;
    goto L_2723bfc;
L_2723bf4:;
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[10] = v; }
L_2723bfc:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x40u;
    (void)f_subs(c, c->r[11], 0x0u);
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x30u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_2723ca8; }
    c->r[1] = sh_lsr(c->r[0], c->r[11]);
    c->r[9] = 0x1u;
    c->r[6] = 0x0u;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { c->r[9] = sh_lsr(c->r[0], c->r[11]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x67u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_HI) { c->r[0] = c->r[11]; }
    c->r[1] = sh_lsr(c->r[7], c->r[0]);
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[1] = 0x1u;
    if (COND_HI) { c->r[1] = sh_lsr(c->r[7], c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x67u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_HI) { c->r[6] = c->r[11]; }
    c->r[7] = sh_lsr(c->r[0], c->r[6]);
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_HI) { c->r[3] = sh_lsr(c->r[0], c->r[6]); }
    goto L_2723cbc;
L_2723ca8:;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2723cbc:;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_2723ce8; }
    c->r[0] = c->r[5] + 0x2cu;
    goto L_2723cec;
L_2723ce8:;
    c->r[0] = c->r[2] + 0x8u;
L_2723cec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { goto L_2723d10; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_2723d28;
L_2723d10:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2723d34; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2723d28:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2723d34:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x5eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[9]; c->r[14] = r; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x5fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[12] = r; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[3] + 0x50u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[3]); }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_2723ddc; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_2723ddc; }
    c->r[2] = c->r[0] + c->r[9];
    c->r[2] = c->r[2] - 0x1u;
    c->r[0] = sdiv32(c->r[2], c->r[0]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[14] + c->r[0];
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = udiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[12] + c->r[0];
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = udiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_2723ddc:;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x65u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x66u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x58u;
    c->r[14] = 0x2723e2cu; f_270aae0(c);
    c->r[3] = c->r[5] + 0x8cu;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[14] = 0x2723e44u; f_270b184(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_adds(c, c->r[0], c->r[2]);
    c->r[1] = c->r[1] + c->r[3] + c->cf;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->v.d[16] = LD64(c->r[13] + 48u);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    ST64(c->r[4] + 44u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_2723eec; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_2723ed0; }
    c->r[14] = c->r[13] + 0x34u;
    c->r[12] = 0x1u;
    c->r[5] = 0xffffu;
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] + sh_lsl(c->r[12], c->r[3]);
    { uint32_t r = c->r[6] * c->r[14]; c->r[6] = r; }
    c->r[5] = c->r[5] & c->r[10];
    c->r[12] = sh_lsl(c->r[5], c->r[2]);
    c->r[5] = sh_lsr(c->r[10], c->r[3]);
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    c->r[3] = c->r[12] + sh_lsl(c->r[6], c->r[2]);
    c->r[2] = (c->r[3] >> 23);
    c->r[3] = (c->r[3] << 9);
    goto L_2723ee0;
L_2723ed0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint64_t r = (uint64_t)c->r[2] * c->r[10]; c->r[3] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    { uint32_t r = c->r[5] * c->r[10] + c->r[2]; c->r[2] = r; }
L_2723ee0:;
    c->r[0] = f_adds(c, c->r[0], c->r[3]);
    c->r[1] = c->r[1] + c->r[2] + c->cf;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_2723eec:;
    { uint32_t r = c->r[10] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_2723f08; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2723f04; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] - c->r[10];
L_2723f04:;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
L_2723f08:;
    c->r[13] = c->r[13] + 0x8cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2723f10(Cpu *restrict c) {
    FN_ENTER(0x2723f10u);
L_2723f10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2723f5c; }
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    c->r[14] = 0x2723f38u; f_2723578(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x34u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x538a5cu;
    { uint32_t ea = 0x2723f50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; } }
L_2723f5c:;
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2723f68(Cpu *restrict c) {
    FN_ENTER(0x2723f68u);
L_2723f68:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0xa0u;
    c->r[6] = c->r[1];
    c->r[1] = 0xa0u;
    c->r[4] = c->r[0];
    c->r[14] = 0x2723f80u; f_283ab44(c);
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2723fe4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    c->r[14] = 0x2723f98u; f_271a430(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x2723fb0u; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27243fc; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x9u);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_27243fc; }
    c->r[2] = 0x1u;
    c->r[0] = 0x3f2u;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_272411c; }
    c->r[0] = 0x2u;
    goto L_272412c;
L_2723fe4:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27243fc; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x34u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x538924u;
    { uint32_t ea = 0x2724088u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] * c->r[8] + c->r[7]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[2] = (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x48u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] | (c->r[1] << 1);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x48u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    c->r[14] = 0x27240bcu; f_2723578(c);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27243fc; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27240ec; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27243fc; }
L_27240ec:;
    { uint32_t r = c->r[1] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2724270; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_EQ) { goto L_2724270; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x2724110u; rt_dispatch(c);
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_27243f4; }
    goto L_27243fc;
L_272411c:;
    c->r[3] = 0x9u;
    c->r[0] = 0x1u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x3u; }
L_272412c:;
    { uint32_t ea = c->r[4] + 0x67u; ST8(ea, c->r[0]); }
    c->r[0] = 0x53886cu;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x2724140u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x64u;
    c->r[0] = 0x1u;
    goto L_2724150;
L_2724148:;
    c->r[1] = c->r[1] + 0x68u;
    c->r[0] = c->r[0] + 0x2u;
L_2724150:;
    { uint32_t ea = c->r[1] - 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_2724174; }
    (void)f_subs(c, c->r[0], 0xa1u);
    if (COND_GE) { goto L_2724188; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_2724148; }
    goto L_2724178;
L_2724174:;
    c->r[0] = c->r[0] - 0x1u;
L_2724178:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2724194; }
    goto L_27243fc;
L_2724188:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27243fc; }
L_2724194:;
    c->r[1] = 0x538808u;
    c->r[2] = 0x34u;
    { uint32_t ea = 0x27241a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x65u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[2] & 0xfffffffdu;
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[1] = c->r[2] | (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfeu;
    { uint32_t ea = c->r[0] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[4] + 0x48u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x66u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_27243fc; }
    c->r[1] = (c->r[1] << 2);
    c->r[3] = 0x2724230u + 0x10u;
    c->r[2] = 0x1u;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x2u;
    c->pc = c->r[6] + c->r[3]; switch (c->pc) { case 0x2724260u: goto L_2724260; case 0x2724288u: goto L_2724288; case 0x2724298u: goto L_2724298; case 0x27242a8u: goto L_27242a8; case 0x27242b4u: goto L_27242b4; case 0x27243fcu: goto L_27243fc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2724260:;
    c->r[1] = 0x1u;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    goto L_27242b4;
L_2724270:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x272427cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = f_adds(c, c->r[2], c->r[0]);
    goto L_27243f0;
L_2724288:;
    c->r[1] = 0x2u;
    c->r[0] = 0x4u;
    c->r[2] = 0x2u;
    goto L_27242b4;
L_2724298:;
    c->r[2] = 0x2u;
    c->r[1] = 0x4u;
    c->r[0] = 0x8u;
    goto L_27242b4;
L_27242a8:;
    c->r[1] = 0x4u;
    c->r[0] = 0x10u;
    c->r[2] = 0x4u;
L_27242b4:;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x34u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[4] + 0x34u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST8(ea, c->r[0]); }
    c->r[14] = 0x2724308u; f_271aac8(c);
    { uint32_t ea = c->r[4] + 0x5du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_2724324; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    goto L_2724334;
L_2724324:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint64_t r = (uint64_t)c->r[2] * c->r[0]; c->r[0] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[3]; c->r[1] = r; }
L_2724334:;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[14] = c->r[13] + 0x10u;
    c->r[5] = 0x0u;
    c->r[8] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_adds(c, c->r[0], c->r[2]);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[0] = f_adds(c, c->r[0], c->r[3]);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[12] = f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[14];
    c->r[7] = c->r[1] - 0x0u - 1u + c->cf;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = f_subs(c, 0x0u, c->r[2]);
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    c->r[3] = c->r[3] & c->r[6];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0x98u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); }
    c->r[2] = c->r[5] - 0x0u - 1u + c->cf;
    c->r[7] = c->r[7] & c->r[2];
    c->r[2] = c->r[12] & c->r[6];
    c->r[2] = f_subs(c, c->r[2], c->r[3]);
    c->r[3] = c->r[7] - 0x0u - 1u + c->cf;
    c->r[14] = 0x27243c8u; f_2852034(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27243fc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[3] - c->r[1] - 1u + c->cf;
    c->r[0] = f_adds(c, c->r[0], c->r[2]);
L_27243f0:;
    c->r[1] = c->r[1] + 0x0u + c->cf;
L_27243f4:;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_27243fc:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2724414(Cpu *restrict c) {
    FN_ENTER(0x2724414u);
L_2724414:;
    c->r[1] = 0x538580u;
    (void)f_subs(c, c->r[0], 0xa0u);
    c->r[2] = 0x34u;
    if (COND_GT) { c->r[0] = 0x0u; }
    { uint32_t ea = 0x272442cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724438(Cpu *restrict c) {
    FN_ENTER(0x2724438u);
L_2724438:;
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    __attribute__((musttail)) return f_2852040(c);
}
void f_2724448(Cpu *restrict c) {
    FN_ENTER(0x2724448u);
L_2724448:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[12];
    c->r[14] = 0x2724480u; f_2723978(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[1]; }
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2724494(Cpu *restrict c) {
    FN_ENTER(0x2724494u);
L_2724494:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[12];
    c->r[14] = 0x27244ccu; f_2723978(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[1]; }
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_27244e0(Cpu *restrict c) {
    FN_ENTER(0x27244e0u);
L_27244e0:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x100u;
    return;
}
void f_27244ec(Cpu *restrict c) {
    FN_ENTER(0x27244ecu);
L_27244ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[2] = c->r[1];
    c->r[1] = c->r[13];
    c->r[4] = c->r[0];
    c->r[14] = 0x2724504u; f_2723ba8(c);
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2724518(Cpu *restrict c) {
    FN_ENTER(0x2724518u);
L_2724518:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724520(Cpu *restrict c) {
    FN_ENTER(0x2724520u);
L_2724520:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724528(Cpu *restrict c) {
    FN_ENTER(0x2724528u);
L_2724528:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724530(Cpu *restrict c) {
    FN_ENTER(0x2724530u);
L_2724530:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724538(Cpu *restrict c) {
    FN_ENTER(0x2724538u);
L_2724538:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724540(Cpu *restrict c) {
    FN_ENTER(0x2724540u);
L_2724540:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724548(Cpu *restrict c) {
    FN_ENTER(0x2724548u);
L_2724548:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724550(Cpu *restrict c) {
    FN_ENTER(0x2724550u);
L_2724550:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724558(Cpu *restrict c) {
    FN_ENTER(0x2724558u);
L_2724558:;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    return;
}
void f_2724580(Cpu *restrict c) {
    FN_ENTER(0x2724580u);
L_2724580:;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724588(Cpu *restrict c) {
    FN_ENTER(0x2724588u);
L_2724588:;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724590(Cpu *restrict c) {
    FN_ENTER(0x2724590u);
L_2724590:;
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    return;
}
void f_2724598(Cpu *restrict c) {
    FN_ENTER(0x2724598u);
L_2724598:;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x1u;
    return;
}
void f_27245a4(Cpu *restrict c) {
    FN_ENTER(0x27245a4u);
L_27245a4:;
    return;
}
void f_27245a8(Cpu *restrict c) {
    FN_ENTER(0x27245a8u);
L_27245a8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[6] = c->r[3];
    c->r[7] = c->r[2];
    c->r[8] = c->r[13] + 0x8u;
    c->r[9] = c->r[1];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x27245e8u; f_2743a60(c);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[5] = v; } }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = (c->r[0] & 0xfff8ffffu) | ((c->r[5] << 16) & 0x70000u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[5] << 21);
    c->r[0] = c->r[0] | (c->r[5] << 13);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0xffffu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[7] = (c->r[1] >> 5) & 0x3u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & 0x8u;
    c->r[2] = (c->r[2] & 0xbfffffffu) | ((c->r[7] << 30) & 0x40000000u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[3] = (c->r[3] >> 21) & 0x7u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x2u); }
    if (COND_EQ) { goto L_2724668; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_272467c; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    c->r[3] = c->r[8] + 0x14u;
    c->r[1] = c->r[2] | (c->r[1] << 28);
    goto L_2724678;
L_2724668:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = c->r[2] & 0xfffffffeu;
    c->r[1] = c->r[2] | (c->r[1] >> 3);
L_2724678:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_272467c:;
    c->r[0] = c->r[0] & 0xfeffffffu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2724694u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 5); ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2724708; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[9] << 5);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x2724708u; rt_dispatch(c);
L_2724708:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2724710(Cpu *restrict c) {
    FN_ENTER(0x2724710u);
L_2724710:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[9] = c->r[1];
    c->r[6] = c->r[3];
    c->r[7] = c->r[2];
    c->r[8] = c->r[13] + 0x8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[7];
    c->r[14] = 0x2724750u; f_2743a60(c);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[5] = v; } }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = (c->r[0] & 0xfff8ffffu) | ((c->r[5] << 16) & 0x70000u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[5] << 21);
    c->r[0] = c->r[0] | (c->r[5] << 13);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0xffffu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[7] = (c->r[1] >> 5) & 0x3u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & 0x8u;
    c->r[2] = (c->r[2] & 0xbfffffffu) | ((c->r[7] << 30) & 0x40000000u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[3] = (c->r[3] >> 21) & 0x7u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x2u); }
    if (COND_EQ) { goto L_27247d0; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_27247e4; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    c->r[3] = c->r[8] + 0x14u;
    c->r[1] = c->r[2] | (c->r[1] << 28);
    goto L_27247e0;
L_27247d0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = c->r[2] & 0xfffffffeu;
    c->r[1] = c->r[2] | (c->r[1] >> 3);
L_27247e0:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_27247e4:;
    c->r[0] = c->r[0] | 0x1000000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x27247fcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 5); ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2724870; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[9] << 5);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x2724870u; rt_dispatch(c);
L_2724870:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2724878(Cpu *restrict c) {
    FN_ENTER(0x2724878u);
L_2724878:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724880(Cpu *restrict c) {
    FN_ENTER(0x2724880u);
L_2724880:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724888(Cpu *restrict c) {
    FN_ENTER(0x2724888u);
L_2724888:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724890(Cpu *restrict c) {
    FN_ENTER(0x2724890u);
L_2724890:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x58u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[1];
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_EQ) { goto L_27248b4; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27248c4; }
L_27248b4:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[8]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27248c4:;
    c->r[4] = 0x5380bcu;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x34u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    { uint32_t ea = 0x27248f0u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[3] * c->r[5] + c->r[4]; c->r[3] = r; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x9u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    c->r[0] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x2724910u; f_270aae0(c);
    c->r[2] = c->r[13] + 0x20u;
    c->r[1] = c->r[8];
    c->r[14] = 0x272491cu; f_270ad74(c);
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2724928(Cpu *restrict c) {
    FN_ENTER(0x2724928u);
L_2724928:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x58u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[1];
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_EQ) { goto L_272494c; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x50u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_272495c; }
L_272494c:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[8]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
L_272495c:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x65u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    c->r[4] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); }
    c->r[0] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x272499cu; f_270aae0(c);
    c->r[2] = c->r[13] + 0x20u;
    c->r[1] = c->r[8];
    c->r[14] = 0x27249a8u; f_270ad74(c);
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27249b0(Cpu *restrict c) {
    FN_ENTER(0x27249b0u);
L_27249b0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xc4u;
    c->r[10] = c->r[0];
    c->r[8] = c->r[3];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27249d8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; } }
L_27249d8:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x5cu; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x65u; uint32_t v = LD8(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[0] + c->r[5];
    if (COND_EQ) { goto L_2724a48; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    goto L_2724a64;
L_2724a48:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_2724a64:;
    { uint32_t ea = c->r[13] + 0xa0u; ST8(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2724a84u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = c->r[5];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CS) { goto L_2724bf0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[2] - 0x1u;
    c->r[1] = c->r[1] + c->r[6];
    c->r[4] = c->r[5] + c->r[11];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[14] = c->r[4] - 0x1u;
    c->r[1] = sdiv32(c->r[1], c->r[6]);
    c->r[6] = sdiv32(c->r[2], c->r[6]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[11] + c->r[5];
    c->r[4] = c->r[12] - 0x1u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[5] = r; }
    c->r[1] = sdiv32(c->r[14], c->r[11]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[6] * c->r[2] + c->r[5]; c->r[2] = r; }
    c->r[6] = sdiv32(c->r[4], c->r[11]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[6];
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x48u;
    c->r[0] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x78u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_2724b2c:;
    c->r[0] = c->r[3] + c->r[11];
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0xa4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x2724b44u; f_2723ba8(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] - 0x1u;
    c->r[2] = sdiv32(c->r[6], c->r[2]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { { uint32_t r = c->r[5] * c->r[6]; c->r[8] = r; } }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = (c->r[7] << 6);
    c->r[1] = c->r[1] + (c->r[7] << 6);
    c->r[1] = c->r[1] - 0x1u;
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t r = c->r[8] * c->r[1]; c->r[4] = r; } }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[4] * c->r[11] + c->r[1]; c->r[1] = r; }
    c->r[14] = 0x2724be0u; f_270c01c(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[11]);
    if (COND_NE) { goto L_2724b2c; }
L_2724bf0:;
    c->r[13] = c->r[13] + 0xc4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2724bf8(Cpu *restrict c) {
    FN_ENTER(0x2724bf8u);
L_2724bf8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    c->r[14] = 0x2724c10u; f_27249b0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2724c18(Cpu *restrict c) {
    FN_ENTER(0x2724c18u);
L_2724c18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xc4u;
    c->r[10] = c->r[0];
    c->r[8] = c->r[3];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2724c40; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; } }
L_2724c40:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x5cu; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x65u; uint32_t v = LD8(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[0] + c->r[5];
    if (COND_EQ) { goto L_2724cb0; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    goto L_2724ccc;
L_2724cb0:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_2724ccc:;
    { uint32_t ea = c->r[13] + 0xa0u; ST8(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2724cecu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = c->r[5];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CS) { goto L_2724e58; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[2] - 0x1u;
    c->r[1] = c->r[1] + c->r[6];
    c->r[4] = c->r[5] + c->r[11];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[14] = c->r[4] - 0x1u;
    c->r[1] = sdiv32(c->r[1], c->r[6]);
    c->r[6] = sdiv32(c->r[2], c->r[6]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[11] + c->r[5];
    c->r[4] = c->r[12] - 0x1u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[5] = r; }
    c->r[1] = sdiv32(c->r[14], c->r[11]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[6] * c->r[2] + c->r[5]; c->r[2] = r; }
    c->r[6] = sdiv32(c->r[4], c->r[11]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[6];
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x48u;
    c->r[0] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x78u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_2724d94:;
    c->r[0] = c->r[3] + c->r[11];
    c->r[1] = c->r[13] + 0x48u;
    c->r[2] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0xa4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x2724dacu; f_2723ba8(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] - 0x1u;
    c->r[2] = sdiv32(c->r[6], c->r[2]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { { uint32_t r = c->r[5] * c->r[6]; c->r[8] = r; } }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = (c->r[7] << 6);
    c->r[1] = c->r[1] + (c->r[7] << 6);
    c->r[1] = c->r[1] - 0x1u;
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t r = c->r[8] * c->r[1]; c->r[4] = r; } }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[4] * c->r[11] + c->r[1]; c->r[1] = r; }
    c->r[14] = 0x2724e48u; f_270b310(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[11]);
    if (COND_NE) { goto L_2724d94; }
L_2724e58:;
    c->r[13] = c->r[13] + 0xc4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2724e60(Cpu *restrict c) {
    FN_ENTER(0x2724e60u);
L_2724e60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    c->r[14] = 0x2724e78u; f_2724c18(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2724e80(Cpu *restrict c) {
    FN_ENTER(0x2724e80u);
L_2724e80:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_2724ea8; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; } }
    goto L_2724ec0;
L_2724ea8:;
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2724ec0; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[12];
L_2724ec0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[12] + c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[3];
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_2724ee4(Cpu *restrict c) {
    FN_ENTER(0x2724ee4u);
L_2724ee4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_2724f0c; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; } }
    goto L_2724f24;
L_2724f0c:;
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2724f24; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[12];
L_2724f24:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[12] + c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[3];
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_2724f48(Cpu *restrict c) {
    FN_ENTER(0x2724f48u);
L_2724f48:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724f50(Cpu *restrict c) {
    FN_ENTER(0x2724f50u);
L_2724f50:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724f58(Cpu *restrict c) {
    FN_ENTER(0x2724f58u);
L_2724f58:;
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2724f60(Cpu *restrict c) {
    FN_ENTER(0x2724f60u);
L_2724f60:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    c->r[0] = c->r[6] + 0x34u;
    c->r[1] = c->r[5] + 0x34u;
    c->r[2] = 0x10u;
    c->r[14] = 0x2725030u; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2725078; }
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] ^ c->r[0];
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2725078; }
    c->r[0] = c->r[6] + 0x50u;
    c->r[1] = c->r[5] + 0x50u;
    c->r[2] = 0x40u;
    c->r[14] = 0x272506cu; f_283afac(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x1u; }
L_2725078:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2725080(Cpu *restrict c) {
    FN_ENTER(0x2725080u);
L_2725080:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    return;
}
void f_272508c(Cpu *restrict c) {
    FN_ENTER(0x272508cu);
L_272508c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_2725094(Cpu *restrict c) {
    FN_ENTER(0x2725094u);
L_2725094:;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    return;
}
void f_27250a4(Cpu *restrict c) {
    FN_ENTER(0x27250a4u);
L_27250a4:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_27250ac(Cpu *restrict c) {
    FN_ENTER(0x27250acu);
L_27250ac:;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_27250b4(Cpu *restrict c) {
    FN_ENTER(0x27250b4u);
L_27250b4:;
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    return;
}
void f_27250c0(Cpu *restrict c) {
    FN_ENTER(0x27250c0u);
L_27250c0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    return;
}
void f_27250cc(Cpu *restrict c) {
    FN_ENTER(0x27250ccu);
L_27250cc:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_27250d4(Cpu *restrict c) {
    FN_ENTER(0x27250d4u);
L_27250d4:;
    c->r[1] = c->r[0];
    c->r[0] = c->r[2];
    __attribute__((musttail)) return f_27250e0(c);
}
void f_27250e0(Cpu *restrict c) {
    FN_ENTER(0x27250e0u);
L_27250e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[1] = c->r[13];
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x2725104u; f_2723ba8(c);
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[4] + 0x48u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x38u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x28u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[6]); }
    c->r[0] = 0x2120u;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    (void)f_subs(c, c->r[2], 0x6cu);
    if (COND_GT) { goto L_272527c; }
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x3bu);
    if (COND_HI) { goto L_27252c4; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x2725178u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x272526cu: goto L_272526c; case 0x2725290u: goto L_2725290; case 0x27252a8u: goto L_27252a8; case 0x27252b8u: goto L_27252b8; case 0x27252c4u: goto L_27252c4; case 0x27252ccu: goto L_27252cc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272526c:;
    c->r[0] = 0x408u;
    c->r[1] = 0xau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x9200000u;
    goto L_27252cc;
L_272527c:;
    (void)f_subs(c, c->r[2], 0x9cu);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x9au); }
    if (COND_EQ) { goto L_272529c; }
    (void)f_subs(c, c->r[2], 0x6du);
    if (COND_NE) { goto L_27252c4; }
L_2725290:;
    c->r[0] = f_adds(c, c->r[0], 0xa000000u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    goto L_27252cc;
L_272529c:;
    c->r[0] = f_adds(c, c->r[0], 0x7e0000u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    goto L_27252cc;
L_27252a8:;
    c->r[0] = 0x710u;
    c->r[1] = 0xau;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8440000u;
    goto L_27252cc;
L_27252b8:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_27252cc;
L_27252c4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_27252cc:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_272530c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2725324; }
    c->r[0] = 0x3u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfeu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[14] = 0x2725308u; f_285042c(c);
    goto L_2725324;
L_272530c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_2725324:;
    c->r[0] = c->r[4];
    c->r[14] = 0x272532cu; f_284c91c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2725344u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2725358(Cpu *restrict c) {
    FN_ENTER(0x2725358u);
L_2725358:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x70u;
    c->r[9] = c->r[1];
    c->r[1] = 0x110u;
    c->r[4] = c->r[0];
    c->r[14] = 0x2725370u; f_283ab44(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CS) { c->r[1] = 0x4u; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_2725578; }
    c->r[2] = 0x153cu;
    c->r[7] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x2120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x530000u;
    (void)f_subs(c, c->r[6], 0x6cu);
    if (COND_GT) { goto L_27254f8; }
    c->r[6] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[6], 0x3bu);
    if (COND_HI) { goto L_2725540; }
    c->r[6] = (c->r[6] << 2);
    c->r[5] = 0x27253f4u + 0x4u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->pc = c->r[6] + c->r[5]; switch (c->pc) { case 0x27254e8u: goto L_27254e8; case 0x272550cu: goto L_272550c; case 0x2725524u: goto L_2725524; case 0x2725534u: goto L_2725534; case 0x2725540u: goto L_2725540; case 0x2725548u: goto L_2725548; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27254e8:;
    c->r[2] = 0x408u;
    c->r[3] = 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9200000u;
    goto L_2725548;
L_27254f8:;
    (void)f_subs(c, c->r[6], 0x9cu);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x9au); }
    if (COND_EQ) { goto L_2725518; }
    (void)f_subs(c, c->r[6], 0x6du);
    if (COND_NE) { goto L_2725540; }
L_272550c:;
    c->r[2] = f_adds(c, c->r[2], 0xa000000u);
    c->r[3] = c->r[3] + 0x0u + c->cf;
    goto L_2725548;
L_2725518:;
    c->r[2] = f_adds(c, c->r[2], 0x7e0000u);
    c->r[3] = c->r[3] + 0x0u + c->cf;
    goto L_2725548;
L_2725524:;
    c->r[2] = 0x710u;
    c->r[3] = 0xau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8440000u;
    goto L_2725548;
L_2725534:;
    c->r[2] = 0x1210u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa880000u;
    goto L_2725548;
L_2725540:;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
L_2725548:;
    c->r[6] = 0x1544u;
    c->r[5] = c->r[4] + 0x28u;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x272556cu; f_285204c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2725648; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
L_2725578:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_27255a8; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_27255a8; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x27255a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
L_27255a8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2725624; }
    c->r[6] = 0x0u;
    c->r[5] = 0x9cu;
    c->r[8] = c->r[13] + 0x18u;
L_27255c0:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0x90u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x27255e0u; f_2722730(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2725610; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0x2725600u; f_27250e0(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x2725610u; rt_dispatch(c);
L_2725610:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x1cu;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_27255c0; }
L_2725624:;
    c->r[0] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
L_2725648:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2725654(Cpu *restrict c) {
    FN_ENTER(0x2725654u);
L_2725654:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_272568c; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x2725688u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[4]); }
L_272568c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2725690(Cpu *restrict c) {
    FN_ENTER(0x2725690u);
L_2725690:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_27256d8; }
    c->r[5] = c->r[4] + 0x9cu;
    c->r[6] = c->r[4] + 0x8u;
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
L_27256b4:;
    { uint32_t ea = c->r[6] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x27256c4u; f_2722770(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[5] = c->r[5] + 0x1cu;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_27256b4; }
L_27256d8:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27256ec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x27256ecu; rt_dispatch(c);
L_27256ec:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_2850774(c);
}
void f_27256f8(Cpu *restrict c) {
    FN_ENTER(0x27256f8u);
L_27256f8:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2725700(Cpu *restrict c) {
    FN_ENTER(0x2725700u);
L_2725700:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_2725708(Cpu *restrict c) {
    FN_ENTER(0x2725708u);
L_2725708:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[12], 0x0u); }
    if (COND_NE) { goto L_2725744; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x0u;
    goto L_272574c;
L_2725744:;
    c->r[14] = c->r[0] + 0x8cu;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
L_272574c:;
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[12] + c->r[2];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x2725774u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_272577c(Cpu *restrict c) {
    FN_ENTER(0x272577cu);
L_272577c:;
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_27257a0(Cpu *restrict c) {
    FN_ENTER(0x27257a0u);
L_27257a0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    c->r[9] = c->r[1];
    c->r[8] = c->r[2];
    c->r[3] = c->r[11] - 0x28u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[5] + 0x70u;
    { uint32_t ea = c->r[5] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x84u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x60u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x50u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7]; c->r[14] = 0x2725804u; rt_dispatch(c);
    c->r[10] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_272599c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_272586c; }
    c->r[6] = c->r[5] + 0x8u;
    c->r[4] = 0x0u;
L_2725824:;
    { uint32_t ea = c->r[6] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2725838u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2725854; }
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_2725868; }
L_2725854:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_2725824; }
    goto L_272586c;
L_2725868:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_272586c:;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_27258a0; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2725890; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    goto L_272599c;
L_2725890:;
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = sdiv32(c->r[1], c->r[0]);
    c->r[4] = c->r[1] - c->r[2] * c->r[0];
L_27258a0:;
    c->r[0] = (c->r[4] << 3) - c->r[4];
    c->r[2] = ~0x0u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x9cu;
    c->r[14] = 0x27258bcu; f_2722874(c);
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27258d8; }
    c->r[1] = ~0x0u;
    c->r[14] = 0x27258d0u; f_285081c(c);
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27258d8u; f_2850774(c);
L_27258d8:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] - 0x20u;
    { uint32_t ea = c->r[5] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[13] = c->r[10];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2725964; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2725904u; f_28508a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272596c; }
    c->r[1] = c->r[11] - 0x24u;
    c->r[0] = c->r[4];
    c->r[14] = 0x2725918u; f_2850960(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    c->r[1] = c->r[0];
    if (COND_GE) { c->r[1] = 0x4u; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_272596c; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[10];
L_272593c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x272594cu; f_285096c(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_LT) { goto L_272593c; }
    goto L_272596c;
L_2725964:;
    c->r[1] = 0x0u;
    goto L_272596c;
L_272596c:;
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[9] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_LT) { goto L_272598c; }
    c->r[2] = (c->r[1] << 3);
    c->r[0] = c->r[9] + 0xcu;
    c->r[1] = c->r[10];
    c->r[14] = 0x272598cu; f_283ac04(c);
L_272598c:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[13] = v; }
L_272599c:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27259a8(Cpu *restrict c) {
    FN_ENTER(0x27259a8u);
L_27259a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[6] = c->r[1];
    c->r[7] = c->r[13];
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27259ccu; f_2722750(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27259dcu; f_27257a0(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_27259f4; }
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0x27259f4u; f_2722e08(c);
L_27259f4:;
    c->r[0] = c->r[13];
    c->r[14] = 0x27259fcu; f_2722774(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2725a08(Cpu *restrict c) {
    FN_ENTER(0x2725a08u);
L_2725a08:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2725a54; }
    c->r[1] = c->r[13];
    c->r[2] = 0x0u;
    c->r[14] = 0x2725a38u; f_2723ba8(c);
    c->r[14] = 0x2725a3cu; f_2850678(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2725a54; }
    c->r[0] = 0x14f8u;
    c->r[1] = c->r[13];
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0x2725a54u; f_2741684(c);
L_2725a54:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4] + 0x9cu;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[7] = 0x0u;
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[1] = c->r[6] + (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0x2725a78u; f_2722778(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x2725a80u; f_2720144(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[0] = c->r[6] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x14u;
    c->r[14] = 0x2725a98u; f_285048c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x2725aa8u; rt_dispatch(c);
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[4] + 0x70u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[4] + 0x30u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2725af4(Cpu *restrict c) {
    FN_ENTER(0x2725af4u);
L_2725af4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x9cu;
    c->r[4] = c->r[0];
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2725ef0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_2725ef0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x2725b28u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x2725b48u: goto L_2725b48; case 0x2725c28u: goto L_2725c28; case 0x2725c70u: goto L_2725c70; case 0x2725cacu: goto L_2725cac; case 0x2725e04u: goto L_2725e04; case 0x2725e5cu: goto L_2725e5c; case 0x2725ea4u: goto L_2725ea4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2725b48:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1534u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x2725b6cu; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[9] = 0x0u;
    c->r[1] = c->r[7] + 0x2cu;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[9]); }
    c->r[1] = 0x600e9cu;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x2725b98u + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x536e1cu;
    { uint32_t ea = 0x2725ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x100u;
    c->pc = c->r[1]; c->r[14] = 0x2725ba8u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2725ec8; }
    c->r[0] = 0x1538u;
    c->r[6] = c->r[5];
    c->r[1] = c->r[5];
    c->r[2] = 0x12u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[7]); c->r[6] = ea; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x2725bd8u; f_271af04(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[5]; c->r[14] = 0x2725bf4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2725ef0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2725c04u; f_271ad84(c);
    c->r[1] = 0x536da8u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2725c14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2725c18u; rt_dispatch(c);
    c->r[0] = 0x0u;
    c->r[9] = 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    goto L_2725ef0;
L_2725c28:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x600df4u;
    { uint32_t ea = 0x2725c40u + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x1538u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2725ef0; }
    c->r[14] = 0x2725c50u; f_271ad84(c);
    c->r[1] = 0x536d5cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2725c60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2725c64u; rt_dispatch(c);
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[9]); }
    goto L_2725ef0;
L_2725c70:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_2725efc; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x2725c8cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2725ca0u: goto L_2725ca0; case 0x2725ed0u: goto L_2725ed0; case 0x2725ed8u: goto L_2725ed8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2725ca0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    goto L_2725edc;
L_2725cac:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[8] = v; c->r[9] = v2; }
    c->r[0] = c->r[8];
    c->r[2] = c->r[9];
    c->r[14] = 0x2725cc4u; f_2723ba8(c);
    c->v.d[16] = LD64(c->r[13] + 108u);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    ST64(c->r[13] + 24u, c->v.d[16]);
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8] + 0x5fu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[8] + 0x5eu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[14] = c->r[0] + 0x14u;
    c->r[6] = c->r[0] + 0x10u;
    c->r[5] = c->r[0] + 0xcu;
    { uint32_t r = c->r[3] * c->r[1]; c->r[1] = r; }
    c->r[3] = 0x1u;
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; } }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[12] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[14] = 0x2725d28u; f_27548d8(c);
    { uint32_t ea = c->r[8] + 0x78u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = 0x0u;
    c->r[5] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = c->r[13] + 0x24u;
    c->r[10] = c->r[3] - c->r[1] - 1u + c->cf;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[0] = (c->r[0] << 9);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x2725d7cu; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = c->r[7] + 0x2f4u;
    { uint32_t ea = c->r[7] + 0x2f0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[9]); }
    c->r[0] = f_adds(c, c->r[5], c->r[11]);
    { uint32_t ea = c->r[7] + 0x304u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10] + 0x0u + c->cf;
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x300u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[13] + 56u);
    { uint32_t ea = c->r[0]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[0]; c->v.d[20] = LD64(ea + 0u); c->v.d[21] = LD64(ea + 8u); }
    c->r[0] = c->r[7] + 0x2d0u;
    ST64(c->r[7] + 736u, c->v.d[16]);
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[0] = c->r[7] + 0x2c0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[20]); ST64(ea + 8u, c->v.d[21]); }
    goto L_2725ef0;
L_2725e04:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 31);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[8]); ST32(ea + 4, c->r[9]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x2725e3cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = c->r[6] + 0x24u;
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    goto L_2725ef0;
L_2725e5c:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_2725e84; }
    c->r[3] = 0x1u;
    c->r[7] = 0x19u;
    c->r[9] = 0x2u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2725ef0; }
L_2725e84:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    c->r[2] = (c->r[2] << 4);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    goto L_2725ef0;
L_2725ea4:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    goto L_2725eec;
L_2725ec8:;
    c->r[9] = 0x2u;
    goto L_2725ef0;
L_2725ed0:;
    c->r[1] = c->r[0] + 0x4u;
    goto L_2725edc;
L_2725ed8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2725edc:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
L_2725eec:;
    c->r[9] = 0x0u;
L_2725ef0:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    c->r[13] = c->r[13] + 0x9cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2725efc:;
    c->r[9] = 0x2u;
    goto L_2725ef0;
}
void f_2725f18(Cpu *restrict c) {
    FN_ENTER(0x2725f18u);
L_2725f18:;
    c->r[1] = 0x600b10u;
    { uint32_t ea = 0x2725f24u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_2725f34(Cpu *restrict c) {
    FN_ENTER(0x2725f34u);
L_2725f34:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0xfeu);
    if (COND_EQ) { goto L_2725f60; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2725f68; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    goto L_2725fd0;
L_2725f60:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    goto L_2725fd0;
L_2725f68:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    c->r[1] = c->r[13] + 0xcu;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[2] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[3] = f_adds(c, c->r[5], c->r[2]);
    c->r[1] = c->r[12] + 0x0u + c->cf;
    c->r[3] = f_adds(c, c->r[3], c->r[6]);
    c->r[1] = c->r[1] + c->r[7] + c->cf;
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[7] = f_subs(c, 0x0u, c->r[2]);
    c->r[6] = c->r[12] - 0x0u - 1u + c->cf;
    c->r[2] = c->r[5] & c->r[7];
    c->r[3] = c->r[3] & c->r[7];
    c->r[3] = f_subs(c, c->r[3], c->r[2]);
    c->r[1] = c->r[1] & c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[14] = 0x2725fccu; f_2852058(c);
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
L_2725fd0:;
    c->r[0] = f_adds(c, c->r[0], c->r[5]);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2725fe0(Cpu *restrict c) {
    FN_ENTER(0x2725fe0u);
L_2725fe0:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; } }
    return;
}
void f_2725ff8(Cpu *restrict c) {
    FN_ENTER(0x2725ff8u);
L_2725ff8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x54u;
    c->r[9] = c->r[0];
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[7] = c->r[13] + 0x20u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[14] + 0x80u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[7] = ea + 16u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[5] = (c->r[11] >> 5) & 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST8(ea, c->r[5]); }
    c->r[5] = f_adds(c, c->r[4], c->r[10]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    c->r[7] = c->r[12] + 0x0u + c->cf;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[7] = c->r[7] - 0x0u - 1u + c->cf;
    c->r[4] = f_subs(c, 0x0u, c->r[4]);
    c->r[6] = c->r[0] - 0x0u - 1u + c->cf;
    c->r[5] = c->r[5] & c->r[4];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    c->r[7] = c->r[7] & c->r[6];
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_27260d4; }
    c->r[1] = 0x1668u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->r[8] = c->r[5];
    c->r[4] = c->r[14] + c->r[1];
    c->r[1] = 0x1680u;
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_272619c; }
    c->r[14] = f_adds(c, c->r[10], c->r[2]);
    c->r[7] = c->r[12] + c->r[3] + c->cf;
L_2726094:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = f_subs(c, c->r[2], c->r[10]);
    c->r[6] = f_sbcs(c, c->r[3], c->r[1]);
    if (COND_CC) { goto L_27260c4; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[6] = f_adds(c, c->r[6], c->r[10]);
    c->r[1] = c->r[11] + c->r[1] + c->cf;
    c->r[6] = f_subs(c, c->r[6], c->r[14]);
    c->r[1] = f_sbcs(c, c->r[1], c->r[7]);
    if (COND_CS) { goto L_2726194; }
L_27260c4:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_2726094; }
    goto L_2726198;
L_27260d4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_272616c; }
    { uint32_t r = c->r[11] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_272616c; }
    c->r[4] = c->r[7];
    c->r[7] = 0x0u;
    c->r[8] = c->r[6];
    c->r[6] = 0x1650u;
    c->r[2] = c->r[13] + 0x18u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[14] = 0x272611cu; f_271b2b0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27261e0; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[2] = f_adds(c, c->r[1], c->r[2]);
    c->r[3] = c->r[7] + c->r[3] + c->cf;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[8];
    goto L_27261b8;
L_272616c:;
    { uint32_t ea = c->r[9] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5];
    c->r[3] = c->r[7];
    c->r[14] = 0x2726190u; f_2852034(c);
    goto L_27261c4;
L_2726194:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2726198:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[6] = v; }
L_272619c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
L_27261b8:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    c->r[14] = 0x27261c4u; f_2852064(c);
L_27261c4:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27261e0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_27261e0:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x54u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27261ec(Cpu *restrict c) {
    FN_ENTER(0x27261ecu);
L_27261ec:;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x53683cu;
    { uint32_t ea = 0x2726218u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    return;
}
void f_2726254(Cpu *restrict c) {
    FN_ENTER(0x2726254u);
L_2726254:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[5] = c->r[0];
    c->r[0] = 0x1660u;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = c->r[6] + 0x18u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27262cc; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27262d4; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2726400; }
    c->r[14] = 0x27262a4u; f_2852070(c);
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
L_27262cc:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27263fc; }
L_27262d4:;
    c->r[0] = 0xfffu;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2726400; }
    c->r[9] = c->r[5];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_2726400; }
    c->r[3] = c->r[0];
    c->r[3] = c->r[3] & 0xfffu;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_2726400; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[10] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2726330; }
    { uint32_t ea = c->r[2] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x2726328u; f_283b30c(c);
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_2726400; }
L_2726330:;
    c->r[8] = c->r[13];
    c->r[7] = 0x0u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[0] = c->r[8] + 0x13u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[7]); }
    c->r[11] = c->r[8];
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); c->r[0] = c->r[0] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[8] + 0xfu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); c->r[0] = c->r[0] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[11] = ea + 16u; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[7]); }
    c->r[14] = 0x2726384u; f_284c934(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x20000u;
    c->r[2] = c->r[5] + 0x50u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] >> 1) & 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27263c8u; f_284c940(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2726400; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0x27263f4u; rt_dispatch(c);
    c->r[7] = c->r[0];
    goto L_2726400;
L_27263fc:;
    c->r[7] = 0x0u;
L_2726400:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_272640c(Cpu *restrict c) {
    FN_ENTER(0x272640cu);
L_272640c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[3];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; ST8(ea, c->r[2]); }
    if (COND_EQ) { goto L_2726434; }
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); }
    goto L_272644c;
L_2726434:;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
L_272644c:;
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27264cc; }
    c->r[0] = c->r[4] + 0x20u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2726470u; f_2725ff8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27264f8; }
    c->r[0] = c->r[4] + 0x30u;
    c->r[1] = 0xfeu;
    c->r[2] = c->r[6];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2726494u; f_2725ff8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27264f8; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27264cc; }
    c->r[0] = c->r[4] + 0x40u;
    c->r[1] = 0xdbu;
    c->r[2] = c->r[8];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x27264c4u; f_2725ff8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27264f8; }
L_27264cc:;
    c->r[1] = c->r[4];
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27264f8; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[3] = 0x3u;
    c->r[14] = 0x27264f8u; f_28503b4(c);
L_27264f8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2726504(Cpu *restrict c) {
    FN_ENTER(0x2726504u);
L_2726504:;
    c->r[0] = 0x0u;
    return;
}
void f_272650c(Cpu *restrict c) {
    FN_ENTER(0x272650cu);
L_272650c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x536534u;
    { uint32_t ea = 0x2726520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726538; }
    c->r[14] = 0x2726538u; f_2852040(c);
L_2726538:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726548; }
    c->r[14] = 0x2726548u; f_2852040(c);
L_2726548:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726558; }
    c->r[14] = 0x2726558u; f_2852040(c);
L_2726558:;
    { uint32_t r = c->r[6] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_27265e0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x1668u;
    c->r[1] = c->r[12] + c->r[0];
    c->r[0] = 0x1680u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27265cc; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = f_adds(c, c->r[0], c->r[6]);
    c->r[0] = c->r[5] + c->r[7] + c->cf;
L_2726594:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = f_subs(c, c->r[6], c->r[8]);
    c->r[3] = f_sbcs(c, c->r[7], c->r[5]);
    if (COND_CC) { goto L_27265c0; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[10] = v; c->r[11] = v2; }
    c->r[3] = f_adds(c, c->r[10], c->r[8]);
    c->r[5] = c->r[11] + c->r[5] + c->cf;
    c->r[3] = f_subs(c, c->r[3], c->r[14]);
    c->r[3] = f_sbcs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_2726610; }
L_27265c0:;
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_2726594; }
L_27265cc:;
    c->r[0] = 0x1650u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[6] - c->r[1];
    c->r[14] = 0x27265e0u; f_271b5b0(c);
L_27265e0:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_27265f8; }
    c->r[14] = 0x27265f8u; f_285039c(c);
L_27265f8:;
    c->r[0] = 0x536420u;
    { uint32_t ea = 0x2726604u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_2726610:;
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27265e0; }
    goto L_27265cc;
}
void f_2726628(Cpu *restrict c) {
    FN_ENTER(0x2726628u);
L_2726628:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x2726630u; f_272650c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2753d14(c);
}
void f_2726638(Cpu *restrict c) {
    FN_ENTER(0x2726638u);
L_2726638:;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x5363f0u;
    { uint32_t ea = 0x2726668u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x3cu; ST8(ea, c->r[1]); }
    return;
}
void f_2726688(Cpu *restrict c) {
    FN_ENTER(0x2726688u);
L_2726688:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[8] = c->r[13] + 0x10u;
    c->r[6] = c->r[1];
    c->r[10] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27266c0; }
L_27266b4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27266c0:;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_27266b4; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x27266e8u; f_283b30c(c);
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_27266b4; }
    { uint32_t ea = c->r[7] + 0x4f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27266f8u; f_2851f80(c);
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x200u;
    (void)f_subs(c, c->r[1], 0x200u);
    if (COND_HI) { goto L_2726718; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2726714u; f_2851f80(c);
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2726718:;
    { uint32_t ea = c->r[10] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x30u; ST32(ea, c->r[0]); }
    c->r[14] = 0x272672cu; f_271aac8(c);
    { uint32_t ea = c->r[10] + 0x34u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1660u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27267c8; }
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { goto L_27267c8; }
    c->r[0] = 0x1668u;
    c->r[7] = 0x1680u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_27267bc; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = (uint32_t)((int32_t)c->r[7] >> 31);
    c->r[12] = f_adds(c, c->r[7], c->r[1]);
    c->r[4] = c->r[4] + c->r[2] + c->cf;
L_2726780:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = f_subs(c, c->r[1], c->r[8]);
    c->r[6] = f_sbcs(c, c->r[2], c->r[7]);
    if (COND_CC) { goto L_27267b0; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[6] = f_adds(c, c->r[6], c->r[8]);
    c->r[7] = c->r[11] + c->r[7] + c->cf;
    c->r[6] = f_subs(c, c->r[6], c->r[12]);
    c->r[7] = f_sbcs(c, c->r[7], c->r[4]);
    if (COND_CS) { goto L_2726830; }
L_27267b0:;
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_2726780; }
L_27267bc:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[10] + 0x20u; ST32(ea, c->r[5]); }
    goto L_27266b4;
L_27267c8:;
    c->r[1] = 0x1u;
    c->r[6] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[10] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    c->r[2] = sh_lsr(c->r[2], c->r[0]);
    c->r[7] = 0x20u - c->r[0];
    c->r[0] = c->r[0] - 0x20u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] | sh_lsl(c->r[3], c->r[7]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[2] = sh_lsr(c->r[3], c->r[0]); }
    c->r[0] = c->r[1];
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 31);
    c->r[14] = 0x2726814u; f_2851ef0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27266b4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2726824:;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    goto L_27266b4;
L_2726830:;
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27266b4; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x3cu; ST8(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[14] = 0x2726850u; f_285207c(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    goto L_2726824;
}
void f_2726858(Cpu *restrict c) {
    FN_ENTER(0x2726858u);
L_2726858:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[0] = 0x5361e8u;
    { uint32_t ea = 0x2726870u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272692c; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[2] = c->r[13] + 0x10u;
    c->r[12] = 0x0u;
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] - 0x20u;
    c->r[6] = sh_lsr(c->r[7], c->r[3]);
    c->r[14] = 0x20u - c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[6] = 0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[6] = sh_lsr(c->r[8], c->r[3]);
    c->r[5] = c->r[6] | sh_lsl(c->r[7], c->r[14]);
    if (COND_GE) { c->r[5] = sh_lsr(c->r[7], c->r[1]); }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[5] = sh_lsr(c->r[5], c->r[3]);
    c->r[7] = c->r[5] | sh_lsl(c->r[6], c->r[14]);
    if (COND_GE) { c->r[7] = sh_lsr(c->r[6], c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = sh_lsl(c->r[1], c->r[3]);
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[14] = 0x2726918u; f_2852088(c);
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272692c; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x272692cu; f_2851ee4(c);
L_272692c:;
    c->r[0] = 0x5360ecu;
    { uint32_t ea = 0x2726938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2726950(Cpu *restrict c) {
    FN_ENTER(0x2726950u);
L_2726950:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[0] = 0x5360f0u;
    { uint32_t ea = 0x2726968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726a24; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[2] = c->r[13] + 0x10u;
    c->r[12] = 0x0u;
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] - 0x20u;
    c->r[6] = sh_lsr(c->r[7], c->r[3]);
    c->r[14] = 0x20u - c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[6] = 0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[6] = sh_lsr(c->r[8], c->r[3]);
    c->r[5] = c->r[6] | sh_lsl(c->r[7], c->r[14]);
    if (COND_GE) { c->r[5] = sh_lsr(c->r[7], c->r[1]); }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[5] = sh_lsr(c->r[5], c->r[3]);
    c->r[7] = c->r[5] | sh_lsl(c->r[6], c->r[14]);
    if (COND_GE) { c->r[7] = sh_lsr(c->r[6], c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = sh_lsl(c->r[1], c->r[3]);
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[14] = 0x2726a10u; f_2852088(c);
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726a24; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2726a24u; f_2851ee4(c);
L_2726a24:;
    c->r[0] = c->r[4];
    c->r[14] = 0x2726a2cu; f_2753d14(c);
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2726a38(Cpu *restrict c) {
    FN_ENTER(0x2726a38u);
L_2726a38:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x34u;
    c->r[6] = c->r[0];
    c->r[8] = c->r[1];
    c->r[9] = c->r[2];
    c->r[7] = 0x0u;
    c->r[0] = c->r[6] + 0x28u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
L_2726a64:;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_GE) { goto L_2726c8c; }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] - c->r[7];
    c->r[4] = c->r[13];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->r[1] = c->r[0] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] - (c->r[1] << 3);
    c->r[1] = (c->r[1] << 3);
    c->r[13] = c->r[0];
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[14] = 0x2726a9cu; f_283ab44(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726c44; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = 0x0u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[9]); }
L_2726ac0:;
    { uint32_t ea = c->r[9] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726ba8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2726ad8u; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[2] = c->r[9] + c->r[5];
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[5]; ST32(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] & 0xfffffeffu;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[0] - 0x20u;
    c->r[4] = sh_asr(c->r[7], c->r[0]);
    c->r[6] = sh_lsr(c->r[6], c->r[0]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { c->r[4] = (uint32_t)((int32_t)c->r[7] >> 31); }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[4]); }
    c->r[4] = 0x20u - c->r[0];
    c->r[6] = c->r[6] | sh_lsl(c->r[7], c->r[4]);
    if (COND_GE) { c->r[6] = sh_asr(c->r[7], c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = f_adds(c, c->r[7], c->r[14]);
    c->r[6] = c->r[6] + c->r[12] + c->cf;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[7] = sh_lsr(c->r[6], c->r[0]);
    if (COND_GE) { c->r[7] = 0x0u; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[7] = sh_lsr(c->r[14], c->r[0]);
    c->r[7] = c->r[7] | sh_lsl(c->r[6], c->r[4]);
    if (COND_GE) { c->r[7] = sh_lsr(c->r[6], c->r[3]); }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = sh_lsr(c->r[7], c->r[0]);
    c->r[7] = c->r[7] | sh_lsl(c->r[2], c->r[4]);
    if (COND_GE) { c->r[7] = sh_lsr(c->r[2], c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[8] = c->r[9];
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[9] + c->r[5]; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x20u; ST8(ea, c->r[2]); } }
    goto L_2726c18;
L_2726ba8:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9] + c->r[5];
    c->r[14] = c->r[8] + c->r[5];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = f_adds(c, c->r[0], c->r[4]);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[2] + c->r[3] + c->cf;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] - 0x20u;
    c->r[12] = sh_lsr(c->r[7], c->r[0]);
    c->r[7] = 0x20u - c->r[0];
    c->r[3] = sh_lsr(c->r[4], c->r[0]);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[12] | sh_lsl(c->r[4], c->r[7]);
    if (COND_GE) { c->r[3] = 0x0u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { c->r[2] = sh_lsr(c->r[4], c->r[6]); }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = sh_lsr(c->r[2], c->r[0]);
    c->r[2] = c->r[2] | sh_lsl(c->r[1], c->r[7]);
    if (COND_GE) { c->r[2] = sh_lsr(c->r[1], c->r[6]); }
    { uint32_t ea = c->r[14] + 0x8u; ST32(ea, c->r[2]); }
L_2726c18:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[5] = c->r[5] + 0x28u;
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_CC) { goto L_2726ac0; }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = c->r[9] + c->r[5];
    goto L_2726c48;
L_2726c44:;
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2726c48:;
    c->r[1] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[11] - 0x24u;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2726c74u; f_2852088(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[7] + c->r[1]; }
    c->r[13] = c->r[4];
    if (COND_EQ) { goto L_2726a64; }
    goto L_2726c90;
L_2726c8c:;
    c->r[5] = 0x1u;
L_2726c90:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2726c9c(Cpu *restrict c) {
    FN_ENTER(0x2726c9cu);
L_2726c9c:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = f_adds(c, c->r[1], c->r[0]);
    c->r[1] = c->r[3] + 0x0u + c->cf;
    return;
}
void f_2726cb4(Cpu *restrict c) {
    FN_ENTER(0x2726cb4u);
L_2726cb4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0x10u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_2726d18; }
    c->r[1] = 0x535ce0u;
    c->r[6] = c->r[4] + 0x30u;
    { uint32_t ea = 0x2726cdcu + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
L_2726cd8:;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_2726d18; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[8] = v; c->r[9] = v2; }
    (void)f_subs(c, c->r[0], c->r[6]);
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_2726d00; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2726d00u; rt_dispatch(c);
L_2726d00:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[5]);
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    if (COND_NE) { goto L_2726cd8; }
L_2726d18:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2726d24(Cpu *restrict c) {
    FN_ENTER(0x2726d24u);
L_2726d24:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[3];
    c->r[4] = c->r[2];
    c->r[9] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x58u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    c->r[0] = f_adds(c, c->r[11], c->r[6]);
    c->r[2] = c->r[6];
    c->r[1] = c->r[8] + 0x0u + c->cf;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[1] = c->r[1] - 0x0u - 1u + c->cf;
    c->r[14] = 0x2726d80u; f_283b30c(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1650u;
    c->r[5] = c->r[10];
    c->r[2] = c->r[4];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x2726da4u; f_271ba3c(c);
    c->r[1] = c->r[13] + 0x48u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2726e38; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x2726dccu; f_271ba88(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2726f88; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726ee8; }
    c->r[0] = 0x535bb8u;
    { uint32_t ea = 0x2726e04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x20u;
    c->pc = c->r[1]; c->r[14] = 0x2726e0cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726f88; }
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[6] = ea + 16u; }
    c->r[1] = c->r[0];
    c->v.d[18] = LD64(c->r[6]);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    ST64(c->r[1], c->v.d[18]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1cu;
    goto L_2726f08;
L_2726e38:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] + 0x14u;
    c->r[3] = c->r[13] + 0x18u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[13] + 0x28u;
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[10] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[14] = 0x2726e90u; f_2851ef0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2726f88; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726f38; }
    c->r[0] = 0x535b08u;
    { uint32_t ea = 0x2726eb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x20u;
    c->pc = c->r[1]; c->r[14] = 0x2726ebcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726f84; }
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[5] = ea + 16u; }
    c->r[1] = c->r[0];
    c->v.d[18] = LD64(c->r[5]);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    ST64(c->r[1], c->v.d[18]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1cu;
    goto L_2726f58;
L_2726ee8:;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[6] = ea + 16u; }
    c->r[0] = c->r[4] + 0x30u;
    c->r[1] = 0x0u;
    c->v.d[18] = LD64(c->r[6]);
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    ST64(c->r[4] + 64u, c->v.d[18]);
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x4cu;
L_2726f08:;
    c->r[3] = 0x0u;
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_2726f88;
L_2726f38:;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[5] = ea + 16u; }
    c->r[0] = c->r[4] + 0x30u;
    c->r[1] = 0x0u;
    c->v.d[18] = LD64(c->r[5]);
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    ST64(c->r[4] + 64u, c->v.d[18]);
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x4cu;
L_2726f58:;
    c->r[3] = 0x0u;
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_2726f84:;
    c->r[9] = 0x1u;
L_2726f88:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2726f9c(Cpu *restrict c) {
    FN_ENTER(0x2726f9cu);
L_2726f9c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[4] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_2727020; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2727000; }
    c->r[0] = 0x1650u;
    c->r[7] = c->r[1] + c->r[0];
L_2726fc4:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2726fe8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[14] = 0x2726fe4u; f_271b5b0(c);
    goto L_2726ff0;
L_2726fe8:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2726ff0u; f_2851ee4(c);
L_2726ff0:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_2726fc4; }
    goto L_2727020;
L_2727000:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2727014; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2727014u; f_2851ee4(c);
L_2727014:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_2727000; }
L_2727020:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_2727078; }
    c->r[1] = 0x535980u;
    c->r[6] = c->r[4] + 0x30u;
    { uint32_t ea = 0x272703cu + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
L_2727038:;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_2727078; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[8] = v; c->r[9] = v2; }
    (void)f_subs(c, c->r[0], c->r[6]);
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_2727060; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x2727060u; rt_dispatch(c);
L_2727060:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[5]);
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    if (COND_NE) { goto L_2727038; }
L_2727078:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2727080(Cpu *restrict c) {
    FN_ENTER(0x2727080u);
L_2727080:;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    return;
}
void f_272708c(Cpu *restrict c) {
    FN_ENTER(0x272708cu);
L_272708c:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    return;
}
void f_2727094(Cpu *restrict c) {
    FN_ENTER(0x2727094u);
L_2727094:;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    return;
}
void f_272709c(Cpu *restrict c) {
    FN_ENTER(0x272709cu);
L_272709c:;
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    return;
}
void f_27270a4(Cpu *restrict c) {
    FN_ENTER(0x27270a4u);
L_27270a4:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_27270ac(Cpu *restrict c) {
    FN_ENTER(0x27270acu);
L_27270ac:;
    c->r[0] = 0x0u;
    return;
}
void f_27270b4(Cpu *restrict c) {
    FN_ENTER(0x27270b4u);
L_27270b4:;
    c->r[0] = 0x0u;
    return;
}
void f_27270bc(Cpu *restrict c) {
    FN_ENTER(0x27270bcu);
L_27270bc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    return;
}
void f_27270c8(Cpu *restrict c) {
    FN_ENTER(0x27270c8u);
L_27270c8:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    return;
}
void f_27270d0(Cpu *restrict c) {
    FN_ENTER(0x27270d0u);
L_27270d0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    return;
}
void f_27270dc(Cpu *restrict c) {
    FN_ENTER(0x27270dcu);
L_27270dc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    return;
}
void f_27270e8(Cpu *restrict c) {
    FN_ENTER(0x27270e8u);
L_27270e8:;
    c->r[0] = 0x0u;
    return;
}
void f_27270f0(Cpu *restrict c) {
    FN_ENTER(0x27270f0u);
L_27270f0:;
    c->r[0] = 0x0u;
    return;
}
void f_2727100(Cpu *restrict c) {
    FN_ENTER(0x2727100u);
L_2727100:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27271fc; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[4] + 0x1u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[6] + (c->r[4] << 4); ST32(ea, c->r[5]); c->r[6] = ea; }
    c->r[5] = c->r[6] + 0x4u;
    if (COND_NE) { goto L_27271c0; }
    c->r[0] = 0x2727148u + 0x168u;
    c->r[9] = 0x14u;
    c->r[8] = 0x1u;
    c->r[10] = 0x0u;
    c->r[6] = c->r[2] + 0xcu;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[3] + (c->r[4] << 4);
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = 0x272718cu + 0x134u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x1cu;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[3] + 0x2cu;
    goto L_27271f4;
L_27271c0:;
    c->r[0] = 0x27271c8u + 0xd8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[3] + (c->r[4] << 4);
    c->r[3] = 0x14u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    c->r[0] = c->r[0] + 0x2cu;
L_27271f4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27271fc:;
    c->r[12] = c->r[2] + 0xcu;
    c->r[8] = 0x14u;
    c->r[14] = 0x3u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = 0x272721cu + 0xb4u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[6] + (c->r[6] << 1);
    c->r[4] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[5] = c->r[2] + 0xcu;
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[6] = 0x2727268u + 0x78u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    c->r[2] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
