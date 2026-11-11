#include "cpu.h"
#include "neon_rt.h"
void f_2821c74(Cpu *c);
void f_2823594(Cpu *c);
void f_28237c0(Cpu *c);
void f_2824070(Cpu *c);
void f_2826248(Cpu *c);
void f_2827030(Cpu *c);
void f_2827274(Cpu *c);
void f_2828b60(Cpu *c);
void f_2828c10(Cpu *c);
void f_2828d28(Cpu *c);
void f_2828e40(Cpu *c);
void f_28294b8(Cpu *c);
void f_2829aa4(Cpu *c);
void f_2829d7c(Cpu *c);
void f_283aa78(Cpu *c);
void f_283ab44(Cpu *c);
void f_283abec(Cpu *c);
void f_283ac04(Cpu *c);
void f_283aea4(Cpu *c);
void f_283afb8(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283b2ac(Cpu *c);
void f_283b33c(Cpu *c);
void f_283b8dc(Cpu *c);
void f_283baec(Cpu *c);
void f_283cc8c(Cpu *c);
void f_2842494(Cpu *c);
void f_2844ffc(Cpu *c);
void f_285090c(Cpu *c);
void f_2852acc(Cpu *c);
void f_28531d4(Cpu *c);
void f_2853528(Cpu *c);
void f_2853804(Cpu *c);
void f_285381c(Cpu *c);
void f_2853828(Cpu *c);
void f_2855214(Cpu *c);
void f_2855ae4(Cpu *c);
void f_2855af0(Cpu *c);
void f_2855cc4(Cpu *c);
void f_2855e5c(Cpu *c);
void f_2855e80(Cpu *c);
void f_2855e98(Cpu *c);
void f_2855ea4(Cpu *c);
void f_2855eb0(Cpu *c);
void f_2855ec8(Cpu *c);
void f_28561ec(Cpu *c);
void f_28561f8(Cpu *c);
void f_2856204(Cpu *c);
void f_2856210(Cpu *c);
void f_285621c(Cpu *c);
void f_2856228(Cpu *c);
void f_2856234(Cpu *c);
void f_2856240(Cpu *c);
void f_285624c(Cpu *c);
void f_2856258(Cpu *c);
void f_2856264(Cpu *c);
void f_2856270(Cpu *c);
void f_285627c(Cpu *c);
void f_2856288(Cpu *c);
void f_2856294(Cpu *c);
void f_28562a0(Cpu *c);
void f_28562ac(Cpu *c);
void f_28562b8(Cpu *c);
void f_281fe04(Cpu *restrict c) {
    FN_ENTER(0x281fe04u);
L_281fe04:;
    __attribute__((musttail)) return f_28561ec(c);
}
void f_281fe08(Cpu *restrict c) {
    FN_ENTER(0x281fe08u);
L_281fe08:;
    c->v.df[16] = c->v.df[0] * c->v.df[0];
    c->v.d[17] = 0xbda8fae9be8838d4ull;
    c->v.d[18] = 0x3efa01a019cb1590ull;
    c->v.d[19] = 0x3e21ee9ebdb4b1c4ull;
    c->v.d[20] = 0xbf56c16c16c15177ull;
    c->v.df[17] = c->v.df[16] * c->v.df[17];
    c->v.df[18] = c->v.df[16] * c->v.df[18];
    c->v.d[21] = 0x3fa555555555554cull;
    c->v.df[17] = c->v.df[17] + c->v.df[19];
    c->v.df[19] = c->v.df[16] * c->v.df[16];
    c->v.df[18] = c->v.df[18] + c->v.df[20];
    c->v.df[17] = c->v.df[16] * c->v.df[17];
    c->v.d[20] = 0xbe927e4f809c52adull;
    c->v.df[18] = c->v.df[16] * c->v.df[18];
    c->v.df[19] = c->v.df[19] * c->v.df[19];
    c->v.df[17] = c->v.df[17] + c->v.df[20];
    c->v.d[20] = 0x3fe0000000000000ull;
    c->v.df[18] = c->v.df[18] + c->v.df[21];
    c->v.df[21] = c->v.df[0] * c->v.df[1];
    c->v.df[17] = c->v.df[19] * c->v.df[17];
    c->v.df[18] = c->v.df[16] * c->v.df[18];
    c->v.df[19] = c->v.df[16] * c->v.df[20];
    c->v.d[20] = 0x3ff0000000000000ull;
    c->v.df[17] = c->v.df[18] + c->v.df[17];
    c->v.df[18] = c->v.df[20] - c->v.df[19];
    c->v.df[16] = c->v.df[16] * c->v.df[17];
    c->v.df[17] = c->v.df[20] - c->v.df[18];
    c->v.df[17] = c->v.df[17] - c->v.df[19];
    c->v.df[16] = c->v.df[16] - c->v.df[21];
    c->v.df[16] = c->v.df[17] + c->v.df[16];
    c->v.df[0] = c->v.df[18] + c->v.df[16];
    return;
}
void f_281feb8(Cpu *restrict c) {
    FN_ENTER(0x281feb8u);
L_281feb8:;
    c->v.df[16] = c->v.df[0] * c->v.df[0];
    c->v.d[17] = 0x3ef99342e0ee5069ull;
    c->v.d[19] = 0xbfdffffffd0c5e81ull;
    c->v.d[20] = 0x3fa55553e1053a42ull;
    c->v.d[21] = 0xbf56c087e80f1e27ull;
    c->v.df[18] = c->v.df[16] * c->v.df[16];
    c->v.df[17] = c->v.df[16] * c->v.df[17];
    c->v.df[19] = c->v.df[16] * c->v.df[19];
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    c->v.df[18] = c->v.df[18] * c->v.df[20];
    c->v.df[17] = c->v.df[17] + c->v.df[21];
    c->v.d[20] = 0x3ff0000000000000ull;
    c->v.df[19] = c->v.df[19] + c->v.df[20];
    c->v.df[16] = c->v.df[16] * c->v.df[17];
    c->v.df[17] = c->v.df[19] + c->v.df[18];
    c->v.df[16] = c->v.df[17] + c->v.df[16];
    c->v.f[0] = (float)c->v.df[16];
    return;
}
void f_281ff20(Cpu *restrict c) {
    FN_ENTER(0x281ff20u);
L_281ff20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->v.d[16] = 0xc0962066151add8bull;
    c->v.df[0] = c->v.df[0] + c->v.df[16];
    c->r[14] = 0x281ff34u; f_2855af0(c);
    c->v.d[16] = 0x7fc0000000000000ull;
    c->v.df[17] = c->v.df[0] * c->v.df[16];
    c->v.df[0] = c->v.df[17] * c->v.df[16];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281ff58(Cpu *restrict c) {
    FN_ENTER(0x281ff58u);
L_281ff58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->v.s[2] = 0xc322e3bcu;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->r[14] = 0x281ff6cu; f_2855cc4(c);
    c->v.s[2] = 0x7a000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_281ff84(Cpu *restrict c) {
    FN_ENTER(0x281ff84u);
L_281ff84:;
    { uint64_t v = c->v.d[0]; c->r[1] = (uint32_t)v; c->r[2] = (uint32_t)(v >> 32); }
    c->r[0] = 0x7ffu;
    c->r[3] = (c->r[2] >> 20) & 0x7ffu;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_281ffb8; }
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { return; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t r = c->r[1] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = 0x2u;
    if (COND_NE) { c->r[0] = 0x3u; }
    return;
L_281ffb8:;
    c->r[2] = c->r[2] & 0xfffffu;
    { uint32_t r = c->r[1] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_281ffcc(Cpu *restrict c) {
    FN_ENTER(0x281ffccu);
L_281ffcc:;
    c->r[1] = c->v.s[0];
    c->r[2] = (c->r[1] >> 23) & 0xffu;
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_281fffc; }
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { return; }
    c->r[2] = ~0x80000000u;
    c->r[0] = 0x2u;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x3u; }
    return;
L_281fffc:;
    c->r[2] = 0xffffu;
    c->r[0] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x7f0000u;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_2820014(Cpu *restrict c) {
    FN_ENTER(0x2820014u);
L_2820014:;
    __attribute__((musttail)) return f_28561f8(c);
}
void f_2820018(Cpu *restrict c) {
    FN_ENTER(0x2820018u);
L_2820018:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    { uint64_t v = c->v.d[0]; c->r[2] = (uint32_t)v; c->r[0] = (uint32_t)(v >> 32); }
    c->r[1] = c->r[0];
    c->r[3] = 0x6a7au;
    c->r[1] = c->r[1] & 0x7fffffffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x400f0000u;
    c->r[5] = (c->r[0] >> 31);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_HI) { goto L_28200a0; }
    c->r[2] = 0x21fbu;
    c->r[0] = c->r[0] & 0xfffffu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x90000u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_2820180; }
    c->r[0] = 0xd97cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40020000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_282013c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_28202f8; }
    c->v.d[16] = 0x3ff921fb54400000ull;
    c->r[0] = ~0x0u;
    c->v.d[17] = 0x3dd0b4611a626331ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28200a0:;
    c->r[3] = 0x463bu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x401c0000u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_HI) { goto L_2820104; }
    c->r[0] = 0xfdbcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40150000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_2820170; }
    c->r[0] = 0xd97cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40120000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_2820180; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2820350; }
    c->v.d[16] = 0x4012d97c7f300000ull;
    c->r[0] = ~0x2u;
    c->v.d[17] = 0x3de90e91a79394caull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820104:;
    c->r[3] = 0x21fau;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41390000u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LS) { goto L_2820180; }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x7ff00000u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { goto L_2820254; }
    c->v.df[16] = c->v.df[0] - c->v.df[0];
    c->r[0] = 0x0u;
    ST64(c->r[4], c->v.d[16]);
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_282013c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2820324; }
    c->v.d[16] = 0x400921fb54400000ull;
    c->r[0] = ~0x1u;
    c->v.d[17] = 0x3de0b4611a626331ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820170:;
    c->r[0] = 0x21fbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40190000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_28202c4; }
L_2820180:;
    c->v.d[16] = 0x3fe45f306dc9c883ull;
    c->v.d[17] = 0x4338000000000000ull;
    c->v.df[16] = c->v.df[0] * c->v.df[16];
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    c->v.d[17] = 0xc338000000000000ull;
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.d[16] = 0xbff921fb54400000ull;
    c->v.df[17] = c->v.df[18] * c->v.df[16];
    c->v.d[16] = 0x3dd0b4611a626331ull;
    c->v.df[16] = c->v.df[18] * c->v.df[16];
    c->v.df[17] = c->v.df[0] + c->v.df[17];
    c->v.s[0] = vcvt_s32_f64(c->v.df[18]);
    c->v.df[19] = c->v.df[17] - c->v.df[16];
    { uint64_t v = c->v.d[19]; c->r[0] = (uint32_t)v; c->r[2] = (uint32_t)(v >> 32); }
    c->r[0] = (c->r[2] >> 20) & 0x7ffu;
    ST64(c->r[4], c->v.d[19]);
    c->r[2] = (c->r[1] >> 20) - c->r[0];
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[2], 0x11u);
    if (COND_LT) { goto L_2820240; }
    c->v.d[16] = 0x3dd0b4611a600000ull;
    c->r[1] = (c->r[1] >> 20);
    c->v.d[19] = 0x3ba3198a2e037073ull;
    c->v.df[16] = c->v.df[18] * c->v.df[16];
    c->v.df[19] = c->v.df[18] * c->v.df[19];
    c->v.df[20] = c->v.df[17] - c->v.df[16];
    c->v.df[17] = c->v.df[17] - c->v.df[20];
    c->v.df[16] = c->v.df[17] - c->v.df[16];
    c->v.df[16] = c->v.df[19] - c->v.df[16];
    c->v.df[19] = c->v.df[20] - c->v.df[16];
    { uint64_t v = c->v.d[19]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    ST64(c->r[4], c->v.d[19]);
    c->r[2] = (c->r[3] >> 20) & 0x7ffu;
    c->r[1] = c->r[1] - c->r[2];
    (void)f_subs(c, c->r[1], 0x32u);
    if (COND_LT) { goto L_282023c; }
    c->v.d[16] = 0x3ba3198a2e000000ull;
    c->v.d[19] = 0x397b839a252049c1ull;
    c->v.df[16] = c->v.df[18] * c->v.df[16];
    c->v.df[18] = c->v.df[18] * c->v.df[19];
    c->v.df[17] = c->v.df[20] - c->v.df[16];
    c->v.df[20] = c->v.df[20] - c->v.df[17];
    c->v.df[16] = c->v.df[20] - c->v.df[16];
    c->v.df[16] = c->v.df[18] - c->v.df[16];
    c->v.df[19] = c->v.df[17] - c->v.df[16];
    ST64(c->r[4], c->v.d[19]);
    goto L_2820240;
L_282023c:;
    c->v.d[17] = c->v.d[20];
L_2820240:;
    c->v.df[17] = c->v.df[17] - c->v.df[19];
    c->v.df[16] = c->v.df[17] - c->v.df[16];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820254:;
    c->r[3] = 0x416u;
    c->v.d[18] = 0x4170000000000000ull;
    c->r[0] = (c->r[0] & 0xfffffu) | ((c->r[3] << 20) & 0xfff00000u);
    c->v.d[16] = ((uint64_t)c->r[0] << 32) | c->r[2];
    c->v.s[0] = vcvt_s32_f64(c->v.df[16]);
    c->v.df[17] = (double)(int32_t)c->v.s[0];
    c->v.df[16] = c->v.df[16] - c->v.df[17];
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    c->v.s[0] = vcvt_s32_f64(c->v.df[16]);
    c->v.df[19] = (double)(int32_t)c->v.s[0];
    ST64(c->r[13] + 24u, c->v.d[17]);
    c->v.df[16] = c->v.df[16] - c->v.df[19];
    ST64(c->r[13] + 32u, c->v.d[19]);
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    vfp_cmp_d(c, c->v.df[16], 0.0);
    ST64(c->r[13] + 40u, c->v.d[16]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_282037c; }
    c->r[0] = c->r[13] + 0x18u;
    c->r[2] = c->r[0] + 0x8u;
    c->r[0] = 0x2u;
L_28202a8:;
    c->v.d[16] = LD64(c->r[2]);
    c->r[2] = c->r[2] - 0x8u;
    c->r[0] = c->r[0] - 0x1u;
    vfp_cmp_d(c, c->v.df[16], 0.0);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_28202a8; }
    goto L_2820380;
L_28202c4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_28203cc; }
    c->v.d[16] = 0x401921fb54400000ull;
    c->r[0] = ~0x3u;
    c->v.d[17] = 0x3df0b4611a626331ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28202f8:;
    c->v.d[16] = 0xbff921fb54400000ull;
    c->r[0] = 0x1u;
    c->v.d[17] = 0xbdd0b4611a626331ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820324:;
    c->v.d[16] = 0xc00921fb54400000ull;
    c->r[0] = 0x2u;
    c->v.d[17] = 0xbde0b4611a626331ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820350:;
    c->v.d[16] = 0xc012d97c7f300000ull;
    c->r[0] = 0x3u;
    c->v.d[17] = 0xbde90e91a79394caull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_282037c:;
    c->r[0] = 0x2u;
L_2820380:;
    c->r[2] = 0xfbeau;
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + (c->r[1] >> 20);
    c->r[3] = c->r[0] + 0x1u;
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = c->r[13] + 0x8u;
    c->r[14] = 0x28203a4u; f_2856204(c);
    c->v.d[16] = LD64(c->r[13] + 8u);
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.d[17] = LD64(c->r[13] + 16u);
    if (COND_EQ) { goto L_28203f8; }
    c->v.d[17] = c->v.d[17] ^ 0x8000000000000000ull;
    c->r[0] = 0x0u - c->r[0];
    c->v.d[16] = c->v.d[16] ^ 0x8000000000000000ull;
    { uint32_t ea = c->r[4]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28203cc:;
    c->v.d[16] = 0xc01921fb54400000ull;
    c->r[0] = 0x4u;
    c->v.d[17] = 0xbdf0b4611a626331ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[18] = c->v.df[16] + c->v.df[17];
    c->v.df[16] = c->v.df[16] - c->v.df[18];
    ST64(c->r[4], c->v.d[18]);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    ST64(c->r[4] + 8u, c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28203f8:;
    { uint32_t ea = c->r[4]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_28204d0(Cpu *restrict c) {
    FN_ENTER(0x28204d0u);
L_28204d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->v.s[0];
    c->r[4] = c->r[0];
    c->r[1] = 0xfdau;
    c->r[0] = c->r[5];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4dc90000u;
    c->r[0] = c->r[0] & 0x7fffffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { goto L_2820540; }
    c->v.df[16] = (double)c->v.f[0];
    c->v.d[17] = 0x3fe45f306dc9c883ull;
    c->v.d[18] = 0x4338000000000000ull;
    c->v.df[17] = c->v.df[16] * c->v.df[17];
    c->v.df[17] = c->v.df[17] + c->v.df[18];
    c->v.d[18] = 0xc338000000000000ull;
    c->v.df[17] = c->v.df[17] + c->v.df[18];
    c->v.d[18] = 0xbff921fb50000000ull;
    c->v.df[16] = c->v.df[16] + (double)(c->v.df[17] * c->v.df[18]);
    c->v.d[18] = 0xbe5110b4611a6263ull;
    c->v.s[0] = vcvt_s32_f64(c->v.df[17]);
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->r[0] = c->v.s[0];
    c->v.df[16] = c->v.df[16] + c->v.df[18];
    ST64(c->r[4], c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820540:;
    c->r[1] = (c->r[0] >> 23);
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_CC) { goto L_2820564; }
    c->v.f[0] = c->v.f[0] - c->v.f[0];
    c->r[0] = 0x0u;
    c->v.df[16] = (double)c->v.f[0];
    ST64(c->r[4], c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2820564:;
    c->r[1] = ~0x95u;
    c->r[3] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 23);
    c->r[1] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] - (c->r[2] << 23);
    c->v.s[0] = c->r[0];
    c->r[0] = 0x0u;
    c->v.df[16] = (double)c->v.f[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    ST64(c->r[13] + 16u, c->v.d[16]);
    c->r[14] = 0x2820594u; f_2856204(c);
    c->v.d[16] = LD64(c->r[13] + 8u);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_28205ac; }
    ST64(c->r[4], c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28205ac:;
    c->v.d[16] = c->v.d[16] ^ 0x8000000000000000ull;
    c->r[0] = 0x0u - c->r[0];
    ST64(c->r[4], c->v.d[16]);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_28205e8(Cpu *restrict c) {
    FN_ENTER(0x28205e8u);
L_28205e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0x280u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaaabu;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2aaa0000u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = 0x0u; }
    c->r[8] = c->r[0] - (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x323a28u;
    c->r[0] = 0x2820640u + c->r[0];
    c->r[1] = c->r[2] + (c->r[8] << 3);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[3] - 0x1u;
    c->r[2] = c->r[10] + c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_282069c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[10] + c->r[3];
    c->r[6] = 0x3c1890u;
    c->r[5] = c->r[7] - c->r[0];
    c->r[7] = c->r[11] - 0x150u;
    c->r[4] = 0x2820670u + c->r[6];
L_282066c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_2820684; }
    c->r[6] = c->r[4] + (c->r[5] << 2);
    c->v.s[0] = LD32(c->r[6]);
    c->v.df[16] = (double)(int32_t)c->v.s[0];
    goto L_2820688;
L_2820684:;
    c->v.d[16] = 0x0ull;
L_2820688:;
    ST64(c->r[7], c->v.d[16]);
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[7] = c->r[7] + 0x8u;
    c->r[5] = c->r[5] + 0x1u;
    if (COND_NE) { goto L_282066c; }
L_282069c:;
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_282070c; }
    c->r[1] = c->r[11] - 0x150u;
    c->r[2] = 0x0u;
    c->r[7] = c->r[1] + (c->r[0] << 3);
    c->r[1] = c->r[13] + 0x48u;
L_28206c0:;
    c->v.d[16] = 0x0ull;
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
L_28206d0:;
    c->v.d[17] = LD64(c->r[0]);
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->v.d[18] = LD64(c->r[5]);
    c->r[5] = c->r[5] + 0x8u;
    c->r[0] = c->r[0] - 0x8u;
    c->v.df[16] = c->v.df[16] + (double)(c->v.df[18] * c->v.df[17]);
    if (COND_NE) { goto L_28206d0; }
    c->r[0] = c->r[1] + (c->r[2] << 3);
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[2], c->r[10]);
    ST64(c->r[0], c->v.d[16]);
    c->r[0] = c->r[2] + 0x1u;
    c->r[2] = c->r[0];
    if (COND_LT) { goto L_28206c0; }
    goto L_2820728;
L_282070c:;
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[10];
    if (COND_LE) { c->r[0] = 0x0u; }
    c->r[1] = 0x8u;
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = c->r[13] + 0x48u;
    c->r[14] = 0x2820728u; f_283ab44(c);
L_2820728:;
    c->r[0] = (c->r[8] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[11] - 0xacu;
    c->v.d[10] = 0x3e70000000000000ull;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[6] + (c->r[10] << 2);
    c->r[0] = 0x3c17acu;
    c->r[9] = c->r[10];
    c->v.d[11] = 0xc170000000000000ull;
    c->r[0] = 0x2820754u + c->r[0];
    c->v.d[12] = 0x3fc0000000000000ull;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->v.d[13] = 0xc020000000000000ull;
    c->v.d[8] = 0x3ff0000000000000ull;
    c->v.d[14] = 0x3fe0000000000000ull;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x4u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x10u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x48u;
    c->r[1] = c->r[0] - 0x8u;
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x17u - c->r[0];
    c->r[0] = 0x18u - c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3c174cu;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x28207b4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3c173cu;
    c->r[0] = 0x28207c4u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_28208c8;
L_28207c8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[6] = c->r[12];
    goto L_28208c8;
L_28207d4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[10]);
    c->r[1] = c->r[10];
    if (COND_GT) { c->r[1] = c->r[9]; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[1] = c->r[1] - c->r[7];
    c->r[1] = (c->r[1] << 3);
    c->r[14] = 0x28207f4u; f_283ab44(c);
    (void)f_subs(c, c->r[9], c->r[10]);
    c->r[0] = c->r[10];
    if (COND_GT) { c->r[0] = c->r[9]; }
    c->r[12] = c->r[0] - c->r[7];
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LS) { goto L_2820884; }
    c->r[14] = c->r[12];
    c->r[14] = c->r[14] & 0xfffffffeu;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_2820884; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[11] - 0x150u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[8], c->r[10]);
    c->r[2] = c->r[2] + c->r[7];
    c->r[0] = c->r[10] + c->r[14];
    c->r[2] = c->r[3] + (c->r[2] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_GT) { c->r[10] = c->r[8]; }
    c->r[3] = c->r[3] + c->r[7];
    c->r[3] = c->r[4] + (c->r[3] << 2);
    c->r[1] = c->r[7] + c->r[14];
    c->r[7] = c->r[10] - c->r[7];
    c->r[7] = c->r[7] & 0xfffffffeu;
    c->r[3] = c->r[3] + 0x4u;
L_2820858:;
    { uint32_t ea = c->r[3]; c->v.d[0] = LD64(ea + 0u); c->r[3] = ea + 8u; }
    c->r[7] = f_subs(c, c->r[7], 0x2u);
    c->v.df[17] = (double)(int32_t)c->v.s[1];
    c->v.df[16] = (double)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    if (COND_NE) { goto L_2820858; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_EQ) { goto L_28208c8; }
    goto L_2820894;
L_2820884:;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[7];
L_2820894:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[11] - 0x150u;
L_282089c:;
    c->r[2] = c->r[0];
    c->r[1] = c->r[1] + c->r[3];
    c->r[0] = c->r[7] + (c->r[2] << 2);
    (void)f_subs(c, c->r[2], c->r[9]);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5] + (c->r[1] << 3);
    c->v.df[16] = (double)(int32_t)c->v.s[0];
    c->r[1] = c->r[2];
    ST64(c->r[0], c->v.d[16]);
    c->r[0] = c->r[2] + 0x1u;
    if (COND_LT) { goto L_282089c; }
L_28208c8:;
    c->r[7] = c->r[9];
    c->r[0] = c->r[13] + 0x48u;
    c->r[0] = c->r[0] + (c->r[7] << 3);
    (void)f_subs(c, c->r[7], 0x1u);
    c->v.d[0] = LD64(c->r[0]);
    if (COND_LT) { goto L_2820930; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[11] - 0xacu;
    c->r[0] = c->r[0] + (c->r[7] << 3);
L_28208f4:;
    c->v.df[16] = c->v.df[0] * c->v.df[10];
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.s[2] = vcvt_s32_f64(c->v.df[16]);
    c->v.df[16] = (double)(int32_t)c->v.s[2];
    c->v.df[17] = c->v.df[16] * c->v.df[11];
    c->v.df[17] = c->v.df[0] + c->v.df[17];
    c->v.s[0] = vcvt_s32_f64(c->v.df[17]);
    c->v.d[17] = LD64(c->r[0]);
    c->r[0] = c->r[0] - 0x8u;
    c->r[3] = c->v.s[0];
    c->v.df[0] = c->v.df[16] + c->v.df[17];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); c->r[2] = c->r[2] + 0x4u; }
    if (COND_GT) { goto L_28208f4; }
    goto L_2820934;
L_2820930:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2820934:;
    c->r[0] = c->r[8];
    c->r[14] = 0x282093cu; f_2855214(c);
    c->v.d[9] = c->v.d[0];
    c->v.df[0] = c->v.df[9] * c->v.df[12];
    c->r[14] = 0x2820948u; f_2855ae4(c);
    c->v.df[16] = c->v.df[0] * c->v.df[13];
    (void)f_subs(c, c->r[8], 0x1u);
    c->v.df[16] = c->v.df[9] + c->v.df[16];
    c->v.s[0] = vcvt_s32_f64(c->v.df[16]);
    c->v.df[17] = (double)(int32_t)c->v.s[0];
    c->r[4] = c->v.s[0];
    c->v.df[9] = c->v.df[16] - c->v.df[17];
    if (COND_LT) { goto L_28209fc; }
    c->r[0] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = sh_asr(c->r[1], c->r[3]);
    c->r[1] = c->r[1] - sh_lsl(c->r[2], c->r[3]);
    c->r[4] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = sh_asr(c->r[1], c->r[0]);
L_282098c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_LT) { goto L_2820ab0; }
L_282099c:;
    c->r[12] = c->r[4];
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_2820a24; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[7];
    c->r[4] = c->r[6];
    c->r[2] = c->r[6];
    goto L_28209c4;
L_28209bc:;
    c->r[0] = 0x0u;
    goto L_28209ec;
L_28209c4:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0xff000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28209e4; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_28209bc; }
    c->r[6] = 0x1000000u;
    c->r[0] = 0x1u;
L_28209e4:;
    c->r[3] = c->r[6] - c->r[3];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
L_28209ec:;
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[2] = c->r[2] + 0x4u;
    if (COND_NE) { goto L_28209c4; }
    goto L_2820a2c;
L_28209fc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2820a54; }
    vfp_cmp_d(c, c->v.df[9], c->v.df[14]);
    c->r[9] = 0x2u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_282099c; }
    c->r[9] = 0x0u;
    goto L_2820ab0;
L_2820a24:;
    c->r[4] = c->r[6];
    c->r[0] = 0x0u;
L_2820a2c:;
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[4] = c->r[12];
    if (COND_LT) { goto L_2820a78; }
    c->r[1] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f0000u;
    if (COND_EQ) { goto L_2820a64; }
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_EQ) { goto L_2820a68; }
    goto L_2820a78;
L_2820a54:;
    c->r[0] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = (uint32_t)((int32_t)c->r[0] >> 23);
    goto L_282098c;
L_2820a64:;
    c->r[1] = c->r[1] + 0x400000u;
L_2820a68:;
    c->r[2] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[1]); }
L_2820a78:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_NE) { goto L_2820ab0; }
    c->v.df[9] = c->v.df[8] - c->v.df[9];
    c->r[9] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2820ab0; }
    c->v.d[0] = c->v.d[8];
    c->r[0] = c->r[8];
    c->r[14] = 0x2820aa0u; f_2855214(c);
    c->v.df[9] = c->v.df[9] - c->v.df[0];
    c->r[9] = 0x2u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[14] = v; }
L_2820ab0:;
    vfp_cmp_d(c, c->v.df[9], 0.0);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_2820c38; }
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_LE) { goto L_2820b70; }
    c->r[12] = c->r[6];
    c->r[6] = c->r[7] - c->r[10];
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_CS) { goto L_2820af0; }
    c->r[0] = c->r[7];
    goto L_2820b50;
L_2820af0:;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[1] = c->r[1] & 0xfffffffcu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2820b50; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7] - c->r[1];
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[3] = c->r[1];
    c->r[2] = c->r[2] + (c->r[7] << 2);
L_2820b18:;
    { uint32_t ea = c->r[2]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[3] = f_subs(c, c->r[3], 0x4u);
    c->r[2] = c->r[2] - 0x10u;
    { uint32_t t0 = c->v.s[37]; uint32_t t1 = c->v.s[36]; uint32_t t2 = c->v.s[39]; uint32_t t3 = c->v.s[38]; c->v.s[36] = t0; c->v.s[37] = t1; c->v.s[38] = t2; c->v.s[39] = t3; }
    { uint8_t t0 = c->v.b[152]; uint8_t t1 = c->v.b[153]; uint8_t t2 = c->v.b[154]; uint8_t t3 = c->v.b[155]; uint8_t t4 = c->v.b[156]; uint8_t t5 = c->v.b[157]; uint8_t t6 = c->v.b[158]; uint8_t t7 = c->v.b[159]; uint8_t t8 = c->v.b[144]; uint8_t t9 = c->v.b[145]; uint8_t t10 = c->v.b[146]; uint8_t t11 = c->v.b[147]; uint8_t t12 = c->v.b[148]; uint8_t t13 = c->v.b[149]; uint8_t t14 = c->v.b[150]; uint8_t t15 = c->v.b[151]; c->v.b[144] = t0; c->v.b[145] = t1; c->v.b[146] = t2; c->v.b[147] = t3; c->v.b[148] = t4; c->v.b[149] = t5; c->v.b[150] = t6; c->v.b[151] = t7; c->v.b[152] = t8; c->v.b[153] = t9; c->v.b[154] = t10; c->v.b[155] = t11; c->v.b[156] = t12; c->v.b[157] = t13; c->v.b[158] = t14; c->v.b[159] = t15; }
    { uint64_t t0 = c->v.d[18] | c->v.d[16]; uint64_t t1 = c->v.d[19] | c->v.d[17]; c->v.d[16] = t0; c->v.d[17] = t1; }
    if (COND_NE) { goto L_2820b18; }
    { uint8_t t0 = c->v.b[136]; uint8_t t1 = c->v.b[137]; uint8_t t2 = c->v.b[138]; uint8_t t3 = c->v.b[139]; uint8_t t4 = c->v.b[140]; uint8_t t5 = c->v.b[141]; uint8_t t6 = c->v.b[142]; uint8_t t7 = c->v.b[143]; uint8_t t8 = c->v.b[128]; uint8_t t9 = c->v.b[129]; uint8_t t10 = c->v.b[130]; uint8_t t11 = c->v.b[131]; uint8_t t12 = c->v.b[132]; uint8_t t13 = c->v.b[133]; uint8_t t14 = c->v.b[134]; uint8_t t15 = c->v.b[135]; c->v.b[144] = t0; c->v.b[145] = t1; c->v.b[146] = t2; c->v.b[147] = t3; c->v.b[148] = t4; c->v.b[149] = t5; c->v.b[150] = t6; c->v.b[151] = t7; c->v.b[152] = t8; c->v.b[153] = t9; c->v.b[154] = t10; c->v.b[155] = t11; c->v.b[156] = t12; c->v.b[157] = t13; c->v.b[158] = t14; c->v.b[159] = t15; }
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint64_t t0 = c->v.d[16] | c->v.d[18]; uint64_t t1 = c->v.d[17] | c->v.d[19]; c->v.d[16] = t0; c->v.d[17] = t1; }
    { uint32_t t = c->v.s[33]; c->v.s[36] = t; c->v.s[37] = t; c->v.s[38] = t; c->v.s[39] = t; }
    { uint64_t t0 = c->v.d[16] | c->v.d[18]; uint64_t t1 = c->v.d[17] | c->v.d[19]; c->v.d[16] = t0; c->v.d[17] = t1; }
    c->r[2] = c->v.s[32];
    if (COND_EQ) { goto L_2820b64; }
L_2820b50:;
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    c->r[2] = c->r[1] | c->r[2];
    if (COND_GT) { goto L_2820b50; }
L_2820b64:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[6] = c->r[12];
    if (COND_NE) { goto L_2820ca4; }
L_2820b70:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0x1u;
    c->r[0] = 0x0u;
L_2820b7c:;
    { uint32_t ea = c->r[3] - (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[1];
    c->r[1] = c->r[8] + 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2820b7c; }
    c->r[9] = c->r[7] + c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_28208c8; }
    c->r[10] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_28207d4; }
    c->r[0] = c->r[14] + c->r[7];
    c->r[8] = c->r[11] - 0x150u;
    c->r[12] = c->r[6];
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_2820bc8:;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + c->r[4];
    c->v.d[16] = 0x0ull;
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[3] = c->r[0];
    c->v.s[0] = LD32(c->r[2]);
    c->r[2] = c->r[7] + c->r[14];
    c->v.df[17] = (double)(int32_t)c->v.s[0];
    c->r[2] = c->r[8] + (c->r[2] << 3);
    c->r[7] = c->r[14];
    ST64(c->r[2], c->v.d[17]);
    c->r[2] = c->r[6];
L_2820bfc:;
    c->v.d[17] = LD64(c->r[3]);
    c->r[3] = c->r[3] - 0x8u;
    c->v.d[18] = LD64(c->r[2]);
    c->r[2] = c->r[2] + 0x8u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->v.df[16] = c->v.df[16] + (double)(c->v.df[18] * c->v.df[17]);
    if (COND_NE) { goto L_2820bfc; }
    c->r[2] = c->r[5] + (c->r[1] << 3);
    c->r[0] = c->r[0] + 0x8u;
    c->r[10] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[9]);
    c->r[7] = c->r[1];
    ST64(c->r[2], c->v.d[16]);
    if (COND_LT) { goto L_2820bc8; }
    goto L_28207c8;
L_2820c38:;
    c->r[0] = 0x0u - c->r[8];
    c->v.d[0] = c->v.d[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    c->r[14] = 0x2820c48u; f_2855214(c);
    c->v.d[16] = 0x4170000000000000ull;
    vfp_cmp_d(c, c->v.df[0], c->v.df[16]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_2820c60; }
    c->v.d[16] = c->v.d[0];
    goto L_2820c90;
L_2820c60:;
    c->v.df[16] = c->v.df[0] * c->v.df[10];
    c->v.s[2] = vcvt_s32_f64(c->v.df[16]);
    c->v.df[16] = (double)(int32_t)c->v.s[2];
    c->v.df[17] = c->v.df[16] * c->v.df[11];
    c->v.df[17] = c->v.df[0] + c->v.df[17];
    c->v.s[0] = vcvt_s32_f64(c->v.df[17]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[6] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[1] + c->r[0];
L_2820c90:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    c->v.s[0] = vcvt_s32_f64(c->v.df[16]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[6] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    goto L_2820cc0;
L_2820ca4:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
L_2820cac:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] - 0x1u;
    c->r[8] = c->r[8] - 0x18u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2820cac; }
L_2820cc0:;
    c->v.d[0] = 0x3ff0000000000000ull;
    c->r[0] = c->r[8];
    c->r[14] = 0x2820cccu; f_2855214(c);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[3] = c->r[13] + 0x48u;
    if (COND_LT) { goto L_2820d80; }
    c->r[0] = c->r[3] + (c->r[7] << 3);
    c->r[1] = c->r[7];
L_2820ce0:;
    c->r[2] = c->r[6] + (c->r[1] << 2);
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.s[2] = LD32(c->r[2]);
    c->r[2] = c->r[1] - 0x1u;
    c->v.df[16] = (double)(int32_t)c->v.s[2];
    c->r[1] = c->r[2];
    c->v.df[16] = c->v.df[0] * c->v.df[16];
    c->v.df[0] = c->v.df[0] * c->v.df[10];
    ST64(c->r[0], c->v.d[16]);
    c->r[0] = c->r[0] - 0x8u;
    if (COND_GT) { goto L_2820ce0; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_2820d80; }
    c->r[1] = c->r[3] + (c->r[7] << 3);
    c->r[12] = 0x3c12d0u;
    c->r[14] = c->r[13] + 0xe8u;
    c->r[0] = c->r[7];
L_2820d24:;
    c->v.d[16] = 0x0ull;
    c->r[8] = c->r[0];
    c->r[6] = c->r[7] - c->r[8];
    c->r[4] = 0x2820d38u + c->r[12];
    c->r[2] = 0x0u;
    c->r[0] = c->r[1];
L_2820d3c:;
    c->v.d[17] = LD64(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[10]);
    c->v.d[18] = LD64(c->r[4]);
    c->v.df[16] = c->v.df[16] + (double)(c->v.df[18] * c->v.df[17]);
    if (COND_GE) { goto L_2820d68; }
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[6]);
    c->r[0] = c->r[0] + 0x8u;
    c->r[4] = c->r[4] + 0x8u;
    c->r[2] = c->r[3];
    if (COND_LT) { goto L_2820d3c; }
L_2820d68:;
    c->r[0] = c->r[14] + (c->r[6] << 3);
    c->r[1] = c->r[1] - 0x8u;
    (void)f_subs(c, c->r[8], 0x0u);
    ST64(c->r[0], c->v.d[16]);
    c->r[0] = c->r[8] - 0x1u;
    if (COND_GT) { goto L_2820d24; }
L_2820d80:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_2820e88; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_2820f0c; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_2820f50; }
    c->v.d[16] = 0x0ull;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_2820e58; }
    c->r[0] = c->r[13] + 0xe8u;
    c->r[2] = c->r[7] + 0x1u;
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->v.d[17] = LD64(c->r[0]);
    c->r[1] = c->r[0] - 0x8u;
L_2820dc8:;
    c->v.d[18] = LD64(c->r[1]);
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    c->v.df[19] = c->v.df[18] + c->v.df[17];
    c->v.df[18] = c->v.df[18] - c->v.df[19];
    ST64(c->r[1], c->v.d[19]);
    c->v.df[17] = c->v.df[17] + c->v.df[18];
    ST64(c->r[1] + 8u, c->v.d[17]);
    c->r[1] = c->r[1] - 0x8u;
    c->v.d[17] = c->v.d[19];
    if (COND_GT) { goto L_2820dc8; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_LT) { goto L_2820e58; }
    c->v.d[17] = LD64(c->r[0]);
    c->r[1] = c->r[0] - 0x8u;
    c->r[2] = c->r[7];
L_2820e08:;
    c->v.d[18] = LD64(c->r[1]);
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    c->v.df[19] = c->v.df[18] + c->v.df[17];
    c->v.df[18] = c->v.df[18] - c->v.df[19];
    ST64(c->r[1], c->v.d[19]);
    c->v.df[17] = c->v.df[17] + c->v.df[18];
    ST64(c->r[1] + 8u, c->v.d[17]);
    c->r[1] = c->r[1] - 0x8u;
    c->v.d[17] = c->v.d[19];
    if (COND_GT) { goto L_2820e08; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_LT) { goto L_2820e58; }
    c->v.d[16] = 0x0ull;
L_2820e40:;
    c->v.d[17] = LD64(c->r[0]);
    c->r[7] = c->r[7] - 0x1u;
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[7], 0x1u);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    if (COND_GT) { goto L_2820e40; }
L_2820e58:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->v.d[18] = LD64(c->r[13] + 232u);
    c->v.d[17] = LD64(c->r[13] + 240u);
    if (COND_EQ) { goto L_2820e78; }
    c->v.d[18] = c->v.d[18] ^ 0x8000000000000000ull;
    c->v.d[16] = c->v.d[16] ^ 0x8000000000000000ull;
    c->v.d[17] = c->v.d[17] ^ 0x8000000000000000ull;
L_2820e78:;
    ST64(c->r[1], c->v.d[18]);
    ST64(c->r[1] + 8u, c->v.d[17]);
    c->r[1] = c->r[1] + 0x10u;
    goto L_2820f4c;
L_2820e88:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = 0x0ull;
    if (COND_LT) { goto L_2820ec0; }
    c->r[0] = c->r[13] + 0xe8u;
    c->r[1] = c->r[7] + 0x1u;
    c->r[0] = c->r[0] + (c->r[7] << 3);
L_2820ea8:;
    c->v.d[17] = LD64(c->r[0]);
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    if (COND_GT) { goto L_2820ea8; }
L_2820ec0:;
    c->v.d[17] = c->v.d[16] ^ 0x8000000000000000ull;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->v.d[17] = c->v.d[16]; }
    (void)f_subs(c, c->r[7], 0x1u);
    ST64(c->r[1], c->v.d[17]);
    c->v.d[17] = LD64(c->r[13] + 232u);
    c->v.df[17] = c->v.df[17] - c->v.df[16];
    if (COND_LT) { goto L_2820efc; }
    c->r[0] = c->r[13] + 0xe8u;
    c->r[0] = c->r[0] + 0x8u;
L_2820eec:;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->r[0] = c->r[0] + 8u; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->v.df[17] = c->v.df[17] + c->v.df[16];
    if (COND_NE) { goto L_2820eec; }
L_2820efc:;
    c->v.d[16] = c->v.d[17] ^ 0x8000000000000000ull;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[1] + 0x8u;
    goto L_2820f48;
L_2820f0c:;
    c->v.d[17] = 0x0ull;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_2820f3c; }
    c->r[0] = c->r[13] + 0xe8u;
    c->r[1] = c->r[7] + 0x1u;
    c->r[0] = c->r[0] + (c->r[7] << 3);
L_2820f24:;
    c->v.d[16] = LD64(c->r[0]);
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.df[17] = c->v.df[17] + c->v.df[16];
    if (COND_GT) { goto L_2820f24; }
L_2820f3c:;
    c->v.d[16] = c->v.d[17] ^ 0x8000000000000000ull;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2820f48:;
    if (COND_EQ) { c->v.d[16] = c->v.d[17]; }
L_2820f4c:;
    ST64(c->r[1], c->v.d[16]);
L_2820f50:;
    c->r[0] = c->r[6] & 0x7u;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2820f88(Cpu *restrict c) {
    FN_ENTER(0x2820f88u);
L_2820f88:;
    { uint64_t v = c->v.d[0]; c->r[0] = (uint32_t)v; c->r[1] = (uint32_t)(v >> 32); }
    c->r[0] = (c->r[1] >> 31);
    return;
}
void f_2820f94(Cpu *restrict c) {
    FN_ENTER(0x2820f94u);
L_2820f94:;
    c->r[0] = c->v.s[0];
    c->r[0] = (c->r[0] >> 31);
    return;
}
void f_2820fa0(Cpu *restrict c) {
    FN_ENTER(0x2820fa0u);
L_2820fa0:;
    __attribute__((musttail)) return f_2856210(c);
}
void f_2820fa8(Cpu *restrict c) {
    FN_ENTER(0x2820fa8u);
L_2820fa8:;
    c->v.df[16] = c->v.df[0] * c->v.df[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.d[17] = 0x3ec71de357b1fe7dull;
    c->v.d[18] = 0xbf2a01a019c161d5ull;
    c->v.d[19] = 0xbe5ae5e68a2b9cebull;
    c->v.d[21] = 0x3f8111111110f8a6ull;
    c->v.df[18] = c->v.df[18] + (double)(c->v.df[16] * c->v.df[17]);
    c->v.d[17] = 0x3de5d93a5acfd57cull;
    c->v.df[20] = c->v.df[16] * c->v.df[16];
    c->v.df[19] = c->v.df[19] + (double)(c->v.df[16] * c->v.df[17]);
    c->v.df[21] = c->v.df[21] + (double)(c->v.df[16] * c->v.df[18]);
    c->v.df[17] = c->v.df[16] * c->v.df[20];
    c->v.df[17] = c->v.df[17] * c->v.df[19];
    c->v.df[18] = c->v.df[21] + c->v.df[17];
    c->v.df[17] = c->v.df[16] * c->v.df[0];
    if (COND_EQ) { goto L_2821014; }
    c->v.d[19] = 0x3fe0000000000000ull;
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->v.df[19] = c->v.df[1] * c->v.df[19];
    c->v.df[18] = c->v.df[19] - c->v.df[18];
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    c->v.d[18] = 0x3fc5555555555549ull;
    c->v.df[17] = c->v.df[17] * c->v.df[18];
    c->v.df[16] = c->v.df[16] - c->v.df[1];
    c->v.df[16] = c->v.df[17] + c->v.df[16];
    c->v.df[0] = c->v.df[0] - c->v.df[16];
    return;
L_2821014:;
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    c->v.d[19] = 0xbfc5555555555549ull;
    c->v.df[16] = c->v.df[19] + c->v.df[16];
    c->v.df[0] = c->v.df[0] + (double)(c->v.df[17] * c->v.df[16]);
    return;
}
void f_2821060(Cpu *restrict c) {
    FN_ENTER(0x2821060u);
L_2821060:;
    c->v.df[16] = c->v.df[0] * c->v.df[0];
    c->v.d[17] = 0x3f811110896efbb2ull;
    c->v.d[18] = 0x3ec6cd878c3b46a7ull;
    c->v.d[21] = 0xbfc5555554cbac77ull;
    c->v.df[17] = c->v.df[16] * c->v.df[17];
    c->v.df[19] = c->v.df[16] * c->v.df[0];
    c->v.df[20] = c->v.df[16] * c->v.df[16];
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    c->v.df[17] = c->v.df[17] + c->v.df[21];
    c->v.d[18] = 0xbf2a00f9e2cae774ull;
    c->v.df[20] = c->v.df[19] * c->v.df[20];
    c->v.df[16] = c->v.df[16] + c->v.df[18];
    c->v.df[17] = c->v.df[19] * c->v.df[17];
    c->v.df[16] = c->v.df[20] * c->v.df[16];
    c->v.df[17] = c->v.df[17] + c->v.df[0];
    c->v.df[16] = c->v.df[16] + c->v.df[17];
    c->v.f[0] = (float)c->v.df[16];
    return;
}
void f_28210c8(Cpu *restrict c) {
    FN_ENTER(0x28210c8u);
L_28210c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint64_t v = c->v.d[0]; c->r[1] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0x9427u;
    c->r[4] = 0x0u;
    c->r[1] = c->r[3] & ~0x80000007u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x3fe50000u;
    c->r[2] = f_subs(c, c->r[4], 0x1u);
    c->r[2] = f_sbcs(c, c->r[1], c->r[14]);
    if (COND_CC) { goto L_2821124; }
    c->v.d[18] = c->v.d[0] ^ 0x8000000000000000ull;
    (void)f_subs(c, c->r[4], (c->r[3] >> 31));
    c->v.d[19] = c->v.d[1] ^ 0x8000000000000000ull;
    c->r[12] = (c->r[3] >> 31);
    c->v.d[16] = 0x3c81a62633145c07ull;
    c->v.d[17] = 0x3fe921fb54442d18ull;
    if (COND_EQ) { c->v.d[19] = c->v.d[1]; }
    if (COND_EQ) { c->v.d[18] = c->v.d[0]; }
    c->v.df[16] = c->v.df[16] - c->v.df[19];
    c->v.df[17] = c->v.df[17] - c->v.df[18];
    c->v.df[0] = c->v.df[17] + c->v.df[16];
    c->v.d[1] = 0x0ull;
    goto L_2821124;
L_2821124:;
    c->v.df[16] = c->v.df[0] * c->v.df[0];
    c->r[2] = f_subs(c, c->r[4], 0x1u);
    c->r[1] = f_sbcs(c, c->r[1], c->r[14]);
    c->v.d[18] = 0x3efb2a7074bf7ad4ull;
    c->v.d[19] = 0xbef375cbdb605373ull;
    c->v.d[20] = 0x3f12b80f32f0a7e9ull;
    c->v.d[21] = 0x3f147e88a03792a6ull;
    c->v.df[17] = c->v.df[16] * c->v.df[16];
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->v.df[19] = c->v.df[17] * c->v.df[19];
    c->v.df[18] = c->v.df[18] + c->v.df[20];
    c->v.d[20] = 0x3f3026f71a8d1068ull;
    c->v.df[19] = c->v.df[19] + c->v.df[21];
    c->v.d[21] = 0x3f4344d8f2f26501ull;
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->v.df[19] = c->v.df[17] * c->v.df[19];
    c->v.df[18] = c->v.df[18] + c->v.df[20];
    c->v.d[20] = 0x3f57dbc8fee08315ull;
    c->v.df[19] = c->v.df[19] + c->v.df[21];
    c->v.d[21] = 0x3f6d6d22c9560328ull;
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->v.df[19] = c->v.df[17] * c->v.df[19];
    c->v.df[18] = c->v.df[18] + c->v.df[20];
    c->v.d[20] = 0x3f8226e3e96e8493ull;
    c->v.df[19] = c->v.df[19] + c->v.df[21];
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->v.df[19] = c->v.df[17] * c->v.df[19];
    c->v.df[18] = c->v.df[18] + c->v.df[20];
    c->v.d[20] = 0x3f9664f48406d637ull;
    c->v.df[19] = c->v.df[19] + c->v.df[20];
    c->v.df[18] = c->v.df[17] * c->v.df[18];
    c->v.d[20] = 0x3faba1ba1bb341feull;
    c->v.df[17] = c->v.df[17] * c->v.df[19];
    c->v.d[19] = 0x3fc111111110fe7aull;
    c->v.df[18] = c->v.df[18] + c->v.df[20];
    c->v.df[17] = c->v.df[17] + c->v.df[19];
    c->v.df[18] = c->v.df[16] * c->v.df[18];
    c->v.df[19] = c->v.df[0] * c->v.df[16];
    c->v.df[17] = c->v.df[17] + c->v.df[18];
    c->v.df[17] = c->v.df[19] * c->v.df[17];
    c->v.df[17] = c->v.df[1] + c->v.df[17];
    c->v.df[16] = c->v.df[16] * c->v.df[17];
    c->v.d[17] = 0x3fd5555555555563ull;
    c->v.df[17] = c->v.df[19] * c->v.df[17];
    c->v.df[16] = c->v.df[1] + c->v.df[16];
    c->v.df[17] = c->v.df[17] + c->v.df[16];
    c->v.df[16] = c->v.df[0] + c->v.df[17];
    if (COND_CC) { goto L_2821228; }
    c->r[1] = 0x1u;
    c->v.df[19] = c->v.df[16] * c->v.df[16];
    c->r[0] = c->r[1] - (c->r[0] << 1);
    (void)f_subs(c, c->r[12], 0x0u);
    c->v.s[2] = c->r[0];
    c->v.df[18] = (double)(int32_t)c->v.s[2];
    c->v.df[16] = c->v.df[18] + c->v.df[16];
    c->v.df[16] = c->v.df[19] / c->v.df[16];
    c->v.df[16] = c->v.df[17] - c->v.df[16];
    c->v.d[17] = 0xc000000000000000ull;
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    c->v.df[16] = c->v.df[16] * c->v.df[17];
    c->v.df[16] = c->v.df[18] + c->v.df[16];
    c->v.d[17] = c->v.d[16] ^ 0x8000000000000000ull;
    if (COND_NE) { c->v.d[16] = c->v.d[17]; }
    c->v.d[0] = c->v.d[16];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2821228:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821268; }
    c->v.d[18] = 0xbff0000000000000ull;
    c->v.df[18] = c->v.df[18] / c->v.df[16];
    { uint64_t v = c->v.d[16]; c->r[0] = (uint32_t)v; c->r[1] = (uint32_t)(v >> 32); }
    c->r[0] = 0x0u;
    c->v.d[20] = ((uint64_t)c->r[1] << 32) | c->r[0];
    c->v.d[19] = 0x3ff0000000000000ull;
    { uint64_t v = c->v.d[18]; c->r[1] = (uint32_t)v; c->r[2] = (uint32_t)(v >> 32); }
    c->v.d[16] = ((uint64_t)c->r[2] << 32) | c->r[0];
    c->v.df[19] = c->v.df[19] + (double)(c->v.df[20] * c->v.df[16]);
    c->v.df[20] = c->v.df[20] - c->v.df[0];
    c->v.df[17] = c->v.df[17] - c->v.df[20];
    c->v.df[17] = c->v.df[16] * c->v.df[17];
    c->v.df[17] = c->v.df[19] + c->v.df[17];
    c->v.df[16] = c->v.df[16] + (double)(c->v.df[18] * c->v.df[17]);
L_2821268:;
    c->v.d[0] = c->v.d[16];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_28212e8(Cpu *restrict c) {
    FN_ENTER(0x28212e8u);
L_28212e8:;
    c->v.df[16] = c->v.df[0] * c->v.df[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.d[17] = 0x3f8362b9bf971bcdull;
    c->v.d[18] = 0x3f685dadfcecf44eull;
    c->v.d[19] = 0x3f991df3908c33ceull;
    c->v.d[20] = 0x3fab54c91d865afeull;
    c->v.df[18] = c->v.df[18] + (double)(c->v.df[16] * c->v.df[17]);
    c->v.d[21] = 0x3fc112fd38999f72ull;
    c->v.df[20] = c->v.df[20] + (double)(c->v.df[16] * c->v.df[19]);
    c->v.d[22] = 0x3fd5554d3418c99full;
    c->v.df[17] = c->v.df[16] * c->v.df[21];
    c->v.df[19] = c->v.df[16] * c->v.df[16];
    c->v.df[16] = c->v.df[16] * c->v.df[0];
    c->v.df[17] = c->v.df[22] + c->v.df[17];
    c->v.df[18] = c->v.df[19] * c->v.df[18];
    c->v.df[0] = c->v.df[0] + (double)(c->v.df[16] * c->v.df[17]);
    c->v.df[16] = c->v.df[16] * c->v.df[19];
    c->v.df[18] = c->v.df[20] + c->v.df[18];
    c->v.df[16] = c->v.df[16] * c->v.df[18];
    c->v.df[16] = c->v.df[0] + c->v.df[16];
    if (COND_EQ) { goto L_2821344; }
    c->v.d[17] = 0xbff0000000000000ull;
    c->v.df[16] = c->v.df[17] / c->v.df[16];
L_2821344:;
    c->v.f[0] = (float)c->v.df[16];
    return;
}
void f_2821380(Cpu *restrict c) {
    FN_ENTER(0x2821380u);
L_2821380:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[0] = 0x3c0c9cu;
    c->r[2] = 0x41u;
    c->r[0] = 0x28213acu + c->r[0];
    c->r[14] = 0x28213acu; f_283afb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[2] = 0x3c0c84u;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x28213c4u + c->r[2];
    c->r[4] = c->r[0] - c->r[2];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[0] = 0x3c0c6cu;
    c->r[2] = 0x41u;
    c->r[0] = 0x28213dcu + c->r[0];
    c->r[14] = 0x28213dcu; f_283afb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[2] = 0x3c0c54u;
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x28213f4u + c->r[2];
    c->r[0] = c->r[0] - c->r[2];
    c->r[4] = c->r[4] | (c->r[0] << 6);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[0] = 0x3c0c38u;
    c->r[2] = 0x41u;
    c->r[0] = 0x2821410u + c->r[0];
    c->r[14] = 0x2821410u; f_283afb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[2] = 0x3c0c20u;
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x2821428u + c->r[2];
    c->r[0] = c->r[0] - c->r[2];
    c->r[4] = c->r[4] | (c->r[0] << 12);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[0] = 0x3c0c04u;
    c->r[2] = 0x41u;
    c->r[0] = 0x2821444u + c->r[0];
    c->r[14] = 0x2821444u; f_283afb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[2] = 0x3c0becu;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x282145cu + c->r[2];
    c->r[0] = c->r[0] - c->r[2];
    c->r[4] = c->r[4] | (c->r[0] << 18);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[0] = 0x3c0bd0u;
    c->r[2] = 0x41u;
    c->r[0] = 0x2821478u + c->r[0];
    c->r[14] = 0x2821478u; f_283afb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[2] = 0x3c0bb8u;
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x2821490u + c->r[2];
    c->r[0] = c->r[0] - c->r[2];
    c->r[4] = c->r[4] | (c->r[0] << 24);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[0] = 0x3c0b9cu;
    c->r[2] = 0x41u;
    c->r[0] = 0x28214acu + c->r[0];
    c->r[14] = 0x28214acu; f_283afb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28214c4; }
    c->r[1] = 0x3c0b88u;
    c->r[1] = 0x28214c0u + c->r[1];
    c->r[0] = c->r[0] - c->r[1];
    c->r[4] = c->r[4] | (c->r[0] << 30);
L_28214c4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_28214fc(Cpu *restrict c) {
    FN_ENTER(0x28214fcu);
L_28214fc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821538; }
    c->r[1] = 0x51acc8u;
    c->r[12] = 0x0u;
    c->r[2] = 0x3c0b2cu;
    c->r[1] = 0x2821518u + c->r[1];
    c->r[2] = 0x282151cu + c->r[2];
L_2821518:;
    c->r[3] = c->r[0] & 0x3fu;
    (void)f_subs(c, c->r[12], (c->r[0] >> 6));
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[3]); c->r[1] = c->r[1] + 0x1u; }
    c->r[3] = (c->r[0] >> 6);
    c->r[0] = c->r[3];
    if (COND_NE) { goto L_2821518; }
    goto L_2821540;
L_2821538:;
    c->r[0] = 0x51ac9cu;
    c->r[1] = 0x2821544u + c->r[0];
L_2821540:;
    c->r[0] = 0x51ac8cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = 0x2821554u + c->r[0];
    return;
}
void f_2821564(Cpu *restrict c) {
    FN_ENTER(0x2821564u);
L_2821564:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_28215b4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28215c0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x282158cu; f_283b2ac(c);
    c->r[1] = f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_28215cc; }
L_2821594:;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { goto L_28215d4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2821594; }
    goto L_28215d8;
L_28215b4:;
    c->r[0] = 0x31a51du;
    c->r[0] = 0x28215c0u + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28215c0:;
    c->r[0] = 0x31a511u;
    c->r[0] = 0x28215ccu + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28215cc:;
    c->r[0] = 0x0u;
    goto L_28215d8;
L_28215d4:;
    c->r[0] = c->r[1];
L_28215d8:;
    c->r[1] = c->r[4] - 0x1u;
L_28215dc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821600; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2fu);
    if (COND_NE) { goto L_28215dc; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2821600:;
    c->r[0] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2821614(Cpu *restrict c) {
    FN_ENTER(0x2821614u);
L_2821614:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2821670; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821680; }
    c->r[0] = c->r[5];
    c->r[14] = 0x282163cu; f_283b2ac(c);
    c->r[12] = 0x317b12u;
    c->r[2] = c->r[5] + c->r[0];
    c->r[1] = c->r[2] - 0x1u;
    c->r[3] = 0x0u;
L_282164c:;
    { uint32_t ea = c->r[1] - c->r[3]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x2fu);
    if (COND_NE) { goto L_2821690; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_282164c; }
    c->r[5] = 0x282166cu + c->r[12];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2821670:;
    c->r[0] = 0x31a461u;
    c->r[5] = 0x282167cu + c->r[0];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2821680:;
    c->r[0] = 0x31a451u;
    c->r[5] = 0x282168cu + c->r[0];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2821690:;
    c->r[12] = 0x31a3ddu;
    c->r[3] = 0x0u - c->r[3];
L_2821698:;
    c->r[4] = c->r[0] + c->r[3];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_28216f8; }
    c->r[4] = c->r[2] + c->r[3];
    c->r[3] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x2fu);
    if (COND_NE) { goto L_2821698; }
    c->r[2] = 0x0u - c->r[3];
    c->r[3] = 0x317a72u;
    c->r[0] = c->r[0] - 0x1u;
    c->r[12] = c->r[5] + c->r[0];
L_28216c8:;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_2821704; }
    c->r[4] = c->r[12] - c->r[2];
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] - 0x1u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x2fu);
    if (COND_EQ) { goto L_28216c8; }
    c->r[0] = c->r[1] - c->r[2];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28216f8:;
    c->r[5] = 0x2821700u + c->r[12];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2821704:;
    c->r[5] = 0x282170cu + c->r[3];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2821724(Cpu *restrict c) {
    FN_ENTER(0x2821724u);
L_2821724:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    c->r[1] = 0x0u - c->r[0];
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0xe629u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x76b0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x3c0939u;
    c->r[1] = 0x2821750u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] >> 27); uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    return;
}
void f_282175c(Cpu *restrict c) {
    FN_ENTER(0x282175cu);
L_282175c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    c->r[1] = 0x0u - c->r[0];
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0xe629u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x76b0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x3c0901u;
    c->r[1] = 0x2821788u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] >> 27); uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    return;
}
void f_2821794(Cpu *restrict c) {
    FN_ENTER(0x2821794u);
L_2821794:;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    c->r[2] = 0xe629u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x76b0000u;
    if (COND_EQ) { goto L_28217d0; }
    c->r[1] = 0x0u - c->r[0];
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0x3c08c1u;
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = 0x28217c8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] >> 27); uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    return;
L_28217d0:;
    c->r[0] = 0x0u - c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    c->r[1] = 0x3c08a1u;
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = 0x28217e8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] >> 27); uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20u;
    c->r[0] = c->r[0] + 0x1u;
    return;
}
void f_28217fc(Cpu *restrict c) {
    FN_ENTER(0x28217fcu);
L_28217fc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[0];
    c->r[0] = 0x43a4bcu;
    c->r[8] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = 0x282181cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[1];
    c->r[14] = 0x2821820u; f_285621c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x2821830u; f_2856228(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x282183cu; f_2856234(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2821850; }
L_2821844:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_2856240(c);
L_2821850:;
    c->r[0] = c->r[7];
    c->r[14] = 0x2821858u; f_283b2ac(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x1u;
    c->r[3] = c->r[4];
    c->r[14] = 0x282186cu; f_28531d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821844; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[2] = c->r[8];
    c->r[3] = c->r[4];
    c->r[14] = 0x2821888u; f_28531d4(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_2821844; }
    c->r[0] = 0xau;
    c->r[1] = c->r[4];
    c->r[14] = 0x282189cu; f_285624c(c);
    goto L_2821844;
}
void f_28218a4(Cpu *restrict c) {
    FN_ENTER(0x28218a4u);
L_28218a4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[7] = c->r[0];
    c->r[0] = 0x43b580u;
    c->r[5] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = 0x28218c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28218e4; }
    c->r[1] = 0x43b568u;
    { uint32_t ea = 0x28218dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2821910; }
L_28218e4:;
    c->r[0] = 0x43b548u;
    c->r[3] = 0x0u;
    c->r[1] = 0x43b54cu;
    c->r[2] = 0x43b544u;
    { uint32_t ea = 0x28218fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2821900u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2821904u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_2821910:;
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_GE) { goto L_2821bd8; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2821bd8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2du);
    if (COND_NE) { goto L_2821a54; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2821bd8; }
    (void)f_subs(c, c->r[2], 0x2du);
    if (COND_NE) { goto L_2821954; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2821b1c; }
L_2821954:;
    c->r[0] = 0x43b4ecu;
    { uint32_t ea = 0x2821960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2821978; }
    c->r[0] = 0x43b4d8u;
    { uint32_t ea = 0x2821974u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_2821978:;
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[2] = 0x4u;
    c->r[14] = 0x2821988u; f_2853828(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GE) { goto L_28219a0; }
    c->r[0] = 0xfffdu;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_28219a0:;
    c->r[0] = 0x43b498u;
    c->r[1] = 0x43b498u;
    { uint32_t ea = 0x28219b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x28219b4u + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_28219f0; }
    c->r[3] = 0x43b464u;
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = 0x43b464u;
    { uint32_t ea = 0x28219e4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x28219e8u + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
L_28219f0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2du);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x2bu); }
    if (COND_NE) { goto L_2821a04; }
    c->r[5] = c->r[5] + 0x1u;
L_2821a04:;
    c->r[0] = c->r[1] + c->r[0];
    c->r[9] = 0x0u;
    c->r[4] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
L_2821a18:;
    c->r[1] = c->r[5] + c->r[9];
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x2821a28u; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = c->r[2] + c->r[9];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821a84; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_2821a18; }
    goto L_2821a90;
L_2821a54:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2du);
    if (COND_NE) { goto L_2821bd8; }
    c->r[2] = 0x43b3d0u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[3] = 0x43b3d4u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x2821a78u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x2821a7cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    goto L_2821bd8;
L_2821a84:;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_2821adc; }
    c->r[6] = c->r[1];
L_2821a90:;
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_NE) { goto L_2821bd8; }
    c->r[0] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3au);
    if (COND_NE) { goto L_2821b30; }
    c->r[1] = 0x43b390u;
    c->r[3] = 0x0u;
    c->r[2] = 0x43b388u;
    { uint32_t ea = 0x2821ac0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2821ac4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x3au);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2821b50; }
    goto L_2821bd8;
L_2821adc:;
    c->r[0] = 0x43b368u;
    c->r[6] = 0x3fu;
    { uint32_t ea = 0x2821aecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2821bd8; }
    c->r[0] = 0x43b354u;
    { uint32_t ea = 0x2821b04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821bd8; }
    c->r[1] = 0x3215f3u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2821b1cu + c->r[1];
    goto L_2821bcc;
L_2821b1c:;
    c->r[1] = 0x43b31cu;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = 0x2821b2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_2821bd8;
L_2821b30:;
    c->r[0] = 0x43b30cu;
    { uint32_t ea = 0x2821b3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_GE) { goto L_2821b8c; }
    c->r[0] = 0x43b2fcu;
    { uint32_t ea = 0x2821b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2821b50:;
    c->r[1] = 0x43b2e4u;
    c->r[2] = 0x43b2e8u;
    c->r[7] = 0x43b2d0u;
    { uint32_t ea = 0x2821b64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2821b68u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2821b7cu + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    goto L_2821bd8;
L_2821b8c:;
    c->r[0] = 0x43b2bcu;
    { uint32_t ea = 0x2821b98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[6] = 0x3au;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2821bd8; }
    c->r[0] = 0x43b2a0u;
    c->r[6] = 0x3fu;
    { uint32_t ea = 0x2821bb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821bd8; }
    c->r[1] = 0x321557u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2821bd0u + c->r[1];
L_2821bcc:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[8];
    c->r[14] = 0x2821bd8u; f_2856258(c);
L_2821bd8:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2821c50(Cpu *restrict c) {
    FN_ENTER(0x2821c50u);
L_2821c50:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    c->r[14] = 0x2821c6cu; f_2821c74(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2821c74(Cpu *restrict c) {
    FN_ENTER(0x2821c74u);
L_2821c74:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    c->r[8] = c->r[1];
    c->r[1] = 0x43b1b8u;
    { uint32_t ea = 0x2821c90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2821cac; }
    c->r[1] = 0x43b1a0u;
    { uint32_t ea = 0x2821ca4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2821cd8; }
L_2821cac:;
    c->r[7] = 0x43b188u;
    c->r[5] = 0x0u;
    c->r[1] = 0x43b17cu;
    c->r[6] = 0x43b17cu;
    { uint32_t ea = 0x2821cc4u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x2821cc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2821cccu + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
L_2821cd8:;
    c->r[10] = ~0x0u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GE) { goto L_282200c; }
    { uint32_t ea = c->r[8] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282200c; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[5] = c->r[7];
    (void)f_subs(c, c->r[6], 0x2bu);
    if (COND_EQ) { goto L_2821d0c; }
    (void)f_subs(c, c->r[6], 0x2du);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_2821d5c; }
L_2821d0c:;
    c->r[1] = 0x43b130u;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[6] = 0x0u;
    { uint32_t ea = 0x2821d20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_2821f6c; }
    { uint32_t ea = c->r[8] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2du);
    if (COND_NE) { goto L_2821f6c; }
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2821d9c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2821f6c; }
    (void)f_subs(c, c->r[6], 0x2du);
    if (COND_EQ) { goto L_2821da4; }
    goto L_2821db4;
L_2821d5c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282200c; }
    c->r[6] = c->r[7] + 0x1u;
L_2821d68:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2du);
    if (COND_NE) { goto L_2821d80; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2821ea4; }
L_2821d80:;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_282200c; }
    { uint32_t ea = c->r[8] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2821d68; }
    goto L_282200c;
L_2821d9c:;
    (void)f_subs(c, c->r[6], 0x2du);
    if (COND_NE) { goto L_2821f6c; }
L_2821da4:;
    { uint32_t ea = c->r[14] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[6] = 0x2du;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2821f6c; }
L_2821db4:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[12] = v; }
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[12], 0x2du);
    if (COND_EQ) { c->r[5] = c->r[1]; }
    (void)f_subs(c, c->r[12], 0x2bu);
    if (COND_EQ) { c->r[5] = c->r[1]; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[12] = v; }
    if (COND_EQ) { goto L_2821eb8; }
    (void)f_subs(c, c->r[6], 0x2du);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    if (COND_EQ) { c->r[4] = c->r[14] + 0x2u; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[14]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
L_2821e0c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2821e4c; }
    (void)f_subs(c, c->r[9], c->r[6]);
    c->r[5] = c->r[4];
    c->r[14] = c->r[6];
    if (COND_NE) { goto L_2821e54; }
    c->r[1] = c->r[10] + 0x1u;
    c->r[5] = c->r[4];
L_2821e30:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[14] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2821e54; }
    (void)f_subs(c, c->r[9], c->r[14]);
    if (COND_EQ) { goto L_2821e30; }
    goto L_2821e54;
L_2821e4c:;
    c->r[5] = c->r[4];
    c->r[14] = c->r[6];
L_2821e54:;
    (void)f_subs(c, c->r[14], 0x3du);
    if (COND_NE) { (void)f_subs(c, c->r[14], 0x0u); }
    if (COND_NE) { goto L_2821e78; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2822018; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
L_2821e78:;
    c->r[12] = c->r[12] + 0x1u;
    { uint32_t ea = c->r[3] + (c->r[12] << 4); uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_2821e0c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[13] + 4u; c->r[6] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_NE) { goto L_2821ebc; }
    goto L_2822020;
L_2821ea4:;
    c->r[1] = 0x43af94u;
    c->r[5] = c->r[6] - 0x1u;
    { uint32_t ea = 0x2821eb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    goto L_2821d0c;
L_2821eb8:;
    c->r[4] = 0x0u;
L_2821ebc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], 0x2du);
    if (COND_NE) { goto L_2821f6c; }
    c->r[0] = 0x43af78u;
    (void)f_subs(c, c->r[12], 0x3au);
    c->r[1] = 0x43af78u;
    { uint32_t ea = 0x2821edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2821ee0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_EQ) { goto L_2821f4c; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_2821f4c; }
    c->r[1] = 0x3211f3u;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = 0x321248u;
    c->r[9] = c->r[14] + 0x2u;
    c->r[5] = 0x2821f1cu + c->r[1];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { c->r[5] = 0x2821f24u + c->r[0]; }
    c->r[0] = c->r[9];
    c->r[14] = 0x2821f28u; f_283b2ac(c);
    c->r[3] = c->r[0];
    c->r[1] = c->r[5];
    c->r[0] = c->r[6];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x2821f40u; f_2856258(c);
    c->r[0] = 0x43aefcu;
    { uint32_t ea = 0x2821f4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2821f4c:;
    c->r[1] = 0x43aee8u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[10] = 0x3fu;
    { uint32_t ea = 0x2821f60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_GT) { goto L_2821f80; }
    goto L_282200c;
L_2821f6c:;
    c->r[1] = c->r[8];
    c->r[14] = 0x2821f74u; f_2856264(c);
    c->r[10] = c->r[0];
L_2821f78:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_LE) { goto L_282200c; }
L_2821f80:;
    c->r[0] = 0x43aebcu;
    { uint32_t ea = 0x2821f8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1] - c->r[5];
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_2821ffc; }
    c->r[5] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_LE) { goto L_2821fe8; }
    c->r[14] = c->r[8] + (c->r[5] << 2);
    c->r[3] = 0x0u;
L_2821fac:;
    { uint32_t ea = c->r[8] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    c->r[1] = c->r[5];
L_2821fb8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    c->r[4] = c->r[0];
    if (COND_GT) { goto L_2821fb8; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_NE) { goto L_2821fac; }
    goto L_2821ffc;
L_2821fe8:;
    c->r[1] = c->r[12];
L_2821fec:;
    { uint32_t ea = c->r[8] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[8] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2821fec; }
L_2821ffc:;
    c->r[0] = 0x43ae3cu;
    c->r[1] = c->r[12] + c->r[7];
    { uint32_t ea = 0x282200cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_282200c:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2822018:;
    c->r[9] = c->r[12];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
L_2822020:;
    c->r[0] = 0x43ae18u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2822030u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[3] + (c->r[9] << 4);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], 0x3du);
    if (COND_NE) { goto L_2822064; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_28220c4; }
    c->r[1] = 0x43adecu;
    c->r[2] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x2822064u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2822094;
L_2822064:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_2822098; }
    c->r[2] = 0x43add0u;
    { uint32_t ea = c->r[8] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2822080u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_2822124; }
    c->r[1] = 0x43adb0u;
    c->r[2] = c->r[5] + 0x2u;
    { uint32_t ea = 0x2822098u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_2822094:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_2822098:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[9]); } }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); } }
    if (COND_NE) { c->r[10] = 0x0u; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_GT) { goto L_2821f80; }
    goto L_282200c;
L_28220c4:;
    c->r[1] = 0x43ad74u;
    (void)f_subs(c, c->r[12], 0x3au);
    c->r[2] = 0x43ad74u;
    c->r[10] = 0x3fu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x28220e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x28220e4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282218c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2821f78; }
    { uint32_t ea = c->r[3] + (c->r[9] << 4); uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x2822114u; f_283b2ac(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x321023u;
    c->r[1] = 0x2822124u + c->r[0];
    goto L_2822174;
L_2822124:;
    c->r[1] = 0x43ad18u;
    c->r[10] = 0x3au;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x3au);
    { uint32_t ea = 0x282213cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2821f78; }
    c->r[0] = 0x43ad08u;
    c->r[10] = 0x3fu;
    { uint32_t ea = 0x2822150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2821f78; }
    { uint32_t ea = c->r[3] + (c->r[9] << 4); uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x2822168u; f_283b2ac(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x320fafu;
    c->r[1] = 0x2822178u + c->r[0];
L_2822174:;
    c->r[0] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0x2822180u; f_2856258(c);
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_GT) { goto L_2821f80; }
    goto L_282200c;
L_282218c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_GT) { goto L_2821f80; }
    goto L_282200c;
}
void f_2822200(Cpu *restrict c) {
    FN_ENTER(0x2822200u);
L_2822200:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    c->r[14] = 0x282221cu; f_2821c74(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2822224(Cpu *restrict c) {
    FN_ENTER(0x2822224u);
L_2822224:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[7] = c->r[0];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[2];
    c->r[4] = 0x0u;
    c->r[1] = 0x2cu;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x2822250u; f_2842494(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282226c; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[4]); }
    goto L_282227c;
L_282226c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x2822274u; f_283b2ac(c);
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_282227c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28222dc; }
    c->r[9] = c->r[6] + 0x4u;
    c->r[6] = 0x0u;
L_2822290:;
    c->r[0] = c->r[7];
    c->r[14] = 0x2822298u; f_283b2ac(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x28222acu; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28222cc; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28222e0; }
    (void)f_subs(c, c->r[1], 0x3du);
    if (COND_EQ) { goto L_28222e8; }
L_28222cc:;
    { uint32_t ea = c->r[9] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2822290; }
L_28222dc:;
    c->r[6] = ~0x0u;
L_28222e0:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_28222e8:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_28222f8(Cpu *restrict c) {
    FN_ENTER(0x28222f8u);
L_28222f8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_CS) { c->r[0] = ~0x0u; }
    return;
}
void f_2822308(Cpu *restrict c) {
    FN_ENTER(0x2822308u);
L_2822308:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[3] = 0x519eccu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[2] = 0x2822320u + c->r[3]; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_EQ) { goto L_2822350; }
    c->r[12] = c->r[1] & 0xfc00u;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_2822374; }
    (void)f_subs(c, c->r[12], 0xdc00u);
    if (COND_NE) { goto L_2822358; }
    c->r[1] = c->r[1] + c->r[14];
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] - 0xdc00u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    goto L_2822394;
L_2822350:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_28223a0; }
L_2822358:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[14] = 0x2822364u; f_283cc8c(c);
    c->r[1] = 0x54u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822374:;
    (void)f_subs(c, c->r[12], 0xd800u);
    if (COND_NE) { goto L_2822394; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfca10000u;
    c->r[0] = c->r[0] + (c->r[1] << 10);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822394:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2853804(c);
L_28223a0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_28223ac(Cpu *restrict c) {
    FN_ENTER(0x28223acu);
L_28223ac:;
    __attribute__((musttail)) return f_2853804(c);
}
void f_28223b0(Cpu *restrict c) {
    FN_ENTER(0x28223b0u);
L_28223b0:;
    c->r[2] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    __attribute__((musttail)) return f_2853828(c);
}
void f_28223c0(Cpu *restrict c) {
    FN_ENTER(0x28223c0u);
L_28223c0:;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x519e14u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[3] = 0x28223dcu + c->r[0]; }
    c->r[0] = 0x0u;
    __attribute__((musttail)) return f_285381c(c);
}
void f_28223e4(Cpu *restrict c) {
    FN_ENTER(0x28223e4u);
L_28223e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->r[0] = 0x519decu;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { c->r[4] = 0x2822408u + c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_2822424; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2822440; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); } }
    goto L_282242c;
L_2822424:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_282247c; }
L_282242c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x2u;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2822440:;
    c->r[0] = c->r[13];
    c->r[3] = c->r[4];
    c->r[14] = 0x282244cu; f_285381c(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_28224d4; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x10000u);
    if (COND_CC) { goto L_28224c8; }
    c->r[1] = 0xd7c0u;
    c->r[3] = 0x37u;
    c->r[1] = c->r[1] + (c->r[2] >> 10);
    c->r[2] = (c->r[2] & 0x3ffu) | ((c->r[3] << 10) & 0xfffffc00u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    goto L_28224cc;
L_282247c:;
    c->r[0] = 0x3151f0u;
    c->r[2] = 0x1u;
    c->r[3] = c->r[4];
    c->r[1] = 0x2822490u + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x2822494u; f_285381c(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_28224d4; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_CC) { goto L_28224d4; }
    c->r[2] = 0xd7c0u;
    c->r[3] = 0x37u;
    c->r[2] = c->r[2] + (c->r[1] >> 10);
    c->r[1] = (c->r[1] & 0x3ffu) | ((c->r[3] << 10) & 0xfffffc00u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_28224c8:;
    c->r[1] = c->r[2];
L_28224cc:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5]; ST16(ea, c->r[1]); } }
L_28224d4:;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_28224e4(Cpu *restrict c) {
    FN_ENTER(0x28224e4u);
L_28224e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x519cf4u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[3] = 0x2822504u + c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282252c; }
    c->r[0] = c->r[13];
    c->r[14] = 0x2822510u; f_285381c(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2822524; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LS) { { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_LS) { { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); } }
L_2822524:;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_282252c:;
    c->r[0] = 0x315144u;
    c->r[2] = 0x1u;
    c->r[1] = 0x282253cu + c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x2822540u; f_285381c(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2822550(Cpu *restrict c) {
    FN_ENTER(0x2822550u);
L_2822550:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = 0x519c90u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[3] = 0x282256cu + c->r[6]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_EQ) { goto L_28225f4; }
    c->r[12] = c->r[13] + 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[12] = c->r[0]; }
    c->r[0] = ~0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2822614; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_282261c; }
    c->r[6] = c->r[2];
L_2822598:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[5] = ~0xfu;
    c->r[7] = (c->r[4] >> 3);
    c->r[5] = c->r[5] + (c->r[4] >> 3);
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[14] >> 26);
    c->r[5] = c->r[5] | c->r[7];
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_HI) { goto L_28225fc; }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[6] - 0x1u;
    c->r[6] = ~0x7fu;
L_28225c4:;
    c->r[4] = c->r[6] + (uint32_t)(uint8_t)(c->r[4]);
    c->r[14] = c->r[4] | (c->r[14] << 6);
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_GE) { goto L_2822680; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2822674; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = c->r[5] + 0x1u; c->r[4] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[7] = c->r[4] & 0xc0u;
    (void)f_subs(c, c->r[7], 0x80u);
    if (COND_EQ) { goto L_28225c4; }
    goto L_28225fc;
L_28225f4:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_2822640; }
L_28225fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[14] = 0x2822608u; f_283cc8c(c);
    c->r[1] = 0x54u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = ~0x0u;
L_2822614:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_282261c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = (uint32_t)(int32_t)(int8_t)(c->r[5]);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_282264c; }
    if (COND_NE) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2822640:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_282264c:;
    c->r[5] = c->r[5] - 0xc2u;
    (void)f_subs(c, c->r[5], 0x32u);
    if (COND_HI) { goto L_28225fc; }
    c->r[4] = 0x3bfa44u;
    c->r[6] = f_subs(c, c->r[2], 0x1u);
    c->r[4] = 0x2822668u + c->r[4];
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_EQ) { goto L_2822674; }
    c->r[1] = c->r[1] + 0x1u;
    goto L_2822598;
L_2822674:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[14]); }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2822680:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - c->r[1];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_28226a0(Cpu *restrict c) {
    FN_ENTER(0x28226a0u);
L_28226a0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_28226c0(Cpu *restrict c) {
    FN_ENTER(0x28226c0u);
L_28226c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[1];
    c->r[9] = c->r[13] + 0x10u;
    c->r[7] = c->r[3];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_EQ) { c->r[7] = 0x100u; }
    if (COND_NE) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[6] = 0x0u;
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2822780; }
    c->r[6] = 0x0u;
    c->r[8] = c->r[13] + 0xcu;
L_282271c:;
    c->r[2] = (c->r[4] >> 2);
    (void)f_subs(c, c->r[4], 0x83u);
    if (COND_LS) { (void)f_subs(c, c->r[2], c->r[7]); }
    if (COND_CC) { goto L_2822780; }
    (void)f_subs(c, c->r[2], c->r[7]);
    c->r[0] = c->r[5];
    if (COND_CS) { c->r[2] = c->r[7]; }
    c->r[1] = c->r[8];
    c->r[3] = c->r[10];
    c->r[4] = c->r[4] - c->r[2];
    c->r[14] = 0x2822748u; f_2853528(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2822774; }
    (void)f_subs(c, c->r[5], c->r[9]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[7] = c->r[7] - c->r[0]; }
    if (COND_NE) { c->r[5] = c->r[5] + (c->r[0] << 2); }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[6] = c->r[0] + c->r[6];
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_282271c; }
    goto L_2822780;
L_2822774:;
    c->r[6] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
L_2822780:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28227e8; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28227f0; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_28227f0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = 0x1u - c->r[7];
L_28227a0:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = c->r[10];
    c->r[14] = 0x28227b0u; f_285381c(c);
    c->r[1] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LS) { goto L_2822810; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_28227f4; }
    c->r[4] = f_subs(c, c->r[4], c->r[0]);
    c->r[7] = c->r[7] + 0x1u;
    c->r[5] = c->r[5] + 0x4u;
    if (COND_NE) { goto L_28227a0; }
    goto L_28227f4;
L_28227e8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_28227f4;
L_28227f0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
L_28227f4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2822810:;
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_282282c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2822834; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_28227f4;
L_282282c:;
    c->r[6] = ~0x0u;
    goto L_28227f4;
L_2822834:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    goto L_28227f4;
}
void f_2822840(Cpu *restrict c) {
    FN_ENTER(0x2822840u);
L_2822840:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[8] = c->r[1];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; } }
    c->r[1] = 0x8080u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0xfeffu;
    c->r[5] = c->r[0];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80800000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xfefe0000u;
    if (COND_NE) { (void)f_subs(c, c->r[12], 0x0u); }
    if (COND_EQ) { goto L_28228d4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_282297c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
L_2822888:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[7] = ~0xfu;
    c->r[14] = c->r[7] + (c->r[3] >> 3);
    c->r[7] = (c->r[3] >> 3);
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[12] >> 26);
    c->r[7] = c->r[14] | c->r[7];
    (void)f_subs(c, c->r[7], 0x7u);
    if (COND_HI) { goto L_2822a80; }
    c->r[3] = c->r[3] - 0x80u;
    c->r[7] = c->r[6] + 0x1u;
    c->r[3] = c->r[3] | (c->r[12] << 6);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_28229a4; }
L_28228bc:;
    c->r[6] = c->r[7];
L_28228c0:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[3]); c->r[5] = c->r[5] + 0x4u; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28228e8; }
    goto L_2822ab0;
L_28228d4:;
    c->r[0] = c->r[2];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2822ad0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2822ab0; }
L_28228e8:;
    c->r[12] = ~0x0u;
L_28228ec:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[3] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[3], 0x7eu);
    if (COND_HI) { goto L_2822958; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CC) { goto L_2822958; }
    { uint32_t r = c->r[6] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { goto L_2822958; }
L_282290c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[4];
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t r = c->r[3] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2822958; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[3]); }
    c->r[5] = c->r[5] + 0x10u;
    if (COND_HI) { goto L_282290c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[7] = v; }
L_2822958:;
    c->r[3] = c->r[12] + (uint32_t)(uint8_t)(c->r[7]);
    c->r[7] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[3], 0x7eu);
    if (COND_HI) { goto L_2822984; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); c->r[5] = c->r[5] + 0x4u; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x1u;
    if (COND_NE) { goto L_28228ec; }
    goto L_2822ab0;
L_282297c:;
    c->r[0] = c->r[2];
    goto L_2822a60;
L_2822984:;
    c->r[3] = c->r[7] - 0xc2u;
    (void)f_subs(c, c->r[3], 0x32u);
    if (COND_HI) { goto L_2822a8c; }
    c->r[7] = 0x3bf70cu;
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = 0x28229a0u + c->r[7];
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_2822888;
L_28229a4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - 0x80u;
    (void)f_subs(c, c->r[7], 0x40u);
    if (COND_CC) { goto L_28229bc; }
L_28229b4:;
    c->r[6] = c->r[6] - 0x1u;
    goto L_2822a98;
L_28229bc:;
    c->r[3] = c->r[7] | (c->r[3] << 6);
    c->r[7] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_28228bc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - 0x80u;
    (void)f_subs(c, c->r[7], 0x40u);
    if (COND_CS) { goto L_28229b4; }
    c->r[3] = c->r[7] | (c->r[3] << 6);
    c->r[6] = c->r[6] + 0x3u;
    goto L_28228c0;
L_28229e8:;
    c->r[0] = c->r[0] - 0x1u;
    c->r[6] = c->r[6] + 0x1u;
L_28229f0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[3] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[3], 0x7eu);
    if (COND_HI) { goto L_2822a34; }
    { uint32_t r = c->r[6] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2822a34; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[4];
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t r = c->r[3] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2822a34; }
L_2822a1c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[0] = c->r[0] - 0x4u;
    c->r[3] = c->r[7] + c->r[4];
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t r = c->r[3] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2822a1c; }
L_2822a34:;
    c->r[3] = c->r[12] + (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[3], 0x7eu);
    if (COND_LS) { goto L_28229e8; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[3] = c->r[3] - 0xc2u;
    (void)f_subs(c, c->r[3], 0x32u);
    if (COND_HI) { goto L_2822a8c; }
    c->r[7] = 0x3bf64cu;
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = 0x2822a60u + c->r[7];
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
L_2822a60:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[7] = ~0xfu;
    c->r[7] = c->r[7] + (c->r[3] >> 3);
    c->r[3] = (c->r[3] >> 3);
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[12] >> 26);
    c->r[3] = c->r[7] | c->r[3];
    (void)f_subs(c, c->r[3], 0x7u);
    if (COND_LS) { goto L_2822abc; }
L_2822a80:;
    c->r[6] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { goto L_2822a98; }
L_2822a8c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2822ad8; }
L_2822a98:;
    c->r[14] = 0x2822a9cu; f_283cc8c(c);
    c->r[1] = 0x54u;
    c->r[2] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_2822aec; }
L_2822ab0:;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_2822abc:;
    c->r[3] = c->r[6] + 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2822af4; }
L_2822ac8:;
    c->r[6] = c->r[3];
L_2822acc:;
    c->r[0] = c->r[0] - 0x1u;
L_2822ad0:;
    c->r[12] = ~0x0u;
    goto L_28229f0;
L_2822ad8:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[2] - c->r[0];
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); } }
L_2822aec:;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_2822af4:;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0xc0u;
    (void)f_subs(c, c->r[3], 0x80u);
    if (COND_NE) { goto L_2822a80; }
    c->r[3] = c->r[6] + 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2822ac8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0xc0u;
    (void)f_subs(c, c->r[3], 0x80u);
    if (COND_NE) { goto L_2822a80; }
    c->r[6] = c->r[6] + 0x3u;
    goto L_2822acc;
}
void f_2822b30(Cpu *restrict c) {
    FN_ENTER(0x2822b30u);
L_2822b30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x2822b4cu; f_2853528(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2822b54(Cpu *restrict c) {
    FN_ENTER(0x2822b54u);
L_2822b54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2822b9c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2822c00; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[12] = c->r[13] + 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[12] = c->r[0]; }
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[3]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2822ba8; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[3]); }
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822b9c:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822ba8:;
    c->r[0] = c->r[3] - 0xc2u;
    (void)f_subs(c, c->r[0], 0x32u);
    if (COND_HI) { goto L_2822c00; }
    c->r[3] = 0x3bf4e8u;
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[3] = 0x2822bc4u + c->r[3];
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_HI) { goto L_2822be0; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[3] = ~0x5u;
    c->r[2] = c->r[3] + (c->r[2] << 1);
    c->r[3] = 0x80000000u;
    { uint32_t r = c->r[0] & shc_lsr(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2822c00; }
L_2822be0:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = ~0xfu;
    c->r[14] = c->r[3] + (c->r[2] >> 3);
    c->r[3] = (c->r[2] >> 3);
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 26);
    c->r[3] = c->r[14] | c->r[3];
    (void)f_subs(c, c->r[3], 0x7u);
    if (COND_LS) { goto L_2822c18; }
L_2822c00:;
    c->r[14] = 0x2822c04u; f_283cc8c(c);
    c->r[1] = 0x54u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = ~0x0u;
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822c18:;
    c->r[2] = c->r[2] - 0x80u;
    c->r[0] = c->r[2] | (c->r[0] << 6);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2822c38; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822c38:;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x80u;
    (void)f_subs(c, c->r[2], 0x3fu);
    if (COND_HI) { goto L_2822c00; }
    c->r[0] = c->r[2] | (c->r[0] << 6);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2822c64; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2822c64:;
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x80u;
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_HI) { goto L_2822c00; }
    c->r[0] = c->r[1] | (c->r[0] << 6);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2822c8c(Cpu *restrict c) {
    FN_ENTER(0x2822c8cu);
L_2822c8c:;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2822d88; }
    (void)f_subs(c, c->r[1], 0x7fu);
    if (COND_HI) { goto L_2822cac; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[2];
    return;
L_2822cac:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[1] >> 11));
    if (COND_NE) { goto L_2822cd8; }
    c->r[2] = 0xc0u;
    c->r[2] = c->r[2] | (c->r[1] >> 6);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = (c->r[1] & 0x3fu) | ((c->r[2] << 6) & 0xffffffc0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[2];
    return;
L_2822cd8:;
    (void)f_subs(c, c->r[1], 0xd800u);
    if (COND_CC) { goto L_2822d3c; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xffffe000u;
    (void)f_subs(c, c->r[2], 0xe000u);
    if (COND_EQ) { goto L_2822d3c; }
    c->r[2] = c->r[1] - 0x10000u;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[3], (c->r[2] >> 20));
    if (COND_NE) { goto L_2822d6c; }
    c->r[2] = 0xf0u;
    c->r[3] = 0x2u;
    c->r[2] = c->r[2] | (c->r[1] >> 18);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 12);
    c->r[2] = (c->r[2] & 0x3fu) | ((c->r[3] << 6) & 0xffffffc0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 6);
    c->r[1] = (c->r[1] & 0x3fu) | ((c->r[3] << 6) & 0xffffffc0u);
    c->r[2] = (c->r[2] & 0x3fu) | ((c->r[3] << 6) & 0xffffffc0u);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[2];
    return;
L_2822d3c:;
    c->r[2] = 0xe0u;
    c->r[3] = 0x2u;
    c->r[2] = c->r[2] | (c->r[1] >> 12);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 6);
    c->r[1] = (c->r[1] & 0x3fu) | ((c->r[3] << 6) & 0xffffffc0u);
    c->r[2] = (c->r[2] & 0x3fu) | ((c->r[3] << 6) & 0xffffffc0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[2];
    return;
L_2822d6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[14] = 0x2822d78u; f_283cc8c(c);
    c->r[1] = 0x54u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
L_2822d88:;
    c->r[0] = c->r[2];
    return;
}
void f_2822d90(Cpu *restrict c) {
    FN_ENTER(0x2822d90u);
L_2822d90:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x10cu;
    c->r[9] = c->r[0];
    c->r[8] = c->r[13] + 0x8u;
    c->r[6] = c->r[3];
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[8];
    if (COND_EQ) { c->r[6] = 0x100u; }
    if (COND_NE) { c->r[7] = c->r[9]; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[5] = 0x0u;
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_2822e44; }
    c->r[5] = 0x0u;
    c->r[10] = c->r[13] + 0x4u;
L_2822de0:;
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_CC) { (void)f_subs(c, c->r[4], 0x21u); }
    if (COND_CC) { goto L_2822e44; }
    (void)f_subs(c, c->r[4], c->r[6]);
    c->r[2] = c->r[4];
    if (COND_CS) { c->r[2] = c->r[6]; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[10];
    c->r[3] = 0x0u;
    c->r[4] = c->r[4] - c->r[2];
    c->r[14] = 0x2822e0cu; f_2856270(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2822e38; }
    (void)f_subs(c, c->r[7], c->r[8]);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[6] = c->r[6] - c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] + c->r[0]; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[5] = c->r[0] + c->r[5];
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_NE) { goto L_2822de0; }
    goto L_2822e44;
L_2822e38:;
    c->r[5] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
L_2822e44:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2822ec8; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2822ec8; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2822ec8; }
    c->r[4] = 0x1u - c->r[4];
L_2822e60:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[2] = 0x0u;
    c->r[14] = 0x2822e70u; f_2853804(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LS) { goto L_2822eb4; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[1] + c->r[5];
    c->r[6] = f_subs(c, c->r[6], c->r[1]);
    c->r[2] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_2822ec8; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[4] = c->r[0];
    c->r[7] = c->r[7] + c->r[1];
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_2822e60; }
    goto L_2822ecc;
L_2822eb4:;
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2822ecc; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_2822ec8:;
    c->r[0] = c->r[5];
L_2822ecc:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); } }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2822ee4(Cpu *restrict c) {
    FN_ENTER(0x2822ee4u);
L_2822ee4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[0];
    c->r[5] = c->r[2];
    c->r[9] = c->r[1];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2822f6c; }
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_CC) { goto L_2822fbc; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[5];
L_2822f14:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[0], 0x7fu);
    if (COND_CC) { goto L_2822f4c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2823054; }
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    c->r[14] = 0x2822f38u; f_2853804(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2823044; }
    c->r[4] = c->r[4] - c->r[0];
    c->r[10] = c->r[10] + c->r[0];
    goto L_2822f58;
L_2822f4c:;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[1]); c->r[10] = c->r[10] + 0x1u; }
    c->r[4] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
L_2822f58:;
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[4], 0x3u);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[6]); }
    if (COND_HI) { goto L_2822f14; }
    goto L_2822fc0;
L_2822f6c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282304c; }
    c->r[6] = c->r[0] + 0x4u;
    c->r[5] = 0x0u;
    c->r[4] = c->r[13];
L_2822f88:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x80u);
    if (COND_CC) { goto L_2822fa8; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x2822fa0u; f_2853804(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2823044; }
L_2822fa8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    c->r[5] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2822f88; }
    goto L_282306c;
L_2822fbc:;
    c->r[4] = c->r[5];
L_2822fc0:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_282306c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = c->r[13];
L_2822fd0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[0], 0x7fu);
    if (COND_CC) { goto L_2823024; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2823054; }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[14] = 0x2822ff4u; f_2853804(c);
    c->r[7] = c->r[0];
    (void)f_adds(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_2823044; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_CC) { goto L_2823068; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    c->r[14] = 0x2823018u; f_2853804(c);
    c->r[4] = c->r[4] - c->r[7];
    c->r[10] = c->r[10] + c->r[7];
    goto L_2823030;
L_2823024:;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[1]); c->r[10] = c->r[10] + 0x1u; }
    c->r[4] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
L_2823030:;
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_2822fd0; }
    goto L_282306c;
L_2823044:;
    c->r[5] = ~0x0u;
    goto L_282306c;
L_282304c:;
    c->r[5] = 0x0u;
    goto L_282306c;
L_2823054:;
    c->r[0] = 0x0u;
    c->r[5] = c->r[5] - c->r[4];
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    goto L_282306c;
L_2823068:;
    c->r[5] = c->r[5] - c->r[4];
L_282306c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2823078(Cpu *restrict c) {
    FN_ENTER(0x2823078u);
L_2823078:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x2823094u; f_2856270(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_282309c(Cpu *restrict c) {
    FN_ENTER(0x282309cu);
L_282309c:;
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_CS) { c->r[0] = ~0x0u; }
    return;
}
void f_28230a8(Cpu *restrict c) {
    FN_ENTER(0x28230a8u);
L_28230a8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_2853804(c);
}
void f_28230bc(Cpu *restrict c) {
    FN_ENTER(0x28230bcu);
L_28230bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[1] = 0x439d8cu;
    { uint32_t ea = 0x28230d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x6u;
    c->r[14] = 0x28230d4u; f_285627c(c);
    c->r[1] = (c->r[1] << 4);
    c->v.d[16] = 0xbff0000000000000ull;
    c->r[1] = c->r[1] | (c->r[0] >> 28);
    c->r[0] = (c->r[0] << 4);
    c->r[1] = c->r[1] | 0xff00000u;
    c->r[1] = c->r[1] | 0x30000000u;
    c->v.d[17] = ((uint64_t)c->r[1] << 32) | c->r[0];
    c->v.df[0] = c->v.df[17] + c->v.df[16];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_28230fc(Cpu *restrict c) {
    FN_ENTER(0x28230fcu);
L_28230fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[0] = 0x439d4cu;
    { uint32_t ea = 0x2823110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x6u;
    c->r[14] = 0x2823114u; f_285627c(c);
    c->r[1] = (c->r[1] << 4);
    c->v.d[16] = 0xbff0000000000000ull;
    c->r[1] = c->r[1] | (c->r[0] >> 28);
    c->r[0] = (c->r[0] << 4);
    c->r[1] = c->r[1] | 0xff00000u;
    c->r[1] = c->r[1] | 0x30000000u;
    c->v.d[17] = ((uint64_t)c->r[1] << 32) | c->r[0];
    c->v.df[0] = c->v.df[17] + c->v.df[16];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_282313c(Cpu *restrict c) {
    FN_ENTER(0x282313cu);
L_282313c:;
    c->r[1] = 0x439d08u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); }
    c->r[0] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    { uint32_t ea = 0x2823154u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); }
    return;
}
void f_2823164(Cpu *restrict c) {
    FN_ENTER(0x2823164u);
L_2823164:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[1] = 0x439ce4u;
    { uint32_t ea = 0x2823178u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x6u;
    c->r[14] = 0x282317cu; f_285627c(c);
    c->r[0] = (c->r[0] >> 17);
    c->r[0] = c->r[0] | (c->r[1] << 15);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_282318c(Cpu *restrict c) {
    FN_ENTER(0x282318cu);
L_282318c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[0] = 0x439cbcu;
    { uint32_t ea = 0x28231a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x6u;
    c->r[14] = 0x28231a4u; f_285627c(c);
    c->r[0] = (c->r[0] >> 17);
    c->r[0] = c->r[0] | (c->r[1] << 15);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_28231b4(Cpu *restrict c) {
    FN_ENTER(0x28231b4u);
L_28231b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[1] = 0x439c94u;
    { uint32_t ea = 0x28231c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x6u;
    c->r[14] = 0x28231ccu; f_285627c(c);
    c->r[0] = (c->r[0] >> 16);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_28231dc(Cpu *restrict c) {
    FN_ENTER(0x28231dcu);
L_28231dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[0] = 0x439c6cu;
    { uint32_t ea = 0x28231f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x6u;
    c->r[14] = 0x28231f4u; f_285627c(c);
    c->r[0] = (c->r[0] >> 16);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2823204(Cpu *restrict c) {
    FN_ENTER(0x2823204u);
L_2823204:;
    c->r[1] = 0x518fe8u;
    c->r[3] = 0x0u;
    c->r[2] = c->r[0] - 0x1u;
    c->r[1] = 0x2823218u + c->r[1];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    return;
}
void f_2823220(Cpu *restrict c) {
    FN_ENTER(0x2823220u);
L_2823220:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[0] = 0x518fc0u;
    c->r[12] = 0x7f2du;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x4c950000u;
    c->r[5] = 0xf42du;
    c->r[0] = 0x2823240u + c->r[0];
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x58510000u;
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint64_t r = (uint64_t)c->r[2] * c->r[12]; c->r[1] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[4] = f_adds(c, c->r[1], 0x1u);
    { uint32_t r = c->r[2] * c->r[5] + c->r[3]; c->r[2] = r; }
    { uint32_t r = c->r[7] * c->r[12] + c->r[2]; c->r[2] = r; }
    c->r[5] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); ST32(ea + 4, c->r[5]); }
    c->r[0] = (c->r[5] >> 1);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2823268(Cpu *restrict c) {
    FN_ENTER(0x2823268u);
L_2823268:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4e6du;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41c60000u;
    c->r[3] = 0x3039u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[3]; c->r[1] = r; }
    c->r[3] = 0x5680u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x9d2c0000u;
    c->r[2] = c->r[1] ^ (c->r[1] >> 11);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[3] = c->r[3] & (c->r[2] << 7);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xefc60000u;
    c->r[3] = c->r[3] & (c->r[2] << 15);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = c->r[2] ^ (c->r[2] >> 18);
    c->r[0] = (c->r[2] >> 1);
    return;
}
void f_28232b0(Cpu *restrict c) {
    FN_ENTER(0x28232b0u);
L_28232b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[1] = 0x439b98u;
    { uint32_t ea = 0x28232c4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x518f38u;
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[1] = 0x28232d0u + c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2823308(Cpu *restrict c) {
    FN_ENTER(0x2823308u);
L_2823308:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    c->r[1] = 0x330eu;
    { uint32_t ea = c->r[13] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x6u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2u;
    c->r[14] = 0x2823330u; f_2856288(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2823338(Cpu *restrict c) {
    FN_ENTER(0x2823338u);
L_2823338:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | (c->r[12] << 16);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[2] = c->r[2] | (c->r[14] << 16);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint64_t r = (uint64_t)c->r[2] * c->r[3]; c->r[12] = (uint32_t)r; c->r[14] = (uint32_t)(r >> 32); }
    { uint32_t r = c->r[2] * c->r[4] + c->r[14]; c->r[4] = r; }
    c->r[2] = f_adds(c, c->r[12], c->r[1]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    { uint32_t r = c->r[5] * c->r[3] + c->r[4]; c->r[1] = r; }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x0u + c->cf;
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2823394(Cpu *restrict c) {
    FN_ENTER(0x2823394u);
L_2823394:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[2];
    c->r[8] = c->r[0];
    c->r[9] = c->r[1];
    c->r[0] = c->r[4] & 0x8u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2823410; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2823568; }
    c->r[5] = c->r[9];
    goto L_28233cc;
L_28233c8:;
    c->r[5] = c->r[5] + 0x1u;
L_28233cc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_EQ) { goto L_28233e4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28233c8; }
    goto L_2823568;
L_28233e4:;
    c->r[3] = c->r[5] - c->r[9];
    c->r[0] = c->r[8];
    c->r[1] = ~0x0u;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x28233fcu; f_28237c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28233c8; }
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2823410:;
    c->r[10] = c->r[13] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282342c; }
    goto L_28234cc;
L_2823420:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[7] + 0x1u;
    c->r[8] = c->r[6] + c->r[0];
L_282342c:;
    c->r[7] = c->r[9];
    goto L_2823438;
L_2823434:;
    c->r[7] = c->r[7] + 0x1u;
L_2823438:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2823434; }
    c->r[6] = c->r[8];
    goto L_2823458;
L_2823450:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + c->r[0];
L_2823458:;
    c->r[0] = c->r[6];
    c->r[1] = ~0x0u;
    c->r[2] = c->r[10];
    c->r[3] = c->r[4];
    c->r[14] = 0x282346cu; f_2823594(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_2823450; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_2823588; }
    c->r[1] = c->r[6] - c->r[8];
    c->r[3] = c->r[7] - c->r[9];
    c->r[0] = c->r[8];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x28234a0u; f_28237c0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2823580; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2823420; }
    goto L_2823580;
L_28234c0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[7] + 0x1u;
    c->r[8] = c->r[6] + c->r[0];
L_28234cc:;
    c->r[7] = c->r[9];
    goto L_28234d8;
L_28234d4:;
    c->r[7] = c->r[7] + 0x1u;
L_28234d8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_28234d4; }
    c->r[6] = c->r[8];
    goto L_28234f8;
L_28234f0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + c->r[0];
L_28234f8:;
    c->r[0] = c->r[6];
    c->r[1] = ~0x0u;
    c->r[2] = c->r[10];
    c->r[3] = c->r[4];
    c->r[14] = 0x282350cu; f_2823594(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x2fu); }
    if (COND_NE) { goto L_28234f0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_2823530; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2823588; }
L_2823530:;
    c->r[1] = c->r[6] - c->r[8];
    c->r[3] = c->r[7] - c->r[9];
    c->r[0] = c->r[8];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x2823548u; f_28237c0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2823580; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28234c0; }
    goto L_2823580;
L_2823568:;
    c->r[0] = c->r[8];
    c->r[1] = ~0x0u;
    c->r[2] = c->r[9];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x2823580u; f_28237c0(c);
L_2823580:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2823588:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2823594(Cpu *restrict c) {
    FN_ENTER(0x2823594u);
L_2823594:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[1];
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_28235f4; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28235f4; }
    c->r[0] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5au);
    if (COND_GT) { goto L_2823604; }
    (void)f_subs(c, c->r[0], 0x2au);
    if (COND_EQ) { goto L_282366c; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_NE) { goto L_282363c; }
    c->r[0] = ~0x3u;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_28235f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2823604:;
    (void)f_subs(c, c->r[0], 0x5bu);
    if (COND_EQ) { goto L_2823678; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_282363c; }
    c->r[0] = 0x5cu;
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2823664; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2823664; }
    c->r[0] = 0x2u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_282363c:;
    c->r[3] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_2823664; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x2823650u; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_28237ac; }
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2823664:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_282366c:;
    c->r[0] = ~0x4u;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2823678:;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_2823698; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5eu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x21u); }
    if (COND_NE) { goto L_2823698; }
    c->r[3] = 0x2u;
L_2823698:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_28236ac; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_EQ) { c->r[3] = c->r[3] + 0x1u; }
L_28236ac:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_2823774; }
    c->r[12] = 0x1u;
    c->r[14] = 0x9001u;
L_28236bc:;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x5du); }
    if (COND_EQ) { goto L_2823774; }
    c->r[5] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_CS) { goto L_2823768; }
    (void)f_subs(c, c->r[0], 0x5bu);
    if (COND_NE) { goto L_2823768; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2823768; }
    c->r[0] = c->r[5] - 0x2eu;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_HI) { goto L_2823768; }
    { uint32_t r = c->r[14] & shc_lsl(c, c->r[12], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2823768; }
    c->r[0] = c->r[3] + 0x2u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2823718; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[0] = c->r[3] + 0x3u; }
L_2823718:;
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2823754; }
L_2823724:;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2823754; }
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_NE) { goto L_2823748; }
    c->r[0] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_2823754; }
L_2823748:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_2823724; }
L_2823754:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_282377c; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2823774; }
L_2823768:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_28236bc; }
L_2823774:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_2823788; }
L_282377c:;
    c->r[0] = 0x5bu;
    c->r[1] = 0x1u;
    goto L_28237a0;
L_2823788:;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = ~0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[3] + 0x1u;
    if (COND_EQ) { c->r[0] = 0x5bu; }
    if (COND_EQ) { c->r[1] = 0x1u; }
L_28237a0:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_28237ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x1u;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_28237c0(Cpu *restrict c) {
    FN_ENTER(0x28237c0u);
L_28237c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[1];
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2823800; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2eu);
    if (COND_NE) { goto L_2823800; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x2eu);
    if (COND_NE) { goto L_2823d70; }
L_2823800:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[2];
    c->r[9] = c->r[3];
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2823910; }
    goto L_2823830;
L_282381c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] - c->r[8];
    c->r[4] = c->r[4] + c->r[8];
    c->r[6] = c->r[6] - c->r[0];
    c->r[7] = c->r[7] + c->r[0];
L_2823830:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[14] = 0x2823848u; f_2823594(c);
    c->r[5] = c->r[0];
    (void)f_adds(c, c->r[5], 0x5u);
    if (COND_EQ) { goto L_2823a10; }
    (void)f_adds(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_2823aa8; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2823a00; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282388c; }
    c->r[1] = 0x1u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { goto L_28238bc; }
    goto L_2823a00;
L_282388c:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0x282389cu; f_2853828(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_2823a00; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2823a00; }
L_28238bc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[5], 0x4u);
    if (COND_EQ) { goto L_282381c; }
    (void)f_adds(c, c->r[5], 0x3u);
    if (COND_NE) { goto L_28238ec; }
    c->r[0] = c->r[7];
    c->r[2] = c->r[1];
    c->r[14] = 0x28238dcu; f_2824070(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282381c; }
    goto L_2823d70;
L_28238ec:;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_282381c; }
    goto L_2823d70;
L_28238f8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] - c->r[10];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[4] + c->r[10];
    c->r[7] = c->r[7] + c->r[0];
    c->r[6] = c->r[6] - c->r[0];
L_2823910:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[14] = 0x2823928u; f_2823594(c);
    c->r[5] = c->r[0];
    (void)f_adds(c, c->r[5], 0x5u);
    if (COND_EQ) { goto L_2823a10; }
    (void)f_adds(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_2823aa8; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2823a00; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823970; }
    c->r[8] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x1u;
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GT) { goto L_28239a0; }
    goto L_2823a00;
L_2823970:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[9];
    c->r[14] = 0x2823980u; f_2853828(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_2823a00; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LE) { goto L_2823a00; }
L_28239a0:;
    c->r[0] = c->r[8];
    c->r[14] = 0x28239a8u; f_2855eb0(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_NE) { goto L_28239c0; }
    c->r[0] = c->r[8];
    c->r[14] = 0x28239bcu; f_2855ec8(c);
    c->r[2] = c->r[0];
L_28239c0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[5], 0x4u);
    if (COND_EQ) { goto L_28238f8; }
    (void)f_adds(c, c->r[5], 0x3u);
    if (COND_NE) { goto L_28239f0; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[14] = 0x28239e0u; f_2824070(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28238f8; }
    goto L_2823d70;
L_28239f0:;
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[5]); }
    if (COND_EQ) { goto L_28238f8; }
    goto L_2823d70;
L_2823a00:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    goto L_2823d70;
L_2823a10:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[6] - 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x2823a2cu; f_283baec(c);
    c->r[6] = c->r[0];
    c->r[1] = c->r[4];
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[4] = c->r[0] + 0x1u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2823ab4; }
    c->r[10] = 0x1u;
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0x24u;
    c->r[5] = 0x1u;
L_2823a5c:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] + c->r[5];
    c->r[1] = c->r[4] - c->r[0];
    c->r[2] = c->r[8];
    c->r[14] = 0x2823a70u; f_2823594(c);
    (void)f_adds(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_2823a88; }
    (void)f_adds(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_2823aa8; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_2823a90;
L_2823a88:;
    c->r[10] = c->r[5] + 0x1u;
    c->r[7] = 0x0u;
L_2823a90:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + c->r[0];
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LE) { goto L_2823a5c; }
    goto L_2823abc;
L_2823aa8:;
    c->r[0] = 0x1u;
L_2823aac:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2823d70;
L_2823ab4:;
    c->r[7] = 0x0u;
    c->r[10] = 0x1u;
L_2823abc:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2823ad0u; f_283baec(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_2823d70; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[1] = c->r[7];
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[5] = c->r[4] + c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2823b84; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = c->r[5];
    if (COND_EQ) { goto L_2823b90; }
    c->r[0] = c->r[5];
L_2823b08:;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[8] - 0x1u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[8] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2823b5c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_LS) { goto L_2823b5c; }
    c->r[1] = c->r[1] & 0xc0u;
    (void)f_subs(c, c->r[1], 0x80u);
    if (COND_NE) { goto L_2823b5c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - 0x2u;
L_2823b3c:;
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] - 0x1u; c->r[1] = v; }
    if (COND_LS) { goto L_2823b58; }
    c->r[1] = c->r[1] & 0xffffffc0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x80u);
    if (COND_EQ) { goto L_2823b3c; }
L_2823b58:;
    c->r[8] = c->r[0] + 0x1u;
L_2823b5c:;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LS) { goto L_2823b90; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = c->r[8];
    if (COND_NE) { goto L_2823b08; }
    goto L_2823b90;
L_2823b84:;
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2823b90:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2823d70; }
    c->r[4] = c->r[9] + c->r[10];
    c->r[2] = c->r[13] + 0x24u;
    c->r[1] = c->r[3] - c->r[4];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2823bb0u; f_2823594(c);
    c->r[9] = c->r[0];
    c->r[2] = f_subs(c, c->r[5], c->r[8]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_2823d68; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[5];
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2823c94; }
    c->r[6] = c->r[13] + 0x24u;
    c->r[10] = c->r[8];
L_2823be4:;
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823c04; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { goto L_2823c28; }
    goto L_2823d68;
L_2823c04:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[10];
    c->r[14] = 0x2823c10u; f_2853828(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_2823d68; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2823d68; }
L_2823c28:;
    (void)f_adds(c, c->r[9], 0x4u);
    if (COND_EQ) { goto L_2823c5c; }
    (void)f_adds(c, c->r[9], 0x3u);
    if (COND_NE) { goto L_2823c54; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1];
    c->r[0] = c->r[4] - c->r[0];
    c->r[14] = 0x2823c48u; f_2824070(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2823c5c; }
    goto L_2823d70;
L_2823c54:;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_NE) { goto L_2823d70; }
L_2823c5c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[10] + c->r[5];
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = c->r[4];
    c->r[14] = 0x2823c78u; f_2823594(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = f_subs(c, c->r[1], c->r[10]);
    c->r[4] = c->r[4] + c->r[0];
    if (COND_NE) { goto L_2823be4; }
    goto L_2823d68;
L_2823c94:;
    c->r[6] = c->r[8];
L_2823c98:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823cb8; }
    c->r[5] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[10] = 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GT) { goto L_2823cdc; }
    goto L_2823d68;
L_2823cb8:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[6];
    c->r[14] = 0x2823cc4u; f_2853828(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_2823d68; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { goto L_2823d68; }
L_2823cdc:;
    c->r[0] = c->r[5];
    c->r[14] = 0x2823ce4u; f_2855eb0(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_NE) { goto L_2823cfc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x2823cf8u; f_2855ec8(c);
    c->r[2] = c->r[0];
L_2823cfc:;
    (void)f_adds(c, c->r[9], 0x4u);
    if (COND_EQ) { goto L_2823d34; }
    (void)f_adds(c, c->r[9], 0x3u);
    if (COND_NE) { goto L_2823d28; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] - c->r[0];
    c->r[14] = 0x2823d1cu; f_2824070(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2823d34; }
    goto L_2823d70;
L_2823d28:;
    (void)f_subs(c, c->r[5], c->r[9]);
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[9]); }
    if (COND_NE) { goto L_2823d70; }
L_2823d34:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + c->r[10];
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = c->r[4];
    c->r[14] = 0x2823d50u; f_2823594(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = f_subs(c, c->r[1], c->r[6]);
    c->r[4] = c->r[4] + c->r[0];
    if (COND_NE) { goto L_2823c98; }
L_2823d68:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2823d7c; }
L_2823d70:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2823d7c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_2824068; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2824020;
L_2823d94:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2823d9c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2823e84; }
    goto L_2823dc4;
L_2823db0:;
    c->r[6] = 0x1u;
    c->r[1] = ~0x0u;
    (void)f_adds(c, c->r[7], 0x4u);
    if (COND_NE) { goto L_2823e18; }
    goto L_2823e44;
L_2823dc4:;
    c->r[2] = f_subs(c, c->r[8], c->r[4]);
    if (COND_EQ) { goto L_2823d70; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823de8; }
    c->r[9] = c->r[4];
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[6] = 0x1u;
    goto L_2823e08;
L_2823de8:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[9] = c->r[4];
    c->r[14] = 0x2823df8u; f_2853828(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_2823db0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2823e08:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2823d70; }
    (void)f_adds(c, c->r[7], 0x4u);
    if (COND_EQ) { goto L_2823e44; }
L_2823e18:;
    (void)f_adds(c, c->r[7], 0x3u);
    if (COND_NE) { goto L_2823e3c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1];
    c->r[0] = c->r[5] - c->r[0];
    c->r[14] = 0x2823e30u; f_2824070(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2823e44; }
    goto L_2823f5c;
L_2823e3c:;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_NE) { goto L_2823f5c; }
L_2823e44:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10] - c->r[5];
    c->r[0] = c->r[5];
    c->r[2] = c->r[13] + 0x24u;
    c->r[14] = 0x2823e58u; f_2823594(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9];
    (void)f_adds(c, c->r[7], 0x5u);
    c->r[4] = c->r[4] + c->r[6];
    c->r[5] = c->r[5] + c->r[0];
    if (COND_NE) { goto L_2823dc4; }
    goto L_2824058;
L_2823e78:;
    c->r[6] = 0x1u;
    c->r[4] = ~0x0u;
    goto L_2823ed0;
L_2823e84:;
    c->r[2] = f_subs(c, c->r[8], c->r[4]);
    if (COND_EQ) { goto L_2823d70; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823ea8; }
    c->r[9] = c->r[4];
    c->r[4] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[6] = 0x1u;
    goto L_2823ec8;
L_2823ea8:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[9] = c->r[4];
    c->r[14] = 0x2823eb8u; f_2853828(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_2823e78; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2823ec8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2823d70; }
L_2823ed0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x2823ed8u; f_2855eb0(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_NE) { goto L_2823ef0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2823eecu; f_2855ec8(c);
    c->r[2] = c->r[0];
L_2823ef0:;
    (void)f_adds(c, c->r[7], 0x4u);
    if (COND_EQ) { goto L_2823f28; }
    (void)f_adds(c, c->r[7], 0x3u);
    if (COND_NE) { goto L_2823f1c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[0] = c->r[5] - c->r[0];
    c->r[14] = 0x2823f10u; f_2824070(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2823f28; }
    goto L_2823f5c;
L_2823f1c:;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[7]); }
    if (COND_NE) { goto L_2823f5c; }
L_2823f28:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10] - c->r[5];
    c->r[0] = c->r[5];
    c->r[2] = c->r[13] + 0x24u;
    c->r[14] = 0x2823f3cu; f_2823594(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9];
    (void)f_adds(c, c->r[7], 0x5u);
    c->r[4] = c->r[4] + c->r[6];
    c->r[5] = c->r[5] + c->r[0];
    if (COND_NE) { goto L_2823e84; }
    goto L_2824058;
L_2823f5c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = f_subs(c, c->r[8], c->r[4]);
    if (COND_EQ) { goto L_2823fb4; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823f88; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { goto L_2823fa8; }
    goto L_2823fb4;
L_2823f88:;
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[14] = 0x2823f94u; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2823fb4; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2823fb4; }
L_2823fa8:;
    c->r[4] = c->r[4] + c->r[0];
    goto L_2823ff0;
L_2823fb0:;
    c->r[4] = c->r[5];
L_2823fb4:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[2] = f_subs(c, c->r[8], c->r[4]);
    if (COND_EQ) { goto L_2823ff0; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2823ff0; }
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[5] = c->r[4];
    c->r[14] = 0x2823fdcu; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_LT) { goto L_2823fb0; }
    c->r[4] = c->r[5];
L_2823ff0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x2824008u; f_2823594(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[7], 0x5u);
    c->r[5] = c->r[5] + c->r[0];
    if (COND_NE) { goto L_2823d9c; }
    goto L_2824058;
L_2824020:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[5];
    c->r[1] = c->r[0] - c->r[4];
    c->r[10] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[14] = 0x2824040u; f_2823594(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[7], 0x5u);
    c->r[5] = c->r[4] + c->r[0];
    if (COND_NE) { goto L_2823d94; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2824058:;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_2824020; }
L_2824068:;
    c->r[0] = 0x0u;
    goto L_2823aac;
}
void f_2824070(Cpu *restrict c) {
    FN_ENTER(0x2824070u);
L_2824070:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[7] = c->r[0];
    c->r[6] = c->r[1];
    c->r[1] = c->r[7];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5eu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x21u); }
    if (COND_NE) { goto L_28240b0; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2du);
    if (COND_NE) { goto L_28240c0; }
    goto L_28240d4;
L_28240b0:;
    c->r[8] = 0x0u;
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[0], 0x2du);
    if (COND_EQ) { goto L_28240d4; }
L_28240c0:;
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_NE) { goto L_28240e0; }
    (void)f_subs(c, c->r[6], 0x5du);
    if (COND_EQ) { goto L_282426c; }
    goto L_28240dc;
L_28240d4:;
    (void)f_subs(c, c->r[6], 0x2du);
    if (COND_EQ) { goto L_282426c; }
L_28240dc:;
    c->r[7] = c->r[7] + 0x1u;
L_28240e0:;
    { uint32_t ea = c->r[7] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[13];
    c->r[9] = 0x9001u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_28240f8;
L_28240f4:;
    c->r[7] = c->r[7] + 0x1u;
L_28240f8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2du);
    if (COND_EQ) { goto L_2824148; }
    (void)f_subs(c, c->r[2], 0x5bu);
    if (COND_EQ) { goto L_282416c; }
    (void)f_subs(c, c->r[2], 0x5du);
    if (COND_EQ) { goto L_2824270; }
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[2]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2824158; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[7];
    c->r[2] = 0x4u;
    c->r[14] = 0x2824130u; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282427c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7] + c->r[0];
    c->r[7] = c->r[0] - 0x1u;
    goto L_282415c;
L_2824148:;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_NE) { goto L_2824220; }
L_2824158:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
L_282415c:;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[5]); }
    if (COND_NE) { goto L_28240f4; }
    goto L_282426c;
L_282416c:;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x2eu;
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_HI) { goto L_2824158; }
    c->r[3] = 0x1u;
    { uint32_t r = c->r[9] & shc_lsl(c, c->r[3], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2824158; }
    c->r[2] = c->r[7] + 0x2u;
    goto L_2824194;
L_2824190:;
    c->r[2] = c->r[2] + 0x1u;
L_2824194:;
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2824190; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5du);
    if (COND_NE) { goto L_2824190; }
    c->r[10] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_NE) { goto L_2824214; }
    c->r[1] = c->r[7] + 0x2u;
    c->r[7] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[7], 0xfu);
    if (COND_GT) { goto L_2824214; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0x28241d4u; f_283aa78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[7]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x28241e4u; f_2855ea4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x28241f0u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282426c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2824200u; f_2855ea4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x282420cu; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282426c; }
L_2824214:;
    c->r[7] = c->r[10];
    c->r[7] = c->r[7] + 0x1u;
    goto L_28240f8;
L_2824220:;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x282422cu; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282427c; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_282425c; }
    c->r[2] = c->r[2] - c->r[1];
    c->r[3] = c->r[6] - c->r[1];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { c->r[1] = c->r[5] - c->r[1]; }
    if (COND_HI) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_LS) { goto L_282426c; }
L_282425c:;
    c->r[0] = c->r[7] + c->r[0];
    c->r[7] = c->r[0] - 0x1u;
    c->r[7] = c->r[7] + 0x1u;
    goto L_28240f8;
L_282426c:;
    c->r[8] = c->r[8] ^ 0x1u;
L_2824270:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_282427c:;
    c->r[8] = 0x0u;
    goto L_2824270;
}
void f_2824284(Cpu *restrict c) {
    FN_ENTER(0x2824284u);
L_2824284:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x8cu;
    c->r[5] = c->r[0];
    c->r[0] = 0x14u;
    c->r[6] = c->r[2];
    c->r[10] = c->r[1];
    c->r[14] = 0x28242a4u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[9] = 0xcu;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28243c0; }
    c->r[0] = 0x800u;
    c->r[14] = 0x28242bcu; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28243b8; }
    c->r[0] = 0x200u;
    c->r[4] = 0x0u;
    c->r[1] = 0xfa000u;
    c->r[2] = 0x80u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[4]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[14] = 0x28242e8u; f_2856294(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28243b0; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = c->r[11] - 0x50u;
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x2824330u; f_2828b60(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_28243cc; }
L_2824340:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_2824348:;
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = 0x0u;
L_2824358:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[1];
    c->r[6] = c->r[3];
    c->r[14] = 0x2824368u; f_28562a0(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2824374u; f_283b288(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x282437cu; f_283b288(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_282438c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x282438cu; f_283b288(c);
L_282438c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_28243a0; }
    c->r[14] = 0x28243a0u; f_283b288(c);
L_28243a0:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x28243acu; f_28562ac(c);
    goto L_28243c0;
L_28243b0:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x28243b8u; f_283b288(c);
L_28243b8:;
    c->r[0] = c->r[7];
    c->r[14] = 0x28243c0u; f_283b288(c);
L_28243c0:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_28243cc:;
    c->r[0] = 0x1u;
    c->r[8] = c->r[6] & 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[9] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    goto L_2824840;
L_28243fc:;
    c->r[1] = c->r[1] - 0x1u;
    goto L_2824a74;
L_2824404:;
    c->r[7] = c->r[5];
    c->r[1] = c->r[2];
    goto L_2824a74;
L_2824410:;
    c->r[10] = c->r[10] + c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    goto L_2824840;
L_2824424:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28244c0; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    c->r[5] = 0x0u;
    c->r[14] = 0x2824458u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824478u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_28244c8; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28244cc; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    goto L_28244cc;
L_28244c0:;
    c->r[5] = c->r[7];
    goto L_28244cc;
L_28244c8:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
L_28244cc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2824510; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x7cu;
    (void)f_subs(c, c->r[0], 0x7cu);
    if (COND_EQ) { goto L_282453c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2824500; }
    c->r[3] = 0x29u;
    (void)f_subs(c, c->r[0], 0x29u);
    if (COND_EQ) { goto L_282453c; }
L_2824500:;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282453c; }
    goto L_2824838;
L_2824510:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282453c; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_2824838; }
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = 0x5cu;
    (void)f_subs(c, c->r[0], 0x29u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x7cu); }
    if (COND_NE) { goto L_2824838; }
L_282453c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28245e4; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x8u;
    c->r[8] = c->r[5];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824570u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824590u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_28245ec; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[5];
    if (COND_EQ) { goto L_28245fc; }
    c->r[1] = 0x3u;
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[9]); }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_EQ) { goto L_2824604; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    goto L_2824604;
L_28245e4:;
    c->r[2] = c->r[5];
    goto L_2824604;
L_28245ec:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x0u;
    c->r[3] = c->r[5];
    goto L_2824604;
L_28245fc:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x0u;
L_2824604:;
    c->r[0] = c->r[3] & 0x7fu;
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_EQ) { goto L_2824624; }
    (void)f_subs(c, c->r[0], 0x7cu);
    if (COND_EQ) { goto L_2824830; }
    (void)f_subs(c, c->r[3], 0x29u);
    if (COND_EQ) { c->r[10] = c->r[10] + 0x1u; }
    goto L_2824640;
L_2824624:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7cu);
    if (COND_EQ) { goto L_2824a68; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282566c; }
    c->r[10] = c->r[10] + 0x2u;
L_2824640:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2824798; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[3] = 0x1u;
    c->r[14] = 0x2824690u; f_28562b8(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28246b0u; f_28562b8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[9] = 0xcu;
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_2824348; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x282470cu; f_28562b8(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x282472cu; f_28562b8(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2824348; }
    c->r[5] = c->r[8];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_2824358; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_282479c;
L_2824798:;
    c->r[0] = c->r[2];
L_282479c:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { goto L_28247c4; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2824d5c; }
L_28247c4:;
    c->r[0] = 0x0u;
    c->r[9] = 0x8u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2824348; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_2824358; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + (c->r[0] << 2);
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_2824bc8;
L_2824830:;
    c->r[0] = 0x1u;
    goto L_2824410;
L_2824838:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
L_2824840:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2824970; }
    (void)f_subs(c, c->r[0], 0x28u);
    if (COND_NE) { goto L_28248e8; }
    c->r[5] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[10] = v; }
L_2824864:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[2];
    c->r[14] = 0x2824870u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[10];
    c->r[14] = 0x2824888u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0x28248a0u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[5]); }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = c->r[5] + 0x1u; c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[10] = 0x0u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x28u);
    if (COND_EQ) { goto L_2824864; }
    c->r[1] = 0x0u;
    c->r[10] = c->r[5] - 0x1u;
    c->r[2] = 0x0u;
    c->r[9] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
L_28248e8:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[2];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2824a20; }
    (void)f_subs(c, c->r[0], 0x29u);
    if (COND_NE) { goto L_2824a20; }
L_2824900:;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2824920u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824940u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2824d44; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    goto L_2824bc8;
L_2824970:;
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_2824a1c; }
    c->r[5] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[10] = v; }
L_2824988:;
    { uint32_t ea = c->r[5] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x28u);
    if (COND_NE) { goto L_2824a48; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[2];
    c->r[14] = 0x28249a0u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[10];
    c->r[14] = 0x28249b8u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0x28249d0u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[5]); }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = c->r[5] + 0x2u; c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[10] = 0x0u;
    c->r[2] = 0x0u;
    c->r[9] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_EQ) { goto L_2824988; }
    c->r[0] = 0x0u;
    c->r[10] = c->r[5] - 0x2u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    goto L_2824a20;
L_2824a1c:;
    c->r[7] = c->r[2];
L_2824a20:;
    c->r[0] = c->r[11] - 0x50u;
    c->r[1] = c->r[10];
    c->r[14] = 0x2824a2cu; f_2827274(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2824340; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[9] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    goto L_2824bcc;
L_2824a48:;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[10]); }
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[6]); }
    c->r[10] = c->r[5] - 0x2u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x29u);
    if (COND_EQ) { goto L_2824900; }
    goto L_2824a20;
L_2824a68:;
    c->r[0] = 0x2u;
    goto L_2824410;
L_2824a70:;
    c->r[0] = c->r[3];
L_2824a74:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[2] = 0x0u;
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[3] = 0x0u;
    c->r[9] = 0xau;
    if (COND_GE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_HI) { goto L_2824340; }
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_GT) { goto L_2824340; }
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_2824340; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_2824ac0; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_2824340; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_2824ac0:;
    (void)f_subs(c, c->r[0], 0x7du);
    if (COND_NE) { goto L_2824340; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2824ae0; }
    c->r[9] = ~0x0u;
    goto L_2824b50;
L_2824ae0:;
    c->r[0] = 0x14u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824afcu; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824b1cu; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[9] = ~0x0u;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2824d44; }
    c->r[2] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    goto L_2824bc0;
L_2824b50:;
    c->r[0] = 0x10u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x2824b70u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2824b90u; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2824d44; }
    c->r[1] = 0x2u;
    c->r[2] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeu;
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2824bc0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
L_2824bc8:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2824bcc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2au);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x5cu); }
    if (COND_EQ) { goto L_2824bf8; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2824424; }
    (void)f_subs(c, c->r[0], 0x2bu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x7bu); }
    if (COND_EQ) { goto L_2824bf8; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_NE) { goto L_2824424; }
L_2824bf8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2824c08; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_EQ) { goto L_2824424; }
L_2824c08:;
    c->r[1] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_2824c2c; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2bu);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x7bu); }
    if (COND_EQ) { goto L_2824c2c; }
    (void)f_subs(c, c->r[2], 0x3fu);
    if (COND_NE) { goto L_2824424; }
L_2824c2c:;
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_EQ) { c->r[10] = c->r[1]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_2824c58; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_NE) { goto L_2824c58; }
    { uint32_t ea = c->r[10] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5eu);
    if (COND_EQ) { goto L_2824424; }
L_2824c58:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2bu);
    if (COND_EQ) { goto L_2824ccc; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x7bu);
    if (COND_NE) { goto L_2824cd0; }
    c->r[2] = c->r[10];
    c->r[5] = ~0x0u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[0] = c->r[3] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_2824ce8; }
    c->r[1] = c->r[10] + 0x2u;
    c->r[5] = 0x0u;
L_2824c90:;
    c->r[2] = c->r[5] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[0] = v; }
    c->r[2] = (c->r[2] << 1);
    c->r[2] = c->r[2] + (uint32_t)(uint8_t)(c->r[3]);
    c->r[5] = c->r[2] - 0x30u;
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_GT) { goto L_2824cbc; }
    c->r[2] = c->r[0] - 0x30u;
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CC) { goto L_2824c90; }
L_2824cbc:;
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2cu);
    if (COND_EQ) { goto L_2824cf4; }
    goto L_2824404;
L_2824ccc:;
    c->r[5] = 0x1u;
L_2824cd0:;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x3fu);
    c->r[7] = ~0x0u;
    c->r[10] = c->r[10] + 0x1u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    goto L_2824b50;
L_2824ce8:;
    c->r[0] = c->r[3];
    (void)f_subs(c, c->r[0], 0x2cu);
    if (COND_NE) { goto L_2824404; }
L_2824cf4:;
    c->r[1] = c->r[2];
    c->r[7] = ~0x0u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[3] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_2824a70; }
    c->r[1] = c->r[2] + 0x2u;
    c->r[7] = 0x0u;
L_2824d14:;
    c->r[2] = c->r[7] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[0] = v; }
    c->r[2] = (c->r[2] << 1);
    c->r[2] = c->r[2] + (uint32_t)(uint8_t)(c->r[3]);
    c->r[7] = c->r[2] - 0x30u;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_GT) { goto L_28243fc; }
    c->r[2] = c->r[0] - 0x30u;
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CC) { goto L_2824d14; }
    goto L_28243fc;
L_2824d44:;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[9] = 0xcu;
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    goto L_2824348;
L_2824d5c:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] - 0x1u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_GE) { goto L_2825674; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[1] = 0x44u;
    c->r[5] = 0x1u;
    c->r[14] = 0x2824d90u; f_2852acc(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_282567c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] ^ (c->r[4] >> 31);
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[3] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_2825698; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2825698; }
L_2824dc0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x2824decu; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2826078; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x2824e08u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2826078; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], c->r[7]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    if (COND_LE) { goto L_2825640; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
L_2824e50:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_2824ebc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_2825624; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - 0x3u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_LT) { goto L_2824f58; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    goto L_2824f84;
L_2824ebc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_2825624; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x2824ed8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x2824eecu: goto L_2824eec; case 0x28250fcu: goto L_28250fc; case 0x2825138u: goto L_2825138; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2824eec:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2824f00u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x2824f18u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2824f30u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x2824f48u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2825624; }
    goto L_282563c;
L_2824f58:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_28255e8; }
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[10]); }
    if (COND_LT) { goto L_28252f0; }
L_2824f84:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x2u;
    if (COND_GT) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2824fc4u; f_2828e40(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2826078; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_2824fe8:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2825088; }
    c->r[0] = 0x8u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825010u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825030u; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[9] = 0xcu;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2826078; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_2825094; }
    goto L_2826074;
L_2825088:;
    c->r[10] = c->r[5];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2826074; }
L_2825094:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GE) { goto L_28251f0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x2u;
    if (COND_LT) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x28250e8u; f_2828e40(c);
    c->r[9] = c->r[0];
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2824fe8; }
    goto L_2826078;
L_28250fc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2825118; }
    (void)f_adds(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_2825624; }
L_2825118:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); } }
    goto L_2825624;
L_2825138:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282514cu; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2825164u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x282517cu; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825194u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x28251acu; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_282563c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_28251d0; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_28251e0; }
L_28251d0:;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
L_28251e0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_2825624;
L_28251f0:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_28252f8; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825240u; f_2828e40(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2826078; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x2825270u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825290u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_282606c; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[1] = ~0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfeu;
    { uint32_t ea = c->r[4] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2825540; }
    goto L_28255d0;
L_28252f0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
L_28252f8:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_GE) { goto L_2825528; }
    c->r[7] = 0x0u;
L_2825308:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825348u; f_2828e40(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2826078; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28253f4; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2825400; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825390u; f_28562b8(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28253b0u; f_28562b8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2825404; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2825404;
L_28253f4:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2825408;
L_2825400:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
L_2825404:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2825408:;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[9] = 0xcu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826078; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[5];
    c->r[14] = 0x282543cu; f_28562b8(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x282545cu; f_28562b8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_2826078; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = ~0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x28254acu; f_28562b8(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28254ccu; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_28258ec; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_2825308; }
L_2825528:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28255c4; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28255d0; }
L_2825540:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[4];
    c->r[14] = 0x2825560u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825580u; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[9] = 0xcu;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2826078; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
L_28255c4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_28255d4; }
    goto L_2826074;
L_28255d0:;
    c->r[7] = c->r[10];
L_28255d4:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_28255e8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2825624; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_2825624:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_2824e50; }
    c->r[9] = 0x0u;
L_282563c:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_2825640:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_GT) { c->r[5] = c->r[6]; }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_28257c4; }
L_2825660:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    goto L_2826078;
L_282566c:;
    c->r[9] = 0x8u;
    goto L_2824340;
L_2825674:;
    c->r[9] = 0x6u;
    goto L_2824340;
L_282567c:;
    c->r[0] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[9] = 0xcu;
    goto L_2824358;
L_2825698:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x28256b4u; f_2826248(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_28256d4; }
L_28256c0:;
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = c->r[6];
    goto L_2824358;
L_28256d4:;
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_282571c; }
    c->r[0] = 0x4u;
    c->r[4] = c->r[0] + (c->r[5] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0x28256fcu; f_283b27c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2825798; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[7]); }
    c->r[14] = 0x282571cu; f_283aea4(c);
L_282571c:;
    c->r[0] = 0x1u;
    c->r[1] = 0x4u;
    c->r[0] = c->r[0] | (c->r[5] << 1);
    c->r[14] = 0x282572cu; f_2852acc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28257a0; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xcu;
    c->r[9] = 0xcu;
    c->r[14] = 0x2825748u; f_2852acc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28257b8; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x282576cu; f_2826248(c);
    c->r[9] = c->r[0];
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[4] = c->r[7];
    if (COND_EQ) { goto L_2824dc0; }
    c->r[0] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    goto L_2824358;
L_2825798:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_28257a0:;
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[9] = 0xcu;
    c->r[3] = c->r[6];
    goto L_2824358;
L_28257b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    goto L_28256c0;
L_28257c4:;
    c->r[0] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28257f4u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825814u; f_28562b8(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[4], 0x0u); }
    if (COND_EQ) { goto L_2826234; }
    c->r[1] = 0x0u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28258d8; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[5];
    c->r[14] = 0x2825874u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2825894u; f_28562b8(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_2826234; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    goto L_28258dc;
L_28258d8:;
    c->r[8] = c->r[4];
L_28258dc:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_2825904;
L_28258ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    goto L_2826078;
L_28258f8:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2825904:;
    c->r[14] = 0x2825908u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825928u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2826078; }
    goto L_2825958;
L_2825938:;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2825958;
L_2825950:;
    c->r[1] = 0x1u;
    goto L_2825938;
L_2825958:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LE) { goto L_2825f48; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_HI) { goto L_2825958; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = (c->r[2] << 2);
    c->r[1] = 0x282599cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x28259b0u: goto L_28259b0; case 0x2825aacu: goto L_2825aac; case 0x2825b3cu: goto L_2825b3c; case 0x2825b64u: goto L_2825b64; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_28259b0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_2825958; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x28259c8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x28259dcu: goto L_28259dc; case 0x2825e80u: goto L_2825e80; case 0x2825ea4u: goto L_2825ea4; case 0x2825ed8u: goto L_2825ed8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_28259dc:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_2825d30; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825a14u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826210; }
    c->r[2] = 0xffffu;
    c->r[1] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825a78u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826224; }
    c->r[2] = 0xffffu;
    c->r[1] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[6]); }
    goto L_2825df0;
L_2825aac:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_2825ad0; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
L_2825ad0:;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[2]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[14] = 0x2825af8u; f_28294b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2826234; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[14] = 0x2825b2cu; f_28294b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2825958; }
    goto L_2826234;
L_2825b3c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2825b84; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    goto L_2825b88;
L_2825b64:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2825950; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    goto L_2825938;
L_2825b84:;
    c->r[0] = 0x0u;
L_2825b88:;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2825c54; }
    c->r[0] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825bb0u; f_2829aa4(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[14] = 0x2825bccu; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[9] = 0xcu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2825660; }
    c->r[0] = ~0x0u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825c04u; f_2829aa4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826200; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6];
    c->r[14] = 0x2825c38u; f_28294b8(c);
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x2825c44u; f_283b288(c);
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2825c60; }
    goto L_2825660;
L_2825c54:;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
L_2825c60:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2825d24; }
    c->r[0] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825c88u; f_2829aa4(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[14] = 0x2825ca4u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[9] = 0xcu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2825660; }
    c->r[0] = ~0x0u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825cdcu; f_2829aa4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826200; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6];
    c->r[14] = 0x2825d08u; f_28294b8(c);
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x2825d14u; f_283b288(c);
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2825958; }
    goto L_2825660;
L_2825d24:;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2825958;
L_2825d30:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_2825e04; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825d64u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826210; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[9]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825dccu; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826224; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
L_2825df0:;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2825958;
L_2825e04:;
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[14] = 0x2825e28u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826210; }
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825e60u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826224; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_2825958;
L_2825e80:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x2825e8cu; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    goto L_2825ef8;
L_2825ea4:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x2825eb0u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x2825ec8u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_28258f8; }
    goto L_2825660;
L_2825ed8:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x2825ee4u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
L_2825ef8:;
    c->r[14] = 0x2825efcu; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825f18u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_2825660; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2825f38u; f_2828b60(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_28258f8; }
    goto L_2826078;
L_2825f48:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = (c->r[5] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0x2825f58u; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282602c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2825f6cu; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282604c; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_2825f8c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x2825f8cu; f_283abec(c);
L_2825f8c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x2825fa4u; f_2827030(c);
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2825fe4; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[2] = 0x0u;
L_2825fc0:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[2] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[5] + c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    c->r[5] = c->r[3] + 0x1u;
    if (COND_LT) { goto L_2825fc0; }
L_2825fe4:;
    c->r[0] = c->r[5] + 0x1u;
    c->r[1] = 0x20u;
    c->r[14] = 0x2825ff0u; f_2852acc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28261e8; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x2826018u; f_2827030(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_282608c; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_28261f0;
L_282602c:;
    c->r[0] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[9] = 0xcu;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_2824358;
L_282604c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[9] = 0xcu;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_2824358;
L_282606c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
L_2826074:;
    c->r[9] = 0xcu;
L_2826078:;
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
L_2826084:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_2824358;
L_282608c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
L_282609c:;
    { uint32_t ea = c->r[1] + (c->r[0] << 5); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_282609c; }
    c->r[1] = 0x20u;
    c->r[14] = 0x28260b4u; f_2852acc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28261e8; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2826170; }
    c->r[4] = 0x0u;
L_28260e8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[2] + (c->r[4] << 5);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 5);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); c->r[10] = ea; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826154; }
    c->r[7] = 0x0u;
L_2826124:;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2826124; }
    c->r[0] = c->r[7];
    c->r[14] = 0x282613cu; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28261e8; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    c->r[14] = 0x2826154u; f_283ac04(c);
L_2826154:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_28260e8; }
L_2826170:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 5);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 5);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x28261b8u; f_28562a0(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x28261c4u; f_283b288(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x28261ccu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x28261d4u; f_283b288(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x28261dcu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    goto L_28243c0;
L_28261e8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = 0xcu;
L_28261f0:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[4];
    goto L_2826084;
L_2826200:;
    c->r[0] = c->r[6];
    c->r[14] = 0x2826208u; f_283b288(c);
    c->r[9] = c->r[7];
    goto L_2825660;
L_2826210:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[1]); }
    goto L_2826234;
L_2826224:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[1]); }
L_2826234:;
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[9] = 0xcu;
    goto L_2826084;
}
void f_2826248(Cpu *restrict c) {
    FN_ENTER(0x2826248u);
L_2826248:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x44u;
    c->r[9] = c->r[3];
    c->r[10] = c->r[1];
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[4] = c->r[2];
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_28262a0; }
    { uint32_t ea = c->r[9] + 0x30u; ST32(ea, c->r[3]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_28262a0:;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x8u;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    c->r[14] = 0x28262b0u; f_283b27c(c);
    c->r[8] = c->r[0];
    c->r[7] = 0xcu;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2827024; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    c->r[6] = ~0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    c->r[14] = 0x28262d8u; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826f3c; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
L_28262e8:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_LS) { goto L_28262e8; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[4];
    c->r[14] = 0x2826300u; f_2828b60(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x2826314u; f_2828b60(c);
    c->r[7] = c->r[0];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2826f44; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[14]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    if (COND_LE) { goto L_2826f5c; }
    c->r[1] = c->r[12] + 0x4u;
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    goto L_2826c18;
L_2826394:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[14]);
    if (COND_GT) { goto L_2826c18; }
    goto L_2826f5c;
L_28263a4:;
    c->r[1] = c->r[0] - 0x3u;
    c->r[0] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[2] = c->r[0]; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
L_28263cc:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[4] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_28263f0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
L_28263f4:;
    c->r[7] = c->r[0] - 0x7u;
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[2] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = 0x1u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2826498; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_282647c; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2826438u; f_2828d28(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0] + (c->r[8] << 2); ST32(ea, c->r[1]); }
    c->r[8] = 0x1u;
    if (COND_NE) { goto L_2826468; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2826464u; f_2828d28(c);
    c->r[7] = c->r[0];
L_2826468:;
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[8]); }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
L_282647c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_2826498:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_28264ac:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_2826990;
L_28264b8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; c->r[4] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[14] = 0x28264d0u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_28264fc; }
    c->r[0] = c->r[10];
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x28264f0u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28266d0; }
L_28264fc:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_28265a0;
L_282650c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_28265ac; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_28265cc; }
    goto L_28265c4;
L_282652c:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[4] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_GE) { c->r[1] = c->r[4]; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x2826564u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826594; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GE) { c->r[1] = c->r[8]; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x2826588u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826730; }
L_2826594:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2826598:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_28265a0:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_2826990;
L_28265ac:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x28265b8u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
L_28265c4:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1u;
L_28265cc:;
    c->r[0] = c->r[10];
    c->r[14] = 0x28265d4u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[4];
    c->r[14] = 0x28265ecu; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x2826604u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x282661cu; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[14] = 0x2826634u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2826908; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2826908; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    goto L_2826980;
L_2826668:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[14] = 0x282667cu; f_2828c10(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2826858; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
L_28266a0:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_28266a0; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    goto L_282685c;
L_28266d0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x28266dcu; f_2828b60(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[14] = 0x28266f8u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[8];
    c->r[0] = c->r[10];
    c->r[14] = 0x282671cu; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28268cc; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2826988;
L_2826730:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[5];
    c->r[14] = 0x282673cu; f_2828b60(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] ^ (c->r[0] >> 31);
    c->r[0] = c->r[10];
    c->r[14] = 0x2826764u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[4];
    c->r[14] = 0x282677cu; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[14] = 0x2826798u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x28267b0u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x28267c8u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[14] = 0x28267e0u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_282684c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[14] = 0x28267f8u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_282684c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[14] = 0x2826810u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_282684c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2826828u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_282684c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[14] = 0x2826840u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826ae4; }
L_282684c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_2826598;
L_2826858:;
    c->r[0] = c->r[2];
L_282685c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_28268a0; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] + 0x4u;
L_2826878:;
    c->r[6] = (c->r[2] >> 1);
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[6] = c->r[1] + (c->r[6] << 2);
    if (COND_NE) { c->r[6] = c->r[6] + 0x4u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2826878; }
L_28268a0:;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_28268ac:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    goto L_2826990;
L_28268cc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2826928; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[2];
    if (COND_LE) { c->r[2] = c->r[1]; }
    if (COND_GT) { c->r[0] = c->r[0] + 0x1u; }
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    goto L_282692c;
L_2826908:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_28269f0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_2826abc;
L_2826928:;
    c->r[1] = ~0x0u;
L_282692c:;
    c->r[0] = c->r[10];
    c->r[14] = 0x2826934u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[14] = 0x282694cu; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[14] = 0x2826964u; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826980; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[14] = 0x282697cu; f_2828b60(c);
    c->r[7] = c->r[0];
L_2826980:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_2826988:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
L_282698c:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
L_2826990:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_28269d4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[12];
L_28269a4:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_28269a4; }
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_28269d4:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_28269f0:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[14] = 0x2826a04u; f_2828c10(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x1u;
    if (COND_NE) { c->r[2] = c->r[0]; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2826a68; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
L_2826a38:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2826a38; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    goto L_2826a6c;
L_2826a68:;
    c->r[0] = c->r[2];
L_2826a6c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2826ab0; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] + 0x4u;
L_2826a88:;
    c->r[6] = (c->r[2] >> 1);
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[6] = c->r[1] + (c->r[6] << 2);
    if (COND_NE) { c->r[6] = c->r[6] + 0x4u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2826a88; }
L_2826ab0:;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_2826abc:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[8] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    goto L_2826990;
L_2826ae4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2826b08; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826b20; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2826bd8;
L_2826b08:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    goto L_2826bec;
L_2826b20:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    c->r[14] = 0x2826b34u; f_2828c10(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2826b90; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
L_2826b58:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2826b58; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    goto L_2826b94;
L_2826b90:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2826b94:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2826bd0; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] + 0x4u;
L_2826ba8:;
    c->r[6] = (c->r[2] >> 1);
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[6] = c->r[1] + (c->r[6] << 2);
    if (COND_NE) { c->r[6] = c->r[6] + 0x4u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2826ba8; }
L_2826bd0:;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
L_2826bd8:;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
L_2826bec:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GT) { c->r[1] = c->r[8] + 0x1u; }
    if (COND_GT) { c->r[8] = c->r[8] + 0x2u; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    goto L_282698c;
L_2826c18:;
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_2826f2c; }
    c->r[1] = (c->r[1] << 2);
    c->r[3] = 0x2826c3cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x2826c5cu: goto L_2826c5c; case 0x2826dc0u: goto L_2826dc0; case 0x2826e04u: goto L_2826e04; case 0x2826e18u: goto L_2826e18; case 0x2826e78u: goto L_2826e78; case 0x2826ea8u: goto L_2826ea8; case 0x2826ee8u: goto L_2826ee8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2826c5c:;
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2826d4c; }
    c->r[0] = c->r[5];
L_2826c7c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2826c7c; }
    c->r[2] = (c->r[1] << 1);
    c->r[7] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_2826d10; }
    c->r[0] = 0x0u;
    c->r[2] = ~0x0u;
L_2826ca8:;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_2826ca8; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[6] = c->r[3] + (c->r[1] << 2);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); c->r[6] = ea; }
    if (COND_LT) { goto L_2826d10; }
    c->r[14] = 0x2826cdcu; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2826f6c; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2826d0c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_2826cfc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2826cfc; }
L_2826d0c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
L_2826d10:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2826d1cu; f_2828b60(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2826f70; }
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x2826d34u; f_2828b60(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_NE) { goto L_2826f5c; }
L_2826d4c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_28264ac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x2826d68u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x28264b8u: goto L_28264b8; case 0x282650cu: goto L_282650c; case 0x282652cu: goto L_282652c; case 0x2826d7cu: goto L_2826d7c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2826d7c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2826d94; }
    (void)f_adds(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_28264ac; }
L_2826d94:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_28264ac; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2826668; }
    c->r[0] = 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_28268ac;
L_2826dc0:;
    c->r[1] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_28263a4; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x3u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    goto L_28263cc;
L_2826e04:;
    c->r[5] = c->r[5] - 0x4u;
L_2826e08:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2826e08; }
    goto L_2826f2c;
L_2826e18:;
    c->r[3] = c->r[2] + (c->r[0] << 2);
    c->r[4] = c->r[0] - 0x5u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_28263f0; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[4] + c->r[14];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[7] = c->r[4] + c->r[7];
    if (COND_GT) { c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[7]); }
    goto L_28263f4;
L_2826e78:;
    c->r[1] = c->r[0] - 0x2u;
    c->r[0] = c->r[0] - 0x3u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_GE) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    goto L_2826f2c;
L_2826ea8:;
    c->r[0] = c->r[0] - 0x2u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2826f30; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_2826ee8:;
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
L_2826ef8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2826ef8; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[2] | (c->r[1] << 1);
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[12];
L_2826f1c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2826f1c; }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[2]); }
L_2826f2c:;
    c->r[7] = 0x0u;
L_2826f30:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2826394; }
    goto L_2826f5c;
L_2826f3c:;
    c->r[0] = c->r[8];
    goto L_2827020;
L_2826f44:;
    c->r[0] = 0x0u;
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_2826f5c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2826f7c; }
L_2826f64:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_2827004;
L_2826f6c:;
    c->r[7] = 0xcu;
L_2826f70:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_2826f64; }
L_2826f7c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2826fb8; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] + 0x4u;
L_2826f94:;
    c->r[3] = (c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[0] + (c->r[3] << 2);
    if (COND_NE) { c->r[3] = c->r[3] + 0x4u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2826f94; }
L_2826fb8:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_2827004; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
L_2826fd8:;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_2826fd8; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    goto L_2827008;
L_2827004:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2827008:;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[9] + 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x282701cu; f_283b288(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2827020:;
    c->r[14] = 0x2827024u; f_283b288(c);
L_2827024:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2827030(Cpu *restrict c) {
    FN_ENTER(0x2827030u);
L_2827030:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    goto L_2827050;
L_282704c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2827050:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_2827094; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_28270dc; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_2827114; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2827084u; f_2827030(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2827118; }
    c->r[7] = c->r[4] + 0x4u;
    goto L_282704c;
L_2827094:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[5];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x28270bcu; f_2829d7c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2827118; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[3] = c->r[8];
    c->r[14] = 0x28270d8u; f_2827030(c);
    goto L_2827108;
L_28270dc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_282704c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x2827108u; f_2829d7c(c);
L_2827108:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282704c; }
    goto L_2827118;
L_2827114:;
    c->r[0] = 0x0u;
L_2827118:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2827120(Cpu *restrict c) {
    FN_ENTER(0x2827120u);
L_2827120:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2827270; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2827198; }
    c->r[5] = 0x0u;
L_2827144:;
    c->r[1] = c->r[0] + (c->r[5] << 5);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2827188; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282716c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x2827168u; f_283b288(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_282716c:;
    c->r[1] = c->r[0] + (c->r[5] << 5);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2827188; }
    c->r[0] = c->r[1];
    c->r[14] = 0x2827184u; f_283b288(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2827188:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_2827144; }
L_2827198:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28271a4; }
    c->r[14] = 0x28271a4u; f_283b288(c);
L_28271a4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28271e4; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28271e0; }
    c->r[5] = c->r[0] + 0x28u;
L_28271c0:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28271d0; }
    c->r[14] = 0x28271d0u; f_283b288(c);
L_28271d0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x20u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_28271c0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_28271e0:;
    c->r[14] = 0x28271e4u; f_283b288(c);
L_28271e4:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827234; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2827230; }
    c->r[5] = 0x0u;
    c->r[6] = 0x8u;
L_2827204:;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2827220; }
    c->r[0] = c->r[1];
    c->r[14] = 0x2827218u; f_283b288(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_2827220:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] + 0xcu;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_CC) { goto L_2827204; }
L_2827230:;
    c->r[14] = 0x2827234u; f_283b288(c);
L_2827234:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827244; }
    c->r[14] = 0x2827244u; f_283b288(c);
L_2827244:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827254; }
    c->r[14] = 0x2827254u; f_283b288(c);
L_2827254:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827264; }
    c->r[14] = 0x2827264u; f_283b288(c);
L_2827264:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_283b288(c);
L_2827270:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2827274(Cpu *restrict c) {
    FN_ENTER(0x2827274u);
L_2827274:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x154u;
    c->r[6] = c->r[1];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x24u;
    (void)f_subs(c, c->r[0], 0x58u);
    if (COND_HI) { goto L_282742c; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x28272a8u + 0xcu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[6];
    c->r[1] = c->r[7] & 0x1u;
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x2827418u: goto L_2827418; case 0x282743cu: goto L_282743c; case 0x28274d4u: goto L_28274d4; case 0x2827584u: goto L_2827584; case 0x28275f8u: goto L_28275f8; case 0x2827824u: goto L_2827824; case 0x2827840u: goto L_2827840; case 0x282807cu: goto L_282807c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2827418:;
    c->r[0] = 0xdu;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[9] = c->r[6];
    if (COND_NE) { goto L_2828820; }
    goto L_282807c;
L_282742c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2828794; }
    c->r[9] = c->r[6];
    goto L_282807c;
L_282743c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2827468; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827468; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_2828078; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7cu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x29u); }
    if (COND_NE) { goto L_2828078; }
L_2827468:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[5];
    c->r[7] = 0x0u;
    c->r[14] = 0x282748cu; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28274acu; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2827f10; }
    c->r[1] = 0x0u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[2] = ~0x0u;
    c->r[1] = ~0x1u;
    c->r[3] = 0x2u;
    goto L_2827f00;
L_28274d4:;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = c->r[1];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[8] + 0x1u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x282750cu; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x282752cu; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[1] = c->r[4];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[7] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] & c->r[2];
    if (COND_NE) { goto L_2827f20; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2828064; }
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    goto L_2828060;
L_2827584:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x80u;
    c->r[14] = 0x2827594u; f_283b27c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2828828; }
    c->r[0] = 0x0u;
    c->r[4] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5eu);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { c->r[4] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    c->r[1] = c->r[4];
    c->r[14] = 0x28275d4u; f_2853828(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2828368; }
    c->r[7] = 0x20u;
    c->r[6] = 0x0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    goto L_2827d5c;
L_28275f8:;
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[9] = ea; c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x7cu);
    if (COND_HI) { goto L_28283a4; }
    c->r[2] = (c->r[4] << 2);
    c->r[3] = 0x2827614u + 0xcu;
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x0u;
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x2827814u: goto L_2827814; case 0x28283a4u: goto L_28283a4; case 0x2828468u: goto L_2828468; case 0x28284d0u: goto L_28284d0; case 0x2828538u: goto L_2828538; case 0x28285a0u: goto L_28285a0; case 0x28285a8u: goto L_28285a8; case 0x28285b0u: goto L_28285b0; case 0x28285b8u: goto L_28285b8; case 0x28285c0u: goto L_28285c0; case 0x2828618u: goto L_2828618; case 0x2828620u: goto L_2828620; case 0x2828628u: goto L_2828628; case 0x2828630u: goto L_2828630; case 0x2828638u: goto L_2828638; case 0x2828640u: goto L_2828640; case 0x2828648u: goto L_2828648; case 0x282864cu: goto L_282864c; case 0x2828674u: goto L_2828674; case 0x282878cu: goto L_282878c; case 0x2828820u: goto L_2828820; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2827814:;
    c->r[0] = 0xdu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282807c; }
    goto L_2828820;
L_2827824:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2827e98; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_2827e98; }
    c->r[9] = c->r[6];
    goto L_282807c;
L_2827840:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2828794; }
    c->r[9] = c->r[6];
    goto L_282807c;
L_2827850:;
    (void)f_subs(c, c->r[1], 0x2du);
    if (COND_NE) { goto L_2827880; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_2827880; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x5du);
    if (COND_EQ) { goto L_2827880; }
    (void)f_subs(c, c->r[2], 0x2du);
    if (COND_NE) { goto L_2828834; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x5du);
    if (COND_EQ) { goto L_2828834; }
L_2827880:;
    (void)f_subs(c, c->r[1], 0x5bu);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_28278a8; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3au);
    if (COND_EQ) { goto L_28278d8; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x3du); }
    if (COND_EQ) { goto L_2828878; }
L_28278a8:;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x2du);
    if (COND_NE) { goto L_28278d0; }
    c->r[4] = c->r[3];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_NE) { goto L_2827aa0; }
L_28278d0:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    goto L_2827ad0;
L_28278d8:;
    c->r[4] = c->r[8];
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD8(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x2u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x3u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x4u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x5u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x6u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x7u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x8u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x9u;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0xau;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0xbu;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0xcu;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_EQ) { goto L_2827a28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    { uint32_t ea = c->r[3] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0xdu;
    (void)f_subs(c, c->r[0], 0x3au);
    if (COND_NE) { goto L_282883c; }
L_2827a28:;
    c->r[5] = c->r[11] - 0x38u;
    c->r[1] = c->r[8];
    c->r[0] = c->r[5];
    c->r[2] = c->r[9];
    c->r[14] = 0x2827a3cu; f_283aa78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x2827a4cu; f_2855ea4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_282883c; }
    c->r[0] = c->r[8] + c->r[9];
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5du);
    if (COND_NE) { goto L_282883c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2827d40; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_GT) { goto L_2828b50; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[8] = c->r[4];
    c->r[1] = c->r[1] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    goto L_2827d0c;
L_2827aa0:;
    c->r[0] = c->r[11] - 0x24u;
    c->r[1] = c->r[4];
    c->r[2] = ~0x0u;
    c->r[14] = 0x2827ab0u; f_2853828(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2828834; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], c->r[1]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    if (COND_GT) { goto L_2828834; }
    c->r[3] = c->r[4] + c->r[0];
    c->r[10] = 0x0u;
L_2827ad0:;
    c->r[7] = 0x0u;
L_2827ad4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_GE) { goto L_2827aec; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_2827b20;
L_2827aec:;
    c->r[0] = 0xcu;
    (void)f_subs(c, c->r[4], 0x8000u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_GE) { goto L_282837c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[4] << 3);
    c->r[14] = 0x2827b08u; f_2844ffc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_282837c; }
    c->r[4] = (c->r[4] << 1);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
L_2827b20:;
    c->r[0] = 0x14u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[14] = 0x2827b3cu; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2828b3c; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_GT) { goto L_2827d08; }
    { uint32_t r = c->r[10] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_2827d08; }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_2827ba0;
L_2827b98:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_2827cfc;
L_2827ba0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2827ba8u; f_2855e5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827c0c; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[8];
    c->r[14] = 0x2827bc0u; f_2855eb0(c);
    c->r[7] = c->r[0];
    c->r[4] = 0x0u;
L_2827bc8:;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + c->r[5];
    c->r[10] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_2827bf8; }
    c->r[4] = c->r[5] + 0x1u;
    c->r[0] = c->r[10];
    c->r[8] = c->r[7] + c->r[4];
    c->r[14] = 0x2827bf0u; f_2855eb0(c);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_EQ) { goto L_2827bc8; }
L_2827bf8:;
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7] + c->r[5];
    c->r[9] = c->r[0] + 0x1u;
    goto L_2827c74;
L_2827c0c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2827c14u; f_2855e80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2827b98; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x2827c2cu; f_2855ec8(c);
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
L_2827c34:;
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + c->r[4];
    c->r[10] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_2827c64; }
    c->r[5] = c->r[4] + 0x1u;
    c->r[0] = c->r[10];
    c->r[6] = c->r[7] + c->r[5];
    c->r[14] = 0x2827c5cu; f_2855ec8(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_2827c34; }
L_2827c64:;
    c->r[0] = c->r[7] + c->r[4];
    c->r[6] = c->r[8];
    c->r[9] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2827c74:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_LT) { goto L_2827cac; }
    (void)f_subs(c, c->r[5], 0x8000u);
    if (COND_GE) { goto L_282837c; }
    c->r[1] = (c->r[5] << 3);
    c->r[0] = c->r[6];
    c->r[14] = 0x2827c98u; f_2844ffc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282837c; }
    c->r[5] = (c->r[5] << 1);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
L_2827cac:;
    c->r[0] = 0x14u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[14] = 0x2827cc8u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282837c; }
    c->r[1] = c->r[9] - 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[9] = c->r[10];
L_2827cfc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LE) { goto L_2827ba0; }
L_2827d08:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
L_2827d0c:;
    c->r[0] = c->r[11] - 0x24u;
    c->r[1] = c->r[3];
    c->r[2] = ~0x0u;
    c->r[4] = c->r[3];
    c->r[14] = 0x2827d20u; f_2853828(c);
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_GE) { goto L_2827d5c; }
    goto L_282836c;
L_2827d40:;
    c->r[0] = 0xffffu;
    c->r[9] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[8] = c->r[4];
    goto L_2827ad4;
L_2827d5c:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x5du);
    if (COND_NE) { goto L_2827850; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_2827850; }
    c->r[0] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2828880; }
    c->r[0] = 0xe60u;
    c->r[1] = c->r[6];
    c->r[2] = 0x4u;
    c->r[3] = 0x2827d98u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x2827d9cu; f_285090c(c);
    c->r[4] = c->r[6];
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_LT) { goto L_2827ddc; }
    c->r[0] = 0xcu;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[7], 0x8000u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_GE) { goto L_2828380; }
    c->r[1] = (c->r[7] << 3);
    c->r[0] = c->r[5];
    c->r[14] = 0x2827dc8u; f_2844ffc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2828384; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
L_2827ddc:;
    c->r[0] = 0x14u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[6] = 0x0u;
    c->r[14] = 0x2827dfcu; f_28562b8(c);
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2828b44; }
    c->r[1] = 0x110000u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2828880; }
    c->r[0] = 0xcu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[1] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x2827e60u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2828380; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[2] = (c->r[4] << 2);
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x2827e80u; f_283ac04(c);
    c->r[0] = 0x0u;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_GE) { goto L_282888c; }
    goto L_28289f8;
L_2827e98:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[5];
    c->r[7] = 0x0u;
    c->r[14] = 0x2827ebcu; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2827edcu; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2827f10; }
    c->r[1] = 0x0u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[2] = ~0x0u;
    c->r[1] = ~0x1u;
    c->r[3] = 0x1u;
L_2827f00:;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
L_2827f10:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2828814; }
    goto L_2828828;
L_2827f20:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2827f48; }
    c->r[1] = 0x0u;
    c->r[9] = c->r[0];
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[8]); }
L_2827f48:;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x2827f7cu; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2827f9cu; f_28562b8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_2828064; }
    c->r[7] = 0x0u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    if (COND_EQ) { goto L_2828064; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[4];
    c->r[7] = 0x0u;
    c->r[14] = 0x2828004u; f_28562b8(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828024u; f_28562b8(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2828064; }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
L_2828060:;
    c->r[7] = c->r[0];
L_2828064:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[8] = c->r[10];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2828814; }
    goto L_2828828;
L_2828078:;
    c->r[9] = c->r[6];
L_282807c:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[9];
    c->r[2] = ~0x0u;
    c->r[14] = 0x282808cu; f_2853828(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_2828134; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2828140; }
L_28280a8:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x28280d8u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28280f8u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2828344; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2828344; }
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_2828348;
L_2828134:;
    c->r[0] = 0x2u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2828140:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2828148u; f_2855e80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2828160; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2828158u; f_2855e5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28280a8; }
L_2828160:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0x282816cu; f_2855eb0(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2828178u; f_2855eb0(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x28281a4u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28281c4u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_282820c; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_282820c; }
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
L_282820c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x282821cu; f_2855ec8(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2828228u; f_2855ec8(c);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2828250u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828270u; f_28562b8(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[4], 0x0u); }
    if (COND_EQ) { goto L_2828348; }
    c->r[7] = 0x0u;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2828348; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x28282dcu; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28282fcu; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2828344; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2828344; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    goto L_2828348;
L_2828344:;
    c->r[7] = 0x0u;
L_2828348:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[9] + c->r[10];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2828814; }
    goto L_2828828;
L_2828368:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
L_282836c:;
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = 0x2u; }
L_2828378:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_282837c:;
    c->r[6] = 0x0u;
L_2828380:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2828384:;
    c->r[14] = 0x2828388u; f_283b288(c);
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_28283a4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282807c; }
    c->r[0] = c->r[4] - 0x31u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_282807c; }
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = 0x1u;
    c->r[0] = c->r[5] + 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x28283f0u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828410u; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[4] - 0x30u;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2828444; }
    c->r[2] = 0x0u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[3] = ~0x0u;
    c->r[2] = ~0x3u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
L_2828444:;
    c->r[8] = c->r[10];
    c->r[6] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2828814; }
    goto L_2828828;
L_2828468:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2828488u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28284a8u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_2828610; }
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = ~0x1u;
    c->r[2] = 0x10u;
    goto L_2828860;
L_28284d0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x28284f0u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828510u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_2828610; }
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = ~0x1u;
    c->r[2] = 0x20u;
    goto L_2828860;
L_2828538:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2828558u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828578u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_2828610; }
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = ~0x1u;
    c->r[2] = 0x80u;
    goto L_2828860;
L_28285a0:;
    c->r[7] = 0xbu;
    goto L_282864c;
L_28285a8:;
    c->r[7] = 0x9u;
    goto L_282864c;
L_28285b0:;
    c->r[7] = 0x7u;
    goto L_282864c;
L_28285b8:;
    c->r[7] = 0x4u;
    goto L_282864c;
L_28285c0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x28285e0u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828600u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_NE) { goto L_282884c; }
L_2828610:;
    c->r[7] = 0x0u;
    goto L_282877c;
L_2828618:;
    c->r[7] = 0xau;
    goto L_282864c;
L_2828620:;
    c->r[7] = 0x5u;
    goto L_282864c;
L_2828628:;
    c->r[7] = 0x3u;
    goto L_282864c;
L_2828630:;
    c->r[7] = 0x1u;
    goto L_282864c;
L_2828638:;
    c->r[7] = 0x2u;
    goto L_282864c;
L_2828640:;
    c->r[7] = 0x8u;
    goto L_282864c;
L_2828648:;
    c->r[7] = 0x6u;
L_282864c:;
    c->r[1] = 0x429e60u;
    c->r[1] = 0x2828658u + c->r[1];
    c->r[0] = c->r[1] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x2828664u; f_2827274(c);
    c->r[1] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2828674:;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[2] = 0x2u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x7bu);
    if (COND_EQ) { c->r[2] = 0x8u; }
    if (COND_EQ) { c->r[6] = c->r[6] + 0x1u; }
L_2828690:;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[3] = c->r[7] - 0x30u;
    (void)f_subs(c, c->r[3], 0xau);
    if (COND_CC) { goto L_28286bc; }
    c->r[3] = c->r[7] | 0x20u;
    (void)f_subs(c, c->r[3], 0x57u);
    if (COND_CC) { goto L_28286d0; }
    c->r[7] = c->r[3] - 0x61u;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_HI) { goto L_28286d0; }
    c->r[3] = c->r[3] - 0x57u;
L_28286bc:;
    c->r[5] = c->r[3] + (c->r[5] << 4);
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[5], 0x110000u);
    if (COND_LT) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_LT) { goto L_2828690; }
L_28286d0:;
    c->r[9] = c->r[6] + c->r[1];
    (void)f_subs(c, c->r[0], 0x7bu);
    if (COND_NE) { goto L_28286f0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x9u;
    (void)f_subs(c, c->r[1], 0x7du);
    if (COND_NE) { goto L_2828820; }
    c->r[9] = c->r[9] + 0x1u;
L_28286f0:;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = c->r[1];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[8] + 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x2828728u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828748u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2828774; }
    c->r[1] = 0x0u;
    c->r[7] = c->r[0];
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[8]); }
L_2828774:;
    c->r[9] = c->r[9] - 0x1u;
    c->r[8] = c->r[10];
L_282877c:;
    c->r[6] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2828814; }
    goto L_2828828;
L_282878c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282807c; }
L_2828794:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[5];
    c->r[14] = 0x28287b4u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28287d4u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = 0xcu;
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_2828820; }
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_2828808:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2828828; }
L_2828814:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[6]); }
L_2828820:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2828828:;
    c->r[0] = 0xcu;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2828834:;
    c->r[0] = 0xbu;
    goto L_2828378;
L_282883c:;
    c->r[0] = 0x4u;
L_2828840:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[4];
    goto L_282837c;
L_282884c:;
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = ~0x1u;
    c->r[2] = 0x40u;
L_2828860:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[6] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    goto L_2828808;
L_2828878:;
    c->r[0] = 0x3u;
    goto L_2828378;
L_2828880:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_28289f8; }
L_282888c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_2828a0c; }
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
L_28288b0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_28289b8; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x2828900u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2828924; }
    c->r[1] = 0x0u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_2828924:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_28289c8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[7];
    c->r[6] = 0x0u;
    c->r[14] = 0x2828950u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828970u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2828b44; }
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_2828b44; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_28289cc;
L_28289b8:;
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { c->r[1] = c->r[0]; }
    goto L_28289e0;
L_28289c8:;
    c->r[0] = c->r[10];
L_28289cc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2828b3c; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[5] = c->r[0];
L_28289e0:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_LT) { goto L_28288b0; }
    c->r[0] = 0x0u;
    c->r[6] = c->r[5];
    goto L_2828b48;
L_28289f8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_2828384;
L_2828a0c:;
    c->r[7] = 0x0u;
    c->r[10] = 0x0u;
L_2828a14:;
    { uint32_t ea = c->r[5] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x2828a44u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[9] = 0x0u;
    if (COND_EQ) { goto L_2828a74; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = 0x0u;
    if (COND_EQ) { goto L_2828a74; }
    c->r[1] = 0x0u;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_2828a74:;
    c->r[5] = c->r[7];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2828b0c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[7];
    c->r[6] = 0x0u;
    c->r[14] = 0x2828aa4u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828ac4u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2828b44; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x3u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); } }
    if (COND_NE) { c->r[1] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); } }
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_2828b44; }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2828b10;
L_2828b0c:;
    c->r[0] = c->r[6];
L_2828b10:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2828b3c; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { goto L_2828a14; }
    c->r[0] = 0x0u;
    c->r[6] = c->r[7];
    goto L_2828b48;
L_2828b3c:;
    c->r[0] = 0xcu;
    goto L_2828378;
L_2828b44:;
    c->r[0] = 0xcu;
L_2828b48:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_2828380;
L_2828b50:;
    c->r[0] = 0xcu;
    goto L_2828840;
}
void f_2828b60(Cpu *restrict c) {
    FN_ENTER(0x2828b60u);
L_2828b60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_2828ba0; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2828ba0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0xcu;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GE) { goto L_2828bf0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { c->r[7] = c->r[2]; }
    c->r[1] = (c->r[7] << 2);
    c->r[14] = 0x2828bccu; f_2844ffc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2828bf0; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2828be8u; f_2828b60(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2828bf0:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2828bf8(Cpu *restrict c) {
    FN_ENTER(0x2828bf8u);
L_2828bf8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    return;
}
void f_2828c10(Cpu *restrict c) {
    FN_ENTER(0x2828c10u);
L_2828c10:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[7] = c->r[0];
    c->r[0] = 0x8u;
    c->r[8] = c->r[2];
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x2828c44u; f_28562b8(c);
    c->r[5] = c->r[0];
    c->r[6] = 0xcu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2828d1c; }
    c->r[0] = 0x14u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[10] = 0x0u;
    c->r[14] = 0x2828c74u; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828c94u; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2828ca8; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[10]); }
    goto L_2828d1c;
L_2828ca8:;
    c->r[1] = 0x0u;
    c->r[10] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = ~0x2u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x2828ce0u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2828d1c; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[10]); }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
L_2828d1c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2828d28(Cpu *restrict c) {
    FN_ENTER(0x2828d28u);
L_2828d28:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[7] = c->r[0];
    c->r[0] = 0x8u;
    c->r[8] = c->r[2];
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x2828d5cu; f_28562b8(c);
    c->r[5] = c->r[0];
    c->r[6] = 0xcu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2828e34; }
    c->r[0] = 0x14u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[10] = 0x0u;
    c->r[14] = 0x2828d8cu; f_28562b8(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828dacu; f_28562b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2828dc0; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[10]); }
    goto L_2828e34;
L_2828dc0:;
    c->r[1] = 0x0u;
    c->r[10] = ~0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = ~0x2u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x2828df8u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2828e34; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[10]); }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
L_2828e34:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2828e40(Cpu *restrict c) {
    FN_ENTER(0x2828e40u);
L_2828e40:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[2];
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x2828e68u; f_2828b60(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x2828e78u; f_2828b60(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6] & 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[6] & 0x1u;
    c->r[0] = 0x1u;
    c->r[12] = 0x0u;
    c->r[8] = 0x14u;
    c->r[6] = 0x8u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_2828ebc;
L_2828eb0:;
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
L_2828ebc:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LE) { goto L_2829474; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2828ecc:;
    c->r[2] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2828eec; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_2828f04; }
    goto L_2828eb0;
L_2828eec:;
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LS) { goto L_2828f14; }
L_2828f04:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_GT) { goto L_2828ecc; }
    goto L_2829474;
L_2828f14:;
    c->r[1] = (c->r[2] << 2);
    c->r[2] = 0x2828f20u + 0x8u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2828f38u: goto L_2828f38; case 0x2828f88u: goto L_2828f88; case 0x28290ccu: goto L_28290cc; case 0x28291ccu: goto L_28291cc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2828f38:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_GE) { goto L_2829278; }
    (void)f_adds(c, c->r[6], 0x4u);
    if (COND_EQ) { goto L_2829278; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2829338; }
    (void)f_adds(c, c->r[6], 0x3u);
    if (COND_NE) { goto L_2829338; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_2829390;
L_2828f88:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_282902c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2828fc4u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2828fe4u; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_282948c; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_282902c:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_28294a8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[12]); c->r[6] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2829058u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x282906cu; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x2829080u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x2829094u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x28290a8u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x28290bcu; f_2828b60(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_2829324;
L_28290cc:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x28290e0u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x28290f4u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x2829134u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2829154u; f_28562b8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_2829498; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[10] & 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeu;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[1]); }
    c->r[6] = 0x8u;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x14u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_2828ebc;
L_28291cc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2829294; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    c->r[14] = 0x2829208u; f_28562b8(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x2829228u; f_28562b8(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282948c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = 0x3u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); } }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_EQ) { goto L_282948c; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_2829298;
L_2829278:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    goto L_2829390;
L_2829294:;
    c->r[0] = c->r[12];
L_2829298:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_28294b0; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x28292b8u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x28292ccu; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[1] = c->r[8] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x28292e0u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x28292f4u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2829308u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829478; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x282931cu; f_2828b60(c);
    c->r[12] = 0x0u;
    c->r[3] = c->r[8];
L_2829324:;
    c->r[8] = 0x14u;
    c->r[6] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2828ebc; }
    goto L_2829478;
L_2829338:;
    (void)f_adds(c, c->r[6], 0x3u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_2829368; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2829370; }
    c->r[0] = ~0x2u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_2829390;
L_2829368:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    goto L_2829390;
L_2829370:;
    c->r[0] = ~0x2u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_2829390:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x28293acu; f_28562b8(c);
    c->r[10] = c->r[0];
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x28293ccu; f_28562b8(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_2829400; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = 0x0u;
    c->r[0] = 0xcu;
    c->r[6] = 0x8u;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_282945c;
L_2829400:;
    c->r[0] = 0x0u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x8u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
L_282945c:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[14], c->r[1]);
    if (COND_GT) { { uint32_t ea = c->r[2]; ST32(ea, c->r[14]); } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2828ebc; }
    goto L_2829478;
L_2829474:;
    c->r[0] = 0x0u;
L_2829478:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_282948c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    goto L_28294a4;
L_2829498:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_28294a4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_28294a8:;
    c->r[0] = 0xcu;
    goto L_2829478;
L_28294b0:;
    c->r[0] = 0xcu;
    goto L_2829478;
}
void f_28294b8(Cpu *restrict c) {
    FN_ENTER(0x28294b8u);
L_28294b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_28294f8; }
    c->r[3] = 0x0u;
L_28294e4:;
    { uint32_t ea = c->r[10] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_28294e4; }
    c->r[8] = c->r[3] - 0x1u;
L_28294f8:;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x20u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_28294f8; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] - 0x20u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
L_2829514:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x20u; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x20u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2829514; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[14] = 0x2829540u; f_28562b8(c);
    c->r[14] = c->r[0];
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_2829a94; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282976c; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2829774; }
    c->r[1] = c->r[8];
    c->r[6] = c->r[10] + (c->r[8] << 2);
    c->r[1] = c->r[1] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[8] << 2);
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
L_2829584:;
    c->r[7] = c->r[12] + (c->r[4] << 5);
    { uint32_t ea = c->r[14] + (c->r[4] << 5); ST32(ea, c->r[0]); c->r[14] = ea; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[14] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28295ec; }
    c->r[1] = 0x0u;
L_28295d8:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_28295d8; }
    c->r[9] = c->r[1] - 0x1u;
L_28295ec:;
    c->r[0] = c->r[9] + c->r[8];
    c->r[1] = 0x4u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[14] = 0x2829618u; f_28562b8(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829a94; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[2] = 0x0u;
    if (COND_LT) { goto L_28296b4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_LS) { goto L_282969c; }
    c->r[7] = c->r[9];
    c->r[7] = c->r[7] & 0xfffffffcu;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_282969c; }
    c->r[2] = c->r[4] + (c->r[9] << 2);
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_282966c; }
    c->r[2] = c->r[0] + (c->r[9] << 2);
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_CC) { goto L_282969c; }
L_282966c:;
    c->r[12] = c->r[6];
    c->r[3] = c->r[7];
    c->r[6] = c->r[0];
    c->r[2] = c->r[4];
L_282967c:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    if (COND_NE) { goto L_282967c; }
    (void)f_subs(c, c->r[9], c->r[7]);
    c->r[3] = c->r[7];
    c->r[6] = c->r[12];
    if (COND_EQ) { goto L_28296b0; }
L_282969c:;
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[3]);
    if (COND_NE) { goto L_282969c; }
L_28296b0:;
    c->r[2] = c->r[9];
L_28296b4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[4] = c->r[5];
    if (COND_LT) { goto L_2829744; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_CC) { goto L_2829728; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2829728; }
    c->r[1] = c->r[0] + (c->r[2] << 2);
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CS) { goto L_28296fc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[0] + c->r[5];
    c->r[7] = c->r[7] + (c->r[2] << 2);
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_CC) { goto L_2829728; }
L_28296fc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[10];
L_2829704:;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[5] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    if (COND_NE) { goto L_2829704; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], c->r[1]);
    c->r[3] = c->r[1];
    c->r[1] = c->r[8];
    if (COND_EQ) { goto L_2829744; }
L_2829728:;
    c->r[1] = c->r[0] + (c->r[2] << 2);
L_282972c:;
    { uint32_t ea = c->r[10] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_NE) { goto L_282972c; }
    c->r[1] = c->r[8];
L_2829744:;
    c->r[3] = c->r[14] + (c->r[4] << 5);
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + (c->r[4] << 5); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2829584; }
    goto L_28298fc;
L_282976c:;
    c->r[4] = 0x0u;
    goto L_28298fc;
L_2829774:;
    c->r[1] = (c->r[8] << 2);
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_2829780:;
    c->r[9] = c->r[12] + (c->r[4] << 5);
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1] + (c->r[4] << 5); ST32(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28298e4; }
    c->r[10] = c->r[4];
    c->r[7] = ~0x1u;
    c->r[0] = 0x0u;
    c->r[6] = 0x0u;
L_28297e4:;
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0];
    c->r[0] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] + 0x4u;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_28297e4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] + c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2829824u; f_28562b8(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829a94; }
    c->r[1] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_28298c8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LS) { goto L_28298ac; }
    c->r[7] = c->r[1];
    c->r[7] = c->r[7] & 0xfffffffcu;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_28298ac; }
    c->r[2] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[2] - 0x4u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { c->r[2] = c->r[0] + c->r[6]; }
    if (COND_CC) { c->r[2] = c->r[2] - 0x4u; }
    if (COND_CC) { (void)f_subs(c, c->r[4], c->r[2]); }
    if (COND_CC) { goto L_28298b0; }
    c->r[3] = c->r[5];
    c->r[6] = c->r[0];
    c->r[3] = c->r[3] & 0xfffffffcu;
    c->r[2] = c->r[4];
L_282988c:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    if (COND_NE) { goto L_282988c; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[3] = c->r[7];
    if (COND_NE) { goto L_28298b0; }
    goto L_28298d0;
L_28298ac:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_28298b0:;
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_NE) { goto L_28298b0; }
    goto L_28298d0;
L_28298c8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_28298d0:;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[4] = c->r[10];
    if (COND_GT) { goto L_2829aa0; }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_28298e4:;
    c->r[1] = c->r[14] + (c->r[4] << 5);
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + (c->r[4] << 5); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2829780; }
L_28298fc:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[14] + (c->r[4] << 5);
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2829a88; }
    c->r[9] = 0x0u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
L_282991c:;
    c->r[6] = c->r[12] + (c->r[9] << 5);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[7] = c->r[14] + (c->r[2] << 5);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2829a6c; }
    c->r[10] = ~0x1u;
    c->r[0] = 0x0u;
    c->r[5] = 0x0u;
L_2829974:;
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[0];
    c->r[0] = c->r[8] + 0x1u;
    c->r[5] = c->r[5] + 0x4u;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2829974; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[4] = 0x0u;
    c->r[14] = 0x28299acu; f_28562b8(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829a94; }
    c->r[1] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_28299dc; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CS) { goto L_28299e8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_2829a4c;
L_28299dc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_2829a60;
L_28299e8:;
    c->r[6] = c->r[1];
    c->r[6] = c->r[6] & 0xfffffffcu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2829a48; }
    c->r[2] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[2] - 0x4u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { c->r[2] = c->r[0] + c->r[5]; }
    if (COND_CC) { c->r[2] = c->r[2] - 0x4u; }
    if (COND_CC) { (void)f_subs(c, c->r[4], c->r[2]); }
    if (COND_CC) { goto L_2829a4c; }
    c->r[3] = c->r[8];
    c->r[5] = c->r[0];
    c->r[3] = c->r[3] & 0xfffffffcu;
    c->r[2] = c->r[4];
L_2829a28:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    if (COND_NE) { goto L_2829a28; }
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[3] = c->r[6];
    if (COND_NE) { goto L_2829a4c; }
    goto L_2829a60;
L_2829a48:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
L_2829a4c:;
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_NE) { goto L_2829a4c; }
L_2829a60:;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2829a6c:;
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + (c->r[9] << 5); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[9] + c->r[4];
    c->r[0] = c->r[14] + (c->r[2] << 5);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_282991c; }
L_2829a88:;
    c->r[1] = ~0x0u;
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_2829a94:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2829aa0:;
    rt_udf(c, 0x2829aa0u);
}
void f_2829aa4(Cpu *restrict c) {
    FN_ENTER(0x2829aa4u);
L_2829aa4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[3];
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[8] = c->r[2];
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x2829ad8u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829d74; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2829c40; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LE) { goto L_2829d70; }
    c->r[9] = ~0x0u;
    goto L_2829b10;
L_2829afc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    goto L_2829c30;
L_2829b10:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_2829c30; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x2829b38u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2829b4cu: goto L_2829b4c; case 0x2829bd0u: goto L_2829bd0; case 0x2829bf0u: goto L_2829bf0; case 0x2829bfcu: goto L_2829bfc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2829b4c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_2829afc; }
    (void)f_adds(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_2829c30; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2829c30; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2829bbc; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_2829ba0; }
    goto L_2829bb0;
L_2829b90:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_2829bb0; }
L_2829ba0:;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_2829b90; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2829bbc; }
L_2829bb0:;
    c->r[1] = c->r[8] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
L_2829bbc:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); } }
    goto L_2829c30;
L_2829bd0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2829be0u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829d74; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2829c20;
L_2829bf0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2829c14;
L_2829bfc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2829c20; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2829c14:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829c30; }
L_2829c20:;
    c->r[0] = c->r[5];
    c->r[14] = 0x2829c28u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829d74; }
L_2829c30:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GT) { goto L_2829b10; }
    goto L_2829d70;
L_2829c40:;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LE) { goto L_2829d70; }
    c->r[9] = ~0x0u;
L_2829c4c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_2829d64; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x2829c74u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2829c88u: goto L_2829c88; case 0x2829d04u: goto L_2829d04; case 0x2829d24u: goto L_2829d24; case 0x2829d30u: goto L_2829d30; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2829c88:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_2829d64; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2829d64; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2829cf0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_2829cd4; }
    goto L_2829ce4;
L_2829cc4:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_2829ce4; }
L_2829cd4:;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_2829cc4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2829cf0; }
L_2829ce4:;
    c->r[1] = c->r[8] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
L_2829cf0:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); } }
    goto L_2829d64;
L_2829d04:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2829d14u; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829d74; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2829d54;
L_2829d24:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2829d48;
L_2829d30:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2829d54; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2829d48:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829d64; }
L_2829d54:;
    c->r[0] = c->r[5];
    c->r[14] = 0x2829d5cu; f_2828b60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829d74; }
L_2829d64:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GT) { goto L_2829c4c; }
L_2829d70:;
    c->r[0] = 0x0u;
L_2829d74:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2829d7c(Cpu *restrict c) {
    FN_ENTER(0x2829d7cu);
L_2829d7c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[10] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_282a060; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_282a054; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_2829db8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282a048; }
    c->r[8] = ~0x0u;
    c->r[4] = c->r[5];
    goto L_2829df0;
L_2829dd0:;
    c->r[7] = c->r[12] + 0x4u;
    c->r[2] = c->r[1];
L_2829dd8:;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_2829dd8; }
    goto L_282a030;
L_2829df0:;
    c->r[1] = c->r[8];
    c->r[4] = c->r[4] + 0x20u;
    c->r[8] = c->r[0];
L_2829dfc:;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_NE) { goto L_2829e14; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = c->r[4] + 0x20u; c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GE) { goto L_2829dfc; }
    goto L_282a048;
L_2829e14:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[1] + (c->r[0] << 5);
L_2829e28:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[9] = c->r[9] + 0x20u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2829e28; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 5);
    { uint32_t ea = c->r[9] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[3] | c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] | 0x4u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] | 0x8u; }
    { uint32_t ea = c->r[9] - 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { c->r[0] = c->r[1] | 0x100u; }
    if (COND_GE) { { uint32_t ea = c->r[9] - 0x14u; ST32(ea, c->r[0]); } }
    if (COND_GE) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[9] - 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2829f04; }
L_2829eb4:;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2829eb4; }
    c->r[14] = 0x2829ec8u; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] - 0xcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282a0c8; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2829ef8; }
    c->r[2] = c->r[2] + 0x4u;
L_2829ee8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2829ee8; }
L_2829ef8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_2829f08;
L_2829f04:;
    { uint32_t ea = c->r[9] - 0xcu; ST32(ea, c->r[0]); }
L_2829f08:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829f34; }
    c->r[1] = 0x0u;
L_2829f20:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2829f20; }
    c->r[7] = c->r[1] - 0x1u;
L_2829f34:;
    { uint32_t ea = c->r[4] - 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829f58; }
    c->r[1] = 0x0u;
L_2829f44:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2829f44; }
    c->r[6] = c->r[1] - 0x1u;
L_2829f58:;
    { uint32_t ea = c->r[9] - 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2829f68; }
    c->r[14] = 0x2829f68u; f_283b288(c);
L_2829f68:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] - 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_282a03c; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[14] = 0x2829f88u; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] - 0x18u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282a0c8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2829fcc; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2829fcc; }
    c->r[3] = c->r[3] + 0x4u;
    c->r[1] = 0x0u;
L_2829fb8:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_2829fb8; }
L_2829fcc:;
    { uint32_t ea = c->r[4] - 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_282a02c; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_282a02c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { goto L_2829dd0; }
    c->r[7] = 0x0u;
    c->r[2] = c->r[1];
L_2829ff4:;
    c->r[6] = 0x0u;
L_2829ff8:;
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_282a018; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_LT) { goto L_2829ff8; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x1u;
L_282a018:;
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[12] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_2829ff4; }
    goto L_282a030;
L_282a02c:;
    c->r[2] = c->r[1];
L_282a030:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); }
L_282a03c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2829df0; }
L_282a048:;
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2829db8; }
L_282a054:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_282a060:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_282a0c0; }
    c->r[1] = c->r[5] + 0x40u;
L_282a070:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_282a0b4; }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_282a0b4; }
    c->r[2] = c->r[1];
L_282a098:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x20u; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { goto L_282a098; }
L_282a0b4:;
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_282a070; }
L_282a0c0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_282a0c8:;
    c->r[0] = 0xcu;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_282a0d4(Cpu *restrict c) {
    FN_ENTER(0x282a0d4u);
L_282a0d4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_282a120; }
    c->r[0] = 0x3b807cu;
    c->r[6] = 0x282a0fcu + c->r[0];
L_282a0f8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282a128; }
    c->r[0] = c->r[6];
    c->r[14] = 0x282a10cu; f_283b2ac(c);
    c->r[0] = c->r[6] + c->r[0];
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[6] = c->r[0] + 0x1u;
    if (COND_NE) { goto L_282a0f8; }
    goto L_282a128;
L_282a120:;
    c->r[0] = 0x3b804cu;
    c->r[6] = 0x282a12cu + c->r[0];
L_282a128:;
    c->r[3] = c->r[6];
    c->r[1] = 0x30ea46u;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = c->r[3] + 0x1u; c->r[0] = v; }
    c->r[2] = 0x282a13cu + c->r[1];
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[3] = c->r[6]; }
    c->r[14] = 0x282a14cu; f_283b33c(c);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
