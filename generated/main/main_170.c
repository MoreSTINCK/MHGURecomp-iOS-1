#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_383240(Cpu *c);
void f_4332ac(Cpu *c);
void f_9c5e4c(Cpu *c);
void f_9c6440(Cpu *c);
void f_a04768(Cpu *c);
void f_a3f65c(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fbb4(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a814c0(Cpu *c);
void f_a81a68(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a85844(Cpu *c);
void f_a93ca8(Cpu *c);
void f_b845b8(Cpu *c);
void f_b86c08(Cpu *c);
void f_b88030(Cpu *c);
void f_b8ab90(Cpu *c);
void f_b8cb1c(Cpu *c);
void f_b8d310(Cpu *c);
void f_b8dcb4(Cpu *c);
void f_b8e680(Cpu *c);
void f_b8ea78(Cpu *c);
void f_b8fa34(Cpu *c);
void f_b90364(Cpu *c);
void f_cf6138(Cpu *c);
void f_d0804c(Cpu *c);
void f_d09098(Cpu *c);
void f_d0a87c(Cpu *c);
void f_d0ad08(Cpu *c);
void f_dd4428(Cpu *c);
void f_dd4aa0(Cpu *c);
void f_e153f4(Cpu *c);
void f_e1bac8(Cpu *c);
void f_e1bb28(Cpu *c);
void f_e38664(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_b869a4(Cpu *restrict c) {
    FN_ENTER(0xb869a4u);
L_b869a4:;
    { uint32_t ea = c->r[0] + 0xad4u; ST32(ea, c->r[1]); }
    return;
}
void f_b869ac(Cpu *restrict c) {
    FN_ENTER(0xb869acu);
L_b869ac:;
    { uint32_t ea = c->r[0] + 0x1ebu; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_b869b4(Cpu *restrict c) {
    FN_ENTER(0xb869b4u);
L_b869b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_b869d0; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b845b8(c);
L_b869d0:;
    { uint32_t ea = c->r[4] + 0x1ebu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b869fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb869f4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x27cu; ST32(ea, c->r[0]); }
L_b869fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1ebu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b86a08(Cpu *restrict c) {
    FN_ENTER(0xb86a08u);
L_b86a08:;
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b86a10(Cpu *restrict c) {
    FN_ENTER(0xb86a10u);
L_b86a10:;
    { uint32_t ea = c->r[0] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b86a18(Cpu *restrict c) {
    FN_ENTER(0xb86a18u);
L_b86a18:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10eu; ST8(ea, c->r[1]); }
    return;
}
void f_b86a24(Cpu *restrict c) {
    FN_ENTER(0xb86a24u);
L_b86a24:;
    { uint32_t ea = c->r[0] + 0x10eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x10eu; ST8(ea, c->r[1]); } }
    return;
}
void f_b86a38(Cpu *restrict c) {
    FN_ENTER(0xb86a38u);
L_b86a38:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3];
    c->pc = c->r[2]; c->r[14] = 0xb86a5cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x280u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_HI) { c->r[0] = 0x17u; }
    { uint32_t ea = c->r[4] + 0x2e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b86a80(Cpu *restrict c) {
    FN_ENTER(0xb86a80u);
L_b86a80:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0xeb2310u;
    c->r[1] = 0xbbacu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x430000u;
    { uint32_t ea = 0xb86aa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b86ad0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xeb208cu;
    { uint32_t ea = 0xb86ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->pc = c->r[3]; c->r[14] = 0xb86ac8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb00u; ST32(ea, c->r[0]); }
L_b86ad0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb86ae0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b86b00; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb86af8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b86bdc; }
L_b86b00:;
    { uint32_t ea = c->r[4] + 0x1ebu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b86b50; }
    c->r[3] = 0xeb27f8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x274u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x27cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb86b28u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xebbdc4u;
    { uint32_t ea = 0xb86b40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b70u;
    c->r[0] = c->r[3] + c->r[0];
    c->r[3] = c->r[4];
    c->r[14] = 0xb86b50u; f_e153f4(c);
L_b86b50:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb86b60u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b86bd4; }
    { uint32_t ea = c->r[4] + 0x1eau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b86b80; }
    { uint32_t ea = c->r[4] + 0x1ebu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b86bd4; }
L_b86b80:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb86b90u; rt_dispatch(c);
    c->r[1] = 0xeb9fe8u;
    { uint32_t ea = 0xb86b9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2f8u; ST32(ea, c->r[12]); }
    c->r[12] = c->r[4] + 0x300u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
L_b86bd4:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_b86bdc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b86c08(Cpu *restrict c) {
    FN_ENTER(0xb86c08u);
L_b86c08:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0x2b0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[0];
    c->r[0] = 0x0u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[8] + 0xa0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xb86c40u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b88008; }
    { uint32_t ea = c->r[8] + 0x9a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b86ca8; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[6] = 0x10u;
    c->r[14] = 0xb86c64u; f_d0804c(c);
    c->r[7] = 0x1u;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0xfu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[2] = 0x20u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xb86ca4u; f_d09098(c);
    { uint32_t ea = c->r[8] + 0x9a0u; ST32(ea, c->r[0]); }
L_b86ca8:;
    { uint32_t ea = c->r[8] + 0x410u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b86d04; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[6] = 0x10u;
    c->r[14] = 0xb86cc4u; f_d0804c(c);
    c->r[3] = 0x1u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[2] = 0x20u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xb86d00u; f_d09098(c);
    { uint32_t ea = c->r[8] + 0x410u; ST32(ea, c->r[0]); }
L_b86d04:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x290u;
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xb86d24u; rt_dispatch(c);
    c->v.s[2] = LD32(c->r[13] + 656u);
    c->v.s[10] = 0xc1a00000u;
    c->v.s[0] = LD32(c->r[13] + 676u);
    c->v.s[6] = LD32(c->r[13] + 660u);
    c->v.s[16] = 0x3f000000u;
    c->v.s[14] = 0x41a00000u;
    c->r[0] = 0xeb1fe4u;
    { uint32_t ea = 0xb86d48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[2] + c->v.f[10];
    c->v.f[12] = c->v.f[6] + c->v.f[0];
    c->v.s[1] = c->v.s[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 656u, c->v.s[4]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[12] * c->v.f[16]);
    c->v.s[2] = LD32(c->r[13] + 664u);
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[10] = c->v.f[6] + c->v.f[10];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[1] * c->v.f[16]);
    c->v.s[1] = 0xc47a0000u;
    ST32(c->r[13] + 664u, c->v.s[2]);
    c->v.s[8] = LD32(c->r[13] + 672u);
    c->v.f[10] = c->v.f[10] + c->v.f[1];
    c->v.f[8] = c->v.f[8] + c->v.f[14];
    ST32(c->r[13] + 672u, c->v.s[8]);
    ST32(c->r[13] + 676u, c->v.s[0]);
    c->v.s[12] = LD32(c->r[13] + 680u);
    c->v.f[6] = c->v.f[12] + c->v.f[14];
    ST32(c->r[13] + 680u, c->v.s[6]);
    ST32(c->r[13] + 660u, c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x61cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b86fb8; }
    c->r[1] = c->r[13] + 0x1c0u;
    c->r[6] = 0x0u;
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb1f5cu;
    { uint32_t ea = 0xb86dd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb9f5cu;
    { uint32_t ea = 0xb86ddcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb1f44u;
    { uint32_t ea = 0xb86decu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb7dccu;
    { uint32_t ea = 0xb86df8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
L_b86df8:;
    c->r[1] = c->r[6] + (c->r[6] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_b86e74;
L_b86e08:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x170u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xb86e20u; rt_dispatch(c);
    c->r[0] = c->r[13] + 0x290u;
    c->r[1] = c->r[5];
    c->r[14] = 0xb86e2cu; f_a04768(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b86e74; }
    { uint32_t ea = c->r[7] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b86e74; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x13u);
    if (COND_HI) { goto L_b86e74; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b86e74; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[7]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_b86e74;
L_b86e70:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_b86e74:;
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_b86f88; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = c->r[7];
    /* pld */
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xb86e9cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b86e74; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xb86ebcu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t r = c->r[10] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 12u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); c->r[1] = c->r[1] + 12u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); }
    if (COND_EQ) { goto L_b86e70; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4807u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x4802u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_b86f34; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_b86e08; }
    c->r[2] = c->r[13] + 0x1c0u;
L_b86f18:;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b86f3c; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_b86f18; }
    goto L_b86e08;
L_b86f34:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_b86e74;
L_b86f3c:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_b86e08; }
    c->r[0] = c->r[13] + 0x1c0u;
L_b86f50:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b86e74; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b86f50; }
    goto L_b86e08;
L_b86f88:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x61cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_b86df8; }
    c->v.s[6] = LD32(c->r[13] + 680u);
    c->v.s[4] = LD32(c->r[13] + 656u);
    c->v.s[10] = LD32(c->r[13] + 660u);
    c->v.s[2] = LD32(c->r[13] + 664u);
    c->v.s[8] = LD32(c->r[13] + 672u);
    c->v.s[0] = LD32(c->r[13] + 676u);
L_b86fb8:;
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[10] = c->v.f[10] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[6];
    c->r[5] = 0x0u;
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x1c0u;
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[5]); }
    c->v.f[4] = c->v.f[4] * c->v.f[16];
    c->v.f[10] = c->v.f[10] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    c->v.f[8] = c->v.f[8] - c->v.f[4];
    c->v.f[0] = c->v.f[0] - c->v.f[10];
    c->v.f[6] = c->v.f[6] - c->v.f[2];
    ST32(c->r[13] + 432u, c->v.s[8]);
    ST32(c->r[13] + 436u, c->v.s[0]);
    ST32(c->r[13] + 440u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 416u, c->v.s[4]);
    ST32(c->r[13] + 420u, c->v.s[10]);
    ST32(c->r[13] + 424u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x170u;
    c->r[14] = 0xb87060u; f_a3f65c(c);
    c->v.s[0] = LD32(c->r[13] + 560u);
    c->v.s[2] = LD32(c->r[13] + 544u);
    c->v.s[4] = LD32(c->r[13] + 564u);
    c->v.s[6] = LD32(c->r[13] + 548u);
    c->v.s[8] = LD32(c->r[13] + 480u);
    c->v.s[1] = LD32(c->r[13] + 568u);
    c->v.s[3] = LD32(c->r[13] + 552u);
    c->v.s[10] = LD32(c->r[13] + 484u);
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.s[14] = LD32(c->r[13] + 496u);
    c->r[10] = c->r[8] + 0xb60u;
    c->r[0] = 0xb68u;
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = 0xb64u;
    c->r[0] = c->r[8] + c->r[0];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[6] + c->v.f[4];
    c->v.f[6] = c->v.f[3] + c->v.f[1];
    c->v.s[4] = LD32(c->r[13] + 500u);
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.s[8] = LD32(c->r[13] + 504u);
    c->v.f[6] = c->v.f[6] + c->v.f[12];
    c->v.s[10] = 0x3e800000u;
    c->v.f[0] = c->v.f[0] + c->v.f[14];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    c->v.f[4] = c->v.f[6] + c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    ST32(c->r[10], c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[10];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[0] = 0xb78u;
    ST32(c->r[1], c->v.s[0]);
    { uint32_t ea = c->r[8] + 0xb6cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = 0xb74u;
    c->v.s[0] = LD32(c->r[13] + 528u);
    c->v.s[2] = LD32(c->r[13] + 512u);
    c->v.s[8] = LD32(c->r[13] + 448u);
    c->v.s[4] = LD32(c->r[13] + 532u);
    c->v.s[6] = LD32(c->r[13] + 516u);
    c->v.s[3] = LD32(c->r[13] + 536u);
    c->v.s[5] = LD32(c->r[13] + 520u);
    c->v.s[12] = LD32(c->r[13] + 452u);
    c->v.s[1] = LD32(c->r[13] + 464u);
    c->v.s[14] = LD32(c->r[13] + 456u);
    c->v.s[7] = LD32(c->r[13] + 468u);
    c->r[6] = c->r[8] + c->r[0];
    c->r[0] = c->r[8] + 0xb70u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    c->v.f[3] = c->v.f[5] + c->v.f[3];
    c->v.f[16] = c->v.f[6] - c->v.f[12];
    c->v.f[22] = c->v.f[2] - c->v.f[8];
    c->v.f[18] = c->v.f[5] - c->v.f[14];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[6] = c->v.f[3] + c->v.f[14];
    c->v.f[0] = c->v.f[0] + c->v.f[1];
    c->v.s[1] = LD32(c->r[13] + 472u);
    c->v.f[4] = c->v.f[4] + c->v.f[7];
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = c->v.f[6] + c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    ST32(c->r[0], c->v.s[12]);
    c->v.f[4] = c->v.f[4] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    ST32(c->r[6], c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    ST32(c->r[1], c->v.s[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    { uint32_t ea = c->r[8] + 0xb7cu; ST32(ea, c->r[5]); }
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b871ac; }
    c->r[14] = 0xb871a8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b871ac:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b871d0; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
L_b871d0:;
    c->r[0] = c->r[8] + 0xb80u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[22]);
    c->r[0] = 0xb84u;
    c->r[5] = c->r[8] + c->r[0];
    c->r[0] = 0xb88u;
    c->r[0] = c->r[8] + c->r[0];
    ST32(c->r[5], c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[18]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0xb8cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[13] + 468u);
    c->v.s[4] = LD32(c->r[13] + 452u);
    c->v.s[2] = LD32(c->r[13] + 448u);
    c->v.s[8] = LD32(c->r[13] + 464u);
    c->v.s[6] = LD32(c->r[13] + 456u);
    c->v.s[10] = LD32(c->r[13] + 472u);
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[6] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b87248; }
    c->r[14] = 0xb87244u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_b87248:;
    c->v.s[0] = LD32(c->r[13] + 500u);
    c->v.s[4] = LD32(c->r[13] + 452u);
    c->v.s[2] = LD32(c->r[13] + 448u);
    c->v.s[8] = LD32(c->r[13] + 496u);
    c->v.s[6] = LD32(c->r[13] + 456u);
    c->v.s[10] = LD32(c->r[13] + 504u);
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[6] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b87290; }
    c->r[14] = 0xb8728cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_b87290:;
    c->v.s[0] = LD32(c->r[13] + 516u);
    c->v.s[4] = LD32(c->r[13] + 452u);
    c->v.s[2] = LD32(c->r[13] + 448u);
    c->v.s[8] = LD32(c->r[13] + 512u);
    c->v.s[6] = LD32(c->r[13] + 456u);
    c->v.s[10] = LD32(c->r[13] + 520u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[6]); }
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[4] = c->v.f[2] - c->v.f[8];
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[6] - c->v.f[10];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b872e0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb872e0u; f_15efddc(c);
L_b872e0:;
    c->r[0] = 0xb94u;
    c->r[5] = c->r[8] + 0xb90u;
    c->r[7] = c->r[13] + 0x130u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[8] + c->r[0];
    ST32(c->r[5], c->v.s[16]);
    ST32(c->r[0], c->v.s[18]);
    c->r[0] = 0xb98u;
    c->r[6] = c->r[8] + c->r[0];
    c->r[0] = 0x0u;
    ST32(c->r[6], c->v.s[0]);
    { uint32_t ea = c->r[8] + 0xb9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9];
    c->r[14] = 0xb87324u; f_9c5e4c(c);
    c->v.s[16] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[1] = LD32(c->r[6]);
    c->r[5] = c->r[8] + 0xb20u;
    c->r[0] = c->r[5];
    c->v.f[3] = c->v.f[18] + c->v.f[16];
    c->v.s[2] = c->v.s[16];
    c->r[14] = 0xb87344u; f_9c6440(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xb87358u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[8] + 0x460u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x464u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x468u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x46cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x470u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x474u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x478u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x47cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x480u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x484u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x488u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x48cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x490u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x494u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x498u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x49cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[7]);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[9]);
    c->v.s[10] = LD32(c->r[5]);
    c->v.f[24] = c->v.f[6] - c->v.f[4];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[18] = c->v.f[10] - c->v.f[8];
    c->v.f[22] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b87434; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb87434u; f_15efddc(c);
L_b87434:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b87450; }
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_b87450:;
    c->v.s[0] = LD32(c->r[6]);
    c->r[0] = c->r[8] + 0x630u;
    c->r[1] = 0x634u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[6] = 0x0u;
    c->r[1] = c->r[8] + c->r[1];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x638u;
    ST32(c->r[1], c->v.s[4]);
    c->r[1] = ~0x0u;
    c->r[0] = c->r[8] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x63cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xb874a0u; rt_dispatch(c);
    c->r[1] = 0xeb2708u;
    c->v.s[7] = LD32(c->r[0] + 48u);
    c->v.s[5] = LD32(c->r[0] + 52u);
    c->v.s[3] = LD32(c->r[0] + 56u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = LD32(c->r[7]);
    c->v.s[18] = LD32(c->r[5]);
    c->v.s[9] = 0x0u;
    { uint32_t ea = 0xb874c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[24] = LD32(c->r[0]);
    c->v.s[15] = LD32(c->r[1] + 28u);
    c->v.s[13] = LD32(c->r[1] + 12u);
    c->v.s[11] = LD32(c->r[1] + 44u);
    c->v.s[4] = LD32(c->r[1] + 32u);
    c->v.s[2] = LD32(c->r[1] + 36u);
    c->v.s[0] = LD32(c->r[1] + 40u);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->v.s[1] = LD32(c->r[1] + 16u);
    c->v.s[12] = LD32(c->r[1] + 20u);
    c->v.s[10] = LD32(c->r[1] + 24u);
    c->v.s[14] = LD32(c->r[1]);
    c->v.f[22] = c->v.f[15] * c->v.f[24];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[13] * c->v.f[20]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[11] * c->v.f[18]);
    c->v.f[26] = c->v.f[22] + c->v.f[16];
    c->v.s[22] = c->v.s[9];
    vfp_cmp_f(c, c->v.f[26], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b87524; }
    goto L_b87520;
L_b87520:;
    c->v.f[22] = c->v.f[16] / c->v.f[26];
L_b87524:;
    c->v.f[26] = c->v.f[1] * c->v.f[24];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[14] * c->v.f[20]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[28] = c->v.f[12] * c->v.f[24];
    c->v.f[24] = c->v.f[10] * c->v.f[24];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[8] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[4] * c->v.f[18]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[18]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[18]);
    c->v.f[20] = c->v.f[26] - c->v.f[7];
    c->v.f[18] = c->v.f[28] - c->v.f[5];
    c->v.f[24] = c->v.f[24] - c->v.f[3];
    c->v.f[20] = c->v.f[20] * c->v.f[22];
    c->v.f[18] = c->v.f[18] * c->v.f[22];
    ST32(c->r[13] + 144u, c->v.s[20]);
    c->v.f[20] = c->v.f[24] * c->v.f[22];
    ST32(c->r[13] + 148u, c->v.s[18]);
    ST32(c->r[13] + 152u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    c->v.s[20] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[0]);
    c->v.f[22] = c->v.f[15] * c->v.f[20];
    c->v.s[15] = LD32(c->r[9]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[13] * c->v.f[18]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[11] * c->v.f[15]);
    c->v.f[11] = c->v.f[22] + c->v.f[16];
    vfp_cmp_f(c, c->v.f[11], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b875a4; }
    c->v.f[9] = c->v.f[16] / c->v.f[11];
L_b875a4:;
    c->v.f[11] = c->v.f[1] * c->v.f[20];
    c->v.f[13] = c->v.f[12] * c->v.f[20];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[14] * c->v.f[18]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[18]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[16] = c->v.f[10] * c->v.f[20];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[6] * c->v.f[18]);
    c->r[5] = 0x0u;
    c->r[7] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0xd0u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[4] * c->v.f[15]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[2] * c->v.f[15]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[15]);
    c->v.f[7] = c->v.f[11] - c->v.f[7];
    c->v.f[5] = c->v.f[13] - c->v.f[5];
    c->v.f[3] = c->v.f[16] - c->v.f[3];
    c->v.f[7] = c->v.f[7] * c->v.f[9];
    c->v.f[5] = c->v.f[5] * c->v.f[9];
    c->v.f[3] = c->v.f[3] * c->v.f[9];
    ST32(c->r[13] + 224u, c->v.s[7]);
    ST32(c->r[13] + 228u, c->v.s[5]);
    ST32(c->r[13] + 232u, c->v.s[3]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[5]); }
    c->v.s[3] = LD32(c->r[10]);
    c->v.s[5] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[7] = LD32(c->r[0]);
    c->r[0] = c->r[7];
    c->v.f[1] = c->v.f[1] * c->v.f[3];
    c->v.f[12] = c->v.f[12] * c->v.f[3];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[14] * c->v.f[5]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[10] = c->v.f[10] * c->v.f[3];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[7]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[7]);
    ST32(c->r[13] + 208u, c->v.s[1]);
    ST32(c->r[13] + 212u, c->v.s[12]);
    ST32(c->r[13] + 216u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xb87654u; f_9c5e4c(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[7];
    c->r[14] = 0xb87664u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[8] + 0x6e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x700u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x704u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x708u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x70cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x710u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x714u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x718u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x71cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x630u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x634u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x638u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8b8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[8] + 0x8bcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xb87710u; f_a7ff38(c);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x164u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbee248u;
    c->r[2] = 0xb87740u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xb87744u; f_a7fbb4(c);
    c->r[9] = c->r[4];
    c->r[1] = 0xfff8u;
    c->r[3] = 0x38u;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x80000u;
    c->r[1] = c->r[0] & c->r[1];
    { uint32_t r = c->r[1] ^ c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8778c; }
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[3], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[5] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b8778c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0xb877a0u; f_a7ff38(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0xab22u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xee2d0000u;
    c->r[2] = c->r[2] & 0x1fu;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[5], c->r[3]); }
    if (COND_NE) { goto L_b877e0; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b87808; }
L_b877e0:;
    c->r[1] = c->r[1] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[7]); }
    c->r[1] = 0xb22u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b87808:;
    { uint32_t ea = c->r[8] + 0x410u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[5]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[1] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xb87840u; f_a7fc58(c);
    { uint32_t ea = c->r[8] + 0x9a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x410u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xb87868u; f_a814c0(c);
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[5]); }
    c->r[2] = c->r[13] + 0x90u;
    c->r[1] = 0x3fu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xb87894u; f_a80108(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b87908; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x31bu;
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
    c->r[1] = 0x1adcu;
    c->r[2] = 0x1ae0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b87908:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0xb8791cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b87970; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xb8796cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b87970:;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1adcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_b87a48; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xb879b0u; f_15efe30(c);
    { uint32_t ea = c->r[8] + 0x460u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x464u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x468u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x46cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x470u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x474u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x478u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x47cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x480u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x484u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x488u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x48cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x490u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x49cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x630u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x634u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x638u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x208u; ST32(ea, c->r[0]); }
L_b87a48:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[6] = 0x28c0u;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2abcu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = 0xd554u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_b87b08; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b87ae0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x517u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_b87ae0:;
    c->r[2] = 0x28c0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x7518u;
    c->r[1] = 0x2ac0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b87b08:;
    c->r[3] = 0x31d0u;
    c->r[2] = 0x33d4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b87bac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b87b88; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x63au;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_b87b88:;
    c->r[2] = 0x31d0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x33d8u;
    c->r[1] = 0x63au;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b87bac:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88000; }
    c->r[0] = 0xd9cu;
    c->r[1] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb73e4u;
    { uint32_t ea = 0xb87bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb73dcu;
    { uint32_t ea = 0xb87be0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb73c0u;
    { uint32_t ea = 0xb87bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb73b8u;
    { uint32_t ea = 0xb87c04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_b87c04:;
    c->r[0] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b87c78; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x173u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b87c78:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb87c8cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b87ce0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xb87cdcu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b87ce0:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_b87ddc; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xecu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_b87ddc:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; uint32_t v = LD32(ea); c->r[8] = v; }
    /* pld */
    { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b87e30; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_b87e30:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b87fec; }
    c->r[10] = c->r[0] + 0x60u;
    goto L_b87e54;
L_b87e40:;
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_b87f88; }
    goto L_b87fbc;
L_b87e54:;
    /* pld */
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] - 0x60u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b87fe0; }
    { uint32_t ea = c->r[10] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b87e88; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b87efc;
L_b87e88:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b87ee0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_b87ee0:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b87efc:;
    c->r[6] = (c->r[3] >> 24) & 0x3fu;
    c->r[7] = (c->r[2] >> 21) & 0xffu;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b87f34; }
    c->r[3] = ~0x0u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] | (c->r[6] << 21);
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b87f34:;
    c->r[6] = (c->r[3] >> 24) & 0x3fu;
    c->r[7] = (c->r[2] >> 21) & 0xffu;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b87f6c; }
    c->r[3] = ~0x0u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] | (c->r[6] << 21);
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b87f6c:;
    { uint32_t ea = c->r[10] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[3] >> 16);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[8]); }
    if (COND_EQ) { goto L_b87e40; }
L_b87f88:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_b87fa8; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[2]); }
L_b87fa8:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_b87fbc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xb87fc4u; f_a826fc(c);
    { uint32_t ea = c->r[10] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb87fd8u; f_a93ca8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb87fe0u; f_a82760(c);
L_b87fe0:;
    c->r[10] = c->r[10] + 0x30u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_b87e54; }
L_b87fec:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_b87c04; }
L_b88000:;
    c->r[0] = c->r[4];
    c->r[14] = 0xb88008u; f_a81a68(c);
L_b88008:;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b88030(Cpu *restrict c) {
    FN_ENTER(0xb88030u);
L_b88030:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x378u;
    c->r[13] = c->r[13] - 0x1800u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[0];
    c->r[7] = c->r[13] + 0x1800u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xaf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[7] + 0x33cu;
    c->r[7] = c->r[13] + 0x1000u;
    c->r[6] = c->r[7] + 0x2f4u;
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xb88078u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    c->pc = c->r[4]; c->r[14] = 0xb88084u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[6] + 0x83cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x840u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x844u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x848u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x84cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x850u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x854u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x858u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x85cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x860u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x864u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x868u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x86cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x870u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x874u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0xb30u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x878u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xb88114u; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[2] + 0x83cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x840u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x844u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x848u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x84cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x850u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x854u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x858u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x85cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x860u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x864u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x868u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x86cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x870u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x874u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x878u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x3c8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x3e0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x3ecu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x3f8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x1ebu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88ca8; }
    c->r[10] = c->r[13] + 0x30u;
    c->r[1] = 0x400u;
    c->r[0] = c->r[10];
    c->r[14] = 0xb881c8u; f_15efdc4(c);
    c->r[6] = c->r[13] + 0x1000u;
    c->r[1] = 0x400u;
    c->r[0] = c->r[6] + 0x730u;
    c->r[14] = 0xb881d8u; f_15efdc4(c);
    c->r[6] = c->r[13] + 0x1000u;
    c->r[1] = 0x400u;
    c->r[0] = c->r[6] + 0x330u;
    c->r[14] = 0xb881e8u; f_15efdc4(c);
    { uint32_t ea = c->r[8] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88bd0; }
    c->v.s[20] = 0x0u;
    c->v.s[21] = 0x34000000u;
    c->v.s[22] = 0x3f800000u;
    c->r[14] = c->r[13] + 0x1000u;
    c->r[7] = c->r[8] + 0x280u;
    c->r[9] = 0x0u;
    c->r[4] = c->r[14] + 0x330u;
L_b88210:;
    { uint32_t ea = c->r[7] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x5u;
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_HI) { goto L_b88458; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xb88230u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xb88270u: goto L_b88270; case 0xb88458u: goto L_b88458; case 0xb8853cu: goto L_b8853c; case 0xb887fcu: goto L_b887fc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_b88270:;
    { uint32_t ea = c->r[8] + 0x3f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_b88b58; }
    c->v.s[7] = LD32(c->r[5]);
    c->v.s[24] = LD32(c->r[5] + 16u);
    c->v.s[1] = LD32(c->r[6] + 20u);
    c->v.s[18] = LD32(c->r[6] + 16u);
    c->v.s[10] = LD32(c->r[5] + 32u);
    c->v.s[9] = LD32(c->r[6] + 24u);
    c->v.s[4] = LD32(c->r[5] + 48u);
    c->v.s[15] = c->v.s[20];
    c->v.f[0] = c->v.f[24] * c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[9]);
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b882bc; }
    c->v.f[15] = c->v.f[22] / c->v.f[0];
L_b882bc:;
    c->v.s[6] = LD32(c->r[5] + 12u);
    c->v.s[5] = LD32(c->r[5] + 8u);
    c->v.s[13] = LD32(c->r[5] + 4u);
    c->v.s[14] = LD32(c->r[5] - 8u);
    c->v.s[0] = LD32(c->r[5] - 4u);
    c->v.s[12] = LD32(c->r[5] - 12u);
    c->v.s[11] = LD32(c->r[6] + 36u);
    c->v.s[8] = LD32(c->r[6] + 32u);
    c->v.s[3] = LD32(c->r[5] + 20u);
    c->v.s[16] = LD32(c->r[5] + 24u);
    c->v.s[2] = LD32(c->r[6] + 40u);
    c->v.s[26] = LD32(c->r[5] + 40u);
    c->v.f[28] = c->v.f[1] * c->v.f[6];
    c->v.f[30] = c->v.f[1] * c->v.f[5];
    c->v.f[17] = c->v.f[1] * c->v.f[13];
    c->v.s[1] = LD32(c->r[5] + 28u);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[18] * c->v.f[14]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[18] * c->v.f[12]);
    c->v.s[18] = LD32(c->r[5] + 44u);
    c->v.f[19] = c->v.f[24] * c->v.f[11];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[7] * c->v.f[8]);
    c->v.s[24] = LD32(c->r[5] + 36u);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[9] * c->v.f[16]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[9] * c->v.f[3]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[10] = c->v.f[18] + c->v.f[28];
    c->v.f[7] = c->v.f[26] + c->v.f[30];
    c->v.f[9] = c->v.f[24] + c->v.f[17];
    c->v.f[28] = c->v.f[4] + c->v.f[19];
    c->v.f[4] = c->v.f[15] * c->v.f[10];
    c->v.f[10] = c->v.f[15] * c->v.f[7];
    c->v.f[7] = c->v.f[15] * c->v.f[9];
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    c->v.s[9] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b88358; }
    c->v.f[9] = c->v.f[22] / c->v.f[28];
L_b88358:;
    c->v.f[5] = c->v.f[5] * c->v.f[11];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[28] = c->v.s[4];
    c->v.f[13] = c->v.f[13] * c->v.f[11];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[12] * c->v.f[8]);
    c->r[0] = c->r[4] + (c->r[0] << 5);
    c->v.f[6] = c->v.f[6] * c->v.f[11];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[0], c->v.s[7]);
    ST32(c->r[0] + 4u, c->v.s[10]);
    ST32(c->r[0] + 8u, c->v.s[4]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[3] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[0] = c->v.f[26] + c->v.f[5];
    c->v.f[2] = c->v.f[24] + c->v.f[13];
    c->v.s[24] = c->v.s[10];
    c->v.s[26] = c->v.s[7];
    c->v.f[24] = -c->v.f[24] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[26] = -c->v.f[26] + (float)(c->v.f[2] * c->v.f[9]);
    c->v.f[0] = c->v.f[18] + c->v.f[6];
    c->v.f[28] = -c->v.f[28] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[16] = c->v.f[24] * c->v.f[24];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[18] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    c->v.s[0] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b883e0; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xb883d8u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[4] = c->r[14] + 0x330u;
L_b883e0:;
    { uint32_t ea = c->r[8] + 0x3f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    c->r[0] = c->r[4] + (c->r[0] << 5);
    ST32(c->r[0] + 12u, c->v.s[0]);
    if (COND_VC) { goto L_b8840c; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xb88400u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
    c->r[14] = c->r[13] + 0x1000u;
    c->r[4] = c->r[14] + 0x330u;
L_b8840c:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[21]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b88428; }
    c->v.f[0] = c->v.f[22] / c->v.f[18];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
L_b88428:;
    { uint32_t ea = c->r[8] + 0x3f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[1] = c->r[1] | (c->r[0] << 5);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[4] + c->r[1];
    ST32(c->r[1], c->v.s[26]);
    ST32(c->r[1] + 4u, c->v.s[24]);
    ST32(c->r[1] + 8u, c->v.s[28]);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x3f8u; ST32(ea, c->r[0]); }
    goto L_b88b58;
L_b88458:;
    { uint32_t ea = c->r[8] + 0x3c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_b88b58; }
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[8] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[2] = LD32(c->r[6] + 16u);
    c->v.s[10] = LD32(c->r[5] + 32u);
    c->v.s[0] = LD32(c->r[6] + 24u);
    c->v.s[12] = LD32(c->r[5] + 48u);
    c->v.f[8] = c->v.f[6] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = c->v.s[20];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[8] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b884a4; }
    c->v.f[4] = c->v.f[22] / c->v.f[8];
L_b884a4:;
    c->v.s[3] = LD32(c->r[5] + 4u);
    c->v.s[12] = LD32(c->r[5] - 12u);
    c->v.s[9] = LD32(c->r[5] + 20u);
    c->v.s[14] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[5] - 8u);
    c->v.s[10] = LD32(c->r[5] - 4u);
    c->v.s[1] = LD32(c->r[5] + 12u);
    c->v.s[5] = LD32(c->r[5] + 24u);
    c->v.s[7] = LD32(c->r[5] + 28u);
    c->r[1] = c->r[10] + (c->r[0] << 4);
    c->r[0] = c->r[0] + 0x1u;
    c->v.f[3] = c->v.f[6] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[5] + 40u);
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[8] = LD32(c->r[5] + 36u);
    c->v.s[1] = LD32(c->r[5] + 44u);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[2] = c->v.f[8] + c->v.f[3];
    c->v.f[0] = c->v.f[12] + c->v.f[14];
    c->v.f[6] = c->v.f[1] + c->v.f[6];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[1], c->v.s[2]);
    c->v.f[2] = c->v.f[4] * c->v.f[6];
    ST32(c->r[1] + 4u, c->v.s[0]);
    ST32(c->r[1] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x3c8u; ST32(ea, c->r[0]); }
    goto L_b88b58;
L_b8853c:;
    { uint32_t ea = c->r[8] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_b88b58; }
    c->v.s[8] = LD32(c->r[6] + 32u);
    c->v.s[6] = LD32(c->r[6] + 16u);
    c->v.s[2] = LD32(c->r[6] + 36u);
    c->v.s[4] = LD32(c->r[6] + 20u);
    c->v.s[0] = LD32(c->r[6] + 40u);
    c->v.s[10] = LD32(c->r[6] + 24u);
    c->v.s[12] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[5] + 16u);
    c->v.s[1] = LD32(c->r[5] + 32u);
    c->v.s[3] = LD32(c->r[5] + 48u);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->v.s[11] = c->v.s[20];
    c->r[1] = c->r[14] + 0x730u;
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->v.f[5] = c->v.f[6] + c->v.f[8];
    c->v.s[6] = 0x3f000000u;
    c->v.f[4] = c->v.f[4] + c->v.f[2];
    ST32(c->r[13] + 24u, c->v.s[2]);
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->v.s[7] = c->v.s[6];
    c->v.f[6] = c->v.f[4] * c->v.f[7];
    c->v.f[4] = c->v.f[10] + c->v.f[0];
    c->v.f[10] = c->v.f[5] * c->v.f[7];
    c->v.f[4] = c->v.f[4] * c->v.f[7];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[1]);
    c->v.f[12] = c->v.f[3] + c->v.f[14];
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b885cc; }
    c->v.f[11] = c->v.f[22] / c->v.f[12];
L_b885cc:;
    c->v.s[5] = LD32(c->r[5] + 8u);
    c->v.s[3] = LD32(c->r[5] + 4u);
    c->v.s[14] = LD32(c->r[5] + 24u);
    c->v.s[18] = LD32(c->r[5] + 20u);
    c->v.s[7] = LD32(c->r[5] - 8u);
    c->v.s[16] = LD32(c->r[5] - 12u);
    c->v.s[31] = 0x3f000000u;
    c->v.s[0] = 0x437f0000u;
    c->v.s[26] = LD32(c->r[5] + 12u);
    c->v.s[28] = 0x43800000u;
    c->v.s[12] = LD32(c->r[5] - 4u);
    c->v.s[2] = 0x42fe0000u;
    c->v.s[27] = 0x47800000u;
    c->v.s[29] = LD32(c->r[5] + 44u);
    c->v.f[8] = c->v.f[8] - c->v.f[10];
    c->r[1] = 0x0u;
    c->v.f[1] = c->v.f[5] * c->v.f[20];
    c->v.f[30] = c->v.f[3] * c->v.f[20];
    c->v.f[24] = c->v.f[14] * c->v.f[20];
    c->v.f[15] = c->v.f[18] * c->v.f[20];
    c->v.f[21] = c->v.f[26] * c->v.f[20];
    c->v.f[9] = c->v.f[7] + c->v.f[1];
    c->v.f[13] = c->v.f[16] + c->v.f[30];
    c->v.f[17] = c->v.f[9] + c->v.f[24];
    c->v.f[19] = c->v.f[13] + c->v.f[15];
    c->v.f[9] = c->v.f[17] + c->v.f[22];
    c->v.f[13] = c->v.f[19] + c->v.f[22];
    c->v.f[9] = c->v.f[9] * c->v.f[31];
    c->v.f[13] = c->v.f[13] * c->v.f[31];
    c->v.f[9] = c->v.f[9] * c->v.f[0];
    c->v.f[13] = c->v.f[13] * c->v.f[0];
    c->v.f[9] = floorf(c->v.f[9]);
    c->v.f[13] = floorf(c->v.f[13]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[28]);
    c->v.s[28] = LD32(c->r[5] + 28u);
    c->v.f[9] = c->v.f[12] + c->v.f[21];
    c->v.f[23] = c->v.f[28] * c->v.f[20];
    c->v.f[25] = c->v.f[9] + c->v.f[23];
    c->v.f[9] = c->v.f[25] + c->v.f[22];
    c->v.f[9] = c->v.f[9] * c->v.f[31];
    c->v.f[9] = c->v.f[9] * c->v.f[2];
    c->v.f[9] = floorf(c->v.f[9]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[27]);
    c->v.s[9] = LD32(c->r[5] + 40u);
    c->v.s[27] = LD32(c->r[5] + 36u);
    ST32(c->r[0], c->v.s[13]);
    c->v.f[13] = c->v.f[6] * c->v.f[5];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[10] * c->v.f[7]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[7] = c->v.f[7] * c->v.f[20];
    c->v.f[9] = c->v.f[9] + c->v.f[13];
    c->v.f[13] = c->v.f[6] * c->v.f[3];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[10] * c->v.f[16]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[4] * c->v.f[18]);
    c->v.f[9] = c->v.f[11] * c->v.f[9];
    c->v.f[16] = c->v.f[16] * c->v.f[20];
    c->v.f[1] = c->v.f[7] + c->v.f[1];
    c->v.f[5] = c->v.f[7] + c->v.f[5];
    c->v.f[13] = c->v.f[27] + c->v.f[13];
    c->v.f[17] = c->v.f[17] * c->v.f[9];
    c->v.f[3] = c->v.f[16] + c->v.f[3];
    c->v.f[14] = c->v.f[14] + c->v.f[1];
    c->v.f[5] = c->v.f[5] + c->v.f[24];
    c->v.f[30] = c->v.f[16] + c->v.f[30];
    c->v.s[16] = 0x43800000u;
    c->v.f[13] = c->v.f[11] * c->v.f[13];
    c->v.f[3] = c->v.f[3] + c->v.f[15];
    c->v.f[24] = c->v.f[5] + c->v.f[22];
    c->v.f[18] = c->v.f[18] + c->v.f[30];
    c->v.f[5] = c->v.f[5] * c->v.f[9];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[19] * c->v.f[13]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[13]);
    c->v.f[19] = c->v.f[6] * c->v.f[26];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[12] = c->v.f[12] * c->v.f[20];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[4] * c->v.f[28]);
    c->v.f[15] = c->v.f[3] + c->v.f[22];
    c->v.f[24] = c->v.f[24] * c->v.f[31];
    c->v.f[3] = c->v.f[14] + c->v.f[22];
    c->v.f[14] = c->v.f[14] * c->v.f[9];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[18] * c->v.f[13]);
    c->v.f[1] = c->v.f[12] + c->v.f[26];
    c->v.f[19] = c->v.f[29] + c->v.f[19];
    c->v.f[15] = c->v.f[15] * c->v.f[31];
    c->v.f[12] = c->v.f[12] + c->v.f[21];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    c->v.f[3] = c->v.f[3] * c->v.f[31];
    c->v.s[21] = 0x34000000u;
    c->v.f[1] = c->v.f[1] + c->v.f[23];
    c->v.f[11] = c->v.f[11] * c->v.f[19];
    c->v.f[15] = c->v.f[15] * c->v.f[0];
    c->v.f[12] = c->v.f[28] + c->v.f[12];
    c->v.f[24] = floorf(c->v.f[24]);
    c->v.f[7] = c->v.f[1] + c->v.f[22];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[25] * c->v.f[11]);
    c->v.f[15] = floorf(c->v.f[15]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[1] * c->v.f[11]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[11]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[24] * c->v.f[16]);
    c->v.s[24] = 0x47800000u;
    c->v.f[7] = c->v.f[7] * c->v.f[31];
    c->v.s[17] = c->v.s[17] ^ 0x80000000u;
    c->v.f[7] = c->v.f[7] * c->v.f[2];
    ST32(c->r[0] + 4u, c->v.s[17]);
    ST32(c->r[0] + 8u, c->v.s[8]);
    c->v.f[8] = c->v.f[12] + c->v.f[22];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->v.f[10] = floorf(c->v.f[7]);
    c->v.f[7] = c->v.f[18] + c->v.f[22];
    c->v.f[8] = c->v.f[8] * c->v.f[31];
    c->v.f[7] = c->v.f[7] * c->v.f[31];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[10] * c->v.f[24]);
    c->v.f[10] = c->v.f[3] * c->v.f[0];
    c->v.f[8] = c->v.f[8] * c->v.f[2];
    c->v.s[3] = c->v.s[5] ^ 0x80000000u;
    c->v.f[1] = c->v.f[7] * c->v.f[0];
    c->v.s[0] = LD32(c->r[13] + 24u);
    c->v.f[10] = floorf(c->v.f[10]);
    ST32(c->r[0] + 16u, c->v.s[15]);
    ST32(c->r[0] + 20u, c->v.s[3]);
    c->v.f[1] = floorf(c->v.f[1]);
    c->v.f[2] = c->v.f[0] - c->v.f[6];
    c->v.f[6] = floorf(c->v.f[8]);
    c->v.s[0] = LD32(c->r[13] + 28u);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[16]);
    ST32(c->r[0] + 24u, c->v.s[2]);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.s[2] = c->v.s[14] ^ 0x80000000u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[24]);
    ST32(c->r[0] + 32u, c->v.s[1]);
    ST32(c->r[0] + 36u, c->v.s[2]);
    ST32(c->r[0] + 40u, c->v.s[0]);
    goto L_b88b4c;
L_b887fc:;
    { uint32_t ea = c->r[8] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_b88b58; }
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[5] + 16u);
    c->v.s[13] = LD32(c->r[6] + 68u);
    c->v.s[9] = LD32(c->r[6] + 64u);
    c->v.s[4] = LD32(c->r[5] + 32u);
    c->v.s[11] = LD32(c->r[6] + 72u);
    c->v.s[6] = LD32(c->r[5] + 48u);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->v.s[29] = c->v.s[20];
    c->r[1] = c->r[14] + 0x730u;
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->v.f[2] = c->v.f[2] * c->v.f[13];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[11]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b88858; }
    c->v.f[29] = c->v.f[22] / c->v.f[0];
L_b88858:;
    c->v.s[0] = LD32(c->r[6] + 52u);
    c->v.s[23] = LD32(c->r[6] + 36u);
    c->v.s[12] = LD32(c->r[6] + 32u);
    c->v.s[31] = LD32(c->r[6] + 20u);
    c->v.s[15] = LD32(c->r[6] + 24u);
    c->v.s[24] = LD32(c->r[6] + 16u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] - 8u);
    c->v.s[14] = LD32(c->r[5] - 12u);
    c->v.s[1] = LD32(c->r[5] + 4u);
    c->v.s[7] = c->v.s[20];
    c->v.s[30] = LD32(c->r[5] - 4u);
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->v.f[4] = c->v.f[23] * c->v.f[20];
    c->v.f[6] = c->v.f[12] * c->v.f[20];
    c->v.f[17] = c->v.f[0] * c->v.f[20];
    c->v.s[2] = LD32(c->r[6] + 48u);
    ST32(c->r[13] + 24u, c->v.s[4]);
    ST32(c->r[13] + 16u, c->v.s[6]);
    c->v.f[3] = c->v.f[31] + c->v.f[4];
    c->v.f[5] = c->v.f[24] + c->v.f[6];
    c->v.s[4] = c->v.s[22];
    ST32(c->r[13] + 20u, c->v.s[2]);
    c->v.f[28] = c->v.f[2] * c->v.f[20];
    c->v.s[19] = LD32(c->r[6] + 40u);
    c->v.s[0] = LD32(c->r[6] + 56u);
    c->v.f[18] = c->v.f[3] + c->v.f[17];
    c->v.f[21] = c->v.f[5] + c->v.f[28];
    c->v.s[5] = 0x3f000000u;
    c->v.f[2] = c->v.f[19] * c->v.f[20];
    c->v.f[26] = c->v.f[0] * c->v.f[20];
    ST32(c->r[13] + 12u, c->v.s[0]);
    c->v.s[0] = 0x437f0000u;
    c->v.f[27] = c->v.f[8] * c->v.f[18];
    c->v.f[20] = c->v.f[1] * c->v.f[18];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[10] * c->v.f[21]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[14] * c->v.f[21]);
    ST32(c->r[13] + 8u, c->v.s[2]);
    c->v.f[3] = c->v.f[15] + c->v.f[2];
    c->v.s[2] = 0x42fe0000u;
    c->v.f[15] = c->v.f[15] * c->v.f[7];
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[22] = c->v.f[3] + c->v.f[26];
    c->v.s[3] = LD32(c->r[5] + 24u);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[3] * c->v.f[22]);
    c->v.f[16] = c->v.f[27] + c->v.f[4];
    c->v.f[16] = c->v.f[16] * c->v.f[5];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[25] = floorf(c->v.f[16]);
    c->v.s[16] = LD32(c->r[5] + 20u);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[16] * c->v.f[22]);
    c->v.f[6] = c->v.f[20] + c->v.f[4];
    c->v.f[6] = c->v.f[6] * c->v.f[5];
    c->v.f[6] = c->v.f[6] * c->v.f[0];
    c->v.s[0] = 0x43800000u;
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[25] * c->v.f[0]);
    c->v.s[25] = LD32(c->r[5] + 12u);
    c->v.f[0] = c->v.f[25] * c->v.f[18];
    c->v.s[18] = LD32(c->r[5] + 28u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[21]);
    c->v.s[21] = LD32(c->r[5] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[22]);
    c->v.f[22] = c->v.f[0] + c->v.f[4];
    c->v.f[22] = c->v.f[22] * c->v.f[5];
    c->v.f[22] = c->v.f[22] * c->v.f[2];
    c->v.s[2] = 0x47800000u;
    c->v.f[22] = floorf(c->v.f[22]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[2]);
    c->v.s[22] = LD32(c->r[5] + 36u);
    c->v.s[2] = LD32(c->r[5] + 44u);
    ST32(c->r[0], c->v.s[6]);
    c->v.f[6] = c->v.f[13] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[9] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[11] * c->v.f[3]);
    c->v.f[6] = c->v.f[21] + c->v.f[6];
    c->v.f[21] = c->v.f[29] * c->v.f[6];
    c->v.f[6] = c->v.f[21] * c->v.f[27];
    c->v.f[27] = c->v.f[13] * c->v.f[1];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[9] * c->v.f[14]);
    c->v.f[13] = c->v.f[13] * c->v.f[25];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[9] * c->v.f[30]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[11] * c->v.f[16]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[11] * c->v.f[18]);
    c->v.f[11] = c->v.f[31] * c->v.f[7];
    c->v.s[31] = 0x34000000u;
    c->v.f[22] = c->v.f[22] + c->v.f[27];
    c->v.f[2] = c->v.f[2] + c->v.f[13];
    c->v.f[13] = c->v.f[11] + c->v.f[23];
    c->v.f[27] = c->v.f[29] * c->v.f[22];
    c->v.f[22] = c->v.f[15] + c->v.f[19];
    c->v.s[19] = 0x42fe0000u;
    c->v.f[9] = c->v.f[29] * c->v.f[2];
    c->v.f[2] = c->v.f[24] * c->v.f[7];
    c->v.f[13] = c->v.f[13] + c->v.f[17];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[27] * c->v.f[20]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[22] = c->v.f[22] + c->v.f[26];
    c->v.f[20] = c->v.f[8] * c->v.f[13];
    c->v.f[26] = c->v.f[1] * c->v.f[13];
    c->v.f[13] = c->v.f[25] * c->v.f[13];
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    c->v.f[6] = c->v.f[2] + c->v.f[12];
    c->v.s[12] = 0x437f0000u;
    ST32(c->r[0] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    c->v.f[6] = c->v.f[6] + c->v.f[28];
    c->v.s[17] = c->v.s[12];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[3] * c->v.f[22]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[22]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[18] * c->v.f[22]);
    c->v.s[22] = c->v.s[4];
    c->v.f[24] = c->v.f[20] + c->v.f[4];
    c->v.f[28] = c->v.f[26] + c->v.f[4];
    c->v.s[4] = LD32(c->r[13] + 16u);
    c->v.f[6] = c->v.f[13] + c->v.f[22];
    c->v.f[20] = c->v.f[21] * c->v.f[20];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[27] * c->v.f[26]);
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    c->v.s[4] = LD32(c->r[13] + 20u);
    c->v.f[24] = c->v.f[24] * c->v.f[5];
    c->v.f[28] = c->v.f[28] * c->v.f[5];
    c->v.f[6] = c->v.f[6] * c->v.f[5];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[9] * c->v.f[13]);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.f[24] = c->v.f[24] * c->v.f[12];
    c->v.f[28] = c->v.f[28] * c->v.f[12];
    c->v.f[6] = c->v.f[6] * c->v.f[19];
    c->v.f[12] = c->v.f[11] + c->v.f[4];
    c->v.s[4] = LD32(c->r[13] + 28u);
    c->v.f[24] = floorf(c->v.f[24]);
    c->v.f[28] = floorf(c->v.f[28]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[12] = c->v.f[4] + c->v.f[12];
    c->v.s[4] = LD32(c->r[13] + 8u);
    c->v.f[1] = c->v.f[1] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[14] = c->v.f[15] + c->v.f[4];
    c->v.s[4] = LD32(c->r[13] + 12u);
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[14] = c->v.f[4] + c->v.f[14];
    c->v.f[4] = c->v.f[25] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.s[12] = 0x43800000u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[16] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[14]);
    c->v.s[14] = 0x47800000u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[24] * c->v.f[12]);
    c->v.f[0] = c->v.f[8] + c->v.f[22];
    c->v.f[2] = c->v.f[1] + c->v.f[22];
    c->v.f[10] = c->v.f[4] + c->v.f[22];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[8] = c->v.f[21] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[27] * c->v.f[1]);
    c->v.s[21] = c->v.s[31];
    c->v.f[0] = c->v.f[0] * c->v.f[5];
    c->v.f[2] = c->v.f[2] * c->v.f[5];
    c->v.f[6] = c->v.f[10] * c->v.f[5];
    c->v.s[10] = c->v.s[17];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[9] * c->v.f[4]);
    ST32(c->r[0] + 16u, c->v.s[28]);
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[19];
    c->v.s[10] = c->v.s[20] ^ 0x80000000u;
    c->v.s[20] = c->v.s[7];
    ST32(c->r[0] + 20u, c->v.s[10]);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    c->v.f[0] = floorf(c->v.f[0]);
    c->v.f[2] = floorf(c->v.f[2]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.s[0] = c->v.s[8] ^ 0x80000000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[14]);
    ST32(c->r[0] + 32u, c->v.s[2]);
    ST32(c->r[0] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[3]); }
L_b88b4c:;
    { uint32_t ea = c->r[8] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x3e0u; ST32(ea, c->r[0]); }
L_b88b58:;
    { uint32_t ea = c->r[8] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_b88210; }
    { uint32_t ea = c->r[8] + 0x3c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88bd0; }
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x1000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x3c0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x310u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb88ba4u; f_d0a87c(c);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[14] + 0x2f4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88bc4; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = 0x400u;
    c->r[14] = 0xb88bc4u; f_15efe30(c);
L_b88bc4:;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xb88bd0u; f_d0ad08(c);
L_b88bd0:;
    { uint32_t ea = c->r[8] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88c38; }
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x1000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x3d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x310u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb88c08u; f_d0a87c(c);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[14] + 0x2f4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88c2c; }
    c->r[5] = c->r[13] + 0x1000u;
    c->r[2] = 0x400u;
    c->r[1] = c->r[5] + 0x730u;
    c->r[14] = 0xb88c2cu; f_15efe30(c);
L_b88c2c:;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xb88c38u; f_d0ad08(c);
L_b88c38:;
    { uint32_t ea = c->r[8] + 0x3f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88ca0; }
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x1000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x3f0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x310u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb88c70u; f_d0a87c(c);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[14] + 0x2f4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b88c94; }
    c->r[5] = c->r[13] + 0x1000u;
    c->r[2] = 0x400u;
    c->r[1] = c->r[5] + 0x330u;
    c->r[14] = 0xb88c94u; f_15efe30(c);
L_b88c94:;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xb88ca0u; f_d0ad08(c);
L_b88ca0:;
    c->r[14] = c->r[13] + 0x1000u;
    c->r[2] = c->r[14] + 0x2f4u;
L_b88ca8:;
    { uint32_t ea = c->r[8] + 0x3d4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x1eau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b89530; }
    c->r[5] = c->r[13] + 0x1000u;
    c->r[1] = 0x400u;
    c->r[4] = c->r[2];
    c->r[0] = c->r[5] + 0x730u;
    c->r[14] = 0xb88cccu; f_15efdc4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0x310u;
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xb88cf0u; rt_dispatch(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xb88d00u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xb88d14u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    if (COND_EQ) { goto L_b88f50; }
    c->r[14] = c->r[13] + 0x1000u;
    c->r[4] = 0x1u;
    c->r[9] = 0x0u;
    c->r[7] = 0x0u;
    c->r[0] = c->r[14] + 0x310u;
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[13] + 0x30u;
    c->r[10] = c->r[0] + 0x10u;
L_b88d40:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[5] = c->r[1] + (c->r[0] << 4);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[1] & 0xfffu;
    c->pc = c->r[2]; c->r[14] = 0xb88d64u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b88f30; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x25u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b88f30; }
    c->r[0] = c->r[5] + 0x24u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x2cu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_b88d9c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[8];
    c->v.s[16] = LD32(c->r[1] + 32u);
    c->v.s[18] = LD32(c->r[1] + 36u);
    c->v.s[20] = LD32(c->r[1] + 40u);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->v.s[22] = LD32(c->r[1] + 48u);
    c->v.s[24] = LD32(c->r[1] + 52u);
    c->v.s[26] = LD32(c->r[1] + 56u);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { c->r[1] = ~0x0u; }
    { uint32_t ea = c->r[2] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb88de4u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.s[2] = LD32(c->r[0] + 52u);
    c->v.s[4] = LD32(c->r[0] + 56u);
    c->r[14] = c->r[13] + 0x1000u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[14] + 0x2f4u;
    c->v.f[6] = c->v.f[0] + c->v.f[16];
    c->v.f[8] = c->v.f[2] + c->v.f[18];
    c->v.f[10] = c->v.f[4] + c->v.f[20];
    c->v.f[0] = c->v.f[0] + c->v.f[22];
    c->v.f[2] = c->v.f[2] + c->v.f[24];
    c->v.f[4] = c->v.f[4] + c->v.f[26];
    ST32(c->r[13] + 48u, c->v.s[6]);
    ST32(c->r[13] + 52u, c->v.s[8]);
    ST32(c->r[13] + 56u, c->v.s[10]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    if (COND_EQ) { goto L_b88e50; }
    ST32(c->r[3] + 28u, c->v.s[6]);
    ST32(c->r[3] + 32u, c->v.s[8]);
    ST32(c->r[3] + 36u, c->v.s[10]);
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[7]); }
    ST32(c->r[3] + 44u, c->v.s[0]);
    c->r[1] = c->v.s[2];
    c->r[0] = c->v.s[4];
    goto L_b88f00;
L_b88e50:;
    c->v.s[1] = LD32(c->r[3] + 36u);
    c->v.s[14] = LD32(c->r[3] + 32u);
    c->v.s[12] = LD32(c->r[3] + 28u);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[14] + 0x310u;
    c->r[2] = c->r[0];
    c->r[4] = c->r[1];
    c->r[1] = c->r[2];
    vfp_cmp_f(c, c->v.f[1], c->v.f[10]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[14], c->v.f[8]);
    if (COND_MI) { c->r[0] = c->r[4]; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    if (COND_MI) { c->r[1] = c->r[4]; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[4]; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[10];
    c->r[2] = c->r[10];
    c->v.s[10] = LD32(c->r[3] + 52u);
    c->v.s[8] = LD32(c->r[3] + 48u);
    c->v.s[6] = LD32(c->r[3] + 44u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    if (COND_GT) { c->r[0] = c->r[6]; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    if (COND_GT) { c->r[1] = c->r[6]; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[2] = c->r[6]; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x2cu; ST32(ea, c->r[2]); }
L_b88f00:;
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = 0x0u;
    c->r[8] = c->r[8] + 0x90u;
    { uint32_t ea = c->r[3] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_b88d9c; }
L_b88f30:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xb88f44u; rt_dispatch(c);
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_b88d40; }
L_b88f50:;
    c->r[14] = c->r[13] + 0x1000u;
    c->v.s[12] = 0x3f000000u;
    c->r[1] = c->r[14] + 0x2f4u;
    c->v.s[2] = LD32(c->r[1] + 48u);
    c->v.s[6] = LD32(c->r[1] + 32u);
    c->v.s[0] = LD32(c->r[1] + 44u);
    c->v.s[10] = LD32(c->r[1] + 28u);
    c->v.s[4] = LD32(c->r[1] + 52u);
    c->v.s[8] = LD32(c->r[1] + 36u);
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    c->v.f[10] = c->v.f[10] + c->v.f[0];
    c->v.f[16] = c->v.f[6] * c->v.f[12];
    c->v.f[6] = c->v.f[8] + c->v.f[4];
    c->v.f[18] = c->v.f[10] * c->v.f[12];
    c->v.f[20] = c->v.f[6] * c->v.f[12];
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[4] = c->v.f[4] - c->v.f[20];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b88fc4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb88fbcu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x1000u;
    c->r[1] = c->r[14] + 0x2f4u;
L_b88fc4:;
    c->r[0] = 0x5u;
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
    c->r[6] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb7ba0u;
    { uint32_t ea = 0xb88fe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb8d64u;
    { uint32_t ea = 0xb88ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[1] + 12u, c->v.s[18]);
    ST32(c->r[1] + 16u, c->v.s[16]);
    ST32(c->r[1] + 20u, c->v.s[20]);
    ST32(c->r[1] + 24u, c->v.s[0]);
L_b89008:;
    c->r[0] = c->r[6] + c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[0] + 0x40u;
    c->r[14] = 0xb89020u; f_e1bac8(c);
    c->r[5] = c->r[5] + 0xa0u;
    (void)f_subs(c, c->r[5], 0x12c0u);
    if (COND_NE) { goto L_b89008; }
    c->r[0] = 0xeb02d4u;
    c->r[1] = 0xeb0b74u;
    c->r[9] = c->r[13] + 0x30u;
    c->r[5] = c->r[13] + 0x1000u;
    c->r[3] = 0x1eu;
    c->r[2] = c->r[9];
    { uint32_t ea = 0xb8904cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb89050u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x2f0u;
    c->r[14] = 0xb8905cu; f_e38664(c);
    c->r[6] = c->r[0];
    c->r[14] = c->r[13] + 0x1000u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[14] + 0x2f4u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x138u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x148u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x168u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_b893cc; }
    c->r[14] = c->r[13] + 0x1000u;
    c->r[7] = c->r[9] + 0x40u;
    c->r[9] = 0x1u;
    c->r[8] = c->r[13] + 0x20u;
    c->r[5] = 0x0u;
    c->r[10] = c->r[14] + 0x330u;
L_b890ec:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0xb890f8u; f_383240(c);
    c->v.s[2] = LD32(c->r[7] - 44u);
    c->v.s[0] = LD32(c->r[7] - 48u);
    c->v.s[4] = LD32(c->r[7] - 40u);
    c->v.s[8] = LD32(c->r[13] + 36u);
    c->v.s[6] = LD32(c->r[13] + 32u);
    c->v.s[10] = LD32(c->r[13] + 40u);
    c->v.f[12] = c->v.f[16] - c->v.f[2];
    c->v.f[14] = c->v.f[18] - c->v.f[0];
    c->v.f[8] = c->v.f[12] * c->v.f[8];
    c->v.f[12] = c->v.f[20] - c->v.f[4];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[10]);
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b89188; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[7] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = c->r[10] + (c->r[0] << 4);
    ST32(c->r[0], c->v.s[0]);
    ST32(c->r[0] + 4u, c->v.s[2]);
    ST32(c->r[0] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
L_b89188:;
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_HI) { goto L_b891a4; }
    c->r[0] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[6]);
    c->r[7] = c->r[7] + 0xa0u;
    c->r[9] = c->r[0];
    if (COND_CC) { goto L_b890ec; }
L_b891a4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[8] + 0x3d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_b893dc; }
    c->r[14] = c->r[13] + 0x1800u;
    c->v.s[16] = 0x0u;
    c->v.s[18] = 0x3f800000u;
    c->r[9] = c->r[13] + 0x30u;
    c->r[0] = c->r[14] + 0x33cu;
    c->r[14] = c->r[13] + 0x1000u;
    c->r[1] = c->r[0];
    c->r[0] = c->r[10] + 0x14u;
    c->r[6] = c->r[14] + 0x730u;
    c->v.s[0] = LD32(c->r[1] + 20u);
    c->v.s[2] = LD32(c->r[1] + 24u);
    c->v.s[4] = LD32(c->r[1] + 28u);
    c->v.s[6] = LD32(c->r[1] + 32u);
    c->v.s[8] = LD32(c->r[1] + 36u);
    c->v.s[10] = LD32(c->r[1] + 40u);
    c->v.s[12] = LD32(c->r[1] + 44u);
    c->v.s[14] = LD32(c->r[1] + 48u);
    c->v.s[1] = LD32(c->r[1] - 12u);
    c->v.s[3] = LD32(c->r[1] - 8u);
    c->v.s[5] = LD32(c->r[1] - 4u);
    c->v.s[7] = LD32(c->r[1]);
    c->v.s[9] = LD32(c->r[1] + 4u);
    c->v.s[11] = LD32(c->r[1] + 8u);
    c->v.s[13] = LD32(c->r[1] + 16u);
    c->v.s[15] = LD32(c->r[1] + 12u);
    c->r[1] = 0x0u;
L_b8921c:;
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_HI) { goto L_b893bc; }
    c->v.s[22] = LD32(c->r[0] - 16u);
    c->v.s[28] = LD32(c->r[0] - 20u);
    c->v.s[26] = LD32(c->r[0] - 12u);
    c->v.f[20] = c->v.f[13] * c->v.f[22];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[7] * c->v.f[28]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[6] * c->v.f[26]);
    c->v.f[24] = c->v.f[14] + c->v.f[20];
    c->v.s[20] = c->v.s[16];
    vfp_cmp_f(c, c->v.f[24], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b89254; }
    c->v.f[20] = c->v.f[18] / c->v.f[24];
L_b89254:;
    c->v.f[30] = c->v.f[22] * c->v.f[15];
    c->v.f[19] = c->v.f[22] * c->v.f[11];
    c->v.f[21] = c->v.f[22] * c->v.f[9];
    c->v.s[17] = LD32(c->r[0] - 4u);
    c->v.s[22] = LD32(c->r[0]);
    c->v.s[24] = LD32(c->r[0] + 4u);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[28] * c->v.f[5]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[28] * c->v.f[3]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[28] * c->v.f[1]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[28] = c->v.f[13] * c->v.f[22];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[7] * c->v.f[17]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[26] = c->v.f[12] + c->v.f[30];
    c->v.f[30] = c->v.f[10] + c->v.f[19];
    c->v.f[19] = c->v.f[8] + c->v.f[21];
    c->v.s[21] = c->v.s[16];
    c->v.f[28] = c->v.f[14] + c->v.f[28];
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b892b4; }
    c->v.f[21] = c->v.f[18] / c->v.f[28];
L_b892b4:;
    c->v.f[23] = c->v.f[15] * c->v.f[22];
    c->v.f[25] = c->v.f[11] * c->v.f[22];
    c->v.f[27] = c->v.f[9] * c->v.f[22];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[5] * c->v.f[17]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[3] * c->v.f[17]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[1] * c->v.f[17]);
    c->v.s[22] = LD32(c->r[0] + 12u);
    c->v.f[28] = c->v.f[20] * c->v.f[26];
    c->v.s[26] = LD32(c->r[0] + 16u);
    c->v.f[30] = c->v.f[20] * c->v.f[30];
    c->v.f[19] = c->v.f[20] * c->v.f[19];
    c->v.s[20] = LD32(c->r[0] + 20u);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[4] * c->v.f[24]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[0] * c->v.f[24]);
    c->v.f[29] = c->v.f[13] * c->v.f[26];
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[7] * c->v.f[22]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[24] = c->v.f[12] + c->v.f[23];
    c->v.f[23] = c->v.f[10] + c->v.f[25];
    c->v.f[25] = c->v.f[8] + c->v.f[27];
    c->v.f[17] = c->v.f[24] * c->v.f[21];
    c->v.f[23] = c->v.f[23] * c->v.f[21];
    c->v.f[21] = c->v.f[25] * c->v.f[21];
    c->v.f[25] = c->v.f[14] + c->v.f[29];
    c->v.s[24] = c->v.s[16];
    vfp_cmp_f(c, c->v.f[25], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b8932c; }
    c->v.f[24] = c->v.f[18] / c->v.f[25];
L_b8932c:;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    ST32(c->r[2], c->v.s[19]);
    { uint32_t ea = c->r[8] + 0x3d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[6] + (c->r[3] << 4);
    ST32(c->r[3] + 4u, c->v.s[30]);
    ST32(c->r[3] + 8u, c->v.s[28]);
    c->v.f[28] = c->v.f[9] * c->v.f[26];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[1] * c->v.f[22]);
    c->r[7] = c->r[3] + 0x10u;
    c->v.f[30] = c->v.f[11] * c->v.f[26];
    c->v.f[26] = c->v.f[15] * c->v.f[26];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[3] * c->v.f[22]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[5] * c->v.f[22]);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[3] + 16u, c->v.s[21]);
    ST32(c->r[7] + 4u, c->v.s[23]);
    ST32(c->r[3] + 24u, c->v.s[17]);
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[7] = c->r[3] + 0x20u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[0] * c->v.f[20]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[4] * c->v.f[20]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[22] = c->v.f[8] + c->v.f[28];
    c->v.f[20] = c->v.f[10] + c->v.f[30];
    c->v.f[26] = c->v.f[12] + c->v.f[26];
    c->v.f[22] = c->v.f[22] * c->v.f[24];
    c->v.f[20] = c->v.f[20] * c->v.f[24];
    ST32(c->r[3] + 32u, c->v.s[22]);
    c->v.f[22] = c->v.f[26] * c->v.f[24];
    ST32(c->r[7] + 4u, c->v.s[20]);
    ST32(c->r[3] + 40u, c->v.s[22]);
    { uint32_t ea = c->r[3] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x3d4u; ST32(ea, c->r[2]); }
L_b893bc:;
    c->r[0] = c->r[0] + 0x30u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_b8921c; }
    goto L_b893e0;
L_b893cc:;
    { uint32_t ea = c->r[8] + 0x3d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_b893e8; }
    goto L_b89438;
L_b893dc:;
    c->r[9] = c->r[13] + 0x30u;
L_b893e0:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b89438; }
L_b893e8:;
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x3u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x3ccu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xb89410u; f_d0a87c(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8942c; }
    c->r[4] = c->r[13] + 0x1000u;
    c->r[2] = 0x400u;
    c->r[1] = c->r[4] + 0x730u;
    c->r[14] = 0xb8942cu; f_15efe30(c);
L_b8942c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0xb89438u; f_d0ad08(c);
L_b89438:;
    c->r[0] = 0x1260u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xb89444u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x11c0u;
    c->r[14] = 0xb8944cu; f_e1bb28(c);
    c->r[0] = 0x1120u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0xb89458u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x1080u;
    c->r[14] = 0xb89460u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xfe0u;
    c->r[14] = 0xb89468u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xf40u;
    c->r[14] = 0xb89470u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xea0u;
    c->r[14] = 0xb89478u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xe00u;
    c->r[14] = 0xb89480u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xd60u;
    c->r[14] = 0xb89488u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xcc0u;
    c->r[14] = 0xb89490u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xc20u;
    c->r[14] = 0xb89498u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xb80u;
    c->r[14] = 0xb894a0u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xae0u;
    c->r[14] = 0xb894a8u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xa40u;
    c->r[14] = 0xb894b0u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x9a0u;
    c->r[14] = 0xb894b8u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x900u;
    c->r[14] = 0xb894c0u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x860u;
    c->r[14] = 0xb894c8u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x7c0u;
    c->r[14] = 0xb894d0u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x720u;
    c->r[14] = 0xb894d8u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x680u;
    c->r[14] = 0xb894e0u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x5e0u;
    c->r[14] = 0xb894e8u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x540u;
    c->r[14] = 0xb894f0u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x4a0u;
    c->r[14] = 0xb894f8u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x400u;
    c->r[14] = 0xb89500u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x360u;
    c->r[14] = 0xb89508u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x2c0u;
    c->r[14] = 0xb89510u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x220u;
    c->r[14] = 0xb89518u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x180u;
    c->r[14] = 0xb89520u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0xe0u;
    c->r[14] = 0xb89528u; f_e1bb28(c);
    c->r[0] = c->r[9] + 0x40u;
    c->r[14] = 0xb89530u; f_e1bb28(c);
L_b89530:;
    { uint32_t ea = c->r[8] + 0x1e9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b89558; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x1e9u; ST8(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x418u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0xa0u; ST8(ea, c->r[0]); } }
    goto L_b89564;
L_b89558:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x418u; ST32(ea, c->r[0]); } }
L_b89564:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b89588(Cpu *restrict c) {
    FN_ENTER(0xb89588u);
L_b89588:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b896d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb895b0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b896d8; }
    { uint32_t ea = c->r[4] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b896d8; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b896d8; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xb895f4u; f_b88030(c);
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[12] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[12], 0x0u); }
    if (COND_EQ) { goto L_b896d8; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0xf8000000u;
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b896d8; }
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x4b189680u;
    c->r[14] = (c->r[1] << 5);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[12];
L_b89638:;
    c->v.s[4] = LD32(c->r[3]);
    c->v.f[4] = c->v.f[4] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b8967c; }
    c->v.s[6] = LD32(c->r[4] + 280u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[5] = 0x1u; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[6] = 0x1u; }
    { uint32_t r = c->r[5] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[4];
    if (COND_NE) { c->r[2] = c->r[1]; }
L_b8967c:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] + 0x10u;
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_CC) { goto L_b89638; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_b896d8; }
    c->r[1] = c->r[12] + (c->r[2] << 4);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[1] = c->v.s[2];
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_HI) { goto L_b896d8; }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0xb896bcu; f_cf6138(c);
    { uint32_t ea = c->r[4] + 0x11du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b896d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb896d8u; rt_dispatch(c);
L_b896d8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b896e8(Cpu *restrict c) {
    FN_ENTER(0xb896e8u);
L_b896e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x138u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[1] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0xb8971cu; f_b86c08(c); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb8972cu; rt_dispatch(c);
    c->r[7] = c->r[8] + 0x164u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b89774; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b89774; }
    c->r[0] = c->r[0] & 0xfcu;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 2));
    if (COND_NE) { goto L_b89774; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb89768u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x1c4u; ST32(ea, c->r[0]); }
L_b89774:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x9u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_b897ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb89794u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_b897bc; }
L_b897a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[0]); }
L_b897ac:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_b897bc:;
    c->r[0] = 0xeaf5bcu;
    { uint32_t ea = 0xb897c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b89870; }
L_b897d4:;
    { uint32_t ea = c->r[4] + 0x10eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b897a4; }
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8981c; }
    { uint32_t ea = c->r[4] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_b8981c; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_b8981c; }
    { uint32_t ea = c->r[4] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_b8981c; }
    { uint32_t ea = c->r[4] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_b897a4; }
L_b8981c:;
    { uint32_t ea = c->r[4] + 0x1d4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b89854; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb89840u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->pc = c->r[5]; c->r[14] = 0xb8984cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b897a4; }
L_b89854:;
    { uint32_t ea = c->r[4] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_b89880; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b89888; }
    c->r[0] = 0x2u;
    goto L_b89884;
L_b89870:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b897ac; }
    goto L_b897d4;
L_b89880:;
    c->r[0] = 0x1u;
L_b89884:;
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[0]); }
L_b89888:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b898ac; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[0]); }
    goto L_b898e0;
L_b898ac:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_b898e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xeaf284u;
    { uint32_t ea = 0xb898c8u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->pc = c->r[3]; c->r[14] = 0xb898d0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xb00u; ST32(ea, c->r[0]); } }
L_b898e0:;
    { uint32_t ea = c->r[4] + 0xadcu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b8991c; }
    { uint32_t ea = c->r[4] + 0xae4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b8991c; }
    { uint32_t ea = c->r[4] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0x2u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[10] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[10] = 0x0u; }
L_b8991c:;
    c->r[1] = 0xeaf458u;
    c->v.s[4] = 0x3d4ccccdu;
    { uint32_t ea = 0xb8992cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 56u);
    c->v.s[2] = LD32(c->r[1] + 104u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = LD32(c->r[4] + 336u);
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[4]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[5]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 336u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 196u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    c->v.s[4] = LD32(c->r[4] + 192u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_b89f68; }
    c->r[0] = 0x0u;
L_b89974:;
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->r[0] = c->r[0] - 0x1u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_b89974; }
    c->r[1] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    ST32(c->r[4] + 336u, c->v.s[2]);
    if (COND_EQ) { goto L_b89f68; }
    c->v.s[2] = 0x42700000u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9acu;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb899d4u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xf0u;
    c->r[14] = 0xb89a60u; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[9];
    c->v.s[8] = c->r[3];
    c->v.s[9] = c->r[12];
    c->v.s[4] = c->r[14];
    c->v.s[7] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb64u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[12]); }
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = 0xb68u;
    c->r[8] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[9]); }
    c->r[9] = c->r[5];
    c->r[5] = c->r[4] + 0xb60u;
    c->v.s[15] = LD32(c->r[9]);
    c->v.s[16] = LD32(c->r[5]);
    c->v.s[14] = LD32(c->r[12]);
    c->v.f[6] = c->v.f[9] * c->v.f[15];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[16]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b89b58; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[7] = c->v.f[10] / c->v.f[6];
L_b89b58:;
    c->v.s[3] = c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[13] = c->r[6];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0xb74u;
    c->v.s[6] = LD32(c->r[13] + 184u);
    c->v.s[10] = c->r[10];
    c->v.s[12] = c->r[2];
    c->v.s[22] = c->r[7];
    c->r[14] = c->r[4] + c->r[3];
    c->r[3] = c->r[4] + 0xb70u;
    c->v.s[11] = LD32(c->r[14]);
    c->v.s[24] = LD32(c->r[3]);
    c->v.f[18] = c->v.f[15] * c->v.f[10];
    c->v.f[20] = c->v.f[15] * c->v.f[3];
    c->v.f[17] = c->v.f[15] * c->v.f[13];
    c->v.s[1] = c->r[1];
    c->r[1] = 0xb78u;
    c->v.s[5] = c->r[6];
    c->r[2] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.s[30] = LD32(c->r[2]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[16] * c->v.f[1]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[16] * c->v.f[5]);
    c->v.s[15] = c->r[1];
    c->v.f[19] = c->v.f[9] * c->v.f[11];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.s[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[14] * c->v.f[22]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[14] * c->v.f[15]);
    c->v.s[28] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[4] * c->v.f[30]);
    c->v.s[26] = c->r[0];
    c->v.f[8] = c->v.f[9] + c->v.f[18];
    c->v.f[14] = c->v.f[28] + c->v.f[20];
    c->v.f[20] = c->v.f[26] + c->v.f[17];
    c->v.f[2] = c->v.f[2] + c->v.f[19];
    c->v.f[16] = c->v.f[7] * c->v.f[8];
    c->v.f[18] = c->v.f[7] * c->v.f[14];
    c->v.f[20] = c->v.f[7] * c->v.f[20];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b89c1c; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
L_b89c1c:;
    c->v.f[2] = c->v.f[3] * c->v.f[11];
    c->v.f[4] = c->v.f[13] * c->v.f[11];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[24]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[5] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.f[8] = c->v.f[10] * c->v.f[11];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[30]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[15] * c->v.f[30]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[30]);
    c->v.f[2] = c->v.f[28] + c->v.f[2];
    c->v.f[4] = c->v.f[26] + c->v.f[4];
    c->v.f[6] = c->v.f[9] + c->v.f[8];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[2] = c->v.f[18] * c->v.f[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b89cb8; }
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[12]); }
    c->r[9] = c->r[3];
    c->r[6] = c->r[14];
    c->r[5] = c->r[2];
    c->r[14] = 0xb89ca0u; f_15efddc(c);
    c->r[2] = c->r[5];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[6];
L_b89cb8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b89cdc; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
L_b89cdc:;
    c->r[0] = 0xb98u;
    c->r[1] = 0x8b4u;
    c->v.s[10] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4] + 0x8b0u;
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.s[20] = c->v.s[10];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x8b8u;
    ST32(c->r[1], c->v.s[4]);
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8bcu; ST32(ea, c->r[0]); }
    c->v.s[14] = LD32(c->r[9]);
    c->v.s[11] = LD32(c->r[13] + 204u);
    c->v.s[5] = LD32(c->r[13] + 188u);
    c->v.s[16] = LD32(c->r[5]);
    c->v.s[7] = LD32(c->r[13] + 220u);
    c->v.s[18] = LD32(c->r[12]);
    c->v.s[9] = LD32(c->r[13] + 236u);
    c->v.f[0] = c->v.f[11] * c->v.f[14];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[5] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[18]);
    c->v.f[0] = c->v.f[9] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b89d64; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[20] = c->v.f[2] / c->v.f[0];
L_b89d64:;
    c->v.s[3] = LD32(c->r[13] + 192u);
    c->v.s[1] = LD32(c->r[13] + 196u);
    c->v.s[12] = LD32(c->r[13] + 200u);
    c->v.s[4] = LD32(c->r[13] + 176u);
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 184u);
    c->v.s[8] = LD32(c->r[13] + 208u);
    c->v.s[6] = LD32(c->r[13] + 212u);
    c->v.s[13] = LD32(c->r[13] + 224u);
    c->v.s[15] = LD32(c->r[13] + 228u);
    c->v.f[22] = c->v.f[14] * c->v.f[3];
    c->v.f[24] = c->v.f[14] * c->v.f[1];
    c->v.f[26] = c->v.f[14] * c->v.f[12];
    c->v.s[14] = LD32(c->r[13] + 216u);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[16] = LD32(c->r[13] + 232u);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[18] * c->v.f[14]);
    c->v.f[18] = c->v.f[15] + c->v.f[24];
    c->v.f[22] = c->v.f[13] + c->v.f[22];
    c->v.f[24] = c->v.f[16] + c->v.f[26];
    c->v.f[22] = c->v.f[20] * c->v.f[22];
    c->v.f[18] = c->v.f[20] * c->v.f[18];
    c->v.f[20] = c->v.f[20] * c->v.f[24];
    ST32(c->r[13] + 80u, c->v.s[22]);
    ST32(c->r[13] + 84u, c->v.s[18]);
    ST32(c->r[13] + 88u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.s[20] = LD32(c->r[14]);
    c->v.s[18] = LD32(c->r[3]);
    c->v.f[22] = c->v.f[11] * c->v.f[20];
    c->v.s[11] = LD32(c->r[2]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[5] * c->v.f[18]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[7] * c->v.f[11]);
    c->v.f[5] = c->v.f[9] + c->v.f[22];
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b89e10; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[5];
L_b89e10:;
    c->v.f[5] = c->v.f[20] * c->v.f[3];
    c->v.f[7] = c->v.f[20] * c->v.f[1];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[18] * c->v.f[2]);
    c->r[1] = 0xb84u;
    c->v.f[9] = c->v.f[20] * c->v.f[12];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[18] * c->v.f[0]);
    c->r[0] = 0x0u;
    c->r[2] = 0xb88u;
    c->r[6] = c->r[13] + 0xf0u;
    c->r[3] = c->r[13] + 0x90u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[11] * c->v.f[6]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[11] * c->v.f[14]);
    c->v.f[5] = c->v.f[13] + c->v.f[5];
    c->v.f[7] = c->v.f[15] + c->v.f[7];
    c->v.f[9] = c->v.f[16] + c->v.f[9];
    c->v.f[5] = c->v.f[10] * c->v.f[5];
    c->v.f[7] = c->v.f[10] * c->v.f[7];
    c->v.f[10] = c->v.f[10] * c->v.f[9];
    ST32(c->r[13] + 160u, c->v.s[5]);
    ST32(c->r[13] + 164u, c->v.s[7]);
    ST32(c->r[13] + 168u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->v.s[10] = LD32(c->r[1]);
    c->r[1] = c->r[4] + c->r[2];
    c->r[2] = c->r[4] + 0xb80u;
    c->v.s[5] = LD32(c->r[2]);
    c->v.s[7] = LD32(c->r[1]);
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[13] + 0xa0u;
    c->v.f[3] = c->v.f[3] * c->v.f[10];
    c->v.f[1] = c->v.f[10] * c->v.f[1];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[4] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[5] * c->v.f[2]);
    c->v.f[4] = c->v.f[10] * c->v.f[12];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[5] * c->v.f[0]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[7]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[7] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[7] * c->v.f[14]);
    ST32(c->r[13] + 144u, c->v.s[3]);
    ST32(c->r[13] + 148u, c->v.s[1]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xb89eccu; f_9c5e4c(c);
    c->r[2] = c->r[4] + 0xb20u;
    c->r[0] = c->r[13] + 0x50u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb89edcu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x700u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x704u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x708u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x710u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x714u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x718u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x71cu; ST32(ea, c->r[0]); }
    goto L_b89f80;
L_b89f68:;
    c->v.s[2] = 0x42700000u;
    c->r[0] = 0x9acu;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
L_b89f80:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xb89f90u; f_a7a7ac(c);
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb89facu; rt_dispatch(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb89fbcu; f_a7ff38(c);
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xbeb9c6u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb89fdcu + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xb89fe0u; f_a7fbb4(c);
    c->r[0] = 0x80u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[5]); }
    c->v.s[0] = 0x42c80000u;
    c->r[3] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xeafbc8u;
    { uint32_t ea = 0xb8a008u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[2] = c->r[1];
    c->r[14] = 0xb8a010u; f_a85844(c);
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb00u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8a02c; }
    { uint32_t ea = c->r[4] + 0xaecu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xaecu; ST32(ea, c->r[10]); } }
L_b8a02c:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b8a10c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xaf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb8a050u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->pc = c->r[5]; c->r[14] = 0xb8a05cu; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xeaea68u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb8a0e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb00u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8a10c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8a4fc; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[10];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[4];
    if (COND_EQ) { c->r[3] = 0x1u; }
    if (COND_NE) { c->r[3] = 0x2u; }
    c->r[14] = 0xb8a134u; f_b8ab90(c);
    { uint32_t ea = c->r[4] + 0x1ecu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8a19c; }
    c->r[0] = 0x0u;
    c->r[6] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb8a164u; rt_dispatch(c);
    c->r[0] = 0xeaebd4u;
    c->v.s[2] = LD32(c->r[4] + 784u);
    c->v.s[1] = LD32(c->r[4] + 788u);
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = 0xb8a190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8a19cu; f_dd4aa0(c);
L_b8a19c:;
    { uint32_t ea = c->r[4] + 0x1edu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8a5b0; }
    c->r[5] = 0x0u;
    c->r[6] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb8a1ccu; rt_dispatch(c);
    c->r[0] = 0xeaeb78u;
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    c->r[3] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6];
    { uint32_t ea = 0xb8a1ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8a1f8u; f_dd4428(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4] + 0x320u;
    c->r[1] = 0xa0u;
    c->r[14] = 0xb8a208u; f_15efdc4(c);
    c->r[0] = 0xeae934u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = 0xb8a218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[4] + 0x1f4u;
    if (COND_EQ) { goto L_b8a594; }
    c->r[0] = 0xeb7fb8u;
    c->v.s[16] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[9] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = c->r[13] + 0xf0u;
    { uint32_t ea = 0xb8a25cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_b8a258:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8a268u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b8a288; }
    goto L_b8a29c;
L_b8a27c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b8a29c; }
L_b8a288:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b8a27c; }
    goto L_b8a348;
L_b8a29c:;
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[6] = LD32(c->r[13] + 192u);
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[8] = LD32(c->r[13] + 196u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.s[10] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[18] = LD32(c->r[4] + 788u);
    c->r[0] = c->r[1];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x7d0u; c->r[2] = v; }
    c->v.s[20] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x50u;
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[16];
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->pc = c->r[3]; c->r[14] = 0xb8a304u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[4] + 496u);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->v.f[8] = c->v.f[20] * c->v.f[18];
    c->v.s[4] = LD32(c->r[13] + 68u);
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->r[9] = c->r[9] + 0x1u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[2]);
    ST32(c->r[4] + 496u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 500u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[4]);
    ST32(c->r[4] + 500u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 504u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[6]);
    ST32(c->r[4] + 504u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 512u);
    c->v.f[0] = c->v.f[8] + c->v.f[0];
    ST32(c->r[4] + 512u, c->v.s[0]);
L_b8a348:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_CS) { goto L_b8a35c; }
    (void)f_subs(c, c->r[9], 0x8u);
    if (COND_CC) { goto L_b8a258; }
L_b8a35c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[9], 0x7u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    if (COND_HI) { goto L_b8a474; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b8a474; }
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb7e94u;
    { uint32_t ea = 0xb8a38cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_b8a38c:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8a39cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b8a3c0; }
    goto L_b8a3d4;
L_b8a3b4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b8a3d4; }
L_b8a3c0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b8a3b4; }
    goto L_b8a468;
L_b8a3d4:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = c->r[13] + 0x50u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[2]; c->r[14] = 0xb8a3f0u; rt_dispatch(c);
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[8];
    c->r[14] = 0xb8a3fcu; f_a04768(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b8a464; }
    c->r[5] = c->r[10];
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x7d0u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xa0u;
    c->pc = c->r[2]; c->r[14] = 0xb8a41cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[2] << 4);
    { uint32_t ea = c->r[0] + 0x320u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x324u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x328u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x32cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x1u;
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[0] = LD32(c->r[4] + 784u);
    c->r[5] = c->r[13] + 0xf0u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[0] + 928u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
L_b8a464:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
L_b8a468:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_b8a38c; }
L_b8a474:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_b8a594; }
    c->v.s[2] = LD32(c->r[4] + 500u);
    c->v.s[0] = LD32(c->r[4] + 496u);
    c->v.s[4] = LD32(c->r[4] + 504u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8a4b8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb8a4b8u; f_15efddc(c);
L_b8a4b8:;
    c->v.s[2] = 0x34000000u;
    ST32(c->r[4] + 512u, c->v.s[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b8a594; }
    c->v.s[4] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4] + 496u);
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4] + 496u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 500u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4] + 500u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 504u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4] + 504u, c->v.s[0]);
    goto L_b8a5b0;
L_b8a4fc:;
    { uint32_t ea = c->r[4] + 0xadcu; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b8a844; }
    c->r[9] = c->r[8];
    c->r[10] = 0x1u;
    c->r[7] = 0x2u;
    c->r[8] = 0x0u;
    c->r[6] = 0x0u;
L_b8a524:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0xb8a538u; f_b8ab90(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[14] = 0xb8a548u; f_b8cb1c(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->r[8] = c->r[8] + 0x44u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    if (COND_CC) { goto L_b8a524; }
    { uint32_t ea = c->r[4] + 0xb00u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = c->r[9];
    c->r[0] = c->r[0] + 0x1u;
    goto L_b8a848;
L_b8a594:;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_b8a5b0:;
    { uint32_t ea = c->r[4] + 0x1eeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8a7b8; }
    c->r[0] = c->r[4] + 0x320u;
    c->r[1] = 0xa0u;
    c->r[14] = 0xb8a5c8u; f_15efdc4(c);
    c->r[0] = 0xeae570u;
    c->r[5] = 0x0u;
    c->r[7] = c->r[13] + 0xb0u;
    { uint32_t ea = 0xb8a5dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb8a614u; rt_dispatch(c);
    c->r[0] = 0xeae72cu;
    { uint32_t ea = c->r[4] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    c->r[6] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[7];
    c->r[3] = c->r[6];
    { uint32_t ea = 0xb8a638u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8a644u; f_dd4428(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_b8a6ec; }
    c->v.s[16] = 0x3f000000u;
    c->r[9] = c->r[13] + 0x30u;
    c->r[10] = c->r[13] + 0x50u;
L_b8a65c:;
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[6] = LD32(c->r[13] + 192u);
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[8] = LD32(c->r[13] + 196u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.s[10] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[9];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[16];
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[5]); }
    c->pc = c->r[3]; c->r[14] = 0xb8a6b4u; rt_dispatch(c);
    c->v.s[4] = LD32(c->r[4] + 788u);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->v.s[6] = LD32(c->r[13] + 52u);
    c->v.s[8] = LD32(c->r[13] + 56u);
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[5]); }
    c->v.f[2] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[6];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    ST32(c->r[4] + 496u, c->v.s[2]);
    ST32(c->r[4] + 500u, c->v.s[0]);
    ST32(c->r[4] + 504u, c->v.s[4]);
    if (COND_NE) { goto L_b8a65c; }
    goto L_b8a6f8;
L_b8a6ec:;
    c->v.s[2] = LD32(c->r[4] + 496u);
    c->v.s[0] = LD32(c->r[4] + 500u);
    c->v.s[4] = LD32(c->r[4] + 504u);
L_b8a6f8:;
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8a71c; }
    c->r[14] = 0xb8a718u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b8a71c:;
    ST32(c->r[4] + 512u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 500u);
    c->v.s[0] = LD32(c->r[4] + 496u);
    c->v.s[4] = LD32(c->r[4] + 504u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8a758; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb8a758u; f_15efddc(c);
L_b8a758:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b8a77c; }
    { uint32_t ea = c->r[4] + 0x1f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_b8a7a8;
L_b8a77c:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4] + 496u);
    c->v.s[4] = LD32(c->r[4] + 500u);
    c->v.s[6] = LD32(c->r[4] + 504u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_b8a7a8:;
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[1]); }
    c->r[3] = 0x0u;
    c->r[1] = c->r[4] + 0x1f4u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
L_b8a7b8:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b8a7fc; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9a8u;
    c->r[2] = c->r[10];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[8];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0xb8a7f0u; f_b8d310(c);
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8a858; }
L_b8a7fc:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[10];
    c->r[14] = 0xb8a80cu; f_b8dcb4(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + (c->r[10] << 4);
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    goto L_b8a878;
L_b8a844:;
    c->r[0] = 0x1u;
L_b8a848:;
    { uint32_t ea = c->r[4] + 0xb00u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    goto L_b8ab14;
L_b8a858:;
    c->r[0] = 0x0u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_b8a884; }
    goto L_b8ab00;
L_b8a878:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CS) { goto L_b8ab00; }
L_b8a884:;
    c->r[0] = 0x0u;
    c->r[6] = 0xab22u;
    { uint32_t ea = c->r[4] + 0x9a8u; ST32(ea, c->r[0]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xee2d0000u;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { c->r[5] = c->r[3] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[5] ^ 0xf00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b8a8c8; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b8a8f8; }
L_b8a8c8:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[6]); }
    c->r[6] = 0xfu;
    c->r[3] = (c->r[3] & 0xffff00ffu) | ((c->r[6] << 8) & 0xff00u);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = 0xb22u;
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf0000u;
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
L_b8a8f8:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8a96c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x316u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x1ab4u;
    c->r[2] = 0x1ab8u;
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_b8a96c:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb8a980u; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b8a9d4; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xb8a9d0u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8a9d4:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1ab4u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_b8aa14; }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b8aa14:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], (c->r[0] << 3));
    c->r[1] = (c->r[0] << 3);
    { uint32_t ea = c->r[4] + 0xafcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8aa80; }
    c->r[6] = c->r[10] + (c->r[10] << 4);
L_b8aa3c:;
    c->r[2] = c->r[5] & 0x7u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[3] = c->r[10];
    c->r[14] = 0xb8aa50u; f_b8e680(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xafcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_b8aa3c; }
L_b8aa80:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[10];
    c->r[14] = 0xb8aa90u; f_b8ea78(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[10] + (c->r[10] << 4);
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x41cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b8aaf8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[10];
    c->r[14] = 0xb8aad8u; f_b8fa34(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_b8aaf8:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_b8a878;
L_b8ab00:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[1] = c->r[8]; }
    if (COND_NE) { c->r[2] = c->r[10]; }
    if (COND_NE) { c->r[14] = 0xb8ab14u; f_b90364(c); }
L_b8ab14:;
    c->r[0] = c->r[8];
    c->r[14] = 0xb8ab1cu; f_a81a68(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0xb8ab28u; f_a7b778(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + (c->r[10] << 4);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b897ac; }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    goto L_b897ac;
}
