#include "cpu.h"
#include "neon_rt.h"
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9bb3ec(Cpu *c);
void f_9bb7b8(Cpu *c);
void f_a296a4(Cpu *c);
void f_a2a440(Cpu *c);
void f_a38f94(Cpu *c);
void f_a394d0(Cpu *c);
void f_a39ee4(Cpu *c);
void f_a39f04(Cpu *c);
void f_a39ff8(Cpu *c);
void f_a3a014(Cpu *c);
void f_a3a01c(Cpu *c);
void f_a3e1c8(Cpu *c);
void f_a3e264(Cpu *c);
void f_a3e720(Cpu *c);
void f_a3e7d0(Cpu *c);
void f_a3e7ec(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efe30(Cpu *c);
void f_15effa4(Cpu *c);
void f_a37b4c(Cpu *restrict c) {
    FN_ENTER(0xa37b4cu);
L_a37b4c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[13] = c->r[13] - 0x2800u;
    c->r[4] = c->r[13] + 0x2000u;
    c->r[11] = c->r[0];
    c->r[2] = 0x0u;
    c->r[9] = c->r[3];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x82cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x2400u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[4] + 0x3f8u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[14] = 0xa37b84u; f_a39ff8(c);
    c->r[0] = 0x10018b4u;
    { uint32_t ea = c->r[11] + 0x104u; ST32(ea, c->r[7]); }
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa37b98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 3);
    c->pc = c->r[3]; c->r[14] = 0xa37bacu; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 3);
    c->r[14] = 0xa37bbcu; f_15efd7c(c);
    c->r[10] = c->r[13] + 0x8u;
    c->r[0] = c->r[10];
    c->r[14] = 0xa37bc8u; f_a39ee4(c);
    c->r[0] = 0x1009548u;
    c->r[14] = c->r[13] + 0x2000u;
    c->r[6] = c->r[10] + 0xcu;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[14] + 0x828u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0xa37be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x27e4u;
    c->r[5] = c->r[10] + c->r[0];
L_a37bf0:;
    c->r[0] = c->r[6] + 0x4u;
    c->r[14] = 0xa37bf8u; f_9bb3ec(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x10u; ST8(ea, c->r[4]); }
    c->r[6] = c->r[6] + 0x14u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_a37bf0; }
    c->r[4] = 0x27e4u;
    c->r[0] = 0x27e8u;
    c->r[1] = ~0x0u;
    c->r[6] = c->r[13] + 0x2400u;
    { uint32_t ea = c->r[10] + c->r[4]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x27ecu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[6] + 0x3f8u;
    c->r[14] = 0xa37c40u; f_a3a01c(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x10017f4u;
    { uint32_t ea = c->r[11] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xa37c58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa37c64u; rt_dispatch(c);
    c->r[0] = 0x10094b4u;
    c->r[4] = 0xd828u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0xa37c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x27d4u;
    c->r[0] = c->r[10] + c->r[0];
L_a37c84:;
    c->r[14] = 0xa37c88u; f_9bb7b8(c);
    c->r[4] = f_adds(c, c->r[4], 0x14u);
    c->r[0] = c->r[0] - 0x14u;
    if (COND_NE) { goto L_a37c84; }
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0xa37c9cu; f_a39f04(c);
    c->r[4] = c->r[13] + 0x2400u;
    c->r[0] = c->r[4] + 0x3f8u;
    c->r[14] = 0xa37ca8u; f_a3a014(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[5]; }
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x4u;
    c->r[13] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a37cd0(Cpu *restrict c) {
    FN_ENTER(0xa37cd0u);
L_a37cd0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1009434u;
    c->r[7] = 0xd828u;
    c->r[1] = 0x27d4u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[4];
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0xa37cf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + c->r[1]; }
L_a37cfc:;
    c->r[0] = c->r[5] + c->r[6];
    c->r[14] = 0xa37d04u; f_9bb7b8(c);
    c->r[6] = c->r[6] - 0x14u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_a37cfc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a39f04(c);
}
void f_a37d20(Cpu *restrict c) {
    FN_ENTER(0xa37d20u);
L_a37d20:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10093ecu;
    c->r[5] = 0xd828u;
    c->r[2] = 0x27d4u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0xa37d40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
L_a37d48:;
    c->r[14] = 0xa37d4cu; f_9bb7b8(c);
    c->r[5] = f_adds(c, c->r[5], 0x14u);
    c->r[0] = c->r[0] - 0x14u;
    if (COND_NE) { goto L_a37d48; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa37d60u; f_a39f04(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a37d6c(Cpu *restrict c) {
    FN_ENTER(0xa37d6cu);
L_a37d6c:;
    c->v.s[2] = LD32(c->r[0] + 28u);
    c->v.s[6] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 28u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_a37dd8; }
    { uint32_t ea = c->r[0] + 0x22u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a37dc4; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x23u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
L_a37dc4:;
    c->v.s[6] = 0xbf800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    ST32(c->r[0] + 28u, c->v.s[2]);
L_a37dd8:;
    c->v.s[2] = 0x40c90fdbu;
    c->v.s[4] = 0x4422f983u;
    c->v.s[6] = 0x4b400000u;
    c->r[2] = 0x100149cu;
    { uint32_t ea = 0xa37df0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.s[0] = LD32(c->r[0] + 12u);
    c->r[1] = c->v.s[6];
    c->r[1] = c->r[1] & 0xfffu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0] + 8u, c->v.s[0]);
    return;
}
void f_a37e30(Cpu *restrict c) {
    FN_ENTER(0xa37e30u);
L_a37e30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10092f0u;
    { uint32_t ea = 0xa37e40u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa37e44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[4]; c->r[14] = 0xa37e5cu; rt_dispatch(c);
    c->r[1] = 0x10092ccu;
    { uint32_t ea = 0xa37e68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a37e78(Cpu *restrict c) {
    FN_ENTER(0xa37e78u);
L_a37e78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x10092a0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xa37e90u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa37e94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a37eb4(Cpu *restrict c) {
    FN_ENTER(0xa37eb4u);
L_a37eb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1009268u;
    { uint32_t ea = 0xa37ec8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa37ec8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a37ee0(Cpu *restrict c) {
    FN_ENTER(0xa37ee0u);
L_a37ee0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x400u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_a37f5c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa37f08u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a37f30; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a37f30:;
    c->r[6] = c->r[13];
L_a37f34:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x400u);
    c->r[2] = c->r[4];
    c->r[1] = c->r[6];
    if (COND_CS) { c->r[2] = 0x400u; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa37f54u; rt_dispatch(c);
    c->r[4] = f_subs(c, c->r[4], 0x400u);
    if (COND_GT) { goto L_a37f34; }
L_a37f5c:;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a37f64(Cpu *restrict c) {
    FN_ENTER(0xa37f64u);
L_a37f64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10091c4u;
    { uint32_t ea = 0xa37f74u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa37f78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0xa37f90u; rt_dispatch(c);
    c->r[1] = 0x100919cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xa37fa0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a37fb0(Cpu *restrict c) {
    FN_ENTER(0xa37fb0u);
L_a37fb0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1009170u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xa37fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa37fccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a37fec(Cpu *restrict c) {
    FN_ENTER(0xa37fecu);
L_a37fec:;
    c->r[1] = 0x1009140u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xa37ffcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_a38008(Cpu *restrict c) {
    FN_ENTER(0xa38008u);
L_a38008:;
    c->r[2] = 0x1009128u;
    { uint32_t ea = 0xa38014u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_a38024(Cpu *restrict c) {
    FN_ENTER(0xa38024u);
L_a38024:;
    return;
}
void f_a38028(Cpu *restrict c) {
    FN_ENTER(0xa38028u);
L_a38028:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10090fcu;
    { uint32_t ea = 0xa3803cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa3803cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38054(Cpu *restrict c) {
    FN_ENTER(0xa38054u);
L_a38054:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_a3805c(Cpu *restrict c) {
    FN_ENTER(0xa3805cu);
L_a3805c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38078(Cpu *restrict c) {
    FN_ENTER(0xa38078u);
L_a38078:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38094(Cpu *restrict c) {
    FN_ENTER(0xa38094u);
L_a38094:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a380ac(Cpu *restrict c) {
    FN_ENTER(0xa380acu);
L_a380ac:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a380c8(Cpu *restrict c) {
    FN_ENTER(0xa380c8u);
L_a380c8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a380e4(Cpu *restrict c) {
    FN_ENTER(0xa380e4u);
L_a380e4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38100(Cpu *restrict c) {
    FN_ENTER(0xa38100u);
L_a38100:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38144; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa38120u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_a38144:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a3814c(Cpu *restrict c) {
    FN_ENTER(0xa3814cu);
L_a3814c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38168(Cpu *restrict c) {
    FN_ENTER(0xa38168u);
L_a38168:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa38188u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38194(Cpu *restrict c) {
    FN_ENTER(0xa38194u);
L_a38194:;
    return;
}
void f_a38198(Cpu *restrict c) {
    FN_ENTER(0xa38198u);
L_a38198:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a381e8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa381c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a381e8; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a381e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a381f0(Cpu *restrict c) {
    FN_ENTER(0xa381f0u);
L_a381f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38240; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa3821cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a38240; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a38240:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a38248(Cpu *restrict c) {
    FN_ENTER(0xa38248u);
L_a38248:;
    return;
}
void f_a3824c(Cpu *restrict c) {
    FN_ENTER(0xa3824cu);
L_a3824c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38268(Cpu *restrict c) {
    FN_ENTER(0xa38268u);
L_a38268:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3829c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_a382a4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_a382b4; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a3829c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a3829c:;
    c->r[0] = 0x0u;
    return;
L_a382a4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x3u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a382b4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a382c4(Cpu *restrict c) {
    FN_ENTER(0xa382c4u);
L_a382c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1008e6cu;
    { uint32_t ea = 0xa382d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa382d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0xa382f0u; rt_dispatch(c);
    c->r[1] = 0x1008e48u;
    { uint32_t ea = 0xa382fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a3830c(Cpu *restrict c) {
    FN_ENTER(0xa3830cu);
L_a3830c:;
    return;
}
void f_a38310(Cpu *restrict c) {
    FN_ENTER(0xa38310u);
L_a38310:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1008e1cu;
    { uint32_t ea = 0xa38324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa38324u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a3833c(Cpu *restrict c) {
    FN_ENTER(0xa3833cu);
L_a3833c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    return;
}
void f_a3834c(Cpu *restrict c) {
    FN_ENTER(0xa3834cu);
L_a3834c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_a38360(Cpu *restrict c) {
    FN_ENTER(0xa38360u);
L_a38360:;
    c->r[0] = 0x1u;
    return;
}
void f_a38368(Cpu *restrict c) {
    FN_ENTER(0xa38368u);
L_a38368:;
    c->r[0] = 0x1008dd4u;
    { uint32_t ea = 0xa38374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38384(Cpu *restrict c) {
    FN_ENTER(0xa38384u);
L_a38384:;
    return;
}
void f_a38388(Cpu *restrict c) {
    FN_ENTER(0xa38388u);
L_a38388:;
    return;
}
void f_a3838c(Cpu *restrict c) {
    FN_ENTER(0xa3838cu);
L_a3838c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa383a4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a383d0; }
    c->r[0] = 0x1008d8cu;
    c->r[2] = c->r[4];
    { uint32_t ea = 0xa383bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a383d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a383dc(Cpu *restrict c) {
    FN_ENTER(0xa383dcu);
L_a383dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa383f4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a3844c; }
    c->r[0] = 0x1008d3cu;
    c->r[2] = c->r[4];
    { uint32_t ea = 0xa3840cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa3841cu; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa38438u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xa38444u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a3844c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a38458(Cpu *restrict c) {
    FN_ENTER(0xa38458u);
L_a38458:;
    return;
}
void f_a3845c(Cpu *restrict c) {
    FN_ENTER(0xa3845cu);
L_a3845c:;
    c->r[0] = 0x1008ce0u;
    { uint32_t ea = 0xa38468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38478(Cpu *restrict c) {
    FN_ENTER(0xa38478u);
L_a38478:;
    c->r[0] = 0x1008cc4u;
    { uint32_t ea = 0xa38484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38494(Cpu *restrict c) {
    FN_ENTER(0xa38494u);
L_a38494:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1008ca8u;
    { uint32_t ea = 0xa384a4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa384a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0xa384c0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x1008c74u;
    c->r[1] = 0x0u;
    c->r[2] = 0x6u;
    c->r[3] = 0x1000u;
    { uint32_t ea = 0xa384dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1000f5cu;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xa384f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1000u;
    c->pc = c->r[3]; c->r[14] = 0xa38514u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffeu;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38538(Cpu *restrict c) {
    FN_ENTER(0xa38538u);
L_a38538:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1008bfcu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xa38550u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa38554u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38574(Cpu *restrict c) {
    FN_ENTER(0xa38574u);
L_a38574:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1008bc4u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = 0xa3858cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_a385a8; }
    c->r[0] = 0x1000ea8u;
    { uint32_t ea = 0xa385a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[3]); }
L_a385a8:;
    c->r[0] = 0x0u;
    c->r[12] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[3];
    c->pc = c->r[12]; c->r[14] = 0xa385c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffeu;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a385e8(Cpu *restrict c) {
    FN_ENTER(0xa385e8u);
L_a385e8:;
    c->r[12] = 0x1008b58u;
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = 0xa385f8u + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[12] = c->r[12] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    c->r[12] = c->r[3];
    c->r[12] = c->r[12] & 0xfffffffbu;
    if (COND_EQ) { c->r[12] = c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[12] = c->r[3]; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_a38634(Cpu *restrict c) {
    FN_ENTER(0xa38634u);
L_a38634:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1008b08u;
    { uint32_t ea = 0xa38648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a3866c; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3866cu; rt_dispatch(c);
L_a3866c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38688(Cpu *restrict c) {
    FN_ENTER(0xa38688u);
L_a38688:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1008ab4u;
    { uint32_t ea = 0xa3869cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a386c0; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa386c0u; rt_dispatch(c);
L_a386c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1008a70u;
    { uint32_t ea = 0xa386dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa386dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a386f8(Cpu *restrict c) {
    FN_ENTER(0xa386f8u);
L_a386f8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_a38714; }
    c->r[0] = 0x0u;
    return;
L_a38714:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    return;
}
void f_a38728(Cpu *restrict c) {
    FN_ENTER(0xa38728u);
L_a38728:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x6u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { return; }
    c->r[0] = 0x0u;
    return;
}
void f_a38748(Cpu *restrict c) {
    FN_ENTER(0xa38748u);
L_a38748:;
    c->r[0] = 0x1u;
    return;
}
void f_a38750(Cpu *restrict c) {
    FN_ENTER(0xa38750u);
L_a38750:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a38758(Cpu *restrict c) {
    FN_ENTER(0xa38758u);
L_a38758:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a38780; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38780u; rt_dispatch(c);
L_a38780:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38794(Cpu *restrict c) {
    FN_ENTER(0xa38794u);
L_a38794:;
    return;
}
void f_a38798(Cpu *restrict c) {
    FN_ENTER(0xa38798u);
L_a38798:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa387b8u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = c->r[1] + c->r[4];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { c->r[4] = c->r[2] - c->r[1]; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0xa387e8u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a387fc(Cpu *restrict c) {
    FN_ENTER(0xa387fcu);
L_a387fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa3881cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = c->r[1] + c->r[4];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { c->r[4] = c->r[2] - c->r[1]; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0xa3884cu; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a38860(Cpu *restrict c) {
    FN_ENTER(0xa38860u);
L_a38860:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[8] = c->r[1];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa38880u; rt_dispatch(c);
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a38964; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a388a4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a38920;
L_a388a4:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_HI) { goto L_a388cc; }
    goto L_a38920;
L_a388b8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_a38920; }
L_a388cc:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (c->r[1] << 1);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa388e8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a388b8; }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[6];
    c->r[14] = 0xa38900u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38918u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    goto L_a388b8;
L_a38920:;
    c->r[2] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_a38940; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_a38940:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[8];
    c->r[14] = 0xa38954u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[5];
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_a38964:;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a3896c(Cpu *restrict c) {
    FN_ENTER(0xa3896cu);
L_a3896c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a389dc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_a389dc; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa389a8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[6];
    c->r[14] = 0xa389c0u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa389d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
L_a389dc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a389e0(Cpu *restrict c) {
    FN_ENTER(0xa389e0u);
L_a389e0:;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_a38a18; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_a38a28; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a38a40; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { c->r[1] = c->r[2]; }
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3];
    return;
L_a38a18:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[3] = 0x0u; }
    goto L_a38a3c;
L_a38a28:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { c->r[3] = c->r[2]; }
L_a38a3c:;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
L_a38a40:;
    c->r[0] = c->r[3];
    return;
}
void f_a38a48(Cpu *restrict c) {
    FN_ENTER(0xa38a48u);
L_a38a48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10086fcu;
    { uint32_t ea = 0xa38a58u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa38a5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[4]; c->r[14] = 0xa38a74u; rt_dispatch(c);
    c->r[1] = 0x10086d8u;
    { uint32_t ea = 0xa38a80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38a98(Cpu *restrict c) {
    FN_ENTER(0xa38a98u);
L_a38a98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10086acu;
    { uint32_t ea = 0xa38aacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xa38ab8u; f_a38f94(c);
    c->r[0] = 0x1000984u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa38ac8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38ad4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38aec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa38aecu; rt_dispatch(c);
L_a38aec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38b4c; }
L_a38b0c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a38b0c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a38b44; }
    c->r[0] = 0x1000050u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa38b38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38b44u; rt_dispatch(c);
L_a38b44:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_a38b4c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38b60(Cpu *restrict c) {
    FN_ENTER(0xa38b60u);
L_a38b60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x10085e4u;
    { uint32_t ea = 0xa38b74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xa38b80u; f_a38f94(c);
    c->r[0] = 0x10008bcu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa38b90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38b9cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38bb4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa38bb4u; rt_dispatch(c);
L_a38bb4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38c14; }
L_a38bd4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a38bd4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a38c0c; }
    c->r[0] = 0xffff88u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa38c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38c0cu; rt_dispatch(c);
L_a38c0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_a38c14:;
    c->r[0] = 0x1008534u;
    { uint32_t ea = 0xa38c20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa38c20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38c44(Cpu *restrict c) {
    FN_ENTER(0xa38c44u);
L_a38c44:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38c60(Cpu *restrict c) {
    FN_ENTER(0xa38c60u);
L_a38c60:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38c7c(Cpu *restrict c) {
    FN_ENTER(0xa38c7cu);
L_a38c7c:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a38c98(Cpu *restrict c) {
    FN_ENTER(0xa38c98u);
L_a38c98:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a38ca0(Cpu *restrict c) {
    FN_ENTER(0xa38ca0u);
L_a38ca0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa38cb8u; rt_dispatch(c);
    c->r[0] = 0x1000784u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa38cc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa38cd4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a38cec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa38cecu; rt_dispatch(c);
L_a38cec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a38d08(Cpu *restrict c) {
    FN_ENTER(0xa38d08u);
L_a38d08:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa38d28u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a38e1c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a38e1c; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[4] = c->r[2] + c->r[1];
    if (COND_HI) { c->r[8] = c->r[7] - c->r[0]; }
    c->r[7] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_CS) { goto L_a38d80; }
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a38de8; }
    goto L_a38e18;
L_a38d80:;
    c->r[7] = c->r[8];
    goto L_a38d8c;
L_a38d88:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
L_a38d8c:;
    c->r[0] = c->r[0] - c->r[1];
    c->r[4] = c->r[2] - c->r[0];
    c->r[1] = c->r[3] + c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0xa38da4u; f_15efe30(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa38dbcu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] - c->r[4];
    c->r[6] = c->r[6] + c->r[4];
    c->r[3] = c->r[0] + c->r[7];
    c->r[4] = c->r[2] + c->r[1];
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CS) { goto L_a38d88; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a38e18; }
L_a38de8:;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa38e00u; f_15efe30(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa38e18u; rt_dispatch(c);
L_a38e18:;
    c->r[0] = c->r[8];
L_a38e1c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a38e20(Cpu *restrict c) {
    FN_ENTER(0xa38e20u);
L_a38e20:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa38e40u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a38f8c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a38e98; }
    c->r[0] = 0x10005e0u;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa38e6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa38e7cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa38e98u; rt_dispatch(c);
L_a38e98:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + c->r[8];
    c->r[7] = c->r[2] + c->r[1];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CS) { goto L_a38ec4; }
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a38f40; }
    goto L_a38f88;
L_a38ec4:;
    c->r[7] = c->r[8];
L_a38ec8:;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2] - c->r[0];
    c->r[2] = c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[6];
    c->r[14] = 0xa38ee4u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa38f14u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] - c->r[4];
    c->r[6] = c->r[6] + c->r[4];
    c->r[3] = c->r[0] + c->r[7];
    c->r[4] = c->r[2] + c->r[1];
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CS) { goto L_a38ec8; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a38f88; }
L_a38f40:;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[6];
    c->r[14] = 0xa38f58u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa38f88u; rt_dispatch(c);
L_a38f88:;
    c->r[0] = c->r[8];
L_a38f8c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a38f94(Cpu *restrict c) {
    FN_ENTER(0xa38f94u);
L_a38f94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa38facu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39040; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39040; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a39010; }
    c->r[0] = 0x438u;
    c->r[1] = 0x10u;
    c->r[14] = 0xa38fd8u; f_a296a4(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xd17d86u;
    c->r[1] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[1] = 0xa38ff0u + c->r[2]; }
    c->r[2] = 0x15u;
    c->r[14] = 0xa38ff4u; f_a2a440(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39004u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a39010:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; c->r[14] = 0xa39024u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a39040:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a39048(Cpu *restrict c) {
    FN_ENTER(0xa39048u);
L_a39048:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa39068u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a391cc; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a390a0; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_EQ) { goto L_a390a8; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_NE) { goto L_a390c4; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] - c->r[5];
    goto L_a390b0;
L_a390a0:;
    c->r[7] = c->r[5];
    goto L_a390b0;
L_a390a8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + c->r[5];
L_a390b0:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LS) { goto L_a390c4; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a390c4:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_a390e0; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_a391c4; }
L_a390e0:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a3913c; }
    c->r[0] = 0x438u;
    c->r[1] = 0x10u;
    c->r[14] = 0xa390f8u; f_a296a4(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xd17c66u;
    c->r[1] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[1] = 0xa39110u + c->r[2]; }
    c->r[2] = 0x15u;
    c->r[14] = 0xa39114u; f_a2a440(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39124u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a391cc; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a3913c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; c->r[14] = 0xa3914cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa39164u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = udiv32(c->r[7], c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; c->r[14] = 0xa39188u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39198u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - c->r[2];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_CC) { c->r[2] = c->r[6]; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0xa391c4u; rt_dispatch(c);
L_a391c4:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
L_a391cc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a391d4(Cpu *restrict c) {
    FN_ENTER(0xa391d4u);
L_a391d4:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_a391e8(Cpu *restrict c) {
    FN_ENTER(0xa391e8u);
L_a391e8:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a391f0(Cpu *restrict c) {
    FN_ENTER(0xa391f0u);
L_a391f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1007f5cu;
    { uint32_t ea = 0xa39200u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa39204u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3e8u;
    c->pc = c->r[4]; c->r[14] = 0xa3921cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x1007f34u;
    { uint32_t ea = 0xa3922cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x8u; }
    c->r[14] = 0xa39238u; f_a3e1c8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a39248(Cpu *restrict c) {
    FN_ENTER(0xa39248u);
L_a39248:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1007f04u;
    { uint32_t ea = 0xa3925cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39284; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa39274u; f_a394d0(c);
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39284u; rt_dispatch(c);
L_a39284:;
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a392b0; }
    c->r[0] = 0x10001b0u;
    { uint32_t ea = 0xa3929cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa392a8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
L_a392b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0xa392c8u; f_a3e264(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a392d8(Cpu *restrict c) {
    FN_ENTER(0xa392d8u);
L_a392d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1007e74u;
    { uint32_t ea = 0xa392ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39314; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa39304u; f_a394d0(c);
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39314u; rt_dispatch(c);
L_a39314:;
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a39340; }
    c->r[0] = 0x1000120u;
    { uint32_t ea = 0xa3932cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa39338u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
L_a39340:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0xa39358u; f_a3e264(c);
    c->r[0] = 0x1007df8u;
    { uint32_t ea = 0xa39364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa39364u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a39384(Cpu *restrict c) {
    FN_ENTER(0xa39384u);
L_a39384:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_a393a0; }
    c->r[0] = 0x0u;
    return;
L_a393a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa393b0u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_EQ) { c->r[0] = 0x0u; }
    return;
}
void f_a393c8(Cpu *restrict c) {
    FN_ENTER(0xa393c8u);
L_a393c8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_a393e4; }
    c->r[0] = 0x0u;
    return;
L_a393e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa393f4u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_EQ) { c->r[0] = 0x0u; }
    return;
}
void f_a3940c(Cpu *restrict c) {
    FN_ENTER(0xa3940cu);
L_a3940c:;
    { uint32_t ea = c->r[0] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39440; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39428u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_EQ) { c->r[0] = 0x0u; }
    return;
L_a39440:;
    c->r[0] = 0x0u;
    return;
}
void f_a39448(Cpu *restrict c) {
    FN_ENTER(0xa39448u);
L_a39448:;
    c->r[0] = 0x0u;
    return;
}
void f_a39450(Cpu *restrict c) {
    FN_ENTER(0xa39450u);
L_a39450:;
    { uint32_t ea = c->r[0] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39458(Cpu *restrict c) {
    FN_ENTER(0xa39458u);
L_a39458:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3948c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa3947cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa3948cu; rt_dispatch(c);
L_a3948c:;
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a394b8; }
    c->r[0] = 0xffffa8u;
    { uint32_t ea = 0xa394a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa394b0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
L_a394b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a394d0(Cpu *restrict c) {
    FN_ENTER(0xa394d0u);
L_a394d0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa394e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a395b0; }
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_a39550; }
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LS) { c->r[3] = c->r[0] - c->r[1]; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_a39550; }
    c->r[0] = c->r[4] + 0x8u;
    c->r[2] = c->r[1];
    c->r[14] = 0xa39538u; f_a3e7d0(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa39550u; rt_dispatch(c);
L_a39550:;
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a3957c; }
    c->r[0] = 0xfffee4u;
    { uint32_t ea = 0xa39568u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa39574u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
L_a3957c:;
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa3958cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa3959cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x3d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a3e720(c);
L_a395b0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a395b8(Cpu *restrict c) {
    FN_ENTER(0xa395b8u);
L_a395b8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa395d8u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a39748; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a39748; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a39650; }
    c->r[0] = 0xfffe3cu;
    { uint32_t ea = c->r[5] + 0x3e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa39610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa39620u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5] + 0x3dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa3963cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0];
    c->r[0] = c->r[5] + 0x8u;
    c->r[2] = c->r[1];
    c->r[14] = 0xa39650u; f_a3e7ec(c);
L_a39650:;
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x3e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[3], c->r[7]);
    c->r[7] = c->r[2] + c->r[1];
    if (COND_CC) { c->r[8] = c->r[3] - c->r[0]; }
    c->r[3] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CS) { goto L_a3968c; }
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a39720; }
    goto L_a39744;
L_a3968c:;
    c->r[9] = c->r[5] + 0x8u;
    c->r[7] = c->r[8];
L_a39694:;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2] - c->r[0];
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa396b0u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5] + 0x3d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[5] + 0x3e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa396e0u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0];
    c->r[0] = c->r[9];
    c->r[2] = c->r[1];
    c->r[14] = 0xa396f4u; f_a3e7ec(c);
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] - c->r[4];
    c->r[6] = c->r[6] + c->r[4];
    c->r[3] = c->r[0] + c->r[7];
    c->r[4] = c->r[2] + c->r[1];
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CS) { goto L_a39694; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a39744; }
L_a39720:;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa39738u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[5] + 0x3d4u; ST32(ea, c->r[0]); }
L_a39744:;
    c->r[0] = c->r[8];
L_a39748:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a39750(Cpu *restrict c) {
    FN_ENTER(0xa39750u);
L_a39750:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a3975c(Cpu *restrict c) {
    FN_ENTER(0xa3975cu);
L_a3975c:;
    return;
}
void f_a39760(Cpu *restrict c) {
    FN_ENTER(0xa39760u);
L_a39760:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa39784u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a399e0; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a399e0; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a397b8; }
    c->r[11] = c->r[5] + 0x3e4u;
    c->r[8] = c->r[5] + 0x3e0u;
    goto L_a39874;
L_a397b8:;
    c->r[0] = 0xfffc80u;
    c->r[11] = c->r[5];
    { uint32_t ea = c->r[11] + 0x3e4u; uint32_t v = LD32(ea); c->r[11] = ea; c->r[1] = v; }
    { uint32_t ea = 0xa397ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa397dcu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x3dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xa397e8u; f_15efdac(c);
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[8] + 0x3e0u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_a39874; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa3980cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39874; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39824u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39874; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa39844u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[5] + 0x8u;
    c->r[3] = c->r[4];
    c->r[2] = c->r[1];
    c->r[14] = 0xa3985cu; f_a3e7ec(c);
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; c->r[14] = 0xa39874u; rt_dispatch(c);
L_a39874:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[4] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_HI) { goto L_a399a8; }
    c->r[9] = c->r[5] + 0x8u;
L_a39898:;
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[6];
    c->r[14] = 0xa398acu; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[1];
    c->r[14] = 0xa398c0u; f_a3e7d0(c);
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa398d8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5] + 0x3d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa398fcu; f_15efdac(c);
    { uint32_t ea = c->r[5] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] - c->r[4];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_a39988; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39920u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39988; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa39938u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39988; }
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa39958u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[0];
    c->r[0] = c->r[9];
    c->r[3] = c->r[10];
    c->r[2] = c->r[1];
    c->r[14] = 0xa39970u; f_a3e7ec(c);
    { uint32_t ea = c->r[5] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; c->r[14] = 0xa39988u; rt_dispatch(c);
L_a39988:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + c->r[4];
    c->r[0] = c->r[1] - c->r[0];
    c->r[4] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_CS) { goto L_a39898; }
L_a399a8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a399d0; }
    { uint32_t ea = c->r[5] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[6];
    c->r[14] = 0xa399c4u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[5] + 0x3d4u; ST32(ea, c->r[1]); }
L_a399d0:;
    { uint32_t ea = c->r[5] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { { uint32_t ea = c->r[5] + 0x3d8u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a399e0:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a399ec(Cpu *restrict c) {
    FN_ENTER(0xa399ecu);
L_a399ec:;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x3d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { { uint32_t ea = c->r[0] + 0x3d8u; ST32(ea, c->r[2]); } }
    if (COND_HI) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[0] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a39a18(Cpu *restrict c) {
    FN_ENTER(0xa39a18u);
L_a39a18:;
    { uint32_t ea = c->r[0] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39a20(Cpu *restrict c) {
    FN_ENTER(0xa39a20u);
L_a39a20:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa39a40u; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39b2c; }
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39b2c; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_a39a78; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_a39a84; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[5] = c->r[6]; }
    goto L_a39a8c;
L_a39a78:;
    { uint32_t ea = c->r[4] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] - c->r[6];
    goto L_a39a8c;
L_a39a84:;
    { uint32_t ea = c->r[4] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + c->r[6];
L_a39a8c:;
    { uint32_t ea = c->r[4] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { c->r[5] = 0x0u; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_a39ab0; }
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_a39b28; }
L_a39ab0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a39af4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39b04; }
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a39b04; }
    c->r[0] = 0xfff970u;
    { uint32_t ea = 0xa39adcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa39ae8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
    goto L_a39b04;
L_a39af4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa39b04u; rt_dispatch(c);
L_a39b04:;
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = udiv32(c->r[5], c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    c->pc = c->r[3]; c->r[14] = 0xa39b28u; rt_dispatch(c);
L_a39b28:;
    { uint32_t ea = c->r[4] + 0x3d4u; ST32(ea, c->r[5]); }
L_a39b2c:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a39b38(Cpu *restrict c) {
    FN_ENTER(0xa39b38u);
L_a39b38:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39bf4; }
    { uint32_t ea = c->r[4] + 0x3d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[0] + c->r[1];
    c->r[0] = c->r[3] + c->r[2];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CS) { goto L_a39bf0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a39bac; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a39bbc; }
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a39bbc; }
    c->r[0] = 0xfff8b8u;
    { uint32_t ea = 0xa39b94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa39ba0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
    goto L_a39bbc;
L_a39bac:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa39bbcu; rt_dispatch(c);
L_a39bbc:;
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = udiv32(c->r[6], c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[7] = r; }
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa39be4u; rt_dispatch(c);
    c->r[1] = c->r[7] - c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[8]; c->r[14] = 0xa39bf0u; rt_dispatch(c);
L_a39bf0:;
    { uint32_t ea = c->r[4] + 0x3d4u; ST32(ea, c->r[6]); }
L_a39bf4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a39bfc(Cpu *restrict c) {
    FN_ENTER(0xa39bfcu);
L_a39bfc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39c00(Cpu *restrict c) {
    FN_ENTER(0xa39c00u);
L_a39c00:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x100751cu;
    { uint32_t ea = 0xa39c14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa39c14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a39c2c(Cpu *restrict c) {
    FN_ENTER(0xa39c2cu);
L_a39c2c:;
    c->r[0] = 0x10074f8u;
    { uint32_t ea = 0xa39c38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39c3c(Cpu *restrict c) {
    FN_ENTER(0xa39c3cu);
L_a39c3c:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c44(Cpu *restrict c) {
    FN_ENTER(0xa39c44u);
L_a39c44:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c4c(Cpu *restrict c) {
    FN_ENTER(0xa39c4cu);
L_a39c4c:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c54(Cpu *restrict c) {
    FN_ENTER(0xa39c54u);
L_a39c54:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c5c(Cpu *restrict c) {
    FN_ENTER(0xa39c5cu);
L_a39c5c:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c64(Cpu *restrict c) {
    FN_ENTER(0xa39c64u);
L_a39c64:;
    return;
}
void f_a39c68(Cpu *restrict c) {
    FN_ENTER(0xa39c68u);
L_a39c68:;
    return;
}
void f_a39c6c(Cpu *restrict c) {
    FN_ENTER(0xa39c6cu);
L_a39c6c:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c74(Cpu *restrict c) {
    FN_ENTER(0xa39c74u);
L_a39c74:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c7c(Cpu *restrict c) {
    FN_ENTER(0xa39c7cu);
L_a39c7c:;
    return;
}
void f_a39c80(Cpu *restrict c) {
    FN_ENTER(0xa39c80u);
L_a39c80:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c88(Cpu *restrict c) {
    FN_ENTER(0xa39c88u);
L_a39c88:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c90(Cpu *restrict c) {
    FN_ENTER(0xa39c90u);
L_a39c90:;
    return;
}
void f_a39c94(Cpu *restrict c) {
    FN_ENTER(0xa39c94u);
L_a39c94:;
    c->r[0] = 0x0u;
    return;
}
void f_a39c9c(Cpu *restrict c) {
    FN_ENTER(0xa39c9cu);
L_a39c9c:;
    c->r[0] = 0x0u;
    return;
}
void f_a39ca4(Cpu *restrict c) {
    FN_ENTER(0xa39ca4u);
L_a39ca4:;
    c->r[0] = 0x1u;
    return;
}
void f_a39cac(Cpu *restrict c) {
    FN_ENTER(0xa39cacu);
L_a39cac:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39cb0(Cpu *restrict c) {
    FN_ENTER(0xa39cb0u);
L_a39cb0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39cb4(Cpu *restrict c) {
    FN_ENTER(0xa39cb4u);
L_a39cb4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39cb8(Cpu *restrict c) {
    FN_ENTER(0xa39cb8u);
L_a39cb8:;
    c->r[0] = 0x100747cu;
    { uint32_t ea = 0xa39cc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39cc8(Cpu *restrict c) {
    FN_ENTER(0xa39cc8u);
L_a39cc8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39ccc(Cpu *restrict c) {
    FN_ENTER(0xa39cccu);
L_a39ccc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39cd0(Cpu *restrict c) {
    FN_ENTER(0xa39cd0u);
L_a39cd0:;
    c->r[0] = 0x1007480u;
    { uint32_t ea = 0xa39cdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39ce0(Cpu *restrict c) {
    FN_ENTER(0xa39ce0u);
L_a39ce0:;
    c->r[0] = 0x100744cu;
    { uint32_t ea = 0xa39cecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39cf0(Cpu *restrict c) {
    FN_ENTER(0xa39cf0u);
L_a39cf0:;
    c->r[0] = 0x1007450u;
    { uint32_t ea = 0xa39cfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39d00(Cpu *restrict c) {
    FN_ENTER(0xa39d00u);
L_a39d00:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39d08(Cpu *restrict c) {
    FN_ENTER(0xa39d08u);
L_a39d08:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39d10(Cpu *restrict c) {
    FN_ENTER(0xa39d10u);
L_a39d10:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    return;
}
void f_a39d1c(Cpu *restrict c) {
    FN_ENTER(0xa39d1cu);
L_a39d1c:;
    c->r[0] = 0x100742cu;
    { uint32_t ea = 0xa39d28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a39d2c(Cpu *restrict c) {
    FN_ENTER(0xa39d2cu);
L_a39d2c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x10073dcu;
    c->r[5] = 0x0u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa39d54u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xffee08u;
    { uint32_t ea = 0xa39d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd1c265u;
    c->r[1] = 0xa39d64u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xa39d68u; f_9aedcc(c);
    c->r[0] = 0x10073d8u;
    c->r[1] = 0xd344f0u;
    c->r[2] = c->r[4];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa39d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa39d90u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1007398u;
    { uint32_t ea = 0xa39da0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa39da0u; f_9aedcc(c);
    c->r[1] = 0x10073a8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa39dc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x100736cu;
    c->r[1] = 0xd344b5u;
    { uint32_t ea = 0xa39dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa39dd8u + c->r[1];
    c->r[14] = 0xa39dd8u; f_9aedcc(c);
    c->r[1] = 0x1007374u;
    c->r[2] = c->r[4];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa39df8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1007340u;
    c->r[1] = 0xd3448fu;
    { uint32_t ea = 0xa39e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa39e10u + c->r[1];
    c->r[14] = 0xa39e10u; f_9aedcc(c);
    c->r[1] = 0x1007340u;
    c->r[2] = c->r[4];
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa39e30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1007310u;
    c->r[1] = 0xd34466u;
    { uint32_t ea = 0xa39e44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa39e48u + c->r[1];
    c->r[14] = 0xa39e48u; f_9aedcc(c);
    c->r[1] = 0x100730cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x3e8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa39e68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x10072e0u;
    c->r[1] = 0xd34443u;
    { uint32_t ea = 0xa39e7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa39e80u + c->r[1];
    c->r[14] = 0xa39e80u; f_9aedcc(c);
    c->r[1] = 0x10072ecu;
    { uint32_t ea = 0xa39e8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a39ee4(Cpu *restrict c) {
    FN_ENTER(0xa39ee4u);
L_a39ee4:;
    c->r[1] = 0x100728cu;
    { uint32_t ea = 0xa39ef0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    return;
}
void f_a39f04(Cpu *restrict c) {
    FN_ENTER(0xa39f04u);
L_a39f04:;
    return;
}
void f_a39f08(Cpu *restrict c) {
    FN_ENTER(0xa39f08u);
L_a39f08:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a39f0c(Cpu *restrict c) {
    FN_ENTER(0xa39f0cu);
L_a39f0c:;
    return;
}
void f_a39f10(Cpu *restrict c) {
    FN_ENTER(0xa39f10u);
L_a39f10:;
    return;
}
void f_a39f14(Cpu *restrict c) {
    FN_ENTER(0xa39f14u);
L_a39f14:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    return;
}
void f_a39f20(Cpu *restrict c) {
    FN_ENTER(0xa39f20u);
L_a39f20:;
    return;
}
void f_a39f24(Cpu *restrict c) {
    FN_ENTER(0xa39f24u);
L_a39f24:;
    return;
}
void f_a39f28(Cpu *restrict c) {
    FN_ENTER(0xa39f28u);
L_a39f28:;
    return;
}
void f_a39f2c(Cpu *restrict c) {
    FN_ENTER(0xa39f2cu);
L_a39f2c:;
    return;
}
void f_a39f30(Cpu *restrict c) {
    FN_ENTER(0xa39f30u);
L_a39f30:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a39f78; }
    c->r[0] = 0xd16e1eu;
    c->r[4] = 0x0u;
    c->r[8] = 0xa39f58u + c->r[0];
L_a39f54:;
    { uint32_t ea = c->r[5] + (c->r[4] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0xa39f60u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39f88; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_CC) { goto L_a39f54; }
    goto L_a39f90;
L_a39f78:;
    c->r[0] = 0xd16df2u;
    c->r[8] = 0xa39f84u + c->r[0];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a39f88:;
    c->r[0] = c->r[5] + (c->r[4] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
L_a39f90:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a39fa0(Cpu *restrict c) {
    FN_ENTER(0xa39fa0u);
L_a39fa0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a39fe4; }
    c->r[7] = 0x0u;
L_a39fbc:;
    { uint32_t ea = c->r[5] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0xa39fc8u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a39fec; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_CC) { goto L_a39fbc; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a39fe4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a39fec:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a39ff4(Cpu *restrict c) {
    FN_ENTER(0xa39ff4u);
L_a39ff4:;
    return;
}
void f_a39ff8(Cpu *restrict c) {
    FN_ENTER(0xa39ff8u);
L_a39ff8:;
    c->r[3] = 0x100717cu;
    { uint32_t ea = 0xa3a004u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_a3a014(Cpu *restrict c) {
    FN_ENTER(0xa3a014u);
L_a3a014:;
    return;
}
void f_a3a018(Cpu *restrict c) {
    FN_ENTER(0xa3a018u);
L_a3a018:;
    __attribute__((musttail)) return f_9af3c4(c);
}
