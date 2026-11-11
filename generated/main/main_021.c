#include "cpu.h"
#include "neon_rt.h"
void f_25ceb4(Cpu *c);
void f_270824(Cpu *c);
void f_2710b0(Cpu *c);
void f_2712a4(Cpu *c);
void f_27e11c(Cpu *c);
void f_281a14(Cpu *c);
void f_2bad1c(Cpu *c);
void f_2c03b8(Cpu *c);
void f_367118(Cpu *c);
void f_367b5c(Cpu *c);
void f_367f64(Cpu *c);
void f_368198(Cpu *c);
void f_368280(Cpu *c);
void f_3682f8(Cpu *c);
void f_368370(Cpu *c);
void f_3683dc(Cpu *c);
void f_368448(Cpu *c);
void f_369328(Cpu *c);
void f_369350(Cpu *c);
void f_36938c(Cpu *c);
void f_3696fc(Cpu *c);
void f_369878(Cpu *c);
void f_369c3c(Cpu *c);
void f_369d04(Cpu *c);
void f_369d24(Cpu *c);
void f_369fa8(Cpu *c);
void f_36a1d8(Cpu *c);
void f_36abac(Cpu *c);
void f_36b15c(Cpu *c);
void f_36b8bc(Cpu *c);
void f_36b8e4(Cpu *c);
void f_36b948(Cpu *c);
void f_36b9c0(Cpu *c);
void f_36ba4c(Cpu *c);
void f_36bb38(Cpu *c);
void f_36c0c0(Cpu *c);
void f_36c9e8(Cpu *c);
void f_36cf28(Cpu *c);
void f_36d4d0(Cpu *c);
void f_36dddc(Cpu *c);
void f_36de70(Cpu *c);
void f_3706a8(Cpu *c);
void f_370738(Cpu *c);
void f_370758(Cpu *c);
void f_370968(Cpu *c);
void f_37260c(Cpu *c);
void f_375918(Cpu *c);
void f_375ff4(Cpu *c);
void f_378b00(Cpu *c);
void f_37bf28(Cpu *c);
void f_37c11c(Cpu *c);
void f_458ffc(Cpu *c);
void f_476748(Cpu *c);
void f_47c6f8(Cpu *c);
void f_4a67f4(Cpu *c);
void f_4ad1c8(Cpu *c);
void f_4f2abc(Cpu *c);
void f_4f63b0(Cpu *c);
void f_526c78(Cpu *c);
void f_52a400(Cpu *c);
void f_5cafe8(Cpu *c);
void f_5cb008(Cpu *c);
void f_5f8634(Cpu *c);
void f_611420(Cpu *c);
void f_68c4f0(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3a0(Cpu *c);
void f_9af3c4(Cpu *c);
void f_a87660(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_a878e8(Cpu *c);
void f_1322598(Cpu *c);
void f_132863c(Cpu *c);
void f_1328684(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe30(Cpu *c);
void f_3694cc(Cpu *restrict c) {
    FN_ENTER(0x3694ccu);
L_3694cc:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x80u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4000000u;
    c->r[2] = c->r[0] & c->r[1];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_3694ec(Cpu *restrict c) {
    FN_ENTER(0x3694ecu);
L_3694ec:;
    c->v.s[2] = LD32(c->r[0] + 100u);
    c->v.s[0] = 0xc2c80000u;
    c->r[1] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_369514; }
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->r[1] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_36951c; }
L_369514:;
    c->r[0] = c->r[1];
    return;
L_36951c:;
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->r[0] = 0x2u;
    c->r[1] = 0x2u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    if (COND_HI) { c->r[0] = 0x3u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[1]; }
    return;
}
void f_369548(Cpu *restrict c) {
    FN_ENTER(0x369548u);
L_369548:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_36964c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36956cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x369580u: goto L_369580; case 0x3695acu: goto L_3695ac; case 0x3695c0u: goto L_3695c0; case 0x36960cu: goto L_36960c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_369580:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36964c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x369598u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36962c; }
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_369618;
L_3695ac:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 900u);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_3695c0:;
    { uint32_t ea = c->r[4] + 0x6eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_369650; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36964c; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36964c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x3695f4u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36962c; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_369664; }
    goto L_3696b0;
L_36960c:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13c4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
L_369618:;
    { uint32_t ea = c->r[4] + 0x32u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_369634; }
    c->r[1] = 0x328u;
    goto L_369638;
L_36962c:;
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_369634:;
    c->r[1] = 0x320u;
L_369638:;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x42c80000u;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
L_36964c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_369650:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36964c; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3696b0; }
L_369664:;
    c->r[1] = 0x13c4u;
    c->r[2] = 0x320u;
    c->v.s[2] = 0x42c80000u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->v.s[0] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x328u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->v.s[4] = c->r[0];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_3696b0:;
    c->r[0] = 0x13c4u;
    c->r[1] = 0x328u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_369638;
}
void f_3696c4(Cpu *restrict c) {
    FN_ENTER(0x3696c4u);
L_3696c4:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[12] = c->r[12] | 0x100u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[12]); }
    c->r[12] = c->r[0] + 0x74u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    return;
}
void f_3696e4(Cpu *restrict c) {
    FN_ENTER(0x3696e4u);
L_3696e4:;
    c->r[1] = c->r[0];
    c->r[0] = 0x16cf6a8u;
    { uint32_t ea = 0x3696f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_36b8bc(c);
}
void f_3696fc(Cpu *restrict c) {
    FN_ENTER(0x3696fcu);
L_3696fc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = 0x0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_369860; }
    c->r[1] = 0x16cf65cu;
    c->r[2] = 0x2830u;
    c->r[7] = 0x0u;
    c->r[9] = c->r[13] + 0x10u;
    { uint32_t ea = 0x369740u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x16cf648u;
    { uint32_t ea = 0x369754u + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x16cf640u;
    { uint32_t ea = 0x36975cu + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_369764;
L_36975c:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
L_369764:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_36978c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x369780u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
L_36978c:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CS) { goto L_36983c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36975c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x3697b0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[7]); }
    if (COND_LS) { goto L_36975c; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36975c; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_36980c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x370u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x3697f0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_369808; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    goto L_369834;
L_369808:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
L_36980c:;
    c->v.s[0] = LD32(c->r[4] + 20u);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0x369828u; f_36dddc(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
L_369834:;
    c->r[14] = 0x369838u; f_3706a8(c);
    goto L_36975c;
L_36983c:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_369860; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x369858u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; } }
L_369860:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_369878(Cpu *restrict c) {
    FN_ENTER(0x369878u);
L_369878:;
    c->r[2] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0x32u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_3698ac(Cpu *restrict c) {
    FN_ENTER(0x3698acu);
L_3698ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x16d10f4u;
    { uint32_t ea = 0x3698bcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3698c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[6]; c->r[14] = 0x3698d8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x16d10b4u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x3698f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d01e8u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x369930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d1060u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = 0x28u;
    { uint32_t ea = 0x369954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d01a4u;
    { uint32_t ea = 0x369964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[4] + 0x46u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[6]); }
    c->r[14] = 0x369974u; f_15efdac(c);
    c->r[0] = 0x16cf404u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[5];
    { uint32_t ea = 0x369998u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36999cu; f_370738(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3699bc(Cpu *restrict c) {
    FN_ENTER(0x3699bcu);
L_3699bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16d0fccu;
    c->r[6] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x3699d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d0100u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x369a18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d0f78u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = 0x28u;
    { uint32_t ea = 0x369a3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d00bcu;
    { uint32_t ea = 0x369a4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[4] + 0x46u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[6]); }
    c->r[14] = 0x369a5cu; f_15efdac(c);
    c->r[0] = 0x16cf31cu;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x36u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[5];
    { uint32_t ea = 0x369a80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x369a84u; f_370738(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_369aa0(Cpu *restrict c) {
    FN_ENTER(0x369aa0u);
L_369aa0:;
    return;
}
void f_369aa4(Cpu *restrict c) {
    FN_ENTER(0x369aa4u);
L_369aa4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16d0ef8u;
    { uint32_t ea = 0x369ab8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x369ab8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_369ad0(Cpu *restrict c) {
    FN_ENTER(0x369ad0u);
L_369ad0:;
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[0] + 48u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { return; }
    c->r[1] = 0x16cf290u;
    { uint32_t ea = 0x369af4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[1] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[0] + 48u, c->v.s[0]);
    return;
}
void f_369b08(Cpu *restrict c) {
    FN_ENTER(0x369b08u);
L_369b08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[3];
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x36u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_369bbc; }
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_HI) { goto L_369bb4; }
    c->r[0] = 0x1u;
    c->r[1] = 0x4fu;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[0], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_369bb4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x369b70u; rt_dispatch(c);
    c->r[1] = 0x16d001cu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x369b80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_369bac; }
    c->r[3] = 0xffu;
L_369b8c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_369bb4; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_369b8c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_369bb4; }
L_369bac:;
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
L_369bb4:;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
L_369bbc:;
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_HI) { goto L_369c1c; }
    c->r[1] = (c->r[2] << 2);
    c->r[2] = 0x369bd0u + 0x8u;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x369bf4u: goto L_369bf4; case 0x369bfcu: goto L_369bfc; case 0x369c04u: goto L_369c04; case 0x369c0cu: goto L_369c0c; case 0x369c14u: goto L_369c14; case 0x369c18u: goto L_369c18; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_369bf4:;
    c->r[0] = 0x8u;
    goto L_369c18;
L_369bfc:;
    c->r[0] = 0x1u;
    goto L_369c18;
L_369c04:;
    c->r[0] = 0x4u;
    goto L_369c18;
L_369c0c:;
    c->r[0] = 0x10u;
    goto L_369c18;
L_369c14:;
    c->r[0] = 0x20u;
L_369c18:;
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[0]); }
L_369c1c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_369c24(Cpu *restrict c) {
    FN_ENTER(0x369c24u);
L_369c24:;
    c->r[1] = c->r[0];
    c->r[0] = 0x16cf168u;
    { uint32_t ea = 0x369c34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_36b8e4(c);
}
void f_369c3c(Cpu *restrict c) {
    FN_ENTER(0x369c3cu);
L_369c3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_369cec; }
    c->r[0] = 0x16cf120u;
    c->r[1] = 0x201cu;
    c->r[8] = 0xffffu;
    { uint32_t ea = 0x369c7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_EQ) { goto L_369cec; }
    c->r[1] = 0x16cf0f8u;
    c->r[4] = 0x1u;
    c->r[9] = c->r[13] + 0x10u;
    { uint32_t ea = 0x369ca4u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x16cf0f0u;
    { uint32_t ea = 0x369cacu + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_369cb4;
L_369cac:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
L_369cb4:;
    c->v.s[0] = LD32(c->r[5] + 20u);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6];
    c->r[14] = 0x369cd0u; f_36b9c0(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[14] = 0x369ce0u; f_36b948(c);
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD16(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_369cac; }
L_369cec:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_369d04(Cpu *restrict c) {
    FN_ENTER(0x369d04u);
L_369d04:;
    c->r[2] = c->r[1];
    c->r[1] = 0x16cf088u;
    { uint32_t ea = 0x369d14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0] + 0x40u;
    c->r[0] = c->r[3];
    __attribute__((musttail)) return f_370758(c);
}
void f_369d24(Cpu *restrict c) {
    FN_ENTER(0x369d24u);
L_369d24:;
    c->r[2] = c->r[1];
    c->r[1] = 0x16cf068u;
    { uint32_t ea = 0x369d34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0] + 0x40u;
    c->r[0] = c->r[3];
    __attribute__((musttail)) return f_36ba4c(c);
}
void f_369d44(Cpu *restrict c) {
    FN_ENTER(0x369d44u);
L_369d44:;
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb4u; ST8(ea, c->r[2]); }
    return;
}
void f_369d50(Cpu *restrict c) {
    FN_ENTER(0x369d50u);
L_369d50:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_369d54(Cpu *restrict c) {
    FN_ENTER(0x369d54u);
L_369d54:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_369d58(Cpu *restrict c) {
    FN_ENTER(0x369d58u);
L_369d58:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_369d5c(Cpu *restrict c) {
    FN_ENTER(0x369d5cu);
L_369d5c:;
    c->r[0] = 0x16d0c38u;
    { uint32_t ea = 0x369d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_369d6c(Cpu *restrict c) {
    FN_ENTER(0x369d6cu);
L_369d6c:;
    return;
}
void f_369d70(Cpu *restrict c) {
    FN_ENTER(0x369d70u);
L_369d70:;
    c->r[0] = 0x16d0c2cu;
    { uint32_t ea = 0x369d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_369d80(Cpu *restrict c) {
    FN_ENTER(0x369d80u);
L_369d80:;
    c->r[0] = 0x16d0c24u;
    { uint32_t ea = 0x369d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_369d90(Cpu *restrict c) {
    FN_ENTER(0x369d90u);
L_369d90:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x16ed9d4u;
    c->r[5] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[4] = 0x369dbcu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[11] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
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
    c->r[14] = 0x369e18u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x369e30u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x369e48u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x16d0b20u;
    { uint32_t ea = 0x369e80u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x16cecdcu;
    { uint32_t ea = 0x369e88u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x13edbf7u;
    c->r[1] = 0x369e90u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x369e94u; f_9aedcc(c);
    c->r[0] = 0x16d0b00u;
    c->r[1] = 0x13edbd4u;
    c->r[2] = c->r[4];
    c->r[3] = 0xb8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x369eb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x369ebcu + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16d0adcu;
    { uint32_t ea = 0x369eccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x369eccu; f_9aedcc(c);
    c->r[1] = 0x16d0ad0u;
    c->r[2] = c->r[4];
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x369eecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16d0ab0u;
    c->r[1] = 0x13edb95u;
    { uint32_t ea = 0x369f00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x369f04u + c->r[1];
    c->r[14] = 0x369f04u; f_9aedcc(c);
    c->r[1] = 0x16d0ab0u;
    { uint32_t ea = 0x369f10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_369f48(Cpu *restrict c) {
    FN_ENTER(0x369f48u);
L_369f48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16cf6e8u;
    { uint32_t ea = 0x369f58u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x369f5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x369f74u; rt_dispatch(c);
    c->r[14] = 0x369f78u; f_5cafe8(c);
    c->r[1] = 0x16d0a40u;
    { uint32_t ea = 0x369f84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_369fa8(Cpu *restrict c) {
    FN_ENTER(0x369fa8u);
L_369fa8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16d0a08u;
    { uint32_t ea = 0x369fbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_36a064; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a040; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a030; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
L_369fec:;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a018; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; c->r[14] = 0x36a008u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
L_36a018:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_369fec; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a040; }
L_36a030:;
    c->r[14] = 0x36a034u; f_9af3c4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
L_36a040:;
    c->r[0] = 0x16cf954u;
    { uint32_t ea = 0x36a04cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36a04cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x36a05cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_36a064:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5cb008(c);
}
void f_36a078(Cpu *restrict c) {
    FN_ENTER(0x36a078u);
L_36a078:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x36a084u; f_369fa8(c);
    c->r[0] = 0x16cf5b0u;
    { uint32_t ea = 0x36a090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36a090u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_36a0a8(Cpu *restrict c) {
    FN_ENTER(0x36a0a8u);
L_36a0a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x36a0c4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x36a0d8u; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36a1c4; }
    c->r[0] = 0x16cf358u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x36a0f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x36a104u; rt_dispatch(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_36a1c4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x36a128u; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_36a198; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5448u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_36a198; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1015u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20130000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_36a198; }
    c->r[0] = 0x16cf838u;
    { uint32_t ea = 0x36a168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36a168u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x36a17cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_36a198; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x36a194u; f_15efe30(c);
    c->r[5] = 0x1u;
L_36a198:;
    c->r[0] = c->r[4];
    c->r[14] = 0x36a1a0u; f_36a1d8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x16cf29cu;
    { uint32_t ea = 0x36a1b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x36a1c0u; rt_dispatch(c);
    c->r[5] = c->r[5] & c->r[4];
L_36a1c4:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_36a1d8(Cpu *restrict c) {
    FN_ENTER(0x36a1d8u);
L_36a1d8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a3dc; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x4u;
    { uint64_t r = (uint64_t)c->r[10] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x36a210u; f_9af3a0(c);
    c->r[6] = c->r[0];
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_36a3e0; }
    c->r[0] = 0xcu;
    c->r[14] = 0x36a22cu; f_9af37c(c);
    c->r[1] = 0x16d0788u;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = 0x36a240u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_36a284; }
    c->r[0] = 0x16d0768u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x36a260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x8u;
L_36a260:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0xcu;
    c->r[14] = 0x36a26cu; f_9af37c(c);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_NE) { goto L_36a260; }
L_36a284:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_36a3e0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[7] = 0x0u;
    c->r[6] = c->r[0] + 0x10u;
L_36a29c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x4u;
    { uint64_t r = (uint64_t)c->r[11] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[0] = ~0x0u; }
    { uint32_t ea = c->r[1] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x36a2c4u; f_9af3a0(c);
    (void)f_subs(c, c->r[11], 0x0u);
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); } }
    if (COND_NE) { (void)f_subs(c, c->r[11], 0x1u); }
    if (COND_EQ) { goto L_36a36c; }
    c->r[1] = c->r[11] + 0x3u;
    c->r[0] = c->r[11] - 0x2u;
    { uint32_t r = c->r[1] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_36a30c; }
    c->r[2] = 0x0u - c->r[1];
    c->r[1] = 0x1u;
L_36a2f0:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] + c->r[1];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_36a2f0; }
    goto L_36a310;
L_36a30c:;
    c->r[1] = 0x1u;
L_36a310:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_36a36c; }
    c->r[0] = c->r[1] - c->r[11];
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x0u;
L_36a324:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] - (c->r[2] << 2); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[3] = c->r[3] - (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[3] = c->r[3] - (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[3] = c->r[3] - (c->r[2] << 2);
    c->r[2] = c->r[2] - 0x4u;
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[9]); }
    if (COND_NE) { goto L_36a324; }
L_36a36c:;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a3c4; }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
L_36a384:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_LS) { goto L_36a3b4; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + c->r[1];
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
L_36a3b4:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[0] = c->r[0] + 0x30u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_36a384; }
L_36a3c4:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_NE) { goto L_36a29c; }
    c->r[9] = 0x1u;
    goto L_36a3e0;
L_36a3dc:;
    c->r[9] = 0x0u;
L_36a3e0:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36a3f4(Cpu *restrict c) {
    FN_ENTER(0x36a3f4u);
L_36a3f4:;
    c->r[0] = 0x1u;
    return;
}
void f_36a3fc(Cpu *restrict c) {
    FN_ENTER(0x36a3fcu);
L_36a3fc:;
    return;
}
void f_36a400(Cpu *restrict c) {
    FN_ENTER(0x36a400u);
L_36a400:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_36a4ac; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a488; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a478; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
L_36a434:;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a460; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; c->r[14] = 0x36a450u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
L_36a460:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_36a434; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a488; }
L_36a478:;
    c->r[14] = 0x36a47cu; f_9af3c4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
L_36a488:;
    c->r[0] = 0x16cf50cu;
    { uint32_t ea = 0x36a494u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36a494u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x36a4a4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_36a4ac:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_36a4b4(Cpu *restrict c) {
    FN_ENTER(0x36a4b4u);
L_36a4b4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_36a4b8(Cpu *restrict c) {
    FN_ENTER(0x36a4b8u);
L_36a4b8:;
    c->r[0] = 0x16cf17cu;
    { uint32_t ea = 0x36a4c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_36a4c8(Cpu *restrict c) {
    FN_ENTER(0x36a4c8u);
L_36a4c8:;
    c->r[0] = 0x13ed5d8u;
    c->r[0] = 0x36a4d4u + c->r[0];
    return;
}
void f_36a4d8(Cpu *restrict c) {
    FN_ENTER(0x36a4d8u);
L_36a4d8:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_36a4e4(Cpu *restrict c) {
    FN_ENTER(0x36a4e4u);
L_36a4e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[5] = c->r[1];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[6] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a520; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x36a510u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LS) { goto L_36a520; }
    { uint32_t ea = c->r[6] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
L_36a520:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36a528(Cpu *restrict c) {
    FN_ENTER(0x36a528u);
L_36a528:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16d048cu;
    { uint32_t ea = 0x36a53cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a558; }
    c->r[14] = 0x36a550u; f_9af3c4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_36a558:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_36a564(Cpu *restrict c) {
    FN_ENTER(0x36a564u);
L_36a564:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16d0450u;
    { uint32_t ea = 0x36a578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a58c; }
    c->r[14] = 0x36a58cu; f_9af3c4(c);
L_36a58c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_36a59c(Cpu *restrict c) {
    FN_ENTER(0x36a59cu);
L_36a59c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x16ed220u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x36a5c8u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0x16cf38cu;
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
    c->r[0] = 0x16cf020u;
    { uint32_t ea = 0x36a614u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x13ed47fu;
    c->r[3] = 0x70u;
    { uint32_t ea = 0x36a620u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x36a624u + c->r[1];
    c->r[14] = 0x36a624u; f_9aedcc(c);
    c->r[1] = 0x16d039cu;
    { uint32_t ea = 0x36a630u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_36a650(Cpu *restrict c) {
    FN_ENTER(0x36a650u);
L_36a650:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x16d0370u;
    { uint32_t ea = 0x36a660u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36a664u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x2854u;
    c->pc = c->r[5]; c->r[14] = 0x36a67cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x36a684u; f_a87810(c);
    c->r[0] = 0x16d0340u;
    c->r[2] = 0x2030u;
    { uint32_t ea = 0x36a694u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
    c->r[1] = 0x16ce6f0u;
    c->r[2] = 0x202cu;
    { uint32_t ea = 0x36a6acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0x0u;
L_36a6b8:;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + c->r[2]; ST8(ea, c->r[1]); c->r[3] = ea; }
    c->r[2] = c->r[2] + 0x80u;
    (void)f_subs(c, c->r[2], 0x800u);
    { uint32_t ea = c->r[3] + 0x20u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x40u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x60u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_36a6b8; }
    c->r[0] = 0x2830u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2020u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2024u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2028u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2834u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2838u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x283cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2840u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0x1cu;
    c->r[1] = 0x2000u;
    c->r[14] = 0x36a730u; f_15efd7c(c);
    c->r[0] = 0x2850u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x284cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2848u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2844u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x0u;
L_36a754:;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x80u;
    (void)f_subs(c, c->r[0], 0x2000u);
    { uint32_t ea = c->r[1] + 0x1cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST8(ea, c->r[5]); }
    if (COND_NE) { goto L_36a754; }
    c->r[0] = 0x201cu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36a794(Cpu *restrict c) {
    FN_ENTER(0x36a794u);
L_36a794:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16d0224u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x36a7acu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x36a7b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_36a7d0(Cpu *restrict c) {
    FN_ENTER(0x36a7d0u);
L_36a7d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x36a7dcu; f_a87810(c);
    c->r[0] = 0x16d01e8u;
    c->r[2] = 0x2030u;
    { uint32_t ea = 0x36a7ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
    c->r[1] = 0x16ce598u;
    c->r[2] = 0x202cu;
    { uint32_t ea = 0x36a804u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0x0u;
L_36a810:;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0] + c->r[2];
    c->r[2] = c->r[2] + 0x80u;
    (void)f_subs(c, c->r[2], 0x800u);
    { uint32_t ea = c->r[3] + 0x20u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x40u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x60u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_36a810; }
    c->r[0] = 0x2830u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2020u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2024u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2028u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2834u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2838u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x283cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2840u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0x1cu;
    c->r[1] = 0x2000u;
    c->r[14] = 0x36a888u; f_15efd7c(c);
    c->r[0] = 0x2850u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x284cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2848u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2844u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x0u;
L_36a8ac:;
    c->r[1] = c->r[4] + (c->r[0] << 5);
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[0], 0x100u);
    { uint32_t ea = c->r[1] + 0x1cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST8(ea, c->r[5]); }
    if (COND_NE) { goto L_36a8ac; }
    c->r[0] = 0x201cu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36a8e8(Cpu *restrict c) {
    FN_ENTER(0x36a8e8u);
L_36a8e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16d00d0u;
    c->r[5] = 0x0u;
    c->r[6] = c->r[4];
    { uint32_t ea = 0x36a904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16ce488u;
    { uint32_t ea = 0x36a914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2848u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a930; }
    c->r[1] = 0x1u;
    c->r[14] = 0x36a92cu; f_52a400(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
L_36a930:;
    c->r[0] = c->r[4];
    c->r[14] = 0x36a938u; f_37bf28(c);
    c->r[0] = 0x2834u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a964; }
    c->r[0] = 0x16ce28cu;
    { uint32_t ea = 0x36a958u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36a95cu; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_36a964:;
    c->r[0] = 0x2838u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36a984; }
    c->r[14] = 0x36a97cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_36a984:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_36a99c(Cpu *restrict c) {
    FN_ENTER(0x36a99cu);
L_36a99c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x2834u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36a9d0; }
    c->r[0] = 0x16ce220u;
    { uint32_t ea = 0x36a9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36a9c8u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_36a9d0:;
    c->r[0] = 0x2838u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[14] = 0x36a9e4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36a9f4(Cpu *restrict c) {
    FN_ENTER(0x36a9f4u);
L_36a9f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16cffc4u;
    c->r[5] = 0x0u;
    c->r[6] = c->r[4];
    { uint32_t ea = 0x36aa10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16ce37cu;
    { uint32_t ea = 0x36aa20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x2848u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36aa3c; }
    c->r[1] = 0x1u;
    c->r[14] = 0x36aa38u; f_52a400(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
L_36aa3c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x36aa44u; f_37bf28(c);
    c->r[0] = 0x2834u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36aa70; }
    c->r[0] = 0x16ce180u;
    { uint32_t ea = 0x36aa64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36aa68u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_36aa70:;
    c->r[0] = 0x2838u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36aa90; }
    c->r[14] = 0x36aa88u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_36aa90:;
    c->r[0] = c->r[4];
    c->r[14] = 0x36aa98u; f_a8784c(c);
    c->r[0] = 0x16cff2cu;
    { uint32_t ea = 0x36aaa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36aaa4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_36aac8(Cpu *restrict c) {
    FN_ENTER(0x36aac8u);
L_36aac8:;
    return;
}
void f_36aacc(Cpu *restrict c) {
    FN_ENTER(0x36aaccu);
L_36aacc:;
    __attribute__((musttail)) return f_a878e8(c);
}
void f_36aad0(Cpu *restrict c) {
    FN_ENTER(0x36aad0u);
L_36aad0:;
    c->r[1] = 0x16ce2a8u;
    { uint32_t ea = 0x36aadcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_36aaf4; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { return; }
L_36aaf4:;
    c->r[1] = 0x2020u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2024u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2028u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    return;
}
void f_36ab18(Cpu *restrict c) {
    FN_ENTER(0x36ab18u);
L_36ab18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x2848u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_36ab48; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_36ab48:;
    c->r[0] = 0x16ce230u;
    { uint32_t ea = 0x36ab54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_36ab6c; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_36ab6c:;
    c->r[0] = 0x16ce03cu;
    { uint32_t ea = 0x36ab78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x36ab7cu; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36aba0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36ab8cu; f_36abac(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x36ab94u; f_36b15c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_37c11c(c);
L_36aba0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_36abac(Cpu *restrict c) {
    FN_ENTER(0x36abacu);
L_36abac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x80u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
L_36abd8:;
    c->r[2] = c->r[5] + c->r[1];
    c->r[1] = c->r[1] + 0x80u;
    (void)f_subs(c, c->r[1], 0x2000u);
    { uint32_t ea = c->r[2] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x5cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x7cu; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_36abd8; }
    c->r[1] = 0x201cu;
    c->r[0] = 0x0u;
    c->r[9] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); c->r[9] = ea; }
    c->r[1] = c->r[9] + 0x14u;
L_36ac10:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + c->r[2]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[2] = c->r[2] + 0x80u;
    (void)f_subs(c, c->r[2], 0x800u);
    { uint32_t ea = c->r[3] + 0x20u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x40u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x60u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_36ac10; }
    c->r[0] = 0x2830u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2020u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_36ac5c; }
    goto L_36ac88;
L_36ac50:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_36ac88; }
L_36ac5c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x36ac6cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x36ac74u; f_369328(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36ac50; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36ac84u; f_3696fc(c);
    goto L_36ac50;
L_36ac88:;
    c->r[0] = 0x2024u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_36aca8; }
    goto L_36acd8;
L_36ac9c:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_36acd8; }
L_36aca8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x36acb8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ac9c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x36acd4u; f_369c3c(c);
    goto L_36ac9c;
L_36acd8:;
    c->r[0] = 0x16ce088u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[4] = 0x0u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[8] = 0x3260u;
    c->r[10] = 0x2u;
    { uint32_t ea = 0x36acf8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_36acf4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x36ad00u; f_476748(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36adac; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x36ad1cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36adac; }
    c->r[0] = c->r[6];
    c->r[14] = 0x36ad2cu; f_4a67f4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36adac; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x36cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x36ad48u; rt_dispatch(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_HI) { goto L_36ada8; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 5);
    { uint32_t ea = c->r[1] + 0x1cu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[0];
L_36ada8:;
    { uint32_t ea = c->r[6] + c->r[8]; ST32(ea, c->r[1]); }
L_36adac:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_NE) { goto L_36acf4; }
    c->r[0] = 0x16cddf0u;
    c->r[5] = 0x0u;
    c->r[10] = 0xffffu;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x36add0u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_36adcc:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x36add8u; f_25ceb4(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[0] = 0xb5f9u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_36af10; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36adf8u; f_270824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36af10; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36ae08u; f_27e11c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36af10; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36ae18u; f_2710b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36af10; }
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x500u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_EQ) { goto L_36af10; }
    c->r[6] = c->r[0] + 0x2cu;
L_36ae40:;
    { uint32_t ea = c->r[13] + 0x40u; ST16(ea, c->r[1]); }
    c->r[2] = c->r[6] - 0x18u;
    c->r[3] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[6] - 0x2au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x42u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x28u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[5]); }
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[6] - 12u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[5]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x70u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x22u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 12) & 0x1u;
    { uint32_t ea = c->r[13] + 0x46u; ST16(ea, c->r[0]); }
    c->r[14] = 0x36aea4u; f_36de70(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36af04; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_HI) { goto L_36af04; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 5);
    { uint32_t ea = c->r[1] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
L_36af04:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = c->r[6] + 0x2cu; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_NE) { goto L_36ae40; }
L_36af10:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_NE) { goto L_36adcc; }
    c->r[0] = 0x16cdc88u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[16] = 0x3f000000u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x36af34u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_36af3c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x36af48u; f_458ffc(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_36b134; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x36af64u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b134; }
    c->r[0] = c->r[4];
    c->r[14] = 0x36af74u; f_1322598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b134; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x36af90u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xdu;
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x36afa8u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_36afc0; }
    c->r[0] = 0x3328u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_36b098;
L_36afc0:;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->r[7] = c->r[4];
    c->r[1] = 0x4u;
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[16];
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3328u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x36b02cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x36b044u; rt_dispatch(c);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[0] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
L_36b098:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_36b0fc; }
    c->r[0] = c->r[7] + (c->r[0] << 5);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
L_36b0fc:;
    c->r[1] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_36b134; }
    c->r[0] = c->r[7] + (c->r[0] << 5);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_36b134:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_NE) { goto L_36af3c; }
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36b15c(Cpu *restrict c) {
    FN_ENTER(0x36b15cu);
L_36b15c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[14] = 0x36b16cu; f_37260c(c);
    c->r[0] = 0x2020u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_36b820; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2024u;
    c->r[9] = 0xb5f9u;
    c->r[8] = 0x31e4u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16cdbdcu;
    { uint32_t ea = 0x36b1a4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x16cda14u;
    { uint32_t ea = 0x36b1acu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x16cda08u;
    { uint32_t ea = 0x36b1b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
L_36b1b0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x36b1b8u; f_369328(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b814; }
    c->r[6] = 0x0u;
    goto L_36b1f8;
L_36b1c8:;
    c->r[0] = c->r[7];
    c->r[14] = 0x36b1d0u; f_4f63b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b3e0; }
    goto L_36b3f0;
L_36b1dc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x36b1ecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36b3c8; }
    goto L_36b3f0;
L_36b1f8:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x36b204u; f_476748(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_36b3f0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x36b220u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b3f0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x36b230u; f_4a67f4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b3f0; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x41u);
    if (COND_EQ) { goto L_36b254; }
    c->r[0] = 0x31e0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b3f0; }
L_36b254:;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[7] + c->r[8];
    c->r[14] = 0x36b260u; f_36ba4c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b3f0; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_36b3f0; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36b3f0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b294u; f_369350(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b3f0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b2a8u; f_369878(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b3f0; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[0], 0x3du);
    if (COND_HI) { goto L_36b1dc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36b2ccu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36b1c8u: goto L_36b1c8; case 0x36b1dcu: goto L_36b1dc; case 0x36b3c8u: goto L_36b3c8; case 0x36b3f0u: goto L_36b3f0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36b3c8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x36b3d8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b3f0; }
L_36b3e0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x36b3f0u; f_36bb38(c);
L_36b3f0:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_36b1f8; }
    c->r[6] = 0x0u;
L_36b400:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x36b40cu; f_25ceb4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_36b518; }
    c->r[0] = c->r[7];
    c->r[14] = 0x36b428u; f_270824(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b518; }
    c->r[8] = c->r[7];
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36b518; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x36b454u; f_281a14(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b518; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x444u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_36b518; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x448u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[14] = 0x36b47cu; f_36ba4c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b518; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_36b518; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36b518; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b4b0u; f_369350(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b518; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b4c4u; f_36938c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b518; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b4d8u; f_369878(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b518; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_36b4f8; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_36b508; }
L_36b4f8:;
    c->r[0] = 0x7420u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36b518; }
L_36b508:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x36b518u; f_36c0c0(c);
L_36b518:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0xau);
    if (COND_NE) { goto L_36b400; }
    c->r[6] = 0x0u;
    c->r[8] = 0x3328u;
    goto L_36b590;
L_36b530:;
    c->r[0] = c->r[7];
    c->r[14] = 0x36b538u; f_132863c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b57c; }
    goto L_36b73c;
L_36b544:;
    c->r[0] = c->r[7];
    c->r[14] = 0x36b54cu; f_1328684(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b564; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x36b55cu; f_4f2abc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b73c; }
L_36b564:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x36b574u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b73c; }
L_36b57c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x36b58cu; f_36c9e8(c);
    goto L_36b73c;
L_36b590:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x36b59cu; f_458ffc(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_36b73c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x36b5b0u; f_1322598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b73c; }
    { uint32_t ea = c->r[7] + c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_36b73c; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x78u;
    c->r[14] = 0x36b5d4u; f_36ba4c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b73c; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_36b73c; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36b73c; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b608u; f_369350(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b73c; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x36b61cu; f_369878(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b73c; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[0], 0x3du);
    if (COND_HI) { goto L_36b544; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36b640u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36b530u: goto L_36b530; case 0x36b544u: goto L_36b544; case 0x36b73cu: goto L_36b73c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36b73c:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_36b590; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x31e4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36b814; }
L_36b75c:;
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36b808; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], c->r[0]); }
    if (COND_NE) { goto L_36b808; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x36b78cu; f_369d24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36b808; }
    c->v.s[0] = LD32(c->r[6] + 48u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_36b808; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36b808; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x36b7c4u; f_369878(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36b808; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_36b7ec; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36b75c; }
    goto L_36b808;
L_36b7ec:;
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x34u);
    if (COND_EQ) { goto L_36b808; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x36b808u; f_36cf28(c);
L_36b808:;
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_36b75c; }
L_36b814:;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_36b1b0; }
L_36b820:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2028u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36b8a8; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2024u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_36b8a8; }
    c->r[6] = 0x1054u;
L_36b84c:;
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x30u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_36b89c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_36b89c; }
    c->v.s[0] = LD32(c->r[5] + 48u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_36b89c; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_36b89c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[14] = 0x36b89cu; f_36d4d0(c);
L_36b89c:;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_36b84c; }
L_36b8a8:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36b8bc(Cpu *restrict c) {
    FN_ENTER(0x36b8bcu);
L_36b8bc:;
    { uint32_t ea = c->r[1] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_36b8e0; }
    c->r[2] = 0x2020u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_36b8e0:;
    return;
}
void f_36b8e4(Cpu *restrict c) {
    FN_ENTER(0x36b8e4u);
L_36b8e4:;
    { uint32_t ea = c->r[1] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_36b908; }
    c->r[2] = 0x2024u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_36b908:;
    return;
}
void f_36b90c(Cpu *restrict c) {
    FN_ENTER(0x36b90cu);
L_36b90c:;
    c->r[2] = 0x2028u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    return;
}
void f_36b920(Cpu *restrict c) {
    FN_ENTER(0x36b920u);
L_36b920:;
    c->r[1] = 0x202cu;
    c->r[3] = 0xea5fu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    return;
}
void f_36b948(Cpu *restrict c) {
    FN_ENTER(0x36b948u);
L_36b948:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = 0x201cu;
    c->r[3] = c->r[0];
    c->r[14] = ~0x0u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[12] = v; }
    c->r[4] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_HI) { goto L_36b9b8; }
    c->r[0] = c->r[0] + (c->r[12] << 5);
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_36b9b4; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
L_36b9b4:;
    c->r[14] = c->r[12];
L_36b9b8:;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_36b9c0(Cpu *restrict c) {
    FN_ENTER(0x36b9c0u);
L_36b9c0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = c->r[2] + 0x14u;
    c->r[4] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    ST32(c->r[13] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[13];
    c->r[0] = (c->r[0] >> 12) & 0x1u;
    { uint32_t ea = c->r[13] + 0x6u; ST16(ea, c->r[0]); }
    c->r[14] = 0x36ba44u; f_36de70(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36ba4c(Cpu *restrict c) {
    FN_ENTER(0x36ba4cu);
L_36ba4c:;
    c->r[0] = 0xffffu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_36bb30; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x16u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x1au; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x1eu; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x22u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x26u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2au; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_36bb34; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
L_36bb30:;
    c->r[0] = 0x0u;
L_36bb34:;
    return;
}
void f_36bb38(Cpu *restrict c) {
    FN_ENTER(0x36bb38u);
L_36bb38:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0xf0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = 0x0u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[0] = 0x3260u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36bbd4; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_36bbd4; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + 0x24u;
    c->r[12] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
L_36bbd4:;
    c->r[0] = 0x2749u;
    c->v.s[16] = 0x3f000000u;
    c->r[9] = 0x0u;
    c->r[8] = c->r[4] + c->r[0];
    c->r[0] = c->r[5] + 0x70u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_36bbfc;
L_36bbf8:;
    c->r[9] = c->r[9] + 0x1u;
L_36bbfc:;
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36bc24; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36bc1cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; } }
L_36bc24:;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_CS) { goto L_36c098; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36bbf8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36bc48u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[9]); }
    if (COND_LS) { goto L_36bbf8; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36bbf8; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[9] + c->r[0];
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_HI) { goto L_36bbf8; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36bcf8; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_36bd80; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36bbf8; }
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x40u;
    c->r[14] = 0x36bcdcu; f_368198(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36bbf8; }
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    goto L_36be28;
L_36bcf8:;
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x204cu;
    c->r[2] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0x50u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x40u;
    c->r[14] = 0x36bd5cu; f_3683dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36bbf8; }
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->v.s[2] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 88u);
    c->v.s[6] = LD32(c->r[13] + 96u);
    c->v.s[8] = LD32(c->r[13] + 100u);
    c->v.s[10] = LD32(c->r[13] + 104u);
    goto L_36be04;
L_36bd80:;
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x204cu;
    c->r[2] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x40u;
    c->r[14] = 0x36bde4u; f_367b5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36bbf8; }
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.s[6] = LD32(c->r[13] + 192u);
    c->v.s[8] = LD32(c->r[13] + 196u);
    c->v.s[10] = LD32(c->r[13] + 200u);
L_36be04:;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[16];
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
L_36be28:;
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[6] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[8] = LD32(c->r[13] + 148u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[10] = LD32(c->r[13] + 152u);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[16];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0x36be74u; f_47c6f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_36beb4; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x36bea0u; f_378b00(c);
    { uint32_t ea = c->r[8] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x8000u;
    { uint32_t sc = ((c->r[0] >> 24) & 1); uint32_t r = c->r[1] & (c->r[0] << 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36bbf8; }
    goto L_36bed8;
L_36beb4:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x40u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x36bed8u; f_375ff4(c);
L_36bed8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36bf04; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0x36bf04u; rt_dispatch(c);
L_36bf04:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_36bf30; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    if (COND_CS) { { uint32_t ea = c->r[5] + 0x6eu; uint32_t v = LD8(ea); c->r[3] = v; } }
    c->pc = c->r[7]; c->r[14] = 0x36bf30u; rt_dispatch(c);
L_36bf30:;
    { uint32_t ea = c->r[5] + 0x32u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36c098; }
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36bfac; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_36c0a8; }
    c->r[1] = 0x1u;
    c->r[2] = 0x4fu;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36bfac; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x36bf7cu; rt_dispatch(c);
    c->r[1] = 0x16cdc10u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x36bf8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_36bfa4; }
L_36bf94:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_36bf94; }
L_36bfa4:;
    { uint32_t ea = c->r[6] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_36bfdc;
L_36bfac:;
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[4] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 40u);
    c->v.s[6] = LD32(c->r[13] + 56u);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[1] = c->v.f[2] - c->v.f[6];
    c->r[14] = 0x36bfc8u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
L_36bfdc:;
    { uint32_t ea = c->r[5] + 0x6du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_36c098; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x3bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_36c00c; }
    { uint32_t ea = c->r[5] + 0x6eu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_36c098; }
L_36c00c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_36c098; }
    c->r[8] = c->r[0] + (c->r[1] << 8);
    c->r[0] = 0x16ccd70u;
    c->r[1] = 0x10u;
    { uint32_t ea = 0x36c030u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x40u;
    c->r[14] = 0x36c038u; f_611420(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5] + 0x5au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x13du;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16ce974u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x36c064u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[1] + 0x30u; ST16(ea, c->r[8]); }
    c->r[14] = 0x36c098u; f_68c4f0(c);
L_36c098:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_36c0a8:;
    c->r[0] = 0x0u;
    goto L_36bfdc;
}
void f_36c0c0(Cpu *restrict c) {
    FN_ENTER(0x36c0c0u);
L_36c0c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[5] = c->r[2];
    c->r[0] = 0x1428u;
    c->r[10] = 0x0u;
    c->r[4] = c->r[1];
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x90u;
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x130u;
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_36c144;
L_36c140:;
    c->r[10] = c->r[10] + 0x1u;
L_36c144:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36c170; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36c164u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
L_36c170:;
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_CS) { goto L_36c9e0; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36c140; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36c194u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[10]); }
    if (COND_LS) { goto L_36c140; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_36c140; }
    c->r[0] = c->r[5];
    c->r[14] = 0x36c1c0u; f_2710b0(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_36c9e0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x36c1d4u; f_27e11c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36c9e0; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_HI) { goto L_36c140; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_EQ) { goto L_36c244; }
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_EQ) { goto L_36c29c; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_36c140; }
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[2]); }
    goto L_36c2f0;
L_36c244:;
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = 0x204cu;
    c->r[2] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[2]); }
    goto L_36c2f0;
L_36c29c:;
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x204cu;
    c->r[2] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[2]); }
L_36c2f0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_36c140; }
    c->r[9] = 0x0u;
L_36c308:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x370u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x36c31cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36c6d8; }
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[0], 0x3du);
    if (COND_HI) { goto L_36c4c8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36c340u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36c43cu: goto L_36c43c; case 0x36c4a8u: goto L_36c4a8; case 0x36c4b8u: goto L_36c4b8; case 0x36c4c8u: goto L_36c4c8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36c43c:;
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36c6d8; }
L_36c448:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x500u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_36c580; }
    c->r[2] = c->r[6] + (c->r[1] << 5);
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36c500; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_36c540; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36c580; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[2]); }
    goto L_36c57c;
L_36c4a8:;
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36c448; }
    goto L_36c6d8;
L_36c4b8:;
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x18u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36c448; }
    goto L_36c6d8;
L_36c4c8:;
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x152u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36c6d8; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36c448; }
    c->r[0] = c->r[5];
    c->r[14] = 0x36c4e8u; f_2c03b8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36c448; }
    goto L_36c6d8;
L_36c500:;
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[6];
    c->r[14] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    goto L_36c57c;
L_36c540:;
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[6];
    c->r[14] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
L_36c57c:;
    c->r[0] = c->r[1];
L_36c580:;
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_EQ) { goto L_36c5cc; }
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_EQ) { goto L_36c600; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_36c634; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_36c650; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    c->r[0] = c->r[13] + 0x130u;
    c->r[1] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c5c0u; f_367118(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c6f0;
L_36c5cc:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_36c66c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_36c688; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c5f4u; f_368370(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c704;
L_36c600:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_36c6a4; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_36c6c0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c628u; f_367f64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c720;
L_36c634:;
    c->r[0] = c->r[13] + 0x130u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c644u; f_368280(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c778;
L_36c650:;
    c->r[0] = c->r[13] + 0x130u;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c660u; f_368198(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c7ac;
L_36c66c:;
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c67cu; f_368448(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c7e0;
L_36c688:;
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c698u; f_3683dc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c7fc;
L_36c6a4:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c6b4u; f_3682f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36c6d8; }
    goto L_36c818;
L_36c6c0:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[14] = 0x36c6d0u; f_367b5c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_36c878; }
L_36c6d8:;
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD16(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[1] = 0xffffu;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_36c308; }
    goto L_36c140;
L_36c6f0:;
    c->r[2] = c->r[13] + 0x130u;
    c->r[3] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    goto L_36c760;
L_36c704:;
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    goto L_36c738;
L_36c720:;
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[2] = LD32(c->r[13] + 244u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
L_36c738:;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.s[12] = 0x3f000000u;
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[12];
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
L_36c760:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_36c8fc;
L_36c778:;
    c->r[2] = c->r[13] + 0x130u;
    c->r[3] = c->r[13] + 0x40u;
    c->v.s[12] = 0x3f000000u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 120u);
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 100u);
    c->v.s[6] = LD32(c->r[13] + 104u);
    c->v.s[8] = LD32(c->r[13] + 112u);
    c->v.s[10] = LD32(c->r[13] + 116u);
    goto L_36c8d4;
L_36c7ac:;
    c->r[2] = c->r[13] + 0x130u;
    c->r[3] = c->r[13] + 0x40u;
    c->v.s[12] = 0x3f000000u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 208u);
    c->v.s[10] = LD32(c->r[13] + 212u);
    goto L_36c8d4;
L_36c7e0:;
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    goto L_36c830;
L_36c7fc:;
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    goto L_36c890;
L_36c818:;
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[2] = LD32(c->r[13] + 244u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
L_36c830:;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.s[12] = 0x3f000000u;
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.s[6] = LD32(c->r[13] + 104u);
    c->v.s[8] = LD32(c->r[13] + 112u);
    c->v.s[10] = LD32(c->r[13] + 116u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[12];
    ST32(c->r[13] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 100u);
    ST32(c->r[13] + 72u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 120u);
    goto L_36c8d4;
L_36c878:;
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[2] = LD32(c->r[13] + 244u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
L_36c890:;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.s[12] = 0x3f000000u;
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 208u);
    c->v.s[10] = LD32(c->r[13] + 212u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[12];
    ST32(c->r[13] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    ST32(c->r[13] + 72u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 216u);
L_36c8d4:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    c->r[0] = c->v.s[0];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
L_36c8fc:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[3] = c->r[13] + 0x50u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x36c93cu; f_370968(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36c964; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0x36c964u; rt_dispatch(c);
L_36c964:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_36c990; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x6eu; uint32_t v = LD8(ea); c->r[3] = v; } }
    c->pc = c->r[7]; c->r[14] = 0x36c990u; rt_dispatch(c);
L_36c990:;
    c->r[0] = 0xb5f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_EQ) { goto L_36c9bc; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { goto L_36c9e0; }
    c->r[0] = 0xb5f7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36c9e0; }
    goto L_36c9cc;
L_36c9bc:;
    c->r[0] = 0xb5f7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36c9e0; }
L_36c9cc:;
    { uint32_t ea = c->r[4] + 0xb5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20u;
    { uint32_t ea = c->r[4] + 0xb5u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_36c9e0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36c9e8(Cpu *restrict c) {
    FN_ENTER(0x36c9e8u);
L_36c9e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xccu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[0] = 0x3328u;
    c->r[8] = 0x0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[10] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    goto L_36ca38;
L_36ca34:;
    c->r[8] = c->r[8] + 0x1u;
L_36ca38:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ca64; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36ca58u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
L_36ca64:;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_CS) { goto L_36cf20; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ca34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36ca88u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[8]); }
    if (COND_LS) { goto L_36ca34; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ca34; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[0] = c->r[8] + c->r[0];
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_HI) { goto L_36cbc4; }
    c->r[1] = c->r[6] + (c->r[0] << 5);
    c->r[0] = 0x2030u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_36cb14; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_36cb6c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36cbc4; }
    c->r[2] = 0x2034u;
    c->r[3] = 0x203cu;
    c->r[7] = 0x2038u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2040u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    goto L_36cbc0;
L_36cb14:;
    c->r[2] = 0x2034u;
    c->r[7] = 0x2038u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2040u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x203cu;
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x204cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[7]); }
    c->r[7] = 0x2044u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[12]); }
    c->r[3] = 0x2048u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    goto L_36cbc0;
L_36cb6c:;
    c->r[2] = 0x2034u;
    c->r[7] = 0x2038u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2040u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x203cu;
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x204cu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[7]); }
    c->r[7] = 0x2044u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[12]); }
    c->r[3] = 0x2048u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
L_36cbc0:;
    c->r[9] = c->r[0];
L_36cbc4:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_36cc8c; }
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_NE) { goto L_36cd44; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36cc14; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36cc14; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_36cc14:;
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x36cc24u; f_367f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36ce24; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36cc70; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36cc70; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_36cc70:;
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x36cc80u; f_367f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ca34; }
    goto L_36ce24;
L_36cc8c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36cccc; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36cccc; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_36cccc:;
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x36ccdcu; f_367118(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36ce68; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36cd28; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36cd28; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_36cd28:;
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x36cd38u; f_367118(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ca34; }
    goto L_36ce68;
L_36cd44:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36cd84; }
    c->r[1] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_36cd84; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
L_36cd84:;
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_NE) { goto L_36cdac; }
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x36cd9cu; f_368370(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36ce08; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
L_36cdac:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36cde8; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36cde8; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_36cde8:;
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_NE) { goto L_36ca34; }
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x30u;
    c->r[14] = 0x36ce00u; f_368370(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36ca34; }
L_36ce08:;
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->v.s[4] = LD32(c->r[13] + 68u);
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->v.s[8] = LD32(c->r[13] + 80u);
    c->v.s[10] = LD32(c->r[13] + 84u);
    goto L_36ce3c;
L_36ce24:;
    c->v.s[0] = LD32(c->r[13] + 136u);
    c->v.s[2] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 116u);
    c->v.s[6] = LD32(c->r[13] + 120u);
    c->v.s[8] = LD32(c->r[13] + 128u);
    c->v.s[10] = LD32(c->r[13] + 132u);
L_36ce3c:;
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.s[12] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[2] = c->v.f[2] * c->v.f[12];
    c->r[0] = c->v.s[0];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    goto L_36ce74;
L_36ce68:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_36ce74:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x36ceccu; f_375918(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_36cef4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[7];
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0x36cef4u; rt_dispatch(c);
L_36cef4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_36cf20; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x4u);
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x6eu; uint32_t v = LD8(ea); c->r[3] = v; } }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x36cf20u; rt_dispatch(c);
L_36cf20:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36cf28(Cpu *restrict c) {
    FN_ENTER(0x36cf28u);
L_36cf28:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x11cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[8] = 0x0u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xc0u;
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_36cf9c;
L_36cf98:;
    c->r[8] = c->r[8] + 0x1u;
L_36cf9c:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36cfc8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36cfbcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
L_36cfc8:;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_CS) { goto L_36d4c4; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36cf98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x36cfecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[8]); }
    if (COND_LS) { goto L_36cf98; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36cf98; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_HI) { goto L_36cf98; }
    c->r[0] = c->r[6] + (c->r[0] << 5);
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_EQ) { goto L_36d074; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_36d0cc; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_36cf98; }
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[2]); }
    goto L_36d120;
L_36d074:;
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x204cu;
    c->r[2] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[2]); }
    goto L_36d120;
L_36d0cc:;
    c->r[1] = 0x2034u;
    c->r[2] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x204cu;
    c->r[2] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[2]); }
L_36d120:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_36cf98; }
    c->r[10] = c->r[0] + 0x2cu;
    c->r[9] = 0x0u;
L_36d140:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[9] + c->r[0];
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36d20c; }
    c->r[2] = c->r[6] + (c->r[0] << 5);
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_36d19c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_36d1d4; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_36d20c; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[2]); }
    goto L_36d208;
L_36d19c:;
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[2] + 0x24u;
    c->r[12] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    goto L_36d208;
L_36d1d4:;
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[2] + 0x24u;
    c->r[12] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[2]); }
L_36d208:;
    c->r[1] = c->r[0];
L_36d20c:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_EQ) { goto L_36d258; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_36d28c; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_36d364; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36d2c0; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_36d2dc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36d364; }
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d24cu; f_367118(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d258:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36d2f8; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_36d314; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36d364; }
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d280u; f_368370(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d28c:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36d330; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_36d34c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36d364; }
    c->r[0] = c->r[13] + 0xc0u;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d2b4u; f_367f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d2c0:;
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d2d0u; f_368280(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d2dc:;
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d2ecu; f_368198(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d2f8:;
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d308u; f_368448(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36d364; }
    goto L_36d37c;
L_36d314:;
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d324u; f_3683dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d330:;
    c->r[0] = c->r[13] + 0xc0u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d340u; f_3682f8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d364; }
    goto L_36d37c;
L_36d34c:;
    c->r[0] = c->r[13] + 0xc0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[14] = 0x36d35cu; f_367b5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36d37c; }
L_36d364:;
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[10] = c->r[10] + 0x2cu; c->r[0] = v; }
    c->r[1] = 0xffffu;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_36d140; }
    goto L_36cf98;
L_36d37c:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x36d388u; f_369d04(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_36d3d4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[12]; c->r[14] = 0x36d3d4u; rt_dispatch(c);
L_36d3d4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_36d400; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x6eu; uint32_t v = LD8(ea); c->r[3] = v; } }
    c->pc = c->r[12]; c->r[14] = 0x36d400u; rt_dispatch(c);
L_36d400:;
    { uint32_t ea = c->r[10] - 0x21u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36d42c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_36d42c:;
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x33u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_36d460; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_36d460:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x30u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36d4b4; }
    c->r[1] = 0x16cd560u;
    { uint32_t ea = c->r[4] + 0x9eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x36d47cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[5] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0xb5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_36d4b4:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[5] + 0x34u; ST16(ea, c->r[0]); }
L_36d4c4:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36d4d0(Cpu *restrict c) {
    FN_ENTER(0x36d4d0u);
L_36d4d0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x908u;
    c->r[4] = c->r[2];
    c->r[8] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1428u;
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[1] = c->r[6] + c->r[1];
    c->r[0] = c->r[6] + 0x910u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = 0x904u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->r[6] + 0x900u;
    c->r[1] = c->r[6] + c->r[1];
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[6] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[1]);
    c->v.f[26] = c->v.f[2] * c->v.f[0];
    (void)f_subs(c, c->r[0], 0x5u);
    c->v.f[30] = c->v.f[2] * c->v.f[6];
    c->v.f[28] = c->v.f[2] * c->v.f[4];
    if (COND_NE) { goto L_36d608; }
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[24] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36d578u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36d584u; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36d5a0u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36d5acu; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = c->v.s[0];
    c->v.f[17] = c->v.f[28] * c->v.f[16];
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[26] * c->v.f[18]);
    c->v.s[0] = c->r[0];
    c->v.f[19] = c->v.f[30] * c->v.f[20];
    c->v.f[26] = c->v.f[26] * c->v.f[16];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x36d5d8u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[17] * c->v.f[22]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[18]);
    c->v.f[20] = c->v.f[17] * c->v.f[20];
    c->r[14] = 0x36d5f0u; f_15efdf4(c);
    c->v.f[18] = c->v.f[19] * c->v.f[0];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[30] * c->v.f[22]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[26] * c->v.f[16]);
    c->v.f[22] = c->v.f[19] * c->v.f[16];
    c->v.f[24] = c->v.f[26] * c->v.f[0];
    goto L_36d6b0;
L_36d608:;
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[24] = 0x38c90fdbu;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36d624u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36d630u; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[20] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36d64cu; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36d658u; f_15efdf4(c);
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = c->v.s[0];
    c->v.f[17] = c->v.f[28] * c->v.f[16];
    c->v.f[19] = c->v.f[30] * c->v.f[16];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[30] * c->v.f[18]);
    c->v.s[0] = c->r[0];
    c->v.f[30] = c->v.f[26] * c->v.f[20];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x36d684u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[28] * c->v.f[18]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[17] * c->v.f[22]);
    c->v.f[20] = c->v.f[17] * c->v.f[20];
    c->r[14] = 0x36d69cu; f_15efdf4(c);
    c->v.f[18] = c->v.f[19] * c->v.f[0];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[26] * c->v.f[22]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[30] * c->v.f[16]);
    c->v.f[22] = c->v.f[19] * c->v.f[16];
    c->v.f[24] = c->v.f[30] * c->v.f[0];
L_36d6b0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = LD32(c->r[0] + 64u);
    c->v.s[26] = LD32(c->r[0] + 68u);
    c->v.s[28] = LD32(c->r[0] + 72u);
    c->r[0] = c->r[9];
    c->r[14] = 0x36d6c8u; f_2712a4(c);
    c->v.s[0] = 0x3f8ccccdu;
    c->v.s[2] = LD32(c->r[0] + 48u);
    c->v.f[4] = c->v.f[20] + c->v.f[26];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[18] + c->v.f[16];
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->v.f[0] = c->v.f[24] - c->v.f[22];
    ST32(c->r[13] + 144u, c->v.s[2]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    c->v.f[0] = c->v.f[0] + c->v.f[28];
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_EQ) { goto L_36d860; }
    c->r[9] = c->r[0] + 0x2cu;
    c->r[10] = 0x0u;
    c->r[6] = c->r[13] + 0x90u;
    c->r[7] = c->r[13] + 0x10u;
L_36d714:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[10] + c->r[0];
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_36d814; }
    c->r[0] = c->r[5] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36d780; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_36d7cc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36d814; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[7];
    c->r[14] = 0x36d774u; f_367118(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36d814; }
    goto L_36d828;
L_36d780:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + 0x24u;
    c->r[12] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[7];
    c->r[14] = 0x36d7c0u; f_368280(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36d814; }
    goto L_36d828;
L_36d7cc:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + 0x24u;
    c->r[12] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[7];
    c->r[14] = 0x36d80cu; f_368198(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36d828; }
L_36d814:;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[9] = c->r[9] + 0x2cu; c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_36d714; }
    goto L_36d860;
L_36d828:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x36d834u; f_369d04(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[0]); }
L_36d860:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_36d878(Cpu *restrict c) {
    FN_ENTER(0x36d878u);
L_36d878:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[12] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_36d948; }
    c->r[1] = c->r[12] + (c->r[1] << 5);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD8(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_EQ) { goto L_36d8d4; }
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_EQ) { goto L_36d910; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_36d948; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_36d948; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    goto L_36d944;
L_36d8d4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[1]); }
    goto L_36d944;
L_36d910:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_36d948; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
L_36d944:;
    c->r[0] = c->r[12];
L_36d948:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_36d94c(Cpu *restrict c) {
    FN_ENTER(0x36d94cu);
L_36d94c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[12] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_HI) { goto L_36da84; }
    c->r[14] = c->r[12] + (c->r[1] << 5);
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD8(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_EQ) { goto L_36d9c0; }
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_EQ) { goto L_36da24; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_36da84; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_36da84; }
    c->r[0] = 0x2034u;
    c->r[1] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2040u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    goto L_36da80;
L_36d9c0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x2034u;
    c->r[1] = 0x203cu;
    c->r[3] = 0x2038u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2040u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x204cu;
    c->r[1] = 0x2048u;
    c->r[3] = 0x2044u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[0]); }
    goto L_36da80;
L_36da24:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_36da84; }
    c->r[0] = 0x2034u;
    c->r[1] = 0x203cu;
    c->r[2] = 0x2038u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2040u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x204cu;
    c->r[1] = 0x2048u;
    c->r[2] = 0x2044u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
L_36da80:;
    c->r[0] = c->r[12];
L_36da84:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_36da88(Cpu *restrict c) {
    FN_ENTER(0x36da88u);
L_36da88:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + 0x36u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36dafc; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_36db40; }
    c->r[1] = 0x1u;
    c->r[5] = 0x4fu;
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36dafc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x36daccu; rt_dispatch(c);
    c->r[1] = 0x16cc0c0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x36dadcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_36daf4; }
L_36dae4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_36dae4; }
L_36daf4:;
    { uint32_t ea = c->r[5] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_36db30;
L_36dafc:;
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[3] + 8u);
    c->v.s[6] = LD32(c->r[2] + 8u);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[1] = c->v.f[2] - c->v.f[6];
    c->r[14] = 0x36db18u; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
L_36db30:;
    { uint32_t ea = c->r[4] + 0x3bu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 8);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_36db40:;
    c->r[0] = 0x0u;
    goto L_36db30;
}
void f_36db50(Cpu *restrict c) {
    FN_ENTER(0x36db50u);
L_36db50:;
    c->r[0] = 0x16cb228u;
    { uint32_t ea = 0x36db5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 104u);
    return;
}
void f_36db68(Cpu *restrict c) {
    FN_ENTER(0x36db68u);
L_36db68:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + 0x6eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36db94; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[4], 0x0u); }
    if (COND_NE) { goto L_36db9c; }
L_36db94:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_36db9c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x0u;
    { uint32_t ea = c->r[0] + 0x7f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->v.s[0] = c->v.s[16];
    c->pc = c->r[1]; c->r[14] = 0x36dbb4u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[0] + 0x7f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x36dbc8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[0] = c->r[1];
    c->r[1] = c->r[0] - 0x22u;
    (void)f_subs(c, c->r[1], 0x3u);
    c->v.f[0] = (float)c->v.s[0];
    if (COND_CC) { goto L_36dc20; }
    (void)f_subs(c, c->r[0], 0x49u);
    if (COND_EQ) { goto L_36dc20; }
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_36dc20; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_36dc38; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_36dc4c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x3fc00000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[0] + 0x7f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_36dc28;
L_36dc20:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7f4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_36dc28:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_36dc38:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36dc60; }
    { uint32_t ea = c->r[1] + 0x7f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_36dc28;
L_36dc4c:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36db94; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_36dc28;
L_36dc60:;
    { uint32_t ea = c->r[1] + 0x7f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_36dc28;
}
void f_36dc6c(Cpu *restrict c) {
    FN_ENTER(0x36dc6cu);
L_36dc6c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[16] = c->v.s[0];
    c->v.s[18] = c->v.s[1];
    c->r[4] = c->r[3];
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[0];
    c->r[0] = c->r[5];
    c->v.f[24] = (float)c->v.s[0];
    c->v.f[20] = (float)c->v.s[2];
    c->r[14] = 0x36dca4u; f_2bad1c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_36dce0; }
    c->v.s[0] = 0xc1700000u;
    c->v.s[22] = 0x0u;
    c->v.f[2] = c->v.f[20] + c->v.f[0];
    c->v.f[0] = c->v.f[24] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    { float t0 = nftz(vmax_f(nftz(c->v.f[2]), nftz(c->v.f[22]))); float t1 = nftz(vmax_f(nftz(c->v.f[3]), nftz(c->v.f[23]))); c->v.f[20] = t0; c->v.f[21] = t1; }
    vfp_mrs_flags(c);
    if (COND_PL) { c->v.d[11] = c->v.d[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_36dcec; }
    goto L_36dd14;
L_36dce0:;
    c->v.d[11] = c->v.d[12];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36dd14; }
L_36dcec:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_36dd08; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36dd00u; f_4ad1c8(c);
    c->v.d[10] = c->v.d[0];
    goto L_36dd14;
L_36dd08:;
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x36dd10u; f_4ad1c8(c);
    c->v.d[11] = c->v.d[0];
L_36dd14:;
    c->r[0] = 0xb720u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36dd4c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x36dd38u; rt_dispatch(c);
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    c->v.s[2] = 0x0u;
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    { float t0 = nftz(vmax_f(nftz(c->v.f[4]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[5]), nftz(c->v.f[3]))); c->v.f[22] = t0; c->v.f[23] = t1; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[20] = t0; c->v.f[21] = t1; }
L_36dd4c:;
    c->v.s[0] = 0x42c80000u;
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[22] / c->v.f[0];
    c->v.f[4] = c->v.f[18] / c->v.f[0];
    c->v.f[6] = c->v.f[20] / c->v.f[0];
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[0] = 0x1u; }
    c->v.s[0] = COND_GE ? c->v.s[0] : c->v.s[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36dd90(Cpu *restrict c) {
    FN_ENTER(0x36dd90u);
L_36dd90:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_36ddd4; }
    c->r[0] = c->r[6];
    c->r[14] = 0x36ddb4u; f_2c03b8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36ddd4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x318u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x36ddd0u; rt_dispatch(c);
    c->r[4] = c->r[0];
L_36ddd4:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_36dddc(Cpu *restrict c) {
    FN_ENTER(0x36dddcu);
L_36dddc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    ST32(c->r[13] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[13];
    c->r[0] = (c->r[0] >> 12) & 0x1u;
    { uint32_t ea = c->r[13] + 0x6u; ST16(ea, c->r[0]); }
    c->r[14] = 0x36de68u; f_36de70(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
