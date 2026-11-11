#include "cpu.h"
#include "neon_rt.h"
void f_27bab48(Cpu *c);
void f_27c73c8(Cpu *c);
void f_27c75a8(Cpu *c);
void f_27ca728(Cpu *c);
void f_27cda3c(Cpu *c);
void f_27cdb70(Cpu *c);
void f_27d4d10(Cpu *c);
void f_27d500c(Cpu *c);
void f_27d70c8(Cpu *c);
void f_27d7cd8(Cpu *c);
void f_27d8298(Cpu *c);
void f_27d8714(Cpu *c);
void f_283aa78(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_284f5c8(Cpu *c);
void f_27cdb70(Cpu *restrict c) {
    FN_ENTER(0x27cdb70u);
L_27cdb70:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xecu;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[6] - c->r[4];
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27d1574; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_27cdbcc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x67u);
    c->r[1] = c->r[4];
    if (COND_NE) { goto L_27cdbd0; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[1], 0x73u);
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[1] + 0x2u; }
    if (COND_EQ) { c->r[7] = 0x1u; }
    goto L_27cdbd0;
L_27cdbcc:;
    c->r[1] = c->r[4];
L_27cdbd0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x31u;
    (void)f_subs(c, c->r[2], 0x43u);
    if (COND_HI) { goto L_27d1574; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x27cdbecu + 0x14u;
    c->r[9] = 0xaaaau;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = 0x5555u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xaaa0000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x5550000u;
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x27cdd10u: goto L_27cdd10; case 0x27cdd28u: goto L_27cdd28; case 0x27cde14u: goto L_27cde14; case 0x27cdec4u: goto L_27cdec4; case 0x27ce03cu: goto L_27ce03c; case 0x27ce0f8u: goto L_27ce0f8; case 0x27ce110u: goto L_27ce110; case 0x27ce16cu: goto L_27ce16c; case 0x27ce3ecu: goto L_27ce3ec; case 0x27ce440u: goto L_27ce440; case 0x27ce458u: goto L_27ce458; case 0x27ce470u: goto L_27ce470; case 0x27ce568u: goto L_27ce568; case 0x27ce654u: goto L_27ce654; case 0x27ce770u: goto L_27ce770; case 0x27cec78u: goto L_27cec78; case 0x27cee94u: goto L_27cee94; case 0x27cefa0u: goto L_27cefa0; case 0x27cf09cu: goto L_27cf09c; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27cdd10:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27d8714(c);
L_27cdd28:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x56u;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_HI) { goto L_27d1574; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x27cdd44u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x27cdd10u: goto L_27cdd10; case 0x27cddccu: goto L_27cddcc; case 0x27d0da4u: goto L_27d0da4; case 0x27d0e0cu: goto L_27d0e0c; case 0x27d0f00u: goto L_27d0f00; case 0x27d104cu: goto L_27d104c; case 0x27d11a8u: goto L_27d11a8; case 0x27d14fcu: goto L_27d14fc; case 0x27d1538u: goto L_27d1538; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27cddcc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2fu;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cde10u; f_27d7cd8(c);
    goto L_27d156c;
L_27cde14:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x65u;
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_HI) { goto L_27d1574; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27cde30u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27cde80u: goto L_27cde80; case 0x27cf270u: goto L_27cf270; case 0x27cf414u: goto L_27cf414; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27cde80:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x69u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x65u); }
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[0], 0x65u);
    if (COND_NE) { goto L_27d1ab4; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cdec0u; f_27cdb70(c);
    goto L_27d1ac4;
L_27cdec4:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x78u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cdee4u; f_27cdb70(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cdf00u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d0b34; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27cdf4cu; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27cdf78:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cdf94; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cdf94u; f_283b288(c);
L_27cdf94:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cdfa8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cdfa8u; f_283b288(c);
L_27cdfa8:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cdf78; }
    { uint32_t ea = c->r[8] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[8] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27cdfd4u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[7] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d474c; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d1874; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x80u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d1898;
L_27ce03c:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x61u;
    (void)f_subs(c, c->r[1], 0x17u);
    if (COND_HI) { goto L_27d1574; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27ce058u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27ce0bcu: goto L_27ce0bc; case 0x27cfbf0u: goto L_27cfbf0; case 0x27cfc38u: goto L_27cfc38; case 0x27cfd68u: goto L_27cfd68; case 0x27cfda0u: goto L_27cfda0; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ce0bc:;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_27d4560; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x67u);
    if (COND_NE) { goto L_27d17e4; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x73u);
    c->r[0] = c->r[4];
    if (COND_EQ) { c->r[0] = c->r[0] + 0x2u; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6eu);
    if (COND_EQ) { goto L_27d17f4; }
    goto L_27d4560;
L_27ce0f8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27d70c8(c);
L_27ce110:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_EQ) { goto L_27cf1a0; }
    (void)f_subs(c, c->r[0], 0x65u);
    if (COND_NE) { goto L_27d1574; }
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x3eu;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27ce168u; f_27d7cd8(c);
    goto L_27d156c;
L_27ce16c:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x63u;
    (void)f_subs(c, c->r[1], 0x13u);
    if (COND_HI) { goto L_27d1574; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27ce188u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27ce1dcu: goto L_27ce1dc; case 0x27cf62cu: goto L_27cf62c; case 0x27cf664u: goto L_27cf664; case 0x27cf708u: goto L_27cf708; case 0x27cf740u: goto L_27cf740; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ce1dc:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27ce210u; f_27bab48(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d26b8; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27ce22cu; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d2794; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27ce278u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[9] - 0x18u;
    c->r[5] = c->r[9];
L_27ce2a4:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ce2c0; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ce2c0u; f_283b288(c);
L_27ce2c0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ce2d4; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ce2d4u; f_283b288(c);
L_27ce2d4:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27ce2a4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d2a24; }
    { uint32_t ea = c->r[9] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[9] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[9] - 0x30u;
    c->r[14] = 0x27ce30cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[2] = 0x3736a1u;
    ST64(c->r[13] + 128u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[2] = 0x27ce338u + c->r[2];
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = 0x0u;
    c->r[3] = 0xbu;
    c->r[14] = 0x27ce344u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x373679u;
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27ce36cu + c->r[2];
    c->r[0] = c->r[11] - 0x78u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27ce374u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[9] >> 1); }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27ce3b8u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = 0x373589u;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27ce3e0u + c->r[2];
    c->r[0] = c->r[11] - 0x58u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27ce3e8u; f_27c75a8(c);
    goto L_27d13b4;
L_27ce3ec:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4fu);
    if (COND_EQ) { goto L_27cf21c; }
    (void)f_subs(c, c->r[0], 0x71u);
    if (COND_EQ) { goto L_27cf1d8; }
    (void)f_subs(c, c->r[0], 0x6fu);
    if (COND_NE) { goto L_27d1574; }
    c->r[0] = 0x0u;
    c->r[1] = 0x5e02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27ce43cu; f_27d7cd8(c);
    goto L_27d156c;
L_27ce440:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27d500c(c);
L_27ce458:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27ca728(c);
L_27ce470:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x53u;
    (void)f_subs(c, c->r[0], 0x21u);
    if (COND_HI) { goto L_27d1574; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27ce48cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27ce518u: goto L_27ce518; case 0x27cf4ecu: goto L_27cf4ec; case 0x27cf574u: goto L_27cf574; case 0x27cf5bcu: goto L_27cf5bc; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ce518:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x3du;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27ce564u; f_27d7cd8(c);
    goto L_27d156c;
L_27ce568:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x52u;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_HI) { goto L_27d1574; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27ce584u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27cdd10u: goto L_27cdd10; case 0x27ce60cu: goto L_27ce60c; case 0x27cf530u: goto L_27cf530; case 0x27cf5f4u: goto L_27cf5f4; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ce60c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x7cu;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27ce650u; f_27d7cd8(c);
    goto L_27d156c;
L_27ce654:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x4eu;
    (void)f_subs(c, c->r[1], 0x2cu);
    if (COND_HI) { goto L_27d1574; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27ce670u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27ce728u: goto L_27ce728; case 0x27d07a4u: goto L_27d07a4; case 0x27d08f0u: goto L_27d08f0; case 0x27d0934u: goto L_27d0934; case 0x27d0a80u: goto L_27d0a80; case 0x27d0ac4u: goto L_27d0ac4; case 0x27d0afcu: goto L_27d0afc; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ce728:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x26u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27ce76cu; f_27d7cd8(c);
    goto L_27d156c;
L_27ce770:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x5au;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_HI) { goto L_27d1574; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x27ce78cu + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x27cdd10u: goto L_27cdd10; case 0x27ce814u: goto L_27ce814; case 0x27cfdd8u: goto L_27cfdd8; case 0x27d0118u: goto L_27d0118; case 0x27d04b0u: goto L_27d04b0; case 0x27d04ecu: goto L_27d04ec; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27ce814:;
    c->r[2] = c->r[6] - c->r[1];
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x66u);
    if (COND_EQ) { goto L_27d1fd0; }
    (void)f_subs(c, c->r[1], 0x54u);
    if (COND_NE) { goto L_27d1574; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5au);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x27ce880u; f_27ca728(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t r = c->r[1] * c->r[3]; c->r[7] = r; }
    c->r[1] = c->r[2] - c->r[0];
    c->r[2] = 0x14u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[2]); }
    { uint32_t r = c->r[1] * c->r[3]; c->r[4] = r; }
    c->r[1] = 0x3e9b40u;
    c->r[1] = 0x27ce8c8u + c->r[1];
    c->v.d[16] = LD64(c->r[1]);
    c->r[1] = c->r[11] - 0x48u;
    c->r[1] = c->r[1] | 0x1u;
    (void)f_subs(c, c->r[7], c->r[4]);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); }
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[11] - 0x3eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x2eu;
    { uint32_t ea = c->r[11] - 0x3fu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_27cea84; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] + 0xdu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[14] = 0x27ce920u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[0] = c->r[0] | 0x1u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[11] - 0x48u;
    c->r[14] = 0x27ce970u; f_27c75a8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27ce980; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27ce980u; f_283b288(c);
L_27ce980:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27cea84; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] - 0x1u;
    c->r[7] = (c->r[7] << 3);
    c->r[5] = c->r[0] - c->r[1];
    c->r[0] = 0x372ec3u;
    c->r[0] = 0x27ce9acu + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_27ce9ac:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] + 0x25u; }
    c->r[0] = c->r[0] + 0x18u;
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[14] = 0x27ce9d4u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    c->r[14] = 0x27cea0cu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[11] - 0x48u;
    c->r[14] = 0x27cea50u; f_27c75a8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27cea60; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27cea60u; f_283b288(c);
L_27cea60:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cea78; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cea78u; f_283b288(c);
L_27cea78:;
    c->r[7] = c->r[7] + 0x18u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_27ce9ac; }
L_27cea84:;
    c->r[0] = 0x372ed9u;
    c->r[1] = 0x27cea90u + c->r[0];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27cea98u; f_27c75a8(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27ceb24; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[4];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27ceabc:;
    c->r[6] = c->r[5] - 0x18u;
L_27ceac0:;
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ceadc; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ceadcu; f_283b288(c);
L_27ceadc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ceaf0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ceaf0u; f_283b288(c);
L_27ceaf0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_27ceac0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] - 0x1u;
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_27ceabc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
L_27ceb24:;
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x47u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[11] - 0x45u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[2] = c->r[2] | 0x5u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 8);
    { uint32_t ea = c->r[11] - 0x43u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[7] | (c->r[0] << 8);
    { uint32_t ea = c->r[11] - 0x41u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    c->r[2] = c->r[6] | (c->r[2] << 8);
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x46u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x46u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_27d3674; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x86u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[6] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[6] + 0x7u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 8);
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    c->r[7] = c->r[6] + 0xdu;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[6] + 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[6] + 0x13u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 8);
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x12u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d4728;
L_27cec78:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x75u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cec98u; f_27cdb70(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cecb4u; f_27cdb70(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27d0b84; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cecd0u; f_27cdb70(c);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[1] = c->r[8] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    if (COND_EQ) { goto L_27d174c; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_27d1574; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[8] - 0xbu; }
    c->r[0] = c->r[8] - 0x18u;
    c->r[14] = 0x27ced1cu; f_27c75a8(c);
    { uint32_t ea = c->r[8] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27ced48:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ced64; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ced64u; f_283b288(c);
L_27ced64:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ced78; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ced78u; f_283b288(c);
L_27ced78:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27ced48; }
    { uint32_t ea = c->r[8] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[8] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27ceda4u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27cedd0:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cedec; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cedecu; f_283b288(c);
L_27cedec:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cee00; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cee00u; f_283b288(c);
L_27cee00:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cedd0; }
    { uint32_t ea = c->r[8] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[8] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27cee2cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[6] = (c->r[0] >> 1); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d4754; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d1c7c; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d1ca0;
L_27cee94:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x4cu;
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_HI) { goto L_27d1574; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27ceeb0u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27cef58u: goto L_27cef58; case 0x27d0304u: goto L_27d0304; case 0x27d0358u: goto L_27d0358; case 0x27d06d8u: goto L_27d06d8; case 0x27d0710u: goto L_27d0710; case 0x27d076cu: goto L_27d076c; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27cef58:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2bu;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cef9cu; f_27d7cd8(c);
    goto L_27d156c;
L_27cefa0:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x49u;
    (void)f_subs(c, c->r[0], 0x24u);
    if (COND_HI) { goto L_27d1574; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27cefbcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27cf054u: goto L_27cf054; case 0x27cf7f4u: goto L_27cf7f4; case 0x27cfa48u: goto L_27cfa48; case 0x27cfae0u: goto L_27cfae0; case 0x27cfb18u: goto L_27cfb18; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27cf054:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2du;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf098u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf09c:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x4du;
    (void)f_subs(c, c->r[1], 0x26u);
    if (COND_HI) { goto L_27d1574; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27cf0b8u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27cf158u: goto L_27cf158; case 0x27cf834u: goto L_27cf834; case 0x27cfa90u: goto L_27cfa90; case 0x27cfb74u: goto L_27cfb74; case 0x27cfbacu: goto L_27cfbac; case 0x27d1574u: goto L_27d1574; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27cf158:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x25u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf19cu; f_27d7cd8(c);
    goto L_27d156c;
L_27cf1a0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3e02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf1d4u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf1d8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf218u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf21c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x5eu;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf260u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf270:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x77u);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cf2a4u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27cf2dcu; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x37275au;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27cf308u + c->r[1];
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = 0x0u;
    c->r[3] = 0x6u;
    c->r[14] = 0x27cf314u; f_27c73c8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[5] | (c->r[6] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[6] = (c->r[0] >> 24);
    { uint32_t ea = c->r[11] - 0x52u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[0] >> 8);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[7] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27cf3d0u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cf3e4; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cf3e4u; f_283b288(c);
L_27cf3e4:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cf3f8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cf3f8u; f_283b288(c);
L_27cf3f8:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cf40c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cf40cu; f_283b288(c);
L_27cf40c:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27cf414:;
    c->r[0] = 0x77u;
    { uint32_t ea = c->r[11] - 0x2cu; ST8(ea, c->r[0]); }
    c->r[0] = 0x6874u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6f720000u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d0e74; }
    c->r[2] = 0xau;
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d26b0;
L_27cf4ec:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf52cu; f_27d7cd8(c);
    goto L_27d156c;
L_27cf530:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x7cu;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf570u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf574:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x3cu;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf5b8u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf5bc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3c02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf5f0u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf5f4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x7c02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf628u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf62c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2c02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf660u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf664:;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6cu);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cf698u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[6]); }
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27cf6d8u; f_27c75a8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d29a4; }
    { uint32_t ea = c->r[9] - 0xcu; ST16(ea, c->r[0]); }
    c->r[7] = c->r[9] - 0x4u;
    goto L_27d3b94;
L_27cf708:;
    c->r[0] = 0x0u;
    c->r[1] = 0x7e02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf73cu; f_27d8298(c);
    goto L_27d156c;
L_27cf740:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x76u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[10] + 0x3fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x3fu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x27cf784u; f_27bab48(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { (void)f_subs(c, c->r[7], c->r[6]); }
    { uint32_t ea = c->r[10] + 0x3fu; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27d289c; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d2bfc; }
    { uint32_t ea = c->r[10] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27d3418; }
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27d3ea0;
L_27cf7f4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2d02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cf828u; f_27d7cd8(c);
    goto L_27d156c;
L_27cf834:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x72u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cf868u; f_27bab48(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27d26b8; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cf884u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d2794; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27cf8d0u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[9] - 0x18u;
    c->r[5] = c->r[9];
L_27cf8fc:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cf918; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cf918u; f_283b288(c);
L_27cf918:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cf92c; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cf92cu; f_283b288(c);
L_27cf92c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27cf8fc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d2a24; }
    { uint32_t ea = c->r[9] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[9] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[9] - 0x30u;
    c->r[14] = 0x27cf964u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[2] = 0x3720a2u;
    ST64(c->r[13] + 128u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[2] = 0x27cf990u + c->r[2];
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = 0x0u;
    c->r[3] = 0x11u;
    c->r[14] = 0x27cf99cu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x372021u;
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27cf9c4u + c->r[2];
    c->r[0] = c->r[11] - 0x78u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27cf9ccu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[9] >> 1); }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27cfa10u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = 0x371f31u;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27cfa38u + c->r[2];
    c->r[0] = c->r[11] - 0x58u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27cfa40u; f_27c75a8(c);
    goto L_27d13b4;
L_27cfa48:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2au;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfa8cu; f_27d7cd8(c);
    goto L_27d156c;
L_27cfa90:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3eu;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x3du;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfadcu; f_27d7cd8(c);
    goto L_27d156c;
L_27cfae0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2a02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfb14u; f_27d7cd8(c);
    goto L_27d156c;
L_27cfb18:;
    c->r[7] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d0bdc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27d0bdc; }
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x2du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x3u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfb70u; f_27d8298(c);
    goto L_27d156c;
L_27cfb74:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2502u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfba8u; f_27d7cd8(c);
    goto L_27d156c;
L_27cfbac:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3eu;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfbecu; f_27d7cd8(c);
    goto L_27d156c;
L_27cfbf0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x21u;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfc34u; f_27d7cd8(c);
    goto L_27d156c;
L_27cfc38:;
    c->r[8] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[8];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cfc4cu; f_27cdb70(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[8];
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_EQ) { goto L_27d2d08; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[0] = c->r[8];
    if (COND_EQ) { goto L_27d2d08; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27cfc8cu; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = 0x371d6cu;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[6]); }
    c->r[2] = 0x27cfcb8u + c->r[1];
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = 0x0u;
    c->r[3] = 0xau;
    c->r[14] = 0x27cfcc4u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    c->r[2] = 0x371c7du;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    c->r[1] = 0x27cfcecu + c->r[2];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27cfcf4u; f_27c75a8(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[12] | (c->r[3] << 8);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[2] = c->r[6] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[10];
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d1f64; }
    { uint32_t ea = c->r[10] - 0x18u; ST16(ea, c->r[1]); }
    c->r[7] = c->r[10] - 0x10u;
    goto L_27d2c88;
L_27cfd68:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2d02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfd9cu; f_27d8298(c);
    goto L_27d156c;
L_27cfda0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2102u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27cfdd4u; f_27d8298(c);
    goto L_27d156c;
L_27cfdd8:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cfe0cu; f_27bab48(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27cfe28u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27cfe74u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27cfea0:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cfebc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cfebcu; f_283b288(c);
L_27cfebc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cfed0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cfed0u; f_283b288(c);
L_27cfed0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cfea0; }
    { uint32_t ea = c->r[8] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[8] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27cfefcu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[2] = 0x371b1cu;
    ST64(c->r[13] + 128u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[2] = 0x27cff28u + c->r[2];
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = 0x0u;
    c->r[3] = 0xcu;
    c->r[14] = 0x27cff34u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x371a89u;
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27cff5cu + c->r[2];
    c->r[0] = c->r[11] - 0x78u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27cff64u; f_27c75a8(c);
    c->r[7] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[9];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27cffacu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = 0x371995u;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27cffd4u + c->r[2];
    c->r[0] = c->r[11] - 0x58u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27cffdcu; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[5] | (c->r[6] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[14]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x56u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d009cu; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d00b0; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d00b0u; f_283b288(c);
L_27d00b0:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d00c4; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d00c4u; f_283b288(c);
L_27d00c4:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d00d8; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d00d8u; f_283b288(c);
L_27d00d8:;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d00ec; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d00ecu; f_283b288(c);
L_27d00ec:;
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0100; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0100u; f_283b288(c);
L_27d0100:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1a8c; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27d1a88;
L_27d0118:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7au);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d014cu; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d0184u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x3718a1u;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d01b0u + c->r[1];
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0x8u;
    c->r[14] = 0x27d01bcu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x371785u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d01e4u + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d01ecu; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[5] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[6]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[11] - 0x62u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d02acu; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d02c0; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d02c0u; f_283b288(c);
L_27d02c0:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d02d4; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d02d4u; f_283b288(c);
L_27d02d4:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d02e8; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d02e8u; f_283b288(c);
L_27d02e8:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d02fc; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d02fcu; f_283b288(c);
L_27d02fc:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d0304:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3eu;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2du;
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[1]); }
    c->r[1] = 0x2au;
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d0354u; f_27d7cd8(c);
    goto L_27d156c;
L_27d0358:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x70u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d038cu; f_27cdb70(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d03a8u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d03f4u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27d0420:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d043c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d043cu; f_283b288(c);
L_27d043c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0450; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0450u; f_283b288(c);
L_27d0450:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27d0420; }
    c->r[1] = 0x3715c3u;
    c->r[0] = c->r[8] - 0x30u;
    c->r[1] = 0x27d046cu + c->r[1];
    c->r[2] = 0x2u;
    c->r[14] = 0x27d0470u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[3] - 0x18u;
    c->r[14] = 0x27d049cu; f_27c75a8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27d04acu; f_283b288(c);
    goto L_27d1574;
L_27d04b0:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x70u);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d04e4u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    goto L_27d1570;
L_27d04ec:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0520u; f_27bab48(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d0558u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x3714cdu;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d0584u + c->r[1];
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0x8u;
    c->r[14] = 0x27d0590u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x3713b1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d05b8u + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d05c0u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[5] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[6]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[11] - 0x62u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d0680u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0694; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0694u; f_283b288(c);
L_27d0694:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d06a8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d06a8u; f_283b288(c);
L_27d06a8:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d06bc; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d06bcu; f_283b288(c);
L_27d06bc:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d06d0; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d06d0u; f_283b288(c);
L_27d06d0:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d06d8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2b02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d070cu; f_27d7cd8(c);
    goto L_27d156c;
L_27d0710:;
    c->r[7] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d1584; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27d1584; }
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x2bu;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x3u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d0768u; f_27d8298(c);
    goto L_27d156c;
L_27d076c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2b02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d07a0u; f_27d8298(c);
    goto L_27d156c;
L_27d07a4:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x61u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d07d8u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d0810u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x371193u;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d083cu + c->r[1];
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = 0x0u;
    c->r[3] = 0x9u;
    c->r[14] = 0x27d0848u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x3710f9u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d0870u + c->r[2];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d0878u; f_27c75a8(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[6] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[3] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] - 0x18u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d2a70; }
    { uint32_t ea = c->r[4] - 0x18u; ST16(ea, c->r[1]); }
    c->r[7] = c->r[4] - 0x10u;
    goto L_27d41d8;
L_27d08f0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3d02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d0924u; f_27d7cd8(c);
    goto L_27d156c;
L_27d0934:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x61u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7au);
    if (COND_NE) { goto L_27d1574; }
    c->r[5] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0968u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d09a0u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x371003u;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d09ccu + c->r[1];
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = 0x0u;
    c->r[3] = 0x9u;
    c->r[14] = 0x27d09d8u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x370f69u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d0a00u + c->r[2];
    c->r[0] = c->r[11] - 0x48u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d0a08u; f_27c75a8(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[6] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[3] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] - 0x18u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d2af4; }
    { uint32_t ea = c->r[4] - 0x18u; ST16(ea, c->r[1]); }
    c->r[7] = c->r[4] - 0x10u;
    goto L_27d4290;
L_27d0a80:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[3] = 0x26u;
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x1u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d0ac0u; f_27d7cd8(c);
    goto L_27d156c;
L_27d0ac4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2602u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d0af8u; f_27d8298(c);
    goto L_27d156c;
L_27d0afc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2602u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d0b30u; f_27d7cd8(c);
    goto L_27d156c;
L_27d0b34:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[5] = c->r[6] - 0x18u;
L_27d0b44:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0b60; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0b60u; f_283b288(c);
L_27d0b60:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0b74; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0b74u; f_283b288(c);
L_27d0b74:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_27d0b44; }
    goto L_27d1574;
L_27d0b84:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[5] = c->r[6] - 0x18u;
L_27d0b94:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0bb0; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0bb0u; f_283b288(c);
L_27d0bb0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0bc4; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0bc4u; f_283b288(c);
L_27d0bc4:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_27d0b94; }
    goto L_27d1574;
L_27d0bdc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0becu; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d0c24u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x370d34u;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d0c50u + c->r[1];
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x27d0c5cu; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x370d0du;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d0c84u + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27d0c8cu; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[5] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x76u; ST8(ea, c->r[6]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x74u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x76u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x76u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x74u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d0d4cu; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0d60; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0d60u; f_283b288(c);
L_27d0d60:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0d74; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0d74u; f_283b288(c);
L_27d0d74:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0d88; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0d88u; f_283b288(c);
L_27d0d88:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0d9c; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0d9cu; f_283b288(c);
L_27d0d9c:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d0da4:;
    c->r[5] = c->r[1] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0db8u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27d1574; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_27d21cc; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[1]); }
    c->r[1] = 0x3au;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2du; ST8(ea, c->r[2]); }
    goto L_27d21dc;
L_27d0e0c:;
    c->r[5] = c->r[1] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0e20u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27d1574; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_27d22f8; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[1]); }
    c->r[1] = 0x3au;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2du; ST8(ea, c->r[2]); }
    goto L_27d2308;
L_27d0e74:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27d4744; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27d0ec0; }
    c->r[9] = (c->r[1] << 1);
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d24f8; }
L_27d0ec0:;
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d1aa0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d0ef0u; f_283b27c(c);
    goto L_27d2500;
L_27d0f00:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0f34u; f_27cdb70(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d0f50u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d0f9cu; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[6] - 0x18u;
L_27d0fc4:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0fe0; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0fe0u; f_283b288(c);
L_27d0fe0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d0ff4; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d0ff4u; f_283b288(c);
L_27d0ff4:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_27d0fc4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { c->r[6] = (c->r[0] >> 1); }
    c->r[0] = c->r[6] + 0x2u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d4760; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d3184; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d31a8;
L_27d104c:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d1080u; f_27cdb70(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d2834; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d109cu; f_27d8714(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d28bc; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d10e8u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[7] - 0x18u;
L_27d1110:;
    c->r[6] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d112c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d112cu; f_283b288(c);
L_27d112c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1140; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1140u; f_283b288(c);
L_27d1140:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27d1110; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d3498; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[7] = (c->r[9] >> 1); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d4768; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d3514; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[11] - 0x30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d3538;
L_27d11a8:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d11dcu; f_27bab48(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_27d2834; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d11f8u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d28bc; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d1244u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[9] - 0x18u;
    c->r[5] = c->r[9];
L_27d1270:;
    c->r[6] = c->r[5] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d128c; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d128cu; f_283b288(c);
L_27d128c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d12a0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d12a0u; f_283b288(c);
L_27d12a0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27d1270; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d2a24; }
    { uint32_t ea = c->r[9] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[9] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[9] - 0x30u;
    c->r[14] = 0x27d12d8u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[2] = 0x3706e7u;
    ST64(c->r[13] + 128u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[2] = 0x27d1304u + c->r[2];
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = 0x0u;
    c->r[3] = 0xdu;
    c->r[14] = 0x27d1310u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x3706adu;
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27d1338u + c->r[2];
    c->r[0] = c->r[11] - 0x78u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27d1340u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[9] >> 1); }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27d1384u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = 0x3705bdu;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27d13acu + c->r[2];
    c->r[0] = c->r[11] - 0x58u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d13b4u; f_27c75a8(c);
L_27d13b4:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[6] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[14]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x56u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d1474u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1488; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1488u; f_283b288(c);
L_27d1488:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d149c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d149cu; f_283b288(c);
L_27d149c:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d14b0; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d14b0u; f_283b288(c);
L_27d14b0:;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d14c4; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d14c4u; f_283b288(c);
L_27d14c4:;
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d14d8; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d14d8u; f_283b288(c);
L_27d14d8:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d14ec; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d14ecu; f_283b288(c);
L_27d14ec:;
    c->r[6] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d2a38; }
    goto L_27d2a40;
L_27d14fc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2a02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d1530u; f_27d8298(c);
    goto L_27d156c;
L_27d1538:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2f02u;
    c->r[7] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x46u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[11] - 0x48u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[3] = c->r[10];
    c->r[14] = 0x27d156cu; f_27d7cd8(c);
L_27d156c:;
    (void)f_subs(c, c->r[0], c->r[7]);
L_27d1570:;
    if (COND_NE) { c->r[4] = c->r[0]; }
L_27d1574:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27d1584:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d1594u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d15ccu; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x37038cu;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d15f8u + c->r[1];
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x27d1604u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x37036du;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d162cu + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27d1634u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[5] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[6]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x6eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x6eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d16f4u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1708; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1708u; f_283b288(c);
L_27d1708:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d171c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d171cu; f_283b288(c);
L_27d171c:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1730; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1730u; f_283b288(c);
L_27d1730:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1744; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1744u; f_283b288(c);
L_27d1744:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d174c:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    c->r[6] = c->r[8] - 0x18u;
    c->r[7] = c->r[8];
L_27d175c:;
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1778; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1778u; f_283b288(c);
L_27d1778:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d178c; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d178cu; f_283b288(c);
L_27d178c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27d175c; }
    c->r[5] = c->r[8] - 0x30u;
L_27d179c:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d17b8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d17b8u; f_283b288(c);
L_27d17b8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d17cc; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d17ccu; f_283b288(c);
L_27d17cc:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_27d179c; }
    goto L_27d1574;
L_27d17e4:;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[1], 0x6eu);
    if (COND_NE) { goto L_27d4560; }
L_27d17f4:;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x77u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x61u); }
    if (COND_NE) { goto L_27d4560; }
    c->r[7] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_27d4560; }
    c->r[5] = 0x0u;
L_27d181c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_27d26c0; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d1838u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[1] = 0x0u;
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = 0x0u;
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_EQ) { goto L_27d4560; }
    c->r[1] = c->r[2] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[5] = c->r[5] | c->r[1];
    c->r[7] = c->r[0];
    if (COND_NE) { goto L_27d181c; }
    goto L_27d4560;
L_27d1874:;
    c->r[5] = c->r[7] + 0x11u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d1884u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
L_27d1898:;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x80u;
    c->r[2] = c->r[7];
    c->r[14] = 0x27d18c8u; f_27c75a8(c);
    c->r[1] = 0x3700aeu;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27d18d8u + c->r[1];
    c->r[2] = 0x2u;
    c->r[14] = 0x27d18dcu; f_27c75a8(c);
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[9];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x78u;
    c->r[14] = 0x27d1924u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x37003du;
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27d194cu + c->r[2];
    c->r[0] = c->r[11] - 0x68u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d1954u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[5] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[6] | (c->r[7] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x7eu; ST8(ea, c->r[14]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x7eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x7eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d1a14u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1a28; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1a28u; f_283b288(c);
L_27d1a28:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1a40; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1a40u; f_283b288(c);
L_27d1a40:;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1a54; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1a54u; f_283b288(c);
L_27d1a54:;
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1a68; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1a68u; f_283b288(c);
L_27d1a68:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1a7c; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1a7cu; f_283b288(c);
L_27d1a7c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d1a8c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
L_27d1a88:;
    c->r[14] = 0x27d1a8cu; f_283b288(c);
L_27d1a8c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27d1a9cu; f_283b288(c);
    goto L_27d1574;
L_27d1aa0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d2500;
L_27d1ab4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d1ac4u; f_27bab48(c);
L_27d1ac4:;
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d1afcu; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x36ff32u;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d1b28u + c->r[1];
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0x7u;
    c->r[14] = 0x27d1b34u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x36fe0du;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d1b5cu + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d1b64u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[5] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[6]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[11] - 0x62u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d1c24u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1c38; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1c38u; f_283b288(c);
L_27d1c38:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1c4c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1c4cu; f_283b288(c);
L_27d1c4c:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1c60; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1c60u; f_283b288(c);
L_27d1c60:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1c74; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1c74u; f_283b288(c);
L_27d1c74:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d1c7c:;
    c->r[5] = c->r[6] + 0x11u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d1c8cu; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
L_27d1ca0:;
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x78u;
    c->r[1] = c->r[9];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[2] = c->r[6];
    c->r[14] = 0x27d1cd0u; f_27c75a8(c);
    c->r[1] = 0x36fcc1u;
    c->r[1] = 0x27d1cdcu + c->r[1];
    c->r[2] = 0x5u;
    c->r[14] = 0x27d1ce0u; f_27c75a8(c);
    c->r[6] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[13] + 64u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x68u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x40u;
    c->r[14] = 0x27d1d28u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    ST64(c->r[13] + 80u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    c->r[2] = 0x36fc47u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    c->r[1] = 0x27d1d5cu + c->r[2];
    c->r[0] = c->r[13] + 0x50u;
    c->r[2] = 0x5u;
    c->r[14] = 0x27d1d64u; f_27c75a8(c);
    c->r[5] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[13] + 128u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[9] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x80u;
    c->r[14] = 0x27d1dacu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[2] = 0x36fb95u;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = 0x27d1dd4u + c->r[2];
    c->r[0] = c->r[11] - 0x58u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d1ddcu; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[5] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[7] | (c->r[6] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x66u; ST8(ea, c->r[14]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x66u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x66u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x64u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d1e9cu; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1eb0; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1eb0u; f_283b288(c);
L_27d1eb0:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1ec8; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1ec8u; f_283b288(c);
L_27d1ec8:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1edc; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1edcu; f_283b288(c);
L_27d1edc:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1ef0; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1ef0u; f_283b288(c);
L_27d1ef0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1f04; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1f04u; f_283b288(c);
L_27d1f04:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1f18; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1f18u; f_283b288(c);
L_27d1f18:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1f2c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1f2cu; f_283b288(c);
L_27d1f2c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27d1f3c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1f3cu; f_283b288(c);
L_27d1f3c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d1f50; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1f50u; f_283b288(c);
L_27d1f50:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d1f60u; f_283b288(c);
    goto L_27d1574;
L_27d1f64:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[2] = 0xau;
    c->r[3] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d1f9c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[3] = c->r[0] - 0x1u;
L_27d1f9c:;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d2740; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[9]);
    c->r[1] = (c->r[9] >> 1) & 0x7fu;
    c->r[12] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[2] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_27d274c; }
    goto L_27d2754;
L_27d1fd0:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27d1574; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x73u);
    if (COND_NE) { goto L_27d1574; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5au);
    if (COND_NE) { goto L_27d1574; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x66u);
    if (COND_NE) { goto L_27d1574; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d2010u; f_27d70c8(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d2048u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x3e6394u;
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d2074u + c->r[1];
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = 0x0u;
    c->r[3] = 0xau;
    c->r[14] = 0x27d2080u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x36f8c1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d20a8u + c->r[2];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d20b0u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[5] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[6]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x86u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d2170u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2184; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2184u; f_283b288(c);
L_27d2184:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2198; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2198u; f_283b288(c);
L_27d2198:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d21ac; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d21acu; f_283b288(c);
L_27d21ac:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d21c0; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d21c0u; f_283b288(c);
L_27d21c0:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d21cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
L_27d21dc:;
    c->r[0] = 0x36f78au;
    c->r[1] = 0x27d21e8u + c->r[0];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x9u;
    c->r[14] = 0x27d21f0u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d2234u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = c->r[8];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x48u;
    c->r[14] = 0x27d2278u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[6] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[3] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d241c; }
    { uint32_t ea = c->r[10] - 0x18u; ST16(ea, c->r[1]); }
    c->r[9] = c->r[10] - 0x10u;
    goto L_27d3260;
L_27d22f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
L_27d2308:;
    c->r[0] = 0x36f668u;
    c->r[1] = 0x27d2314u + c->r[0];
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = 0x7u;
    c->r[14] = 0x27d231cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d2360u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x58u;
    c->r[1] = c->r[8];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x48u;
    c->r[14] = 0x27d23a4u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[6] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[3] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d2488; }
    { uint32_t ea = c->r[10] - 0x18u; ST16(ea, c->r[1]); }
    c->r[9] = c->r[10] - 0x10u;
    goto L_27d3330;
L_27d241c:;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    c->r[8] = 0xau;
    c->r[7] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] - 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2454; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[7] = c->r[0] - 0x1u;
L_27d2454:;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d279c; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[1] = (c->r[5] >> 1) & 0x7fu;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[8] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d27a8; }
    goto L_27d27b0;
L_27d2488:;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    c->r[8] = 0xau;
    c->r[7] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] - 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d24c0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[7] = c->r[0] - 0x1u;
L_27d24c0:;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d27e8; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[1] = (c->r[5] >> 1) & 0x7fu;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[8] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27d27f4; }
    goto L_27d27fc;
L_27d24f8:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
L_27d2500:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0xau;
    c->r[1] = c->r[0];
    c->r[5] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[5] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27d2614; }
L_27d25bc:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27d25bc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27d2618;
L_27d2614:;
    c->r[7] = c->r[6];
L_27d2618:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d2664; }
L_27d262c:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2640; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2640u; f_283b288(c);
L_27d2640:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2658; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2658u; f_283b288(c);
L_27d2658:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27d262c; }
L_27d2664:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d26b0; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27d26a8; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27d26a8; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27d26b0;
L_27d26a8:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d26b0u; f_283b288(c);
L_27d26b0:;
    c->r[4] = c->r[4] + 0x2u;
    goto L_27d1574;
L_27d26b8:;
    c->r[8] = c->r[4];
    goto L_27d1574;
L_27d26c0:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d26d4u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[7] = c->r[0];
    if (COND_NE) { (void)f_subs(c, c->r[7], c->r[6]); }
    if (COND_EQ) { goto L_27d4560; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6] - c->r[7];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LT) { goto L_27d28c8; }
    (void)f_subs(c, c->r[0], 0x70u);
    if (COND_NE) { goto L_27d28c8; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x69u);
    if (COND_NE) { goto L_27d4560; }
    c->r[7] = c->r[7] + 0x2u;
L_27d270c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_27d2da8; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d2728u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27d4560; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[7] = c->r[0];
    if (COND_NE) { goto L_27d270c; }
    goto L_27d4560;
L_27d2740:;
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_27d2754; }
L_27d274c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27d2c88;
L_27d2754:;
    (void)f_subs(c, c->r[2], 0xau);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27d283c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_27d2a4c; }
    c->r[1] = c->r[9] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[3];
    c->r[9] = c->r[3];
    c->r[14] = 0x27d278cu; f_283aa78(c);
    c->r[0] = c->r[9];
    goto L_27d2a58;
L_27d2794:;
    c->r[8] = c->r[4];
    goto L_27d1574;
L_27d279c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_27d27b0; }
L_27d27a8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27d3260;
L_27d27b0:;
    c->r[0] = c->r[13] + 0x18u;
    (void)f_subs(c, c->r[8], 0xau);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[12]); }
    if (COND_NE) { goto L_27d2914; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_27d2b70; }
    c->r[1] = c->r[5] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27d27e4u; f_283aa78(c);
    goto L_27d2b78;
L_27d27e8:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_27d27fc; }
L_27d27f4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27d3330;
L_27d27fc:;
    c->r[0] = c->r[13] + 0x18u;
    (void)f_subs(c, c->r[8], 0xau);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[12]); }
    if (COND_NE) { goto L_27d295c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_27d2b90; }
    c->r[1] = c->r[5] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[6];
    c->r[14] = 0x27d2830u; f_283aa78(c);
    goto L_27d2b98;
L_27d2834:;
    c->r[8] = c->r[4];
    goto L_27d1574;
L_27d283c:;
    c->r[0] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[14] = 0x27d2858u; f_283b27c(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27d2870; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27d2c7c; }
L_27d2870:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d2c50; }
    c->r[0] = c->r[9] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[5] + 0x1u;
    c->r[0] = c->r[3];
    c->r[5] = c->r[3];
    c->r[14] = 0x27d2898u; f_283aa78(c);
    goto L_27d2c64;
L_27d289c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d28acu; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_27d3ea8; }
    goto L_27d1574;
L_27d28bc:;
    c->r[8] = c->r[4];
    goto L_27d1574;
L_27d28c8:;
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27d4560; }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_27d2f08;
L_27d2914:;
    c->r[0] = c->r[8] + 0x1u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d2924u; f_283b27c(c);
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_HI) { goto L_27d2934; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d3254; }
L_27d2934:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d322c; }
    c->r[0] = c->r[5] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[4] + 0x1u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d2958u; f_283aa78(c);
    goto L_27d323c;
L_27d295c:;
    c->r[0] = c->r[8] + 0x1u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d296cu; f_283b27c(c);
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_HI) { goto L_27d297c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d3324; }
L_27d297c:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d32fc; }
    c->r[0] = c->r[5] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    c->r[1] = c->r[4] + 0x1u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27d29a0u; f_283aa78(c);
    goto L_27d330c;
L_27d29a4:;
    c->r[2] = c->r[9];
    c->r[8] = 0xau;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d29e4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_27d29e4:;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_27d2bb0; }
    c->r[0] = (c->r[7] >> 1) & 0x7fu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27d2bb8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[8] = c->r[0] - 0x1u;
    goto L_27d2bb8;
L_27d2a24:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[6] = 0x1u;
    c->r[8] = c->r[4];
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2a40; }
L_27d2a38:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2a40u; f_283b288(c);
L_27d2a40:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[8]; }
    goto L_27d1574;
L_27d2a4c:;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[3];
L_27d2a58:;
    c->r[14] = 0x27d2a5cu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27d2c84;
L_27d2a70:;
    c->r[7] = c->r[4];
    c->r[9] = 0xau;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[5] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2aa4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[5] = c->r[0] - 0x1u;
L_27d2aa4:;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_27d2d14; }
    c->r[0] = (c->r[8] >> 1) & 0x7fu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27d2d1c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[9] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_NE) { goto L_27d2d24; }
    goto L_27d41d8;
L_27d2af4:;
    c->r[7] = c->r[4];
    c->r[9] = 0xau;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[5] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2b28; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[8];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[5] = c->r[0] - 0x1u;
L_27d2b28:;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_27d2d58; }
    c->r[0] = (c->r[8] >> 1) & 0x7fu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { goto L_27d2d60; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[0] = c->r[0] & 0xf0u;
    c->r[9] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_NE) { goto L_27d2d68; }
    goto L_27d4290;
L_27d2b70:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d2b78:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d2b80u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27d3254;
L_27d2b90:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d2b98:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d2ba0u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27d3324;
L_27d2bb0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_27d2bb8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_EQ) { goto L_27d3b90; }
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_NE) { goto L_27d33c8; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27d3654; }
    c->r[1] = c->r[7] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[8];
    c->r[14] = 0x27d2bf8u; f_283aa78(c);
    goto L_27d365c;
L_27d2bfc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_27d2c00:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d2c10u; f_27cdb70(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[1] = c->r[1] | c->r[2];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27d1574; }
    if (COND_EQ) { c->r[7] = c->r[0]; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[1], 0x45u);
    if (COND_NE) { goto L_27d2c00; }
    goto L_27d3ea4;
L_27d2c50:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d2c64u; f_283b288(c);
L_27d2c64:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[10] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[5]); }
L_27d2c7c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
L_27d2c84:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27d2c88:;
    { uint32_t ea = c->r[10] - 0x18u; ST8(ea, c->r[14]); }
    c->r[3] = c->r[10] - 0x17u;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x52u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[10] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[10] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[10] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[10] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2cf0; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2cf0u; f_283b288(c);
L_27d2cf0:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2d04; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2d04u; f_283b288(c);
L_27d2d04:;
    c->r[0] = c->r[9];
L_27d2d08:;
    (void)f_subs(c, c->r[0], c->r[8]);
    goto L_27d1570;
L_27d2d14:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_27d2d1c:;
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_EQ) { goto L_27d41d8; }
L_27d2d24:;
    (void)f_subs(c, c->r[9], 0xau);
    if (COND_NE) { goto L_27d35bc; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27d3b10; }
    c->r[1] = c->r[8] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[5];
    c->r[14] = 0x27d2d54u; f_283aa78(c);
    goto L_27d3b18;
L_27d2d58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_27d2d60:;
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_EQ) { goto L_27d4290; }
L_27d2d68:;
    (void)f_subs(c, c->r[9], 0xau);
    if (COND_NE) { goto L_27d3608; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_27d3b30; }
    c->r[1] = c->r[8] & 0xfeu;
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[1] >> 1);
    c->r[1] = c->r[5];
    c->r[14] = 0x27d2d98u; f_283aa78(c);
    goto L_27d3b38;
L_27d2da8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27d4560; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d2df4u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = c->r[7] | (c->r[6] << 8);
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[11] - 0x48u;
    c->r[7] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 24);
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    c->r[3] = c->r[11] - 0x48u;
    c->r[7] = (c->r[1] >> 8);
    c->r[3] = c->r[3] | 0x5u;
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_27d2eb8:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2ed8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2ed4u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27d2ed8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2ef0; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2eecu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27d2ef0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_27d2eb8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_27d2f08:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27d3174; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[7] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[7] - 0x18u;
    c->r[14] = 0x27d2f3cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
L_27d2f70:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2f90; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2f8cu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27d2f90:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d2fa8; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d2fa4u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27d2fa8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_27d2f70; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[11] - 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d3120; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27d3b04; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[7] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[7] - 0x30u;
    c->r[14] = 0x27d3014u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = c->r[7] | (c->r[6] << 8);
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[11] - 0x58u;
    c->r[7] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 24);
    { uint32_t ea = c->r[11] - 0x58u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[0] >> 8);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    c->r[3] = c->r[11] - 0x58u;
    c->r[7] = (c->r[1] >> 8);
    c->r[3] = c->r[3] | 0x5u;
    { uint32_t ea = c->r[11] - 0x62u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x57u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x53u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x51u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x55u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_27d30d8:;
    c->r[7] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d30f8; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d30f4u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27d30f8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3110; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d310cu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27d3110:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_27d30d8; }
L_27d3120:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27d3150; }
    c->r[0] = 0x36e814u;
    c->r[1] = 0x27d3148u + c->r[0];
    c->r[0] = c->r[11] - 0x68u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27d3150u; f_27cda3c(c);
L_27d3150:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x61u);
    if (COND_NE) { goto L_27d34b0; }
    c->r[0] = 0x36e8b8u;
    c->r[1] = 0x27d3168u + c->r[0];
    c->r[0] = c->r[11] - 0x68u;
    c->r[2] = 0x3u;
    c->r[14] = 0x27d3170u; f_27c75a8(c);
    goto L_27d34c4;
L_27d3174:;
    c->r[6] = 0x1u;
    c->r[5] = c->r[4];
    goto L_27d4544;
L_27d3184:;
    c->r[5] = c->r[6] + 0x12u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d3194u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27d31a8:;
    c->r[1] = 0x2au;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x2eu;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[7];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[6];
    c->r[14] = 0x27d31e0u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[6] - 0x18u;
    c->r[14] = 0x27d3204u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3218; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3218u; f_283b288(c);
L_27d3218:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27d1574; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27d3228u; f_283b288(c);
    goto L_27d1574;
L_27d322c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d323cu; f_283b288(c);
L_27d323c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[10] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[7]); }
L_27d3254:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27d3260:;
    { uint32_t ea = c->r[10] - 0x18u; ST8(ea, c->r[12]); }
    c->r[3] = c->r[10] - 0x17u;
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x62u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[10] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[10] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[10] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[10] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d32c8; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27d32c8u; f_283b288(c);
L_27d32c8:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d32dc; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d32dcu; f_283b288(c);
L_27d32dc:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d32f0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d32f0u; f_283b288(c);
L_27d32f0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d1574;
L_27d32fc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d330cu; f_283b288(c);
L_27d330c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[10] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[7]); }
L_27d3324:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27d3330:;
    { uint32_t ea = c->r[10] - 0x18u; ST8(ea, c->r[12]); }
    c->r[3] = c->r[10] - 0x17u;
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x62u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[10] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[10] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[10] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[10] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x62u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x64u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d3398; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27d3398u; f_283b288(c);
L_27d3398:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d33ac; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d33acu; f_283b288(c);
L_27d33ac:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d33c0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d33c0u; f_283b288(c);
L_27d33c0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d1574;
L_27d33c8:;
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d33d4u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_HI) { goto L_27d33f0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d3b90; }
L_27d33f0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d3b5c; }
    c->r[0] = c->r[7] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x1u;
    c->r[14] = 0x27d3414u; f_283aa78(c);
    goto L_27d3b74;
L_27d3418:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27d4770; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27d3464; }
    c->r[9] = (c->r[1] << 1);
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d3d68; }
L_27d3464:;
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d3700; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d3494u; f_283b27c(c);
    goto L_27d3d70;
L_27d3498:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[5] = 0x1u;
    c->r[8] = c->r[4];
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27d35a8; }
    goto L_27d35b0;
L_27d34b0:;
    c->r[0] = 0x36c5c4u;
    c->r[1] = 0x27d34bcu + c->r[0];
    c->r[0] = c->r[11] - 0x68u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d34c4u; f_27c75a8(c);
L_27d34c4:;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d37d8; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[7] = (c->r[0] >> 1); }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d4778; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d370c; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x80u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d3730;
L_27d3514:;
    c->r[5] = c->r[7] + 0x11u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d3524u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
L_27d3538:;
    c->r[1] = 0x2eu;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x30u;
    c->r[2] = c->r[7];
    c->r[14] = 0x27d3564u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[7] - 0x18u;
    c->r[14] = 0x27d3588u; f_27c75a8(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d359c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d359cu; f_283b288(c);
L_27d359c:;
    c->r[5] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d35b0; }
L_27d35a8:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d35b0u; f_283b288(c);
L_27d35b0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[8]; }
    goto L_27d1574;
L_27d35bc:;
    c->r[0] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d35c8u; f_283b27c(c);
    (void)f_subs(c, c->r[9], c->r[5]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27d35e0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d41d8; }
L_27d35e0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d41a8; }
    c->r[0] = c->r[8] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + 0x1u;
    c->r[14] = 0x27d3604u; f_283aa78(c);
    goto L_27d41bc;
L_27d3608:;
    c->r[0] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27d3614u; f_283b27c(c);
    (void)f_subs(c, c->r[9], c->r[5]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27d362c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d4290; }
L_27d362c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d4260; }
    c->r[0] = c->r[8] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + 0x1u;
    c->r[14] = 0x27d3650u; f_283aa78(c);
    goto L_27d4274;
L_27d3654:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d365c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27d3664u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    goto L_27d3b90;
L_27d3674:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaabu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27d4790; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0xaaabu;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27d36cc; }
    c->r[9] = (c->r[1] << 1);
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d4570; }
L_27d36cc:;
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d4318; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d36fcu; f_283b27c(c);
    goto L_27d4578;
L_27d3700:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d3d70;
L_27d370c:;
    c->r[5] = c->r[7] + 0x11u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d371cu; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
L_27d3730:;
    c->r[1] = 0x28u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x80u;
    c->r[2] = c->r[7];
    c->r[14] = 0x27d375cu; f_27c75a8(c);
    c->r[1] = 0x36e261u;
    c->r[1] = 0x27d3768u + c->r[1];
    c->r[2] = 0x2u;
    c->r[14] = 0x27d376cu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x78u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27d37b4u; f_27c75a8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d37c4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d37c4u; f_283b288(c);
L_27d37c4:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d37d8; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d37d8u; f_283b288(c);
L_27d37d8:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27d37fcu; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_27d3928; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    c->r[0] = c->r[1] + 0x2u;
    c->r[7] = c->r[1];
    (void)f_adds(c, c->r[0], 0x10u);
    if (COND_CS) { goto L_27d4780; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_27d3854; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0x80u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27d3878;
L_27d3854:;
    c->r[5] = c->r[7] + 0x12u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d3864u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
L_27d3878:;
    c->r[1] = 0x28u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[13] + 0x80u;
    c->r[2] = c->r[7];
    c->r[14] = 0x27d38acu; f_27c75a8(c);
    c->r[1] = 0x36e0b1u;
    c->r[1] = 0x27d38b8u + c->r[1];
    c->r[2] = 0x1u;
    c->r[14] = 0x27d38bcu; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x78u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27d3904u; f_27c75a8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d3914; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27d3914u; f_283b288(c);
L_27d3914:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3928; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3928u; f_283b288(c);
L_27d3928:;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[11] - 0x68u;
    c->r[6] = c->r[7] | 0x1u;
    c->r[7] = c->r[7] | 0x5u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x67u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x65u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[0] | (c->r[5] << 8);
    { uint32_t ea = c->r[11] - 0x63u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[1] | (c->r[6] << 8);
    { uint32_t ea = c->r[11] - 0x61u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[2] = c->r[2] | (c->r[7] << 8);
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x56u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x72u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x74u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27d3a84; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x74u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x72u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x72u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x74u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x86u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27d44f4;
L_27d3a84:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_27d4788; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_27d3ad0; }
    c->r[9] = (c->r[1] << 1);
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d4324; }
L_27d3ad0:;
    c->r[0] = c->r[9] + (c->r[9] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27d3b50; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27d3b00u; f_283b27c(c);
    goto L_27d432c;
L_27d3b04:;
    c->r[6] = 0x1u;
    c->r[5] = c->r[4];
    goto L_27d4528;
L_27d3b10:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d3b18:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d3b20u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    goto L_27d41d8;
L_27d3b30:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27d3b38:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27d3b40u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    goto L_27d4290;
L_27d3b50:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d432c;
L_27d3b5c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d3b74u; f_283b288(c);
L_27d3b74:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9] - 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] - 0x4u; ST32(ea, c->r[0]); }
L_27d3b90:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27d3b94:;
    c->r[5] = 0x0u;
    c->r[3] = c->r[9] - 0xbu;
    { uint32_t ea = c->r[9] - 0xcu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x36dda0u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[9] - 0x7u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[9] - 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[9] - 0xau; ST8(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[9] - 0x6u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x27d3be4u + c->r[12];
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d3bf4u; f_27c75a8(c);
L_27d3bf4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_27d3d38; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27d3c14u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_EQ) { goto L_27d1574; }
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_NE) { { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[5]); }
    if (COND_EQ) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d3c50u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 72u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
L_27d3c7c:;
    c->r[9] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3c98; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3c98u; f_283b288(c);
L_27d3c98:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3cac; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3cacu; f_283b288(c);
L_27d3cac:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27d3c7c; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27d3d08; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27d3d18; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = c->r[11] - 0x48u;
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    c->r[14] = 0x27d3d00u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    goto L_27d3d1c;
L_27d3d08:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27d3d24; }
    goto L_27d3d2c;
L_27d3d18:;
    c->r[9] = 0x1u;
L_27d3d1c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27d3d2c; }
L_27d3d24:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3d2cu; f_283b288(c);
L_27d3d2c:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27d3bf4; }
    goto L_27d1574;
L_27d3d38:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27d1574; }
    c->r[1] = 0x36dc0du;
    c->r[0] = c->r[0] - 0x18u;
    c->r[2] = 0x1u;
    c->r[1] = 0x27d3d5cu + c->r[1];
    c->r[14] = 0x27d3d5cu; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + 0x1u;
    goto L_27d1574;
L_27d3d68:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
L_27d3d70:;
    c->r[1] = c->r[6] + (c->r[6] << 1);
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->v.d[16] = 0x0ull; c->v.d[17] = 0x0ull;
    c->r[1] = c->r[0] + (c->r[1] << 3);
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] + (c->r[2] << 3);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_27d3dfc; }
L_27d3da8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_27d3da8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27d3e00;
L_27d3dfc:;
    c->r[6] = c->r[5];
L_27d3e00:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    (void)f_subs(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d3e4c; }
L_27d3e14:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3e28; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3e28u; f_283b288(c);
L_27d3e28:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3e40; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3e40u; f_283b288(c);
L_27d3e40:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27d3e14; }
L_27d3e4c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d3ea0; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27d3e98; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27d3e98; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27d3ea0;
L_27d3e98:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d3ea0u; f_283b288(c);
L_27d3ea0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_27d3ea4:;
    c->r[8] = c->r[0] + 0x1u;
L_27d3ea8:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_27d1574; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[5] - 0xbu; }
    c->r[0] = c->r[5] - 0x18u;
    c->r[14] = 0x27d3ee8u; f_27c75a8(c);
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5] - 24u);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4] - 0x18u;
    c->r[7] = c->r[4];
L_27d3f14:;
    c->r[6] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3f30; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3f30u; f_283b288(c);
L_27d3f30:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d3f44; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d3f44u; f_283b288(c);
L_27d3f44:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27d3f14; }
    { uint32_t ea = c->r[4] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = c->r[4] - 0x23u; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[4] - 0x30u;
    c->r[14] = 0x27d3f70u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[2] = 0x36d9e8u;
    ST64(c->r[13] + 128u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[2] = 0x27d3f9cu + c->r[2];
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x27d3fa8u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    ST64(c->r[11] - 120u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    c->r[2] = 0x36da18u;
    { uint32_t ea = c->r[11] - 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    c->r[1] = 0x27d3fd0u + c->r[2];
    c->r[0] = c->r[11] - 0x78u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27d3fd8u; f_27c75a8(c);
    c->r[7] = 0x0u;
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    ST64(c->r[11] - 104u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x30u;
    c->r[1] = c->r[9];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x27d4024u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    ST64(c->r[11] - 88u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    c->r[2] = 0x36d91du;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = 0x27d404cu + c->r[2];
    c->r[0] = c->r[11] - 0x58u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27d4054u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[6] | (c->r[5] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[4]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST8(ea, c->r[12]); }
    c->r[5] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x56u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x47u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x43u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x41u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x45u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x56u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27d4114u; f_27d4d10(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4128; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4128u; f_283b288(c);
L_27d4128:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d413c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d413cu; f_283b288(c);
L_27d413c:;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4150; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4150u; f_283b288(c);
L_27d4150:;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4164; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4164u; f_283b288(c);
L_27d4164:;
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4178; }
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4178u; f_283b288(c);
L_27d4178:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d418c; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d418cu; f_283b288(c);
L_27d418c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27d41a0; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27d41a0u; f_283b288(c);
L_27d41a0:;
    c->r[4] = c->r[8];
    goto L_27d1574;
L_27d41a8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d41bcu; f_283b288(c);
L_27d41bc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
L_27d41d8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[4] - 0x17u;
    { uint32_t ea = c->r[4] - 0x18u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x52u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[4] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[4] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4244; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4244u; f_283b288(c);
L_27d4244:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4258; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4258u; f_283b288(c);
L_27d4258:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d1574;
L_27d4260:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27d4274u; f_283b288(c);
L_27d4274:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
L_27d4290:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[4] - 0x17u;
    { uint32_t ea = c->r[4] - 0x18u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x52u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x2u; }
    { uint32_t ea = c->r[4] - 0x13u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[4] - 0x11u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] - 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] - 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[0] >> 24);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x52u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d42fc; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d42fcu; f_283b288(c);
L_27d42fc:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4310; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4310u; f_283b288(c);
L_27d4310:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d1574;
L_27d4318:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27d4578;
L_27d4324:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
L_27d432c:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    c->r[5] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x74u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x72u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x72u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x74u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x86u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[5] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_27d4450; }
L_27d43f8:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_27d43f8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27d4454;
L_27d4450:;
    c->r[6] = c->r[5];
L_27d4454:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d44a8; }
L_27d4470:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4484; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4484u; f_283b288(c);
L_27d4484:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d449c; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d449cu; f_283b288(c);
L_27d449c:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27d4470; }
L_27d44a8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d44f4; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27d44ec; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27d44ec; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27d44f4;
L_27d44ec:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27d44f4u; f_283b288(c);
L_27d44f4:;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4508; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4508u; f_283b288(c);
L_27d4508:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4528; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4528u; f_283b288(c);
L_27d4528:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d453c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d453cu; f_283b288(c);
L_27d453c:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_27d4544:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d4558; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d4558u; f_283b288(c);
L_27d4558:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27d4568; }
L_27d4560:;
    c->r[5] = c->r[4];
    goto L_27d1574;
L_27d4568:;
    c->r[4] = c->r[5];
    goto L_27d1574;
L_27d4570:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
L_27d4578:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[4]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[6] = c->r[1] + 0x1u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x86u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[9] + (c->r[9] << 1);
    { uint32_t ea = c->r[13] + 0x86u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; ST16(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27d468c; }
L_27d463c:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27d463c; }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    goto L_27d4690;
L_27d468c:;
    c->r[4] = c->r[5];
L_27d4690:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[5], c->r[4]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27d46dc; }
L_27d46a4:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d46b8; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d46b8u; f_283b288(c);
L_27d46b8:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d46d0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d46d0u; f_283b288(c);
L_27d46d0:;
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27d46a4; }
L_27d46dc:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27d4728; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27d4720; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27d4720; }
    c->r[2] = 0xfu - c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[4] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27d4728;
L_27d4720:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27d4728u; f_283b288(c);
L_27d4728:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27d473c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27d473cu; f_283b288(c);
L_27d473c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27d1574;
L_27d4744:;
    c->r[14] = 0x27d474cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d474c:;
    c->r[14] = 0x27d4754u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4754:;
    c->r[14] = 0x27d475cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4760:;
    c->r[14] = 0x27d4768u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4768:;
    c->r[14] = 0x27d4770u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4770:;
    c->r[14] = 0x27d4778u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4778:;
    c->r[14] = 0x27d4780u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4780:;
    c->r[14] = 0x27d4788u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4788:;
    c->r[14] = 0x27d4790u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27d4790:;
    c->r[14] = 0x27d4798u;
    __attribute__((musttail)) return f_284f5c8(c);
}
