#include "cpu.h"
#include "neon_rt.h"
void f_200288(Cpu *c);
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_4332ac(Cpu *c);
void f_742f7c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c5fec(Cpu *c);
void f_9c6278(Cpu *c);
void f_9c6914(Cpu *c);
void f_a0328c(Cpu *c);
void f_a098b4(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7fbb4(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a814c0(Cpu *c);
void f_a81a68(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a83f74(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87958(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a87a24(Cpu *c);
void f_aafc68(Cpu *c);
void f_b6e710(Cpu *c);
void f_b6f4a8(Cpu *c);
void f_b711c8(Cpu *c);
void f_b7286c(Cpu *c);
void f_b7c618(Cpu *c);
void f_b7cf1c(Cpu *c);
void f_b7d274(Cpu *c);
void f_b7d928(Cpu *c);
void f_b7e82c(Cpu *c);
void f_b7ef94(Cpu *c);
void f_b7f1e0(Cpu *c);
void f_b7ffd0(Cpu *c);
void f_b81b4c(Cpu *c);
void f_b82f90(Cpu *c);
void f_b834a8(Cpu *c);
void f_b8357c(Cpu *c);
void f_b8411c(Cpu *c);
void f_b845b8(Cpu *c);
void f_bf67bc(Cpu *c);
void f_cf606c(Cpu *c);
void f_cf60fc(Cpu *c);
void f_d0804c(Cpu *c);
void f_d08088(Cpu *c);
void f_d09098(Cpu *c);
void f_d091ec(Cpu *c);
void f_d1db60(Cpu *c);
void f_dd5cc8(Cpu *c);
void f_dd5d64(Cpu *c);
void f_e17494(Cpu *c);
void f_e174d0(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15effb0(Cpu *c);
void f_15f0184(Cpu *c);
void f_b7c388(Cpu *restrict c) {
    FN_ENTER(0xb7c388u);
L_b7c388:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b7c38c(Cpu *restrict c) {
    FN_ENTER(0xb7c38cu);
L_b7c38c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7c3c8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); } }
    goto L_b7c3cc;
L_b7c3c8:;
    c->r[0] = 0x0u;
L_b7c3cc:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b7c4fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb7c3e8u; rt_dispatch(c);
    c->r[1] = 0xec5fb0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb7c3f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b7c410; }
    goto L_b7c420;
L_b7c404:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b7c420; }
L_b7c410:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b7c404; }
    goto L_b7c4fc;
L_b7c420:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xb7c434u; rt_dispatch(c);
    c->r[1] = 0xec5f64u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb7c444u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b7c45c; }
    goto L_b7c46c;
L_b7c450:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b7c46c; }
L_b7c45c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b7c450; }
    goto L_b7c4fc;
L_b7c46c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b7c4fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13];
    c->pc = c->r[3]; c->r[14] = 0xb7c48cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x3f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb7c4ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b7c4f8; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    c->r[0] = (c->r[0] >> 7) & 0x1u;
    { uint32_t ea = c->r[4] + 0x12cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb7c4f4u; rt_dispatch(c);
    goto L_b7c4fc;
L_b7c4f8:;
    { uint32_t ea = c->r[4] + 0x12cu; ST8(ea, c->r[6]); }
L_b7c4fc:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7c518; }
    c->v.s[0] = LD32(c->r[4] + 72u);
    c->r[0] = c->r[4] + 0x1c0u;
    c->r[1] = c->r[4] + 0x160u;
    c->r[14] = 0xb7c518u; f_bf67bc(c);
L_b7c518:;
    c->r[0] = c->r[4];
    c->r[14] = 0xb7c520u; f_b7286c(c);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b7c530(Cpu *restrict c) {
    FN_ENTER(0xb7c530u);
L_b7c530:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x50u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[5] = c->r[1];
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xb7c564u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[5]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7c5ac; }
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    ST32(c->r[13] + 48u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 52u);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[13] + 52u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 56u);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[13] + 56u, c->v.s[2]);
    c->v.s[2] = 0x0u;
    c->v.s[4] = LD32(c->r[13] + 60u);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[13] + 60u, c->v.s[2]);
L_b7c5ac:;
    c->v.s[2] = LD32(c->r[4] + 352u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[4] + 352u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 356u);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 356u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 360u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 360u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 560u);
    c->v.s[2] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 560u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 564u);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 564u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 568u);
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 568u, c->v.s[0]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b7c614(Cpu *restrict c) {
    FN_ENTER(0xb7c614u);
L_b7c614:;
    __attribute__((musttail)) return f_b7c618(c);
}
void f_b7c618(Cpu *restrict c) {
    FN_ENTER(0xb7c618u);
L_b7c618:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x7bu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b7c684; }
    { uint32_t ea = c->r[5] + 0x130u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7c68c; }
    { uint32_t ea = c->r[5] + 0x12fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b7c674; }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[0] = 0x1u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xb7c670u; f_b7cf1c(c);
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_b7c674:;
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x2u;
    c->r[1] = 0x0u;
    goto L_b7c698;
L_b7c684:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b7c68c:;
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_b7c698:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xb7c6acu; f_b7cf1c(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xb7c6b8u; f_b7d928(c);
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[5]; }
    if (COND_EQ) { c->r[1] = c->r[4]; }
    if (COND_EQ) { c->r[14] = 0xb7c6ccu; f_b7e82c(c); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b711c8(c);
}
void f_b7c6e0(Cpu *restrict c) {
    FN_ENTER(0xb7c6e0u);
L_b7c6e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b7c760; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x25bu;
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
    c->r[1] = 0x14dcu;
    c->r[2] = 0x14e0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b7c760:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x96cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb7c774u; f_a6a438(c);
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
    if (COND_LS) { goto L_b7c7c8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xb7c7c4u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b7c7c8:;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14dcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    if (COND_EQ) { goto L_b7c83c; }
    c->r[2] = 0xebc348u;
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = 0xb7c804u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->v.s[0] = LD32(c->r[5] + 72u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[1] + 12u, c->v.s[0]);
L_b7c83c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x3e44u;
    c->r[5] = 0x3c50u;
    c->r[1] = c->r[3];
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[2] = 0xc1ccu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7c8d4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[5] = 0x788u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_b7c8d4:;
    c->r[3] = 0x3c50u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xf78au;
    c->r[1] = 0x3e48u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe1a0000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b7c904(Cpu *restrict c) {
    FN_ENTER(0xb7c904u);
L_b7c904:;
    c->r[2] = 0x709u;
    c->r[12] = 0xa6ceu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf2b90000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x81870000u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x7b4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x20870000u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xe6f1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x2da00000u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x12du; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x76d1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc6bf0000u;
    if (COND_NE) { c->r[12] = 0x86cfu; }
    if (COND_NE) { c->r[12] = (c->r[12] & 0xFFFFu) | 0x94b50000u; }
    if (COND_NE) { c->r[2] = 0xd6d2u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x19900000u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[2] = c->r[12]; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_b7c998; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_b7c988; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_HI) { goto L_b7c9a4; }
L_b7c988:;
    c->r[0] = 0xcf4c10u;
    c->r[0] = 0xb7c994u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b7c9ac;
L_b7c998:;
    c->r[0] = 0x16efu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xcc410000u;
    goto L_b7c9ac;
L_b7c9a4:;
    c->r[0] = 0x66dbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x51050000u;
L_b7c9ac:;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf17bu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x93bb0000u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    return;
}
void f_b7c9c4(Cpu *restrict c) {
    FN_ENTER(0xb7c9c4u);
L_b7c9c4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->v.s[2] = 0x3f800000u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 72u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[2] + 12u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 72u);
    c->v.f[2] = c->v.f[2] / c->v.f[0];
    ST32(c->r[2] + 32u, c->v.s[0]);
    ST32(c->r[2] + 36u, c->v.s[0]);
    ST32(c->r[2] + 40u, c->v.s[0]);
    c->v.s[0] = 0x3f4ccccdu;
    ST32(c->r[2] + 44u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[5] + 72u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[2] + 240u, c->v.s[0]);
    ST32(c->r[2] + 244u, c->v.s[2]);
    c->v.s[2] = 0x41000000u;
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->v.s[4] = c->r[1];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    ST32(c->r[2] + 256u, c->v.s[0]);
    ST32(c->r[2] + 260u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->v.s[0] = c->r[1];
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[0] - 0x10u;
    c->v.s[2] = c->r[0];
    c->v.s[4] = c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    ST32(c->r[2] + 264u, c->v.s[0]);
    ST32(c->r[2] + 268u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x168u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_b7ce38; }
    goto L_b7cab8;
L_b7cab8:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b7cb24; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x172u;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b7cb24:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb7cb38u; f_a6a438(c);
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
    if (COND_LS) { goto L_b7cb8c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xb7cb88u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b7cb8c:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b7ce2c; }
    c->r[1] = 0xebc648u;
    { uint32_t ea = 0xb7cbc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[0] = LD32(c->r[5] + 72u);
    c->v.s[2] = LD32(c->r[5] + 352u);
    c->v.s[4] = LD32(c->r[5] + 356u);
    c->v.s[6] = LD32(c->r[5] + 360u);
    c->r[1] = 0xebc61cu;
    c->v.s[10] = c->r[2];
    c->v.s[14] = c->r[3];
    { uint32_t ea = 0xb7cbe8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13], c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->v.f[12] = c->v.f[10] * c->v.f[0];
    c->v.f[5] = c->v.f[14] * c->v.f[0];
    c->v.f[7] = c->v.f[2] - c->v.f[1];
    c->v.f[1] = c->v.f[2] + c->v.f[1];
    c->v.f[3] = c->v.f[4] - c->v.f[12];
    c->v.f[9] = c->v.f[6] - c->v.f[5];
    c->v.f[12] = c->v.f[12] + c->v.f[4];
    c->v.f[1] = -(float)(c->v.f[8] * c->v.f[1]);
    c->v.f[3] = c->v.f[10] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[7]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[8] = c->v.s[8] ^ 0x80000000u;
    c->v.s[10] = c->v.s[10] ^ 0x80000000u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[14] * c->v.f[9]);
    c->v.s[3] = c->v.s[3] ^ 0x80000000u;
    ST32(c->r[13] + 12u, c->v.s[3]);
    c->v.f[3] = c->v.f[5] + c->v.f[6];
    ST32(c->r[13] + 16u, c->v.s[8]);
    c->v.s[8] = c->v.s[14] ^ 0x80000000u;
    ST32(c->r[13] + 20u, c->v.s[10]);
    ST32(c->r[13] + 24u, c->v.s[8]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[3] * c->v.f[14]);
    c->v.s[10] = c->v.s[1] ^ 0x80000000u;
    ST32(c->r[13] + 28u, c->v.s[10]);
    { uint32_t ea = c->r[1] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->v.s[8] = LD32(c->r[1]);
    c->r[1] = 0xebc5e8u;
    c->v.s[10] = c->r[2];
    c->v.s[14] = c->r[3];
    { uint32_t ea = 0xb7cc70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 32u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    c->v.f[12] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[5] = c->v.f[2] - c->v.f[1];
    c->v.f[2] = c->v.f[2] + c->v.f[1];
    c->v.f[3] = c->v.f[4] - c->v.f[12];
    c->v.f[4] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = -(float)(c->v.f[8] * c->v.f[2]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[4] = c->v.s[10] ^ 0x80000000u;
    c->v.f[3] = c->v.f[10] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.s[8] = c->v.s[8] ^ 0x80000000u;
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[14] * c->v.f[7]);
    c->v.s[0] = c->v.s[14] ^ 0x80000000u;
    c->v.s[1] = c->v.s[3] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 44u, c->v.s[1]);
    ST32(c->r[13] + 48u, c->v.s[8]);
    ST32(c->r[13] + 52u, c->v.s[4]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    ST32(c->r[13] + 60u, c->v.s[2]);
    { uint32_t ea = c->r[1] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->v.s[0] = LD32(c->r[5] + 72u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[5] + 352u);
    c->v.s[4] = LD32(c->r[5] + 356u);
    c->v.s[6] = LD32(c->r[5] + 360u);
    c->v.s[10] = c->r[2];
    c->v.s[14] = c->r[3];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 64u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->v.f[12] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[5] = c->v.f[2] - c->v.f[1];
    c->v.f[2] = c->v.f[2] + c->v.f[1];
    c->v.f[3] = c->v.f[4] - c->v.f[12];
    c->v.f[4] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = -(float)(c->v.f[8] * c->v.f[2]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[4] = c->v.s[10] ^ 0x80000000u;
    c->v.f[3] = c->v.f[10] * c->v.f[3];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.s[8] = c->v.s[8] ^ 0x80000000u;
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[14] * c->v.f[7]);
    c->v.s[0] = c->v.s[14] ^ 0x80000000u;
    c->v.s[1] = c->v.s[3] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 76u, c->v.s[1]);
    ST32(c->r[13] + 80u, c->v.s[8]);
    ST32(c->r[13] + 84u, c->v.s[4]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    ST32(c->r[13] + 92u, c->v.s[2]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
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
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
L_b7ce2c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_b7ce38:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b7ce4c(Cpu *restrict c) {
    FN_ENTER(0xb7ce4cu);
L_b7ce4c:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD8(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_EQ) { goto L_b7cf04; }
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x180u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x190u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x194u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x198u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x19cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[0]); }
L_b7cf04:;
    c->r[0] = c->r[2];
    return;
}
void f_b7cf0c(Cpu *restrict c) {
    FN_ENTER(0xb7cf0cu);
L_b7cf0c:;
    c->v.s[3] = LD32(c->r[0] + 72u);
    c->r[0] = c->r[0] + 0x160u;
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); }
    return;
}
void f_b7cf1c(Cpu *restrict c) {
    FN_ENTER(0xb7cf1cu);
L_b7cf1c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xecu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[6] = c->r[3];
    c->r[7] = c->r[2];
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_EQ) { c->r[0] = c->r[5]; }
    if (COND_EQ) { c->r[1] = c->r[4]; }
    if (COND_EQ) { c->r[14] = 0xb7cf54u; f_b7d274(c); }
    c->r[0] = 0x0u;
    c->v.s[2] = 0x3fc90fdbu;
    c->v.s[3] = 0x3f800000u;
    c->r[10] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[10] + 0x50u;
    c->v.s[1] = LD32(c->r[5] + 72u);
    c->v.s[0] = LD32(c->r[5] + 192u);
    c->r[14] = 0xb7cf98u; f_9c6278(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x910u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xb7cfacu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[7] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b7d000; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xb7cffcu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b7d000:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1424u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[6]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b7d058; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xb7d058u; f_15efe30(c);
L_b7d058:;
    c->r[0] = 0x1u;
    c->r[8] = c->r[5];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x160u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec57b4u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0xb7d0a8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0xec57b0u;
    { uint32_t ea = 0xb7d0b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x4u;
L_b7d0b0:;
    c->v.s[0] = LD32(c->r[7] - 4u);
    c->v.s[6] = LD32(c->r[5] + 352u);
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[8] = LD32(c->r[5] + 356u);
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[10] = LD32(c->r[5] + 360u);
    c->r[0] = 0x0u;
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = c->r[6];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb7d0fcu; f_9c5fec(c);
    c->r[0] = 0xaaabu;
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[9] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[1] >> 1);
    c->r[1] = c->r[0] + (c->r[0] << 1);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[9] - c->r[1];
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[2] = c->r[2] - 0x10u;
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[0] + c->r[2];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5] + 0x128u; ST32(ea, c->r[9]); }
    c->r[14] = 0xb7d15cu; f_b6e710(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_b7d22c; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x910u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb7d17cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[8] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[1] & (c->r[10] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[0] + 0xfu;
    c->r[10] = c->r[10] & 0xfffffff0u;
    c->r[0] = c->r[8] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b7d1d0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[14] = 0xb7d1ccu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
L_b7d1d0:;
    c->r[0] = c->r[8] + c->r[10];
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_b7d218; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xfffcu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[8];
    c->r[14] = 0xb7d218u; f_15efe30(c);
L_b7d218:;
    c->r[0] = 0x1u;
    c->r[10] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
L_b7d22c:;
    c->r[9] = c->r[9] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    c->r[6] = c->r[6] + 0x10u;
    (void)f_subs(c, c->r[9], 0x6u);
    if (COND_NE) { goto L_b7d0b0; }
    c->r[1] = 0x4244u;
    c->r[0] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf9280000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xb7d260u; f_742f7c(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b7d274(Cpu *restrict c) {
    FN_ENTER(0xb7d274u);
L_b7d274:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7d904; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xb7d2a4u; f_a7ff38(c);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[7] + 0x164u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[6] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbf82d1u;
    c->r[2] = 0xb7d2d8u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xb7d2dcu; f_a7fbb4(c);
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[14] = 0xb7d310u; f_a7ff38(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[6] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xb7d354u; f_a814c0(c);
    c->r[1] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[14] = 0xb7d360u; f_a7fc58(c);
    c->r[6] = c->r[4];
    c->r[1] = 0xfff8u;
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[1];
    c->r[1] = 0x38u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[2] ^ c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7d3a8; }
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = c->r[5] + 0x0u + c->cf;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b7d3a8:;
    c->r[0] = 0xec47e0u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x3fu;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xb7d3c4u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb7d3c8u; f_a80108(c);
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = 0xbaeau;
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xa5830000u;
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_b7d3f4; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_b7d418; }
L_b7d3f4:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[5]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b7d418:;
    c->r[1] = 0x228cu;
    c->r[0] = c->r[4];
    c->r[3] = 0x2088u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xdd84u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b7d4c8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7d4a4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[5] = 0x411u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
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
L_b7d4a4:;
    c->r[2] = 0x2088u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2290u;
    c->r[1] = 0x411u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b7d4c8:;
    c->r[1] = 0xebc038u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb7d4dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_b7d4f0; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_b7d508; }
L_b7d4f0:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_b7d508:;
    c->r[0] = 0x1be4u;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b7d608; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7d580; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[5] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_b7d580:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7d5bc; }
    c->r[1] = 0xec1a20u;
    c->r[2] = 0xec1a20u;
    { uint32_t ea = 0xb7d598u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb7d59cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x334000u;
    c->r[0] = c->r[0] | 0xac00000u;
    goto L_b7d5c4;
L_b7d5bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_b7d5c4:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b7d5e4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b7d5fc;
L_b7d5e4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_b7d5fc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_b7d608:;
    c->r[0] = 0x1bf4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7d6c8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7d67c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33eu;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b7d67c:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b7d6b4; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b7d6bc;
L_b7d6b4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b7d6bc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_b7d6c8:;
    c->r[1] = c->r[13] + 0x8u;
    c->r[3] = c->r[13] + 0x18u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->r[14] = 0xb7d6dcu; f_aafc68(c);
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0xc00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b7d704; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_b7d734; }
L_b7d704:;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[8]); }
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0000u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b7d734:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7d7ec; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7d7a0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33cu;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b7d7a0:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b7d7d8; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b7d7e0;
L_b7d7d8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b7d7e0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_b7d7ec:;
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b7d8e8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7d85c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33eu;
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
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_b7d85c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7d89c; }
    c->r[1] = 0xec1744u;
    c->r[2] = 0xec1744u;
    { uint32_t ea = 0xb7d874u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb7d878u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x377b0000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b7d8a4;
L_b7d89c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_b7d8a4:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b7d8c4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b7d8dc;
L_b7d8c4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_b7d8dc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_b7d8e8:;
    c->r[1] = c->r[13] + 0x8u;
    c->r[3] = c->r[13] + 0x18u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->r[14] = 0xb7d8fcu; f_aafc68(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb7d904u; f_a81a68(c);
L_b7d904:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b7d928(Cpu *restrict c) {
    FN_ENTER(0xb7d928u);
L_b7d928:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x360u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[8] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0xb7d954u; f_a7ff38(c);
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[6] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x164u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[6] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xbf7c49u;
    if (COND_NE) { c->r[1] = 0x200u; }
    c->r[2] = 0xb7d994u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xb7d998u; f_a7fbb4(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb7d9a8u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[6] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0xbaeau;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa5830000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[7], c->r[3]); }
    if (COND_NE) { goto L_b7d9ec; }
    { uint32_t ea = c->r[6] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_b7da1c; }
L_b7d9ec:;
    c->r[1] = c->r[1] & 0xffff00ffu;
    c->r[2] = c->r[2] & 0x3fu;
    { uint32_t ea = c->r[6] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1dcu; ST32(ea, c->r[8]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[0]); }
L_b7da1c:;
    c->r[1] = 0x228cu;
    c->r[0] = c->r[6];
    c->r[3] = 0x2088u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xdd84u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b7dad4; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7daa8; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] + 0xecu;
    c->r[7] = 0x411u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b7daa8:;
    c->r[2] = 0x2088u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2290u;
    c->r[1] = 0x411u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[1]); }
L_b7dad4:;
    { uint32_t ea = c->r[6] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b7dafc; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[6] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[6] + 0x10cu; ST32(ea, c->r[0]); }
L_b7dafc:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xebb9f0u;
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    { uint32_t ea = 0xb7db24u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[6] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_b7db44; }
    { uint32_t ea = c->r[6] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b7db58; }
L_b7db44:;
    { uint32_t ea = c->r[6] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[6] + 0x10cu; ST32(ea, c->r[0]); }
L_b7db58:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = ~0x7u;
    c->r[0] = ~0xfu;
    c->r[11] = 0x10u;
    c->r[9] = 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[4]); }
    c->r[14] = c->r[3] + (c->r[3] << 1);
    c->r[12] = c->r[0] + (c->r[3] << 1);
    c->r[1] = c->r[1] + (c->r[3] << 1);
    c->r[10] = c->r[9] + (c->r[3] << 1);
    c->r[0] = c->r[3] + 0x8u;
    c->r[2] = c->r[11] + (c->r[3] << 1);
    c->r[4] = c->r[3] - 0x10u;
    c->r[6] = c->r[3] - 0x8u;
    c->r[5] = c->r[3] + 0x10u;
    c->r[7] = c->r[14] - 0x10u;
    { uint32_t ea = c->r[13] + 0x300u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x308u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[1]); }
    c->r[8] = c->r[14] - 0x8u;
    { uint32_t ea = c->r[13] + 0x2a0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2c0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2c4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2c8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2d0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2d4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2dcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2e0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2e4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2e8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2ecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2f4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2f8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2fcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0x244u;
    { uint32_t ea = c->r[13] + 0x314u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x318u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x31cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x320u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x324u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x328u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x32cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x330u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x334u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x338u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x33cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x340u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x344u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[7] = c->r[13] + 0x250u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[2] = c->r[13] + 0x28cu;
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[8]); }
    c->r[7] = c->r[3] + 0x9u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[11]); }
    c->r[2] = c->r[13] + 0x204u;
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    c->r[11] = c->r[3] - 0x18u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[8]); }
    c->r[2] = c->r[13] + 0x214u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = c->r[13] + 0x234u;
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[6]); }
    c->r[5] = 0x18u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = ~0x17u;
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[1]); }
    c->r[12] = c->r[14] - 0x9u;
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[2] + (c->r[3] << 1);
    c->r[2] = c->r[14] - 0x18u;
    c->r[14] = c->r[5] + (c->r[3] << 1);
    c->r[5] = 0x18u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[7]); }
    c->r[7] = ~0x8u;
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[9]); }
    c->r[7] = c->r[7] + (c->r[3] << 1);
    c->r[3] = c->r[3] - 0x9u;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0xc8u;
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0xe8u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[12]); }
    c->r[12] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[9]); }
    c->r[1] = 0x18u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xb7dee8u; f_a814c0(c);
    c->r[0] = 0x1be4u;
    c->r[4] = c->r[8];
    c->r[10] = 0x4000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b7dff4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7df68; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_b7df68:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7dfa0; }
    c->r[1] = 0xec1038u;
    c->r[2] = 0xec1038u;
    { uint32_t ea = 0xb7df80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb7df84u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[10];
    goto L_b7dfa8;
L_b7dfa0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_b7dfa8:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b7dfcc; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b7dfe8;
L_b7dfcc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7dfe8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7dff4:;
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[13] + 0x38u;
    c->r[3] = c->r[13] + 0x58u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x48u;
    c->r[0] = c->r[8];
    c->r[14] = 0xb7e03cu; f_aafc68(c);
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xb7e05cu; f_a814c0(c);
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b7e158; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7e0cc; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_b7e0cc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7e104; }
    c->r[1] = 0xec0ed4u;
    c->r[2] = 0xec0ed4u;
    { uint32_t ea = 0xb7e0e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb7e0e8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[10];
    goto L_b7e10c;
L_b7e104:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_b7e10c:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b7e130; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b7e14c;
L_b7e130:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7e14c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7e158:;
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x48u;
    c->r[0] = c->r[8];
    c->r[14] = 0xb7e184u; f_a7fc58(c);
    { uint32_t ea = c->r[8] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5001u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xabee0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_b7e1a8; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b7e220;
L_b7e1a8:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7e204; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_b7e204:;
    { uint32_t ea = c->r[8] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7e220:;
    c->r[3] = 0x0u;
    c->r[4] = c->r[6];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1fe00000u;
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7e254; }
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] | 0x1u;
    c->r[2] = c->r[2] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7e254:;
    c->r[0] = c->r[8];
    c->r[14] = 0xb7e25cu; f_a826fc(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x120u;
    c->r[2] = 0x10u;
    c->r[14] = 0xb7e26cu; f_a83f74(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b7e7f0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x40400000u;
    c->v.s[18] = 0x3f800000u;
    c->v.s[20] = 0xbf800000u;
    c->v.s[22] = 0x3f000000u;
    c->r[10] = 0x0u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_b7e2a0:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[0] = 0xaaabu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[2] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint64_t r = (uint64_t)c->r[1] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[8] = (c->r[1] >> 1);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[4] = c->r[1] - c->r[0];
    c->r[0] = c->r[13] + 0x300u;
    { uint32_t r = c->r[7] * c->r[4]; c->r[1] = r; }
    c->r[3] = c->r[0] + c->r[10];
    { uint32_t r = c->r[7] * c->r[8]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[7] * c->r[8] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb7e31cu; f_b7ef94(c);
    c->r[0] = c->r[13] + 0x2a0u;
    { uint32_t r = c->r[7] * c->r[4] + c->r[11]; c->r[11] = r; }
    c->r[1] = c->r[6] + 0x60u;
    c->r[2] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    c->r[3] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[7] * c->r[4] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[4]); }
    c->r[14] = 0xb7e35cu; f_b7ef94(c);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[13] + 0x240u;
    c->r[1] = c->r[6] + 0xc0u;
    c->r[3] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x48u;
    c->r[2] = c->r[5];
    c->r[14] = 0xb7e38cu; f_b7ef94(c);
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[1] = c->r[6] + 0x120u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[7] * c->r[8] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[11];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb7e3c8u; f_b7ef94(c);
    c->v.s[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[6] = c->r[8];
    c->v.s[7] = c->v.s[20];
    c->v.s[9] = c->v.s[20];
    c->r[0] = c->r[13] + 0x120u;
    c->v.s[11] = c->v.s[20];
    c->r[0] = c->r[0] + c->r[10];
    c->v.s[1] = LD32(c->r[9] + 116u);
    c->v.s[4] = c->r[1];
    c->r[1] = c->r[13] + 0x180u;
    c->v.s[0] = c->r[3];
    c->r[1] = c->r[1] + c->r[10];
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->v.s[14] = LD32(c->r[1] + 12u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[1] = (float)c->v.s[1];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[5] = (float)(int32_t)c->v.s[0];
    c->r[1] = c->r[1] + 0x1u;
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[3] = c->v.f[1] * c->v.f[16];
    c->v.f[1] = c->v.f[1] + c->v.f[1];
    c->v.f[0] = c->v.f[6] + c->v.f[6];
    c->v.f[6] = c->v.f[5] + c->v.f[5];
    c->v.s[5] = c->v.s[20];
    c->v.f[3] = c->v.f[18] / c->v.f[3];
    c->v.f[1] = c->v.f[18] / c->v.f[1];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[3]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[6] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] * c->v.f[3];
    c->v.f[10] = c->v.f[1] * c->v.f[10];
    c->v.f[12] = c->v.f[12] * c->v.f[3];
    c->v.f[14] = c->v.f[1] * c->v.f[14];
    ST32(c->r[6] + 384u, c->v.s[5]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.s[7] = c->v.s[7] ^ 0x80000000u;
    ST32(c->r[6] + 388u, c->v.s[7]);
    ST32(c->r[6] + 392u, c->v.s[8]);
    ST32(c->r[6] + 396u, c->v.s[10]);
    c->v.f[8] = c->v.f[8] + c->v.f[12];
    c->v.f[10] = c->v.f[10] + c->v.f[14];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[4] * c->v.f[3]);
    c->v.f[3] = c->v.f[8] * c->v.f[22];
    ST32(c->r[6] + 400u, c->v.s[9]);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    ST32(c->r[6] + 404u, c->v.s[7]);
    ST32(c->r[6] + 408u, c->v.s[3]);
    c->v.f[8] = c->v.f[2] + c->v.f[2];
    c->v.f[2] = c->v.f[10] * c->v.f[22];
    c->v.s[10] = c->v.s[20];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[1]);
    ST32(c->r[6] + 412u, c->v.s[2]);
    ST32(c->r[6] + 416u, c->v.s[5]);
    c->v.s[10] = c->v.s[10] ^ 0x80000000u;
    ST32(c->r[6] + 420u, c->v.s[10]);
    ST32(c->r[6] + 424u, c->v.s[3]);
    ST32(c->r[6] + 428u, c->v.s[2]);
    ST32(c->r[6] + 432u, c->v.s[9]);
    ST32(c->r[6] + 436u, c->v.s[7]);
    ST32(c->r[6] + 440u, c->v.s[3]);
    ST32(c->r[6] + 444u, c->v.s[2]);
    ST32(c->r[6] + 448u, c->v.s[5]);
    ST32(c->r[6] + 452u, c->v.s[10]);
    ST32(c->r[6] + 456u, c->v.s[3]);
    ST32(c->r[6] + 460u, c->v.s[2]);
    ST32(c->r[6] + 464u, c->v.s[9]);
    ST32(c->r[6] + 468u, c->v.s[10]);
    ST32(c->r[6] + 472u, c->v.s[12]);
    ST32(c->r[6] + 476u, c->v.s[14]);
    c->v.s[10] = c->r[7];
    c->v.s[9] = c->v.s[20];
    c->v.s[2] = LD32(c->r[9] + 116u);
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 4u);
    c->v.s[1] = LD32(c->r[0] + 8u);
    c->v.s[3] = LD32(c->r[0] + 12u);
    c->v.f[5] = c->v.f[2] * c->v.f[16];
    c->v.f[7] = c->v.f[2] + c->v.f[2];
    c->v.f[2] = c->v.f[10] + c->v.f[10];
    c->v.f[3] = (float)(int32_t)c->v.s[3];
    c->v.f[1] = (float)(int32_t)c->v.s[1];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[18] / c->v.f[5];
    c->v.f[5] = c->v.f[18] / c->v.f[7];
    c->v.s[7] = c->v.s[20];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.s[6] = c->r[0];
    c->v.f[12] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[5] * c->v.f[14];
    c->v.f[1] = c->v.f[1] * c->v.f[10];
    c->r[0] = c->r[13] + 0xc0u;
    c->r[0] = c->r[0] + c->r[10];
    ST32(c->r[6] + 480u, c->v.s[7]);
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.s[9] = c->v.s[9] ^ 0x80000000u;
    ST32(c->r[6] + 484u, c->v.s[9]);
    ST32(c->r[6] + 488u, c->v.s[12]);
    c->v.f[12] = c->v.f[12] + c->v.f[1];
    ST32(c->r[6] + 492u, c->v.s[14]);
    c->v.f[6] = c->v.f[6] + c->v.f[6];
    c->v.f[12] = c->v.f[12] * c->v.f[22];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[10] = c->v.f[5] * c->v.f[3];
    c->v.s[3] = c->v.s[20];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[5]);
    ST32(c->r[6] + 496u, c->v.s[11]);
    c->v.f[14] = c->v.f[14] + c->v.f[10];
    ST32(c->r[6] + 500u, c->v.s[9]);
    ST32(c->r[6] + 504u, c->v.s[12]);
    c->v.f[14] = c->v.f[14] * c->v.f[22];
    c->v.s[8] = c->v.s[3] ^ 0x80000000u;
    ST32(c->r[6] + 508u, c->v.s[14]);
    ST32(c->r[6] + 512u, c->v.s[7]);
    ST32(c->r[6] + 516u, c->v.s[8]);
    ST32(c->r[6] + 520u, c->v.s[12]);
    ST32(c->r[6] + 524u, c->v.s[14]);
    ST32(c->r[6] + 528u, c->v.s[11]);
    ST32(c->r[6] + 532u, c->v.s[9]);
    ST32(c->r[6] + 536u, c->v.s[12]);
    ST32(c->r[6] + 540u, c->v.s[14]);
    ST32(c->r[6] + 544u, c->v.s[7]);
    ST32(c->r[6] + 548u, c->v.s[8]);
    ST32(c->r[6] + 552u, c->v.s[12]);
    ST32(c->r[6] + 556u, c->v.s[14]);
    ST32(c->r[6] + 560u, c->v.s[11]);
    ST32(c->r[6] + 564u, c->v.s[8]);
    ST32(c->r[6] + 568u, c->v.s[1]);
    ST32(c->r[6] + 572u, c->v.s[10]);
    c->v.s[10] = c->r[4];
    c->v.s[9] = c->v.s[20];
    c->v.s[8] = LD32(c->r[9] + 116u);
    c->v.f[8] = (float)c->v.s[8];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.s[14] = LD32(c->r[0]);
    c->v.s[1] = LD32(c->r[0] + 4u);
    c->v.s[3] = LD32(c->r[0] + 8u);
    c->v.s[5] = LD32(c->r[0] + 12u);
    c->r[0] = c->r[13] + 0x60u;
    c->r[0] = c->r[0] + c->r[10];
    c->r[10] = c->r[10] + 0x10u;
    (void)f_subs(c, c->r[10], 0x60u);
    c->v.f[12] = c->v.f[8] * c->v.f[16];
    c->v.f[7] = c->v.f[8] + c->v.f[8];
    c->v.f[8] = c->v.f[10] + c->v.f[10];
    c->v.f[5] = (float)(int32_t)c->v.s[5];
    c->v.f[3] = (float)(int32_t)c->v.s[3];
    c->v.f[1] = (float)(int32_t)c->v.s[1];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.f[12] = c->v.f[18] / c->v.f[12];
    c->v.f[10] = c->v.f[18] / c->v.f[7];
    c->v.s[7] = c->v.s[20];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.s[0] = c->v.s[20];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = c->r[11];
    c->v.f[14] = c->v.f[14] * c->v.f[12];
    c->v.f[1] = c->v.f[10] * c->v.f[1];
    c->v.f[3] = c->v.f[3] * c->v.f[12];
    c->v.f[12] = c->v.f[10] * c->v.f[5];
    c->v.s[5] = c->v.s[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[10]);
    ST32(c->r[6] + 576u, c->v.s[7]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[6] + 580u, c->v.s[0]);
    ST32(c->r[6] + 584u, c->v.s[14]);
    ST32(c->r[6] + 588u, c->v.s[1]);
    ST32(c->r[6] + 592u, c->v.s[9]);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[14] = c->v.f[14] + c->v.f[3];
    c->v.f[1] = c->v.f[1] + c->v.f[12];
    ST32(c->r[6] + 596u, c->v.s[0]);
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    c->v.f[14] = c->v.f[14] * c->v.f[22];
    c->v.f[1] = c->v.f[1] * c->v.f[22];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[10]);
    ST32(c->r[6] + 600u, c->v.s[14]);
    ST32(c->r[6] + 604u, c->v.s[1]);
    ST32(c->r[6] + 608u, c->v.s[7]);
    c->v.s[10] = c->v.s[5] ^ 0x80000000u;
    c->v.s[5] = c->v.s[20];
    ST32(c->r[6] + 612u, c->v.s[10]);
    ST32(c->r[6] + 616u, c->v.s[14]);
    ST32(c->r[6] + 620u, c->v.s[1]);
    ST32(c->r[6] + 624u, c->v.s[9]);
    ST32(c->r[6] + 628u, c->v.s[0]);
    ST32(c->r[6] + 632u, c->v.s[14]);
    ST32(c->r[6] + 636u, c->v.s[1]);
    ST32(c->r[6] + 640u, c->v.s[7]);
    ST32(c->r[6] + 644u, c->v.s[10]);
    ST32(c->r[6] + 648u, c->v.s[14]);
    ST32(c->r[6] + 652u, c->v.s[1]);
    ST32(c->r[6] + 656u, c->v.s[9]);
    ST32(c->r[6] + 660u, c->v.s[10]);
    ST32(c->r[6] + 664u, c->v.s[3]);
    ST32(c->r[6] + 668u, c->v.s[12]);
    c->v.s[0] = LD32(c->r[9] + 116u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.s[1] = LD32(c->r[0] + 12u);
    c->v.f[3] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[1] = (float)(int32_t)c->v.s[1];
    c->v.f[14] = (float)(int32_t)c->v.s[14];
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[3] = c->v.f[18] / c->v.f[3];
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[2] * c->v.f[3]);
    c->v.s[2] = c->v.s[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[8] = c->v.f[10] * c->v.f[3];
    c->v.f[10] = c->v.f[0] * c->v.f[12];
    c->v.f[12] = c->v.f[14] * c->v.f[3];
    c->v.s[14] = c->v.s[20];
    ST32(c->r[6] + 672u, c->v.s[5]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[3]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[6] = c->v.f[0] * c->v.f[1];
    c->v.s[1] = c->v.s[20];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[6] + 676u, c->v.s[2]);
    ST32(c->r[6] + 680u, c->v.s[8]);
    ST32(c->r[6] + 684u, c->v.s[10]);
    c->v.f[8] = c->v.f[8] + c->v.f[12];
    c->v.f[10] = c->v.f[10] + c->v.f[6];
    ST32(c->r[6] + 688u, c->v.s[14]);
    ST32(c->r[6] + 692u, c->v.s[2]);
    c->v.f[8] = c->v.f[8] * c->v.f[22];
    c->v.f[10] = c->v.f[10] * c->v.f[22];
    c->v.s[0] = c->v.s[1] ^ 0x80000000u;
    ST32(c->r[6] + 696u, c->v.s[8]);
    ST32(c->r[6] + 700u, c->v.s[10]);
    ST32(c->r[6] + 704u, c->v.s[5]);
    ST32(c->r[6] + 708u, c->v.s[0]);
    ST32(c->r[6] + 712u, c->v.s[8]);
    ST32(c->r[6] + 716u, c->v.s[10]);
    ST32(c->r[6] + 720u, c->v.s[14]);
    ST32(c->r[6] + 724u, c->v.s[2]);
    ST32(c->r[6] + 728u, c->v.s[8]);
    ST32(c->r[6] + 732u, c->v.s[10]);
    ST32(c->r[6] + 736u, c->v.s[5]);
    ST32(c->r[6] + 740u, c->v.s[0]);
    ST32(c->r[6] + 744u, c->v.s[8]);
    ST32(c->r[6] + 748u, c->v.s[10]);
    ST32(c->r[6] + 752u, c->v.s[14]);
    ST32(c->r[6] + 756u, c->v.s[0]);
    ST32(c->r[6] + 760u, c->v.s[12]);
    ST32(c->r[6] + 764u, c->v.s[6]);
    c->r[6] = c->r[6] + 0x300u;
    if (COND_NE) { goto L_b7e2a0; }
L_b7e7f0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb7e7fcu; f_a82760(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb7e804u; f_a81a68(c);
    c->r[13] = c->r[13] + 0x360u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b7e82c(Cpu *restrict c) {
    FN_ENTER(0xb7e82cu);
L_b7e82c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[8] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0xb7e860u; f_a7ff38(c);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x164u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xbf6d4eu;
    if (COND_NE) { c->r[1] = 0x200u; }
    c->r[2] = 0xb7e8a0u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xb7e8a4u; f_a7fbb4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb7e8b4u; f_a7ff38(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0x5b0du;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x94380000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[3]); }
    if (COND_NE) { goto L_b7e8f8; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b7e928; }
L_b7e8f8:;
    c->r[1] = c->r[1] & 0xffff00ffu;
    c->r[2] = c->r[2] & 0x3fu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[8]); }
    c->r[1] = 0xb0du;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_b7e928:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b7e950; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_b7e950:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xebab9cu;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    { uint32_t ea = 0xb7e978u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_b7e998; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b7e9ac; }
L_b7e998:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_b7e9ac:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xb7e9d0u; f_a814c0(c);
    c->r[0] = 0x1be4u;
    c->r[6] = c->r[4];
    c->r[5] = 0x4000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b7eadc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7ea50; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
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
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_b7ea50:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7ea88; }
    c->r[1] = 0xec0550u;
    c->r[2] = 0xec0550u;
    { uint32_t ea = 0xb7ea68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb7ea6cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[5];
    goto L_b7ea90;
L_b7ea88:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b7ea90:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b7eab4; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b7ead0;
L_b7eab4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7ead0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b7eadc:;
    c->r[0] = 0x4390u;
    c->v.s[16] = 0x40400000u;
    c->v.s[18] = 0x3f000000u;
    c->r[7] = c->r[4] + 0x154u;
    c->r[5] = c->r[13] + 0x20u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x438cu;
    c->r[8] = c->r[4] + c->r[0];
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_b7eb14:;
    c->r[0] = 0xaaabu;
    c->r[6] = c->r[5];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[10] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[1] >> 1);
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->v.s[2] = c->r[2];
    c->r[3] = c->r[10] - c->r[0];
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[3];
    { uint32_t r = c->r[0] * c->r[3]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[2]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[3] + c->r[0]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[5]); }
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t r = c->r[0] * c->r[2] + c->r[0]; c->r[5] = r; }
    c->r[2] = c->r[3] + 0x1u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[3] + (c->r[1] >> 1);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[5]); }
    c->v.f[2] = (float)c->v.s[2];
    c->r[5] = c->r[6];
    c->r[3] = c->r[5];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.s[0] = c->r[2];
    c->r[2] = 0x0u;
    ST32(c->r[13] + 36u, c->v.s[2]);
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9];
    c->r[14] = 0xb7ebd4u; f_b6f4a8(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b7ec74; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7ec4c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x831u;
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
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b7ec4c:;
    c->r[1] = 0x41a0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8834u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x881e0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b7ec74:;
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5];
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->r[14] = 0xb7ec9cu; f_aafc68(c);
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], 0x6u);
    if (COND_NE) { goto L_b7eb14; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xb7ecccu; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b7edc8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7ed3c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[6] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[6] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_b7ed3c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7ed7c; }
    c->r[1] = 0xec0264u;
    c->r[2] = 0xec0264u;
    { uint32_t ea = 0xb7ed54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb7ed58u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b7ed84;
L_b7ed7c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_b7ed84:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b7eda4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b7edbc;
L_b7eda4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_b7edbc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_b7edc8:;
    c->r[5] = c->r[13] + 0x20u;
    c->r[10] = 0x0u;
L_b7edd0:;
    c->r[0] = 0xaaabu;
    c->r[6] = c->r[5];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[10] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[1] >> 1);
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->v.s[2] = c->r[2];
    c->r[3] = c->r[10] - c->r[0];
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[3];
    { uint32_t r = c->r[0] * c->r[3]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[2]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[3] + c->r[0]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[5]); }
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t r = c->r[0] * c->r[2] + c->r[0]; c->r[5] = r; }
    c->r[2] = c->r[3] + 0x1u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[3] + (c->r[1] >> 1);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[5]); }
    c->v.f[2] = (float)c->v.s[2];
    c->r[5] = c->r[6];
    c->r[3] = c->r[5];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.s[0] = c->r[2];
    c->r[2] = 0x0u;
    ST32(c->r[13] + 36u, c->v.s[2]);
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[0] << 1);
    c->r[0] = c->r[9];
    c->r[14] = 0xb7ee90u; f_b6f4a8(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a8u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b7ef30; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b7ef08; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x831u;
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
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b7ef08:;
    c->r[1] = 0x41a8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb835u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7bc80000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b7ef30:;
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5];
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->r[14] = 0xb7ef58u; f_aafc68(c);
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], 0x6u);
    if (COND_NE) { goto L_b7edd0; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb7ef6cu; f_a81a68(c);
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b7ef94(Cpu *restrict c) {
    FN_ENTER(0xb7ef94u);
L_b7ef94:;
    c->v.s[0] = LD32(c->r[0] + 116u);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[4] = 0x40400000u;
    c->v.s[10] = 0x3f800000u;
    c->v.s[6] = 0xbf800000u;
    c->v.s[2] = c->r[12];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.s[12] = LD32(c->r[2] + 4u);
    c->v.s[14] = LD32(c->r[3] + 12u);
    c->v.s[1] = LD32(c->r[2] + 12u);
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[5] = LD32(c->r[3] + 4u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.s[7] = c->r[2];
    c->v.f[2] = c->v.f[2] + c->v.f[2];
    c->v.f[8] = c->v.f[10] / c->v.f[4];
    c->v.f[10] = c->v.f[10] / c->v.f[0];
    c->v.s[0] = c->v.s[6];
    c->v.f[4] = (float)(int32_t)c->v.s[12];
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[12] = (float)(int32_t)c->v.s[14];
    c->v.s[14] = c->r[0];
    c->v.f[3] = (float)(int32_t)c->v.s[1];
    c->v.f[1] = (float)(int32_t)c->v.s[5];
    c->r[2] = f_subs(c, c->r[3], c->r[2]);
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[0] = f_subs(c, c->r[0], c->r[12]);
    c->v.f[3] = c->v.f[3] + c->v.f[3];
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = c->v.s[6];
    c->v.f[1] = c->v.f[10] * c->v.f[1];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[4] = (float)(int32_t)c->v.s[7];
    c->v.s[7] = c->r[3];
    ST32(c->r[1], c->v.s[0]);
    c->v.f[5] = (float)(int32_t)c->v.s[14];
    c->v.f[14] = c->v.f[4] * c->v.f[8];
    c->v.s[4] = c->v.s[6];
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[5] = c->v.f[5] + c->v.f[5];
    ST32(c->r[1] + 4u, c->v.s[2]);
    ST32(c->r[1] + 8u, c->v.s[14]);
    ST32(c->r[1] + 12u, c->v.s[1]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[5] = (float)(int32_t)c->v.s[7];
    ST32(c->r[1] + 16u, c->v.s[4]);
    ST32(c->r[1] + 20u, c->v.s[2]);
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[3]);
    c->r[12] = c->v.s[1];
    c->v.f[10] = c->v.f[10] * c->v.f[12];
    c->v.f[8] = c->v.f[5] * c->v.f[8];
    c->r[4] = c->v.s[14];
    (void)f_subs(c, c->r[0], c->r[2]);
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    if (COND_NE) { goto L_b7f0b0; }
    c->r[3] = c->v.s[10];
    c->r[0] = c->v.s[8];
    ST32(c->r[1] + 24u, c->v.s[8]);
    ST32(c->r[1] + 28u, c->v.s[1]);
    ST32(c->r[1] + 32u, c->v.s[0]);
    c->r[2] = c->r[4];
    ST32(c->r[1] + 36u, c->v.s[6]);
    c->r[4] = c->r[0];
    c->r[14] = c->r[3];
    goto L_b7f0d8;
L_b7f0b0:;
    c->r[2] = c->v.s[8];
    c->r[14] = c->v.s[10];
    c->r[3] = c->r[12];
    c->r[0] = c->r[4];
    ST32(c->r[1] + 24u, c->v.s[14]);
    ST32(c->r[1] + 28u, c->v.s[10]);
    ST32(c->r[1] + 32u, c->v.s[0]);
    ST32(c->r[1] + 36u, c->v.s[6]);
    c->r[12] = c->r[14];
    c->r[4] = c->r[2];
L_b7f0d8:;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[3]); }
    ST32(c->r[1] + 48u, c->v.s[4]);
    ST32(c->r[1] + 52u, c->v.s[2]);
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[12]); }
    ST32(c->r[1] + 64u, c->v.s[0]);
    ST32(c->r[1] + 68u, c->v.s[6]);
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[3]); }
    ST32(c->r[1] + 80u, c->v.s[4]);
    ST32(c->r[1] + 84u, c->v.s[6]);
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b7f114(Cpu *restrict c) {
    FN_ENTER(0xb7f114u);
L_b7f114:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x79u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7f1d8; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b7f1d8; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_b7f1d8; }
    c->r[5] = 0x0u;
    c->r[10] = c->r[13] + 0x28u;
    c->r[7] = c->r[13] + 0x2cu;
    c->r[6] = c->r[4] + 0x290u;
    c->r[2] = c->r[4] + 0x3cu;
    c->r[8] = c->r[13] + 0x20u;
    c->r[9] = c->r[13] + 0x24u;
    c->r[3] = c->r[4] + 0x34u;
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x12fu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[10]); }
    c->r[2] = c->r[4] + 0x30u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb7f19cu; f_b7f1e0(c);
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7f1d8; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[4] + 0x44u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[10]); }
    c->r[2] = c->r[4] + 0x40u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb7f1d8u; f_b7f1e0(c);
L_b7f1d8:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b7f1e0(Cpu *restrict c) {
    FN_ENTER(0xb7f1e0u);
L_b7f1e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[1];
    c->r[1] = 0xec3644u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[9] = c->r[3];
    c->r[7] = c->r[2];
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0xb7f210u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_b7f2f8; }
    c->r[10] = 0xe000u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xc00000u;
    if (COND_EQ) { goto L_b7f290; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[6] = c->r[11];
    c->r[11] = 0x10u;
    c->r[14] = 0xb7f23cu; f_d0804c(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4];
    c->r[4] = 0x1u;
    c->r[12] = 0x0u;
    c->r[14] = 0x2u;
    c->r[8] = 0xcu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[4] = c->r[3];
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    c->r[2] = (c->r[5] << 1);
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    c->r[11] = c->r[6];
    c->r[14] = 0xb7f28cu; f_d09098(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_b7f290:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_b7f43c; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xb7f2a8u; f_d0804c(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[2] = (c->r[5] << 1);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b7f3d4; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[11];
    c->r[14] = 0x2u;
    c->r[11] = 0xcu;
    c->r[4] = 0x1u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[14]); }
    c->r[14] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    c->r[11] = c->r[6];
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); }
    goto L_b7f3c0;
L_b7f2f8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_b7f360; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[10] = 0x10u;
    c->r[14] = 0xb7f310u; f_d0804c(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[4];
    c->r[12] = 0x2u;
    c->r[4] = 0xeu;
    c->r[6] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[12]); }
    c->r[12] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[10]); }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    c->r[2] = (c->r[5] << 1);
    c->r[3] = 0x1u;
    c->r[14] = 0xb7f35cu; f_d09098(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_b7f360:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_b7f43c; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xb7f378u; f_d0804c(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[2] = (c->r[5] << 1);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b7f404; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    c->r[12] = 0x2u;
    c->r[14] = 0xeu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
L_b7f3c0:;
    c->r[1] = c->r[3];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb7f3d0u; f_d09098(c);
    goto L_b7f438;
L_b7f3d4:;
    c->r[7] = 0x1u;
    c->r[1] = 0x2u;
    c->r[4] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0xbf3410u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xb7f404u + c->r[1];
    goto L_b7f430;
L_b7f404:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1u;
    c->r[12] = 0x0u;
    c->r[6] = 0x2u;
    c->r[4] = 0xeu;
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[12]); }
    c->r[1] = 0xbf33e0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xb7f434u + c->r[1];
L_b7f430:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb7f438u; f_d091ec(c);
L_b7f438:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_b7f43c:;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_b7f530; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xb7f458u; f_d0804c(c);
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[2] = (c->r[5] << 1);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_b7f4a4; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = 0x0u;
    c->r[14] = 0x80u;
    c->r[6] = 0x5u;
    c->r[5] = 0xfu;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    goto L_b7f4e8;
L_b7f4a4:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b7f4f8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x5u;
    c->r[6] = 0xfu;
    c->r[4] = 0x1u;
    c->r[12] = 0x10u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[14] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[12]); }
L_b7f4e8:;
    c->r[1] = c->r[3];
    c->r[3] = 0x1u;
    c->r[14] = 0xb7f4f4u; f_d09098(c);
    goto L_b7f52c;
L_b7f4f8:;
    c->r[4] = 0x1u;
    c->r[1] = 0x10u;
    c->r[7] = 0x0u;
    c->r[6] = 0x5u;
    c->r[5] = 0xfu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); }
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0xbf31b9u;
    c->r[2] = 0xb7f528u + c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb7f52cu; f_d091ec(c);
L_b7f52c:;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
L_b7f530:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b7f548(Cpu *restrict c) {
    FN_ENTER(0xb7f548u);
L_b7f548:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b7f570; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb7f568u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x290u; ST32(ea, c->r[0]); }
L_b7f570:;
    { uint32_t ea = c->r[4] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb7f588u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x294u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b7f594(Cpu *restrict c) {
    FN_ENTER(0xb7f594u);
L_b7f594:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[0] = c->r[2] + 0x1c0u; }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_b7f5bc(Cpu *restrict c) {
    FN_ENTER(0xb7f5bcu);
L_b7f5bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    c->r[1] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[2] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[1] = 0x200u; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_b7f5f8; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[5] = c->r[1] | 0x2000u; }
    if (COND_EQ) { c->r[6] = c->r[5]; }
    goto L_b7f600;
L_b7f5f8:;
    c->r[5] = c->r[1] | 0x2000u;
    c->r[6] = c->r[1];
L_b7f600:;
    c->r[0] = 0xbf5e58u;
    c->r[2] = 0xb7f60cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xb7f610u; f_a7fbb4(c);
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[5] & 0xFFFFu) | ((c->r[6] << 16) & 0xFFFF0000u);
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b7f630(Cpu *restrict c) {
    FN_ENTER(0xb7f630u);
L_b7f630:;
    c->v.s[0] = LD32(c->r[0] + 368u);
    c->v.s[2] = LD32(c->r[0] + 576u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7bc; }
    c->v.s[2] = LD32(c->r[0] + 372u);
    c->v.s[4] = LD32(c->r[0] + 580u);
    c->r[12] = c->r[0] + 0x244u;
    c->r[3] = c->v.s[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 376u);
    c->v.s[4] = LD32(c->r[0] + 584u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 380u);
    c->v.s[4] = LD32(c->r[0] + 588u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 384u);
    c->v.s[4] = LD32(c->r[0] + 592u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 388u);
    c->v.s[4] = LD32(c->r[0] + 596u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 392u);
    c->v.s[4] = LD32(c->r[0] + 600u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 396u);
    c->v.s[4] = LD32(c->r[0] + 604u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 400u);
    c->v.s[4] = LD32(c->r[0] + 608u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 404u);
    c->v.s[4] = LD32(c->r[0] + 612u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 408u);
    c->v.s[4] = LD32(c->r[0] + 616u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 412u);
    c->v.s[4] = LD32(c->r[0] + 620u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 416u);
    c->v.s[4] = LD32(c->r[0] + 624u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 420u);
    c->v.s[4] = LD32(c->r[0] + 628u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 424u);
    c->v.s[4] = LD32(c->r[0] + 632u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 428u);
    c->v.s[4] = LD32(c->r[0] + 636u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 432u);
    c->v.s[4] = LD32(c->r[0] + 640u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 436u);
    c->v.s[4] = LD32(c->r[0] + 644u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_b7f7c4; }
    c->v.s[2] = LD32(c->r[0] + 440u);
    c->v.s[4] = LD32(c->r[0] + 648u);
    c->r[1] = 0x1u;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b7f85c; }
    goto L_b7f7c4;
L_b7f7bc:;
    { uint32_t ea = c->r[0] + 0x174u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[0] + 0x244u;
L_b7f7c4:;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x280u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x284u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x288u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28cu; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 576u, c->v.s[0]);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x248u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x180u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x250u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x254u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x258u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x25cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x190u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x260u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x194u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x264u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x198u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x268u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x19cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x26cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x270u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x274u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x278u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1acu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x27cu; ST32(ea, c->r[2]); }
L_b7f85c:;
    c->r[2] = 0xec1590u;
    c->v.s[0] = LD32(c->r[0] + 352u);
    c->v.s[2] = LD32(c->r[0] + 560u);
    { uint32_t ea = 0xb7f870u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[2] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_b7f890; }
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[0] + 0x234u;
    goto L_b7f8e8;
L_b7f890:;
    c->r[2] = 0xec1558u;
    c->v.s[2] = LD32(c->r[0] + 356u);
    c->v.s[4] = LD32(c->r[0] + 564u);
    c->r[12] = c->r[0] + 0x234u;
    { uint32_t ea = 0xb7f8a8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->v.s[2];
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.f[2] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_b7f8e8; }
    c->r[2] = 0xec152cu;
    c->v.s[2] = LD32(c->r[0] + 360u);
    c->v.s[4] = LD32(c->r[0] + 568u);
    { uint32_t ea = 0xb7f8d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = LD32(c->r[2] + 8u);
    c->v.f[2] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_b7f900; }
L_b7f8e8:;
    ST32(c->r[0] + 560u, c->v.s[0]);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x238u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x23cu; ST32(ea, c->r[1]); }
L_b7f900:;
    c->r[0] = c->r[1];
    return;
}
void f_b7f914(Cpu *restrict c) {
    FN_ENTER(0xb7f914u);
L_b7f914:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b7f918(Cpu *restrict c) {
    FN_ENTER(0xb7f918u);
L_b7f918:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b7f91c(Cpu *restrict c) {
    FN_ENTER(0xb7f91cu);
L_b7f91c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b7f920(Cpu *restrict c) {
    FN_ENTER(0xb7f920u);
L_b7f920:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b7f924(Cpu *restrict c) {
    FN_ENTER(0xb7f924u);
L_b7f924:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b7f928(Cpu *restrict c) {
    FN_ENTER(0xb7f928u);
L_b7f928:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b7f92c(Cpu *restrict c) {
    FN_ENTER(0xb7f92cu);
L_b7f92c:;
    c->r[0] = 0xec2e6cu;
    { uint32_t ea = 0xb7f938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b7f93c(Cpu *restrict c) {
    FN_ENTER(0xb7f93cu);
L_b7f93c:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_b7f950(Cpu *restrict c) {
    FN_ENTER(0xb7f950u);
L_b7f950:;
    c->r[0] = 0x1u;
    return;
}
void f_b7f958(Cpu *restrict c) {
    FN_ENTER(0xb7f958u);
L_b7f958:;
    c->r[0] = 0x0u;
    return;
}
void f_b7f960(Cpu *restrict c) {
    FN_ENTER(0xb7f960u);
L_b7f960:;
    return;
}
void f_b7f964(Cpu *restrict c) {
    FN_ENTER(0xb7f964u);
L_b7f964:;
    c->r[0] = 0xeb91d8u;
    c->v.s[3] = 0x0u;
    { uint32_t ea = 0xb7f974u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); }
    return;
}
void f_b7f980(Cpu *restrict c) {
    FN_ENTER(0xb7f980u);
L_b7f980:;
    return;
}
void f_b7f984(Cpu *restrict c) {
    FN_ENTER(0xb7f984u);
L_b7f984:;
    return;
}
void f_b7f988(Cpu *restrict c) {
    FN_ENTER(0xb7f988u);
L_b7f988:;
    return;
}
void f_b7f98c(Cpu *restrict c) {
    FN_ENTER(0xb7f98cu);
L_b7f98c:;
    return;
}
void f_b7f990(Cpu *restrict c) {
    FN_ENTER(0xb7f990u);
L_b7f990:;
    c->r[0] = 0x0u;
    return;
}
void f_b7f998(Cpu *restrict c) {
    FN_ENTER(0xb7f998u);
L_b7f998:;
    return;
}
void f_b7f99c(Cpu *restrict c) {
    FN_ENTER(0xb7f99cu);
L_b7f99c:;
    c->r[0] = 0x1u;
    return;
}
void f_b7f9a4(Cpu *restrict c) {
    FN_ENTER(0xb7f9a4u);
L_b7f9a4:;
    return;
}
void f_b7f9a8(Cpu *restrict c) {
    FN_ENTER(0xb7f9a8u);
L_b7f9a8:;
    return;
}
void f_b7f9ac(Cpu *restrict c) {
    FN_ENTER(0xb7f9acu);
L_b7f9ac:;
    c->r[0] = 0xec2e50u;
    { uint32_t ea = 0xb7f9b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b7f9bc(Cpu *restrict c) {
    FN_ENTER(0xb7f9bcu);
L_b7f9bc:;
    c->r[0] = 0xec2e44u;
    { uint32_t ea = 0xb7f9c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b7f9cc(Cpu *restrict c) {
    FN_ENTER(0xb7f9ccu);
L_b7f9cc:;
    c->r[0] = 0xec2e5cu;
    { uint32_t ea = 0xb7f9d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b7f9dc(Cpu *restrict c) {
    FN_ENTER(0xb7f9dcu);
L_b7f9dc:;
    c->r[0] = 0xec2e54u;
    { uint32_t ea = 0xb7f9e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b7f9ec(Cpu *restrict c) {
    FN_ENTER(0xb7f9ecu);
L_b7f9ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb7fa0cu; rt_dispatch(c);
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->v.s[0]); ST32(ea + 4u, c->v.s[1]); ST32(ea + 8u, c->v.s[2]); ST32(ea + 12u, c->v.s[3]); }
    c->r[14] = 0xb7fa1cu; f_a0328c(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b7fa24(Cpu *restrict c) {
    FN_ENTER(0xb7fa24u);
L_b7fa24:;
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1d0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1acu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1c8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; ST32(ea, c->r[1]); }
    return;
}
void f_b7fac8(Cpu *restrict c) {
    FN_ENTER(0xb7fac8u);
L_b7fac8:;
    c->r[0] = 0xec2d80u;
    { uint32_t ea = 0xb7fad4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b7fad8(Cpu *restrict c) {
    FN_ENTER(0xb7fad8u);
L_b7fad8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb7faf8u; rt_dispatch(c);
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->v.s[0]); ST32(ea + 4u, c->v.s[1]); ST32(ea + 8u, c->v.s[2]); ST32(ea + 12u, c->v.s[3]); }
    c->r[14] = 0xb7fb08u; f_a0328c(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b7fb10(Cpu *restrict c) {
    FN_ENTER(0xb7fb10u);
L_b7fb10:;
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x174u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x17cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x180u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1a8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1acu; ST32(ea, c->r[1]); }
    return;
}
void f_b7fbb4(Cpu *restrict c) {
    FN_ENTER(0xb7fbb4u);
L_b7fbb4:;
    { uint32_t ea = c->r[2] + 0x3d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x3d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_b7fbd8(Cpu *restrict c) {
    FN_ENTER(0xb7fbd8u);
L_b7fbd8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x17a2298u;
    c->r[6] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    c->r[8] = 0x0u;
    c->r[7] = 0x3f800000u;
    c->r[3] = 0x160u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xbf800000u;
    c->r[0] = 0xb7fc08u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
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
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x48u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[6]); }
    c->r[0] = 0xec2b20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = 0xb7fc84u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xeb9674u;
    { uint32_t ea = 0xb7fc8cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xbf5663u;
    c->r[1] = 0xb7fc94u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xb7fc98u; f_9aedcc(c);
    c->r[0] = 0xec2bb8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xb7fcacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xec2ae4u;
    { uint32_t ea = 0xb7fcbcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xb7fcc0u; f_15effb0(c);
    c->r[0] = 0xec1078u;
    c->r[1] = 0xeba0e8u;
    { uint32_t ea = 0xb7fcd0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb7fcd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0xb7fcd8u; f_200288(c);
    c->r[0] = 0xec2b0cu;
    c->r[1] = 0xbf576fu;
    c->r[2] = c->r[4];
    c->r[3] = 0x190u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb7fcfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb7fd00u + c->r[1];
    c->r[14] = 0xb7fd00u; f_9aedcc(c);
    c->r[1] = 0xec2b48u;
    c->r[2] = c->r[4];
    c->r[3] = 0x190u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb7fd20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xec2ad8u;
    c->r[1] = 0xbf57c7u;
    { uint32_t ea = 0xb7fd34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb7fd38u + c->r[1];
    c->r[14] = 0xb7fd38u; f_9aedcc(c);
    c->r[1] = 0xec2b14u;
    c->r[2] = c->r[4];
    c->r[3] = 0x170u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb7fd58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xec2ac8u;
    c->r[1] = 0xbf57dbu;
    { uint32_t ea = 0xb7fd6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb7fd70u + c->r[1];
    c->r[14] = 0xb7fd70u; f_9aedcc(c);
    c->r[1] = 0xec2ae0u;
    c->r[2] = c->r[4];
    c->r[3] = 0x330u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb7fd90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xec2a98u;
    c->r[1] = 0xbf57c2u;
    { uint32_t ea = 0xb7fda4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb7fda8u + c->r[1];
    c->r[14] = 0xb7fda8u; f_9aedcc(c);
    c->r[1] = 0xec2aacu;
    c->r[2] = c->r[4];
    c->r[3] = 0x2a0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb7fdc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xec2a78u;
    c->r[1] = 0xbf57dcu;
    { uint32_t ea = 0xb7fddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb7fde0u + c->r[1];
    c->r[14] = 0xb7fde0u; f_9aedcc(c);
    c->r[1] = 0xec2a8cu;
    { uint32_t ea = 0xb7fdecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xec2a64u;
    { uint32_t ea = 0xb7fdfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[0] = 0xec29f8u;
    { uint32_t ea = 0xb7fe64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b7ff28(Cpu *restrict c) {
    FN_ENTER(0xb7ff28u);
L_b7ff28:;
    c->r[0] = 0x0u;
    return;
}
void f_b7ff30(Cpu *restrict c) {
    FN_ENTER(0xb7ff30u);
L_b7ff30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xec2934u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb7ff48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb8e0cu;
    { uint32_t ea = 0xb7ff58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb7ff5cu; f_dd5d64(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_b7ff70(Cpu *restrict c) {
    FN_ENTER(0xb7ff70u);
L_b7ff70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xec28f4u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb7ff88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb8dccu;
    { uint32_t ea = 0xb7ff98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb7ff9cu; f_dd5d64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb7ffa4u; f_a879b4(c);
    c->r[0] = 0xec28d0u;
    { uint32_t ea = 0xb7ffb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb7ffb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b7ffd0(Cpu *restrict c) {
    FN_ENTER(0xb7ffd0u);
L_b7ffd0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[14] = 0xb7ffe4u; f_a87a24(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xb7ffecu; f_9bb638(c);
    c->r[1] = 0xbf4ebfu;
    c->r[7] = 0x6u;
    c->r[6] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x800000u;
    c->r[1] = 0xb80004u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xec2870u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = 0xb80014u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xec285cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb8002cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xb80064u; f_9bb638(c);
    c->r[1] = 0xbd217fu;
    c->r[11] = 0x0u;
    c->r[1] = 0xb80074u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xec280cu;
    { uint32_t ea = 0xb80080u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xec27f8u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xb80098u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
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
    c->r[14] = 0xb800ecu; f_9bb638(c);
    c->r[1] = 0xbf1f3cu;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0xb80104u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x34u;
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
    c->r[14] = 0xb80164u; f_9bb638(c);
    c->r[1] = 0xbeda73u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80178u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x38u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xb801e0u; f_9bb638(c);
    c->r[1] = 0xbf1e10u;
    c->r[1] = 0xb801ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x3cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b80258(Cpu *restrict c) {
    FN_ENTER(0xb80258u);
L_b80258:;
    { uint32_t ea = c->r[0] + 0x32u; uint32_t v = LD16(ea); c->r[0] = v; }
    return;
}
void f_b80260(Cpu *restrict c) {
    FN_ENTER(0xb80260u);
L_b80260:;
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[1]); }
    return;
}
void f_b80268(Cpu *restrict c) {
    FN_ENTER(0xb80268u);
L_b80268:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    return;
}
void f_b80270(Cpu *restrict c) {
    FN_ENTER(0xb80270u);
L_b80270:;
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    return;
}
void f_b80278(Cpu *restrict c) {
    FN_ENTER(0xb80278u);
L_b80278:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b8027c(Cpu *restrict c) {
    FN_ENTER(0xb8027cu);
L_b8027c:;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); } }
    return;
}
void f_b802a4(Cpu *restrict c) {
    FN_ENTER(0xb802a4u);
L_b802a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xec25e0u;
    { uint32_t ea = 0xb802b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb802b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xa0u;
    c->pc = c->r[5]; c->r[14] = 0xb802d0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xb802d8u; f_a87958(c);
    c->r[0] = 0xec2590u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb802ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb8a60u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb80304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb80308u; f_dd5cc8(c);
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec256cu;
    { uint32_t ea = 0xb8032cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb8810u;
    { uint32_t ea = 0xb8033cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8000u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x453b0000u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b80394(Cpu *restrict c) {
    FN_ENTER(0xb80394u);
L_b80394:;
    return;
}
void f_b80398(Cpu *restrict c) {
    FN_ENTER(0xb80398u);
L_b80398:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xec24ccu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb803b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb89a4u;
    { uint32_t ea = 0xb803c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb803c4u; f_dd5d64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb803ccu; f_a879b4(c);
    c->r[0] = 0xec24bcu;
    { uint32_t ea = 0xb803d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb803d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b803f8(Cpu *restrict c) {
    FN_ENTER(0xb803f8u);
L_b803f8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xb8040cu; f_b7ffd0(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb80434u; f_9bb638(c);
    c->r[1] = 0xbe8452u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xb8044cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x70u;
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
    c->r[14] = 0xb804acu; f_9bb638(c);
    c->r[1] = 0xbf1b56u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb804c0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
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
    c->r[14] = 0xb80524u; f_9bb638(c);
    c->r[1] = 0xbf1aedu;
    c->r[1] = 0xb80530u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x94u;
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
void f_b80584(Cpu *restrict c) {
    FN_ENTER(0xb80584u);
L_b80584:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b80658; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb805c8u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[4] + 132u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[12] = LD32(c->r[4] + 128u);
    c->v.s[1] = LD32(c->r[4] + 136u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[4] = LD32(c->r[0] + 48u);
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.s[14] = LD32(c->r[0] + 52u);
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    c->v.f[4] = c->v.f[14] + c->v.f[6];
    c->v.f[2] = c->v.f[9] + c->v.f[8];
    ST32(c->r[4] + 128u, c->v.s[0]);
    ST32(c->r[4] + 132u, c->v.s[4]);
    ST32(c->r[4] + 136u, c->v.s[2]);
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[4];
    c->r[3] = c->v.s[0];
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_b80664;
L_b80658:;
    c->v.s[0] = c->r[3];
    c->v.s[4] = c->r[2];
    c->v.s[2] = c->r[1];
L_b80664:;
    c->v.s[6] = LD32(c->r[4] + 148u);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.f[8] = c->v.f[0] - c->v.f[6];
    c->v.f[10] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[4] + 64u, c->v.s[8]);
    c->v.f[8] = c->v.f[2] - c->v.f[6];
    ST32(c->r[4] + 68u, c->v.s[10]);
    ST32(c->r[4] + 72u, c->v.s[8]);
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 80u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    ST32(c->r[4] + 84u, c->v.s[4]);
    ST32(c->r[4] + 88u, c->v.s[0]);
    ST32(c->r[4] + 108u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b806d8(Cpu *restrict c) {
    FN_ENTER(0xb806d8u);
L_b806d8:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b806dc(Cpu *restrict c) {
    FN_ENTER(0xb806dcu);
L_b806dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[4] + 132u);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[4] + 128u);
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[4] + 136u);
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b80730; }
    c->r[14] = 0xb8072cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b80730:;
    c->v.s[0] = LD32(c->r[5] + 12u);
    c->v.s[4] = LD32(c->r[4] + 148u);
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b80750; }
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b80750:;
    c->v.s[8] = LD32(c->r[4] + 144u);
    c->v.s[0] = 0x3f800000u;
    c->v.d[3] = c->v.d[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b8077c; }
    c->v.f[4] = c->v.f[4] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.s[6] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    c->v.f[6] = c->v.f[6] - c->v.f[2];
L_b8077c:;
    c->v.s[2] = 0x0u;
    { float t0 = nftz(vmax_f(nftz(c->v.f[6]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[7]), nftz(c->v.f[3]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[2] = LD32(c->r[4] + 52u);
    { float t0 = nftz(vmin_f(nftz(c->v.f[32]), nftz(c->v.f[0]))); float t1 = nftz(vmin_f(nftz(c->v.f[33]), nftz(c->v.f[1]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b80798(Cpu *restrict c) {
    FN_ENTER(0xb80798u);
L_b80798:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0xec20f4u;
    { uint32_t ea = 0xb807a8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb807acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xe0u;
    c->pc = c->r[5]; c->r[14] = 0xb807c4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xb807ccu; f_a87958(c);
    c->r[0] = 0xec209cu;
    c->r[5] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb807e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb856cu;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb807f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb807fcu; f_dd5cc8(c);
    c->r[1] = 0xec2074u;
    c->r[0] = 0x3f800000u;
    c->r[12] = ~0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[12]); }
    c->r[0] = 0xeb8a28u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = 0xb8082cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb80830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb830cu;
    { uint32_t ea = 0xb80840u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[7]); }
    c->r[7] = 0x8000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x453b0000u;
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b808f8(Cpu *restrict c) {
    FN_ENTER(0xb808f8u);
L_b808f8:;
    return;
}
void f_b808fc(Cpu *restrict c) {
    FN_ENTER(0xb808fcu);
L_b808fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xec1f68u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb80914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb8440u;
    { uint32_t ea = 0xb80924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb80928u; f_dd5d64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb80930u; f_a879b4(c);
    c->r[0] = 0xec1f60u;
    { uint32_t ea = 0xb8093cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8093cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b8095c(Cpu *restrict c) {
    FN_ENTER(0xb8095cu);
L_b8095c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xb80970u; f_b7ffd0(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb80998u; f_9bb638(c);
    c->r[1] = 0xbe7eeeu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xb809b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x70u;
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
    c->r[14] = 0xb80a10u; f_9bb638(c);
    c->r[1] = 0xbe3230u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80a24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
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
    c->r[14] = 0xb80a88u; f_9bb638(c);
    c->r[1] = 0xbf17b9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80a9cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x80u;
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
    c->r[14] = 0xb80afcu; f_9bb638(c);
    c->r[1] = 0xbf39adu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80b10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd0u;
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
    c->r[14] = 0xb80b74u; f_9bb638(c);
    c->r[1] = 0xbf2e26u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80b88u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd4u;
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
    c->r[14] = 0xb80becu; f_9bb638(c);
    c->r[1] = 0xbf2db7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80c00u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd8u;
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
    c->r[14] = 0xb80c64u; f_9bb638(c);
    c->r[1] = 0xbf139eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80c78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc0u;
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
    c->r[14] = 0xb80cd8u; f_9bb638(c);
    c->r[1] = 0xbf1331u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80cecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc4u;
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
    c->r[14] = 0xb80d50u; f_9bb638(c);
    c->r[1] = 0xbf3765u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb80d64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc8u;
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
    c->r[14] = 0xb80dc4u; f_9bb638(c);
    c->r[1] = 0xbf1268u;
    c->r[1] = 0xb80dd0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xccu;
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
void f_b80e40(Cpu *restrict c) {
    FN_ENTER(0xb80e40u);
L_b80e40:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b80e70; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); } }
L_b80e70:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b80f2c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb80eacu; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[4] + 164u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[12] = LD32(c->r[4] + 160u);
    c->v.s[1] = LD32(c->r[4] + 168u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.s[14] = LD32(c->r[0] + 52u);
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[16] = c->v.f[8] + c->v.f[10];
    c->v.f[20] = c->v.f[14] + c->v.f[6];
    c->v.f[18] = c->v.f[9] + c->v.f[4];
    ST32(c->r[4] + 160u, c->v.s[16]);
    ST32(c->r[4] + 164u, c->v.s[20]);
    ST32(c->r[4] + 168u, c->v.s[18]);
    goto L_b80f38;
L_b80f2c:;
    c->v.s[16] = c->r[1];
    c->v.s[20] = c->r[2];
    c->v.s[18] = c->r[3];
L_b80f38:;
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b81060; }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b80fe4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb80f6cu; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 24u);
    c->v.s[2] = LD32(c->r[0] + 20u);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 16u);
    c->v.s[4] = c->r[7];
    c->v.s[14] = c->r[6];
    c->v.s[1] = LD32(c->r[0] + 32u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 52u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.s[12] = c->r[5];
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[0] = c->v.f[9] + c->v.f[0];
    c->v.f[2] = c->v.f[7] + c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->r[5] = c->v.s[0];
    c->r[7] = c->v.s[2];
    c->r[6] = c->v.s[4];
L_b80fe4:;
    c->v.s[0] = c->r[7];
    c->v.s[2] = c->r[6];
    c->v.f[20] = c->v.f[0] - c->v.f[20];
    c->v.f[16] = c->v.f[2] - c->v.f[16];
    c->v.s[0] = c->r[5];
    c->v.f[18] = c->v.f[0] - c->v.f[18];
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b81020; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb81020u; f_15efddc(c);
L_b81020:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b81044; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
L_b81044:;
    ST32(c->r[4] + 176u, c->v.s[16]);
    ST32(c->r[4] + 180u, c->v.s[20]);
    ST32(c->r[4] + 184u, c->v.s[18]);
    c->r[7] = c->r[4] + 0xbcu;
    c->r[5] = c->r[4] + 0xb8u;
    c->r[6] = c->r[4] + 0xb4u;
    goto L_b81108;
L_b81060:;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4];
    c->r[5] = c->r[4] + 0xb8u;
    c->r[6] = c->r[4] + 0xb4u;
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xbcu; ST32(ea, c->r[0]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] - 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b81110; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb810a8u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[4] + 180u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[12] = LD32(c->r[4] + 176u);
    c->v.s[1] = LD32(c->r[4] + 184u);
    c->v.s[3] = LD32(c->r[0] + 32u);
    c->v.s[5] = LD32(c->r[0] + 36u);
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[7]);
    ST32(c->r[4] + 176u, c->v.s[10]);
    ST32(c->r[4] + 180u, c->v.s[6]);
    ST32(c->r[4] + 184u, c->v.s[4]);
L_b81108:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_b81110:;
    c->v.s[0] = LD32(c->r[4] + 200u);
    c->v.s[16] = 0x3f000000u;
    c->v.s[2] = 0x3c8efa36u;
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0xb81128u; f_15f0184(c);
    c->v.s[2] = 0x3e800000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b81148; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb81148u; f_15efddc(c);
L_b81148:;
    c->v.s[2] = LD32(c->r[4] + 196u);
    c->v.s[8] = LD32(c->r[4] + 160u);
    c->v.s[10] = LD32(c->r[4] + 176u);
    c->v.s[4] = LD32(c->r[4] + 164u);
    c->v.s[6] = LD32(c->r[4] + 168u);
    c->v.s[12] = LD32(c->r[6]);
    c->v.s[1] = LD32(c->r[5]);
    c->r[0] = 0x0u;
    c->v.f[14] = c->v.f[2] * c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[1]);
    ST32(c->r[4] + 96u, c->v.s[8]);
    c->v.f[2] = c->v.f[8] - c->v.f[0];
    ST32(c->r[4] + 100u, c->v.s[4]);
    ST32(c->r[4] + 104u, c->v.s[6]);
    ST32(c->r[4] + 108u, c->v.s[0]);
    c->v.f[10] = c->v.f[4] - c->v.f[0];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    ST32(c->r[4] + 64u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] - c->v.f[0];
    ST32(c->r[4] + 68u, c->v.s[10]);
    ST32(c->r[4] + 72u, c->v.s[2]);
    c->v.f[2] = c->v.f[0] + c->v.f[8];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 80u, c->v.s[2]);
    ST32(c->r[4] + 84u, c->v.s[4]);
    ST32(c->r[4] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b811e8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); } }
L_b811e8:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b811f8(Cpu *restrict c) {
    FN_ENTER(0xb811f8u);
L_b811f8:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b811fc(Cpu *restrict c) {
    FN_ENTER(0xb811fcu);
L_b811fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[4] + 160u);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[4] + 164u);
    c->v.s[8] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[4] + 168u);
    c->v.s[10] = LD32(c->r[5] + 8u);
    c->v.f[26] = c->v.f[8] - c->v.f[2];
    c->v.f[24] = c->v.f[6] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[4];
    c->v.f[20] = c->v.f[26] * c->v.f[26];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[16] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    c->v.s[18] = c->v.s[16];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8125c; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xb81258u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_b8125c:;
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b81274; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xb81270u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_b81274:;
    c->v.s[0] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b81298; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_b81298:;
    c->v.s[0] = LD32(c->r[5] + 12u);
    c->v.s[2] = LD32(c->r[4] + 196u);
    c->v.s[16] = 0x0u;
    c->v.f[20] = c->v.f[18] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[20], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_b81374; }
    c->v.s[0] = LD32(c->r[4] + 200u);
    c->v.s[2] = LD32(c->r[4] + 204u);
    c->v.s[19] = 0x43340000u;
    c->v.s[21] = 0x40490fdbu;
    c->v.s[23] = 0x3f000000u;
    c->v.s[28] = LD32(c->r[4] + 180u);
    c->v.s[30] = LD32(c->r[4] + 184u);
    c->v.s[17] = LD32(c->r[4] + 176u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = c->v.f[0] / c->v.f[19];
    c->v.f[0] = c->v.f[0] * c->v.f[21];
    c->v.f[0] = c->v.f[0] * c->v.f[23];
    c->r[14] = 0xb812e8u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[4] + 200u);
    c->v.f[26] = c->v.f[26] * c->v.f[28];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[24] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] / c->v.f[19];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[22] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] * c->v.f[21];
    c->v.f[0] = c->v.f[0] * c->v.f[23];
    c->r[14] = 0xb8130cu; f_15efdf4(c);
    vfp_cmp_f(c, c->v.f[26], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b81374; }
    c->v.s[2] = LD32(c->r[4] + 192u);
    vfp_cmp_f(c, c->v.f[20], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b81330; }
    c->v.s[2] = 0x3f800000u;
    goto L_b81348;
L_b81330:;
    c->v.s[4] = LD32(c->r[4] + 196u);
    c->v.f[6] = c->v.f[20] - c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[6] / c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[2];
L_b81348:;
    vfp_cmp_f(c, c->v.f[26], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b8136c; }
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[4] = c->v.f[26] - c->v.f[18];
    c->v.s[6] = 0x3f800000u;
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
L_b8136c:;
    c->v.s[0] = LD32(c->r[4] + 52u);
    c->v.f[16] = c->v.f[2] * c->v.f[0];
L_b81374:;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b81390(Cpu *restrict c) {
    FN_ENTER(0xb81390u);
L_b81390:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xec1504u;
    { uint32_t ea = 0xb813a0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb813a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xc0u;
    c->pc = c->r[5]; c->r[14] = 0xb813bcu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xb813c4u; f_a87958(c);
    c->r[0] = 0xec14a4u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb813d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb7974u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb813f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb813f4u; f_dd5cc8(c);
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec1490u;
    { uint32_t ea = 0xb81418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb7720u;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb8142cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x453b0000u;
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b81498(Cpu *restrict c) {
    FN_ENTER(0xb81498u);
L_b81498:;
    return;
}
void f_b8149c(Cpu *restrict c) {
    FN_ENTER(0xb8149cu);
L_b8149c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xec13c8u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb814b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb78a0u;
    { uint32_t ea = 0xb814c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb814c8u; f_dd5d64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb814d0u; f_a879b4(c);
    c->r[0] = 0xec13c8u;
    { uint32_t ea = 0xb814dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb814dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b814fc(Cpu *restrict c) {
    FN_ENTER(0xb814fcu);
L_b814fc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xb81510u; f_b7ffd0(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb81538u; f_9bb638(c);
    c->r[1] = 0xbf305cu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xb81550u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x70u;
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
    c->r[14] = 0xb815b0u; f_9bb638(c);
    c->r[1] = 0xbf2feeu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb815c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x80u;
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
    c->r[14] = 0xb81628u; f_9bb638(c);
    c->r[1] = 0xbf09dau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb8163cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xb0u;
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
    c->r[14] = 0xb8169cu; f_9bb638(c);
    c->r[1] = 0xbf0975u;
    c->r[1] = 0xb816a8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xb4u;
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
void f_b81700(Cpu *restrict c) {
    FN_ENTER(0xb81700u);
L_b81700:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[12] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b8173c; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[1];
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); } }
L_b8173c:;
    c->r[8] = c->r[4];
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_b818c0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb81794u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[4] + 148u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[12] = LD32(c->r[4] + 144u);
    c->v.s[1] = LD32(c->r[4] + 152u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->r[5] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.s[14] = LD32(c->r[0] + 52u);
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[0] = c->v.f[8] + c->v.f[10];
    c->v.f[2] = c->v.f[14] + c->v.f[6];
    c->v.f[4] = c->v.f[9] + c->v.f[4];
    ST32(c->r[4] + 144u, c->v.s[0]);
    ST32(c->r[4] + 148u, c->v.s[2]);
    ST32(c->r[4] + 152u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb81828u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[4] + 164u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[12] = LD32(c->r[4] + 160u);
    c->v.s[1] = LD32(c->r[4] + 168u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.s[14] = LD32(c->r[0] + 52u);
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[0] = c->v.f[8] + c->v.f[10];
    c->v.f[2] = c->v.f[14] + c->v.f[6];
    c->v.f[4] = c->v.f[9] + c->v.f[4];
    ST32(c->r[4] + 160u, c->v.s[0]);
    ST32(c->r[4] + 164u, c->v.s[2]);
    ST32(c->r[4] + 168u, c->v.s[4]);
    c->v.s[8] = LD32(c->r[4] + 136u);
    c->v.s[4] = LD32(c->r[4] + 116u);
    c->v.s[10] = LD32(c->r[4] + 120u);
    c->v.s[0] = LD32(c->r[4] + 112u);
    c->v.s[2] = LD32(c->r[4] + 128u);
    c->v.s[6] = LD32(c->r[4] + 132u);
    goto L_b818d8;
L_b818c0:;
    c->v.s[0] = c->r[14];
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[3];
    c->v.s[6] = c->r[5];
    c->v.s[10] = c->r[6];
    c->v.s[8] = c->r[2];
L_b818d8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[0] = c->r[7];
    c->r[1] = c->r[7];
    c->r[2] = c->r[7];
    c->r[3] = c->r[7];
    c->r[6] = c->r[7];
    c->v.s[14] = 0x3f000000u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    if (COND_GT) { c->r[0] = c->r[8]; }
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    if (COND_MI) { c->r[1] = c->r[8]; }
    if (COND_GT) { c->r[2] = c->r[8]; }
    c->v.s[8] = LD32(c->r[2] + 8u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[3] = c->r[8]; }
    if (COND_GT) { c->r[6] = c->r[8]; }
    c->v.s[0] = LD32(c->r[4] + 180u);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[3] + 4u);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[7] = c->r[8]; }
    c->v.s[2] = LD32(c->r[7]);
    c->v.f[12] = c->v.f[0] + c->v.f[12];
    c->v.f[10] = c->v.f[10] - c->v.f[0];
    c->v.f[8] = c->v.f[0] + c->v.f[8];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[1] = c->v.f[6] + c->v.f[4];
    c->v.f[0] = c->v.f[2] + c->v.f[12];
    ST32(c->r[4] + 64u, c->v.s[2]);
    ST32(c->r[4] + 68u, c->v.s[6]);
    ST32(c->r[4] + 72u, c->v.s[10]);
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 80u, c->v.s[12]);
    ST32(c->r[4] + 84u, c->v.s[4]);
    ST32(c->r[4] + 88u, c->v.s[8]);
    c->v.f[16] = c->v.f[1] * c->v.f[14];
    c->v.f[1] = c->v.f[10] + c->v.f[8];
    c->v.f[18] = c->v.f[0] * c->v.f[14];
    c->v.f[20] = c->v.f[1] * c->v.f[14];
    c->v.f[0] = c->v.f[16] - c->v.f[6];
    c->v.f[2] = c->v.f[18] - c->v.f[2];
    c->v.f[6] = c->v.f[20] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b819c8; }
    c->r[14] = 0xb819c4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b819c8:;
    ST32(c->r[4] + 96u, c->v.s[18]);
    ST32(c->r[4] + 100u, c->v.s[16]);
    ST32(c->r[4] + 104u, c->v.s[20]);
    ST32(c->r[4] + 108u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b819fc; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); } }
L_b819fc:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b81a04(Cpu *restrict c) {
    FN_ENTER(0xb81a04u);
L_b81a04:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b81a08(Cpu *restrict c) {
    FN_ENTER(0xb81a08u);
L_b81a08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[13];
    c->r[14] = 0xb81a88u; f_a098b4(c);
    c->v.s[2] = c->v.s[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b81aa4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb81aa4u; f_15efddc(c);
L_b81aa4:;
    c->v.s[2] = LD32(c->r[5] + 12u);
    c->v.s[4] = LD32(c->r[4] + 180u);
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b81ac8; }
    c->v.s[0] = 0x0u;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b81ac8:;
    c->v.s[8] = LD32(c->r[4] + 176u);
    c->v.s[0] = 0x3f800000u;
    c->v.d[3] = c->v.d[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b81af4; }
    c->v.f[4] = c->v.f[4] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.s[6] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    c->v.f[6] = c->v.f[6] - c->v.f[2];
L_b81af4:;
    c->v.s[2] = 0x0u;
    { float t0 = nftz(vmax_f(nftz(c->v.f[6]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[7]), nftz(c->v.f[3]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[2] = LD32(c->r[4] + 52u);
    { float t0 = nftz(vmin_f(nftz(c->v.f[32]), nftz(c->v.f[0]))); float t1 = nftz(vmin_f(nftz(c->v.f[33]), nftz(c->v.f[1]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b81b14(Cpu *restrict c) {
    FN_ENTER(0xb81b14u);
L_b81b14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xec0d88u;
    { uint32_t ea = 0xb81b24u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb81b28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x190u;
    c->pc = c->r[4]; c->r[14] = 0xb81b40u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b81b4c(c);
}
void f_b81b4c(Cpu *restrict c) {
    FN_ENTER(0xb81b4cu);
L_b81b4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xb81b58u; f_a87958(c);
    c->r[0] = 0xec0d10u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb81b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb71e0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb81b84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb81b88u; f_dd5cc8(c);
    c->r[1] = 0x3f800000u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xec0d04u;
    { uint32_t ea = 0xb81bacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43fa0000u;
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb7f80u;
    { uint32_t ea = 0xb81c50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xcccdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f4c0000u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb6e5cu;
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb81cf0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = 0xeb7e98u;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb81d14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b81d68(Cpu *restrict c) {
    FN_ENTER(0xb81d68u);
L_b81d68:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xec0afcu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xb81d80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb6fd4u;
    { uint32_t ea = 0xb81d90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb81d94u; f_dd5d64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xb81d9cu; f_a879b4(c);
    c->r[0] = 0xec0b04u;
    { uint32_t ea = 0xb81da8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb81da8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b81dc8(Cpu *restrict c) {
    FN_ENTER(0xb81dc8u);
L_b81dc8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xb81ddcu; f_b7ffd0(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb81e04u; f_9bb638(c);
    c->r[1] = 0xbf068au;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xb81e1cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
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
    c->r[14] = 0xb81e60u; f_9bb638(c);
    c->r[1] = 0xbe14feu;
    c->r[1] = 0xb81e6cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x820000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xec0a30u;
    { uint32_t ea = 0xb81e84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xec0a1cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xb81e9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
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
    c->r[14] = 0xb81ef4u; f_9bb638(c);
    c->r[1] = 0xbf0701u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb81f08u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xa0u;
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
    c->r[14] = 0xb81f68u; f_9bb638(c);
    c->r[1] = 0xbf2650u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb81f7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x70u;
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
    c->r[14] = 0xb81fe0u; f_9bb638(c);
    c->r[1] = 0xbf25e1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb81ff4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x74u;
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
    c->r[14] = 0xb82054u; f_9bb638(c);
    c->r[1] = 0xbf2579u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb82068u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x78u;
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
    c->r[14] = 0xb820ccu; f_9bb638(c);
    c->r[1] = 0xbf250cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb820e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x7cu;
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
    c->r[14] = 0xb82140u; f_9bb638(c);
    c->r[1] = 0xbf24a2u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb82154u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x80u;
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
    c->r[14] = 0xb821b8u; f_9bb638(c);
    c->r[1] = 0xbf2434u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb821ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x84u;
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
    c->r[14] = 0xb8222cu; f_9bb638(c);
    c->r[1] = 0xbf23cbu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb82240u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x18u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa0000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xec0664u;
    { uint32_t ea = 0xb82258u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
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
    c->r[14] = 0xb822b0u; f_9bb638(c);
    c->r[1] = 0xbf235du;
    c->r[1] = 0xb822bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x170u;
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
void f_b8233c(Cpu *restrict c) {
    FN_ENTER(0xb8233cu);
L_b8233c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[2] = LD32(c->r[1] + 164u);
    c->v.s[4] = LD32(c->r[1] + 168u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[1] + 160u);
    c->v.s[6] = LD32(c->r[1] + 172u);
    c->r[1] = 0x0u;
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[5] = c->v.f[0] * c->v.f[10];
    c->v.f[7] = c->v.f[0] * c->v.f[8];
    c->v.f[3] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[12] + c->v.f[4];
    c->v.f[9] = c->v.f[5] + c->v.f[3];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[3] = c->v.f[5] - c->v.f[3];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    ST32(c->r[13], c->v.s[1]);
    c->v.f[1] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[9]);
    ST32(c->r[13] + 8u, c->v.s[11]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 16u, c->v.s[3]);
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[6] = c->v.f[1] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    ST32(c->r[13] + 20u, c->v.s[4]);
    c->v.f[4] = c->v.f[7] + c->v.f[10];
    ST32(c->r[13] + 24u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    c->r[14] = 0xb82410u; f_9c6914(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b82418(Cpu *restrict c) {
    FN_ENTER(0xb82418u);
L_b82418:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0xb8243cu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0xb82448u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0xb82454u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5]);
    c->r[14] = 0xb82460u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0xb8246cu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0xb8247cu; f_15efdf4(c);
    c->v.f[4] = c->v.f[16] * c->v.f[20];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[20]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->r[1] = c->r[13];
    c->v.f[4] = c->v.f[4] * c->v.f[24];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[13], c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[6]);
    ST32(c->r[13] + 8u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[20]);
    ST32(c->r[13] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[16] ^ 0x80000000u;
    ST32(c->r[13] + 20u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[22];
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0xb82510u; f_272ea8(c);
    c->v.s[0] = LD32(c->r[4] + 172u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b8254c; }
    c->v.s[2] = LD32(c->r[4] + 160u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[4] + 160u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 164u);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[4] + 164u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 168u);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[4] + 168u, c->v.s[2]);
    ST32(c->r[4] + 172u, c->v.s[0]);
L_b8254c:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b82558(Cpu *restrict c) {
    FN_ENTER(0xb82558u);
L_b82558:;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->v.s[6] = LD32(c->r[0] + 164u);
    c->v.s[8] = LD32(c->r[0] + 168u);
    c->v.s[0] = LD32(c->r[0] + 128u);
    c->v.s[2] = LD32(c->r[0] + 132u);
    c->v.s[4] = LD32(c->r[0] + 160u);
    c->v.s[10] = LD32(c->r[0] + 172u);
    c->v.s[1] = LD32(c->r[0] + 112u);
    c->v.s[3] = LD32(c->r[0] + 116u);
    c->v.s[13] = 0x3f000000u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[5] = LD32(c->r[0] + 120u);
    c->v.s[7] = LD32(c->r[0] + 124u);
    c->v.s[28] = LD32(c->r[0] + 144u);
    c->r[1] = 0x0u;
    c->v.f[12] = c->v.f[8] + c->v.f[8];
    c->v.f[14] = c->v.f[6] + c->v.f[6];
    c->v.f[15] = c->v.f[2] - c->v.f[0];
    c->v.f[11] = c->v.f[4] + c->v.f[4];
    c->v.f[22] = c->v.f[1] - c->v.f[3];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[9] = c->v.f[6] * c->v.f[14];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[15] = c->v.f[15] * c->v.f[13];
    c->v.f[26] = c->v.f[4] * c->v.f[14];
    c->v.f[20] = c->v.f[4] * c->v.f[11];
    c->v.f[24] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[12];
    c->v.f[10] = c->v.f[11] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[12];
    c->v.f[22] = c->v.f[22] * c->v.f[13];
    c->v.s[11] = LD32(c->r[0] + 152u);
    c->v.f[0] = c->v.f[0] * c->v.f[13];
    c->v.f[18] = c->v.f[9] + c->v.f[8];
    c->v.f[8] = c->v.f[20] + c->v.f[8];
    c->v.f[30] = c->v.f[26] + c->v.f[24];
    c->v.f[24] = c->v.f[26] - c->v.f[24];
    c->v.s[26] = LD32(c->r[0] + 148u);
    c->v.f[12] = c->v.f[4] - c->v.f[14];
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[14] = c->v.f[20] + c->v.f[9];
    c->v.f[9] = c->v.f[6] + c->v.f[10];
    c->v.f[6] = c->v.f[6] - c->v.f[10];
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    c->v.f[18] = c->v.f[16] - c->v.f[18];
    c->v.f[8] = c->v.f[16] - c->v.f[8];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[15] * c->v.f[30]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[15] * c->v.f[12]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[15] * c->v.f[18]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[22] * c->v.f[9]);
    c->v.f[18] = c->v.f[7] - c->v.f[5];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[22] * c->v.f[24]);
    c->v.f[18] = c->v.f[18] * c->v.f[13];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[4] = c->v.f[16] - c->v.f[14];
    c->v.f[6] = c->v.f[5] + c->v.f[7];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[18] * c->v.f[4]);
    ST32(c->r[0] + 144u, c->v.s[28]);
    c->v.f[4] = c->v.f[1] + c->v.f[3];
    c->v.f[6] = c->v.f[6] * c->v.f[13];
    ST32(c->r[0] + 148u, c->v.s[26]);
    c->v.f[4] = c->v.f[4] * c->v.f[13];
    ST32(c->r[0] + 152u, c->v.s[11]);
    ST32(c->r[0] + 116u, c->v.s[4]);
    ST32(c->r[0] + 112u, c->v.s[4]);
    ST32(c->r[0] + 124u, c->v.s[6]);
    ST32(c->r[0] + 120u, c->v.s[6]);
    ST32(c->r[0] + 128u, c->v.s[0]);
    ST32(c->r[0] + 132u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    return;
}
void f_b82680(Cpu *restrict c) {
    FN_ENTER(0xb82680u);
L_b82680:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b82684(Cpu *restrict c) {
    FN_ENTER(0xb82684u);
L_b82684:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xe8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->v.s[7] = 0x3f800000u;
    c->v.s[19] = 0x3f000000u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3f800000u;
    c->r[2] = c->r[13] + 0xa0u;
    c->v.s[2] = LD32(c->r[4] + 164u);
    c->v.s[4] = LD32(c->r[4] + 168u);
    c->v.s[0] = LD32(c->r[4] + 160u);
    c->v.s[6] = LD32(c->r[4] + 172u);
    c->v.s[9] = LD32(c->r[4] + 112u);
    c->v.s[11] = LD32(c->r[4] + 120u);
    c->v.s[24] = LD32(c->r[4] + 144u);
    c->v.s[26] = LD32(c->r[4] + 148u);
    c->v.s[28] = LD32(c->r[4] + 152u);
    c->v.s[25] = LD32(c->r[4] + 116u);
    c->v.s[15] = LD32(c->r[4] + 124u);
    c->v.s[27] = LD32(c->r[4] + 128u);
    c->v.s[29] = LD32(c->r[4] + 132u);
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[1] = c->v.f[0] + c->v.f[0];
    c->v.s[21] = c->v.s[9];
    c->v.s[23] = c->v.s[11];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[5] = c->v.f[0] * c->v.f[10];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[3] = c->v.f[8] * c->v.f[6];
    c->v.f[6] = c->v.f[1] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[4];
    c->v.f[18] = c->v.f[5] + c->v.f[3];
    c->v.f[20] = c->v.f[5] - c->v.f[3];
    c->v.f[31] = c->v.f[2] + c->v.f[6];
    c->v.f[22] = c->v.f[2] - c->v.f[6];
    c->v.f[16] = c->v.f[7] - c->v.f[14];
    c->v.f[14] = c->v.f[0] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 8u, c->v.s[18]);
    ST32(c->r[13] + 160u, c->v.s[16]);
    ST32(c->r[13] + 12u, c->v.s[16]);
    c->v.f[16] = c->v.f[0] - c->v.f[10];
    c->v.f[17] = c->v.f[0] + c->v.f[10];
    c->v.f[0] = c->v.f[14] + c->v.f[12];
    c->v.f[4] = c->v.f[14] + c->v.f[4];
    ST32(c->r[13] + 164u, c->v.s[18]);
    c->v.f[30] = c->v.f[7] - c->v.f[0];
    c->v.f[0] = c->v.f[27] + c->v.f[29];
    c->v.f[18] = c->v.f[7] - c->v.f[4];
    ST32(c->r[13] + 168u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 176u, c->v.s[20]);
    ST32(c->r[13] + 16u, c->v.s[16]);
    c->v.s[16] = c->v.s[15];
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    ST32(c->r[13] + 180u, c->v.s[18]);
    ST32(c->r[13] + 184u, c->v.s[31]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 192u, c->v.s[17]);
    ST32(c->r[13] + 196u, c->v.s[22]);
    ST32(c->r[13] + 200u, c->v.s[30]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 28u, c->v.s[0]);
    c->v.f[0] = c->v.f[9] + c->v.f[25];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    ST32(c->r[13] + 116u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    c->v.f[0] = c->v.f[11] + c->v.f[15];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[13] + 0x60u;
    ST32(c->r[13] + 24u, c->v.s[0]);
    c->r[14] = 0xb82814u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[29] - c->v.f[27];
    c->v.f[2] = c->v.f[21] - c->v.f[25];
    c->v.f[4] = c->v.f[16] - c->v.f[23];
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    c->v.f[2] = c->v.f[2] * c->v.f[19];
    c->v.f[4] = c->v.f[4] * c->v.f[19];
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[5]); }
    c->v.s[6] = LD32(c->r[13] + 12u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[6] = LD32(c->r[13] + 8u);
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[8]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[6] = LD32(c->r[13] + 16u);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[2] * c->v.f[20]);
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[2] * c->v.f[18]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[4] * c->v.f[17]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[4] * c->v.f[22]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[31]);
    ST32(c->r[4] + 224u, c->v.s[24]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[4] * c->v.f[30]);
    ST32(c->r[4] + 228u, c->v.s[26]);
    ST32(c->r[4] + 232u, c->v.s[28]);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b82984; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[4] + 0xb0u;
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb828f0u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xb82900u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    goto L_b829c0;
L_b82984:;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x10cu;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[8]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 288u, c->v.s[24]);
    ST32(c->r[4] + 292u, c->v.s[26]);
    ST32(c->r[4] + 296u, c->v.s[28]);
L_b829c0:;
    c->r[1] = c->r[4] + 0xf0u;
    c->r[0] = c->r[13] + 0x20u;
    c->r[14] = 0xb829ccu; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb7174u;
    c->v.s[0] = LD32(c->r[4] + 368u);
    c->v.s[2] = LD32(c->r[4] + 372u);
    c->v.s[4] = LD32(c->r[4] + 376u);
    { uint32_t ea = 0xb82a68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[8]); }
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[6] = c->v.f[8] - c->v.f[2];
    c->v.s[2] = 0x3f800000u;
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.s[8] = c->v.s[2];
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    ST32(c->r[4] + 384u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 28u);
    ST32(c->r[4] + 388u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = c->v.f[8] / c->v.f[4];
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    ST32(c->r[4] + 392u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[6] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b82adc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb82adcu; f_15efddc(c);
L_b82adc:;
    c->v.s[2] = c->r[5];
    c->v.s[4] = c->r[7];
    c->v.s[8] = c->r[6];
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    ST32(c->r[4] + 108u, c->v.s[0]);
    c->v.f[6] = c->v.f[2] - c->v.f[0];
    c->v.f[10] = c->v.f[4] - c->v.f[0];
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    ST32(c->r[4] + 64u, c->v.s[6]);
    c->v.f[6] = c->v.f[8] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    ST32(c->r[4] + 68u, c->v.s[10]);
    ST32(c->r[4] + 72u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[8]); }
    ST32(c->r[4] + 80u, c->v.s[2]);
    ST32(c->r[4] + 84u, c->v.s[4]);
    ST32(c->r[4] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b82b54; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); } }
L_b82b54:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b82b68(Cpu *restrict c) {
    FN_ENTER(0xb82b68u);
L_b82b68:;
    { uint32_t ea = c->r[13] - 0x4u; ST32(ea, c->r[11]); c->r[13] = ea; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x2cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[0] = LD32(c->r[0] + 324u);
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[0] + 308u);
    c->v.s[8] = LD32(c->r[0] + 328u);
    c->v.s[12] = LD32(c->r[0] + 312u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->v.s[7] = LD32(c->r[0] + 340u);
    c->v.s[5] = LD32(c->r[0] + 344u);
    c->v.s[14] = LD32(c->r[0] + 304u);
    c->v.s[1] = LD32(c->r[0] + 320u);
    c->v.s[3] = LD32(c->r[0] + 336u);
    c->r[2] = 0xeb701cu;
    c->v.s[9] = LD32(c->r[0] + 356u);
    c->r[12] = 0x0u;
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = 0xb82bc0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[10] = LD32(c->r[0] + 360u);
    c->v.f[8] = c->v.f[4] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[2]);
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[14]);
    c->r[1] = c->r[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[2] + 4u);
    c->v.s[7] = LD32(c->r[2] + 8u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[3]);
    c->v.f[0] = c->v.f[9] + c->v.f[0];
    c->v.f[8] = c->v.f[10] + c->v.f[8];
    c->v.s[10] = LD32(c->r[0] + 352u);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[2] = c->v.f[10] + c->v.f[4];
    c->v.f[8] = fabsf(c->v.f[8]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[5]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    ST32(c->r[13] + 24u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    c->v.s[9] = LD32(c->r[0] + 368u);
    c->v.s[13] = LD32(c->r[0] + 376u);
    c->v.s[11] = LD32(c->r[0] + 372u);
    c->v.f[2] = fabsf(c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[3]; }
    vfp_cmp_f(c, c->v.f[8], c->v.f[7]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->r[1] = 0xeb5ef0u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[12], c->v.f[2]);
    if (COND_MI) { c->r[2] = c->r[3]; }
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->r[2] = c->r[13];
    { uint32_t ea = 0xb82c5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[2] : c->v.s[12];
    c->v.f[8] = c->v.f[8] - c->v.f[11];
    c->v.s[4] = LD32(c->r[1]);
    c->v.f[2] = c->v.f[2] - c->v.f[9];
    c->v.f[0] = c->v.f[0] - c->v.f[13];
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[1] + 4u);
    ST32(c->r[13] + 4u, c->v.s[8]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    ST32(c->r[13] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    c->v.s[1] = LD32(c->r[0] + 384u);
    c->v.s[14] = LD32(c->r[0] + 52u);
    c->v.s[3] = LD32(c->r[0] + 388u);
    c->v.s[9] = LD32(c->r[0] + 392u);
    c->r[0] = c->r[1];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[10]);
    c->v.s[2] = COND_GT ? c->v.s[2] : c->v.s[4];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[2] * c->v.f[1]);
    c->v.s[2] = LD32(c->r[0] + 8u);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = c->r[2]; }
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[2] * c->v.f[9]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[0] * c->v.f[3]);
    c->v.f[4] = c->v.f[12] * c->v.f[14];
    c->v.f[0] = c->v.f[5] * c->v.f[4];
    c->v.f[0] = c->v.f[7] * c->v.f[0];
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[13] = c->r[13] + 0x4u; c->r[11] = v; }
    return;
}
void f_b82cf0(Cpu *restrict c) {
    FN_ENTER(0xb82cf0u);
L_b82cf0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b82cf4(Cpu *restrict c) {
    FN_ENTER(0xb82cf4u);
L_b82cf4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b82cf8(Cpu *restrict c) {
    FN_ENTER(0xb82cf8u);
L_b82cf8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b82cfc(Cpu *restrict c) {
    FN_ENTER(0xb82cfcu);
L_b82cfc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b82d00(Cpu *restrict c) {
    FN_ENTER(0xb82d00u);
L_b82d00:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b82d04(Cpu *restrict c) {
    FN_ENTER(0xb82d04u);
L_b82d04:;
    c->r[0] = 0xebfb70u;
    { uint32_t ea = 0xb82d10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b82d14(Cpu *restrict c) {
    FN_ENTER(0xb82d14u);
L_b82d14:;
    c->r[12] = c->r[0] + 0x60u;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    return;
}
void f_b82d30(Cpu *restrict c) {
    FN_ENTER(0xb82d30u);
L_b82d30:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_b82d44(Cpu *restrict c) {
    FN_ENTER(0xb82d44u);
L_b82d44:;
    c->v.s[0] = 0x0u;
    return;
}
void f_b82d50(Cpu *restrict c) {
    FN_ENTER(0xb82d50u);
L_b82d50:;
    c->r[0] = 0xebfb38u;
    { uint32_t ea = 0xb82d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b82d60(Cpu *restrict c) {
    FN_ENTER(0xb82d60u);
L_b82d60:;
    c->r[0] = 0xebfb30u;
    { uint32_t ea = 0xb82d6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b82d70(Cpu *restrict c) {
    FN_ENTER(0xb82d70u);
L_b82d70:;
    c->r[0] = 0xebfb28u;
    { uint32_t ea = 0xb82d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b82d80(Cpu *restrict c) {
    FN_ENTER(0xb82d80u);
L_b82d80:;
    c->r[0] = 0xebfb20u;
    { uint32_t ea = 0xb82d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b82d90(Cpu *restrict c) {
    FN_ENTER(0xb82d90u);
L_b82d90:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x179f140u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = 0xb82db8u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
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
    c->r[0] = 0xebfa7cu;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[3] = 0x70u;
    { uint32_t ea = 0xb82e04u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xeb64f4u;
    { uint32_t ea = 0xb82e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xbf27e9u;
    c->r[1] = 0xb82e14u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xb82e18u; f_9aedcc(c);
    c->r[0] = 0xebfa84u;
    c->r[1] = 0xbf27cbu;
    c->r[2] = c->r[4];
    c->r[3] = 0xa0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb82e3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb82e40u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xebfa44u;
    { uint32_t ea = 0xb82e50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb82e50u; f_9aedcc(c);
    c->r[1] = 0xebfa54u;
    c->r[2] = c->r[4];
    c->r[3] = 0xe0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb82e70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xebfa18u;
    c->r[1] = 0xbf2796u;
    { uint32_t ea = 0xb82e84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb82e88u + c->r[1];
    c->r[14] = 0xb82e88u; f_9aedcc(c);
    c->r[1] = 0xebfa20u;
    c->r[2] = c->r[4];
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb82ea8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xebf9e8u;
    c->r[1] = 0xbf2770u;
    { uint32_t ea = 0xb82ebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb82ec0u + c->r[1];
    c->r[14] = 0xb82ec0u; f_9aedcc(c);
    c->r[1] = 0xebf9ecu;
    c->r[2] = c->r[4];
    c->r[3] = 0x190u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb82ee0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xebf9b8u;
    c->r[1] = 0xbf274du;
    { uint32_t ea = 0xb82ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb82ef8u + c->r[1];
    c->r[14] = 0xb82ef8u; f_9aedcc(c);
    c->r[1] = 0xebf9ccu;
    { uint32_t ea = 0xb82f04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b82f54(Cpu *restrict c) {
    FN_ENTER(0xb82f54u);
L_b82f54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xebf970u;
    { uint32_t ea = 0xb82f64u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb82f68u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xbb0u;
    c->pc = c->r[4]; c->r[14] = 0xb82f80u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b82f90(c);
}
void f_b82f8c(Cpu *restrict c) {
    FN_ENTER(0xb82f8cu);
L_b82f8c:;
    return;
}
void f_b82f90(Cpu *restrict c) {
    FN_ENTER(0xb82f90u);
L_b82f90:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xb82f9cu; f_a87958(c);
    c->r[0] = 0xebf90cu;
    c->r[5] = 0x0u;
    c->r[1] = ~0x0u;
    c->r[6] = 0x1u;
    c->r[8] = 0x3f800000u;
    c->r[12] = 0x0u;
    c->r[2] = 0xa2b5u;
    c->r[14] = c->r[4] + 0x320u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc42f0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x39910000u;
    { uint32_t ea = 0xb82fccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xebdb7cu;
    { uint32_t ea = 0xb83008u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2f8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xebed40u;
    { uint32_t ea = 0xb83018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x2f0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb5a8cu;
    { uint32_t ea = c->r[4] + 0x62cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x63cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x65cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x66cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x67cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x69cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8ccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x91cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xabcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xaf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xad0u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xae6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xae4u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xae5u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xadcu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xae8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xaf0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xaf4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xaecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0xb830c0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x938u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2000000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x164u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x165u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x115u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6666u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[8]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3f660000u;
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] + 0x460000u;
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8889u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3c880000u;
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[6]); }
    c->r[2] = 0x3f000000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40a00000u;
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x10cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x11cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x11du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x140u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10eu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10fu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x110u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x116u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x112u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x111u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x80000000u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1a0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1bcu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2e0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e9u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1eau; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1ebu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x26cu; ST32(ea, c->r[0]); }
    c->r[0] = ~0xc0000000u;
    { uint32_t ea = c->r[4] + 0x270u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x274u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x278u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x27cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1ecu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1edu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1eeu; ST8(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42a00000u;
    { uint32_t ea = c->r[4] + 0x310u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[4] + 0x314u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeb5efcu;
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb83320u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[14] = c->r[4] + 0x32cu;
    { uint32_t ea = c->r[4] + 0x3a0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[14] = c->r[4] + 0x33cu;
    { uint32_t ea = c->r[4] + 0x3a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[14] = c->r[4] + 0x34cu;
    { uint32_t ea = c->r[4] + 0x3a8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[14] = c->r[4] + 0x35cu;
    { uint32_t ea = c->r[4] + 0x3acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[14] = c->r[4] + 0x36cu;
    { uint32_t ea = c->r[4] + 0x3b0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[14] = c->r[4] + 0x37cu;
    { uint32_t ea = c->r[4] + 0x3b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[14] = c->r[4] + 0x38cu;
    { uint32_t ea = c->r[4] + 0x3b8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x39cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x3c0u;
    c->r[1] = 0x3cu;
    { uint32_t ea = c->r[4] + 0x3bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x214u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x218u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x228u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x240u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x234u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x248u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x250u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x254u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x258u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x928u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x92cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x268u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x264u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x260u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xb833f0u; f_15efd7c(c);
    c->r[0] = 0x93cu;
    c->r[1] = 0x30u;
    { uint32_t ea = c->r[4] + 0x41cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x410u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x414u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb83410u; f_15efd7c(c);
    c->r[0] = 0x97cu;
    c->r[1] = 0x28u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb83420u; f_15efd7c(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40400000u;
    { uint32_t ea = c->r[4] + 0x930u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x934u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x920u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x924u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x978u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x974u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x970u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x96cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xafcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xad4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb00u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb04u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb08u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xb1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xae0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xad8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xba0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b834a8(Cpu *restrict c) {
    FN_ENTER(0xb834a8u);
L_b834a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xebf41cu;
    { uint32_t ea = 0xb834bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xb834c8u; f_b8357c(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b834e0; }
    c->r[14] = 0xb834d8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
L_b834e0:;
    { uint32_t ea = c->r[4] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83500; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb834f8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x27cu; ST32(ea, c->r[0]); }
L_b83500:;
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83518; }
    c->r[14] = 0xb83510u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
L_b83518:;
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83538; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83530u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
L_b83538:;
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83568; }
    c->r[0] = 0xebf384u;
    { uint32_t ea = 0xb83550u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb83550u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb83560u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
L_b83568:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_b8357c(Cpu *restrict c) {
    FN_ENTER(0xb8357cu);
L_b8357c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b835b4; }
    c->r[0] = 0xebf338u;
    { uint32_t ea = 0xb8359cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8359cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb835acu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
L_b835b4:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b835e4; }
    c->r[0] = 0xebf308u;
    { uint32_t ea = 0xb835ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb835ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb835dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_b835e4:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83614; }
    c->r[0] = 0xebf2d8u;
    { uint32_t ea = 0xb835fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb835fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8360cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_b83614:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83644; }
    c->r[0] = 0xebf2a8u;
    { uint32_t ea = 0xb8362cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8362cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8363cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_b83644:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83674; }
    c->r[0] = 0xebf278u;
    { uint32_t ea = 0xb8365cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8365cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8366cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
L_b83674:;
    { uint32_t ea = c->r[4] + 0x188u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b836a4; }
    c->r[0] = 0xebf248u;
    { uint32_t ea = 0xb8368cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8368cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8369cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[0]); }
L_b836a4:;
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b836c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb836bcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_b836c4:;
    { uint32_t ea = c->r[4] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b836e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb836dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
L_b836e4:;
    { uint32_t ea = c->r[4] + 0x18cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83704; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb836fcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[0]); }
L_b83704:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83724; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8371cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
L_b83724:;
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83744; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8373cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
L_b83744:;
    { uint32_t ea = c->r[4] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83764; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8375cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[0]); }
L_b83764:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83784; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8377cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[0]); }
L_b83784:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b837a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8379cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[0]); }
L_b837a4:;
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b837c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb837bcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[0]); }
L_b837c4:;
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b837e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb837dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[0]); }
L_b837e4:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83804; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb837fcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[0]); }
L_b83804:;
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83824; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8381cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
L_b83824:;
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83854; }
    c->r[0] = 0xebf098u;
    { uint32_t ea = 0xb8383cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8383cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8384cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
L_b83854:;
    { uint32_t ea = c->r[4] + 0x1a0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83884; }
    c->r[0] = 0xebf068u;
    { uint32_t ea = 0xb8386cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8386cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8387cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1a0u; ST32(ea, c->r[0]); }
L_b83884:;
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b838b4; }
    c->r[0] = 0xebf038u;
    { uint32_t ea = 0xb8389cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8389cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb838acu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[0]); }
L_b838b4:;
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b838e4; }
    c->r[0] = 0xebf008u;
    { uint32_t ea = 0xb838ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb838ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb838dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[0]); }
L_b838e4:;
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83914; }
    c->r[0] = 0xebefd8u;
    { uint32_t ea = 0xb838fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb838fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8390cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
L_b83914:;
    { uint32_t ea = c->r[4] + 0x93cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83934; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8392cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x93cu; ST32(ea, c->r[0]); }
L_b83934:;
    { uint32_t ea = c->r[4] + 0x940u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83954; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8394cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x940u; ST32(ea, c->r[0]); }
L_b83954:;
    { uint32_t ea = c->r[4] + 0x944u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83974; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8396cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x944u; ST32(ea, c->r[0]); }
L_b83974:;
    { uint32_t ea = c->r[4] + 0x94cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83994; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8398cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x94cu; ST32(ea, c->r[0]); }
L_b83994:;
    { uint32_t ea = c->r[4] + 0x950u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b839b4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb839acu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x950u; ST32(ea, c->r[0]); }
L_b839b4:;
    { uint32_t ea = c->r[4] + 0x954u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b839d4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb839ccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x954u; ST32(ea, c->r[0]); }
L_b839d4:;
    { uint32_t ea = c->r[4] + 0x948u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b839f4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb839ecu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x948u; ST32(ea, c->r[0]); }
L_b839f4:;
    { uint32_t ea = c->r[4] + 0x958u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83a14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83a0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x958u; ST32(ea, c->r[0]); }
L_b83a14:;
    { uint32_t ea = c->r[4] + 0x95cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83a34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83a2cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x95cu; ST32(ea, c->r[0]); }
L_b83a34:;
    { uint32_t ea = c->r[4] + 0x960u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83a54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83a4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x960u; ST32(ea, c->r[0]); }
L_b83a54:;
    { uint32_t ea = c->r[4] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83a74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83a6cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x964u; ST32(ea, c->r[0]); }
L_b83a74:;
    { uint32_t ea = c->r[4] + 0x3c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83a94; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83a8cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3c0u; ST32(ea, c->r[0]); }
L_b83a94:;
    { uint32_t ea = c->r[4] + 0x3ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83ab4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83aacu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3ccu; ST32(ea, c->r[0]); }
L_b83ab4:;
    { uint32_t ea = c->r[4] + 0x3d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83ad4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83accu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3d8u; ST32(ea, c->r[0]); }
L_b83ad4:;
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83af4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83aecu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e4u; ST32(ea, c->r[0]); }
L_b83af4:;
    { uint32_t ea = c->r[4] + 0x3f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83b14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83b0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3f0u; ST32(ea, c->r[0]); }
L_b83b14:;
    { uint32_t ea = c->r[4] + 0x410u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83b34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83b2cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x410u; ST32(ea, c->r[0]); }
L_b83b34:;
    { uint32_t ea = c->r[4] + 0x968u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83b54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83b4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x968u; ST32(ea, c->r[0]); }
L_b83b54:;
    { uint32_t ea = c->r[4] + 0x3c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83b74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83b6cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3c4u; ST32(ea, c->r[0]); }
L_b83b74:;
    { uint32_t ea = c->r[4] + 0x3d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83b94; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83b8cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3d0u; ST32(ea, c->r[0]); }
L_b83b94:;
    { uint32_t ea = c->r[4] + 0x3dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83bb4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83bacu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
L_b83bb4:;
    { uint32_t ea = c->r[4] + 0x3e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83bd4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83bccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e8u; ST32(ea, c->r[0]); }
L_b83bd4:;
    { uint32_t ea = c->r[4] + 0x3f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83bf4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83becu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3f4u; ST32(ea, c->r[0]); }
L_b83bf4:;
    { uint32_t ea = c->r[4] + 0x414u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83c14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83c0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x414u; ST32(ea, c->r[0]); }
L_b83c14:;
    { uint32_t ea = c->r[4] + 0x97cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83c34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83c2cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x97cu; ST32(ea, c->r[0]); }
L_b83c34:;
    { uint32_t ea = c->r[4] + 0x980u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83c54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83c4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x980u; ST32(ea, c->r[0]); }
L_b83c54:;
    { uint32_t ea = c->r[4] + 0x984u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83c74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83c6cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x984u; ST32(ea, c->r[0]); }
L_b83c74:;
    { uint32_t ea = c->r[4] + 0x988u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83c94; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83c8cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x988u; ST32(ea, c->r[0]); }
L_b83c94:;
    { uint32_t ea = c->r[4] + 0x98cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83cb4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83cacu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x98cu; ST32(ea, c->r[0]); }
L_b83cb4:;
    { uint32_t ea = c->r[4] + 0x990u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83cd4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83cccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x990u; ST32(ea, c->r[0]); }
L_b83cd4:;
    { uint32_t ea = c->r[4] + 0x994u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83cf4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83cecu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x994u; ST32(ea, c->r[0]); }
L_b83cf4:;
    { uint32_t ea = c->r[4] + 0x998u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83d14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83d0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x998u; ST32(ea, c->r[0]); }
L_b83d14:;
    { uint32_t ea = c->r[4] + 0x99cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83d34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83d2cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x99cu; ST32(ea, c->r[0]); }
L_b83d34:;
    { uint32_t ea = c->r[4] + 0x9a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83d54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83d4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9a0u; ST32(ea, c->r[0]); }
L_b83d54:;
    { uint32_t ea = c->r[4] + 0x96cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83d74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83d6cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x96cu; ST32(ea, c->r[0]); }
L_b83d74:;
    { uint32_t ea = c->r[4] + 0x970u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83d94; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83d8cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x970u; ST32(ea, c->r[0]); }
L_b83d94:;
    { uint32_t ea = c->r[4] + 0x974u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83db4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83dacu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x974u; ST32(ea, c->r[0]); }
L_b83db4:;
    { uint32_t ea = c->r[4] + 0x978u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83dd4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83dccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x978u; ST32(ea, c->r[0]); }
L_b83dd4:;
    { uint32_t ea = c->r[4] + 0x920u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83df4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83decu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x920u; ST32(ea, c->r[0]); }
L_b83df4:;
    { uint32_t ea = c->r[4] + 0x924u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83e14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83e0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x924u; ST32(ea, c->r[0]); }
L_b83e14:;
    { uint32_t ea = c->r[4] + 0xb04u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b83e44; }
    c->r[0] = 0xebeaa8u;
    { uint32_t ea = 0xb83e2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb83e2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb83e3cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb04u; ST32(ea, c->r[0]); }
L_b83e44:;
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b840b4; }
    { uint32_t ea = c->r[4] + 0xadcu; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[8] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_b84090; }
    c->r[9] = 0x0u;
    c->r[6] = 0x20u;
    c->r[7] = 0x0u;
L_b83e70:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83e9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83e8cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83e9c:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83ec8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83eb8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83ec8:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83ef4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83ee4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83ef4:;
    { uint32_t ea = c->r[5] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83f18; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83f0cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83f18:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83f44; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83f34u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83f44:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83f70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83f60u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83f70:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83f9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83f8cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83f9c:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83fc8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83fb8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83fc8:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b83ff4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb83fe4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b83ff4:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b84020; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb84010u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b84020:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8404c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb8403cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b8404c:;
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b84078; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb84068u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xad8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b84078:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x44u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_CC) { goto L_b83e70; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b840b4; }
L_b84090:;
    c->r[0] = 0xebe838u;
    { uint32_t ea = 0xb8409cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb8409cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb840acu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xad8u; ST32(ea, c->r[0]); }
L_b840b4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b840ec(Cpu *restrict c) {
    FN_ENTER(0xb840ecu);
L_b840ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xb840f8u; f_b834a8(c);
    c->r[0] = 0xebe7d0u;
    { uint32_t ea = 0xb84104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb84104u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b8411c(Cpu *restrict c) {
    FN_ENTER(0xb8411cu);
L_b8411c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b845ac; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb8413cu; f_b8357c(c);
    c->r[5] = 0x0u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1ecu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x91u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1edu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x92u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1eeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xad0u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x310u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x314u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x928u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x92cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x41cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa6u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1eau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x26cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x270u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x1ebu; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_b84204; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb84200u; f_b845b8(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b84204:;
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[9] = 0x1u;
    c->r[7] = 0x1u;
    c->r[8] = 0x10u;
    { uint32_t ea = c->r[4] + 0x274u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x278u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x930u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x110u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    c->r[5] = 0x2u;
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x934u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x278u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0xb00u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xafcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xadcu; ST8(ea, c->r[1]); }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xadcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xae5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x210u;
    if (COND_NE) { c->r[7] = 0x2u; }
    c->r[14] = 0xb842e4u; f_d0804c(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb8431cu; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb8432cu; f_d0804c(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb84364u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xadcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[0] << 4);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xebe54cu;
    c->r[5] = (c->r[1] << 2);
    if (COND_EQ) { c->r[5] = 0x44u; }
    { uint32_t ea = 0xb84388u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb84388u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xb8439cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xad8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb843acu; f_d0804c(c);
    c->r[5] = 0x4u;
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb843d8u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3c0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb843e8u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb84410u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3ccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84420u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb84448u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3d8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84458u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb84480u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3f0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84490u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb844b8u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3c4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb844c8u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb844f0u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3d0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84500u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb84528u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3dcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84538u; f_d0804c(c);
    c->r[1] = 0x40u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb84560u; f_d08088(c);
    { uint32_t ea = c->r[4] + 0x3f4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84570u; f_d0804c(c);
    c->r[1] = 0x5u;
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb845a8u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x9a0u; ST32(ea, c->r[0]); }
L_b845ac:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b845b8(Cpu *restrict c) {
    FN_ENTER(0xb845b8u);
L_b845b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb845d4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b846a4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb845ecu; rt_dispatch(c);
    c->r[1] = 0xebc588u;
    c->r[12] = c->r[4] + 0x300u;
    { uint32_t ea = 0xb845fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); }
    c->r[0] = 0x5u;
    c->r[3] = c->r[13] + 0x10u;
    c->r[5] = c->r[4] + 0x2f0u;
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8464c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb84644u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x27cu; ST32(ea, c->r[0]); }
L_b8464c:;
    c->r[0] = 0xa0u;
    c->r[1] = 0x10u;
    c->r[14] = 0xb84658u; f_e17494(c);
    c->r[6] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xb84670u; f_e174d0(c);
    { uint32_t ea = c->r[4] + 0x27cu; ST32(ea, c->r[0]); }
    c->r[2] = ~0x0u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x278u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[14] = 0xb8469cu; f_d1db60(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x1ebu; ST8(ea, c->r[0]); }
L_b846a4:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b846b0(Cpu *restrict c) {
    FN_ENTER(0xb846b0u);
L_b846b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b846d4; }
    c->r[14] = 0xb846ccu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
L_b846d4:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[5]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[5];
    c->r[14] = 0xb846e8u; f_a87648(c);
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b84708; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb84700u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
L_b84708:;
    c->r[0] = 0x8u;
    c->r[14] = 0xb84710u; f_9af37c(c);
    c->r[14] = 0xb84714u; f_cf606c(c);
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb84720u; f_cf60fc(c);
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b84730(Cpu *restrict c) {
    FN_ENTER(0xb84730u);
L_b84730:;
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b84750; }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_NE) { goto L_b84754; }
L_b84750:;
    return;
L_b84754:;
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[1]); }
    __attribute__((musttail)) return f_b8411c(c);
}
void f_b84768(Cpu *restrict c) {
    FN_ENTER(0xb84768u);
L_b84768:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8478c; }
    c->r[14] = 0xb84784u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
L_b8478c:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_b847c8; }
    c->r[0] = c->r[5];
    c->r[14] = 0xb847a0u; f_a87648(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb847b0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_b847cc; }
L_b847c8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b847cc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b8411c(c);
}
void f_b847d8(Cpu *restrict c) {
    FN_ENTER(0xb847d8u);
L_b847d8:;
    { uint32_t ea = c->r[0] + 0xad4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    return;
}
void f_b84800(Cpu *restrict c) {
    FN_ENTER(0xb84800u);
L_b84800:;
    __attribute__((musttail)) return f_a879b0(c);
}
