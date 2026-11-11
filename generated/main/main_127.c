#include "cpu.h"
#include "neon_rt.h"
void f_200690(Cpu *c);
void f_21ebe8(Cpu *c);
void f_4332ac(Cpu *c);
void f_521f9c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c54e4(Cpu *c);
void f_9c8528(Cpu *c);
void f_9c8904(Cpu *c);
void f_9c92e0(Cpu *c);
void f_9c960c(Cpu *c);
void f_9c98c4(Cpu *c);
void f_9c9be8(Cpu *c);
void f_9c9ee8(Cpu *c);
void f_9cae08(Cpu *c);
void f_9cbdb4(Cpu *c);
void f_9cd640(Cpu *c);
void f_9cda88(Cpu *c);
void f_9cf274(Cpu *c);
void f_9cf390(Cpu *c);
void f_9cf4a4(Cpu *c);
void f_9cf610(Cpu *c);
void f_9cf934(Cpu *c);
void f_9cfc64(Cpu *c);
void f_9d0438(Cpu *c);
void f_9d1238(Cpu *c);
void f_9d290c(Cpu *c);
void f_9d9734(Cpu *c);
void f_9da9e0(Cpu *c);
void f_9e174c(Cpu *c);
void f_9e9290(Cpu *c);
void f_9e9e94(Cpu *c);
void f_9ea0ec(Cpu *c);
void f_9eabe0(Cpu *c);
void f_9ead68(Cpu *c);
void f_9eb0f4(Cpu *c);
void f_9eb240(Cpu *c);
void f_9eb61c(Cpu *c);
void f_9eb874(Cpu *c);
void f_9ec744(Cpu *c);
void f_9ec9f4(Cpu *c);
void f_9ecd5c(Cpu *c);
void f_a02dd0(Cpu *c);
void f_a02e3c(Cpu *c);
void f_a043c8(Cpu *c);
void f_a08f88(Cpu *c);
void f_a08fe8(Cpu *c);
void f_a090f8(Cpu *c);
void f_a09434(Cpu *c);
void f_a098b4(Cpu *c);
void f_a099e4(Cpu *c);
void f_a09bc0(Cpu *c);
void f_a0a960(Cpu *c);
void f_a0aa10(Cpu *c);
void f_a0aaf4(Cpu *c);
void f_a0acdc(Cpu *c);
void f_a3fde4(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15effbc(Cpu *c);
void f_15f00e8(Cpu *c);
void f_15f0184(Cpu *c);
void f_15f0190(Cpu *c);
void f_15f019c(Cpu *c);
void f_15f01a8(Cpu *c);
void f_15f01b4(Cpu *c);
void f_15f01c0(Cpu *c);
void f_15f01cc(Cpu *c);
void f_15f01d8(Cpu *c);
void f_15f01e4(Cpu *c);
void f_9c4ff4(Cpu *restrict c) {
    FN_ENTER(0x9c4ff4u);
L_9c4ff4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[2];
    c->r[0] = c->r[0] + 0x10u;
    c->r[2] = c->r[13] + 0x4u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9c5014u; f_9cda88(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c506c; }
    c->r[1] = 0x1073b20u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x9c502cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9c506c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c5078(Cpu *restrict c) {
    FN_ENTER(0x9c5078u);
L_9c5078:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5080(Cpu *restrict c) {
    FN_ENTER(0x9c5080u);
L_9c5080:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[0] + 0x10u;
    c->r[0] = c->r[1];
    c->r[3] = c->r[13] + 0x4u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[2];
    c->r[2] = 0x0u;
    c->r[14] = 0x9c50a8u; f_9da9e0(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c5100; }
    c->r[1] = 0x1073a8cu;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x9c50c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9c5100:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c510c(Cpu *restrict c) {
    FN_ENTER(0x9c510cu);
L_9c510c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c5128u; f_9e9e94(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c5130(Cpu *restrict c) {
    FN_ENTER(0x9c5130u);
L_9c5130:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c514cu; f_9ea0ec(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c5154(Cpu *restrict c) {
    FN_ENTER(0x9c5154u);
L_9c5154:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c5170u; f_9e9290(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c5178(Cpu *restrict c) {
    FN_ENTER(0x9c5178u);
L_9c5178:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c5194u; f_9ead68(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c519c(Cpu *restrict c) {
    FN_ENTER(0x9c519cu);
L_9c519c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c51b8u; f_9eabe0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c51c0(Cpu *restrict c) {
    FN_ENTER(0x9c51c0u);
L_9c51c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c51dcu; f_9eb0f4(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c51e4(Cpu *restrict c) {
    FN_ENTER(0x9c51e4u);
L_9c51e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c5200u; f_9eb240(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c5208(Cpu *restrict c) {
    FN_ENTER(0x9c5208u);
L_9c5208:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9c520c(Cpu *restrict c) {
    FN_ENTER(0x9c520cu);
L_9c520c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x107bbf8u;
    { uint32_t ea = 0x9c5220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9c5220u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9c5238(Cpu *restrict c) {
    FN_ENTER(0x9c5238u);
L_9c5238:;
    c->r[0] = 0x107bbd4u;
    { uint32_t ea = 0x9c5244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9c5248(Cpu *restrict c) {
    FN_ENTER(0x9c5248u);
L_9c5248:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5250(Cpu *restrict c) {
    FN_ENTER(0x9c5250u);
L_9c5250:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5258(Cpu *restrict c) {
    FN_ENTER(0x9c5258u);
L_9c5258:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5260(Cpu *restrict c) {
    FN_ENTER(0x9c5260u);
L_9c5260:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5268(Cpu *restrict c) {
    FN_ENTER(0x9c5268u);
L_9c5268:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5270(Cpu *restrict c) {
    FN_ENTER(0x9c5270u);
L_9c5270:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5278(Cpu *restrict c) {
    FN_ENTER(0x9c5278u);
L_9c5278:;
    c->r[2] = c->r[0];
    c->v.s[2] = LD32(c->r[1]);
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[2] + 16u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5304; }
    c->v.s[2] = LD32(c->r[2] + 24u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5304; }
    c->v.s[4] = LD32(c->r[1] + 16u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9c5304; }
    c->v.s[0] = LD32(c->r[1] + 24u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { return; }
    c->v.s[2] = LD32(c->r[2] + 28u);
    c->v.s[0] = LD32(c->r[2] + 20u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c52f0; }
    c->v.s[2] = LD32(c->r[1] + 4u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[0] = 0x1u; }
    return;
L_9c52f0:;
    c->v.s[2] = LD32(c->r[1] + 20u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9c5304; }
    c->r[0] = 0x1u;
L_9c5304:;
    return;
}
void f_9c5308(Cpu *restrict c) {
    FN_ENTER(0x9c5308u);
L_9c5308:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5310(Cpu *restrict c) {
    FN_ENTER(0x9c5310u);
L_9c5310:;
    c->r[0] = c->r[0] + 0x10u;
    __attribute__((musttail)) return f_a02dd0(c);
}
void f_9c5318(Cpu *restrict c) {
    FN_ENTER(0x9c5318u);
L_9c5318:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5320(Cpu *restrict c) {
    FN_ENTER(0x9c5320u);
L_9c5320:;
    c->r[0] = c->r[0] + 0x10u;
    __attribute__((musttail)) return f_a02e3c(c);
}
void f_9c5328(Cpu *restrict c) {
    FN_ENTER(0x9c5328u);
L_9c5328:;
    c->r[0] = 0x0u;
    return;
}
void f_9c5330(Cpu *restrict c) {
    FN_ENTER(0x9c5330u);
L_9c5330:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c534cu; f_9eb61c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c5354(Cpu *restrict c) {
    FN_ENTER(0x9c5354u);
L_9c5354:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c5370u; f_9eb874(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c5378(Cpu *restrict c) {
    FN_ENTER(0x9c5378u);
L_9c5378:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c5394u; f_9ec744(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c539c(Cpu *restrict c) {
    FN_ENTER(0x9c539cu);
L_9c539c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c53b8u; f_9ec9f4(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c53c0(Cpu *restrict c) {
    FN_ENTER(0x9c53c0u);
L_9c53c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[0];
    c->v.s[2] = 0x3727c5acu;
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[2] + 28u);
    c->v.s[10] = c->r[12];
    c->v.f[8] = c->v.f[10] * c->v.f[0];
    c->v.f[4] = fabsf(c->v.f[8]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[4] = LD32(c->r[2] + 20u);
    c->v.s[6] = LD32(c->r[2] + 16u);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[2] = LD32(c->r[2] + 24u);
    c->v.s[1] = LD32(c->r[1] + 12u);
    c->v.s[14] = c->r[4];
    c->v.s[12] = c->r[14];
    c->v.f[10] = c->v.f[10] * c->v.f[4];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[1] + c->v.f[10];
    c->v.s[12] = c->v.s[10] ^ 0x80000000u;
    c->v.f[8] = c->v.f[12] / c->v.f[8];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c548c; }
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[14] = c->r[14] ^ 0x80000000u; }
    if (COND_LT) { c->r[12] = c->r[12] ^ 0x80000000u; }
    if (COND_LT) { c->r[4] = c->r[4] ^ 0x80000000u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9c5490; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[8]);
    c->r[1] = c->r[4] ^ 0x80000000u;
    c->r[2] = c->r[12] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->r[4] = c->r[14] ^ 0x80000000u;
    c->r[12] = c->r[3] + 0xcu;
    ST32(c->r[3], c->v.s[6]);
    ST32(c->r[3] + 4u, c->v.s[4]);
    ST32(c->r[3] + 8u, c->v.s[2]);
    ST32(c->r[3] + 36u, c->v.s[8]);
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[3] + 0x28u; ST8(ea, c->r[0]); }
L_9c548c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_9c5490:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c549c(Cpu *restrict c) {
    FN_ENTER(0x9c549cu);
L_9c549c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c54b8u; f_9ecd5c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c54c0(Cpu *restrict c) {
    FN_ENTER(0x9c54c0u);
L_9c54c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x9c54dcu; f_9c54e4(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c54e4(Cpu *restrict c) {
    FN_ENTER(0x9c54e4u);
L_9c54e4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[5] + 24u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[12] = LD32(c->r[5] + 32u);
    c->v.s[10] = LD32(c->r[5] + 16u);
    c->v.s[14] = LD32(c->r[5] + 36u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.f[12] = c->v.f[12] - c->v.f[4];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[1] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    c->v.f[16] = c->v.f[8] * c->v.f[12];
    c->v.f[18] = c->v.f[6] * c->v.f[2];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[20] = c->v.f[4] * c->v.f[0];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c5574; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c5574u; f_15efddc(c);
L_9c5574:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5598; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
L_9c5598:;
    c->v.s[8] = LD32(c->r[7] + 12u);
    c->v.s[0] = 0x3727c5acu;
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[16] * c->v.f[8];
    c->v.f[2] = fabsf(c->v.f[6]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5750; }
    c->v.s[14] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[7] + 4u);
    c->v.s[10] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[12] = LD32(c->r[5] + 8u);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.f[14] = c->v.f[16] * c->v.f[14];
    c->v.f[1] = c->v.f[16] * c->v.f[2];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[20] * c->v.f[12]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[14] = c->v.f[1] - c->v.f[14];
    c->v.s[1] = c->v.s[14] ^ 0x80000000u;
    c->v.f[6] = c->v.f[1] / c->v.f[6];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5750; }
    vfp_cmp_f(c, c->v.f[14], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c5618; }
    c->v.s[20] = c->v.s[20] ^ 0x80000000u;
    c->v.s[16] = c->v.s[16] ^ 0x80000000u;
    c->v.s[18] = c->v.s[18] ^ 0x80000000u;
L_9c5618:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9c562c; }
    ST32(c->r[6], c->v.s[6]);
    c->v.s[10] = LD32(c->r[5]);
    c->v.s[12] = LD32(c->r[5] + 8u);
L_9c562c:;
    c->v.s[5] = LD32(c->r[5] + 32u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.s[14] = LD32(c->r[5] + 24u);
    c->v.s[3] = LD32(c->r[5] + 16u);
    c->v.f[15] = c->v.f[0] - c->v.f[10];
    c->v.f[7] = c->v.f[12] - c->v.f[1];
    c->v.f[9] = c->v.f[0] - c->v.f[5];
    c->v.f[26] = c->v.f[10] - c->v.f[5];
    c->v.f[24] = c->v.f[4] - c->v.f[1];
    c->v.f[22] = c->v.f[14] - c->v.f[12];
    c->v.f[11] = c->v.f[0] - c->v.f[3];
    c->v.f[5] = c->v.f[5] - c->v.f[3];
    c->v.f[3] = c->v.f[3] - c->v.f[10];
    c->v.f[12] = c->v.f[4] - c->v.f[12];
    c->v.f[13] = c->v.f[1] - c->v.f[14];
    c->v.f[1] = c->v.f[9] * c->v.f[7];
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[26] * c->v.f[24]);
    c->v.f[10] = c->v.f[15] * c->v.f[22];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[7] = c->v.f[4] - c->v.f[14];
    c->v.f[14] = c->v.f[11] * c->v.f[13];
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    if (COND_GE) { vfp_cmp_f(c, c->v.f[10], 0.0f); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_LT) { goto L_9c56a4; }
    vfp_cmp_f(c, c->v.f[14], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c56c4; }
L_9c56a4:;
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9c5750; }
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { vfp_cmp_f(c, c->v.f[14], 0.0f); }
    if (COND_LS) { vfp_mrs_flags(c); }
    if (COND_HI) { goto L_9c5750; }
L_9c56c4:;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[6]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c5714; }
    c->v.s[8] = c->v.s[20] ^ 0x80000000u;
    c->v.s[10] = c->v.s[16] ^ 0x80000000u;
    c->v.s[12] = c->v.s[18] ^ 0x80000000u;
    c->r[0] = 0x0u;
    ST32(c->r[4], c->v.s[0]);
    ST32(c->r[4] + 4u, c->v.s[2]);
    ST32(c->r[4] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[12]);
    ST32(c->r[4] + 20u, c->v.s[10]);
    ST32(c->r[4] + 24u, c->v.s[8]);
    ST32(c->r[4] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9c5714:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9c5758; }
    c->r[0] = 0x0u;
    ST32(c->r[1], c->v.s[0]);
    ST32(c->r[1] + 4u, c->v.s[2]);
    ST32(c->r[1] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[1] + 16u, c->v.s[18]);
    ST32(c->r[1] + 20u, c->v.s[16]);
    ST32(c->r[1] + 24u, c->v.s[20]);
    ST32(c->r[1] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0x28u; ST8(ea, c->r[0]); }
L_9c5750:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9c5758:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c576c(Cpu *restrict c) {
    FN_ENTER(0x9c576cu);
L_9c576c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0x107b66cu;
    c->r[0] = 0x107b670u;
    c->r[5] = 0x0u;
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9c5798u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xda83d2u;
    { uint32_t ea = 0x9c57a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9c57a4u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x9c57a8u; f_9aedcc(c);
    c->r[1] = 0x107b654u;
    c->r[2] = c->r[4];
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9c57c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x107b63cu;
    c->r[1] = 0xda83b8u;
    { uint32_t ea = 0x9c57dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9c57e0u + c->r[1];
    c->r[14] = 0x9c57e0u; f_9aedcc(c);
    c->r[1] = 0x107b634u;
    { uint32_t ea = 0x9c57ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c5814(Cpu *restrict c) {
    FN_ENTER(0x9c5814u);
L_9c5814:;
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = 0x40400000u;
    c->v.f[10] = c->v.f[0] * c->v.f[0];
    c->v.f[8] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[4] * c->v.f[6];
    c->v.s[2] = 0x3f800000u;
    c->v.f[14] = c->v.f[10] * c->v.f[0];
    c->v.f[12] = c->v.f[6] - c->v.f[8];
    c->v.f[2] = c->v.f[12] + c->v.f[2];
    c->v.s[12] = 0xc0c00000u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.s[0] = c->v.s[2];
    return;
}
void f_9c5858(Cpu *restrict c) {
    FN_ENTER(0x9c5858u);
L_9c5858:;
    c->v.s[4] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59ac; }
    c->v.s[2] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c590c; }
    c->v.s[6] = LD32(c->r[0] + 4u);
L_9c587c:;
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b4; }
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->r[1] = 0x1u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b8; }
    c->v.s[8] = LD32(c->r[0] + 12u);
    c->r[1] = 0x2u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b8; }
    c->v.s[8] = LD32(c->r[0] + 16u);
    c->r[1] = 0x3u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b8; }
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->r[1] = 0x4u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b8; }
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->r[1] = 0x5u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b8; }
    c->v.s[8] = LD32(c->r[0] + 28u);
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c59b8; }
    goto L_9c59c8;
L_9c590c:;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->r[1] = 0x1u;
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->r[1] = 0x2u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[8] = LD32(c->r[0] + 12u);
    c->r[1] = 0x3u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[8] = LD32(c->r[0] + 16u);
    c->r[1] = 0x4u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->r[1] = 0x5u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->r[1] = 0x6u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c59a8; }
    c->v.s[8] = LD32(c->r[0] + 28u);
    c->r[1] = 0x7u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_9c587c; }
L_9c59a8:;
    c->r[0] = c->r[0] + (c->r[1] << 2);
L_9c59ac:;
    c->v.s[0] = LD32(c->r[0] + 32u);
    return;
L_9c59b4:;
    c->v.s[8] = c->v.s[6];
L_9c59b8:;
    c->r[2] = c->r[0] + (c->r[1] << 2);
    c->v.s[6] = c->v.s[8];
    c->v.s[4] = LD32(c->r[2]);
    c->r[2] = c->r[1];
L_9c59c8:;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->v.f[10] = c->v.f[6] - c->v.f[4];
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.s[8] = LD32(c->r[0] + 32u);
    c->v.s[12] = LD32(c->r[0] + 36u);
    if (COND_EQ) { goto L_9c5a0c; }
    c->v.s[1] = LD32(c->r[0] - 4u);
    c->v.s[14] = LD32(c->r[0] + 28u);
    c->v.f[1] = c->v.f[4] - c->v.f[1];
    c->v.f[5] = c->v.f[8] - c->v.f[14];
    c->v.f[1] = c->v.f[10] / c->v.f[1];
    c->v.f[1] = c->v.f[2] - c->v.f[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[1] = 0x3f000000u;
    c->v.f[14] = c->v.f[12] - c->v.f[14];
    c->v.f[14] = c->v.f[14] * c->v.f[1];
    goto L_9c5a10;
L_9c5a0c:;
    c->v.f[14] = c->v.f[12] - c->v.f[8];
L_9c5a10:;
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9c5a48; }
    c->v.s[1] = LD32(c->r[0] + 8u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.f[6] = c->v.f[1] - c->v.f[6];
    c->v.f[1] = c->v.f[5] - c->v.f[12];
    c->v.s[5] = c->v.s[12];
    c->v.f[6] = c->v.f[10] / c->v.f[6];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.s[6] = 0x3f000000u;
    c->v.f[1] = c->v.f[5] - c->v.f[8];
    c->v.f[6] = c->v.f[1] * c->v.f[6];
    goto L_9c5a4c;
L_9c5a48:;
    c->v.f[6] = c->v.f[12] - c->v.f[8];
L_9c5a4c:;
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.s[1] = 0x40400000u;
    c->v.f[4] = c->v.f[12] + c->v.f[12];
    c->v.f[5] = c->v.f[8] + c->v.f[8];
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[0] = c->v.f[0] / c->v.f[10];
    c->v.f[4] = c->v.f[5] - c->v.f[4];
    c->v.f[10] = c->v.f[14] + c->v.f[14];
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[10] = c->v.f[12] - c->v.f[10];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[6] = c->v.f[10] - c->v.f[6];
    c->v.f[1] = c->v.f[0] * c->v.f[0];
    c->v.f[12] = c->v.f[0] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[1]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[0] = c->v.f[8] + c->v.f[4];
    c->v.s[4] = 0x0u;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[32]), nftz(c->v.f[4]))); float t1 = nftz(vmax_f(nftz(c->v.f[33]), nftz(c->v.f[5]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    return;
}
void f_9c5aac(Cpu *restrict c) {
    FN_ENTER(0x9c5aacu);
L_9c5aac:;
    c->r[0] = 0x107b354u;
    c->r[3] = 0x0u;
    c->r[12] = 0x0u;
    c->r[1] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40400000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc0400000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0c00000u;
    { uint32_t ea = 0x9c5ad0u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[2] = 0x107936cu;
    c->r[3] = 0xaa3bu;
    c->r[12] = 0xaa3bu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3eaa0000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x3f2a0000u;
    { uint32_t ea = 0x9c5b38u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->r[2] = 0x1079358u;
    { uint32_t ea = 0x9c5b48u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    c->r[2] = 0x1079354u;
    { uint32_t ea = 0x9c5b54u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = 0x107b2c4u;
    { uint32_t ea = 0x9c5b64u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[2] = 0x107b280u;
    { uint32_t ea = 0x9c5bacu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[2] = 0x107b23cu;
    { uint32_t ea = 0x9c5bf4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[0]); }
    return;
}
void f_9c5c50(Cpu *restrict c) {
    FN_ENTER(0x9c5c50u);
L_9c5c50:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x9c5c78u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x9c5c84u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x9c5c90u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x9c5c9cu; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x9c5ca8u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x9c5cb4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.s[6] = c->v.s[18] ^ 0x80000000u;
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13];
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[20]);
    ST32(c->r[13] + 16u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    ST32(c->r[13] + 20u, c->v.s[8]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 32u, c->v.s[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 36u, c->v.s[4]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9c5d50u; f_21ebe8(c);
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c5d5c(Cpu *restrict c) {
    FN_ENTER(0x9c5d5cu);
L_9c5d5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x9c5d78u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x9c5d84u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x9c5d90u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6]);
    c->r[14] = 0x9c5d9cu; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->r[14] = 0x9c5da8u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->r[14] = 0x9c5db4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.s[6] = c->v.s[18] ^ 0x80000000u;
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->r[0] = 0x0u;
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[6]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[20]);
    ST32(c->r[4] + 16u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    ST32(c->r[4] + 20u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[4] + 36u, c->v.s[4]);
    ST32(c->r[4] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c5e4c(Cpu *restrict c) {
    FN_ENTER(0x9c5e4cu);
L_9c5e4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[5] = c->r[1];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[6] = c->r[3];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[16] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c5ea8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c5ea8u; f_15efddc(c);
L_9c5ea8:;
    c->v.s[28] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5ecc; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_9c5ecc:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.f[24] = c->v.f[18] * c->v.f[2];
    c->v.f[22] = c->v.f[16] * c->v.f[4];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[26] = c->v.f[20] * c->v.f[0];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c5f14; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c5f14u; f_15efddc(c);
L_9c5f14:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c5f34; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[22] = c->v.f[0] * c->v.f[22];
L_9c5f34:;
    c->v.s[6] = c->v.s[22] ^ 0x80000000u;
    c->v.s[8] = c->v.s[24] ^ 0x80000000u;
    c->v.f[10] = c->v.f[16] * c->v.f[22];
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[18] * c->v.f[26]);
    c->v.s[12] = c->v.s[26] ^ 0x80000000u;
    c->r[0] = 0x0u;
    ST32(c->r[4], c->v.s[6]);
    ST32(c->r[4] + 16u, c->v.s[8]);
    c->v.f[8] = c->v.f[20] * c->v.f[26];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[16] * c->v.f[24]);
    ST32(c->r[4] + 32u, c->v.s[12]);
    c->v.f[12] = c->v.f[18] * c->v.f[24];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[6] = c->v.f[24] * c->v.f[2];
    c->v.f[14] = c->v.f[10] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[2] = c->v.f[20] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.s[0] = c->v.s[16] ^ 0x80000000u;
    ST32(c->r[4] + 48u, c->v.s[6]);
    ST32(c->r[4] + 4u, c->v.s[8]);
    ST32(c->r[4] + 20u, c->v.s[10]);
    ST32(c->r[4] + 36u, c->v.s[12]);
    c->v.s[8] = c->v.s[18] ^ 0x80000000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.s[6] = c->v.s[14] ^ 0x80000000u;
    ST32(c->r[4] + 52u, c->v.s[6]);
    c->v.s[6] = c->v.s[20] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[6]);
    ST32(c->r[4] + 40u, c->v.s[0]);
    ST32(c->r[4] + 56u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c5fec(Cpu *restrict c) {
    FN_ENTER(0x9c5fecu);
L_9c5fec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[5] = c->r[1];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[6] = c->r[3];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[16] = c->v.f[8] - c->v.f[2];
    c->v.f[20] = c->v.f[6] - c->v.f[0];
    c->v.f[18] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6048; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c6048u; f_15efddc(c);
L_9c6048:;
    c->v.s[28] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c606c; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
L_9c606c:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.f[24] = c->v.f[20] * c->v.f[2];
    c->v.f[22] = c->v.f[18] * c->v.f[4];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[26] = c->v.f[16] * c->v.f[0];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c60b4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c60b4u; f_15efddc(c);
L_9c60b4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c60d4; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[22] = c->v.f[0] * c->v.f[22];
L_9c60d4:;
    c->v.f[8] = c->v.f[18] * c->v.f[22];
    c->v.f[10] = c->v.f[16] * c->v.f[26];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[20] * c->v.f[26]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[18] * c->v.f[24]);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.f[12] = c->v.f[20] * c->v.f[24];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[16] * c->v.f[22]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    ST32(c->r[4], c->v.s[22]);
    ST32(c->r[4] + 16u, c->v.s[24]);
    ST32(c->r[4] + 32u, c->v.s[26]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[24] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[14] = c->v.f[8] * c->v.f[2];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[4] + 48u, c->v.s[6]);
    ST32(c->r[4] + 4u, c->v.s[10]);
    ST32(c->r[4] + 20u, c->v.s[8]);
    ST32(c->r[4] + 36u, c->v.s[12]);
    c->v.s[6] = c->v.s[14] ^ 0x80000000u;
    ST32(c->r[4] + 52u, c->v.s[6]);
    ST32(c->r[4] + 8u, c->v.s[20]);
    ST32(c->r[4] + 24u, c->v.s[16]);
    ST32(c->r[4] + 40u, c->v.s[18]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[4] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c617c(Cpu *restrict c) {
    FN_ENTER(0x9c617cu);
L_9c617c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = 0x3f000000u;
    c->v.s[16] = c->v.s[3];
    c->v.s[18] = c->v.s[1];
    c->r[4] = c->r[0];
    c->v.f[22] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x9c61a4u; f_15f0184(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x9c61b0u; f_15f0184(c);
    c->r[0] = 0x1073a04u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[6] = c->v.f[18] - c->v.f[20];
    c->v.f[4] = c->v.f[2] / c->v.f[24];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    { uint32_t ea = 0x9c61ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[18] / c->v.f[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = c->v.f[4] / c->v.f[16];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    ST32(c->r[4], c->v.s[4]);
    ST32(c->r[4] + 20u, c->v.s[0]);
    c->v.f[0] = -(float)(c->v.f[6] * c->v.f[20]);
    c->r[0] = 0x0u;
    ST32(c->r[4] + 40u, c->v.s[2]);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c6278(Cpu *restrict c) {
    FN_ENTER(0x9c6278u);
L_9c6278:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = 0x3f000000u;
    c->v.s[16] = c->v.s[3];
    c->v.s[18] = c->v.s[1];
    c->r[4] = c->r[0];
    c->v.f[22] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x9c62a0u; f_15f0184(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x9c62acu; f_15f0184(c);
    c->r[0] = 0x1073908u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[6] = c->v.f[18] - c->v.f[20];
    c->v.f[4] = c->v.f[2] / c->v.f[24];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    { uint32_t ea = 0x9c62c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[18] / c->v.f[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = c->v.f[4] / c->v.f[16];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    ST32(c->r[4], c->v.s[4]);
    ST32(c->r[4] + 20u, c->v.s[0]);
    c->v.f[0] = -(float)(c->v.f[2] * c->v.f[20]);
    c->r[0] = 0x0u;
    ST32(c->r[4] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    ST32(c->r[4] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c636c(Cpu *restrict c) {
    FN_ENTER(0x9c636cu);
L_9c636c:;
    c->v.f[4] = c->v.f[2] + c->v.f[2];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbf800000u;
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[4] / c->v.f[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] - c->v.f[3];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[3] / c->v.f[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_9c63d4(Cpu *restrict c) {
    FN_ENTER(0x9c63d4u);
L_9c63d4:;
    c->v.f[4] = c->v.f[2] + c->v.f[2];
    c->r[1] = 0x0u;
    c->r[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[4] / c->v.f[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.f[0] = c->v.f[3] - c->v.f[2];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[3] / c->v.f[0];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] - c->v.f[3];
    c->v.f[2] = c->v.f[2] * c->v.f[3];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_9c6440(Cpu *restrict c) {
    FN_ENTER(0x9c6440u);
L_9c6440:;
    c->v.s[4] = 0x40000000u;
    c->r[1] = 0x0u;
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[4] / c->v.f[1];
    c->v.f[4] = c->v.f[2] - c->v.f[3];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] / c->v.f[4];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    ST32(c->r[0] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_9c64a8(Cpu *restrict c) {
    FN_ENTER(0x9c64a8u);
L_9c64a8:;
    c->v.s[4] = 0x40000000u;
    c->r[1] = 0x0u;
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[4] / c->v.f[1];
    c->v.f[4] = c->v.f[3] - c->v.f[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    ST32(c->r[0] + 40u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] - c->v.f[3];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_9c6514(Cpu *restrict c) {
    FN_ENTER(0x9c6514u);
L_9c6514:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 8u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c6590; }
    c->v.s[2] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9c65b4; }
    c->v.s[0] = LD32(c->r[5] + 24u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c655cu; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x9c656cu; f_15f0190(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c6584u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9c6590:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[1] = LD32(c->r[5] + 20u);
    c->r[14] = 0x9c659cu; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbfc90000u;
    ST32(c->r[4], c->v.s[0]);
    goto L_9c65d0;
L_9c65b4:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[1] = LD32(c->r[5] + 20u);
    c->r[14] = 0x9c65c0u; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    ST32(c->r[4], c->v.s[0]);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3fc90000u;
L_9c65d0:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c65e0(Cpu *restrict c) {
    FN_ENTER(0x9c65e0u);
L_9c65e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 4u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c6658; }
    c->v.s[2] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9c667c; }
    c->v.s[1] = LD32(c->r[5] + 20u);
    c->v.s[0] = LD32(c->r[5] + 36u);
    c->r[14] = 0x9c6624u; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c6638u; f_15f0190(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x9c664cu; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9c6658:;
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c6668u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = 0x0u;
    c->r[0] = 0xfdbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3fc90000u;
    goto L_9c6698;
L_9c667c:;
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->r[14] = 0x9c6688u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = 0x0u;
    c->r[0] = 0xfdbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbfc90000u;
L_9c6698:;
    ST32(c->r[4], c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c66ac(Cpu *restrict c) {
    FN_ENTER(0x9c66acu);
L_9c66ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 24u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c6724; }
    c->v.s[2] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9c6748; }
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->r[14] = 0x9c66f0u; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 24u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c6704u; f_15f0190(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[1] = LD32(c->r[5] + 20u);
    c->r[14] = 0x9c6718u; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9c6724:;
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c6734u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = 0x0u;
    c->r[0] = 0xfdbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3fc90000u;
    goto L_9c6764;
L_9c6748:;
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x9c6754u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = 0x0u;
    c->r[0] = 0xfdbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbfc90000u;
L_9c6764:;
    ST32(c->r[4] + 4u, c->v.s[2]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c6778(Cpu *restrict c) {
    FN_ENTER(0x9c6778u);
L_9c6778:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 16u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c67f4; }
    c->v.s[2] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9c6818; }
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c67c0u; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->r[14] = 0x9c67d0u; f_15f0190(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 24u);
    c->v.s[1] = LD32(c->r[5] + 20u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c67e8u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9c67f4:;
    c->v.s[0] = LD32(c->r[5] + 36u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->r[14] = 0x9c6800u; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbfc90000u;
    ST32(c->r[4] + 4u, c->v.s[0]);
    goto L_9c6834;
L_9c6818:;
    c->v.s[0] = LD32(c->r[5] + 36u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->r[14] = 0x9c6824u; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3fc90000u;
L_9c6834:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    ST32(c->r[4], c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c6844(Cpu *restrict c) {
    FN_ENTER(0x9c6844u);
L_9c6844:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 32u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c68bc; }
    c->v.s[2] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9c68e8; }
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->r[14] = 0x9c6888u; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c689cu; f_15f0190(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 36u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->r[14] = 0x9c68b0u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9c68bc:;
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[1] = c->v.s[2] ^ 0x80000000u;
    c->r[14] = 0x9c68d0u; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3fc90000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    goto L_9c6904;
L_9c68e8:;
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[1] = LD32(c->r[5] + 8u);
    c->r[14] = 0x9c68f4u; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbfc90000u;
L_9c6904:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[4], c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c6914(Cpu *restrict c) {
    FN_ENTER(0x9c6914u);
L_9c6914:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 36u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c6990; }
    c->v.s[2] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9c69b4; }
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[1] = LD32(c->r[5] + 20u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c695cu; f_15efd70(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 36u);
    c->r[14] = 0x9c696cu; f_15f0190(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[1] = LD32(c->r[5] + 40u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[14] = 0x9c6984u; f_15efd70(c);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9c6990:;
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x9c699cu; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbfc90000u;
    ST32(c->r[4] + 8u, c->v.s[0]);
    goto L_9c69d0;
L_9c69b4:;
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->r[14] = 0x9c69c0u; f_15efd70(c);
    c->v.s[2] = 0x0u;
    c->r[0] = 0xfdbu;
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3fc90000u;
L_9c69d0:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 4u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c69e0(Cpu *restrict c) {
    FN_ENTER(0x9c69e0u);
L_9c69e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; c->r[6] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[24] = c->r[8];
    c->v.s[22] = c->r[6];
    c->v.s[26] = c->r[7];
    c->v.f[20] = c->v.f[24] * c->v.f[24];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[18] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    c->v.s[16] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6a30; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9c6a2cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9c6a30:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6a48; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9c6a44u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9c6a48:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c6a78; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[18];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->r[8] = c->v.s[2];
    c->r[6] = c->v.s[4];
    c->r[7] = c->v.s[0];
L_9c6a78:;
    c->v.s[0] = 0xc0000000u;
    c->v.s[2] = c->r[6];
    c->v.s[6] = 0x3f800000u;
    c->v.s[4] = c->r[8];
    c->v.s[10] = c->r[7];
    c->v.s[14] = LD32(c->r[5] + 12u);
    c->r[0] = 0x0u;
    c->v.f[8] = c->v.f[2] * c->v.f[0];
    c->v.s[1] = c->v.s[6];
    c->v.f[12] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[3] = c->v.f[12] * c->v.f[2];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    ST32(c->r[4], c->v.s[1]);
    c->v.s[1] = c->v.s[6];
    ST32(c->r[4] + 4u, c->v.s[3]);
    ST32(c->r[4] + 8u, c->v.s[2]);
    c->v.f[2] = c->v.f[4] * c->v.f[8];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[12]);
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[4] * c->v.f[0];
    c->v.f[4] = c->v.f[12] * c->v.f[10];
    ST32(c->r[4] + 20u, c->v.s[1]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    c->v.f[2] = c->v.f[8] * c->v.f[10];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[2]);
    c->v.f[2] = c->v.f[14] / c->v.f[16];
    ST32(c->r[4] + 36u, c->v.s[4]);
    ST32(c->r[4] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[8] * c->v.f[2];
    c->v.f[6] = c->v.f[12] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4] + 48u, c->v.s[4]);
    ST32(c->r[4] + 52u, c->v.s[6]);
    ST32(c->r[4] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c6b2c(Cpu *restrict c) {
    FN_ENTER(0x9c6b2cu);
L_9c6b2c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x78u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->v.s[26] = LD32(c->r[2] + 16u);
    c->v.s[30] = LD32(c->r[2] + 20u);
    c->v.s[28] = LD32(c->r[2] + 24u);
    c->v.s[17] = LD32(c->r[2] + 28u);
    { uint32_t ea = c->r[2]; c->r[5] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[2] + 48u);
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 52u);
    ST32(c->r[13] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 56u);
    ST32(c->r[13] + 60u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 60u);
    ST32(c->r[13] + 64u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->v.s[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->v.s[27] = c->r[9];
    c->v.s[31] = c->r[11];
    c->v.s[18] = c->r[0];
    ST32(c->r[13], c->v.s[0]);
    c->v.f[23] = c->v.f[0] * c->v.f[0];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.s[0] = LD32(c->r[1] + 48u);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[31] * c->v.f[31]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 52u);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[18] * c->v.f[18]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 56u);
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 60u);
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[23]);
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->v.s[22] = LD32(c->r[1] + 16u);
    c->v.s[19] = LD32(c->r[1] + 20u);
    c->v.s[24] = LD32(c->r[1] + 24u);
    c->v.s[20] = LD32(c->r[1] + 28u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6c40; }
    c->v.s[0] = c->v.s[23];
    c->r[14] = 0x9c6c40u; f_15efddc(c);
L_9c6c40:;
    c->v.f[21] = c->v.f[19] * c->v.f[19];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[22] * c->v.f[22]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[21]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6c6c; }
    c->v.s[0] = c->v.s[21];
    c->r[14] = 0x9c6c6cu; f_15efddc(c);
L_9c6c6c:;
    c->v.s[20] = c->r[6];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[29] = c->r[8];
    ST32(c->r[13] + 76u, c->v.s[0]);
    c->v.f[25] = c->v.f[20] * c->v.f[20];
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.s[22] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = c->r[0];
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = sqrtf(c->v.f[25]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6cb0; }
    c->v.s[0] = c->v.s[25];
    c->r[14] = 0x9c6cb0u; f_15efddc(c);
L_9c6cb0:;
    c->v.s[2] = c->r[10];
    ST32(c->r[13] + 72u, c->v.s[0]);
    c->v.s[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[19] = c->v.f[2] * c->v.f[2];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[0] * c->v.f[0]);
    ST32(c->r[13] + 12u, c->v.s[2]);
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 8u, c->v.s[2]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.s[0] = c->r[0];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[0] * c->v.f[0]);
    ST32(c->r[13] + 4u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[19]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6d04; }
    c->v.s[0] = c->v.s[19];
    c->r[14] = 0x9c6d04u; f_15efddc(c);
L_9c6d04:;
    c->v.f[30] = c->v.f[30] * c->v.f[30];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[26] * c->v.f[26]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = sqrtf(c->v.f[30]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6d30; }
    c->v.s[0] = c->v.s[30];
    c->r[14] = 0x9c6d30u; f_15efddc(c);
L_9c6d30:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[17] = c->v.f[2] * c->v.f[2];
    ST32(c->r[13] + 24u, c->v.s[2]);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[0] * c->v.f[0]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[26] = c->v.s[2];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.s[0] = c->r[0];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.s[28] = c->v.s[0];
    c->v.f[0] = sqrtf(c->v.f[17]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6d8c; }
    c->v.s[0] = c->v.s[17];
    c->r[14] = 0x9c6d8cu; f_15efddc(c);
L_9c6d8c:;
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[23]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6da8; }
    c->v.s[0] = c->v.s[23];
    c->r[14] = 0x9c6da8u; f_15efddc(c);
L_9c6da8:;
    c->v.s[23] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c6de8; }
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13]);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[31] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[6] = c->v.f[27] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->r[0] = c->v.s[0];
    c->r[11] = c->v.s[2];
    c->r[7] = c->v.s[4];
    c->r[9] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
L_9c6de8:;
    c->v.f[0] = sqrtf(c->v.f[21]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6e00; }
    c->v.s[0] = c->v.s[21];
    c->r[14] = 0x9c6e00u; f_15efddc(c);
L_9c6e00:;
    c->v.f[0] = sqrtf(c->v.f[25]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6e18; }
    c->v.s[0] = c->v.s[25];
    c->r[14] = 0x9c6e18u; f_15efddc(c);
L_9c6e18:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c6e54; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    c->v.f[6] = c->v.f[29] * c->v.f[0];
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->r[0] = c->v.s[2];
    c->r[6] = c->v.s[4];
    c->r[8] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
L_9c6e54:;
    c->v.f[0] = sqrtf(c->v.f[19]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6e6c; }
    c->v.s[0] = c->v.s[19];
    c->r[14] = 0x9c6e6cu; f_15efddc(c);
L_9c6e6c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c6eb8; }
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 12u);
    c->v.s[6] = LD32(c->r[13] + 16u);
    c->v.s[8] = LD32(c->r[13] + 4u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[6] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->r[0] = c->v.s[2];
    c->r[10] = c->v.s[4];
    c->r[5] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
L_9c6eb8:;
    c->v.f[0] = sqrtf(c->v.f[30]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6ed0; }
    c->v.s[0] = c->v.s[30];
    c->r[14] = 0x9c6ed0u; f_15efddc(c);
L_9c6ed0:;
    c->v.f[0] = sqrtf(c->v.f[17]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c6ee8; }
    c->v.s[0] = c->v.s[17];
    c->r[14] = 0x9c6ee8u; f_15efddc(c);
L_9c6ee8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c6f34; }
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.s[6] = LD32(c->r[13] + 20u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[26] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[6] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
L_9c6f34:;
    c->v.s[17] = 0x3f800000u;
    c->v.s[0] = c->r[5];
    c->v.s[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[8];
    c->v.s[1] = c->r[6];
    c->v.f[30] = c->v.f[17] - c->v.f[16];
    c->v.s[6] = c->r[0];
    c->v.f[4] = c->v.f[30] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[0] = c->r[10];
    c->v.s[2] = c->r[7];
    c->v.f[6] = c->v.f[30] * c->v.f[6];
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[2] = c->r[11];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[16]);
    ST32(c->r[4], c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[4] + 4u, c->v.s[0]);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[30] * c->v.f[8];
    ST32(c->r[4] + 8u, c->v.s[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[30] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[16]);
    ST32(c->r[4] + 12u, c->v.s[8]);
    c->v.s[14] = c->r[0];
    c->v.f[2] = c->v.f[30] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[30] * c->v.f[14];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[4] + 32u, c->v.s[10]);
    c->v.f[12] = c->v.f[30] * c->v.f[12];
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[4] + 36u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[16]);
    c->v.s[10] = c->r[0];
    c->v.f[2] = c->v.f[30] * c->v.f[2];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[16]);
    ST32(c->r[4] + 40u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[13] + 36u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    ST32(c->r[4] + 44u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[13] + 40u);
    c->v.s[4] = LD32(c->r[13] + 60u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[16]);
    c->v.f[10] = c->v.f[30] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[16]);
    c->v.f[4] = c->v.f[30] * c->v.f[4];
    ST32(c->r[4] + 48u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->v.f[6] = c->v.f[30] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 44u);
    ST32(c->r[4] + 52u, c->v.s[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[2] = LD32(c->r[13] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    ST32(c->r[4] + 56u, c->v.s[4]);
    ST32(c->r[4] + 60u, c->v.s[6]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c7078; }
    c->r[14] = 0x9c7074u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9c7078:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c7098; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_9c70cc;
L_9c7098:;
    c->v.f[2] = c->v.f[17] / c->v.f[2];
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[4] = LD32(c->r[4] + 4u);
    c->v.s[6] = LD32(c->r[4] + 8u);
    c->v.s[8] = LD32(c->r[4] + 12u);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[0];
    c->r[3] = c->v.s[2];
L_9c70cc:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[3]); }
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
    if (COND_VC) { goto L_9c7114; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c7114u; f_15efddc(c);
L_9c7114:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c7138; }
    c->v.s[0] = LD32(c->r[4] + 36u);
    c->v.s[2] = LD32(c->r[4] + 40u);
    c->v.s[4] = LD32(c->r[4] + 32u);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9c7160;
L_9c7138:;
    c->v.f[10] = c->v.f[17] / c->v.f[0];
    c->v.s[8] = LD32(c->r[4] + 44u);
    c->v.s[4] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 36u);
    c->v.f[8] = c->v.f[10] * c->v.f[8];
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[0] = c->v.f[10] * c->v.f[6];
    c->v.f[4] = c->v.f[10] * c->v.f[4];
    c->r[0] = c->v.s[8];
L_9c7160:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[4]);
    ST32(c->r[4] + 36u, c->v.s[0]);
    ST32(c->r[4] + 40u, c->v.s[2]);
    c->v.s[18] = 0x0u;
    c->r[0] = 0x0u;
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[10] = LD32(c->r[4] + 8u);
    c->v.s[8] = LD32(c->r[4] + 4u);
    c->v.f[12] = c->v.f[2] * c->v.f[6];
    c->v.f[14] = c->v.f[0] * c->v.f[10];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[0] * c->v.f[6]);
    ST32(c->r[4] + 16u, c->v.s[14]);
    c->v.f[2] = c->v.f[12] * c->v.f[12];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[14]);
    ST32(c->r[4] + 20u, c->v.s[12]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    ST32(c->r[4] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + c->v.f[18];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c71d4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c71d4u; f_15efddc(c);
L_9c71d4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[23]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c71f4; }
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4] + 20u);
    c->v.s[2] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    goto L_9c7218;
L_9c71f4:;
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->v.s[4] = LD32(c->r[4] + 20u);
    c->v.s[2] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.s[8] = LD32(c->r[4] + 16u);
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
L_9c7218:;
    c->v.s[14] = LD32(c->r[13] + 68u);
    c->v.s[1] = LD32(c->r[13] + 80u);
    c->v.s[8] = LD32(c->r[4]);
    c->v.s[10] = LD32(c->r[4] + 4u);
    c->v.s[12] = LD32(c->r[4] + 8u);
    c->v.s[5] = LD32(c->r[13] + 28u);
    c->v.f[14] = c->v.f[30] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[16]);
    c->v.f[1] = c->v.f[14] * c->v.f[8];
    c->v.f[3] = c->v.f[14] * c->v.f[10];
    ST32(c->r[4], c->v.s[1]);
    c->v.f[1] = c->v.f[14] * c->v.f[12];
    ST32(c->r[4] + 4u, c->v.s[3]);
    c->v.f[3] = c->v.f[30] * c->v.f[5];
    ST32(c->r[4] + 8u, c->v.s[1]);
    c->v.s[5] = LD32(c->r[13] + 76u);
    c->v.s[1] = LD32(c->r[4] + 12u);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[16]);
    c->v.f[14] = c->v.f[14] * c->v.f[1];
    c->v.f[5] = c->v.f[10] * c->v.f[2];
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[12] * c->v.f[4]);
    ST32(c->r[4] + 12u, c->v.s[14]);
    c->v.f[1] = c->v.f[3] * c->v.f[0];
    c->v.f[14] = c->v.f[3] * c->v.f[4];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[7] = c->v.f[3] * c->v.f[2];
    c->v.f[6] = c->v.f[3] * c->v.f[6];
    ST32(c->r[4] + 16u, c->v.s[1]);
    c->v.s[1] = LD32(c->r[13] + 32u);
    ST32(c->r[4] + 20u, c->v.s[14]);
    c->v.f[14] = c->v.f[12] * c->v.f[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[9] = LD32(c->r[13] + 72u);
    ST32(c->r[4] + 24u, c->v.s[7]);
    ST32(c->r[4] + 28u, c->v.s[6]);
    c->v.f[1] = c->v.f[30] * c->v.f[1];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[16]);
    c->v.f[2] = c->v.f[1] * c->v.f[5];
    c->v.f[0] = c->v.f[1] * c->v.f[14];
    c->v.f[4] = c->v.f[1] * c->v.f[4];
    c->v.f[6] = c->v.f[1] * c->v.f[18];
    ST32(c->r[4] + 32u, c->v.s[2]);
    ST32(c->r[4] + 36u, c->v.s[0]);
    ST32(c->r[4] + 40u, c->v.s[4]);
    ST32(c->r[4] + 44u, c->v.s[6]);
    c->r[13] = c->r[13] + 0x78u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9c72e4(Cpu *restrict c) {
    FN_ENTER(0x9c72e4u);
L_9c72e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1071f88u;
    c->v.s[16] = 0x40c90fdbu;
    c->v.s[18] = 0x39800000u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x9c7304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + 0x4u;
    goto L_9c7310;
L_9c7310:;
    c->v.s[0] = c->r[5];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    c->r[14] = 0x9c7324u; f_15efde8(c);
    c->r[0] = c->r[5] + 0x1u;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    ST32(c->r[4] - 4u, c->v.s[0]);
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    c->v.f[0] = c->v.f[2] * c->v.f[18];
    c->r[14] = 0x9c7340u; f_15efde8(c);
    c->r[5] = c->r[5] + 0x2u;
    ST32(c->r[4], c->v.s[0]);
    c->r[4] = c->r[4] + 0x8u;
    (void)f_subs(c, c->r[5], 0x1000u);
    if (COND_NE) { goto L_9c7310; }
    c->r[1] = 0x1079accu;
    c->r[0] = 0x0u;
    c->r[2] = 0x3c800000u;
    { uint32_t ea = 0x9c7368u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9c7364:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + c->r[0]; ST32(ea, c->r[2]); c->r[3] = ea; }
    c->r[0] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x4000u);
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_9c7364; }
    c->r[0] = 0x1079a98u;
    c->r[4] = 0x0u;
    c->r[5] = 0x3f800000u;
    c->r[12] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = 0x9c73a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x1079a84u;
    { uint32_t ea = 0x9c73b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x1079a70u;
    { uint32_t ea = 0x9c73d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x1079a5cu;
    { uint32_t ea = 0x9c73e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x1072718u;
    { uint32_t ea = 0x9c7400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[0] = 0x1079a34u;
    { uint32_t ea = 0x9c7414u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1079a24u;
    { uint32_t ea = 0x9c7428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[0] = 0x1079a14u;
    { uint32_t ea = 0x9c743cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1078b3cu;
    { uint32_t ea = 0x9c7450u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[0] = 0x10799f4u;
    { uint32_t ea = 0x9c7460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[0] = 0x10799e8u;
    { uint32_t ea = 0x9c7470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[0] = 0x10799dcu;
    { uint32_t ea = 0x9c7480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1071d8cu;
    { uint32_t ea = 0x9c7490u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x10799b8u;
    { uint32_t ea = 0x9c74a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x10799a4u;
    { uint32_t ea = 0x9c74c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[12]); }
    c->r[0] = 0x107774cu;
    { uint32_t ea = 0x9c74d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x1079978u;
    { uint32_t ea = 0x9c74f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x1079964u;
    { uint32_t ea = 0x9c7508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x1079954u;
    { uint32_t ea = 0x9c751cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x10748a4u;
    { uint32_t ea = 0x9c7530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x107992cu;
    { uint32_t ea = 0x9c7548u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x800000u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x1079914u;
    { uint32_t ea = 0x9c7564u + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    c->r[3] = 0x10798f8u;
    { uint32_t ea = 0x9c7584u + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x34000000u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    c->r[2] = 0x10715acu;
    { uint32_t ea = 0x9c75a0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x1072624u;
    { uint32_t ea = 0x9c75b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x107982cu;
    { uint32_t ea = 0x9c75d0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x1071c20u;
    { uint32_t ea = 0x9c75e8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x1071c04u;
    { uint32_t ea = 0x9c7600u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x1071c44u;
    { uint32_t ea = 0x9c7614u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x1079858u;
    { uint32_t ea = 0x9c7628u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x10797b0u;
    { uint32_t ea = 0x9c7640u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x10797a8u;
    { uint32_t ea = 0x9c7658u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x1071c10u;
    { uint32_t ea = 0x9c7670u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x1079804u;
    { uint32_t ea = 0x9c7680u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x10797f8u;
    { uint32_t ea = 0x9c7690u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x10797ecu;
    { uint32_t ea = 0x9c76a0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); ST32(ea + 4, c->r[5]); }
    c->r[2] = 0x10797e4u;
    { uint32_t ea = 0x9c76acu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10797d8u;
    { uint32_t ea = 0x9c76bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = 0x10758b4u;
    c->r[1] = 0x40u;
    { uint32_t ea = 0x9c76d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9c76d0u; f_15efdc4(c);
    c->r[0] = 0x10724dcu;
    c->r[1] = 0xabbu;
    c->r[2] = 0x2c13u;
    c->r[3] = 0x85dbu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3e990000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3f160000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbda60000u;
    { uint32_t ea = 0x9c76f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[0] = 0x107975cu;
    { uint32_t ea = 0x9c773cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xca2eu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbe2c0000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f000000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9ae9u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbea90000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x5e89u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbed60000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x747eu;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3dea0000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[0] = 0x1077904u;
    c->r[1] = 0x331eu;
    c->r[2] = 0xd1e1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbeb00000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbf360000u;
    { uint32_t ea = 0x9c77b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0xd0e5u;
    c->r[3] = c->r[0] + 0x20u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3fe20000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x74bcu;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3fb30000u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[0] = 0x1079690u;
    c->r[1] = 0x30u;
    { uint32_t ea = 0x9c780cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9c780cu; f_15efdc4(c);
    c->r[0] = 0x1079688u;
    { uint32_t ea = 0x9c7818u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[5]); }
    c->r[0] = 0x107235cu;
    { uint32_t ea = 0x9c7850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    c->r[0] = 0x1077370u;
    { uint32_t ea = 0x9c7868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c793c(Cpu *restrict c) {
    FN_ENTER(0x9c793cu);
L_9c793c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[12]);
    if (COND_LE) { goto L_9c79f4; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LE) { goto L_9c79fc; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_GE) { goto L_9c79fc; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[14]);
    if (COND_GE) { goto L_9c79fc; }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_LT) { (void)f_subs(c, c->r[7], c->r[4]); }
    if (COND_GE) { goto L_9c7a28; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_GT) { (void)f_subs(c, c->r[9], c->r[6]); }
    if (COND_LE) { goto L_9c7a28; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    c->r[12] = c->r[2] + 0x24u;
    { uint32_t ea = c->r[0] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x3u;
    goto L_9c7a10;
L_9c79f4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_9c7a00;
L_9c79fc:;
    c->r[5] = c->r[6];
L_9c7a00:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
L_9c7a08:;
    c->r[3] = 0x1u;
    c->r[0] = 0x0u;
L_9c7a10:;
    { uint32_t ea = c->r[2] + (c->r[0] << 4); ST32(ea, c->r[12]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[14]); }
L_9c7a20:;
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9c7a28:;
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_GE) { (void)f_subs(c, c->r[7], c->r[4]); }
    if (COND_LT) { goto L_9c7a44; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_LE) { c->r[3] = 0x0u; }
    if (COND_LE) { (void)f_subs(c, c->r[9], c->r[6]); }
    if (COND_LE) { goto L_9c7a20; }
L_9c7a44:;
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_LE) { (void)f_subs(c, c->r[5], c->r[14]); }
    if (COND_GT) { goto L_9c7aa0; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_LE) { goto L_9c7af8; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[7], c->r[4]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_GE) { goto L_9c7b24; }
    c->r[3] = c->r[2] + 0x14u;
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_9c7c80;
L_9c7aa0:;
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_GE) { (void)f_subs(c, c->r[9], c->r[6]); }
    if (COND_LT) { goto L_9c7b34; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_LE) { goto L_9c7b5c; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[9]); }
    (void)f_subs(c, c->r[7], c->r[4]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_GE) { goto L_9c7b24; }
    c->r[3] = c->r[2] + 0x14u;
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[5] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    goto L_9c7c80;
L_9c7af8:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_9c7a08; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
L_9c7b18:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_9c7b84;
L_9c7b24:;
    c->r[3] = 0x2u;
    c->r[0] = 0x1u;
    c->r[4] = c->r[6];
    goto L_9c7a10;
L_9c7b34:;
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_LE) { goto L_9c7b90; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_9c7bd0; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_9c7b80;
L_9c7b5c:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_9c7bbc; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
L_9c7b80:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
L_9c7b84:;
    c->r[3] = 0x2u;
    c->r[0] = 0x1u;
    goto L_9c7a10;
L_9c7b90:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GE) { goto L_9c7bf4; }
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_GT) { goto L_9c7c10; }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_LT) { goto L_9c7c10; }
    c->r[3] = 0x1u;
    c->r[0] = 0x0u;
    c->r[12] = c->r[7];
    c->r[5] = c->r[6];
    goto L_9c7a10;
L_9c7bbc:;
    c->r[3] = 0x1u;
    c->r[0] = 0x0u;
    c->r[5] = c->r[6];
    c->r[14] = c->r[9];
    goto L_9c7a10;
L_9c7bd0:;
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_GT) { goto L_9c7c4c; }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_LT) { goto L_9c7c4c; }
    c->r[3] = 0x1u;
    c->r[0] = 0x0u;
    c->r[5] = c->r[6];
    c->r[4] = c->r[8];
    goto L_9c7a10;
L_9c7bf4:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_9c7b18;
L_9c7c10:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_9c7c7c;
L_9c7c4c:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
L_9c7c7c:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
L_9c7c80:;
    c->r[3] = 0x3u;
    c->r[0] = 0x2u;
    goto L_9c7a10;
}
void f_9c7c8c(Cpu *restrict c) {
    FN_ENTER(0x9c7c8cu);
L_9c7c8c:;
    c->r[0] = 0x1071674u;
    { uint32_t ea = 0x9c7c98u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10791f8u;
    { uint32_t ea = 0x9c7cacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10775f4u;
    { uint32_t ea = 0x9c7cbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x10791d4u;
    { uint32_t ea = 0x9c7cd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10791c8u;
    { uint32_t ea = 0x9c7ce4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10791bcu;
    { uint32_t ea = 0x9c7cf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x10791a8u;
    { uint32_t ea = 0x9c7d0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x107919cu;
    { uint32_t ea = 0x9c7d1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1079190u;
    { uint32_t ea = 0x9c7d2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    return;
}
void f_9c7d54(Cpu *restrict c) {
    FN_ENTER(0x9c7d54u);
L_9c7d54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = c->r[13] + 0x4u;
    c->r[14] = 0x9c7d64u; f_a098b4(c);
    c->v.s[0] = LD32(c->r[13] + 4u);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c7d70(Cpu *restrict c) {
    FN_ENTER(0x9c7d70u);
L_9c7d70:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[22] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[2];
    c->v.f[18] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c7dd4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c7dd4u; f_15efddc(c);
L_9c7dd4:;
    c->v.s[16] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c7df8; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
L_9c7df8:;
    c->v.s[27] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[5] + 36u);
    c->v.s[23] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[21] = LD32(c->r[5] + 8u);
    c->v.s[4] = LD32(c->r[5] + 40u);
    c->v.f[26] = c->v.f[2] - c->v.f[27];
    c->v.f[24] = c->v.f[0] - c->v.f[23];
    c->v.f[30] = c->v.f[4] - c->v.f[21];
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c7e40; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c7e40u; f_15efddc(c);
L_9c7e40:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c7e60; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_9c7e60:;
    c->v.s[2] = LD32(c->r[5] + 36u);
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[4] = LD32(c->r[5] + 40u);
    c->v.s[19] = LD32(c->r[5] + 4u);
    c->v.s[17] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[28] = LD32(c->r[5] + 8u);
    c->v.s[25] = 0x3f000000u;
    c->r[6] = 0x0u;
    c->v.f[2] = c->v.f[2] - c->v.f[27];
    c->v.f[0] = c->v.f[0] - c->v.f[23];
    c->v.s[12] = c->v.s[28];
    c->v.f[16] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[21];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.f[0] = c->v.f[8] - c->v.f[19];
    c->v.s[8] = c->v.s[17];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[2] = c->v.f[6] - c->v.f[17];
    c->v.s[6] = c->v.s[19];
    c->v.f[4] = c->v.f[4] - c->v.f[28];
    c->v.f[10] = c->v.f[26] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[25]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[22] * c->v.f[16]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[20] * c->v.f[16]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[25]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[18] * c->v.f[16]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[30] * c->v.f[4]);
    ST32(c->r[13] + 48u, c->v.s[8]);
    c->v.f[20] = c->v.f[27] - c->v.f[6];
    c->v.f[22] = c->v.f[23] - c->v.f[8];
    c->v.f[21] = c->v.f[21] - c->v.f[12];
    ST32(c->r[13] + 52u, c->v.s[6]);
    ST32(c->r[13] + 56u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[30] * c->v.f[10]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c7f2c; }
    c->r[14] = 0x9c7f28u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9c7f2c:;
    c->v.s[18] = 0x3f800000u;
    c->v.f[0] = c->v.f[18] / c->v.f[2];
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[21];
    ST32(c->r[13] + 64u, c->v.s[2]);
    ST32(c->r[13] + 68u, c->v.s[4]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 36u);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 40u);
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[25]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[25]);
    c->v.f[8] = c->v.f[10] - c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[25]);
    ST32(c->r[13] + 16u, c->v.s[6]);
    c->v.f[20] = c->v.f[19] - c->v.f[2];
    c->v.f[22] = c->v.f[17] - c->v.f[6];
    ST32(c->r[13] + 20u, c->v.s[2]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    c->v.f[24] = c->v.f[28] - c->v.f[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c7fc0; }
    c->r[14] = 0x9c7fbcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9c7fc0:;
    c->v.f[0] = c->v.f[18] / c->v.f[2];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = 0x0u;
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    ST32(c->r[13] + 32u, c->v.s[2]);
    ST32(c->r[13] + 36u, c->v.s[4]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = 0x3a83126fu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0x9c7ffcu; f_a08fe8(c);
    c->v.s[20] = LD32(c->r[13] + 52u);
    c->v.s[2] = LD32(c->r[13] + 68u);
    c->v.s[18] = LD32(c->r[13] + 48u);
    c->v.s[4] = LD32(c->r[13] + 64u);
    c->v.s[22] = LD32(c->r[13] + 56u);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[10] = LD32(c->r[13] + 72u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[1] = LD32(c->r[13] + 12u);
    c->v.s[12] = c->v.s[20];
    c->v.s[14] = c->v.s[18];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] - c->v.f[12];
    c->v.s[12] = c->v.s[22];
    c->v.f[14] = c->v.f[0] - c->v.f[14];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[0] = c->v.f[6] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[6] = c->v.f[8] - c->v.f[12];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c8078; }
    c->r[14] = 0x9c8074u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9c8078:;
    ST32(c->r[4], c->v.s[18]);
    ST32(c->r[4] + 4u, c->v.s[20]);
    ST32(c->r[4] + 8u, c->v.s[22]);
    ST32(c->r[4] + 12u, c->v.s[2]);
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c809c(Cpu *restrict c) {
    FN_ENTER(0x9c809cu);
L_9c809c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x50u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[18] = LD32(c->r[5] + 4u);
    c->v.s[0] = LD32(c->r[5] + 20u);
    c->v.s[22] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 16u);
    c->v.s[20] = LD32(c->r[5] + 8u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.s[24] = LD32(c->r[5] + 32u);
    c->v.s[26] = LD32(c->r[5] + 36u);
    c->v.s[28] = LD32(c->r[5] + 40u);
    c->v.f[19] = c->v.f[0] - c->v.f[18];
    c->v.f[16] = c->v.f[2] - c->v.f[22];
    c->v.f[17] = c->v.f[4] - c->v.f[20];
    c->v.f[2] = c->v.f[19] * c->v.f[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c810c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c810cu; f_15efddc(c);
L_9c810c:;
    c->v.s[1] = 0x34000000u;
    c->v.f[14] = c->v.f[28] - c->v.f[20];
    c->v.f[20] = c->v.f[26] - c->v.f[18];
    c->v.f[22] = c->v.f[24] - c->v.f[22];
    c->v.s[23] = c->v.s[16];
    c->v.s[29] = c->v.s[19];
    c->v.s[25] = c->v.s[17];
    vfp_cmp_f(c, c->v.f[0], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c8148; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[25] = c->v.f[17] * c->v.f[0];
    c->v.f[29] = c->v.f[19] * c->v.f[0];
    c->v.f[23] = c->v.f[16] * c->v.f[0];
L_9c8148:;
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.s[31] = LD32(c->r[5]);
    c->v.s[18] = LD32(c->r[5] + 4u);
    c->v.s[24] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c8188; }
    c->v.s[0] = c->v.s[2];
    c->v.s[26] = c->v.s[14];
    c->v.s[28] = c->v.s[1];
    c->r[14] = 0x9c8180u; f_15efddc(c);
    c->v.s[1] = c->v.s[28];
    c->v.s[14] = c->v.s[26];
L_9c8188:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[1]);
    c->v.s[4] = c->v.s[22];
    c->v.s[6] = c->v.s[20];
    c->v.s[2] = c->v.s[14];
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c81b4; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[4] = c->v.f[22] * c->v.f[0];
L_9c81b4:;
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[8] = LD32(c->r[5] + 36u);
    c->v.s[10] = LD32(c->r[5] + 40u);
    c->v.s[28] = LD32(c->r[5] + 4u);
    c->v.s[30] = LD32(c->r[5]);
    c->v.s[27] = 0x3f000000u;
    c->v.s[26] = LD32(c->r[5] + 8u);
    c->v.f[8] = c->v.f[8] - c->v.f[18];
    c->v.f[0] = c->v.f[0] - c->v.f[31];
    c->v.f[10] = c->v.f[10] - c->v.f[24];
    c->v.s[21] = c->v.s[28];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[19] * c->v.f[27]);
    c->v.s[19] = c->v.s[30];
    c->v.f[8] = c->v.f[29] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[0]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[16] * c->v.f[27]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[10]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[29] * c->v.f[8]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[23] * c->v.f[8]);
    c->v.s[23] = c->v.s[26];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[25] * c->v.f[8]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[17] * c->v.f[27]);
    c->v.f[29] = c->v.f[18] - c->v.f[21];
    c->v.f[17] = c->v.f[31] - c->v.f[19];
    c->v.f[25] = c->v.f[24] - c->v.f[23];
    c->v.f[0] = c->v.f[29] * c->v.f[29];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c838c; }
    c->v.s[8] = LD32(c->r[5] + 16u);
    c->v.s[10] = LD32(c->r[5] + 20u);
    c->v.s[12] = LD32(c->r[5] + 24u);
    c->v.f[10] = c->v.f[10] - c->v.f[28];
    c->v.f[8] = c->v.f[8] - c->v.f[30];
    c->v.f[12] = c->v.f[12] - c->v.f[26];
    c->v.f[10] = c->v.f[6] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.s[8] = c->v.s[28];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.s[6] = c->v.s[30];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[4] = c->v.s[26];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] - c->v.f[21];
    c->v.f[24] = c->v.f[6] - c->v.f[19];
    c->v.f[31] = c->v.f[4] - c->v.f[23];
    c->v.f[16] = c->v.f[8] * c->v.f[8];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[31] * c->v.f[31]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9c838c; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c82b8; }
    ST32(c->r[13] + 8u, c->v.s[14]);
    c->v.s[18] = c->v.s[8];
    c->r[14] = 0x9c82acu; f_15efddc(c);
    c->v.s[14] = LD32(c->r[13] + 8u);
    c->v.s[8] = c->v.s[18];
    c->v.s[2] = c->v.s[0];
L_9c82b8:;
    c->v.s[18] = 0x3f800000u;
    c->r[5] = 0x0u;
    ST32(c->r[13] + 48u, c->v.s[19]);
    ST32(c->r[13] + 52u, c->v.s[21]);
    ST32(c->r[13] + 56u, c->v.s[23]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[22] * c->v.f[27]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[20] * c->v.f[27]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[14] * c->v.f[27]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->v.f[0] = c->v.f[18] / c->v.f[2];
    c->v.f[2] = c->v.f[17] * c->v.f[0];
    c->v.f[4] = c->v.f[29] * c->v.f[0];
    c->v.f[0] = c->v.f[25] * c->v.f[0];
    ST32(c->r[13] + 64u, c->v.s[2]);
    ST32(c->r[13] + 68u, c->v.s[4]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[16]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c831c; }
    c->v.s[0] = c->v.s[16];
    c->v.s[16] = c->v.s[8];
    c->r[14] = 0x9c8318u; f_15efddc(c);
    c->v.s[8] = c->v.s[16];
L_9c831c:;
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    ST32(c->r[13] + 16u, c->v.s[30]);
    ST32(c->r[13] + 20u, c->v.s[28]);
    ST32(c->r[13] + 24u, c->v.s[26]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = 0x0u;
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[31] * c->v.f[0];
    ST32(c->r[13] + 32u, c->v.s[2]);
    ST32(c->r[13] + 36u, c->v.s[4]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = 0x3a83126fu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x9c8364u; f_a08fe8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->v.s[2] = LD32(c->r[13] + 72u);
    c->v.s[19] = LD32(c->r[13] + 48u);
    c->v.s[21] = LD32(c->r[13] + 52u);
    c->v.s[6] = LD32(c->r[13] + 12u);
    c->v.s[23] = LD32(c->r[13] + 56u);
    c->v.s[4] = LD32(c->r[13] + 64u);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[6] * c->v.f[4]);
L_9c838c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4], c->v.s[19]);
    ST32(c->r[4] + 4u, c->v.s[21]);
    ST32(c->r[4] + 8u, c->v.s[23]);
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c83b4(Cpu *restrict c) {
    FN_ENTER(0x9c83b4u);
L_9c83b4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->v.s[8] = c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    c->v.s[4] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[2];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->v.s[10] = c->r[5];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->v.s[6] = c->r[6];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    if (COND_MI) { c->r[4] = c->r[7]; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[4] = c->r[2];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    if (COND_MI) { c->r[3] = c->r[7]; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[4] = c->r[7]; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    if (COND_GT) { c->r[5] = c->r[7]; }
    c->v.s[4] = c->r[3];
    c->v.s[6] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[12]); }
    c->v.s[2] = c->r[4];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    if (COND_GT) { c->r[6] = c->r[7]; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[2] = c->r[7]; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[12]); }
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.s[6] = c->r[5];
    ST32(c->r[1], c->v.s[2]);
    ST32(c->r[1] + 4u, c->v.s[4]);
    ST32(c->r[1] + 8u, c->v.s[0]);
    c->v.s[2] = c->r[2];
    c->v.s[4] = c->r[6];
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[1] + 16u, c->v.s[2]);
    ST32(c->r[1] + 20u, c->v.s[4]);
    ST32(c->r[1] + 24u, c->v.s[0]);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c8508(Cpu *restrict c) {
    FN_ENTER(0x9c8508u);
L_9c8508:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9c8520u; f_9c8528(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c8528(Cpu *restrict c) {
    FN_ENTER(0x9c8528u);
L_9c8528:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[18] = c->v.s[2];
    c->v.s[2] = 0x3f000000u;
    c->v.s[16] = c->v.s[3];
    c->v.s[20] = c->v.s[1];
    c->r[4] = c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0x9c8558u; f_15f0184(c);
    c->r[8] = 0x0u;
    c->v.s[4] = c->v.s[0] ^ 0x80000000u;
    c->r[5] = 0x0u;
    c->r[0] = 0x3f800000u;
    c->v.f[0] = -(float)(c->v.f[0] * c->v.f[20]);
    c->v.s[20] = 0x3f800000u;
    c->v.s[22] = 0x34000000u;
    c->r[9] = c->r[13];
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1070580u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 56u, c->v.s[0]);
    c->v.s[0] = c->v.s[20];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x9c85ccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_9c85d8;
L_9c85cc:;
    c->v.s[0] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7] + 24u);
    c->r[5] = c->r[5] + 0x10u;
L_9c85d8:;
    c->r[7] = c->r[9] + c->r[5];
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.s[6] = LD32(c->r[7]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c8604; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9c8604u; f_15efddc(c);
L_9c8604:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9c8620; }
    c->v.s[0] = LD32(c->r[7] + 8u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[7] + 4u);
    goto L_9c863c;
L_9c8620:;
    c->v.f[8] = c->v.f[20] / c->v.f[0];
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[6] = LD32(c->r[7] + 4u);
    c->v.f[0] = c->v.f[8] * c->v.f[2];
    c->v.f[2] = c->v.f[8] * c->v.f[6];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
L_9c863c:;
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->r[0] = c->r[4] + c->r[5];
    (void)f_subs(c, c->r[5], 0x30u);
    ST32(c->r[0], c->v.s[4]);
    ST32(c->r[0] + 4u, c->v.s[2]);
    ST32(c->r[0] + 8u, c->v.s[0]);
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.s[6] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[0] + 12u, c->v.s[6]);
    if (COND_NE) { goto L_9c85cc; }
    c->v.s[0] = c->v.s[18] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[8]); }
    ST32(c->r[4] + 76u, c->v.s[0]);
    ST32(c->r[4] + 92u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9c86b4(Cpu *restrict c) {
    FN_ENTER(0x9c86b4u);
L_9c86b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.s[3] = c->v.s[2];
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x60u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x9c86d0u; f_9c8528(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c86d8(Cpu *restrict c) {
    FN_ENTER(0x9c86d8u);
L_9c86d8:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x60u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    return;
}
void f_9c87a4(Cpu *restrict c) {
    FN_ENTER(0x9c87a4u);
L_9c87a4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[14] = 0x9c87c8u; f_4332ac(c);
    c->v.s[24] = LD32(c->r[13] + 16u);
    c->v.s[26] = LD32(c->r[13] + 20u);
    c->v.s[28] = LD32(c->r[13] + 24u);
    c->v.s[30] = LD32(c->r[13] + 28u);
    c->v.s[8] = LD32(c->r[13] + 76u);
    c->v.s[10] = LD32(c->r[13] + 60u);
    c->v.s[12] = LD32(c->r[13] + 44u);
    c->v.s[14] = LD32(c->r[13] + 72u);
    c->v.s[17] = LD32(c->r[13] + 56u);
    c->v.s[19] = LD32(c->r[13] + 40u);
    c->v.s[21] = LD32(c->r[13] + 68u);
    c->v.s[23] = LD32(c->r[13] + 52u);
    c->v.s[25] = LD32(c->r[13] + 36u);
    c->v.s[27] = LD32(c->r[13] + 64u);
    c->v.s[29] = LD32(c->r[13] + 48u);
    c->v.s[31] = LD32(c->r[13] + 32u);
    c->r[5] = 0x6u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[4] = c->r[4] + 0x8u;
    if (COND_NE) { c->r[5] = 0x5u; }
    ST32(c->r[13] + 12u, c->v.s[24]);
    ST32(c->r[13] + 8u, c->v.s[26]);
    ST32(c->r[13] + 4u, c->v.s[28]);
    ST32(c->r[13], c->v.s[30]);
L_9c8828:;
    c->v.s[0] = LD32(c->r[4] - 4u);
    c->v.s[2] = LD32(c->r[4] - 8u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[4] + 4u);
    c->v.f[16] = c->v.f[25] * c->v.f[0];
    c->v.f[18] = c->v.f[26] * c->v.f[0];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[31] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[20] = c->v.f[23] * c->v.f[0];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[29] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[22] = c->v.f[21] * c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[27] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c88cc; }
    c->v.s[24] = c->v.s[8];
    c->v.s[26] = c->v.s[10];
    c->v.s[28] = c->v.s[12];
    c->v.s[30] = c->v.s[14];
    c->r[14] = 0x9c88a8u; f_15efddc(c);
    c->v.s[14] = c->v.s[30];
    c->v.s[12] = c->v.s[28];
    c->v.s[10] = c->v.s[26];
    c->v.s[8] = c->v.s[24];
    c->v.s[30] = LD32(c->r[13]);
    c->v.s[28] = LD32(c->r[13] + 4u);
    c->v.s[26] = LD32(c->r[13] + 8u);
    c->v.s[24] = LD32(c->r[13] + 12u);
    c->v.s[2] = c->v.s[0];
L_9c88cc:;
    c->v.f[0] = c->v.f[2] * c->v.f[18];
    c->v.f[4] = c->v.f[2] * c->v.f[16];
    c->v.f[6] = c->v.f[2] * c->v.f[20];
    c->v.f[2] = c->v.f[2] * c->v.f[22];
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    ST32(c->r[4] - 8u, c->v.s[0]);
    ST32(c->r[4] - 4u, c->v.s[4]);
    ST32(c->r[4], c->v.s[6]);
    ST32(c->r[4] + 4u, c->v.s[2]);
    c->r[4] = c->r[4] + 0x10u;
    if (COND_NE) { goto L_9c8828; }
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c8904(Cpu *restrict c) {
    FN_ENTER(0x9c8904u);
L_9c8904:;
    c->r[2] = c->r[0];
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->v.s[14] = LD32(c->r[2] + 12u);
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[14] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_9c8a24; }
    c->v.s[10] = LD32(c->r[2] + 20u);
    c->v.s[8] = LD32(c->r[2] + 16u);
    c->v.s[12] = LD32(c->r[2] + 24u);
    c->v.s[14] = LD32(c->r[2] + 28u);
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[14] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_9c8a24; }
    c->v.s[10] = LD32(c->r[2] + 36u);
    c->v.s[8] = LD32(c->r[2] + 32u);
    c->v.s[12] = LD32(c->r[2] + 40u);
    c->v.s[14] = LD32(c->r[2] + 44u);
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[14] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_9c8a24; }
    c->v.s[10] = LD32(c->r[2] + 52u);
    c->v.s[8] = LD32(c->r[2] + 48u);
    c->v.s[12] = LD32(c->r[2] + 56u);
    c->v.s[14] = LD32(c->r[2] + 60u);
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[14] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { return; }
    c->v.s[10] = LD32(c->r[2] + 68u);
    c->v.s[8] = LD32(c->r[2] + 64u);
    c->v.s[12] = LD32(c->r[2] + 72u);
    c->v.s[14] = LD32(c->r[2] + 76u);
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[14] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_9c8a24; }
    c->v.s[10] = LD32(c->r[2] + 84u);
    c->v.s[8] = LD32(c->r[2] + 80u);
    c->v.s[12] = LD32(c->r[2] + 88u);
    c->v.s[14] = LD32(c->r[2] + 92u);
    c->v.f[6] = c->v.f[10] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[2] = c->v.f[14] + c->v.f[6];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0x1u; }
L_9c8a24:;
    return;
}
void f_9c8a28(Cpu *restrict c) {
    FN_ENTER(0x9c8a28u);
L_9c8a28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->v.s[0] = LD32(c->r[1] + 12u);
    c->r[1] = c->r[13];
    c->r[14] = 0x9c8a64u; f_9c8904(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c8a6c(Cpu *restrict c) {
    FN_ENTER(0x9c8a6cu);
L_9c8a6c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x80u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[0];
    c->r[4] = c->r[1];
    c->r[8] = c->r[13] + 0x10u;
    c->r[7] = 0x6u;
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[4] + 32u);
    c->v.s[10] = LD32(c->r[4] + 36u);
    c->v.s[12] = LD32(c->r[4] + 40u);
    c->v.s[14] = LD32(c->r[4] + 44u);
    c->v.s[17] = LD32(c->r[4] + 48u);
    c->v.s[19] = LD32(c->r[4] + 52u);
    c->v.s[21] = LD32(c->r[4] + 56u);
    c->v.s[23] = LD32(c->r[4] + 60u);
    c->v.s[25] = LD32(c->r[4]);
    c->v.s[27] = LD32(c->r[4] + 4u);
    c->v.s[29] = LD32(c->r[4] + 8u);
    c->v.s[31] = LD32(c->r[4] + 12u);
    c->v.s[24] = LD32(c->r[4] + 16u);
    c->v.s[26] = LD32(c->r[4] + 20u);
    c->v.s[28] = LD32(c->r[4] + 24u);
    c->v.s[30] = LD32(c->r[4] + 28u);
    c->r[6] = c->r[8] | 0x8u;
    c->r[5] = c->r[9] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[7] = 0x5u; }
    ST32(c->r[13] + 12u, c->v.s[24]);
    ST32(c->r[13] + 8u, c->v.s[26]);
    ST32(c->r[13] + 4u, c->v.s[28]);
    ST32(c->r[13], c->v.s[30]);
L_9c8af4:;
    c->v.s[0] = LD32(c->r[5] - 4u);
    c->v.s[2] = LD32(c->r[5] - 8u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.f[16] = c->v.f[26] * c->v.f[0];
    c->v.f[18] = c->v.f[27] * c->v.f[0];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.f[20] = c->v.f[10] * c->v.f[0];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[29] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[31] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[22] = c->v.f[19] * c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[23] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9c8b98; }
    c->v.s[24] = c->v.s[8];
    c->v.s[26] = c->v.s[10];
    c->v.s[28] = c->v.s[12];
    c->v.s[30] = c->v.s[14];
    c->r[14] = 0x9c8b74u; f_15efddc(c);
    c->v.s[14] = c->v.s[30];
    c->v.s[12] = c->v.s[28];
    c->v.s[10] = c->v.s[26];
    c->v.s[8] = c->v.s[24];
    c->v.s[30] = LD32(c->r[13]);
    c->v.s[28] = LD32(c->r[13] + 4u);
    c->v.s[26] = LD32(c->r[13] + 8u);
    c->v.s[24] = LD32(c->r[13] + 12u);
    c->v.s[2] = c->v.s[0];
L_9c8b98:;
    c->v.f[0] = c->v.f[2] * c->v.f[18];
    c->v.f[4] = c->v.f[2] * c->v.f[16];
    c->v.f[6] = c->v.f[2] * c->v.f[20];
    c->v.f[2] = c->v.f[2] * c->v.f[22];
    c->r[5] = c->r[5] + 0x10u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    ST32(c->r[6] - 8u, c->v.s[0]);
    ST32(c->r[6] - 4u, c->v.s[4]);
    ST32(c->r[6], c->v.s[6]);
    ST32(c->r[6] + 4u, c->v.s[2]);
    c->r[6] = c->r[6] + 0x10u;
    if (COND_NE) { goto L_9c8af4; }
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[4] = 0x3f000000u;
    c->r[0] = 0x6u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x70u; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[8] | 0x8u;
    c->v.s[10] = LD32(c->r[4] + 64u);
    c->v.s[8] = LD32(c->r[4] + 68u);
    c->v.s[6] = LD32(c->r[4] + 72u);
    if (COND_NE) { c->r[0] = 0x5u; }
    c->v.f[0] = c->v.f[6] - c->v.f[6];
    c->v.f[2] = c->v.f[8] - c->v.f[8];
    c->v.f[12] = c->v.f[10] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[12] * c->v.f[4];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[10] = c->v.f[10] - c->v.f[4];
L_9c8c18:;
    c->v.s[12] = LD32(c->r[1] - 8u);
    c->v.s[14] = LD32(c->r[1] - 4u);
    c->v.s[1] = LD32(c->r[1]);
    c->v.s[3] = LD32(c->r[1] + 4u);
    (void)f_subs(c, c->r[2], c->r[0]);
    c->v.f[5] = fabsf(c->v.f[14]);
    c->v.f[14] = c->v.f[2] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[7] = fabsf(c->v.f[12]);
    c->v.f[12] = fabsf(c->v.f[1]);
    c->v.f[5] = c->v.f[8] * c->v.f[5];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[7]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[12] = c->v.f[3] + c->v.f[14];
    c->v.f[12] = c->v.f[12] + c->v.f[5];
    if (COND_CS) { goto L_9c8c70; }
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[2] + 0x1u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9c8c18; }
L_9c8c70:;
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9c8c8c(Cpu *restrict c) {
    FN_ENTER(0x9c8c8cu);
L_9c8c8c:;
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 28u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[1] + 16u);
    c->v.s[8] = 0x3f000000u;
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[8]);
    ST32(c->r[0], c->v.s[2]);
    ST32(c->r[0] + 4u, c->v.s[0]);
    return;
}
void f_9c8cbc(Cpu *restrict c) {
    FN_ENTER(0x9c8cbcu);
L_9c8cbc:;
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 28u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[1] + 16u);
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    ST32(c->r[0], c->v.s[2]);
    ST32(c->r[0] + 4u, c->v.s[0]);
    return;
}
void f_9c8ce0(Cpu *restrict c) {
    FN_ENTER(0x9c8ce0u);
L_9c8ce0:;
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1070740u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[1];
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9c8d0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x400u;
    c->pc = c->r[3]; c->r[14] = 0x9c8d1cu; rt_dispatch(c);
    c->r[3] = c->r[13] + 0x18u;
    c->r[1] = 0x3ffu;
    c->r[2] = c->r[6];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[14] = 0x9c8d34u; f_15f00e8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9c8d80; }
L_9c8d40:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9c8d40; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9c8d78; }
    c->r[0] = 0x106fe1cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9c8d6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9c8d78u; rt_dispatch(c);
L_9c8d78:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_9c8d80:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c8de4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9c8d90u; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9c8de4; }
    c->r[0] = 0x106fddcu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9c8dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x9c8dbcu; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x9c8de0u; f_15efd94(c);
    goto L_9c8dec;
L_9c8de4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_9c8dec:;
    c->r[0] = 0x1070654u;
    { uint32_t ea = 0x9c8df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x9c8e08u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->r[13] = c->r[13] + 0x8u;
    return;
}
void f_9c8e2c(Cpu *restrict c) {
    FN_ENTER(0x9c8e2cu);
L_9c8e2c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + c->r[0];
    c->r[0] = 0x106fd34u;
    c->r[1] = c->r[6] + 0xcu;
    { uint32_t ea = 0x9c8e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x9c8e64u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[1] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9c8ea0; }
    c->r[3] = c->r[5] + 0x8u;
    c->r[2] = 0x0u;
L_9c8e84:;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[6]); }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_CC) { goto L_9c8e84; }
    c->r[1] = c->r[1] + c->r[2];
L_9c8ea0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9c8ed0; }
    c->r[3] = c->r[4] + 0x8u;
    c->r[2] = 0x0u;
L_9c8eb4:;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[6]); }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_CC) { goto L_9c8eb4; }
    c->r[1] = c->r[1] + c->r[2];
L_9c8ed0:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c8ee0(Cpu *restrict c) {
    FN_ENTER(0x9c8ee0u);
L_9c8ee0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_9c8f20; }
    c->r[12] = c->r[2] + 0x8u;
    c->r[1] = c->r[1] + 0x8u;
    c->r[2] = 0x0u;
L_9c8efc:;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_9c8f28; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_CC) { goto L_9c8efc; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_9c8f20:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_9c8f28:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9c8f2c(Cpu *restrict c) {
    FN_ENTER(0x9c8f2cu);
L_9c8f2c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[10] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9c9030; }
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c9038; }
    c->r[14] = 0x9c8f54u; f_15f019c(c);
    c->r[9] = (uint32_t)(uint8_t)(c->r[0]);
L_9c8f58:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[7]);
    c->r[1] = c->r[7];
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c8f70; }
    c->r[14] = 0x9c8f6cu; f_15f019c(c);
    c->r[1] = c->r[0];
L_9c8f70:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = 0x5u;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_EQ) { goto L_9c8f94; }
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[7] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[7]; }
    if (COND_EQ) { c->r[0] = 0x1u; }
L_9c8f94:;
    { uint32_t r = c->r[0] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_9c8f58; }
    (void)f_subs(c, c->r[1], 0x5u);
    c->r[5] = c->r[8];
    c->r[6] = c->r[10];
    if (COND_EQ) { goto L_9c8fb4; }
    goto L_9c9114;
L_9c8fb0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[7] = v; }
L_9c8fb4:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[7]);
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c8fc8; }
    c->r[14] = 0x9c8fc4u; f_15f019c(c);
    c->r[7] = c->r[0];
L_9c8fc8:;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c8fdc; }
    c->r[14] = 0x9c8fd8u; f_15f019c(c);
    goto L_9c8fe0;
L_9c8fdc:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
L_9c8fe0:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_9c900c; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[4] = c->r[10]; }
    if (COND_EQ) { c->r[0] = 0x1u; }
L_9c900c:;
    { uint32_t r = c->r[0] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_9c8fb0; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_9c9114; }
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_9c8f58; }
    goto L_9c9110;
L_9c9030:;
    c->r[0] = 0x2u;
    goto L_9c9114;
L_9c9038:;
    c->r[9] = (uint32_t)(uint8_t)(c->r[0]);
L_9c903c:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[7]);
    c->r[1] = c->r[7];
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c9054; }
    c->r[14] = 0x9c9050u; f_15f019c(c);
    c->r[1] = c->r[0];
L_9c9054:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = 0x5u;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_EQ) { goto L_9c9078; }
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[7] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[7]; }
    if (COND_EQ) { c->r[0] = 0x1u; }
L_9c9078:;
    { uint32_t r = c->r[0] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_9c903c; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_NE) { goto L_9c9114; }
    c->r[6] = c->r[8];
    c->r[5] = c->r[10];
    goto L_9c9098;
L_9c9094:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[7] = v; }
L_9c9098:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[7]);
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c90ac; }
    c->r[14] = 0x9c90a8u; f_15f019c(c);
    c->r[7] = c->r[0];
L_9c90ac:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9c90c0; }
    c->r[14] = 0x9c90bcu; f_15f019c(c);
    goto L_9c90c4;
L_9c90c0:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
L_9c90c4:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_9c90f0; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[4] = c->r[10]; }
    if (COND_EQ) { c->r[0] = 0x1u; }
L_9c90f0:;
    { uint32_t r = c->r[0] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_9c9094; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_9c9114; }
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_9c903c; }
L_9c9110:;
    c->r[0] = 0x2u;
L_9c9114:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { c->r[4] = 0x0u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9c9124(Cpu *restrict c) {
    FN_ENTER(0x9c9124u);
L_9c9124:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = 0x76cu;
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = c->r[1] - c->r[4];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[14] = 0x9c9184u; f_15f01a8(c);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 31);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9c9198(Cpu *restrict c) {
    FN_ENTER(0x9c9198u);
L_9c9198:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] - 0x4000u;
    c->r[6] = c->r[13] + 0x4000u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[6] + 0x14u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9c91b8u; f_15f01b4(c);
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[5];
    c->r[14] = 0x9c91c4u; f_15f01c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9c91fc; }
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x9c91d4u; f_15f01cc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9c91fc; }
    c->r[0] = c->r[13];
    c->r[2] = c->r[13] + 0x8u;
    c->r[3] = c->r[13] + 0x10u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x9c91f4u; f_15f01d8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9c9214; }
L_9c91fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_9c9208:;
    c->r[13] = c->r[13] + 0x68u;
    c->r[13] = c->r[13] + 0x4000u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9c9214:;
    { uint32_t ea = c->r[13] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x5u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[11] = c->r[13] + 0x4000u;
    c->r[7] = 0x76cu;
    c->r[0] = c->r[11] + 0x60u;
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[5]); }
    c->r[6] = c->r[6] - c->r[7];
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] - 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] - 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] - 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x4000u;
    c->r[0] = c->r[5] + 0x38u;
    c->r[14] = 0x9c927cu; f_15f01a8(c);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 31);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    goto L_9c9208;
}
void f_9c9288(Cpu *restrict c) {
    FN_ENTER(0x9c9288u);
L_9c9288:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[8]); ST32(ea + 16u, c->r[9]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[2];
    c->r[0] = c->r[13] + 0x4u;
    c->r[9] = c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x9c92a4u; f_15f01e4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9c92d0; }
    c->r[1] = 0x10716c8u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = 0x9c92bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); c->r[12] = LD32(ea + 20u); }
    c->r[0] = 0x10716b4u;
    { uint32_t ea = 0x9c92ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); ST32(ea + 20u, c->r[12]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); ST32(ea + 4, c->r[9]); }
L_9c92d0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); c->r[9] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9c92e0(Cpu *restrict c) {
    FN_ENTER(0x9c92e0u);
L_9c92e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[2];
    c->r[9] = c->r[0];
    c->r[4] = c->r[3];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9308; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_9c9570; }
L_9c9308:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_9c931c; }
    c->r[0] = c->r[9];
    c->r[14] = 0x9c9318u; f_15efd88(c);
    c->r[1] = c->r[0];
L_9c931c:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[5];
    c->r[6] = 0x0u;
    if (COND_NE) { c->r[2] = c->r[4] - 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[11] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[11], 0x0u); }
    if (COND_EQ) { goto L_9c9554; }
    c->r[0] = 0xe87cc4u;
    c->r[14] = 0x1f2bu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[3] = 0x9c9350u + c->r[0];
    c->r[0] = 0xe87cbcu;
    c->r[8] = 0x9c9358u + c->r[0];
    c->r[0] = 0xe87cb4u;
    c->r[0] = 0x9c9360u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe87ca4u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x9c9370u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe87c98u;
    c->r[0] = 0x9c937cu + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe87c8cu;
    c->r[0] = 0x9c9388u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe87c80u;
    c->r[0] = 0x9c9394u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_9c9394:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9c93a8; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9c9578; }
L_9c93a8:;
    c->r[0] = c->r[11] & 0xe0u;
    c->r[10] = 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0xc0u);
    if (COND_EQ) { goto L_9c93f4; }
    c->r[0] = c->r[11] & 0xf0u;
    c->r[10] = 0x3u;
    (void)f_subs(c, c->r[0], 0xe0u);
    if (COND_NE) { c->r[0] = c->r[11] & 0xf8u; }
    if (COND_NE) { c->r[10] = 0x4u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xf0u); }
    if (COND_EQ) { goto L_9c93f4; }
    c->r[0] = c->r[11] & 0xfcu;
    c->r[10] = 0x5u;
    (void)f_subs(c, c->r[0], 0xf8u);
    if (COND_NE) { c->r[0] = c->r[11] & 0xfeu; }
    if (COND_NE) { c->r[10] = 0x6u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xfcu); }
    if (COND_NE) { goto L_9c94f0; }
L_9c93f4:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[11]);
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
L_9c9400:;
    c->r[4] = c->r[3] + (c->r[12] << 4);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[10], c->r[4]);
    if (COND_NE) { goto L_9c9458; }
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[10], 0x2u);
    c->r[6] = 0x0u;
    c->r[5] = c->r[0] | (c->r[4] << 8);
    c->r[4] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD8(ea); c->r[4] = v; } }
    (void)f_subs(c, c->r[10], 0x2u);
    c->r[5] = c->r[5] | (c->r[4] << 16);
    c->r[4] = c->r[8] + (c->r[12] << 4);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[4] = c->r[2] | (c->r[4] << 8);
    if (COND_EQ) { goto L_9c944c; }
    c->r[2] = c->r[7] + (c->r[12] << 4);
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
L_9c944c:;
    c->r[2] = c->r[4] | (c->r[6] << 16);
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_EQ) { goto L_9c9468; }
L_9c9458:;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_9c9400; }
    goto L_9c9544;
L_9c9468:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_9c946c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[12] << 4); uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[0] = 0x2u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c94c4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_9c9580; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[4] = c->r[5];
    if (COND_NE) { c->r[4] = c->r[5]; }
    c->r[5] = c->r[5] + c->r[0];
    if (COND_NE) { { uint32_t ea = c->r[4]; ST8(ea, c->r[6]); c->r[4] = c->r[4] + 0x1u; } }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[12] << 4);
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[0];
    goto L_9c94d0;
L_9c94c4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    c->r[2] = c->r[0] + c->r[2];
L_9c94d0:;
    c->r[1] = f_subs(c, c->r[1], c->r[10]);
    c->r[6] = 0x0u;
    if (COND_EQ) { goto L_9c9594; }
    { uint32_t ea = c->r[9] + c->r[10]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { goto L_9c9394; }
    goto L_9c9554;
L_9c94f0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[11] & 0x80u;
    c->r[2] = 0x1u;
    c->r[12] = 0x0u;
    c->r[10] = c->r[2] ^ (c->r[0] >> 7);
L_9c9508:;
    c->r[0] = c->r[4] + (c->r[12] << 4);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_NE) { goto L_9c952c; }
    c->r[0] = c->r[6] + (c->r[12] << 4);
    c->r[2] = (uint32_t)(uint8_t)(c->r[11]);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_9c946c; }
L_9c952c:;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_9c9508; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9c9550;
L_9c9544:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_9c9550:;
    c->r[6] = 0x1u;
L_9c9554:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[2] + 0x1u; }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = c->r[4] - c->r[2]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
L_9c9570:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c9578:;
    c->r[2] = 0x0u;
    goto L_9c9554;
L_9c9580:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c9594:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_9c9554;
}
void f_9c95b8(Cpu *restrict c) {
    FN_ENTER(0x9c95b8u);
L_9c95b8:;
    c->r[2] = c->r[0] & 0xe0u;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[2], 0xc0u);
    if (COND_NE) { c->r[2] = c->r[0] & 0xf0u; }
    if (COND_NE) { c->r[1] = 0x3u; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xe0u); }
    if (COND_EQ) { goto L_9c9604; }
    c->r[2] = c->r[0] & 0xf8u;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[2], 0xf0u);
    if (COND_NE) { c->r[2] = c->r[0] & 0xfcu; }
    if (COND_NE) { c->r[1] = 0x5u; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xf8u); }
    if (COND_EQ) { goto L_9c9604; }
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] ^ (c->r[0] >> 7);
    c->r[0] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[0], 0xfcu);
    if (COND_EQ) { c->r[1] = 0x6u; }
L_9c9604:;
    c->r[0] = c->r[1];
    return;
}
void f_9c960c(Cpu *restrict c) {
    FN_ENTER(0x9c960cu);
L_9c960c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[5] = c->r[2];
    c->r[7] = c->r[0];
    c->r[9] = c->r[3];
    c->r[4] = c->r[1];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9638; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_9c9890; }
L_9c9638:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_9c964c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x9c9648u; f_15efd88(c);
    c->r[4] = c->r[0];
L_9c964c:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[10] = c->r[5];
    c->r[11] = 0x0u;
    if (COND_NE) { c->r[10] = c->r[9] - 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_9c9874; }
    c->r[0] = 0xe87990u;
    c->r[8] = 0x1f2bu;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[0] = 0x9c9684u + c->r[0];
    c->r[12] = c->r[0] + 0x8u;
    c->r[0] = 0xe87980u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    c->r[0] = 0x9c9694u + c->r[0];
    c->r[14] = c->r[0] + 0x8u;
    goto L_9c9854;
L_9c9698:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_9c96d0; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[10] = c->r[10] + 0x1u; }
    if (COND_EQ) { c->r[5] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); c->r[5] = c->r[5] + 0x1u; } }
    if (COND_NE) { c->r[10] = c->r[10] - 0x1u; }
L_9c96b8:;
    c->r[0] = 0x1u;
L_9c96bc:;
    c->r[4] = f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_9c9854; }
    goto L_9c9874;
L_9c96d0:;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_EQ) { goto L_9c9710; }
    (void)f_subs(c, c->r[0], 0x9fu);
    if (COND_HI) { goto L_9c9710; }
    c->r[1] = c->r[2] - 0x40u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_CC) { goto L_9c9784; }
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[2]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_9c9898; }
    (void)f_subs(c, c->r[2], 0xfcu);
    if (COND_LS) { goto L_9c9784; }
    goto L_9c9898;
L_9c9710:;
    c->r[3] = c->r[1] + 0x5fu;
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[3], 0x3eu);
    if (COND_HI) { goto L_9c9754; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[14];
L_9c9728:;
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9c9740; }
    { uint32_t ea = c->r[1] - 0x7u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_9c9808; }
L_9c9740:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_CC) { goto L_9c9728; }
    goto L_9c96b8;
L_9c9754:;
    c->r[1] = c->r[1] & 0xf0u;
    (void)f_subs(c, c->r[1], 0xe0u);
    if (COND_NE) { goto L_9c9898; }
    c->r[1] = c->r[2] - 0x40u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_CC) { goto L_9c9784; }
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[2]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_9c9898; }
    (void)f_subs(c, c->r[2], 0xfdu);
    if (COND_CS) { goto L_9c98b4; }
L_9c9784:;
    c->r[3] = 0x0u;
    c->r[1] = c->r[12];
L_9c978c:;
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { { uint32_t ea = c->r[1] - 0x7u; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[6]); }
    if (COND_EQ) { goto L_9c97b8; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + 0x10u;
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_CC) { goto L_9c978c; }
    c->r[0] = 0x2u;
    goto L_9c96bc;
L_9c97b8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c97f4; }
    (void)f_subs(c, c->r[10], c->r[9]);
    if (COND_LT) { goto L_9c98a0; }
    c->r[1] = c->r[1] - 0x4u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[9];
    c->r[6] = c->r[14];
    c->r[14] = 0x9c97e0u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[6];
    c->r[10] = c->r[10] - c->r[9];
    c->r[5] = c->r[5] + c->r[9];
    goto L_9c97fc;
L_9c97f4:;
    c->r[10] = c->r[9] + c->r[10];
    c->r[5] = 0x0u;
L_9c97fc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x2u;
    goto L_9c96bc;
L_9c9808:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9844; }
    (void)f_subs(c, c->r[10], c->r[9]);
    if (COND_LT) { goto L_9c98a0; }
    c->r[1] = c->r[1] - 0x4u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[9];
    c->r[6] = c->r[14];
    c->r[14] = 0x9c9830u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[6];
    c->r[10] = c->r[10] - c->r[9];
    c->r[5] = c->r[5] + c->r[9];
    goto L_9c984c;
L_9c9844:;
    c->r[10] = c->r[9] + c->r[10];
    c->r[5] = 0x0u;
L_9c984c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_9c96b8;
L_9c9854:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_9c9698; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9c9698; }
    c->r[10] = 0x0u;
L_9c9874:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[10] + 0x1u; }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = c->r[9] - c->r[10]; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
L_9c9890:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c9898:;
    c->r[11] = 0x1u;
    goto L_9c9874;
L_9c98a0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c98b4:;
    c->r[11] = 0x1u;
    goto L_9c9874;
}
void f_9c98c4(Cpu *restrict c) {
    FN_ENTER(0x9c98c4u);
L_9c98c4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[2];
    c->r[12] = c->r[0];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c98e8; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_9c9bcc; }
L_9c98e8:;
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    if (COND_GE) { goto L_9c9918; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9c9b9c; }
    c->r[0] = c->r[12] + 0x2u;
    c->r[1] = 0x0u;
L_9c9908:;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9c9908; }
L_9c9918:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[14] = c->r[4];
    c->r[0] = 0xfffeu;
    if (COND_NE) { c->r[14] = c->r[3] - 0x1u; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { c->r[2] = 0xfeffu; }
    if (COND_NE) { (void)f_subs(c, c->r[6], c->r[2]); }
    if (COND_NE) { goto L_9c9950; }
    (void)f_subs(c, c->r[6], c->r[0]);
    { uint32_t ea = c->r[12] + 0x2u; uint32_t v = LD16(ea); c->r[12] = ea; c->r[6] = v; }
    c->r[7] = 0x0u;
    c->r[1] = c->r[1] - 0x1u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    goto L_9c9954;
L_9c9950:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_9c9954:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_9c9ba8; }
    c->r[1] = 0x1u - c->r[1];
    c->r[11] = 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    goto L_9c9b70;
L_9c9970:;
    c->r[0] = __builtin_bswap32(c->r[6]);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[6] = (c->r[0] >> 16); }
    c->r[0] = c->r[6] & 0xf800u;
    c->r[0] = c->r[0] | 0x400u;
    (void)f_subs(c, c->r[0], 0xdc00u);
    if (COND_NE) { goto L_9c9a08; }
    { uint32_t ea = c->r[12] + 0x2u; uint32_t v = LD16(ea); c->r[12] = ea; c->r[9] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = __builtin_bswap32(c->r[9]);
    if (COND_NE) { c->r[9] = (c->r[0] >> 16); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[6] = 0x4u;
    c->r[2] = (c->r[0] << 10);
    c->r[9] = c->r[9] & 0x3ffu;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[10] = c->r[9] | c->r[2];
    c->r[2] = 0xf0000u;
    c->r[2] = c->r[2] & (c->r[0] << 10);
    c->r[2] = c->r[2] + 0x10000u;
    c->r[3] = c->r[10] | c->r[2];
    (void)f_subs(c, c->r[3], 0x10000u);
    if (COND_CC) { c->r[6] = 0x3u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c9a34; }
    (void)f_subs(c, c->r[14], c->r[6]);
    if (COND_LT) { goto L_9c9bd4; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[5], (c->r[3] >> 16));
    if (COND_NE) { goto L_9c9a48; }
    c->r[11] = (c->r[0] >> 2);
    c->r[8] = 0x3u;
    c->r[5] = 0x2u;
    c->r[7] = 0x1u;
    c->r[0] = 0xe0u;
    c->r[3] = 0xfu;
    c->r[2] = c->r[4];
    goto L_9c9a70;
L_9c9a08:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[5], 0x80u);
    if (COND_CS) { goto L_9c9ac0; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c9b58; }
    c->r[0] = c->r[6] & 0x7fu;
    c->r[14] = c->r[14] - 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); c->r[4] = c->r[4] + 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9c9aac; }
    goto L_9c9ba8;
L_9c9a34:;
    c->r[14] = c->r[6] + c->r[14];
L_9c9a38:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9c9aac; }
    goto L_9c9ba8;
L_9c9a48:;
    c->r[0] = 0xf0u;
    c->r[11] = (c->r[3] >> 12);
    c->r[8] = 0x4u;
    c->r[5] = 0x3u;
    c->r[7] = 0x2u;
    c->r[3] = 0x3fu;
    c->r[0] = c->r[0] | (c->r[2] >> 18);
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); c->r[2] = c->r[2] + 0x1u; }
    c->r[0] = 0x80u;
L_9c9a70:;
    c->r[3] = c->r[11] & c->r[3];
    c->r[11] = 0x2u;
    c->r[14] = c->r[14] - c->r[6];
    c->r[0] = c->r[3] | c->r[0];
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    c->r[2] = 0x2u;
    c->r[0] = (c->r[10] >> 6);
    c->r[0] = (c->r[0] & 0x3fu) | ((c->r[2] << 6) & 0xffffffc0u);
    c->r[9] = (c->r[9] & 0x3fu) | ((c->r[2] << 6) & 0xffffffc0u);
    { uint32_t ea = c->r[4] + c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[5]; ST8(ea, c->r[9]); }
    c->r[4] = c->r[4] + c->r[8];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9c9ba8; }
L_9c9aac:;
    { uint32_t ea = c->r[12] + 0x2u; uint32_t v = LD16(ea); c->r[12] = ea; c->r[6] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_9c9b70; }
    goto L_9c9ba8;
L_9c9ac0:;
    (void)f_subs(c, c->r[5], 0x800u);
    c->r[0] = 0x3u;
    if (COND_CC) { c->r[0] = 0x2u; }
    if (COND_CS) { goto L_9c9b0c; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c9b60; }
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_LT) { goto L_9c9bd4; }
    c->r[0] = (c->r[5] >> 6);
    c->r[2] = 0x6u;
    c->r[5] = (c->r[5] & 0x3fu) | ((c->r[11] << 6) & 0xffffffc0u);
    c->r[14] = c->r[14] - 0x2u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[2] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    c->r[4] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9c9aac; }
    goto L_9c9ba8;
L_9c9b0c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c9b68; }
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_LT) { goto L_9c9bd4; }
    c->r[0] = 0xe0u;
    c->r[2] = 0x2u;
    c->r[11] = 0x2u;
    c->r[14] = c->r[14] - 0x3u;
    c->r[0] = c->r[0] | (c->r[5] >> 12);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 6);
    c->r[5] = (c->r[5] & 0x3fu) | ((c->r[2] << 6) & 0xffffffc0u);
    c->r[0] = (c->r[0] & 0x3fu) | ((c->r[2] << 6) & 0xffffffc0u);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[5]); }
    c->r[4] = c->r[4] + 0x3u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_9c9aac; }
    goto L_9c9ba8;
L_9c9b58:;
    c->r[14] = c->r[14] + 0x1u;
    goto L_9c9a38;
L_9c9b60:;
    c->r[14] = c->r[14] + 0x2u;
    goto L_9c9a38;
L_9c9b68:;
    c->r[14] = c->r[14] + 0x3u;
    goto L_9c9a38;
L_9c9b70:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { goto L_9c9970; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9c9970; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9c9bb0; }
    goto L_9c9bc8;
L_9c9b9c:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[14] = c->r[4];
    if (COND_NE) { c->r[14] = c->r[3] - 0x1u; }
L_9c9ba8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9c9bc8; }
L_9c9bb0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[14];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c9bc8:;
    c->r[0] = c->r[14] + 0x1u;
L_9c9bcc:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c9bd4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9c9be8(Cpu *restrict c) {
    FN_ENTER(0x9c9be8u);
L_9c9be8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[2];
    c->r[9] = c->r[3];
    c->r[7] = c->r[0];
    c->r[10] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9c10; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_9c9ea8; }
L_9c9c10:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_9c9c28; }
    c->r[0] = c->r[7];
    c->r[14] = 0x9c9c24u; f_15efd88(c);
    c->r[1] = c->r[0];
L_9c9c28:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[5];
    c->r[2] = 0xfeffu;
    if (COND_NE) { c->r[0] = c->r[9] - 0x1u; }
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_EQ) { goto L_9c9c54; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_NE) { goto L_9c9c74; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9c9c60; }
    goto L_9c9c6c;
L_9c9c54:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9c6c; }
    c->r[2] = c->r[2] + 0xffu;
L_9c9c60:;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    c->r[0] = c->r[0] - 0x1u;
    goto L_9c9c74;
L_9c9c6c:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[5] = 0x0u;
L_9c9c74:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[8] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_9c9e8c; }
    c->r[11] = c->r[4] | 0x2u;
    c->r[12] = 0x1u;
    c->r[8] = 0x0u;
    goto L_9c9e6c;
L_9c9c98:;
    c->r[3] = c->r[6] & 0xe0u;
    (void)f_subs(c, c->r[3], 0xc0u);
    if (COND_NE) { goto L_9c9cd4; }
L_9c9ca4:;
    c->r[4] = 0x2u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9db8; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[6] & 0x1fu;
    c->r[3] = c->r[3] & 0x3fu;
    c->r[2] = c->r[3] | (c->r[2] << 6);
L_9c9cc0:;
    (void)f_subs(c, c->r[11], 0x2u);
    c->r[6] = ~0x0u;
    if (COND_NE) { c->r[2] = rev16_32(c->r[2]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    goto L_9c9e44;
L_9c9cd4:;
    c->r[3] = c->r[6] & 0xf0u;
    (void)f_subs(c, c->r[3], 0xe0u);
    if (COND_NE) { goto L_9c9d2c; }
L_9c9ce0:;
    c->r[4] = 0x3u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9db8; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[11], 0x2u);
    c->r[3] = c->r[3] & 0x3fu;
    c->r[2] = c->r[2] & 0x3fu;
    c->r[3] = c->r[3] | (c->r[6] << 12);
    c->r[2] = c->r[3] | (c->r[2] << 6);
    c->r[3] = __builtin_bswap32(c->r[2]);
    if (COND_NE) { c->r[2] = (c->r[3] >> 16); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    c->r[2] = c->r[2] & 0xf800u;
    (void)f_subs(c, c->r[2], 0xd800u);
    if (COND_EQ) { goto L_9c9eb4; }
    c->r[5] = c->r[5] + 0x2u;
    c->r[6] = ~0x0u;
    goto L_9c9e44;
L_9c9d2c:;
    c->r[3] = c->r[6] & 0xf8u;
    (void)f_subs(c, c->r[3], 0xf0u);
    if (COND_NE) { goto L_9c9dc4; }
L_9c9d38:;
    c->r[4] = 0x4u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9db8; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[6] & 0x7u;
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x3u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[3] = c->r[3] & 0x3fu;
    c->r[3] = (c->r[3] << 12);
    c->r[14] = c->r[3] | (c->r[2] << 18);
    c->r[2] = c->r[6] & 0x3fu;
    c->r[3] = c->r[14] | (c->r[2] << 6);
    c->r[2] = c->r[12] & 0x3fu;
    c->r[12] = 0x1u;
    c->r[6] = c->r[3] | c->r[2];
    c->r[2] = (c->r[6] >> 16);
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_HI) { goto L_9c9eb4; }
    { uint32_t sc = 0; uint32_t r = c->r[14] & 0x1f0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[3] = c->r[3] & 0xfc00u;
    c->r[2] = c->r[2] + 0xf0000u;
    if (COND_EQ) { c->r[2] = 0xf0000u; }
    (void)f_subs(c, c->r[11], 0x2u);
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (c->r[2] >> 10);
    c->r[2] = 0x36u;
    c->r[3] = (c->r[3] & 0x3ffu) | ((c->r[2] << 10) & 0xfffffc00u);
    if (COND_NE) { goto L_9c9e20; }
    c->r[2] = 0x37u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); }
    c->r[6] = (c->r[6] & 0x3ffu) | ((c->r[2] << 10) & 0xfffffc00u);
    goto L_9c9e38;
L_9c9db8:;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    goto L_9c9e44;
L_9c9dc4:;
    c->r[3] = c->r[6] & 0xfcu;
    (void)f_subs(c, c->r[3], 0xf8u);
    if (COND_EQ) { goto L_9c9ec0; }
    c->r[3] = c->r[6] & 0x80u;
    c->r[4] = c->r[12] ^ (c->r[3] >> 7);
    c->r[3] = c->r[6] & 0xfeu;
    (void)f_subs(c, c->r[3], 0xfcu);
    if (COND_EQ) { c->r[4] = 0x6u; }
    c->r[3] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_HI) { goto L_9c9ec0; }
    c->r[3] = (c->r[3] << 2);
    c->r[2] = 0x9c9dfcu + 0x4u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[2]; switch (c->pc) { case 0x9c9ca4u: goto L_9c9ca4; case 0x9c9ce0u: goto L_9c9ce0; case 0x9c9d38u: goto L_9c9d38; case 0x9c9e10u: goto L_9c9e10; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9c9e10:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9e5c; }
    c->r[2] = c->r[6] & 0x7fu;
    goto L_9c9cc0;
L_9c9e20:;
    c->r[2] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    c->r[2] = 0x37u;
    c->r[6] = (c->r[6] & 0x3ffu) | ((c->r[2] << 10) & 0xfffffc00u);
    c->r[2] = __builtin_bswap32(c->r[6]);
    c->r[6] = (c->r[2] >> 16);
L_9c9e38:;
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    c->r[5] = c->r[5] + 0x4u;
    c->r[6] = ~0x1u;
L_9c9e44:;
    c->r[1] = f_subs(c, c->r[1], c->r[4]);
    c->r[0] = c->r[6] + c->r[0];
    if (COND_NE) { { uint32_t ea = c->r[7] + c->r[4]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[6] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_NE) { goto L_9c9e6c; }
    goto L_9c9e8c;
L_9c9e5c:;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    c->r[4] = 0x1u;
    goto L_9c9e44;
L_9c9e6c:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9c9c98; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_9c9c98; }
    c->r[0] = 0x0u;
L_9c9e8c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9c9ecc; }
L_9c9e94:;
    c->r[1] = 0x0u;
    c->r[10] = c->r[9] - c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[1]); }
    if (COND_NE) { c->r[10] = ~0x0u; }
L_9c9ea8:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9c9eb4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    goto L_9c9ea8;
L_9c9ec0:;
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9c9e94; }
L_9c9ecc:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9c9ee0(Cpu *restrict c) {
    FN_ENTER(0x9c9ee0u);
L_9c9ee0:;
    __attribute__((musttail)) return f_9c92e0(c);
}
void f_9c9ee4(Cpu *restrict c) {
    FN_ENTER(0x9c9ee4u);
L_9c9ee4:;
    __attribute__((musttail)) return f_9c960c(c);
}
void f_9c9ee8(Cpu *restrict c) {
    FN_ENTER(0x9c9ee8u);
L_9c9ee8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[1];
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[10];
    if (COND_GE) { goto L_9c9f0c; }
    c->r[0] = c->r[11];
    c->r[14] = 0x9c9f0cu; f_15efd88(c);
L_9c9f0c:;
    c->r[1] = 0x1u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ca214; }
    c->r[2] = 0x0u;
L_9c9f20:;
    c->r[3] = c->r[11] + c->r[2];
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9ca214; }
    if (COND_LT) { goto L_9c9f44; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_9c9f20; }
    goto L_9ca214;
L_9c9f44:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_9ca0dc; }
    c->r[14] = c->r[10] - 0x1u;
    c->r[12] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = 0x0u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
L_9c9f68:;
    (void)f_subs(c, c->r[14], c->r[2]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    if (COND_NE) { c->r[1] = c->r[11] + c->r[2]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; } }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_9c9fa8; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9ca0b4; }
    c->r[4] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_9c9fdc; }
    c->r[7] = 0x1u;
L_9c9fa0:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_EQ) { c->r[12] = c->r[12] + 0x2u; }
L_9c9fa8:;
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[4] = 0x1u;
    if (COND_NE) { goto L_9ca0b4; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_NE) { goto L_9ca024; }
    c->r[1] = c->r[0] - 0x40u;
    c->r[7] = 0x3u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_CS) { goto L_9ca084; }
    c->r[4] = 0x0u;
    goto L_9ca0b4;
L_9c9fdc:;
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_EQ) { goto L_9ca02c; }
    (void)f_subs(c, c->r[0], 0x9fu);
    if (COND_HI) { goto L_9ca02c; }
    c->r[3] = c->r[1] - 0x40u;
    c->r[7] = 0x3u;
    c->r[4] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[4], 0x3fu);
    if (COND_CC) { goto L_9c9fa0; }
    c->r[4] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_9ca244; }
    (void)f_subs(c, c->r[1], 0xfdu);
    c->r[8] = 0x0u;
    if (COND_CC) { goto L_9c9fa0; }
    goto L_9ca0e4;
L_9ca024:;
    c->r[4] = 0x0u;
    goto L_9ca0b4;
L_9ca02c:;
    c->r[4] = c->r[0] + 0x5fu;
    c->r[7] = 0x2u;
    c->r[4] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[4], 0x3fu);
    if (COND_CC) { goto L_9c9fa0; }
    c->r[3] = c->r[0] & 0xf0u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[3], 0xe0u);
    if (COND_NE) { goto L_9ca244; }
    c->r[3] = c->r[1] - 0x40u;
    c->r[7] = 0x3u;
    c->r[4] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[4], 0x3fu);
    if (COND_CC) { goto L_9c9fa0; }
    c->r[4] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_9ca244; }
    (void)f_subs(c, c->r[1], 0xfcu);
    c->r[8] = 0x0u;
    if (COND_LS) { goto L_9c9fa0; }
    goto L_9ca0e4;
L_9ca084:;
    (void)f_subs(c, c->r[0], 0xfdu);
    c->r[1] = 0x0u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[4] = 0x2u;
    c->r[3] = 0x0u;
    if (COND_CC) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_LT) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { c->r[12] = c->r[0]; }
    if (COND_NE) { c->r[4] = 0x0u; }
L_9ca0b4:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_GE) { goto L_9ca0c8; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_NE) { goto L_9c9f68; }
L_9ca0c8:;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[4], 0x2u);
    c->r[9] = c->r[12];
    if (COND_NE) { c->r[8] = 0x2u; }
    goto L_9ca0e4;
L_9ca0dc:;
    c->r[8] = 0x2u;
    c->r[9] = 0x0u;
L_9ca0e4:;
    c->r[0] = 0xea61d0u;
    c->r[2] = 0x3u;
    c->r[1] = 0x9ca0f4u + c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0x9ca0f8u; f_15effbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = 0x3u; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_GE) { goto L_9ca208; }
    c->r[1] = 0x0u;
    c->r[12] = 0x1u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[3] = 0x0u;
L_9ca11c:;
    { uint32_t ea = c->r[11] + c->r[6]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_9ca194; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_9ca1bc; }
    c->r[2] = c->r[4] & 0xe0u;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[2], 0xc0u);
    if (COND_NE) { c->r[2] = c->r[4] & 0xf0u; }
    if (COND_NE) { c->r[1] = 0x3u; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xe0u); }
    if (COND_EQ) { goto L_9ca178; }
    c->r[2] = c->r[4] & 0xf8u;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[2], 0xf0u);
    if (COND_NE) { c->r[2] = c->r[4] & 0xfcu; }
    if (COND_NE) { c->r[1] = 0x5u; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0xf8u); }
    if (COND_EQ) { goto L_9ca178; }
    c->r[2] = c->r[4] & 0xfeu;
    c->r[1] = c->r[12] ^ (c->r[4] >> 7);
    (void)f_subs(c, c->r[2], 0xfcu);
    if (COND_EQ) { c->r[1] = 0x6u; }
L_9ca178:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[4] = c->r[1];
    c->r[7] = 0x1u;
    c->r[2] = c->r[1];
    if (COND_EQ) { c->r[7] = 0x2u; }
    if (COND_NE) { c->r[4] = c->r[4] + c->r[3]; }
    goto L_9ca1d0;
L_9ca194:;
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_9ca1cc; }
    c->r[5] = (uint32_t)(int32_t)(int8_t)(c->r[4]);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_9ca238; }
    (void)f_subs(c, c->r[4], 0xbfu);
    c->r[4] = c->r[3];
    if (COND_LS) { goto L_9ca1d0; }
    goto L_9ca238;
L_9ca1bc:;
    c->r[4] = c->r[3];
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { goto L_9ca1e0; }
    goto L_9ca1f0;
L_9ca1cc:;
    c->r[4] = c->r[3];
L_9ca1d0:;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_9ca1f0; }
L_9ca1e0:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_LT) { goto L_9ca11c; }
L_9ca1f0:;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x3u; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { c->r[1] = c->r[8]; }
    goto L_9ca218;
L_9ca208:;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x3u; }
L_9ca214:;
    c->r[4] = 0x0u;
L_9ca218:;
    c->r[0] = c->r[1] - 0x3u;
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[1];
    if (COND_CC) { c->r[0] = 0x2u; }
    (void)f_subs(c, c->r[4], c->r[9]);
    if (COND_CS) { c->r[0] = c->r[1]; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9ca238:;
    c->r[4] = 0x0u;
    c->r[1] = c->r[8];
    goto L_9ca218;
L_9ca244:;
    c->r[8] = 0x0u;
    goto L_9ca0e4;
}
void f_9ca250(Cpu *restrict c) {
    FN_ENTER(0x9ca250u);
L_9ca250:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_9ca26c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ca268u; f_15efd88(c);
    c->r[1] = c->r[0];
L_9ca26c:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_9ca278:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9ca29c; }
    if (COND_LT) { goto L_9ca298; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9ca278; }
    goto L_9ca29c;
L_9ca298:;
    c->r[0] = 0x0u;
L_9ca29c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ca2a0(Cpu *restrict c) {
    FN_ENTER(0x9ca2a0u);
L_9ca2a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9ca2bc; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9ca2b8u; f_15efd88(c);
    c->r[1] = c->r[0];
L_9ca2bc:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_9ca338; }
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
L_9ca2cc:;
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[4] = 0x1u;
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ca324; }
    c->r[5] = c->r[3] & 0xe0u;
    c->r[4] = 0x2u;
    (void)f_subs(c, c->r[5], 0xc0u);
    if (COND_NE) { c->r[5] = c->r[3] & 0xf0u; }
    if (COND_NE) { c->r[4] = 0x3u; }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0xe0u); }
    if (COND_EQ) { goto L_9ca324; }
    c->r[5] = c->r[3] & 0xf8u;
    c->r[4] = 0x4u;
    (void)f_subs(c, c->r[5], 0xf0u);
    if (COND_NE) { c->r[5] = c->r[3] & 0xfcu; }
    if (COND_NE) { c->r[4] = 0x5u; }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0xf8u); }
    if (COND_EQ) { goto L_9ca324; }
    c->r[3] = c->r[3] & 0xfeu;
    c->r[4] = 0x6u;
    (void)f_subs(c, c->r[3], 0xfcu);
    if (COND_NE) { goto L_9ca338; }
L_9ca324:;
    c->r[2] = c->r[4] + c->r[2];
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_9ca2cc; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9ca338:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ca340(Cpu *restrict c) {
    FN_ENTER(0x9ca340u);
L_9ca340:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    c->r[6] = c->r[2];
    c->r[0] = c->r[5];
    c->r[14] = 0x9ca358u; f_15efd88(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ca3dc; }
    c->r[3] = c->r[6] + 0x1u;
    c->r[2] = 0x0u;
L_9ca36c:;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = 0x1u;
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9ca3c4; }
    c->r[4] = c->r[6] & 0xe0u;
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[4], 0xc0u);
    if (COND_NE) { c->r[4] = c->r[6] & 0xf0u; }
    if (COND_NE) { c->r[0] = 0x3u; }
    if (COND_NE) { (void)f_subs(c, c->r[4], 0xe0u); }
    if (COND_EQ) { goto L_9ca3c4; }
    c->r[4] = c->r[6] & 0xf8u;
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[4], 0xf0u);
    if (COND_NE) { c->r[4] = c->r[6] & 0xfcu; }
    if (COND_NE) { c->r[0] = 0x5u; }
    if (COND_NE) { (void)f_subs(c, c->r[4], 0xf8u); }
    if (COND_EQ) { goto L_9ca3c4; }
    c->r[6] = c->r[6] & 0xfeu;
    c->r[0] = 0x6u;
    (void)f_subs(c, c->r[6], 0xfcu);
    if (COND_NE) { goto L_9ca3dc; }
L_9ca3c4:;
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_9ca3e4; }
    c->r[2] = c->r[0] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_9ca36c; }
    goto L_9ca400;
L_9ca3dc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9ca3e4:;
    c->r[1] = c->r[5] + c->r[2];
    c->r[2] = 0x0u;
L_9ca3ec:;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + c->r[2]; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_9ca3ec; }
L_9ca400:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9ca404(Cpu *restrict c) {
    FN_ENTER(0x9ca404u);
L_9ca404:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0x9ca418u; f_9c98c4(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ca420(Cpu *restrict c) {
    FN_ENTER(0x9ca420u);
L_9ca420:;
    __attribute__((musttail)) return f_9c9be8(c);
}
void f_9ca424(Cpu *restrict c) {
    FN_ENTER(0x9ca424u);
L_9ca424:;
    c->r[1] = 0x1076a90u;
    { uint32_t ea = 0x9ca430u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    return;
}
void f_9ca450(Cpu *restrict c) {
    FN_ENTER(0x9ca450u);
L_9ca450:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9ca464u; f_15efd88(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9ca470u; f_9c9ee8(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9ca478(Cpu *restrict c) {
    FN_ENTER(0x9ca478u);
L_9ca478:;
    return;
}
void f_9ca47c(Cpu *restrict c) {
    FN_ENTER(0x9ca47cu);
L_9ca47c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9ca480(Cpu *restrict c) {
    FN_ENTER(0x9ca480u);
L_9ca480:;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] - 0x3u;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_CS) { goto L_9ca4f0; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9ca544; }
    c->r[3] = c->r[1] & 0xe0u;
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[3], 0xc0u);
    if (COND_NE) { c->r[3] = c->r[1] & 0xf0u; }
    if (COND_NE) { c->r[2] = 0x3u; }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0xe0u); }
    if (COND_EQ) { goto L_9ca4e8; }
    c->r[3] = c->r[1] & 0xf8u;
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[3], 0xf0u);
    if (COND_NE) { c->r[3] = c->r[1] & 0xfcu; }
    if (COND_NE) { c->r[2] = 0x5u; }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0xf8u); }
    if (COND_EQ) { goto L_9ca4e8; }
    c->r[3] = c->r[1] & 0xfeu;
    c->r[2] = 0x6u;
    (void)f_subs(c, c->r[3], 0xfcu);
    if (COND_NE) { goto L_9ca544; }
L_9ca4e8:;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    goto L_9ca53c;
L_9ca4f0:;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_NE) { goto L_9ca544; }
    (void)f_subs(c, c->r[1], 0xa0u);
    c->r[3] = 0x0u;
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[12] = 0x0u;
    if (COND_CC) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { c->r[12] = 0x1u; }
    { uint32_t r = c->r[12] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9ca534; }
    c->r[2] = c->r[1] + 0x20u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[2], 0x1cu);
    if (COND_HI) { goto L_9ca544; }
L_9ca534:;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    c->r[2] = 0x2u;
L_9ca53c:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
L_9ca544:;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[1] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); } }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); } }
    return;
}
void f_9ca56c(Cpu *restrict c) {
    FN_ENTER(0x9ca56cu);
L_9ca56c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_9ca580(Cpu *restrict c) {
    FN_ENTER(0x9ca580u);
L_9ca580:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CS) { goto L_9ca5b8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9ca5d4; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { return; }
    goto L_9ca5c0;
L_9ca5b8:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_9ca5d4; }
L_9ca5c0:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[0] = 0x1u; }
L_9ca5d4:;
    return;
}
void f_9ca5d8(Cpu *restrict c) {
    FN_ENTER(0x9ca5d8u);
L_9ca5d8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ca5e0(Cpu *restrict c) {
    FN_ENTER(0x9ca5e0u);
L_9ca5e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[12] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[12] = c->r[0] + c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9ca694; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_LS) { goto L_9ca6e8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9ca6e8; }
    c->r[11] = c->r[3] - 0x2u;
    c->r[5] = c->r[0] + 0x4u;
    c->r[0] = 0x0u;
    c->r[9] = 0x37u;
    c->r[10] = 0x36u;
    c->r[3] = 0x0u;
L_9ca62c:;
    (void)f_subs(c, c->r[6], 0x10000u);
    c->r[7] = 0x4u;
    if (COND_CC) { c->r[7] = 0x2u; }
    c->r[4] = c->r[7] + c->r[3];
    (void)f_subs(c, c->r[4], c->r[11]);
    if (COND_HI) { goto L_9ca6f4; }
    (void)f_subs(c, c->r[6], 0x10000u);
    if (COND_CS) { goto L_9ca654; }
    c->r[3] = c->r[2];
    goto L_9ca66c;
L_9ca654:;
    c->r[6] = c->r[6] - 0x10000u;
    c->r[3] = c->r[2];
    c->r[1] = (c->r[6] >> 10);
    c->r[6] = (c->r[6] & 0x3ffu) | ((c->r[9] << 10) & 0xfffffc00u);
    c->r[1] = (c->r[1] & 0x3ffu) | ((c->r[10] << 10) & 0xfffffc00u);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[1]); c->r[3] = c->r[3] + 0x2u; }
L_9ca66c:;
    c->r[2] = c->r[2] + c->r[7];
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[12]);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[6]); }
    if (COND_CS) { goto L_9ca6f8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x4u; c->r[6] = v; }
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_9ca62c; }
    goto L_9ca6f8;
L_9ca694:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_LS) { goto L_9ca70c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9ca710; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
L_9ca6bc:;
    (void)f_subs(c, c->r[2], 0x10000u);
    c->r[2] = 0x4u;
    c->r[1] = c->r[1] + 0x1u;
    if (COND_CC) { c->r[2] = 0x2u; }
    (void)f_subs(c, c->r[0], c->r[12]);
    c->r[4] = c->r[2] + c->r[4];
    if (COND_CS) { goto L_9ca710; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9ca6bc; }
    goto L_9ca710;
L_9ca6e8:;
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
    goto L_9ca6f8;
L_9ca6f4:;
    c->r[4] = c->r[3];
L_9ca6f8:;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[14]); }
    if (COND_NE) { { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); } }
L_9ca704:;
    c->r[0] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9ca70c:;
    c->r[1] = 0x0u;
L_9ca710:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9ca704; }
    c->r[0] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9ca724(Cpu *restrict c) {
    FN_ENTER(0x9ca724u);
L_9ca724:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[0];
    c->r[0] = c->r[2] - 0x1u;
    c->r[8] = c->r[3];
    c->r[7] = 0x0u;
    c->r[2] = c->r[1];
    c->r[6] = 0x0u;
L_9ca740:;
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9ca798; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[4], 0xc0u);
    if (COND_CS) { c->r[3] = 0x2u; }
    if (COND_CS) { (void)f_subs(c, c->r[4], 0xe0u); }
    if (COND_CC) { goto L_9ca784; }
    c->r[3] = 0x3u;
    (void)f_subs(c, c->r[4], 0xf0u);
    if (COND_CS) { c->r[3] = 0x4u; }
    if (COND_CS) { (void)f_subs(c, c->r[4], 0xf8u); }
    if (COND_CC) { goto L_9ca784; }
    (void)f_subs(c, c->r[4], 0xfcu);
    c->r[3] = 0x6u;
    if (COND_CC) { c->r[3] = 0x5u; }
L_9ca784:;
    c->r[6] = c->r[3] + c->r[5];
    c->r[2] = c->r[2] + c->r[3];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { c->r[7] = c->r[7] + 0x1u; }
    if (COND_LS) { goto L_9ca740; }
L_9ca798:;
    c->r[0] = c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0x9ca7a4u; f_15efe30(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[9] + c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[8]; ST32(ea, c->r[7]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9ca7bc(Cpu *restrict c) {
    FN_ENTER(0x9ca7bcu);
L_9ca7bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x106e390u;
    { uint32_t ea = 0x9ca7ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9ca7d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x9ca7e8u; rt_dispatch(c);
    c->r[1] = 0x106e36cu;
    { uint32_t ea = 0x9ca7f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9ca818(Cpu *restrict c) {
    FN_ENTER(0x9ca818u);
L_9ca818:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x106e32cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x9ca830u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x9ca834u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ca854(Cpu *restrict c) {
    FN_ENTER(0x9ca854u);
L_9ca854:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x106e2f4u;
    { uint32_t ea = 0x9ca868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9ca868u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9ca880(Cpu *restrict c) {
    FN_ENTER(0x9ca880u);
L_9ca880:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_HI) { { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); } }
    return;
}
void f_9ca894(Cpu *restrict c) {
    FN_ENTER(0x9ca894u);
L_9ca894:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { return; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9ca8b4(Cpu *restrict c) {
    FN_ENTER(0x9ca8b4u);
L_9ca8b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ca940; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9ca908; }
    c->r[6] = 0x0u;
L_9ca8dc:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ca8fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9ca8f8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_9ca8fc:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_9ca8dc; }
L_9ca908:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ca930; }
    c->r[0] = 0x106e23cu;
    { uint32_t ea = 0x9ca920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9ca920u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9ca930u; rt_dispatch(c);
L_9ca930:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_9ca940:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_521f9c(c);
}
void f_9ca954(Cpu *restrict c) {
    FN_ENTER(0x9ca954u);
L_9ca954:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[8] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x9ca98cu; f_9bb638(c);
    c->r[1] = 0xda3203u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x9ca9a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0xcu;
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
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x9caa04u; f_9bb638(c);
    c->r[1] = 0xda31a3u;
    c->r[1] = 0x9caa10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
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
    c->r[0] = c->r[10];
    c->r[14] = 0x9caa5cu; f_9bb638(c);
    c->r[1] = 0xda314fu;
    c->r[2] = 0x1076458u;
    c->r[1] = 0x9caa6cu + c->r[1];
    { uint32_t ea = 0x9caa70u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa00000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0x107643cu;
    { uint32_t ea = 0x9caa88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1076428u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x9caaa4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x107641cu;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x9caab4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9cab00(Cpu *restrict c) {
    FN_ENTER(0x9cab00u);
L_9cab00:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cab08(Cpu *restrict c) {
    FN_ENTER(0x9cab08u);
L_9cab08:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_9cac14; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_9cab30:;
    c->r[0] = c->r[4] + (c->r[4] >> 31);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_GE) { goto L_9cac08; }
    c->r[2] = 0x0u;
    c->r[8] = (c->r[4] << 2);
    c->r[9] = c->r[4];
    c->r[0] = c->r[2] - (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_9cab58:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[4]);
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_GE) { goto L_9cab70; }
    c->r[11] = c->r[9];
    goto L_9cabf4;
L_9cab70:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[10] = c->r[9] - c->r[4];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x9cab8cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[11] = c->r[9];
    if (COND_NE) { goto L_9cabe8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
L_9cab9c:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[10];
    (void)f_subs(c, c->r[11], c->r[4]);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[5]; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_9cabe8; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[11] - c->r[4];
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x9cabdcu; rt_dispatch(c);
    c->r[5] = c->r[5] - c->r[8];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9cab9c; }
L_9cabe8:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cabf4:;
    c->r[9] = c->r[9] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[0] + (c->r[11] << 2); ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_NE) { goto L_9cab58; }
L_9cac08:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_GE) { goto L_9cab30; }
L_9cac14:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9cac1c(Cpu *restrict c) {
    FN_ENTER(0x9cac1cu);
L_9cac1c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10762a8u;
    { uint32_t ea = 0x9cac2cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9cac30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x9cac48u; rt_dispatch(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1076270u;
    { uint32_t ea = 0x9cac68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cac78(Cpu *restrict c) {
    FN_ENTER(0x9cac78u);
L_9cac78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1076254u;
    { uint32_t ea = 0x9cac88u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9cac8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4410u;
    c->pc = c->r[4]; c->r[14] = 0x9caca4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x107622cu;
    { uint32_t ea = 0x9cacb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x4409u;
    c->r[14] = 0x9cacc4u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cacd4(Cpu *restrict c) {
    FN_ENTER(0x9cacd4u);
L_9cacd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x9cace8u; f_9bb638(c);
    c->r[1] = 0xda2ed7u;
    c->r[2] = 0x10761ecu;
    c->r[1] = 0x9cacf8u + c->r[1];
    { uint32_t ea = 0x9cacfcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa00000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = 0x10761d0u;
    { uint32_t ea = 0x9cad14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x10761bcu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x9cad30u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x10761b0u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x9cad40u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cad80(Cpu *restrict c) {
    FN_ENTER(0x9cad80u);
L_9cad80:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[2] = 0x4404u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_9cadec; }
    c->r[12] = 0x0u;
    c->r[14] = 0x0u;
L_9cada0:;
    c->r[2] = c->r[0] + (c->r[12] << 2);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9cadc0; }
    goto L_9caddc;
L_9cadb4:;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9caddc; }
L_9cadc0:;
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cadb4; }
    (void)f_subs(c, c->r[14], c->r[1]);
    if (COND_EQ) { goto L_9cadec; }
    c->r[14] = c->r[14] + 0x1u;
    goto L_9cadb4;
L_9caddc:;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[12], 0x100u);
    if (COND_CC) { goto L_9cada0; }
    c->r[2] = 0x0u;
L_9cadec:;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cadf4(Cpu *restrict c) {
    FN_ENTER(0x9cadf4u);
L_9cadf4:;
    return;
}
void f_9cadf8(Cpu *restrict c) {
    FN_ENTER(0x9cadf8u);
L_9cadf8:;
    c->r[1] = 0x4404u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cae04(Cpu *restrict c) {
    FN_ENTER(0x9cae04u);
L_9cae04:;
    return;
}
void f_9cae08(Cpu *restrict c) {
    FN_ENTER(0x9cae08u);
L_9cae08:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[2];
    c->r[8] = c->r[0];
    c->r[6] = c->r[1];
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[7] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9cae54; }
L_9cae2c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_9caf24; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9cae2c; }
    c->r[0] = 0x106dd08u;
    { uint32_t ea = 0x9cae54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cae5c;
L_9cae54:;
    c->r[0] = 0x106dcfcu;
    { uint32_t ea = 0x9cae60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9cae5c:;
    c->r[14] = 0x9cae60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x9cae74u; rt_dispatch(c);
    c->r[1] = 0x4408u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4404u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x404u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x440cu;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_9caf28; }
    c->r[3] = c->r[8] + 0x400u;
    c->r[7] = 0x0u;
L_9caed8:;
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_LS) { goto L_9caf0c; }
    c->r[5] = c->r[8] + (c->r[2] << 2);
    c->r[6] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x404u; uint32_t v = LD32(ea); c->r[4] = v; }
L_9caeec:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_CC) { { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); } }
    if (COND_CS) { c->r[4] = c->r[5]; }
    c->r[6] = c->r[6] - 0x4u;
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_HI) { goto L_9caeec; }
L_9caf0c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_CC) { goto L_9caed8; }
    goto L_9caf28;
L_9caf24:;
    c->r[0] = 0x0u;
L_9caf28:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9caf34(Cpu *restrict c) {
    FN_ENTER(0x9caf34u);
L_9caf34:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xd85e22u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x9caf54u + c->r[2]; }
    if (COND_EQ) { goto L_9caf5c; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_9caf60;
L_9caf5c:;
    c->r[1] = 0x0u;
L_9caf60:;
    c->r[14] = 0x9caf64u; f_9cbdb4(c);
    c->r[4] = c->r[0];
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[7] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9cb07c; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[0];
L_9caf84:;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_9cafa8; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[6];
    if (COND_NE) { goto L_9caf84; }
    goto L_9cb014;
L_9cafa8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cafc8; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[7];
    c->r[8] = 0x0u;
    if (COND_NE) { c->r[0] = c->r[1] + 0x8u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    goto L_9cafd8;
L_9cafc8:;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { c->r[8] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[8]); } }
    if (COND_EQ) { c->r[8] = 0x1u; }
L_9cafd8:;
    c->r[0] = 0x106db78u;
    { uint32_t ea = 0x9cafe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cafe4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x9caff4u; rt_dispatch(c);
    c->r[0] = 0x4408u;
    c->r[1] = c->r[5];
    (void)f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
L_9cb014:;
    c->r[1] = 0x4404u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9cb07c; }
    c->r[2] = 0x404u;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[5] + c->r[2];
L_9cb038:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[6] = 0x1u; }
    c->r[7] = c->r[7] | c->r[6];
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9cb064; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_9cb064:;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { goto L_9cb038; }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_9cb07c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9cb088(Cpu *restrict c) {
    FN_ENTER(0x9cb088u);
L_9cb088:;
    c->r[2] = c->r[0];
    c->r[0] = 0x4404u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_9cb0d4; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x404u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9cb0bc;
L_9cb0b8:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cb0bc:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_9cb0b8; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9cb0d4:;
    return;
}
void f_9cb0d8(Cpu *restrict c) {
    FN_ENTER(0x9cb0d8u);
L_9cb0d8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x4404u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_9cb208; }
    c->r[0] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x404u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[8] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9cb208; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[0];
L_9cb118:;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_9cb13c; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[5];
    if (COND_NE) { goto L_9cb118; }
    goto L_9cb1a8;
L_9cb13c:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cb15c; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[8];
    c->r[9] = 0x0u;
    if (COND_NE) { c->r[0] = c->r[1] + 0x8u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    goto L_9cb16c;
L_9cb15c:;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { c->r[9] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); } }
    if (COND_EQ) { c->r[9] = 0x1u; }
L_9cb16c:;
    c->r[0] = 0x106d9e4u;
    { uint32_t ea = 0x9cb178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cb178u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x9cb188u; rt_dispatch(c);
    c->r[0] = 0x4408u;
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); } }
L_9cb1a8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9cb208; }
    c->r[1] = 0x404u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[4] + c->r[1];
L_9cb1c4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    c->r[3] = c->r[3] | c->r[5];
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9cb1f0; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9cb1f0:;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_9cb1c4; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[0] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); } }
L_9cb208:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9cb210(Cpu *restrict c) {
    FN_ENTER(0x9cb210u);
L_9cb210:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3fcu;
    c->r[14] = __builtin_bswap32(c->r[1]);
    c->r[1] = ~0xff000000u;
    c->r[12] = c->r[3] & ~(c->r[14] >> 22);
    c->r[3] = 0x1075cc0u;
    { uint32_t ea = 0x9cb234u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[12] = c->r[12] ^ c->r[1];
    c->r[1] = c->r[12] ^ (c->r[14] >> 16);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1] ^ (c->r[12] >> 8);
    c->r[1] = c->r[12] ^ (c->r[14] >> 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1] ^ (c->r[12] >> 8);
    c->r[1] = c->r[12] ^ c->r[14];
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] ^ (c->r[12] >> 8);
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9cae08(c);
}
void f_9cb27c(Cpu *restrict c) {
    FN_ENTER(0x9cb27cu);
L_9cb27c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3fcu;
    c->r[14] = __builtin_bswap32(c->r[1]);
    c->r[1] = ~0xff000000u;
    c->r[12] = c->r[3] & ~(c->r[14] >> 22);
    c->r[3] = 0x1075c54u;
    { uint32_t ea = 0x9cb2a0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[12] = c->r[12] ^ c->r[1];
    c->r[1] = c->r[12] ^ (c->r[14] >> 16);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1] ^ (c->r[12] >> 8);
    c->r[1] = c->r[12] ^ (c->r[14] >> 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1] ^ (c->r[12] >> 8);
    c->r[1] = c->r[12] ^ c->r[14];
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] ^ (c->r[12] >> 8);
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9cae08(c);
}
void f_9cb2e8(Cpu *restrict c) {
    FN_ENTER(0x9cb2e8u);
L_9cb2e8:;
    c->r[3] = 0x1075bf8u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x3fcu;
    { uint32_t ea = 0x9cb2fcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = __builtin_bswap32(c->r[1]);
    c->r[2] = c->r[2] & ~(c->r[1] >> 22);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = ~0xff000000u;
    c->r[12] = c->r[12] ^ c->r[2];
    c->r[2] = c->r[12] ^ (c->r[1] >> 16);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[2] ^ (c->r[12] >> 8);
    c->r[2] = c->r[12] ^ (c->r[1] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ (c->r[12] >> 8);
    c->r[1] = c->r[2] ^ c->r[1];
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] ^ (c->r[2] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    goto L_9cb354;
L_9cb350:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cb354:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_9cb350; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cb374(Cpu *restrict c) {
    FN_ENTER(0x9cb374u);
L_9cb374:;
    c->r[3] = 0x1075b6cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x3fcu;
    { uint32_t ea = 0x9cb388u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = __builtin_bswap32(c->r[1]);
    c->r[2] = c->r[2] & ~(c->r[1] >> 22);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = ~0xff000000u;
    c->r[12] = c->r[12] ^ c->r[2];
    c->r[2] = c->r[12] ^ (c->r[1] >> 16);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[2] ^ (c->r[12] >> 8);
    c->r[2] = c->r[12] ^ (c->r[1] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ (c->r[12] >> 8);
    c->r[1] = c->r[2] ^ c->r[1];
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] ^ (c->r[2] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    goto L_9cb3e0;
L_9cb3dc:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cb3e0:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_9cb3dc; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cb400(Cpu *restrict c) {
    FN_ENTER(0x9cb400u);
L_9cb400:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1075ae8u;
    { uint32_t ea = 0x9cb410u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9cb414u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x9cb42cu; rt_dispatch(c);
    c->r[1] = 0x1075ac0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9cb43cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = 0x101u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cb46c(Cpu *restrict c) {
    FN_ENTER(0x9cb46cu);
L_9cb46c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1075a7cu;
    { uint32_t ea = 0x9cb480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb4ac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb4a4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_9cb4ac:;
    { uint32_t ea = c->r[4] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb4d4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb4ccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_9cb4d4:;
    { uint32_t ea = c->r[4] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb4fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb4f4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_9cb4fc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cb508(Cpu *restrict c) {
    FN_ENTER(0x9cb508u);
L_9cb508:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10759e0u;
    { uint32_t ea = 0x9cb51cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb548; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb540u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_9cb548:;
    { uint32_t ea = c->r[4] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb570; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb568u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_9cb570:;
    { uint32_t ea = c->r[4] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb598; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb590u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_9cb598:;
    c->r[0] = 0x1075954u;
    { uint32_t ea = 0x9cb5a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cb5a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9cb5c0(Cpu *restrict c) {
    FN_ENTER(0x9cb5c0u);
L_9cb5c0:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_9cb5c4(Cpu *restrict c) {
    FN_ENTER(0x9cb5c4u);
L_9cb5c4:;
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
    c->r[14] = 0x9cb5fcu; f_9bb638(c);
    c->r[1] = 0xda25ceu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x9cb614u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    c->r[1] = c->r[1] - 0xc0000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
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
    c->r[14] = 0x9cb67cu; f_9bb638(c);
    c->r[1] = 0xda255bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9cb690u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
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
    c->r[14] = 0x9cb6f8u; f_9bb638(c);
    c->r[1] = 0xda24e8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9cb70cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
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
    c->r[14] = 0x9cb76cu; f_9bb638(c);
    c->r[1] = 0xda247cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9cb780u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
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
    c->r[14] = 0x9cb7e8u; f_9bb638(c);
    c->r[1] = 0xd9d527u;
    c->r[1] = 0x9cb7f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
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
void f_9cb850(Cpu *restrict c) {
    FN_ENTER(0x9cb850u);
L_9cb850:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10756a0u;
    { uint32_t ea = 0x9cb860u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9cb864u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x9cb87cu; rt_dispatch(c);
    c->r[1] = 0x1075678u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9cb88cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cb8a4(Cpu *restrict c) {
    FN_ENTER(0x9cb8a4u);
L_9cb8a4:;
    c->r[1] = 0x1075650u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x9cb8b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    return;
}
void f_9cb8c8(Cpu *restrict c) {
    FN_ENTER(0x9cb8c8u);
L_9cb8c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1075628u;
    { uint32_t ea = 0x9cb8dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb908; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb900u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_9cb908:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cb914(Cpu *restrict c) {
    FN_ENTER(0x9cb914u);
L_9cb914:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10755dcu;
    { uint32_t ea = 0x9cb928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_9cb954; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x9cb94cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_9cb954:;
    c->r[0] = 0x10755a0u;
    { uint32_t ea = 0x9cb960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cb960u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9cb97c(Cpu *restrict c) {
    FN_ENTER(0x9cb97cu);
L_9cb97c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_9cb980(Cpu *restrict c) {
    FN_ENTER(0x9cb980u);
L_9cb980:;
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
    c->r[14] = 0x9cb9b8u; f_9bb638(c);
    c->r[1] = 0xda2237u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x9cb9ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
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
void f_9cba14(Cpu *restrict c) {
    FN_ENTER(0x9cba14u);
L_9cba14:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9cba18(Cpu *restrict c) {
    FN_ENTER(0x9cba18u);
L_9cba18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x9cba24u; f_200690(c);
    c->r[0] = 0x106d12cu;
    { uint32_t ea = 0x9cba30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cba30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9cba48(Cpu *restrict c) {
    FN_ENTER(0x9cba48u);
L_9cba48:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9cba4c(Cpu *restrict c) {
    FN_ENTER(0x9cba4cu);
L_9cba4c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9cba50(Cpu *restrict c) {
    FN_ENTER(0x9cba50u);
L_9cba50:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[9] = c->r[0];
    c->r[0] = 0x1075468u;
    c->r[1] = 0x4408u;
    c->r[8] = 0x0u;
    c->r[11] = 0x0u;
    c->r[7] = c->r[9];
    { uint32_t ea = 0x9cba78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + c->r[1]; }
    c->r[0] = 0x106d0d4u;
    { uint32_t ea = 0x9cba88u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_9cba84:;
    c->r[10] = c->r[9] + (c->r[11] << 2);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9cbac8; }
L_9cba94:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9cbaa0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x9cbab0u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[6] = c->r[4];
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_9cba94; }
L_9cbac8:;
    c->r[11] = c->r[11] + 0x1u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[11], 0x100u);
    if (COND_NE) { goto L_9cba84; }
    c->r[0] = 0x404u;
    c->r[1] = 0x4004u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x9cbae8u; f_15efd7c(c);
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9cbafc(Cpu *restrict c) {
    FN_ENTER(0x9cbafcu);
L_9cbafc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[9] = c->r[0];
    c->r[0] = 0x10753bcu;
    c->r[1] = 0x4408u;
    c->r[8] = 0x0u;
    c->r[11] = 0x0u;
    c->r[7] = c->r[9];
    { uint32_t ea = 0x9cbb24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + c->r[1]; }
    c->r[0] = 0x106d028u;
    { uint32_t ea = 0x9cbb34u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_9cbb30:;
    c->r[10] = c->r[9] + (c->r[11] << 2);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9cbb74; }
L_9cbb40:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x9cbb4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x9cbb5cu; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[6] = c->r[4];
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_9cbb40; }
L_9cbb74:;
    c->r[11] = c->r[11] + 0x1u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[11], 0x100u);
    if (COND_NE) { goto L_9cbb30; }
    c->r[0] = 0x404u;
    c->r[1] = 0x4004u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x9cbb94u; f_15efd7c(c);
    c->r[0] = 0x107533cu;
    { uint32_t ea = 0x9cbba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cbba0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9cbbc4(Cpu *restrict c) {
    FN_ENTER(0x9cbbc4u);
L_9cbbc4:;
    c->r[0] = 0x107530cu;
    { uint32_t ea = 0x9cbbd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cbbd4(Cpu *restrict c) {
    FN_ENTER(0x9cbbd4u);
L_9cbbd4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9cbbd8(Cpu *restrict c) {
    FN_ENTER(0x9cbbd8u);
L_9cbbd8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9cbbdc(Cpu *restrict c) {
    FN_ENTER(0x9cbbdcu);
L_9cbbdc:;
    c->r[0] = 0x1075310u;
    { uint32_t ea = 0x9cbbe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cbbec(Cpu *restrict c) {
    FN_ENTER(0x9cbbecu);
L_9cbbec:;
    c->r[0] = 0x1075308u;
    { uint32_t ea = 0x9cbbf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cbbfc(Cpu *restrict c) {
    FN_ENTER(0x9cbbfcu);
L_9cbbfc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x9cbc08u; f_200690(c);
    c->r[0] = 0x10752c0u;
    { uint32_t ea = 0x9cbc14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cbc14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9cbc2c(Cpu *restrict c) {
    FN_ENTER(0x9cbc2cu);
L_9cbc2c:;
    c->r[0] = 0x107529cu;
    { uint32_t ea = 0x9cbc38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_9cbc3c(Cpu *restrict c) {
    FN_ENTER(0x9cbc3cu);
L_9cbc3c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x106cef8u;
    c->r[6] = 0x0u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9cbc64u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x106cef8u;
    { uint32_t ea = 0x9cbc6cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xd8a28fu;
    c->r[1] = 0x9cbc74u + c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x9cbc7cu; f_9aedcc(c);
    c->r[0] = 0x1075268u;
    c->r[1] = 0xda1f1fu;
    c->r[2] = c->r[5];
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9cbca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9cbca4u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1075220u;
    { uint32_t ea = 0x9cbcb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cbcb4u; f_9aedcc(c);
    c->r[1] = 0x1075238u;
    c->r[2] = c->r[4];
    c->r[3] = 0x4410u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9cbcd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10751f4u;
    c->r[1] = 0xd8a226u;
    { uint32_t ea = 0x9cbce8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9cbcecu + c->r[1];
    c->r[14] = 0x9cbcecu; f_9aedcc(c);
    c->r[1] = 0x1075204u;
    c->r[2] = c->r[4];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9cbd0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10751d8u;
    c->r[1] = 0xda1eb1u;
    { uint32_t ea = 0x9cbd20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9cbd24u + c->r[1];
    c->r[14] = 0x9cbd24u; f_9aedcc(c);
    c->r[1] = 0x10751d0u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9cbd44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10751a8u;
    c->r[1] = 0xd8a1afu;
    { uint32_t ea = 0x9cbd58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9cbd5cu + c->r[1];
    c->r[14] = 0x9cbd5cu; f_9aedcc(c);
    c->r[1] = 0x10751b0u;
    { uint32_t ea = 0x9cbd68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cbdb4(Cpu *restrict c) {
    FN_ENTER(0x9cbdb4u);
L_9cbdb4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cbdd8; }
    c->r[0] = c->r[0] + 0x1u;
L_9cbdc4:;
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = crc32_n(c->r[1], c->r[2], 1, rt_crc32_tab);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9cbdc4; }
L_9cbdd8:;
    c->r[0] = c->r[1];
    return;
}
void f_9cbde0(Cpu *restrict c) {
    FN_ENTER(0x9cbde0u);
L_9cbde0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[1];
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->r[5] = c->r[3];
    c->r[4] = c->r[0];
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
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cbe48; }
    c->r[14] = 0x9cbe44u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9cbe48:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->r[3] = c->r[4] + 0x30u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[8] = c->v.f[18] * c->v.f[0];
    c->v.f[10] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[12] = c->v.f[6] * c->v.f[10];
    c->v.f[14] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4], c->v.s[8]);
    ST32(c->r[4] + 4u, c->v.s[10]);
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[6] * c->v.f[8]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[10] * c->v.f[2]);
    ST32(c->r[4] + 16u, c->v.s[2]);
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[12]);
    ST32(c->r[4] + 36u, c->v.s[14]);
    ST32(c->r[4] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cbed0(Cpu *restrict c) {
    FN_ENTER(0x9cbed0u);
L_9cbed0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[1];
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[5] = c->r[3];
    c->r[4] = c->r[0];
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[16] = c->v.f[10] * c->v.f[2];
    c->v.f[18] = c->v.f[8] * c->v.f[4];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[20] = c->v.f[0] * c->v.f[6];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cbf38; }
    c->r[14] = 0x9cbf34u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9cbf38:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->r[3] = c->r[4] + 0x30u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[8] = c->v.f[18] * c->v.f[0];
    c->v.f[10] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[12] = c->v.f[4] * c->v.f[0];
    c->v.f[14] = c->v.f[6] * c->v.f[8];
    ST32(c->r[4], c->v.s[8]);
    ST32(c->r[4] + 4u, c->v.s[10]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[4] + 8u, c->v.s[0]);
    c->v.f[10] = c->v.f[10] * c->v.f[2];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[4] * c->v.f[8]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[12]);
    ST32(c->r[4] + 20u, c->v.s[14]);
    ST32(c->r[4] + 24u, c->v.s[10]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[2]);
    ST32(c->r[4] + 36u, c->v.s[4]);
    ST32(c->r[4] + 40u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cbfc0(Cpu *restrict c) {
    FN_ENTER(0x9cbfc0u);
L_9cbfc0:;
    c->r[1] = 0x5256u;
    c->r[2] = 0x1947u;
    c->r[3] = 0xe44u;
    c->r[12] = 0xfda2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xcab50000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8500000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x5c500000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xd9a80000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[12]); }
    return;
}
void f_9cbfe8(Cpu *restrict c) {
    FN_ENTER(0x9cbfe8u);
L_9cbfe8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = 0xcd15u;
    c->r[12] = 0x55e5u;
    c->r[2] = 0x3bb5u;
    c->r[3] = 0x1333u;
    c->r[14] = 0x9365u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x75b0000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x159a0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f120000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x5490000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x65ac0000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[12]); }
    c->r[5] = 0x9365u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xac0000u;
    c->r[4] = c->r[1] ^ c->r[5];
    c->r[1] = 0x64u;
L_9cc030:;
    c->r[5] = c->r[12];
    c->r[12] = c->r[2];
    c->r[2] = c->r[3];
    c->r[3] = c->r[4] & 0x3u;
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[3] = c->r[4] ^ sh_lsr(c->r[14], c->r[3]);
    c->r[4] = c->r[3] ^ (c->r[3] >> 3);
    c->r[4] = c->r[4] ^ (c->r[3] >> 4);
    c->r[4] = c->r[4] ^ (c->r[3] << 3);
    c->r[4] = c->r[4] ^ (c->r[3] << 4);
    c->r[3] = c->r[4] ^ (c->r[4] << 15);
    c->r[3] = c->r[3] ^ (c->r[3] >> 4);
    c->r[3] = c->r[3] ^ c->r[2];
    c->r[3] = c->r[3] ^ (c->r[2] >> 21);
    if (COND_NE) { goto L_9cc030; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cc07c(Cpu *restrict c) {
    FN_ENTER(0x9cc07cu);
L_9cc07c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = 0xcd15u;
    c->r[12] = 0x55e5u;
    c->r[2] = 0x3bb5u;
    c->r[3] = 0x1333u;
    c->r[14] = 0x9365u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x75b0000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x159a0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f120000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x5490000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x65ac0000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[12]); }
    c->r[5] = 0x9365u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xac0000u;
    c->r[4] = c->r[1] ^ c->r[5];
    c->r[1] = 0x64u;
L_9cc0c4:;
    c->r[5] = c->r[12];
    c->r[12] = c->r[2];
    c->r[2] = c->r[3];
    c->r[3] = c->r[4] & 0x3u;
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[3] = c->r[4] ^ sh_lsr(c->r[14], c->r[3]);
    c->r[6] = c->r[2] ^ (c->r[2] >> 21);
    c->r[4] = c->r[3] ^ (c->r[3] >> 3);
    c->r[4] = c->r[4] ^ (c->r[3] >> 4);
    c->r[4] = c->r[4] ^ (c->r[3] << 3);
    c->r[4] = c->r[4] ^ (c->r[3] << 4);
    c->r[3] = c->r[4] ^ (c->r[4] << 15);
    c->r[6] = c->r[6] ^ c->r[3];
    c->r[3] = c->r[6] ^ (c->r[3] >> 4);
    if (COND_NE) { goto L_9cc0c4; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cc110(Cpu *restrict c) {
    FN_ENTER(0x9cc110u);
L_9cc110:;
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] ^ (c->r[1] << 15);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] ^ (c->r[1] >> 4);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] ^ c->r[2];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] ^ (c->r[2] >> 21);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1];
    return;
}
void f_9cc144(Cpu *restrict c) {
    FN_ENTER(0x9cc144u);
L_9cc144:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->v.s[20] = 0x2f800000u;
    c->v.s[2] = 0xbf800000u;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] ^ (c->r[0] << 15);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] ^ (c->r[0] >> 4);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] ^ c->r[1];
    c->r[0] = c->r[0] ^ (c->r[1] >> 21);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[4] = c->v.f[0] + c->v.f[0];
    c->v.s[0] = 0x3f800000u;
    c->v.f[16] = c->v.f[4] + c->v.f[2];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cc1b8; }
    c->r[14] = 0x9cc1b4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9cc1b8:;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->v.s[2] = 0x40490fdbu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] ^ (c->r[0] << 15);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] ^ (c->r[0] >> 4);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] ^ c->r[1];
    c->r[0] = c->r[0] ^ (c->r[1] >> 21);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[20] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9cc204u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9cc210u; f_15efde8(c);
    c->v.f[4] = c->v.f[18] * c->v.f[22];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.s[1] = c->v.s[16];
    c->v.s[0] = c->v.s[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cc230(Cpu *restrict c) {
    FN_ENTER(0x9cc230u);
L_9cc230:;
    c->r[0] = 0x106d958u;
    c->r[1] = 0x5256u;
    c->r[2] = 0x1947u;
    c->r[3] = 0xe44u;
    c->r[12] = 0xfda2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xcab50000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8500000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x5c500000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xd9a80000u;
    { uint32_t ea = 0x9cc25cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[12]); }
    return;
}
void f_9cc264(Cpu *restrict c) {
    FN_ENTER(0x9cc264u);
L_9cc264:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1074b84u;
    { uint32_t ea = 0x9cc274u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x9cc278u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1c0u;
    c->pc = c->r[4]; c->r[14] = 0x9cc290u; rt_dispatch(c);
    c->r[1] = 0x1074b44u;
    c->r[2] = 0x126fu;
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3a830000u;
    { uint32_t ea = 0x9cc2a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x13cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x180u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x181u; ST8(ea, c->r[3]); }
    c->r[3] = 0x106c830u;
    { uint32_t ea = 0x9cc31cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x168u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1074ab0u;
    { uint32_t ea = c->r[0] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x9cc340u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x174u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[3]); }
    c->r[3] = 0x106cee8u;
    { uint32_t ea = c->r[0] + 0x17cu; ST32(ea, c->r[1]); }
    /* pld */
    { uint32_t ea = c->r[0] + 0x1a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x9cc370u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x126fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3b030000u;
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cc3bc(Cpu *restrict c) {
    FN_ENTER(0x9cc3bcu);
L_9cc3bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1074a28u;
    { uint32_t ea = 0x9cc3d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x9cc3d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_9cc3e8(Cpu *restrict c) {
    FN_ENTER(0x9cc3e8u);
L_9cc3e8:;
    return;
}
void f_9cc3ec(Cpu *restrict c) {
    FN_ENTER(0x9cc3ecu);
L_9cc3ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_9cc3f0(Cpu *restrict c) {
    FN_ENTER(0x9cc3f0u);
L_9cc3f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0x106c748u;
    c->r[3] = 0x1c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10749d4u;
    { uint32_t ea = 0x9cc41cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd89b3au;
    { uint32_t ea = 0x9cc424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9cc428u + c->r[1];
    c->r[14] = 0x9cc428u; f_9aedcc(c);
    c->r[1] = 0x1074ae8u;
    { uint32_t ea = 0x9cc434u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cc450(Cpu *restrict c) {
    FN_ENTER(0x9cc450u);
L_9cc450:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x160u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[3];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_9cce18; }
    c->r[2] = (c->r[2] << 2);
    c->r[7] = 0x9cc490u + 0xcu;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[7]; switch (c->pc) { case 0x9cc4b0u: goto L_9cc4b0; case 0x9cc4f8u: goto L_9cc4f8; case 0x9cc568u: goto L_9cc568; case 0x9cc69cu: goto L_9cc69c; case 0x9cc82cu: goto L_9cc82c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cc4b0:;
    c->r[0] = 0x106c690u;
    { uint32_t ea = 0x9cc4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    goto L_9cce18;
L_9cc4f8:;
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[0] + 112u);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[8] = LD32(c->r[0] + 116u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[0] + 120u);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[2]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    ST32(c->r[6], c->v.s[0]);
    ST32(c->r[6] + 4u, c->v.s[2]);
    ST32(c->r[6] + 8u, c->v.s[4]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[0] + 208u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[0] + 212u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[10] = LD32(c->r[0] + 216u);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[2]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    ST32(c->r[5], c->v.s[0]);
    ST32(c->r[5] + 4u, c->v.s[2]);
    ST32(c->r[5] + 8u, c->v.s[4]);
    goto L_9cce18;
L_9cc568:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    c->v.s[6] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[0] + 112u);
    c->v.s[12] = LD32(c->r[0] + 128u);
    c->v.s[8] = LD32(c->r[3] + 4u);
    c->v.s[2] = LD32(c->r[0] + 116u);
    c->v.s[1] = LD32(c->r[0] + 132u);
    c->v.s[10] = LD32(c->r[3] + 8u);
    c->v.s[4] = LD32(c->r[0] + 120u);
    c->v.s[14] = LD32(c->r[0] + 136u);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.f[3] = c->v.f[6] + c->v.f[12];
    c->v.f[1] = c->v.f[8] + c->v.f[1];
    c->v.f[5] = c->v.f[10] + c->v.f[14];
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 208u, c->v.s[3]);
    ST32(c->r[13] + 212u, c->v.s[1]);
    ST32(c->r[13] + 216u, c->v.s[5]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[2]); }
    c->v.f[1] = c->v.f[1] - c->v.f[2];
    c->v.f[3] = c->v.f[3] - c->v.f[0];
    c->v.f[5] = c->v.f[5] - c->v.f[4];
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[7] = LD32(c->r[0] + 208u);
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[0] + 212u);
    c->v.s[9] = LD32(c->r[0] + 224u);
    c->v.s[11] = LD32(c->r[0] + 228u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.s[14] = LD32(c->r[0] + 216u);
    c->v.s[13] = LD32(c->r[0] + 232u);
    c->v.f[1] = c->v.f[1] * c->v.f[1];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[7] = c->v.f[7] + c->v.f[8];
    c->v.f[12] = c->v.f[12] + c->v.f[6];
    c->v.f[6] = c->v.f[6] + c->v.f[11];
    c->v.f[8] = c->v.f[8] + c->v.f[9];
    c->v.f[14] = c->v.f[14] + c->v.f[10];
    c->v.f[10] = c->v.f[10] + c->v.f[13];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[5] * c->v.f[5]);
    ST32(c->r[13] + 128u, c->v.s[7]);
    ST32(c->r[13] + 132u, c->v.s[12]);
    c->v.f[12] = c->v.f[6] - c->v.f[12];
    c->v.f[7] = c->v.f[8] - c->v.f[7];
    ST32(c->r[13] + 136u, c->v.s[14]);
    c->v.f[14] = c->v.f[10] - c->v.f[14];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 144u, c->v.s[8]);
    ST32(c->r[13] + 148u, c->v.s[6]);
    ST32(c->r[13] + 152u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[2]); }
    c->v.f[12] = c->v.f[12] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[7] * c->v.f[7]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.s[14] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[1], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9ccb7c; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9ccc40; }
    c->r[1] = 0x0u;
    c->r[0] = c->v.s[10];
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[6], c->v.s[0]);
    ST32(c->r[6] + 4u, c->v.s[2]);
    ST32(c->r[6] + 8u, c->v.s[4]);
    ST32(c->r[5], c->v.s[8]);
    ST32(c->r[5] + 4u, c->v.s[6]);
    goto L_9cce10;
L_9cc69c:;
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[10] = LD32(c->r[0] + 112u);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[6] = LD32(c->r[0] + 116u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[8] = LD32(c->r[0] + 120u);
    c->v.s[1] = LD32(c->r[0] + 128u);
    c->v.s[12] = LD32(c->r[0] + 132u);
    c->v.s[14] = LD32(c->r[0] + 136u);
    c->v.s[3] = LD32(c->r[0] + 152u);
    c->v.s[5] = LD32(c->r[0] + 148u);
    c->v.s[7] = LD32(c->r[0] + 144u);
    c->r[4] = 0x0u;
    c->r[2] = c->r[13] + 0x130u;
    c->r[3] = c->r[13] + 0x100u;
    c->v.f[10] = c->v.f[10] + c->v.f[0];
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    c->v.f[8] = c->v.f[8] + c->v.f[4];
    ST32(c->r[13] + 192u, c->v.s[10]);
    ST32(c->r[13] + 196u, c->v.s[6]);
    c->v.f[6] = c->v.f[0] + c->v.f[1];
    ST32(c->r[13] + 200u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    c->v.f[8] = c->v.f[2] + c->v.f[12];
    c->v.f[0] = c->v.f[0] + c->v.f[7];
    c->v.f[2] = c->v.f[2] + c->v.f[5];
    ST32(c->r[13] + 208u, c->v.s[6]);
    c->v.f[6] = c->v.f[4] + c->v.f[14];
    ST32(c->r[13] + 212u, c->v.s[8]);
    ST32(c->r[13] + 216u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[3];
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[0] + 208u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[0] + 212u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[8] = LD32(c->r[0] + 216u);
    c->v.s[1] = LD32(c->r[0] + 224u);
    c->v.s[12] = LD32(c->r[0] + 228u);
    c->v.s[14] = LD32(c->r[0] + 232u);
    c->v.s[3] = LD32(c->r[0] + 240u);
    c->v.s[5] = LD32(c->r[0] + 244u);
    c->v.s[7] = LD32(c->r[0] + 248u);
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[13] + 0x80u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x158u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x128u; ST8(ea, c->r[4]); }
    c->v.f[10] = c->v.f[10] + c->v.f[0];
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    c->v.f[8] = c->v.f[8] + c->v.f[4];
    ST32(c->r[13] + 128u, c->v.s[10]);
    ST32(c->r[13] + 132u, c->v.s[6]);
    c->v.f[6] = c->v.f[0] + c->v.f[1];
    ST32(c->r[13] + 136u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->v.f[8] = c->v.f[2] + c->v.f[12];
    c->v.f[0] = c->v.f[0] + c->v.f[3];
    c->v.f[2] = c->v.f[2] + c->v.f[5];
    ST32(c->r[13] + 144u, c->v.s[6]);
    c->v.f[6] = c->v.f[4] + c->v.f[14];
    ST32(c->r[13] + 148u, c->v.s[8]);
    ST32(c->r[13] + 152u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[7];
    ST32(c->r[13] + 164u, c->v.s[2]);
    ST32(c->r[13] + 168u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[4]); }
    c->r[14] = 0x9cc7ecu; f_9e174c(c);
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    goto L_9cce18;
L_9cc82c:;
    c->r[2] = 0xffffu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->v.s[16] = 0x7f7fffffu;
    c->r[10] = c->r[13] + 0xc0u;
    c->r[4] = c->r[13] + 0x50u;
    c->r[5] = c->r[13] + 0x130u;
    c->r[6] = c->r[13] + 0x100u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x158u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x128u; ST8(ea, c->r[8]); }
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[0] + 112u);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[8] = LD32(c->r[0] + 116u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[0] + 120u);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 192u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 196u, c->v.s[8]);
    ST32(c->r[13] + 200u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 128u);
    c->v.s[8] = LD32(c->r[0] + 132u);
    c->v.s[10] = LD32(c->r[0] + 136u);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 208u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 212u, c->v.s[8]);
    ST32(c->r[13] + 216u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 144u);
    c->v.s[8] = LD32(c->r[0] + 148u);
    c->v.s[10] = LD32(c->r[0] + 152u);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 224u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 228u, c->v.s[8]);
    ST32(c->r[13] + 232u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 160u);
    c->v.s[8] = LD32(c->r[0] + 164u);
    c->v.s[10] = LD32(c->r[0] + 168u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 240u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 244u, c->v.s[2]);
    ST32(c->r[13] + 248u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[8]); }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[0] + 208u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[0] + 212u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[10] = LD32(c->r[0] + 216u);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 128u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 132u, c->v.s[8]);
    ST32(c->r[13] + 136u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 224u);
    c->v.s[8] = LD32(c->r[0] + 228u);
    c->v.s[10] = LD32(c->r[0] + 232u);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 144u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 148u, c->v.s[8]);
    ST32(c->r[13] + 152u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 240u);
    c->v.s[8] = LD32(c->r[0] + 244u);
    c->v.s[10] = LD32(c->r[0] + 248u);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 160u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 164u, c->v.s[8]);
    ST32(c->r[13] + 168u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 256u);
    c->v.s[8] = LD32(c->r[0] + 260u);
    c->v.s[10] = LD32(c->r[0] + 264u);
    c->r[0] = 0xea3d04u;
    c->r[0] = 0x9cc9c8u + c->r[0];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xea3cf0u;
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->r[9] = 0x9cc9dcu + c->r[0];
    c->r[0] = 0x0u;
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 180u, c->v.s[2]);
    ST32(c->r[13] + 184u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[8]); }
L_9cc9f0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[2] = c->r[13] + 0x80u;
    c->r[7] = 0x0u;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3] + (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3] + (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[1] << 4);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[8]); }
L_9cca70:;
    c->r[0] = c->r[9];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[10] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    c->r[14] = 0x9ccaf4u; f_9e174c(c);
    c->v.s[0] = LD32(c->r[13] + 336u);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9ccb48; }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[16] = c->v.s[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[8]); }
L_9ccb48:;
    c->r[7] = c->r[7] + 0xcu;
    (void)f_subs(c, c->r[7], 0x30u);
    if (COND_NE) { goto L_9cca70; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_9cc9f0; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_9cce18;
L_9ccb7c:;
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cccec; }
    c->r[0] = c->r[13] + 0xc0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x130u;
    c->r[14] = 0x9ccb98u; f_a098b4(c);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->v.s[16] = LD32(c->r[13] + 304u);
    c->v.f[18] = c->v.f[8] - c->v.f[2];
    c->v.f[22] = c->v.f[6] - c->v.f[0];
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ccbe4; }
    c->r[14] = 0x9ccbe0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ccbe4:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 192u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->v.f[10] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[6], c->v.s[2]);
    ST32(c->r[6] + 4u, c->v.s[4]);
    ST32(c->r[6] + 8u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cce10;
L_9ccc40:;
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0x100u;
    c->r[14] = 0x9ccc50u; f_a098b4(c);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[6] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[8] = LD32(c->r[13] + 148u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[10] = LD32(c->r[13] + 152u);
    c->v.s[16] = LD32(c->r[13] + 256u);
    c->v.f[18] = c->v.f[8] - c->v.f[2];
    c->v.f[22] = c->v.f[6] - c->v.f[0];
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cccbc; }
    c->r[14] = 0x9cccb8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9cccbc:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->v.f[10] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    goto L_9cce04;
L_9cccec:;
    c->v.s[0] = 0x3a83126fu;
    c->r[0] = c->r[13] + 0xc0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x130u;
    c->r[3] = c->r[13] + 0x100u;
    c->r[14] = 0x9ccd04u; f_a09bc0(c);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->v.s[18] = LD32(c->r[13] + 304u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[24] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ccd50; }
    c->r[14] = 0x9ccd4cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ccd50:;
    c->v.s[16] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[6] = LD32(c->r[13] + 200u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[16] / c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 192u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[24] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[6], c->v.s[2]);
    ST32(c->r[6] + 4u, c->v.s[4]);
    ST32(c->r[6] + 8u, c->v.s[6]);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[6] = LD32(c->r[13] + 144u);
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[8] = LD32(c->r[13] + 148u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[10] = LD32(c->r[13] + 152u);
    c->v.s[18] = LD32(c->r[13] + 256u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[24] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ccddc; }
    c->r[14] = 0x9ccdd8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ccddc:;
    c->v.f[0] = c->v.f[16] / c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.f[8] = c->v.f[24] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[0]);
L_9cce04:;
    c->r[0] = c->v.s[6];
    ST32(c->r[5], c->v.s[2]);
    ST32(c->r[5] + 4u, c->v.s[4]);
L_9cce10:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_9cce18:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    ST32(c->r[9], c->v.s[0]);
    c->v.s[6] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[9] + 4u, c->v.s[2]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    c->v.s[2] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[9] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[8], c->v.s[6]);
    ST32(c->r[8] + 4u, c->v.s[0]);
    ST32(c->r[8] + 8u, c->v.s[2]);
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_9cce8c(Cpu *restrict c) {
    FN_ENTER(0x9cce8cu);
L_9cce8c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[3];
    c->r[7] = c->r[2];
    c->r[4] = c->r[0];
    c->r[0] = 0x1073f04u;
    c->v.s[11] = LD32(c->r[7]);
    c->v.s[19] = LD32(c->r[6]);
    c->v.s[15] = LD32(c->r[7] + 4u);
    c->v.s[21] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.s[23] = LD32(c->r[6] + 8u);
    c->v.s[16] = LD32(c->r[1]);
    c->v.s[18] = LD32(c->r[1] + 4u);
    c->v.s[20] = LD32(c->r[1] + 8u);
    c->v.s[22] = LD32(c->r[9]);
    c->v.s[24] = LD32(c->r[9] + 4u);
    c->v.s[26] = LD32(c->r[9] + 8u);
    { uint32_t ea = 0x9ccef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[25] = c->v.f[21] - c->v.f[15];
    c->v.f[27] = c->v.f[19] - c->v.f[11];
    c->v.f[9] = c->v.f[23] - c->v.f[4];
    c->v.s[28] = LD32(c->r[0]);
    c->v.s[30] = LD32(c->r[0] + 4u);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[20] - c->v.f[4];
    c->v.f[12] = c->v.f[24] - c->v.f[15];
    c->v.f[1] = c->v.f[18] - c->v.f[15];
    c->v.f[8] = c->v.f[16] - c->v.f[11];
    c->v.f[2] = c->v.f[26] - c->v.f[4];
    c->v.f[7] = c->v.f[22] - c->v.f[11];
    c->v.f[20] = c->v.f[20] - c->v.f[23];
    c->v.f[24] = c->v.f[24] - c->v.f[21];
    c->v.f[18] = c->v.f[18] - c->v.f[21];
    c->v.f[26] = c->v.f[26] - c->v.f[23];
    c->v.f[22] = c->v.f[22] - c->v.f[19];
    c->v.f[16] = c->v.f[16] - c->v.f[19];
    c->v.f[3] = c->v.f[11] * c->v.f[28];
    c->v.f[17] = c->v.f[15] * c->v.f[30];
    c->v.f[15] = c->v.f[15] - c->v.f[21];
    c->v.f[11] = c->v.f[11] - c->v.f[19];
    c->v.f[28] = c->v.f[19] * c->v.f[28];
    c->v.f[10] = c->v.f[2] * c->v.f[8];
    c->v.f[5] = c->v.f[12] * c->v.f[0];
    c->v.f[29] = c->v.f[9] * c->v.f[1];
    c->v.f[13] = c->v.f[27] * c->v.f[0];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[7] * c->v.f[0]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[2] * c->v.f[1]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[25] * c->v.f[0]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[9] * c->v.f[8]);
    c->v.f[6] = c->v.f[17] * c->v.f[10];
    c->v.f[10] = c->v.f[25] * c->v.f[10];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[5]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[27] * c->v.f[5]);
    c->v.f[5] = c->v.f[17] * c->v.f[13];
    c->v.f[13] = c->v.f[12] * c->v.f[13];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[29]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[7] * c->v.f[29]);
    c->v.f[29] = c->v.f[26] * c->v.f[18];
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[24] * c->v.f[20]);
    c->v.f[20] = c->v.f[22] * c->v.f[20];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[26] * c->v.f[16]);
    c->v.f[26] = c->v.f[21] * c->v.f[30];
    c->v.f[16] = c->v.f[24] * c->v.f[16];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[22] * c->v.f[18]);
    c->v.f[18] = c->v.f[25] * c->v.f[2];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[9] * c->v.f[12]);
    c->v.f[26] = c->v.f[26] * c->v.f[20];
    c->v.f[15] = c->v.f[15] * c->v.f[20];
    c->v.f[20] = c->v.f[7] * c->v.f[1];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[29]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[29]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[11] = c->v.f[27] * c->v.f[12];
    c->v.f[11] = c->v.f[11] - (float)(c->v.f[25] * c->v.f[7]);
    c->v.f[7] = c->v.f[9] * c->v.f[7];
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[27] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[9] * c->v.f[20]);
    c->v.f[28] = c->v.f[25] * c->v.f[8];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[27] * c->v.f[1]);
    c->v.f[12] = c->v.f[7] * c->v.f[1];
    c->v.f[1] = c->v.f[4] * c->v.f[14];
    c->v.f[14] = c->v.f[23] * c->v.f[14];
    c->v.f[4] = c->v.f[4] - c->v.f[23];
    c->v.f[24] = c->v.f[17] * c->v.f[7];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[3] * c->v.f[18]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[4] * c->v.f[16]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[14] * c->v.f[16]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[1] * c->v.f[28]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[11] * c->v.f[1]);
    c->v.f[16] = c->v.f[26] * c->v.f[15];
    c->v.f[18] = c->v.f[5] * c->v.f[13];
    c->v.f[22] = c->v.f[6] * c->v.f[10];
    c->v.f[0] = c->v.f[24] * c->v.f[12];
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_9cd060; }
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { vfp_cmp_f(c, c->v.f[0], 0.0f); }
    if (COND_HI) { vfp_mrs_flags(c); }
    if (COND_LS) { goto L_9cd060; }
    vfp_cmp_f(c, c->v.f[22], 0.0f);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd620; }
L_9cd060:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->r[5] = 0x0u;
    c->r[8] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd0dc; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[14] = 0x9cd090u; f_9cd640(c);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.s[20] = 0x7f7fffffu;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cd0e0; }
    c->v.s[20] = c->v.s[0];
    c->r[8] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    ST32(c->r[10], c->v.s[2]);
    ST32(c->r[10] + 4u, c->v.s[4]);
    ST32(c->r[10] + 8u, c->v.s[6]);
    goto L_9cd0e0;
L_9cd0dc:;
    c->v.s[20] = 0x7f7fffffu;
L_9cd0e0:;
    vfp_cmp_f(c, c->v.f[22], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd148; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[3] = c->r[9];
    c->r[14] = 0x9cd104u; f_9cd640(c);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cd148; }
    c->v.s[20] = c->v.s[0];
    c->r[1] = 0x0u;
    c->r[8] = 0x1u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[10], c->v.s[2]);
    ST32(c->r[10] + 4u, c->v.s[4]);
    ST32(c->r[10] + 8u, c->v.s[6]);
L_9cd148:;
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd1b0; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x9cd16cu; f_9cd640(c);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cd1b0; }
    c->v.s[20] = c->v.s[0];
    c->r[1] = 0x0u;
    c->r[8] = 0x2u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[10], c->v.s[2]);
    ST32(c->r[10] + 4u, c->v.s[4]);
    ST32(c->r[10] + 8u, c->v.s[6]);
L_9cd1b0:;
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd214; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[14] = 0x9cd1d4u; f_9cd640(c);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.f[6] = c->v.f[2] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cd214; }
    c->r[1] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[10], c->v.s[0]);
    ST32(c->r[10] + 4u, c->v.s[2]);
    ST32(c->r[10] + 8u, c->v.s[4]);
    goto L_9cd280;
L_9cd214:;
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_HI) { goto L_9cd39c; }
    c->r[0] = (c->r[8] << 2);
    c->r[1] = 0x9cd228u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x9cd23cu: goto L_9cd23c; case 0x9cd280u: goto L_9cd280; case 0x9cd2c0u: goto L_9cd2c0; case 0x9cd300u: goto L_9cd300; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cd23c:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_HI) { goto L_9cd620; }
    c->r[1] = (c->r[5] << 2);
    c->r[2] = 0x9cd254u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9cd274u: goto L_9cd274; case 0x9cd3a4u: goto L_9cd3a4; case 0x9cd3bcu: goto L_9cd3bc; case 0x9cd418u: goto L_9cd418; case 0x9cd558u: goto L_9cd558; case 0x9cd564u: goto L_9cd564; case 0x9cd630u: goto L_9cd630; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cd274:;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    goto L_9cd620;
L_9cd280:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_HI) { goto L_9cd620; }
    c->r[1] = (c->r[5] << 2);
    c->r[2] = 0x9cd298u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9cd2b8u: goto L_9cd2b8; case 0x9cd3a4u: goto L_9cd3a4; case 0x9cd3b0u: goto L_9cd3b0; case 0x9cd3bcu: goto L_9cd3bc; case 0x9cd418u: goto L_9cd418; case 0x9cd478u: goto L_9cd478; case 0x9cd4f4u: goto L_9cd4f4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cd2b8:;
    c->r[1] = 0x3u;
    goto L_9cd4f8;
L_9cd2c0:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_HI) { goto L_9cd620; }
    c->r[1] = (c->r[5] << 2);
    c->r[2] = 0x9cd2d8u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9cd2f8u: goto L_9cd2f8; case 0x9cd3a4u: goto L_9cd3a4; case 0x9cd3b0u: goto L_9cd3b0; case 0x9cd478u: goto L_9cd478; case 0x9cd558u: goto L_9cd558; case 0x9cd564u: goto L_9cd564; case 0x9cd5c0u: goto L_9cd5c0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cd2f8:;
    c->r[1] = 0x3u;
    goto L_9cd5c4;
L_9cd300:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_HI) { goto L_9cd620; }
    c->r[1] = (c->r[5] << 2);
    c->r[2] = 0x9cd318u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9cd338u: goto L_9cd338; case 0x9cd3b0u: goto L_9cd3b0; case 0x9cd3bcu: goto L_9cd3bc; case 0x9cd4f4u: goto L_9cd4f4; case 0x9cd558u: goto L_9cd558; case 0x9cd5c0u: goto L_9cd5c0; case 0x9cd630u: goto L_9cd630; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cd338:;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[1]); }
    goto L_9cd620;
L_9cd39c:;
    c->r[0] = 0x0u;
    goto L_9cd620;
L_9cd3a4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    goto L_9cd420;
L_9cd3b0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    goto L_9cd4fc;
L_9cd3bc:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9cd54c;
L_9cd418:;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
L_9cd420:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9cd54c;
L_9cd478:;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[2]); }
    goto L_9cd5e4;
L_9cd4f4:;
    c->r[1] = 0x2u;
L_9cd4f8:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
L_9cd4fc:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cd54c:;
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[1]); }
    goto L_9cd620;
L_9cd558:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    goto L_9cd620;
L_9cd564:;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9cd618;
L_9cd5c0:;
    c->r[1] = 0x2u;
L_9cd5c4:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_9cd5e4:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cd618:;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[1]); }
L_9cd620:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9cd630:;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    goto L_9cd620;
}
void f_9cd640(Cpu *restrict c) {
    FN_ENTER(0x9cd640u);
L_9cd640:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[12] = 0x106b4e0u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[3]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[14] = LD32(c->r[3] + 4u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->v.s[1] = LD32(c->r[3] + 8u);
    { uint32_t ea = 0x9cd66cu + c->r[12]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.f[8] = c->v.f[14] - c->v.f[4];
    c->v.f[11] = c->v.f[12] - c->v.f[0];
    c->v.s[5] = LD32(c->r[12]);
    c->v.s[9] = LD32(c->r[12] + 4u);
    c->v.s[26] = LD32(c->r[14]);
    c->v.s[28] = LD32(c->r[14] + 4u);
    c->v.s[24] = LD32(c->r[14] + 8u);
    c->v.s[3] = LD32(c->r[12] + 8u);
    c->v.f[10] = c->v.f[28] - c->v.f[4];
    c->v.f[6] = c->v.f[9] - c->v.f[4];
    c->v.f[7] = c->v.f[5] - c->v.f[0];
    c->v.f[13] = c->v.f[26] - c->v.f[0];
    c->v.f[18] = c->v.f[24] - c->v.f[2];
    c->v.f[15] = c->v.f[6] * c->v.f[10];
    c->v.f[16] = c->v.f[8] * c->v.f[10];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[7] * c->v.f[13]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[11] * c->v.f[13]);
    c->v.f[13] = c->v.f[1] - c->v.f[2];
    c->v.f[10] = c->v.f[3] - c->v.f[2];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[13] * c->v.f[18]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[10] * c->v.f[18]);
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { vfp_cmp_f(c, c->v.f[15], 0.0f); }
    if (COND_LS) { vfp_mrs_flags(c); }
    if (COND_HI) { goto L_9cd6f8; }
L_9cd6d4:;
    ST32(c->r[1], c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9cd6e8:;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_9cd6f8:;
    c->v.f[18] = c->v.f[28] - c->v.f[14];
    c->v.f[22] = c->v.f[26] - c->v.f[12];
    c->v.f[30] = c->v.f[24] - c->v.f[1];
    c->v.f[20] = c->v.f[6] * c->v.f[18];
    c->v.f[18] = c->v.f[8] * c->v.f[18];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[11] * c->v.f[22]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[7] * c->v.f[22]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[13] * c->v.f[30]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[30]);
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9cd74c; }
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd74c; }
L_9cd734:;
    ST32(c->r[1], c->v.s[12]);
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9cd6e8;
L_9cd74c:;
    c->v.f[22] = c->v.f[16] * c->v.f[20];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[18] * c->v.f[15]);
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd794; }
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9cd794; }
    vfp_cmp_f(c, c->v.f[22], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd794; }
    c->v.f[2] = c->v.f[16] - c->v.f[18];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9cd830; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    goto L_9cd834;
L_9cd794:;
    c->v.f[30] = c->v.f[28] - c->v.f[9];
    c->v.f[17] = c->v.f[26] - c->v.f[5];
    c->v.f[24] = c->v.f[24] - c->v.f[3];
    c->v.f[28] = c->v.f[6] * c->v.f[30];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[7] * c->v.f[17]);
    c->v.f[26] = c->v.f[8] * c->v.f[30];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[11] * c->v.f[17]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[10] * c->v.f[24]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[13] * c->v.f[24]);
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9cd7e8; }
    vfp_cmp_f(c, c->v.f[26], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd7e8; }
    ST32(c->r[1], c->v.s[5]);
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9cd6e8;
L_9cd7e8:;
    c->v.f[24] = c->v.f[26] * c->v.f[15];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[16] * c->v.f[28]);
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd878; }
    vfp_cmp_f(c, c->v.f[15], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9cd878; }
    vfp_cmp_f(c, c->v.f[24], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd878; }
    c->v.f[8] = c->v.f[15] - c->v.f[28];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9cd908; }
    c->v.s[12] = 0x3f800000u;
    c->v.f[8] = c->v.f[12] / c->v.f[8];
    goto L_9cd90c;
L_9cd830:;
    c->v.s[2] = 0x0u;
L_9cd834:;
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9cd6d4; }
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = 0x1u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 8u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[13] * c->v.f[2]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[2]);
    ST32(c->r[1], c->v.s[0]);
    ST32(c->r[1] + 4u, c->v.s[4]);
    c->r[2] = c->v.s[6];
    goto L_9cd6e8;
L_9cd878:;
    c->v.f[16] = c->v.f[18] * c->v.f[28];
    c->v.f[28] = c->v.f[26] - c->v.f[26];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[26] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { c->v.f[15] = c->v.f[20] - c->v.f[18]; }
    if (COND_GE) { vfp_cmp_f(c, c->v.f[15], 0.0f); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_LT) { goto L_9cd8c4; }
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_9cd8c4; }
    c->v.f[0] = c->v.f[15] + c->v.f[28];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_9cd93c; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    goto L_9cd940;
L_9cd8c4:;
    c->v.f[12] = c->v.f[16] + c->v.f[24];
    c->v.s[14] = 0x3f800000u;
    c->r[0] = 0x0u;
    c->v.f[12] = c->v.f[22] + c->v.f[12];
    c->v.f[12] = c->v.f[14] / c->v.f[12];
    c->v.f[14] = c->v.f[24] * c->v.f[12];
    c->v.f[12] = c->v.f[22] * c->v.f[12];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[13] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[11] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[12]);
    c->r[2] = c->v.s[2];
    ST32(c->r[1], c->v.s[0]);
    ST32(c->r[1] + 4u, c->v.s[4]);
    goto L_9cd6e8;
L_9cd908:;
    c->v.s[8] = 0x0u;
L_9cd90c:;
    c->v.f[8] = c->v.f[15] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9cd6d4; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[8]);
    c->r[0] = 0x2u;
    ST32(c->r[1], c->v.s[0]);
    ST32(c->r[1] + 4u, c->v.s[4]);
    c->r[2] = c->v.s[2];
    goto L_9cd6e8;
L_9cd93c:;
    c->v.s[0] = 0x0u;
L_9cd940:;
    c->v.f[0] = c->v.f[15] * c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9cd734; }
    c->v.f[2] = c->v.f[5] - c->v.f[12];
    c->v.f[4] = c->v.f[9] - c->v.f[14];
    c->r[0] = 0x4u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[2] = c->v.f[3] - c->v.f[1];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[1], c->v.s[12]);
    ST32(c->r[1] + 4u, c->v.s[14]);
    c->r[2] = c->v.s[1];
    goto L_9cd6e8;
}
void f_9cd984(Cpu *restrict c) {
    FN_ENTER(0x9cd984u);
L_9cd984:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0]);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[14] = LD32(c->r[0] + 20u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[3] = LD32(c->r[0] + 24u);
    c->v.s[5] = LD32(c->r[1] + 12u);
    c->v.s[12] = c->r[12];
    c->v.s[1] = c->r[4];
    c->v.s[7] = c->r[14];
    c->v.f[8] = c->v.f[0] * c->v.f[12];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[1]);
    c->v.f[6] = c->v.f[12] * c->v.f[14];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[3]);
    c->v.f[5] = c->v.f[5] + c->v.f[8];
    c->v.s[8] = 0x3a83126fu;
    c->v.f[9] = fabsf(c->v.f[6]);
    vfp_cmp_f(c, c->v.f[9], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cda18; }
    c->v.s[6] = 0x0u;
    vfp_cmp_f(c, c->v.f[5], c->v.f[8]);
    c->r[0] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_9cda40; }
    c->r[0] = 0x0u;
    c->v.f[8] = fabsf(c->v.f[5]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[5] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[5] * c->v.f[1]);
    goto L_9cda44;
L_9cda18:;
    c->v.s[8] = 0x3f800000u;
    c->r[0] = 0x1u;
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    c->v.s[8] = 0x0u;
    c->v.f[12] = c->v.f[6] * c->v.f[5];
    c->v.f[6] = -(float)(c->v.f[6] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[10] * c->v.f[12]);
    goto L_9cda44;
L_9cda40:;
    c->v.s[8] = c->v.s[6];
L_9cda44:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { ST32(c->r[2], c->v.s[6]); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[3] + 0xcu;
    ST32(c->r[3], c->v.s[4]);
    ST32(c->r[3] + 4u, c->v.s[0]);
    ST32(c->r[3] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[3] + 32u, c->v.s[8]);
    ST32(c->r[3] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[3] + 0x28u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9cda88(Cpu *restrict c) {
    FN_ENTER(0x9cda88u);
L_9cda88:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[4] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 16u);
    c->v.s[5] = LD32(c->r[0] + 20u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[7] = LD32(c->r[0] + 24u);
    c->v.s[3] = LD32(c->r[1] + 12u);
    c->v.s[9] = 0x3a83126fu;
    c->v.s[12] = c->r[4];
    c->v.s[1] = c->r[12];
    c->v.s[10] = c->r[14];
    c->v.f[2] = c->v.f[4] * c->v.f[12];
    c->v.f[0] = c->v.f[5] * c->v.f[12];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[1]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[3] = c->v.f[3] + c->v.f[2];
    c->v.f[2] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[9]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cdb2c; }
    c->v.f[2] = fabsf(c->v.f[3]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[9]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cdb58; }
    c->v.s[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cdbd8; }
    c->r[1] = c->v.s[6];
    c->r[5] = c->v.s[4];
    c->r[6] = c->v.s[8];
    c->r[0] = 0x1u;
    c->v.s[2] = c->v.s[0];
    ST32(c->r[2], c->v.s[0]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9cdba4; }
    goto L_9cdbd4;
L_9cdb2c:;
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = 0x80000000u;
    c->v.f[9] = c->v.f[0] * c->v.f[3];
    vfp_cmp_f(c, c->v.f[9], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cdb70; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->v.f[2] = fabsf(c->v.f[3]);
    goto L_9cdb60;
L_9cdb58:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
L_9cdb60:;
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[10]);
    goto L_9cdb88;
L_9cdb70:;
    c->v.f[0] = -(float)(c->v.f[0] * c->v.f[3]);
    c->v.s[2] = 0x0u;
    c->r[0] = 0x1u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[5] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[0]);
L_9cdb88:;
    c->r[6] = c->v.s[8];
    c->r[5] = c->v.s[4];
    c->r[1] = c->v.s[6];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { ST32(c->r[2], c->v.s[0]); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9cdbd4; }
L_9cdba4:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[3] + 32u, c->v.s[2]);
    ST32(c->r[3] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[3] + 0x28u; ST8(ea, c->r[1]); }
L_9cdbd4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_9cdbd8:;
    c->r[0] = 0x0u;
    c->v.s[2] = c->v.s[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9cdba4; }
    goto L_9cdbd4;
}
void f_9cdbf8(Cpu *restrict c) {
    FN_ENTER(0x9cdbf8u);
L_9cdbf8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[6] = c->r[0];
    c->r[7] = c->r[1];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->v.s[26] = LD32(c->r[6] + 4u);
    c->v.s[22] = LD32(c->r[6] + 20u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.s[6] = LD32(c->r[6] + 24u);
    c->v.s[24] = LD32(c->r[7]);
    c->v.f[16] = c->v.f[22] - c->v.f[26];
    c->v.f[18] = c->v.f[4] - c->v.f[2];
    c->v.f[20] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cdc5c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9cdc5cu; f_15efddc(c);
L_9cdc5c:;
    c->v.s[2] = 0x3a83126fu;
    c->v.f[4] = fabsf(c->v.f[16]);
    c->v.f[6] = c->v.f[26] + c->v.f[24];
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cdcec; }
    c->v.f[4] = fabsf(c->v.f[6]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cdd48; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cde50; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x106b558u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x9cdcacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_9cdfb4;
L_9cdcec:;
    c->v.f[4] = c->v.f[24] + c->v.f[22];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cdd74; }
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cdd74; }
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cddd0; }
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[6] + 20u);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[4] = c->v.f[6] + c->v.f[2];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cde5c; }
    c->r[0] = 0x106b4bcu;
    { uint32_t ea = 0x9cdd48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cde94;
L_9cdd48:;
    c->r[0] = 0x106b4a0u;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x9cdd64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    goto L_9cdf7c;
L_9cdd74:;
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cde04; }
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cde04; }
    c->v.s[2] = c->v.s[4] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cde68; }
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[4] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cdef8; }
    c->r[0] = 0x106b434u;
    c->v.s[0] = 0x0u;
    { uint32_t ea = 0x9cddd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cde94;
L_9cddd0:;
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[4] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cdea4; }
    c->r[0] = 0x106b400u;
    c->v.s[0] = 0x0u;
    { uint32_t ea = 0x9cde04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cde94;
L_9cde04:;
    c->v.f[2] = c->v.f[6] / c->v.f[16];
    c->v.s[8] = 0x80000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cdeb0; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9cdf14; }
    c->r[0] = 0x106b3c8u;
    { uint32_t ea = 0x9cde3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] ^ 0x80000000u;
    c->r[6] = c->r[6] ^ 0x80000000u;
    c->r[3] = c->r[0] ^ 0x80000000u;
    goto L_9cdf24;
L_9cde50:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9cde5c:;
    c->r[0] = 0x106b39cu;
    { uint32_t ea = 0x9cde68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cdf40;
L_9cde68:;
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[6] + 20u);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[4] = c->v.f[6] + c->v.f[2];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cdf38; }
    c->r[0] = 0x106b36cu;
    { uint32_t ea = 0x9cde98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9cde94:;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    goto L_9cdf5c;
L_9cdea4:;
    c->r[0] = 0x106b354u;
    { uint32_t ea = 0x9cdeb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9cdf00;
L_9cdeb0:;
    c->v.s[8] = 0xbf800000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cdfc0; }
    c->v.s[2] = LD32(c->r[6] + 20u);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_9ce008; }
    c->r[0] = 0x106b320u;
    { uint32_t ea = 0x9cdee4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] ^ 0x80000000u;
    c->r[6] = c->r[6] ^ 0x80000000u;
    c->r[3] = c->r[0] ^ 0x80000000u;
    goto L_9ce018;
L_9cdef8:;
    c->r[0] = 0x106b300u;
    { uint32_t ea = 0x9cdf04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9cdf00:;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[0] = 0x0u;
    goto L_9cdf4c;
L_9cdf14:;
    c->r[0] = 0x106b2e4u;
    { uint32_t ea = 0x9cdf20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9cdf24:;
    c->v.f[2] = c->v.f[0] - c->v.f[6];
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->v.f[4] = fabsf(c->v.f[6]);
    goto L_9cdf7c;
L_9cdf38:;
    c->r[0] = 0x106b2c0u;
    { uint32_t ea = 0x9cdf44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9cdf40:;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
L_9cdf4c:;
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.s[10] = c->v.s[10] ^ 0x80000000u;
    c->v.s[8] = c->v.s[8] ^ 0x80000000u;
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
L_9cdf5c:;
    c->r[0] = c->v.s[10];
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->r[3] = c->r[0] ^ 0x80000000u;
    c->r[0] = c->v.s[8];
    c->r[7] = c->r[0] ^ 0x80000000u;
    c->r[0] = c->v.s[6];
    c->r[6] = c->r[0] ^ 0x80000000u;
L_9cdf78:;
    c->r[0] = 0x1u;
L_9cdf7c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { ST32(c->r[5], c->v.s[0]); }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cdfb8; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    ST32(c->r[4] + 4u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[2] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 32u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
L_9cdfb4:;
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9cdfb8:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_9cdfc0:;
    c->v.s[10] = LD32(c->r[6]);
    c->v.s[12] = LD32(c->r[6] + 8u);
    c->v.s[8] = c->v.s[2] ^ 0x80000000u;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->r[0] = 0x106b218u;
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[4] : c->v.s[6];
    { uint32_t ea = 0x9cdfecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[20] * c->v.f[8]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->v.s[12];
    c->r[2] = c->v.s[10];
    goto L_9cdf78;
L_9ce008:;
    c->r[0] = 0x106b1f0u;
    { uint32_t ea = 0x9ce014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9ce018:;
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->r[0] = 0x0u;
    c->v.f[4] = fabsf(c->v.f[4]);
    goto L_9cdf7c;
}
void f_9ce070(Cpu *restrict c) {
    FN_ENTER(0x9ce070u);
L_9ce070:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[3];
    c->r[8] = c->r[2];
    c->r[6] = c->r[1];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce0dc; }
    c->r[14] = 0x9ce0dcu; f_15efddc(c);
L_9ce0dc:;
    c->r[0] = 0x106b110u;
    c->r[10] = c->r[13] + 0x60u;
    c->r[9] = c->r[13] + 0x20u;
    c->r[3] = c->r[13] + 0xa4u;
    { uint32_t ea = 0x9ce0f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->v.s[0] = LD32(c->r[6] + 32u);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[9];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[5];
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->r[14] = 0x9ce14cu; f_9d9734(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_9ce1e0; }
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[20] = c->v.f[8] - c->v.f[0];
    c->v.f[18] = c->v.f[6] - c->v.f[2];
    c->v.f[16] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce1a0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9ce1a0u; f_15efddc(c);
L_9ce1a0:;
    c->v.s[14] = LD32(c->r[13] + 148u);
    c->v.s[10] = LD32(c->r[13] + 144u);
    c->v.s[12] = LD32(c->r[13] + 152u);
    c->v.s[2] = 0xb727c5acu;
    c->v.f[8] = c->v.f[20] * c->v.f[14];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[12]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9ce1ec; }
    c->v.s[2] = 0x3727c5acu;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9ce1ec; }
    c->v.s[16] = 0x7f7fffffu;
    goto L_9ce234;
L_9ce1e0:;
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 104u);
    goto L_9ce2a8;
L_9ce1ec:;
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[1] = LD32(c->r[13] + 156u);
    c->v.f[14] = c->v.f[14] * c->v.f[6];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[10] = c->v.f[1] + c->v.f[14];
    c->v.s[10] = c->v.s[10] ^ 0x80000000u;
    c->v.f[8] = c->v.f[10] / c->v.f[8];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9ce248; }
    c->v.s[10] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9ce248; }
    c->v.f[16] = c->v.f[0] * c->v.f[8];
L_9ce234:;
    ST32(c->r[8], c->v.s[16]);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    goto L_9ce24c;
L_9ce248:;
    c->v.s[16] = LD32(c->r[8]);
L_9ce24c:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[6] = c->v.f[8] - c->v.f[6];
    c->v.f[18] = c->v.f[0] - c->v.f[2];
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[6] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce288; }
    c->r[14] = 0x9ce284u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ce288:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
L_9ce2a8:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[0] = 0x1u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9ce2d0; }
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x2u; }
L_9ce2d0:;
    c->v.s[2] = LD32(c->r[6] + 4u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9ce2e8; }
    c->r[0] = c->r[0] | 0x4u;
    goto L_9ce308;
L_9ce2e8:;
    c->v.s[6] = LD32(c->r[6] + 28u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9ce300; }
    c->r[0] = c->r[0] | 0x8u;
    goto L_9ce308;
L_9ce300:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9ce81c; }
L_9ce308:;
    c->r[1] = c->r[0] - 0x1u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[1], 0x9u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    if (COND_HI) { goto L_9ce804; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x9ce334u + 0x8u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9ce364u: goto L_9ce364; case 0x9ce370u: goto L_9ce370; case 0x9ce384u: goto L_9ce384; case 0x9ce394u: goto L_9ce394; case 0x9ce3d0u: goto L_9ce3d0; case 0x9ce418u: goto L_9ce418; case 0x9ce4ecu: goto L_9ce4ec; case 0x9ce538u: goto L_9ce538; case 0x9ce804u: goto L_9ce804; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9ce364:;
    c->r[1] = c->r[6] + 0xcu;
    c->r[2] = c->r[6] + 0x8u;
    goto L_9ce38c;
L_9ce370:;
    c->r[1] = c->r[6] + 0x1cu;
    c->r[2] = c->r[6] + 0x18u;
    c->r[0] = c->r[6] + 0x14u;
    c->r[3] = c->r[6] + 0x10u;
    goto L_9ce428;
L_9ce384:;
    c->r[1] = c->r[6] + 0x14u;
    c->r[2] = c->r[6] + 0x10u;
L_9ce38c:;
    c->r[3] = c->r[6];
    goto L_9ce428;
L_9ce394:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    ST32(c->r[13] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[7] = c->r[13] + 0x20u;
    c->r[2] = c->r[6] + 0x14u;
    c->r[3] = c->r[6] + 0x10u;
    c->r[7] = c->r[7] + 0x20u;
    goto L_9ce57c;
L_9ce3d0:;
    c->r[3] = c->r[6];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[9] + 0x20u;
    goto L_9ce57c;
L_9ce418:;
    c->r[1] = c->r[6] + 0x1cu;
    c->r[2] = c->r[6] + 0x18u;
    c->r[0] = c->r[6] + 0xcu;
    c->r[3] = c->r[6] + 0x8u;
L_9ce428:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x3a83126fu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[3] = c->r[13] + 0xa4u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[8];
    c->r[14] = 0x9ce474u; f_a09bc0(c);
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[8] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.s[16] = LD32(c->r[13] + 164u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[28] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce4c0; }
    c->r[14] = 0x9ce4bcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ce4c0:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[24] = LD32(c->r[13] + 36u);
    c->v.s[26] = LD32(c->r[13] + 40u);
    c->v.s[22] = LD32(c->r[13] + 32u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[2] = c->v.f[28] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[4]);
    goto L_9ce6dc;
L_9ce4ec:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[2] = v; }
    c->r[7] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    ST32(c->r[13] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[7] = c->r[9] + 0x20u;
    c->r[2] = c->r[6] + 0x14u;
    c->r[3] = c->r[6] + 0x10u;
    goto L_9ce57c;
L_9ce538:;
    c->r[3] = c->r[6];
    c->r[14] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[6] = c->r[3] - 0x10u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[9] + 0x20u;
    c->r[0] = c->r[3] - 0xcu;
L_9ce57c:;
    c->v.s[16] = 0x3a83126fu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0xa4u;
    c->r[3] = c->r[13] + 0x18u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[14] = 0x9ce5ccu; f_a09bc0(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[2] = c->r[13] + 0x1cu;
    c->r[3] = c->r[13] + 0x14u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x9ce5e8u; f_a09bc0(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9ce654; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[8] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.s[16] = LD32(c->r[13] + 24u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce648; }
    c->r[14] = 0x9ce644u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ce648:;
    c->r[0] = c->r[9] | 0x8u;
    c->r[1] = c->r[9] | 0x4u;
    goto L_9ce6b4;
L_9ce654:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->v.s[6] = LD32(c->r[13] + 80u);
    c->v.s[2] = LD32(c->r[13] + 68u);
    c->v.s[8] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 72u);
    c->v.s[10] = LD32(c->r[13] + 88u);
    c->v.s[16] = LD32(c->r[13] + 20u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce6a8; }
    c->r[14] = 0x9ce6a4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ce6a8:;
    c->r[0] = c->r[9] + 0x28u;
    c->r[1] = c->r[9] + 0x24u;
    c->r[9] = c->r[9] + 0x20u;
L_9ce6b4:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[24] = LD32(c->r[1]);
    c->v.s[26] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.s[22] = LD32(c->r[9]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[2]);
L_9ce6dc:;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.s[16] = LD32(c->r[8]);
    c->v.f[28] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce72c; }
    c->r[14] = 0x9ce728u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ce72c:;
    c->v.s[19] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[19] / c->v.f[2];
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[8] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[28] = c->v.f[4] - c->v.f[24];
    c->v.f[30] = c->v.f[2] - c->v.f[22];
    c->v.f[17] = c->v.f[6] - c->v.f[26];
    c->v.f[20] = c->v.f[28] * c->v.f[28];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[18] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    c->v.s[16] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce790; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9ce78cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9ce790:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce7a8; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9ce7a4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9ce7a8:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9ce7c8; }
    c->v.f[2] = c->v.f[19] / c->v.f[18];
    c->v.f[17] = c->v.f[17] * c->v.f[2];
    c->v.f[28] = c->v.f[28] * c->v.f[2];
    c->v.f[30] = c->v.f[30] * c->v.f[2];
L_9ce7c8:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    c->r[7] = 0x0u;
    ST32(c->r[4], c->v.s[22]);
    ST32(c->r[4] + 4u, c->v.s[24]);
    ST32(c->r[4] + 8u, c->v.s[26]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    ST32(c->r[4] + 16u, c->v.s[30]);
    ST32(c->r[4] + 20u, c->v.s[28]);
    ST32(c->r[4] + 24u, c->v.s[17]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[7]); }
    ST32(c->r[4] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[7]); }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[7]); }
L_9ce804:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9ce81c:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    goto L_9ce804;
}
void f_9ce87c(Cpu *restrict c) {
    FN_ENTER(0x9ce87cu);
L_9ce87c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[3];
    c->r[9] = c->r[2];
    c->r[7] = c->r[1];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce8e8; }
    c->r[14] = 0x9ce8e8u; f_15efddc(c);
L_9ce8e8:;
    c->v.s[0] = LD32(c->r[7] + 64u);
    c->v.s[2] = LD32(c->r[7] + 68u);
    c->v.s[6] = LD32(c->r[7] + 4u);
    c->v.s[10] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 72u);
    c->v.s[8] = LD32(c->r[7] + 8u);
    c->r[1] = 0xffffu;
    c->r[0] = 0x0u;
    c->r[10] = c->r[13] + 0x60u;
    c->r[8] = c->r[13] + 0x20u;
    c->r[3] = c->r[13] + 0xa4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x90u;
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[0]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->r[14] = 0x9ce96cu; f_9d9734(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_9cea00; }
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[20] = c->v.f[8] - c->v.f[0];
    c->v.f[18] = c->v.f[6] - c->v.f[2];
    c->v.f[16] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ce9c0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9ce9c0u; f_15efddc(c);
L_9ce9c0:;
    c->v.s[14] = LD32(c->r[13] + 148u);
    c->v.s[10] = LD32(c->r[13] + 144u);
    c->v.s[12] = LD32(c->r[13] + 152u);
    c->v.s[2] = 0xb727c5acu;
    c->v.f[8] = c->v.f[20] * c->v.f[14];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[12]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cea10; }
    c->v.s[2] = 0x3727c5acu;
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cea10; }
    c->v.s[16] = 0x7f7fffffu;
    goto L_9cea58;
L_9cea00:;
    c->v.s[8] = LD32(c->r[13] + 96u);
    c->v.s[12] = LD32(c->r[13] + 100u);
    c->v.s[10] = LD32(c->r[13] + 104u);
    goto L_9cead8;
L_9cea10:;
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[1] = LD32(c->r[13] + 156u);
    c->v.f[14] = c->v.f[14] * c->v.f[6];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[10] = c->v.f[1] + c->v.f[14];
    c->v.s[10] = c->v.s[10] ^ 0x80000000u;
    c->v.f[8] = c->v.f[10] / c->v.f[8];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9cea6c; }
    c->v.s[10] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9cea6c; }
    c->v.f[16] = c->v.f[0] * c->v.f[8];
L_9cea58:;
    ST32(c->r[9], c->v.s[16]);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    goto L_9cea70;
L_9cea6c:;
    c->v.s[16] = LD32(c->r[9]);
L_9cea70:;
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.f[20] = c->v.f[8] - c->v.f[6];
    c->v.f[18] = c->v.f[0] - c->v.f[2];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ceaac; }
    c->r[14] = 0x9ceaa8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ceaac:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[12] = LD32(c->r[5] + 4u);
    c->v.s[10] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[0]);
L_9cead8:;
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[1] = LD32(c->r[7] + 148u);
    c->v.s[5] = LD32(c->r[7] + 128u);
    c->v.s[9] = LD32(c->r[7] + 132u);
    c->v.s[14] = LD32(c->r[7] + 144u);
    c->v.s[7] = LD32(c->r[7] + 136u);
    c->v.s[3] = LD32(c->r[7] + 152u);
    c->v.s[6] = LD32(c->r[7] + 116u);
    c->r[0] = 0x1u;
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->v.f[11] = c->v.f[8] - c->v.f[4];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[12] * c->v.f[1];
    c->v.f[12] = c->v.f[12] * c->v.f[9];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[11] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[3]);
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9ceb48; }
    c->v.s[10] = LD32(c->r[7] + 112u);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[12], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x2u; }
L_9ceb48:;
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9ceb5c; }
    c->r[0] = c->r[0] | 0x4u;
    goto L_9ceb78;
L_9ceb5c:;
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9ceb70; }
    c->r[0] = c->r[0] | 0x8u;
    goto L_9ceb78;
L_9ceb70:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9cf0d0; }
L_9ceb78:;
    c->r[1] = c->r[0] - 0x1u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], 0x9u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    if (COND_HI) { goto L_9cf0b8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x9ceba4u + 0x8u;
    c->r[0] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x9cebd4u: goto L_9cebd4; case 0x9cebe4u: goto L_9cebe4; case 0x9cec00u: goto L_9cec00; case 0x9cec10u: goto L_9cec10; case 0x9cec68u: goto L_9cec68; case 0x9cecc0u: goto L_9cecc0; case 0x9ced98u: goto L_9ced98; case 0x9cedf0u: goto L_9cedf0; case 0x9cf0b8u: goto L_9cf0b8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9cebd4:;
    c->r[1] = c->r[7] + 0x10u;
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    goto L_9cecd8;
L_9cebe4:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0x30u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x28u;
    goto L_9cecd8;
L_9cec00:;
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->r[1] = c->r[7] + 0x20u;
    goto L_9cecd8;
L_9cec10:;
    c->r[0] = 0x0u;
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 64u, c->v.s[4]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    ST32(c->r[13] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x28u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    goto L_9cee4c;
L_9cec68:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 64u, c->v.s[4]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    ST32(c->r[13] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    goto L_9cee4c;
L_9cecc0:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0x30u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x18u;
L_9cecd8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3a83126fu;
    c->r[3] = c->r[13] + 0xa4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9ced1cu; f_a09bc0(c);
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[8] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.s[16] = LD32(c->r[13] + 164u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[28] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ced68; }
    c->r[14] = 0x9ced64u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ced68:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[24] = LD32(c->r[13] + 36u);
    c->v.s[26] = LD32(c->r[13] + 40u);
    c->v.s[22] = LD32(c->r[13] + 32u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[2] = c->v.f[28] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[4]);
    goto L_9cef90;
L_9ced98:;
    c->r[0] = 0x0u;
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    ST32(c->r[13] + 40u, c->v.s[2]);
    c->r[12] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x38u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    goto L_9cee4c;
L_9cedf0:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_9cee4c:;
    c->v.s[16] = 0x3a83126fu;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0xa4u;
    c->r[3] = c->r[13] + 0x18u;
    c->r[8] = c->r[8] + 0x20u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9cee80u; f_a09bc0(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[2] = c->r[13] + 0x1cu;
    c->r[3] = c->r[13] + 0x14u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0x9cee9cu; f_a09bc0(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cef08; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[8] = LD32(c->r[13] + 52u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[10] = LD32(c->r[13] + 56u);
    c->v.s[16] = LD32(c->r[13] + 24u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9ceefc; }
    c->r[14] = 0x9ceef8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9ceefc:;
    c->r[0] = c->r[6] | 0x8u;
    c->r[1] = c->r[6] | 0x4u;
    goto L_9cef68;
L_9cef08:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->v.s[6] = LD32(c->r[13] + 80u);
    c->v.s[2] = LD32(c->r[13] + 68u);
    c->v.s[8] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 72u);
    c->v.s[10] = LD32(c->r[13] + 88u);
    c->v.s[16] = LD32(c->r[13] + 20u);
    c->v.f[20] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cef5c; }
    c->r[14] = 0x9cef58u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9cef5c:;
    c->r[0] = c->r[6] + 0x28u;
    c->r[1] = c->r[6] + 0x24u;
    c->r[6] = c->r[6] + 0x20u;
L_9cef68:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[24] = LD32(c->r[1]);
    c->v.s[26] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.s[22] = LD32(c->r[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[2]);
L_9cef90:;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 24u);
    c->v.s[16] = LD32(c->r[9]);
    c->v.f[28] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cefe0; }
    c->r[14] = 0x9cefdcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9cefe0:;
    c->v.s[19] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[19] / c->v.f[2];
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[8] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[28] = c->v.f[4] - c->v.f[24];
    c->v.f[30] = c->v.f[2] - c->v.f[22];
    c->v.f[17] = c->v.f[6] - c->v.f[26];
    c->v.f[20] = c->v.f[28] * c->v.f[28];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[18] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    c->v.s[16] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf044; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9cf040u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9cf044:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf05c; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9cf058u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9cf05c:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9cf07c; }
    c->v.f[2] = c->v.f[19] / c->v.f[18];
    c->v.f[17] = c->v.f[17] * c->v.f[2];
    c->v.f[28] = c->v.f[28] * c->v.f[2];
    c->v.f[30] = c->v.f[30] * c->v.f[2];
L_9cf07c:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    c->r[6] = 0x0u;
    ST32(c->r[4], c->v.s[22]);
    ST32(c->r[4] + 4u, c->v.s[24]);
    ST32(c->r[4] + 8u, c->v.s[26]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 16u, c->v.s[30]);
    ST32(c->r[4] + 20u, c->v.s[28]);
    ST32(c->r[4] + 24u, c->v.s[17]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[6]); }
L_9cf0b8:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9cf0d0:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    goto L_9cf0b8;
}
void f_9cf12c(Cpu *restrict c) {
    FN_ENTER(0x9cf12cu);
L_9cf12c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[5] = c->r[0];
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[4] = c->r[2];
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[22] = LD32(c->r[5] + 12u);
    c->v.f[26] = c->v.f[8] - c->v.f[2];
    c->v.f[24] = c->v.f[6] - c->v.f[0];
    c->v.f[28] = c->v.f[10] - c->v.f[4];
    c->v.s[0] = 0x3a83126fu;
    c->v.f[16] = c->v.f[26] * c->v.f[26];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[28] * c->v.f[28]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cf19c; }
    c->r[0] = 0x106a078u;
    c->v.s[18] = 0x0u;
    { uint32_t ea = 0x9cf190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    goto L_9cf1e8;
L_9cf19c:;
    c->v.f[20] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    c->v.s[18] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf1bc; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9cf1b8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9cf1bc:;
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf1d4; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9cf1d0u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_9cf1d4:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[4] = c->v.f[0] / c->v.f[20];
    c->v.f[0] = c->v.f[28] * c->v.f[4];
    c->v.f[2] = c->v.f[26] * c->v.f[4];
    c->v.f[4] = c->v.f[24] * c->v.f[4];
L_9cf1e8:;
    c->v.f[6] = c->v.f[22] * c->v.f[22];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cf250; }
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[5] + 12u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[12] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[6]);
    vfp_mrs_flags(c);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[14]);
    ST32(c->r[4], c->v.s[8]);
    ST32(c->r[4] + 4u, c->v.s[10]);
    ST32(c->r[4] + 8u, c->v.s[12]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[4]);
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] - c->v.f[22];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9cf250:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[6]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9cf274(Cpu *restrict c) {
    FN_ENTER(0x9cf274u);
L_9cf274:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[7] = c->r[1];
    c->r[0] = 0x0u;
    c->r[6] = c->r[2];
    c->r[2] = c->r[13] + 0x4u;
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x9cf2a4u; f_a08f88(c);
    c->v.s[2] = c->v.s[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf2c0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9cf2c0u; f_15efddc(c);
L_9cf2c0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9cf368; }
    c->v.s[2] = LD32(c->r[13] + 4u);
    c->v.s[8] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[7] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[12] = LD32(c->r[7] + 20u);
    c->v.s[6] = LD32(c->r[7] + 8u);
    c->v.s[14] = LD32(c->r[7] + 24u);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[3] = LD32(c->r[5] + 4u);
    c->v.s[5] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[10] = c->v.f[7] / c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[2] = c->v.f[4] - c->v.f[3];
    c->v.f[6] = c->v.f[6] - c->v.f[5];
    c->v.f[8] = c->v.f[8] - c->v.f[1];
    c->v.f[4] = c->v.f[10] * c->v.f[8];
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[6] = c->v.f[10] * c->v.f[6];
    ST32(c->r[6] + 16u, c->v.s[4]);
    ST32(c->r[6] + 20u, c->v.s[2]);
    ST32(c->r[6] + 24u, c->v.s[6]);
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[5] + 12u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[12] = LD32(c->r[5] + 8u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[14]);
    ST32(c->r[6], c->v.s[8]);
    ST32(c->r[6] + 4u, c->v.s[10]);
    ST32(c->r[6] + 8u, c->v.s[12]);
    c->v.s[2] = LD32(c->r[5] + 12u);
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    ST32(c->r[6] + 32u, c->v.s[2]);
L_9cf368:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[5] + 12u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9cf390(Cpu *restrict c) {
    FN_ENTER(0x9cf390u);
L_9cf390:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[7] = c->r[1];
    c->r[5] = c->r[0];
    c->r[6] = c->r[2];
    c->r[2] = c->r[13] + 0x4u;
    c->r[4] = c->r[3];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x9cf3b8u; f_a090f8(c);
    c->v.s[2] = c->v.s[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf3d4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9cf3d4u; f_15efddc(c);
L_9cf3d4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9cf47c; }
    c->v.s[2] = LD32(c->r[13] + 4u);
    c->v.s[8] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[7] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[12] = LD32(c->r[7] + 20u);
    c->v.s[6] = LD32(c->r[7] + 8u);
    c->v.s[14] = LD32(c->r[7] + 24u);
    c->v.s[1] = LD32(c->r[5]);
    c->v.s[3] = LD32(c->r[5] + 4u);
    c->v.s[5] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[10] = c->v.f[7] / c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[2] = c->v.f[4] - c->v.f[3];
    c->v.f[6] = c->v.f[6] - c->v.f[5];
    c->v.f[8] = c->v.f[8] - c->v.f[1];
    c->v.f[4] = c->v.f[10] * c->v.f[8];
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[6] = c->v.f[10] * c->v.f[6];
    ST32(c->r[6] + 16u, c->v.s[4]);
    ST32(c->r[6] + 20u, c->v.s[2]);
    ST32(c->r[6] + 24u, c->v.s[6]);
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[5] + 12u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[12] = LD32(c->r[5] + 8u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[14]);
    ST32(c->r[6], c->v.s[8]);
    ST32(c->r[6] + 4u, c->v.s[10]);
    ST32(c->r[6] + 8u, c->v.s[12]);
    c->v.s[2] = LD32(c->r[5] + 12u);
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    ST32(c->r[6] + 32u, c->v.s[2]);
L_9cf47c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[5] + 12u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9cf4a4(Cpu *restrict c) {
    FN_ENTER(0x9cf4a4u);
L_9cf4a4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[7] = c->r[1];
    c->r[0] = 0x0u;
    c->r[6] = c->r[2];
    c->r[2] = c->r[13] + 0x4u;
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x9cf4d8u; f_a098b4(c);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf4f0; }
    c->r[14] = 0x9cf4ecu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9cf4f0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9cf5e4; }
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.s[18] = LD32(c->r[13] + 4u);
    c->v.f[22] = c->v.f[8] - c->v.f[0];
    c->v.f[24] = c->v.f[6] - c->v.f[4];
    c->v.f[20] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf544; }
    c->r[14] = 0x9cf540u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9cf544:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 8u);
    c->v.s[14] = LD32(c->r[5]);
    c->v.s[1] = LD32(c->r[5] + 4u);
    c->v.s[3] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[0] / c->v.f[2];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[10] = c->v.f[24] * c->v.f[2];
    c->v.f[12] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[20] * c->v.f[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[2] = c->v.f[6] - c->v.f[1];
    c->v.f[4] = c->v.f[4] - c->v.f[14];
    c->v.f[6] = c->v.f[8] - c->v.f[3];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    ST32(c->r[6] + 16u, c->v.s[4]);
    ST32(c->r[6] + 20u, c->v.s[2]);
    ST32(c->r[6] + 24u, c->v.s[0]);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[12] = LD32(c->r[5] + 12u);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.s[10] = LD32(c->r[5] + 8u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[12]);
    ST32(c->r[6], c->v.s[6]);
    ST32(c->r[6] + 4u, c->v.s[8]);
    ST32(c->r[6] + 8u, c->v.s[10]);
    c->v.s[0] = LD32(c->r[5] + 12u);
    c->v.f[0] = c->v.f[16] - c->v.f[0];
    ST32(c->r[6] + 32u, c->v.s[0]);
L_9cf5e4:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[5] + 12u);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9cf610(Cpu *restrict c) {
    FN_ENTER(0x9cf610u);
L_9cf610:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    c->r[8] = 0x0u;
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[7] + 4u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.s[12] = LD32(c->r[5] + 8u);
    c->v.s[6] = LD32(c->r[7] + 12u);
    c->v.s[14] = LD32(c->r[5] + 12u);
    c->v.f[28] = c->v.f[10] - c->v.f[2];
    c->v.f[26] = c->v.f[8] - c->v.f[0];
    c->v.f[30] = c->v.f[12] - c->v.f[4];
    c->v.f[24] = c->v.f[6] + c->v.f[14];
    c->v.s[0] = 0x3a83126fu;
    c->v.f[16] = c->v.f[28] * c->v.f[28];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[22] = c->v.f[24] * c->v.f[24];
    vfp_cmp_f(c, c->v.f[16], c->v.f[22]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    if (COND_LS) { c->r[8] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cf6b0; }
    c->r[0] = 0x1069b70u;
    c->v.s[18] = 0x0u;
    { uint32_t ea = 0x9cf698u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    c->v.s[4] = c->r[1];
    c->v.s[6] = c->r[2];
    goto L_9cf708;
L_9cf6b0:;
    c->v.f[20] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    c->v.s[18] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf6d0; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9cf6ccu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9cf6d0:;
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cf6e8; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9cf6e4u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_9cf6e8:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[20];
    c->v.f[2] = c->v.f[30] * c->v.f[0];
    c->v.f[4] = c->v.f[28] * c->v.f[0];
    c->v.f[6] = c->v.f[26] * c->v.f[0];
    c->r[0] = c->v.s[2];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[6];
L_9cf708:;
    c->v.f[0] = c->v.f[18] - c->v.f[24];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9cf760; }
    c->v.s[8] = LD32(c->r[7]);
    c->v.s[14] = LD32(c->r[7] + 12u);
    c->v.s[10] = LD32(c->r[7] + 4u);
    c->v.s[12] = LD32(c->r[7] + 8u);
    c->r[3] = 0x0u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[14]);
    ST32(c->r[6], c->v.s[8]);
    ST32(c->r[6] + 4u, c->v.s[10]);
    ST32(c->r[6] + 8u, c->v.s[12]);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[3]); }
    ST32(c->r[6] + 16u, c->v.s[6]);
    ST32(c->r[6] + 20u, c->v.s[4]);
    ST32(c->r[6] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[3]); }
    ST32(c->r[6] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x28u; ST8(ea, c->r[8]); }
L_9cf760:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cf7cc; }
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[8] = LD32(c->r[5] + 12u);
    c->v.s[10] = c->r[2];
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.s[14] = c->r[0];
    c->v.s[12] = c->r[1];
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[14] * c->v.f[8]);
    ST32(c->r[4], c->v.s[2]);
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[4] = c->v.s[12] ^ 0x80000000u;
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[14] ^ 0x80000000u;
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[8]); }
L_9cf7cc:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[22]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9cf7f0(Cpu *restrict c) {
    FN_ENTER(0x9cf7f0u);
L_9cf7f0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[0] = 0xffffu;
    c->r[7] = 0x0u;
    c->r[5] = c->r[2];
    c->r[2] = c->r[13];
    c->r[4] = c->r[3];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST8(ea, c->r[7]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[6];
    c->v.s[16] = LD32(c->r[6] + 12u);
    c->r[14] = 0x9cf844u; f_9cf934(c);
    c->v.s[0] = LD32(c->r[13] + 32u);
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.f[0] = c->v.f[0] - c->v.f[16];
    if (COND_EQ) { goto L_9cf8bc; }
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[8] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[10] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.s[12] = LD32(c->r[6] + 8u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[16] * c->v.f[6]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[5], c->v.s[8]);
    ST32(c->r[5] + 4u, c->v.s[10]);
    ST32(c->r[5] + 8u, c->v.s[12]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[7]); }
    ST32(c->r[5] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[5] + 20u, c->v.s[4]);
    ST32(c->r[5] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[7]); }
    ST32(c->r[5] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[7]); }
    if (COND_LS) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[5] + 0x28u; ST8(ea, c->r[7]); }
L_9cf8bc:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cf918; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9cf918:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9cf934(Cpu *restrict c) {
    FN_ENTER(0x9cf934u);
L_9cf934:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[13] + 0x10u;
    c->r[4] = c->r[2];
    c->r[5] = 0x0u;
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x9cf968u; f_a0a960(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cfa30; }
    c->r[0] = 0x106984cu;
    c->v.s[7] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[7] + 4u);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[11] = LD32(c->r[7] + 16u);
    c->v.s[10] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[12] = LD32(c->r[7] + 24u);
    c->v.s[6] = LD32(c->r[7] + 8u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    c->v.s[5] = 0x3f000000u;
    { uint32_t ea = 0x9cf9bcu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[14] = c->v.f[8] + c->v.f[7];
    c->v.s[13] = c->v.s[0];
    c->v.s[1] = c->v.s[4];
    c->v.f[9] = c->v.f[6] + c->v.f[12];
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    c->r[2] = 0x1069828u;
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[14] * c->v.f[5]);
    { uint32_t ea = 0x9cf9dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[14] = c->v.f[10] + c->v.f[11];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1069860u;
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[14] * c->v.f[5]);
    { uint32_t ea = 0x9cf9f8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[9] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    vfp_cmp_f(c, c->v.f[1], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cfac0; }
    c->r[0] = c->r[0] ^ 0x80000000u;
    c->r[1] = c->r[1] ^ 0x80000000u;
    c->r[2] = c->r[5] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->v.s[14] = c->r[2];
    c->v.s[3] = c->r[1];
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    goto L_9cfadc;
L_9cfa30:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cfab8; }
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9cfa50; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9cfa50u; f_15efddc(c);
L_9cfa50:;
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.s[8] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.s[6] = LD32(c->r[13] + 24u);
    c->v.s[10] = LD32(c->r[6] + 4u);
    c->v.s[12] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->v.f[14] = c->v.f[14] / c->v.f[0];
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[6]);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[6] = c->v.f[12] - c->v.f[6];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    c->v.f[4] = c->v.f[14] * c->v.f[4];
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[14] * c->v.f[6];
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9cfab8:;
    c->r[0] = 0x0u;
    goto L_9cfc48;
L_9cfac0:;
    c->v.s[14] = c->r[5];
    c->v.s[3] = c->r[1];
    c->v.s[1] = c->r[0];
    c->v.s[10] = c->v.s[11] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
L_9cfadc:;
    c->v.s[15] = c->v.s[2];
    vfp_cmp_f(c, c->v.f[13], 0.0f);
    c->v.s[11] = c->r[6];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[15] = c->v.f[15] - (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[5] = c->r[3];
    c->v.s[9] = c->r[7];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cfb20; }
    c->v.s[9] = c->v.s[9] ^ 0x80000000u;
    c->v.s[11] = c->v.s[11] ^ 0x80000000u;
    c->v.s[5] = c->v.s[5] ^ 0x80000000u;
    ST32(c->r[13] + 32u, c->v.s[9]);
    ST32(c->r[13] + 36u, c->v.s[11]);
    ST32(c->r[13] + 40u, c->v.s[5]);
    goto L_9cfb30;
L_9cfb20:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->v.s[8] = c->v.s[7] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
L_9cfb30:;
    vfp_cmp_f(c, c->v.f[15], 0.0f);
    c->v.s[7] = c->r[12];
    c->v.s[16] = c->r[9];
    c->v.s[13] = c->r[14];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9cfb6c; }
    c->v.s[13] = c->v.s[13] ^ 0x80000000u;
    c->v.s[16] = c->v.s[16] ^ 0x80000000u;
    c->v.s[7] = c->v.s[7] ^ 0x80000000u;
    ST32(c->r[13] + 48u, c->v.s[13]);
    ST32(c->r[13] + 52u, c->v.s[16]);
    ST32(c->r[13] + 56u, c->v.s[7]);
    goto L_9cfb7c;
L_9cfb6c:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    c->v.s[6] = c->v.s[12] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[12]); }
L_9cfb7c:;
    c->v.f[12] = c->v.f[0] * c->v.f[3];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[1]);
    c->r[0] = 0x0u;
    c->v.f[3] = c->v.f[0] * c->v.f[11];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[4] * c->v.f[9]);
    c->r[1] = 0x0u;
    c->v.f[1] = c->v.f[0] * c->v.f[16];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[13]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[10] = c->v.f[10] + c->v.f[12];
    c->v.f[8] = c->v.f[8] + c->v.f[3];
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    ST32(c->r[13], c->v.s[10]);
    ST32(c->r[13] + 4u, c->v.s[8]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[10] : c->v.s[8];
    if (COND_LE) { c->r[1] = 0x1u; }
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[1] = 0x2u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9cfc44; }
    c->r[2] = c->r[13];
    c->r[2] = c->r[2] + (c->r[1] << 2);
    c->r[1] = c->r[8] + (c->r[1] << 4);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[12] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[10]);
    ST32(c->r[4], c->v.s[4]);
    ST32(c->r[4] + 4u, c->v.s[0]);
    ST32(c->r[4] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[6]);
    ST32(c->r[4] + 20u, c->v.s[8]);
    ST32(c->r[4] + 24u, c->v.s[10]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[12]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9cfc44:;
    c->r[0] = 0x1u;
L_9cfc48:;
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9cfc64(Cpu *restrict c) {
    FN_ENTER(0x9cfc64u);
L_9cfc64:;
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[1] = LD32(c->r[0] + 4u);
    c->v.s[3] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[1] + 12u);
    c->v.s[0] = LD32(c->r[0] + 12u);
    c->v.f[4] = c->v.f[1] * c->v.f[10];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    c->v.f[2] = fabsf(c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cfd60; }
    c->v.f[6] = c->v.f[4] - c->v.f[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cfd04; }
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[0] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.s[12] = c->v.s[12] ^ 0x80000000u;
    c->v.s[10] = c->v.s[10] ^ 0x80000000u;
    c->v.s[8] = c->v.s[8] ^ 0x80000000u;
    c->r[12] = 0x0u;
    vfp_mrs_flags(c);
    ST32(c->r[2], c->v.s[3]);
    ST32(c->r[2] + 4u, c->v.s[1]);
    ST32(c->r[2] + 8u, c->v.s[14]);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[12]); }
    ST32(c->r[2] + 16u, c->v.s[12]);
    ST32(c->r[2] + 20u, c->v.s[10]);
    ST32(c->r[2] + 24u, c->v.s[8]);
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[12]); }
    ST32(c->r[2] + 32u, c->v.s[6]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[12]); }
    if (COND_MI) { c->r[12] = 0x1u; }
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[12]); }
L_9cfd04:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9cfe40; }
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[1] = LD32(c->r[0] + 4u);
    c->v.s[3] = LD32(c->r[0] + 8u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[12]);
    ST32(c->r[3], c->v.s[14]);
    ST32(c->r[3] + 4u, c->v.s[1]);
    ST32(c->r[3] + 8u, c->v.s[3]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    goto L_9cfe24;
L_9cfd60:;
    c->v.s[6] = c->v.s[0] ^ 0x80000000u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    if (COND_EQ) { goto L_9cfdcc; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[8]);
    c->r[12] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    ST32(c->r[2], c->v.s[3]);
    ST32(c->r[2] + 4u, c->v.s[1]);
    ST32(c->r[2] + 8u, c->v.s[14]);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[12]); }
    ST32(c->r[2] + 32u, c->v.s[6]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[12]); }
    if (COND_MI) { c->r[12] = 0x1u; }
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
L_9cfdcc:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9cfe40; }
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[14] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[1] = LD32(c->r[0] + 4u);
    c->v.s[3] = LD32(c->r[0] + 8u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = c->v.s[8] ^ 0x80000000u;
    c->v.s[8] = c->v.s[10] ^ 0x80000000u;
    ST32(c->r[3], c->v.s[14]);
    ST32(c->r[3] + 4u, c->v.s[1]);
    ST32(c->r[3] + 8u, c->v.s[3]);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[3] + 16u, c->v.s[4]);
    c->v.s[4] = c->v.s[12] ^ 0x80000000u;
    ST32(c->r[3] + 20u, c->v.s[8]);
    ST32(c->r[3] + 24u, c->v.s[4]);
L_9cfe24:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[3] + 32u, c->v.s[6]);
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[3] + 0x28u; ST8(ea, c->r[0]); }
L_9cfe40:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    return;
}
void f_9cfe54(Cpu *restrict c) {
    FN_ENTER(0x9cfe54u);
L_9cfe54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 12u);
    c->v.f[4] = c->v.f[8] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    c->v.f[2] = fabsf(c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9cff3c; }
    c->v.f[6] = c->v.f[4] - c->v.f[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9cfeec; }
    c->r[1] = 0x1069360u;
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    { uint32_t ea = 0x9cfea4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[12] = LD32(c->r[1] + 4u);
    c->v.s[14] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[14]); }
    ST32(c->r[2] + 4u, c->v.s[8]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[1]); }
    c->v.s[8] = c->v.s[10] ^ 0x80000000u;
    c->v.s[10] = c->v.s[12] ^ 0x80000000u;
    ST32(c->r[2] + 16u, c->v.s[8]);
    c->v.s[8] = c->v.s[14] ^ 0x80000000u;
    ST32(c->r[2] + 20u, c->v.s[10]);
    ST32(c->r[2] + 24u, c->v.s[8]);
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[2] + 32u, c->v.s[6]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_MI) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[1]); }
L_9cfeec:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9d001c; }
    c->v.s[8] = LD32(c->r[0] + 4u);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    ST32(c->r[3] + 4u, c->v.s[4]);
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10692e0u;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x9cff24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    goto L_9d0000;
L_9cff3c:;
    c->v.s[6] = c->v.s[0] ^ 0x80000000u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    if (COND_EQ) { goto L_9cffa8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.f[8] = c->v.f[0] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1069284u;
    ST32(c->r[2] + 4u, c->v.s[8]);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[12]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = 0x9cff80u + c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[12]); }
    ST32(c->r[2] + 32u, c->v.s[6]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[12]); }
    if (COND_MI) { c->r[12] = 0x1u; }
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[12]); }
L_9cffa8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9d001c; }
    c->r[2] = 0x106923cu;
    c->v.s[8] = LD32(c->r[0] + 4u);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x9cffc8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.s[10] = LD32(c->r[2]);
    c->v.s[12] = LD32(c->r[2] + 4u);
    c->v.s[14] = LD32(c->r[2] + 8u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    ST32(c->r[3] + 4u, c->v.s[4]);
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[4] = c->v.s[10] ^ 0x80000000u;
    c->v.s[8] = c->v.s[12] ^ 0x80000000u;
    ST32(c->r[3] + 16u, c->v.s[4]);
    c->v.s[4] = c->v.s[14] ^ 0x80000000u;
    ST32(c->r[3] + 20u, c->v.s[8]);
    ST32(c->r[3] + 24u, c->v.s[4]);
L_9d0000:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[3] + 32u, c->v.s[6]);
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[3] + 0x28u; ST8(ea, c->r[0]); }
L_9d001c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_9d0040(Cpu *restrict c) {
    FN_ENTER(0x9d0040u);
L_9d0040:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[0];
    c->v.s[10] = LD32(c->r[1] + 64u);
    c->v.s[14] = LD32(c->r[1] + 68u);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[3] = LD32(c->r[1]);
    c->v.s[12] = LD32(c->r[1] + 72u);
    c->v.s[1] = LD32(c->r[1] + 8u);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[6] = LD32(c->r[2] + 12u);
    c->v.f[8] = c->v.f[8] * c->v.f[14];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[5] = c->v.f[14] * c->v.f[4];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[3] = c->v.f[5] - c->v.f[8];
    vfp_cmp_f(c, c->v.f[3], 0.0f);
    c->v.f[8] = fabsf(c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9d00d0; }
    c->v.s[1] = c->v.s[12] ^ 0x80000000u;
    c->v.s[7] = c->v.s[14] ^ 0x80000000u;
    c->v.s[5] = c->v.s[10] ^ 0x80000000u;
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[3] = c->v.f[3] - c->v.f[6];
    goto L_9d00f0;
L_9d00d0:;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[1] = c->v.s[6] ^ 0x80000000u;
    c->v.s[7] = c->v.s[14];
    c->v.s[5] = c->v.s[10];
    c->v.f[3] = c->v.f[1] - c->v.f[3];
    c->v.s[1] = c->v.s[12];
L_9d00f0:;
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
    ST32(c->r[4], c->v.s[2]);
    ST32(c->r[4] + 20u, c->v.s[7]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    ST32(c->r[4] + 16u, c->v.s[5]);
    ST32(c->r[4] + 24u, c->v.s[1]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    ST32(c->r[4] + 32u, c->v.s[3]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
    if (COND_PL) { goto L_9d041c; }
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.s[1] = LD32(c->r[1] + 148u);
    c->v.s[5] = LD32(c->r[1] + 128u);
    c->v.s[9] = LD32(c->r[1] + 132u);
    c->v.s[14] = LD32(c->r[1] + 144u);
    c->v.s[7] = LD32(c->r[1] + 136u);
    c->v.s[3] = LD32(c->r[1] + 152u);
    c->v.s[6] = LD32(c->r[1] + 116u);
    c->r[0] = 0x1u;
    c->v.f[4] = c->v.f[4] - c->v.f[8];
    c->v.f[8] = c->v.f[2] - c->v.f[12];
    c->v.f[0] = c->v.f[0] - c->v.f[10];
    c->v.f[2] = c->v.f[4] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[9];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[3]);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d01a4; }
    c->v.s[0] = LD32(c->r[1] + 112u);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x2u; }
L_9d01a4:;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d01b8; }
    c->r[0] = c->r[0] | 0x4u;
    goto L_9d01c4;
L_9d01b8:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[0] | 0x8u; }
L_9d01c4:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0xau);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    if (COND_HI) { goto L_9d0254; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = 0x9d01e8u + 0xcu;
    c->r[12] = c->r[1] + 0x8u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[3]; switch (c->pc) { case 0x9d0220u: goto L_9d0220; case 0x9d023cu: goto L_9d023c; case 0x9d0254u: goto L_9d0254; case 0x9d025cu: goto L_9d025c; case 0x9d0278u: goto L_9d0278; case 0x9d0280u: goto L_9d0280; case 0x9d0290u: goto L_9d0290; case 0x9d02f4u: goto L_9d02f4; case 0x9d0304u: goto L_9d0304; case 0x9d041cu: goto L_9d041c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9d0220:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[2] + 12u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x10u;
    goto L_9d02ac;
L_9d023c:;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[2] + 12u);
    c->r[12] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9d02a4;
L_9d0254:;
    c->r[5] = 0x0u;
    goto L_9d041c;
L_9d025c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[2] + 12u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x20u;
    goto L_9d02ac;
L_9d0278:;
    c->r[0] = c->r[1] + 0x4u;
    goto L_9d0310;
L_9d0280:;
    c->r[12] = c->r[1] + 0x28u;
    c->r[0] = c->r[1] + 0x24u;
    c->r[1] = c->r[1] + 0x20u;
    goto L_9d0310;
L_9d0290:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[2] + 12u);
    c->r[12] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9d02a4:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x30u;
L_9d02ac:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2];
    c->r[0] = c->r[13];
    c->r[2] = c->r[4];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->r[14] = 0x9d02ecu; f_9d0438(c);
    c->r[5] = c->r[0];
    goto L_9d041c;
L_9d02f4:;
    c->r[12] = c->r[1] + 0x18u;
    c->r[0] = c->r[1] + 0x14u;
    c->r[1] = c->r[1] + 0x10u;
    goto L_9d0310;
L_9d0304:;
    c->r[12] = c->r[1] + 0x38u;
    c->r[0] = c->r[1] + 0x34u;
    c->r[1] = c->r[1] + 0x30u;
L_9d0310:;
    c->v.s[24] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[30] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[28] = LD32(c->r[12]);
    c->v.s[22] = LD32(c->r[2] + 12u);
    c->r[5] = 0x0u;
    c->v.f[19] = c->v.f[2] - c->v.f[24];
    c->v.f[17] = c->v.f[0] - c->v.f[30];
    c->v.f[21] = c->v.f[4] - c->v.f[28];
    c->v.f[26] = c->v.f[22] * c->v.f[22];
    c->v.s[0] = 0x3a83126fu;
    c->v.f[16] = c->v.f[19] * c->v.f[19];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[21] * c->v.f[21]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[26]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    if (COND_LS) { c->r[5] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d0384; }
    c->r[0] = 0x1068e90u;
    c->v.s[18] = 0x0u;
    { uint32_t ea = 0x9d0378u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    goto L_9d03d0;
L_9d0384:;
    c->v.f[20] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    c->v.s[18] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d03a4; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d03a0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9d03a4:;
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d03bc; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d03b8u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_9d03bc:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[4] = c->v.f[0] / c->v.f[20];
    c->v.f[0] = c->v.f[21] * c->v.f[4];
    c->v.f[2] = c->v.f[19] * c->v.f[4];
    c->v.f[4] = c->v.f[17] * c->v.f[4];
L_9d03d0:;
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[22] * c->v.f[0]);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[26]);
    vfp_mrs_flags(c);
    ST32(c->r[4], c->v.s[30]);
    ST32(c->r[4] + 4u, c->v.s[24]);
    ST32(c->r[4] + 8u, c->v.s[28]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[4]);
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] - c->v.f[22];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d041c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9d0438(Cpu *restrict c) {
    FN_ENTER(0x9d0438u);
L_9d0438:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    c->r[6] = c->r[1];
    c->v.s[22] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[26] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[24] = LD32(c->r[5] + 8u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.f[19] = c->v.f[2] - c->v.f[22];
    c->v.f[17] = c->v.f[0] - c->v.f[26];
    c->v.f[30] = c->v.f[4] - c->v.f[24];
    c->v.s[0] = 0x34000000u;
    c->v.f[18] = c->v.f[19] * c->v.f[19];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[30] * c->v.f[30]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d0500; }
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[28] = LD32(c->r[5] + 32u);
    c->r[6] = 0x0u;
    c->v.f[17] = c->v.f[2] - c->v.f[22];
    c->v.f[19] = c->v.f[0] - c->v.f[26];
    c->v.f[21] = c->v.f[4] - c->v.f[24];
    c->v.f[30] = c->v.f[28] * c->v.f[28];
    c->v.s[0] = 0x3a83126fu;
    c->v.f[16] = c->v.f[17] * c->v.f[17];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[21] * c->v.f[21]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[30]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    if (COND_LS) { c->r[6] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d06a4; }
    c->r[0] = 0x1068d1cu;
    c->v.s[18] = 0x0u;
    { uint32_t ea = 0x9d04ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9d06f8; }
    goto L_9d07c8;
L_9d0500:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x9d0518u; f_a098b4(c);
    c->v.s[20] = c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0538; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9d0534u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9d0538:;
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[10] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[5] + 24u);
    c->v.s[23] = LD32(c->r[13] + 4u);
    c->v.s[22] = LD32(c->r[5] + 32u);
    c->v.f[27] = c->v.f[6] - c->v.f[0];
    c->v.f[25] = c->v.f[10] - c->v.f[4];
    c->v.f[29] = c->v.f[8] - c->v.f[2];
    c->v.f[0] = c->v.f[27] * c->v.f[27];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0588; }
    c->r[14] = 0x9d0584u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0588:;
    c->v.s[21] = 0x3f800000u;
    c->v.s[28] = LD32(c->r[5]);
    c->v.s[24] = LD32(c->r[5] + 4u);
    c->v.s[26] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[21] / c->v.f[2];
    c->v.f[2] = c->v.f[29] * c->v.f[0];
    c->v.f[4] = c->v.f[27] * c->v.f[0];
    c->v.f[0] = c->v.f[25] * c->v.f[0];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[23] * c->v.f[0]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[23] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.s[0] = 0x3a83126fu;
    vfp_cmp_f(c, c->v.f[20], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d0738; }
    c->v.f[0] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d05dc; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x9d05dcu; f_15efddc(c);
L_9d05dc:;
    c->v.f[0] = c->v.f[21] / c->v.f[0];
    c->r[0] = 0x1068c14u;
    c->r[1] = 0x1068c00u;
    c->v.s[14] = 0x3f7fbe77u;
    { uint32_t ea = 0x9d05f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    { uint32_t ea = 0x9d0604u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[19] * c->v.f[0];
    c->v.f[10] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[12] = c->v.f[4] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = fabsf(c->v.f[12]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[3] : c->v.s[4];
    c->v.s[2] = COND_GT ? c->v.s[1] : c->v.s[2];
    c->v.s[6] = COND_GT ? c->v.s[5] : c->v.s[6];
    c->v.f[12] = c->v.f[10] * c->v.f[4];
    c->v.f[14] = c->v.f[0] * c->v.f[2];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[20] = c->v.f[10] * c->v.f[12];
    c->v.f[18] = c->v.f[0] * c->v.f[14];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[30] = c->v.f[8] * c->v.f[1];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0690; }
    c->r[14] = 0x9d068cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0690:;
    c->v.f[4] = c->v.f[21] / c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[30];
    c->v.f[2] = c->v.f[4] * c->v.f[20];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    goto L_9d0760;
L_9d06a4:;
    c->v.f[20] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    c->v.s[18] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d06c4; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d06c0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_9d06c4:;
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d06dc; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d06d8u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_9d06dc:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[4] = c->v.f[0] / c->v.f[20];
    c->v.f[0] = c->v.f[21] * c->v.f[4];
    c->v.f[2] = c->v.f[17] * c->v.f[4];
    c->v.f[4] = c->v.f[19] * c->v.f[4];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d07c8; }
L_9d06f8:;
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[28] * c->v.f[0]);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[30]);
    ST32(c->r[4], c->v.s[26]);
    ST32(c->r[4] + 4u, c->v.s[22]);
    ST32(c->r[4] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[4]);
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] - c->v.f[28];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    goto L_9d07b8;
L_9d0738:;
    c->v.f[6] = c->v.f[21] / c->v.f[16];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.f[2] = c->v.f[2] - c->v.f[24];
    c->v.f[4] = c->v.f[4] - c->v.f[26];
    c->v.f[8] = c->v.f[0] - c->v.f[28];
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[8];
L_9d0760:;
    c->v.f[6] = c->v.f[16] - c->v.f[22];
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d07c8; }
    c->v.s[8] = LD32(c->r[5] + 32u);
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[4], c->v.s[28]);
    ST32(c->r[4] + 4u, c->v.s[24]);
    ST32(c->r[4] + 8u, c->v.s[26]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[4]);
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[6]);
L_9d07b8:;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d07c8:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9d07f4(Cpu *restrict c) {
    FN_ENTER(0x9d07f4u);
L_9d07f4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->v.s[1] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.f[12] = c->v.f[6] - c->v.f[2];
    c->v.f[14] = c->v.f[4] - c->v.f[10];
    c->v.f[3] = c->v.f[8] - c->v.f[0];
    c->v.f[12] = c->v.f[12] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[3]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d0884; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x9d0880u; f_9cf274(c);
    goto L_9d0b20;
L_9d0884:;
    c->v.s[18] = 0x3a83126fu;
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0x8u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    ST32(c->r[13] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x9d08c4u; f_a099e4(c);
    c->v.s[20] = c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d08e4; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9d08e0u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9d08e4:;
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[6] = LD32(c->r[13] + 32u);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[8] = LD32(c->r[13] + 36u);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.s[10] = LD32(c->r[13] + 40u);
    c->v.s[30] = LD32(c->r[13] + 12u);
    c->v.f[19] = c->v.f[8] - c->v.f[2];
    c->v.f[17] = c->v.f[6] - c->v.f[0];
    c->v.f[21] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0930; }
    c->r[14] = 0x9d092cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0930:;
    c->v.s[28] = 0x3f800000u;
    c->v.s[26] = LD32(c->r[13] + 16u);
    c->v.s[22] = LD32(c->r[13] + 20u);
    c->v.s[24] = LD32(c->r[13] + 24u);
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    vfp_mrs_flags(c);
    c->v.f[2] = c->v.f[21] * c->v.f[0];
    c->v.f[4] = c->v.f[19] * c->v.f[0];
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[0]);
    if (COND_PL) { goto L_9d0a78; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.f[30] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d09b0; }
    c->r[14] = 0x9d09acu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d09b0:;
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    c->r[0] = 0x1068840u;
    c->r[1] = 0x106882cu;
    c->v.s[14] = 0x3f7fbe77u;
    { uint32_t ea = 0x9d09c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    { uint32_t ea = 0x9d09d8u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[30] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[12] = c->v.f[4] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = fabsf(c->v.f[12]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[3] : c->v.s[4];
    c->v.s[2] = COND_GT ? c->v.s[1] : c->v.s[2];
    c->v.s[6] = COND_GT ? c->v.s[5] : c->v.s[6];
    c->v.f[12] = c->v.f[10] * c->v.f[4];
    c->v.f[14] = c->v.f[0] * c->v.f[2];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[20] = c->v.f[10] * c->v.f[12];
    c->v.f[18] = c->v.f[0] * c->v.f[14];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[30] = c->v.f[8] * c->v.f[1];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0a64; }
    c->r[14] = 0x9d0a60u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0a64:;
    c->v.f[2] = c->v.f[28] / c->v.f[2];
    c->v.f[0] = c->v.f[2] * c->v.f[30];
    c->v.f[4] = c->v.f[2] * c->v.f[20];
    c->v.f[6] = c->v.f[2] * c->v.f[18];
    goto L_9d0abc;
L_9d0a78:;
    c->v.s[0] = LD32(c->r[13] + 8u);
    c->v.s[2] = LD32(c->r[7] + 16u);
    c->v.s[12] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 24u);
    c->v.s[10] = LD32(c->r[7] + 8u);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[2] = c->v.f[28] / c->v.f[16];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[0] = c->v.f[10] - c->v.f[24];
    c->v.f[4] = c->v.f[8] - c->v.f[22];
    c->v.f[6] = c->v.f[12] - c->v.f[26];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
L_9d0abc:;
    c->v.s[2] = LD32(c->r[6] + 32u);
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.f[2] = c->v.f[16] - c->v.f[2];
    if (COND_EQ) { goto L_9d0b04; }
    c->r[0] = 0x0u;
    ST32(c->r[5] + 16u, c->v.s[6]);
    ST32(c->r[5] + 20u, c->v.s[4]);
    ST32(c->r[5] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.s[8] = LD32(c->r[6] + 32u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[5], c->v.s[26]);
    ST32(c->r[5] + 4u, c->v.s[22]);
    ST32(c->r[5] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[2]);
L_9d0b04:;
    (void)f_subs(c, c->r[4], 0x0u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
L_9d0b20:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9d0b40(Cpu *restrict c) {
    FN_ENTER(0x9d0b40u);
L_9d0b40:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->v.s[1] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.f[12] = c->v.f[6] - c->v.f[2];
    c->v.f[14] = c->v.f[4] - c->v.f[10];
    c->v.f[3] = c->v.f[8] - c->v.f[0];
    c->v.f[12] = c->v.f[12] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[3]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d0bd0; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x9d0bccu; f_9cf390(c);
    goto L_9d0e6c;
L_9d0bd0:;
    c->v.s[18] = 0x3a83126fu;
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    ST32(c->r[13] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x9d0c10u; f_a09434(c);
    c->v.s[20] = c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0c30; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9d0c2cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9d0c30:;
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[6] = LD32(c->r[13] + 32u);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[8] = LD32(c->r[13] + 36u);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.s[10] = LD32(c->r[13] + 40u);
    c->v.s[30] = LD32(c->r[13] + 12u);
    c->v.f[19] = c->v.f[8] - c->v.f[2];
    c->v.f[17] = c->v.f[6] - c->v.f[0];
    c->v.f[21] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0c7c; }
    c->r[14] = 0x9d0c78u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0c7c:;
    c->v.s[28] = 0x3f800000u;
    c->v.s[26] = LD32(c->r[13] + 16u);
    c->v.s[22] = LD32(c->r[13] + 20u);
    c->v.s[24] = LD32(c->r[13] + 24u);
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    vfp_mrs_flags(c);
    c->v.f[2] = c->v.f[21] * c->v.f[0];
    c->v.f[4] = c->v.f[19] * c->v.f[0];
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[0]);
    if (COND_PL) { goto L_9d0dc4; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.f[30] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0cfc; }
    c->r[14] = 0x9d0cf8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0cfc:;
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    c->r[0] = 0x10684f4u;
    c->r[1] = 0x10684e0u;
    c->v.s[14] = 0x3f7fbe77u;
    { uint32_t ea = 0x9d0d14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    { uint32_t ea = 0x9d0d24u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[30] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[12] = c->v.f[4] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = fabsf(c->v.f[12]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[3] : c->v.s[4];
    c->v.s[2] = COND_GT ? c->v.s[1] : c->v.s[2];
    c->v.s[6] = COND_GT ? c->v.s[5] : c->v.s[6];
    c->v.f[12] = c->v.f[10] * c->v.f[4];
    c->v.f[14] = c->v.f[0] * c->v.f[2];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[20] = c->v.f[10] * c->v.f[12];
    c->v.f[18] = c->v.f[0] * c->v.f[14];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[30] = c->v.f[8] * c->v.f[1];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0db0; }
    c->r[14] = 0x9d0dacu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0db0:;
    c->v.f[2] = c->v.f[28] / c->v.f[2];
    c->v.f[0] = c->v.f[2] * c->v.f[30];
    c->v.f[4] = c->v.f[2] * c->v.f[20];
    c->v.f[6] = c->v.f[2] * c->v.f[18];
    goto L_9d0e08;
L_9d0dc4:;
    c->v.s[0] = LD32(c->r[13] + 8u);
    c->v.s[2] = LD32(c->r[7] + 16u);
    c->v.s[12] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 24u);
    c->v.s[10] = LD32(c->r[7] + 8u);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[2] = c->v.f[28] / c->v.f[16];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[0] = c->v.f[10] - c->v.f[24];
    c->v.f[4] = c->v.f[8] - c->v.f[22];
    c->v.f[6] = c->v.f[12] - c->v.f[26];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
L_9d0e08:;
    c->v.s[2] = LD32(c->r[6] + 32u);
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.f[2] = c->v.f[16] - c->v.f[2];
    if (COND_EQ) { goto L_9d0e50; }
    c->r[0] = 0x0u;
    ST32(c->r[5] + 16u, c->v.s[6]);
    ST32(c->r[5] + 20u, c->v.s[4]);
    ST32(c->r[5] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.s[8] = LD32(c->r[6] + 32u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[5], c->v.s[26]);
    ST32(c->r[5] + 4u, c->v.s[22]);
    ST32(c->r[5] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[2]);
L_9d0e50:;
    (void)f_subs(c, c->r[4], 0x0u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
L_9d0e6c:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9d0e8c(Cpu *restrict c) {
    FN_ENTER(0x9d0e8cu);
L_9d0e8c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->v.s[1] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.f[12] = c->v.f[6] - c->v.f[2];
    c->v.f[14] = c->v.f[4] - c->v.f[10];
    c->v.f[3] = c->v.f[8] - c->v.f[0];
    c->v.f[12] = c->v.f[12] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[3]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d0f1c; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x9d0f18u; f_9cf4a4(c);
    goto L_9d1218;
L_9d0f1c:;
    c->v.s[18] = 0x3a83126fu;
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0x8u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    ST32(c->r[13] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x9d0f60u; f_a09bc0(c);
    c->v.s[20] = c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0f80; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9d0f7cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9d0f80:;
    c->v.s[0] = LD32(c->r[13] + 16u);
    c->v.s[6] = LD32(c->r[13] + 32u);
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.s[8] = LD32(c->r[13] + 36u);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.s[10] = LD32(c->r[13] + 40u);
    c->v.s[30] = LD32(c->r[13] + 12u);
    c->v.f[23] = c->v.f[8] - c->v.f[2];
    c->v.f[21] = c->v.f[6] - c->v.f[0];
    c->v.f[27] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[23] * c->v.f[23];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d0fcc; }
    c->r[14] = 0x9d0fc8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d0fcc:;
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[10] = LD32(c->r[7] + 20u);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[8] = LD32(c->r[7] + 16u);
    c->v.s[28] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.s[12] = LD32(c->r[7] + 24u);
    c->v.s[26] = LD32(c->r[13] + 16u);
    c->v.s[22] = LD32(c->r[13] + 20u);
    c->v.s[24] = LD32(c->r[13] + 24u);
    c->v.f[2] = c->v.f[28] / c->v.f[2];
    c->v.f[17] = c->v.f[10] - c->v.f[0];
    c->v.f[19] = c->v.f[8] - c->v.f[6];
    c->v.f[25] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[17] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[29] = c->v.f[27] * c->v.f[2];
    c->v.f[27] = c->v.f[23] * c->v.f[2];
    c->v.f[23] = c->v.f[21] * c->v.f[2];
    c->v.s[21] = LD32(c->r[13] + 8u);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1038; }
    c->r[14] = 0x9d1034u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d1038:;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[29]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[27]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[23]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d1160; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.f[30] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1098; }
    c->r[14] = 0x9d1094u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d1098:;
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    c->r[0] = 0x1068158u;
    c->r[1] = 0x1068144u;
    c->v.s[14] = 0x3f7fbe77u;
    { uint32_t ea = 0x9d10b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    { uint32_t ea = 0x9d10c0u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[30] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[12] = c->v.f[4] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = fabsf(c->v.f[12]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[3] : c->v.s[4];
    c->v.s[2] = COND_GT ? c->v.s[1] : c->v.s[2];
    c->v.s[6] = COND_GT ? c->v.s[5] : c->v.s[6];
    c->v.f[12] = c->v.f[10] * c->v.f[4];
    c->v.f[14] = c->v.f[0] * c->v.f[2];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[20] = c->v.f[10] * c->v.f[12];
    c->v.f[18] = c->v.f[0] * c->v.f[14];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[30] = c->v.f[8] * c->v.f[1];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d114c; }
    c->r[14] = 0x9d1148u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d114c:;
    c->v.f[4] = c->v.f[28] / c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[30];
    c->v.f[2] = c->v.f[4] * c->v.f[20];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    goto L_9d11a4;
L_9d1160:;
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    c->v.s[6] = LD32(c->r[7] + 8u);
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.f[8] = c->v.f[25] * c->v.f[0];
    c->v.f[10] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[19] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[21] * c->v.f[8]);
    c->v.f[8] = c->v.f[28] / c->v.f[16];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[0] = c->v.f[6] - c->v.f[24];
    c->v.f[4] = c->v.f[4] - c->v.f[22];
    c->v.f[6] = c->v.f[2] - c->v.f[26];
    c->v.f[2] = c->v.f[8] * c->v.f[4];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[4] = c->v.f[8] * c->v.f[6];
L_9d11a4:;
    c->v.s[6] = LD32(c->r[6] + 32u);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9d120c; }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[6]);
    vfp_mrs_flags(c);
    ST32(c->r[5], c->v.s[26]);
    ST32(c->r[5] + 4u, c->v.s[22]);
    ST32(c->r[5] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[5] + 16u, c->v.s[4]);
    ST32(c->r[5] + 20u, c->v.s[2]);
    ST32(c->r[5] + 24u, c->v.s[0]);
    c->v.f[0] = c->v.f[16] - c->v.f[6];
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[5] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_LS) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[5] + 0x28u; ST8(ea, c->r[1]); }
L_9d120c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); } }
L_9d1218:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9d1238(Cpu *restrict c) {
    FN_ENTER(0x9d1238u);
L_9d1238:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[7] = c->r[0];
    c->v.s[20] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[10]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d12c8; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[4]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    ST32(c->r[13] + 24u, c->v.s[2]);
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x9d12c4u; f_9cf610(c);
    goto L_9d15a4;
L_9d12c8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x9d12f8u; f_a098b4(c);
    c->v.s[18] = c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1318; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x9d1314u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9d1318:;
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[8] = LD32(c->r[7] + 24u);
    c->v.s[24] = LD32(c->r[5] + 12u);
    c->v.s[26] = LD32(c->r[7] + 32u);
    c->v.s[17] = LD32(c->r[13] + 12u);
    c->v.f[30] = c->v.f[6] - c->v.f[0];
    c->v.f[28] = c->v.f[10] - c->v.f[4];
    c->v.f[22] = c->v.f[8] - c->v.f[2];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d136c; }
    c->r[14] = 0x9d1368u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d136c:;
    c->v.s[27] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.f[23] = c->v.f[26] + c->v.f[24];
    c->v.s[26] = LD32(c->r[5]);
    c->v.s[24] = LD32(c->r[5] + 8u);
    c->v.f[6] = c->v.f[27] / c->v.f[2];
    c->v.s[2] = LD32(c->r[7] + 4u);
    c->v.s[19] = c->v.s[4];
    c->v.s[25] = c->v.s[0];
    c->v.s[21] = c->v.s[2];
    c->v.f[8] = c->v.f[22] * c->v.f[6];
    c->v.f[10] = c->v.f[30] * c->v.f[6];
    c->v.f[6] = c->v.f[28] * c->v.f[6];
    c->v.s[22] = LD32(c->r[5] + 4u);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[17] * c->v.f[8]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[17] * c->v.f[10]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[17] * c->v.f[6]);
    c->v.s[6] = 0x3a83126fu;
    vfp_cmp_f(c, c->v.f[18], c->v.f[6]);
    vfp_mrs_flags(c);
    c->v.f[30] = c->v.f[24] - c->v.f[19];
    c->v.f[28] = c->v.f[22] - c->v.f[21];
    c->v.f[17] = c->v.f[26] - c->v.f[25];
    if (COND_PL) { goto L_9d149c; }
    c->v.s[6] = LD32(c->r[7] + 16u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.f[29] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[6] - c->v.f[0];
    c->v.f[31] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[29] * c->v.f[29];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d140c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9d140cu; f_15efddc(c);
L_9d140c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d1428; }
    c->v.f[0] = c->v.f[27] / c->v.f[0];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_9d1428:;
    c->v.f[0] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[17] * c->v.f[31];
    c->v.f[4] = c->v.f[30] * c->v.f[29];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[17] * c->v.f[29]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[30] * c->v.f[18]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[28] * c->v.f[31]);
    c->v.f[28] = c->v.f[18] * c->v.f[0];
    c->v.f[17] = c->v.f[31] * c->v.f[2];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[31] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[29] * c->v.f[0]);
    c->v.f[30] = c->v.f[29] * c->v.f[4];
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d147c; }
    c->r[14] = 0x9d1478u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d147c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d14dc; }
    c->v.f[0] = c->v.f[27] / c->v.f[2];
    c->v.f[30] = c->v.f[0] * c->v.f[30];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
    c->v.f[17] = c->v.f[0] * c->v.f[17];
    goto L_9d14dc;
L_9d149c:;
    c->v.f[2] = c->v.f[28] * c->v.f[28];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d14c0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9d14c0u; f_15efddc(c);
L_9d14c0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d14dc; }
    c->v.f[0] = c->v.f[27] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_9d14dc:;
    c->v.f[0] = c->v.f[16] - c->v.f[23];
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9d1544; }
    c->v.s[2] = LD32(c->r[7] + 32u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[30] * c->v.f[2]);
    ST32(c->r[6], c->v.s[25]);
    ST32(c->r[6] + 4u, c->v.s[21]);
    ST32(c->r[6] + 8u, c->v.s[19]);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[6] + 16u, c->v.s[17]);
    ST32(c->r[6] + 20u, c->v.s[28]);
    ST32(c->r[6] + 24u, c->v.s[30]);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[6] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_LS) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[6] + 0x28u; ST8(ea, c->r[1]); }
L_9d1544:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d15a4; }
    c->v.s[2] = LD32(c->r[5] + 12u);
    c->r[1] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[4] = c->v.s[28] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[30] * c->v.f[2]);
    c->v.s[2] = c->v.s[17] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[26]);
    ST32(c->r[4] + 4u, c->v.s[22]);
    ST32(c->r[4] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[30] ^ 0x80000000u;
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_LS) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[1]); }
L_9d15a4:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9d15b8(Cpu *restrict c) {
    FN_ENTER(0x9d15b8u);
L_9d15b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[14] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[12] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 8u);
    c->v.s[1] = LD32(c->r[6] + 24u);
    c->v.s[6] = LD32(c->r[7] + 4u);
    c->v.s[10] = LD32(c->r[7]);
    c->v.s[3] = LD32(c->r[7] + 16u);
    c->v.s[5] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[7] + 8u);
    c->v.s[7] = LD32(c->r[7] + 24u);
    c->v.f[14] = c->v.f[14] - c->v.f[2];
    c->v.f[9] = c->v.f[12] - c->v.f[4];
    c->v.f[1] = c->v.f[1] - c->v.f[0];
    c->v.f[3] = c->v.f[3] - c->v.f[10];
    c->v.f[12] = c->v.f[14] * c->v.f[14];
    c->v.f[14] = c->v.f[5] - c->v.f[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[9] * c->v.f[9]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[1] = c->v.f[7] - c->v.f[8];
    c->v.f[5] = c->v.f[14] * c->v.f[14];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.s[14] = 0x34000000u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[1] * c->v.f[1]);
    vfp_cmp_f(c, c->v.f[5], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d1698; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    ST32(c->r[13] + 16u, c->v.s[10]);
    ST32(c->r[13] + 20u, c->v.s[6]);
    ST32(c->r[13] + 24u, c->v.s[8]);
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_PL) { goto L_9d16d0; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13], c->v.s[4]);
    ST32(c->r[13] + 4u, c->v.s[2]);
    ST32(c->r[13] + 8u, c->v.s[0]);
    c->r[1] = c->r[13];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x9d1694u; f_9cf610(c);
    goto L_9d1a48;
L_9d1698:;
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d16e8; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[4]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x9d16ccu; f_9d1238(c);
    goto L_9d1a48;
L_9d16d0:;
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[3] = c->r[5];
    c->r[14] = 0x9d16e4u; f_9d1238(c);
    goto L_9d1a48;
L_9d16e8:;
    c->v.s[18] = 0x3a83126fu;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[13];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x9d1710u; f_a09bc0(c);
    c->v.s[20] = c->v.s[0];
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1730; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x9d172cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_9d1730:;
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[8] = LD32(c->r[7] + 24u);
    c->v.s[7] = LD32(c->r[6] + 32u);
    c->v.s[19] = LD32(c->r[7] + 32u);
    c->v.s[30] = LD32(c->r[13] + 16u);
    c->v.f[21] = c->v.f[6] - c->v.f[0];
    c->v.f[17] = c->v.f[10] - c->v.f[4];
    c->v.f[29] = c->v.f[8] - c->v.f[2];
    c->v.f[0] = c->v.f[21] * c->v.f[21];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d178c; }
    c->v.s[22] = c->v.s[7];
    c->r[14] = 0x9d1784u; f_15efddc(c);
    c->v.s[7] = c->v.s[22];
    c->v.s[2] = c->v.s[0];
L_9d178c:;
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[10] = LD32(c->r[6] + 20u);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 16u);
    c->v.s[23] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[12] = LD32(c->r[6] + 24u);
    c->v.s[26] = LD32(c->r[7]);
    c->v.s[22] = LD32(c->r[7] + 4u);
    c->v.s[24] = LD32(c->r[7] + 8u);
    c->v.f[2] = c->v.f[23] / c->v.f[2];
    c->v.f[25] = c->v.f[10] - c->v.f[0];
    c->v.f[27] = c->v.f[8] - c->v.f[6];
    c->v.f[31] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[28] = c->v.f[29] * c->v.f[2];
    c->v.f[21] = c->v.f[21] * c->v.f[2];
    c->v.f[17] = c->v.f[17] * c->v.f[2];
    c->v.s[29] = LD32(c->r[13]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1814; }
    c->v.s[23] = c->v.s[18];
    c->v.s[18] = c->v.s[19];
    c->v.s[19] = c->v.s[7];
    c->r[14] = 0x9d1800u; f_15efddc(c);
    c->v.s[7] = c->v.s[19];
    c->v.s[19] = c->v.s[18];
    c->v.s[18] = c->v.s[23];
    c->v.s[23] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_9d1814:;
    c->v.f[0] = c->v.f[23] / c->v.f[2];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[21]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[17]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[28]);
    c->v.s[21] = LD32(c->r[6]);
    c->v.s[30] = LD32(c->r[6] + 4u);
    c->v.s[17] = LD32(c->r[6] + 8u);
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    vfp_mrs_flags(c);
    c->v.f[2] = c->v.f[31] * c->v.f[0];
    c->v.f[4] = c->v.f[25] * c->v.f[0];
    c->v.f[0] = c->v.f[27] * c->v.f[0];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[29] * c->v.f[2]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[29] * c->v.f[4]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[29] * c->v.f[0]);
    if (COND_PL) { goto L_9d193c; }
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.f[25] = c->v.f[8] - c->v.f[0];
    c->v.f[20] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d18a4; }
    c->v.s[28] = c->v.s[7];
    c->r[14] = 0x9d189cu; f_15efddc(c);
    c->v.s[7] = c->v.s[28];
    c->v.s[2] = c->v.s[0];
L_9d18a4:;
    c->v.f[0] = c->v.f[23] / c->v.f[2];
    c->r[0] = 0x106794cu;
    c->r[1] = 0x1067938u;
    c->v.s[14] = 0x3f7fbe77u;
    { uint32_t ea = 0x9d18bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    { uint32_t ea = 0x9d18ccu + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[0] + 8u);
    c->v.f[8] = c->v.f[25] * c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[12] = c->v.f[4] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[12] = fabsf(c->v.f[12]);
    vfp_cmp_f(c, c->v.f[12], c->v.f[14]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[1] : c->v.s[2];
    c->v.s[6] = COND_GT ? c->v.s[5] : c->v.s[6];
    c->v.s[4] = COND_GT ? c->v.s[3] : c->v.s[4];
    c->v.f[12] = c->v.f[8] * c->v.f[6];
    c->v.f[14] = c->v.f[10] * c->v.f[4];
    c->v.f[1] = c->v.f[0] * c->v.f[2];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[18] = c->v.f[8] * c->v.f[12];
    c->v.f[20] = c->v.f[10] * c->v.f[14];
    c->v.f[25] = c->v.f[0] * c->v.f[1];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[8] * c->v.f[14]);
    goto L_9d1948;
L_9d193c:;
    c->v.f[18] = c->v.f[17] - c->v.f[24];
    c->v.f[20] = c->v.f[30] - c->v.f[22];
    c->v.f[25] = c->v.f[21] - c->v.f[26];
L_9d1948:;
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[28] = c->v.f[19] + c->v.f[7];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1970; }
    c->r[14] = 0x9d196cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d1970:;
    c->v.f[6] = c->v.f[23] / c->v.f[2];
    c->v.f[0] = c->v.f[16] - c->v.f[28];
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.f[2] = c->v.f[18] * c->v.f[6];
    c->v.f[4] = c->v.f[20] * c->v.f[6];
    c->v.f[6] = c->v.f[25] * c->v.f[6];
    if (COND_EQ) { goto L_9d19e8; }
    c->v.s[8] = LD32(c->r[7] + 32u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[5], c->v.s[26]);
    ST32(c->r[5] + 4u, c->v.s[22]);
    ST32(c->r[5] + 8u, c->v.s[24]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[5] + 16u, c->v.s[6]);
    ST32(c->r[5] + 20u, c->v.s[4]);
    ST32(c->r[5] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[5] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_LS) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[5] + 0x28u; ST8(ea, c->r[1]); }
L_9d19e8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d1a48; }
    c->v.s[8] = LD32(c->r[6] + 32u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    c->v.f[21] = c->v.f[21] - (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[4], c->v.s[21]);
    ST32(c->r[4] + 4u, c->v.s[30]);
    ST32(c->r[4] + 8u, c->v.s[17]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 16u, c->v.s[6]);
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_LS) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[1]); }
L_9d1a48:;
    c->r[13] = c->r[11] - 0x50u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9d1a64(Cpu *restrict c) {
    FN_ENTER(0x9d1a64u);
L_9d1a64:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x50u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[7] = c->r[0];
    c->v.s[12] = 0x34000000u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[8] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[10]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d1af0; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[4]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    ST32(c->r[13] + 24u, c->v.s[2]);
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x9d1ae8u; f_9cfc64(c);
    c->r[6] = c->r[0];
    goto L_9d1c90;
L_9d1af0:;
    c->r[0] = 0xffffu;
    c->r[6] = 0x0u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[13] + 0x48u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    c->r[2] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[7];
    c->r[14] = 0x9d1b38u; f_9d9734(c);
    c->v.s[0] = LD32(c->r[7] + 32u);
    c->v.s[2] = LD32(c->r[13] + 48u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.f[16] = c->v.f[2] - c->v.f[0];
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[6] = c->r[0] | c->r[6];
    if (COND_EQ) { goto L_9d1c40; }
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7]);
    c->v.s[6] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.s[18] = LD32(c->r[13] + 68u);
    c->v.f[22] = c->v.f[8] - c->v.f[0];
    c->v.f[24] = c->v.f[6] - c->v.f[4];
    c->v.f[20] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1ba8; }
    c->r[14] = 0x9d1ba4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d1ba8:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x106f224u;
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.s[10] = LD32(c->r[13] + 32u);
    c->v.s[12] = LD32(c->r[13] + 36u);
    c->v.s[14] = LD32(c->r[13] + 40u);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[8] = LD32(c->r[7] + 32u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[7] + 4u);
    { uint32_t ea = 0x9d1bd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[0] + 8u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[1];
    c->v.f[12] = c->v.f[12] * c->v.f[3];
    c->v.f[7] = c->v.f[24] * c->v.f[0];
    c->v.f[9] = c->v.f[22] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[7]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[9]);
    c->v.f[0] = c->v.f[14] * c->v.f[5];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[5], c->v.s[6]);
    ST32(c->r[5] + 4u, c->v.s[2]);
    ST32(c->r[5] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 16u, c->v.s[10]);
    ST32(c->r[5] + 20u, c->v.s[12]);
    ST32(c->r[5] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST8(ea, c->r[6]); }
L_9d1c40:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d1c90; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[6]); }
L_9d1c90:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_9d1ca8(Cpu *restrict c) {
    FN_ENTER(0x9d1ca8u);
L_9d1ca8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[1] = 0x0u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x9d1cd4u; f_a0a960(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = 0x34000000u;
    c->r[0] = 0x1u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d1d78; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_9d1d78; }
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d1d10; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9d1d10u; f_15efddc(c);
L_9d1d10:;
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13]);
    c->v.s[8] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->v.s[6] = LD32(c->r[13] + 8u);
    c->v.s[10] = LD32(c->r[5] + 4u);
    c->v.s[12] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    c->v.f[14] = c->v.f[14] / c->v.f[0];
    ST32(c->r[4], c->v.s[2]);
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[6]);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[6] = c->v.f[12] - c->v.f[6];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    c->v.f[4] = c->v.f[14] * c->v.f[4];
    ST32(c->r[4] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[14] * c->v.f[6];
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d1d78:;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_9d1d84(Cpu *restrict c) {
    FN_ENTER(0x9d1d84u);
L_9d1d84:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[2];
    c->r[4] = 0x0u;
    c->r[2] = c->r[13] + 0x1cu;
    c->r[8] = c->r[3];
    c->r[7] = c->r[1];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x9d1db4u; f_a0aa10(c);
    c->v.s[2] = 0x34000000u;
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9d1e28; }
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 8u);
    c->v.s[8] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[1] = LD32(c->r[13] + 28u);
    c->v.s[12] = LD32(c->r[7] + 20u);
    c->v.s[14] = LD32(c->r[7] + 24u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[1] = c->r[13];
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    vfp_mrs_flags(c);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[14]);
    ST32(c->r[13], c->v.s[8]);
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    if (COND_MI) { c->r[4] = 0x1u; }
    c->r[14] = 0x9d1e24u; f_9cf934(c);
    c->r[0] = c->r[4] | c->r[0];
L_9d1e28:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); } }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9d1e40(Cpu *restrict c) {
    FN_ENTER(0x9d1e40u);
L_9d1e40:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[2];
    c->r[4] = 0x0u;
    c->r[2] = c->r[13] + 0x1cu;
    c->r[8] = c->r[3];
    c->r[7] = c->r[1];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x9d1e70u; f_a0aaf4(c);
    c->v.s[2] = 0x34000000u;
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9d1ee4; }
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[7] + 8u);
    c->v.s[8] = LD32(c->r[7]);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[1] = LD32(c->r[13] + 28u);
    c->v.s[12] = LD32(c->r[7] + 20u);
    c->v.s[14] = LD32(c->r[7] + 24u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[1] = c->r[13];
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    vfp_mrs_flags(c);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[14]);
    ST32(c->r[13], c->v.s[8]);
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    if (COND_MI) { c->r[4] = 0x1u; }
    c->r[14] = 0x9d1ee0u; f_9cf934(c);
    c->r[0] = c->r[4] | c->r[0];
L_9d1ee4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); } }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_9d1efc(Cpu *restrict c) {
    FN_ENTER(0x9d1efcu);
L_9d1efc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x110u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    c->r[6] = c->r[1];
    c->r[9] = c->r[3];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.s[8] = 0x34000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d1f7c; }
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[1] = c->r[6];
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); } }
    goto L_9d2344;
L_9d1f7c:;
    c->r[2] = c->r[13] + 0x10cu;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x9d1f8cu; f_a043c8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9d2290; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[25] = LD32(c->r[5] + 4u);
    c->v.s[27] = LD32(c->r[5] + 8u);
    c->v.f[16] = c->v.f[8] - c->v.f[0];
    c->v.s[0] = LD32(c->r[5]);
    c->v.f[18] = c->v.f[6] - c->v.f[4];
    c->v.f[20] = c->v.f[10] - c->v.f[2];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 16u);
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 24u);
    c->v.s[29] = LD32(c->r[5] + 20u);
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d2000; }
    c->r[14] = 0x9d1ffcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d2000:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x10671dcu;
    c->v.s[19] = LD32(c->r[5] + 16u);
    c->v.s[21] = LD32(c->r[5] + 20u);
    c->v.s[23] = LD32(c->r[5] + 24u);
    c->v.s[31] = LD32(c->r[5] + 4u);
    c->v.s[24] = LD32(c->r[5] + 8u);
    c->v.s[17] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    { uint32_t ea = 0x9d202cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.f[28] = c->v.f[18] * c->v.f[0];
    c->v.f[26] = c->v.f[20] * c->v.f[0];
    c->v.f[30] = c->v.f[16] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[6];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[26] * c->v.f[2]);
    c->v.f[8] = c->v.f[26] * c->v.f[4];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[2] = c->v.f[30] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[28] * c->v.f[4]);
    ST32(c->r[13] + 56u, c->v.s[10]);
    c->v.f[0] = c->v.f[10] * c->v.f[10];
    c->v.s[16] = LD32(c->r[6] + 16u);
    c->v.s[20] = LD32(c->r[6] + 20u);
    c->v.s[18] = LD32(c->r[6] + 24u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    ST32(c->r[13] + 60u, c->v.s[8]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[22] = LD32(c->r[6] + 4u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    ST32(c->r[13] + 20u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[6]);
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d20a8; }
    c->r[14] = 0x9d20a4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d20a8:;
    c->v.s[0] = 0x34000000u;
    ST32(c->r[13] + 48u, c->v.s[25]);
    ST32(c->r[13] + 44u, c->v.s[27]);
    ST32(c->r[13] + 40u, c->v.s[29]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d20f0; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 52u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 52u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 56u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 56u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 60u);
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 60u, c->v.s[2]);
L_9d20f0:;
    c->r[0] = 0x1067108u;
    { uint32_t ea = 0x9d20fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[25] = c->v.f[28] * c->v.f[4];
    c->v.f[27] = c->v.f[26] * c->v.f[2];
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[29] = c->v.f[30] * c->v.f[0];
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d2140; }
    c->r[14] = 0x9d213cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d2140:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2164; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[29] = c->v.f[0] * c->v.f[29];
    c->v.f[25] = c->v.f[0] * c->v.f[25];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
L_9d2164:;
    c->r[0] = 0x10670d8u;
    c->v.f[31] = c->v.f[31] + c->v.f[21];
    c->v.f[17] = c->v.f[17] + c->v.f[19];
    c->v.f[24] = c->v.f[24] + c->v.f[23];
    c->v.s[5] = 0x3f000000u;
    { uint32_t ea = 0x9d2180u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.f[19] = c->v.f[28] * c->v.f[2];
    c->v.f[21] = c->v.f[26] * c->v.f[4];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[21] = c->v.f[21] - (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[23] = c->v.f[30] * c->v.f[0];
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[2] = c->v.f[19] * c->v.f[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d21c8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x9d21c4u; f_15efddc(c);
    c->v.s[5] = 0x3f000000u;
L_9d21c8:;
    c->v.s[2] = LD32(c->r[13] + 44u);
    c->v.s[4] = LD32(c->r[13] + 36u);
    c->v.f[6] = c->v.f[17] * c->v.f[5];
    c->v.f[8] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.f[10] = c->v.f[4] - c->v.f[2];
    c->v.f[2] = c->v.f[24] * c->v.f[5];
    c->v.s[24] = 0x34000000u;
    c->v.f[4] = c->v.f[31] * c->v.f[5];
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2210; }
    c->v.s[12] = 0x3f800000u;
    c->v.f[0] = c->v.f[12] / c->v.f[0];
    c->v.f[23] = c->v.f[0] * c->v.f[23];
    c->v.f[19] = c->v.f[0] * c->v.f[19];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_9d2210:;
    c->v.f[14] = c->v.f[20] - c->v.f[4];
    c->v.f[1] = c->v.f[16] - c->v.f[6];
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[12] = LD32(c->r[13] + 28u);
    c->v.s[20] = LD32(c->r[13] + 56u);
    c->v.s[16] = LD32(c->r[13] + 60u);
    c->v.f[9] = c->v.f[8] * c->v.f[5];
    c->v.f[8] = c->v.f[18] - c->v.f[2];
    c->v.s[18] = LD32(c->r[13] + 52u);
    c->v.s[7] = LD32(c->r[13] + 24u);
    c->v.s[11] = LD32(c->r[13] + 20u);
    c->v.f[10] = c->v.f[10] * c->v.f[5];
    c->v.f[4] = c->v.f[22] - c->v.f[4];
    c->v.f[31] = c->v.f[12] - c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    ST32(c->r[13] + 24u, c->v.s[10]);
    c->v.f[12] = c->v.f[11] - c->v.f[2];
    c->v.f[6] = c->v.f[7] - c->v.f[6];
    ST32(c->r[13] + 44u, c->v.s[14]);
    ST32(c->r[13] + 40u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[1]);
    ST32(c->r[13] + 28u, c->v.s[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    ST32(c->r[13] + 48u, c->v.s[12]);
    ST32(c->r[13] + 32u, c->v.s[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d2354; }
    c->v.s[17] = 0xff7fffffu;
    goto L_9d2428;
L_9d2290:;
    c->r[2] = c->r[13] + 0x10cu;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x9d22a0u; f_a0acdc(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d2508; }
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[6] + 20u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.s[16] = LD32(c->r[13] + 268u);
    c->v.f[18] = c->v.f[8] - c->v.f[0];
    c->v.f[22] = c->v.f[6] - c->v.f[4];
    c->v.f[20] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d2300; }
    c->r[14] = 0x9d22fcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d2300:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xd0u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->v.f[10] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[13] + 208u, c->v.s[2]);
    ST32(c->r[13] + 212u, c->v.s[4]);
    ST32(c->r[13] + 216u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
L_9d2344:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x9d2350u; f_9cf934(c);
    goto L_9d28e0;
L_9d2354:;
    c->v.f[0] = c->v.f[30] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[16]);
    c->v.s[2] = 0x38d1b717u;
    c->v.s[22] = c->v.s[5];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[18]);
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d2384; }
    c->v.s[18] = c->v.s[18] ^ 0x80000000u;
    c->v.s[20] = c->v.s[20] ^ 0x80000000u;
    c->v.s[16] = c->v.s[16] ^ 0x80000000u;
L_9d2384:;
    c->v.f[2] = c->v.f[4] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[16]);
    c->v.f[0] = fabsf(c->v.f[18]);
    c->v.f[4] = c->v.f[14] * c->v.f[20];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[16]);
    c->v.f[6] = fabsf(c->v.f[20]);
    c->r[7] = c->r[13] + 0x100u;
    c->r[0] = c->r[13] + 0x108u;
    c->v.s[17] = c->v.s[9];
    c->r[1] = c->r[7] + 0x7u;
    c->v.f[3] = c->v.f[9] * c->v.f[0];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[18]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[18]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    vfp_mrs_flags(c);
    c->v.s[1] = COND_GT ? c->v.s[4] : c->v.s[2];
    c->v.s[2] = c->v.s[3] ^ 0x80000000u;
    c->r[14] = 0x9d23dcu; f_a3fde4(c);
    c->v.s[9] = c->v.s[17];
    c->v.s[17] = 0xff7fffffu;
    c->v.s[0] = LD32(c->r[13] + 264u);
    c->v.s[5] = c->v.s[22];
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9d2428; }
    { uint32_t ea = c->r[13] + 0x107u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_9d2424; }
    c->r[0] = 0x106e9ecu;
    { uint32_t ea = 0x9d2410u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.f[18] = c->v.f[18] * c->v.f[6];
    c->v.f[20] = c->v.f[20] * c->v.f[4];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
L_9d2424:;
    c->v.s[17] = c->v.s[0];
L_9d2428:;
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[22] = c->v.f[31] * c->v.f[5];
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2534; }
    c->v.f[0] = c->v.f[30] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[27]);
    c->v.s[2] = 0x38d1b717u;
    c->v.s[8] = LD32(c->r[13] + 28u);
    c->v.s[10] = LD32(c->r[13] + 48u);
    c->v.s[6] = LD32(c->r[13] + 44u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[29]);
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[0] = LD32(c->r[13] + 36u);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d2480; }
    c->v.s[29] = c->v.s[29] ^ 0x80000000u;
    c->v.s[25] = c->v.s[25] ^ 0x80000000u;
    c->v.s[27] = c->v.s[27] ^ 0x80000000u;
L_9d2480:;
    c->v.s[2] = LD32(c->r[13] + 32u);
    c->v.s[12] = LD32(c->r[13] + 40u);
    c->v.f[4] = c->v.f[0] * c->v.f[27];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[25]);
    c->v.f[0] = fabsf(c->v.f[29]);
    c->v.f[6] = fabsf(c->v.f[27]);
    c->r[7] = c->r[13] + 0x100u;
    c->r[0] = c->r[13] + 0x108u;
    c->r[1] = c->r[7] + 0x7u;
    c->v.f[3] = c->v.f[9] * c->v.f[0];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[29]);
    c->v.f[2] = c->v.f[2] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[25]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[29]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    vfp_mrs_flags(c);
    c->v.s[1] = COND_GT ? c->v.s[4] : c->v.s[2];
    c->v.s[2] = c->v.s[3] ^ 0x80000000u;
    c->r[14] = 0x9d24dcu; f_a3fde4(c);
    c->v.s[0] = LD32(c->r[13] + 264u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9d2534; }
    { uint32_t ea = c->r[13] + 0x107u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9d2510; }
    c->v.s[16] = c->v.s[27];
    c->v.s[20] = c->v.s[25];
    c->v.s[18] = c->v.s[29];
    goto L_9d2530;
L_9d2508:;
    c->r[0] = 0x0u;
    goto L_9d28e0;
L_9d2510:;
    c->r[0] = 0x106e8e0u;
    { uint32_t ea = 0x9d251cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.f[18] = c->v.f[29] * c->v.f[6];
    c->v.f[20] = c->v.f[25] * c->v.f[4];
    c->v.f[16] = c->v.f[27] * c->v.f[2];
L_9d2530:;
    c->v.s[17] = c->v.s[0];
L_9d2534:;
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2640; }
    c->v.f[0] = c->v.f[30] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[21]);
    c->v.s[2] = 0x38d1b717u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[23]);
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d2578; }
    c->v.s[23] = c->v.s[23] ^ 0x80000000u;
    c->v.s[19] = c->v.s[19] ^ 0x80000000u;
    c->v.s[21] = c->v.s[21] ^ 0x80000000u;
L_9d2578:;
    c->v.s[2] = LD32(c->r[13] + 32u);
    c->v.s[0] = LD32(c->r[13] + 36u);
    c->v.s[6] = LD32(c->r[13] + 44u);
    c->v.s[8] = LD32(c->r[13] + 40u);
    c->v.s[24] = LD32(c->r[13] + 28u);
    c->v.s[10] = LD32(c->r[13] + 48u);
    c->r[7] = c->r[13] + 0x100u;
    c->r[0] = c->r[13] + 0x108u;
    c->r[1] = c->r[7] + 0x7u;
    c->v.f[4] = c->v.f[0] * c->v.f[21];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[19]);
    c->v.f[0] = fabsf(c->v.f[19]);
    c->v.f[2] = c->v.f[2] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[19]);
    c->v.s[8] = LD32(c->r[13] + 24u);
    c->v.f[6] = fabsf(c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[23]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[23]);
    c->v.f[3] = c->v.f[8] * c->v.f[0];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[22] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    vfp_mrs_flags(c);
    c->v.s[1] = COND_GT ? c->v.s[4] : c->v.s[2];
    c->v.s[2] = c->v.s[3] ^ 0x80000000u;
    c->r[14] = 0x9d25e8u; f_a3fde4(c);
    c->v.s[0] = LD32(c->r[13] + 264u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_9d2640; }
    { uint32_t ea = c->r[13] + 0x107u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9d261c; }
    c->v.s[16] = c->v.s[21];
    c->v.s[20] = c->v.s[19];
    c->v.s[18] = c->v.s[23];
    goto L_9d263c;
L_9d261c:;
    c->r[0] = 0x106e7d4u;
    { uint32_t ea = 0x9d2628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.f[18] = c->v.f[23] * c->v.f[6];
    c->v.f[20] = c->v.f[19] * c->v.f[4];
    c->v.f[16] = c->v.f[21] * c->v.f[2];
L_9d263c:;
    c->v.s[17] = c->v.s[0];
L_9d2640:;
    c->r[8] = 0xffffu;
    c->r[7] = 0x0u;
    c->r[0] = c->r[6] + 0x10u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[0];
    c->r[2] = c->r[0];
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST8(ea, c->r[7]); }
    c->v.s[4] = LD32(c->r[6] + 24u);
    c->v.s[8] = LD32(c->r[6] + 8u);
    c->v.s[2] = LD32(c->r[6] + 20u);
    c->v.s[6] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6] + 16u);
    c->v.s[10] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    if (COND_MI) { c->r[1] = c->r[6]; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    if (COND_MI) { c->r[2] = c->r[6]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[3] = c->r[6]; }
    vfp_cmp_f(c, c->v.f[8], c->v.f[4]);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[3] = 0x0u;
    if (COND_GT) { c->r[1] = c->r[6]; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    if (COND_GT) { c->r[2] = c->r[6]; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[6]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0xd0u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[14] = 0x9d2730u; f_9d290c(c);
    c->v.s[0] = LD32(c->r[13] + 240u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2750; }
    c->v.s[16] = LD32(c->r[13] + 224u);
    c->v.s[20] = LD32(c->r[13] + 228u);
    c->v.s[18] = LD32(c->r[13] + 232u);
    c->v.s[17] = c->v.s[0];
L_9d2750:;
    c->v.s[0] = 0x3f8ccccdu;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 16u);
    c->v.s[10] = LD32(c->r[6] + 20u);
    c->v.s[12] = LD32(c->r[6] + 24u);
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0x8cu;
    c->r[0] = c->r[5];
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.f[14] = c->v.f[16] * c->v.f[0];
    c->v.f[1] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = c->v.f[6] + c->v.f[14];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[2] = c->v.f[1] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    ST32(c->r[13] + 144u, c->v.s[6]);
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    c->v.f[2] = c->v.f[14] + c->v.f[8];
    c->v.f[4] = c->v.f[1] + c->v.f[10];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 160u, c->v.s[2]);
    ST32(c->r[13] + 164u, c->v.s[4]);
    ST32(c->r[13] + 168u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    c->r[14] = 0x9d27c4u; f_a0acdc(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d28dc; }
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.s[22] = c->v.s[18];
    c->v.s[18] = c->v.s[20];
    c->v.s[20] = c->v.s[16];
    c->v.s[16] = LD32(c->r[13] + 140u);
    c->v.f[24] = c->v.f[8] - c->v.f[2];
    c->v.f[28] = c->v.f[6] - c->v.f[0];
    c->v.f[26] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d2830; }
    c->r[14] = 0x9d282cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d2830:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 148u);
    c->v.s[6] = LD32(c->r[13] + 152u);
    c->r[6] = 0x0u;
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[13] + 0x40u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x68u; ST8(ea, c->r[6]); }
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 144u);
    c->v.f[8] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[13] + 112u, c->v.s[2]);
    ST32(c->r[13] + 116u, c->v.s[4]);
    ST32(c->r[13] + 120u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x9d2894u; f_9cf934(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[20] ^ 0x80000000u;
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 16u, c->v.s[0]);
    c->v.s[0] = c->v.s[22] ^ 0x80000000u;
    c->r[0] = 0x1u;
    ST32(c->r[4] + 20u, c->v.s[2]);
    ST32(c->r[4] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 32u, c->v.s[17]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d28dc:;
    c->r[0] = 0x1u;
L_9d28e0:;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
