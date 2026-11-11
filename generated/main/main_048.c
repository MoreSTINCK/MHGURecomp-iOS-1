#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_272ea8(Cpu *c);
void f_520188(Cpu *c);
void f_520454(Cpu *c);
void f_521694(Cpu *c);
void f_9c6514(Cpu *c);
void f_9c65e0(Cpu *c);
void f_9c66ac(Cpu *c);
void f_9c6778(Cpu *c);
void f_9c6844(Cpu *c);
void f_9c6914(Cpu *c);
void f_9cbde0(Cpu *c);
void f_aa7b50(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_51d92c(Cpu *restrict c) {
    FN_ENTER(0x51d92cu);
L_51d92c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x138u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[2];
    c->r[8] = c->r[0];
    c->r[14] = c->r[1];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x20u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[1] = 0x1u;
    c->v.s[2] = LD32(c->r[4] + 220u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[8] + 80u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x54u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x71u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_520164; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x76u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_51da0c; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0x0u;
    c->r[2] = c->r[2] & 0x7u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_51da48; }
L_51da0c:;
    c->r[9] = 0x0u;
    c->r[10] = 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_51da24; }
L_51da1c:;
    c->r[12] = 0x2u;
    goto L_51da4c;
L_51da24:;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_51da48; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_51da1c; }
    c->r[10] = 0x1u;
    c->r[9] = 0x0u;
    c->r[12] = c->r[1];
    goto L_51da58;
L_51da48:;
    c->r[12] = c->r[1];
L_51da4c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_51db3c; }
L_51da58:;
    c->r[1] = 0x151b7f4u;
    { uint32_t ea = c->r[4] + 0xc6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = 0x51da68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_51da80; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51da80:;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51da98; }
    { uint32_t ea = c->r[1] + 0x210u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51da98:;
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51dab0; }
    { uint32_t ea = c->r[1] + 0x3c0u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51dab0:;
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51dac8; }
    { uint32_t ea = c->r[1] + 0x570u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x3u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51dac8:;
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51dae0; }
    { uint32_t ea = c->r[1] + 0x720u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x4u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51dae0:;
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51daf8; }
    { uint32_t ea = c->r[1] + 0x8d0u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x5u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51daf8:;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51db10; }
    { uint32_t ea = c->r[1] + 0xa80u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x6u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_51db28; }
L_51db10:;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51dc30; }
    { uint32_t ea = c->r[1] + 0xc30u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = 0x7u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51dc30; }
L_51db28:;
    c->r[2] = 0x1b0u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51dc30; }
L_51db3c:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[14]); }
    c->r[1] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[12]); }
    c->r[12] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_NE) { goto L_51f888; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    c->v.s[0] = 0x40c90fdbu;
    c->v.s[8] = 0x43b40000u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    c->v.s[10] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.s[6] = c->r[0];
    c->v.f[2] = c->v.f[2] / c->v.f[8];
    c->v.f[4] = c->v.f[4] / c->v.f[8];
    c->v.f[0] = c->v.f[0] / c->v.f[8];
    c->v.s[8] = c->r[2];
    ST32(c->r[13] + 208u, c->v.s[2]);
    ST32(c->r[13] + 212u, c->v.s[4]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_51dc3c; }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51dc10; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[0]);
    c->v.f[10] = c->v.f[12] + c->v.f[10];
    ST32(c->r[13] + 224u, c->v.s[10]);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.f[8] = c->v.f[12] + c->v.f[8];
    ST32(c->r[13] + 228u, c->v.s[8]);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 232u, c->v.s[6]);
L_51dc10:;
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 224u, c->v.s[2]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    goto L_51f868;
L_51dc30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x70u; ST8(ea, c->r[0]); }
    goto L_520164;
L_51dc3c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_51dd2c; }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51de48; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51e050; }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51e2e4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x51dc88u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x51dd1cu; f_520188(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    goto L_51e320;
L_51dd2c:;
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_NE) { goto L_51df28; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51df28; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51de2c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[14];
    c->r[7] = c->r[3];
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.s[10] = LD32(c->r[0] + 104u);
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[6] = LD32(c->r[0] + 96u);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[8] = LD32(c->r[0] + 100u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    ST32(c->r[13] + 240u, c->v.s[0]);
    ST32(c->r[13] + 244u, c->v.s[2]);
    ST32(c->r[13] + 248u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[0], 0.0f); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_NE) { goto L_51ddb0; }
    c->v.s[0] = 0x3a83126fu;
    c->r[1] = 0x126fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3a830000u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
L_51ddb0:;
    c->r[1] = 0x151b440u;
    c->r[2] = c->r[13] + 0xf0u;
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = 0x51ddc4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[12] = c->v.f[4] * c->v.f[6];
    c->v.f[14] = c->v.f[8] * c->v.f[0];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[6] = c->v.f[12] * c->v.f[4];
    c->v.f[8] = c->v.f[14] * c->v.f[0];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 144u, c->v.s[6]);
    ST32(c->r[13] + 148u, c->v.s[8]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x51de20u; f_520454(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[7];
    c->r[14] = c->r[5];
L_51de2c:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_51f85c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51f838; }
    goto L_51f84c;
L_51de48:;
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    (void)f_subs(c, c->r[0], 0x0u);
    ST32(c->r[13] + 224u, c->v.s[2]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    if (COND_EQ) { goto L_51e184; }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51e380; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x51de88u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x51df1cu; f_520188(c);
    goto L_51e3bc;
L_51df28:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_51e00c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[7] = c->r[3];
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x51df54u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x51dfe8u; f_520188(c);
    c->v.s[10] = LD32(c->r[13] + 224u);
    c->v.s[8] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[7];
L_51e00c:;
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 224u, c->v.s[2]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_51e2b0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51e2bc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); } }
    goto L_51e2c8;
L_51e050:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x72u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[12]);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    if (COND_LE) { c->r[1] = c->r[12]; }
    c->pc = c->r[2]; c->r[14] = 0x51e074u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[12]); }
    c->v.s[2] = c->r[12];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    c->v.s[26] = c->r[2];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    c->v.s[28] = c->r[9];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[0] = sqrtf(c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    if (COND_VC) { goto L_51e154; }
    c->v.s[0] = c->v.s[2];
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    c->r[10] = c->r[14];
    c->r[5] = c->r[2];
    c->r[14] = 0x51e144u; f_15efddc(c);
    c->r[14] = c->r[10];
    c->r[10] = c->r[13] + 0xcu;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[10]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
L_51e154:;
    c->v.s[16] = 0x34000000u;
    c->v.s[18] = c->r[14];
    c->v.s[24] = c->r[7];
    c->v.s[22] = c->r[5];
    c->v.s[20] = c->r[10];
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51e3fc; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_51e42c;
L_51e184:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x72u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[12]);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    if (COND_LE) { c->r[1] = c->r[12]; }
    c->pc = c->r[2]; c->r[14] = 0x51e1a8u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    c->v.s[2] = c->r[2];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[14]); }
    c->v.s[26] = c->r[14];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    c->v.s[28] = c->r[9];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[0] = sqrtf(c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    if (COND_VC) { goto L_51e284; }
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[10] = c->r[12];
    c->r[5] = c->r[14];
    c->r[14] = 0x51e278u; f_15efddc(c);
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[10];
L_51e284:;
    c->v.s[16] = 0x34000000u;
    c->v.s[18] = c->r[7];
    c->v.s[24] = c->r[4];
    c->v.s[22] = c->r[5];
    c->v.s[20] = c->r[6];
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51e594; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_51e5c4;
L_51e2b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_51e2c4;
L_51e2bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
L_51e2c4:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
L_51e2c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_51f868; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    goto L_51e798;
L_51e2e4:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[9];
    c->r[14] = 0x51e2f0u; f_aa7b50(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[2] = LD32(c->r[13] + 240u);
    c->v.s[4] = LD32(c->r[13] + 244u);
    c->v.s[6] = LD32(c->r[13] + 248u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[13] + 228u, c->v.s[2]);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[13] + 232u, c->v.s[4]);
L_51e320:;
    c->v.s[6] = LD32(c->r[13] + 208u);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[13] + 228u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_51e738; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51e744; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); } }
    goto L_51e750;
L_51e380:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[9];
    c->r[14] = 0x51e38cu; f_aa7b50(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[2] = LD32(c->r[13] + 240u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 244u);
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 248u);
    ST32(c->r[13] + 228u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 232u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[13] + 232u, c->v.s[0]);
L_51e3bc:;
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_51e770; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51e77c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); } }
    goto L_51e788;
L_51e3fc:;
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 144u);
    c->v.s[6] = LD32(c->r[13] + 148u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[26];
    c->v.f[8] = c->v.f[0] * c->v.f[28];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->r[2] = c->v.s[2];
    c->r[9] = c->v.s[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[0];
L_51e42c:;
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_51e474; }
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[14];
    c->r[14] = 0x51e46cu; f_15efddc(c);
    c->r[14] = c->r[10];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
L_51e474:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[26] = c->r[4];
    c->v.s[30] = c->r[6];
    vfp_mrs_flags(c);
    c->v.s[17] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[28] = c->r[0];
    if (COND_MI) { goto L_51e4c4; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[24];
    c->v.f[4] = c->v.f[0] * c->v.f[22];
    c->v.f[6] = c->v.f[0] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    c->r[7] = c->v.s[2];
    c->r[5] = c->v.s[4];
    c->r[10] = c->v.s[6];
    c->r[14] = c->v.s[0];
L_51e4c4:;
    c->v.f[2] = c->v.f[30] * c->v.f[30];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[14]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_51e4fc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x51e4fcu; f_15efddc(c);
L_51e4fc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_51e538; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[17];
    c->v.f[4] = c->v.f[0] * c->v.f[30];
    c->v.f[6] = c->v.f[0] * c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[26];
    c->r[0] = c->v.s[2];
    c->r[6] = c->v.s[4];
    c->r[4] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_51e538:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_51e920; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x51e56cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x51e584u: goto L_51e584; case 0x51e930u: goto L_51e930; case 0x51e940u: goto L_51e940; case 0x51e950u: goto L_51e950; case 0x51e960u: goto L_51e960; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51e584:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e590u; f_9c65e0(c);
    goto L_51e96c;
L_51e594:;
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[13] + 144u);
    c->v.s[6] = LD32(c->r[13] + 148u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[26];
    c->v.f[8] = c->v.f[0] * c->v.f[28];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->r[14] = c->v.s[2];
    c->r[9] = c->v.s[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[0];
L_51e5c4:;
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_51e604; }
    c->v.s[0] = c->v.s[2];
    c->r[9] = c->r[12];
    c->r[14] = 0x51e600u; f_15efddc(c);
    c->r[12] = c->r[9];
L_51e604:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[17] = c->r[12];
    vfp_mrs_flags(c);
    c->v.s[26] = c->r[0];
    c->v.s[30] = c->r[10];
    c->v.s[28] = c->r[9];
    if (COND_MI) { goto L_51e654; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[24];
    c->v.f[4] = c->v.f[0] * c->v.f[22];
    c->v.f[6] = c->v.f[0] * c->v.f[20];
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    c->r[4] = c->v.s[2];
    c->r[5] = c->v.s[4];
    c->r[6] = c->v.s[6];
    c->r[7] = c->v.s[0];
L_51e654:;
    c->v.f[2] = c->v.f[30] * c->v.f[30];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_51e69c; }
    c->v.s[0] = c->v.s[2];
    c->r[4] = c->r[12];
    c->r[5] = c->r[0];
    c->r[14] = 0x51e694u; f_15efddc(c);
    c->r[0] = c->r[5];
    c->r[12] = c->r[4];
L_51e69c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_51e6d0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[17];
    c->v.f[4] = c->v.f[0] * c->v.f[30];
    c->v.f[6] = c->v.f[0] * c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[26];
    c->r[12] = c->v.s[2];
    c->r[10] = c->v.s[4];
    c->r[9] = c->v.s[6];
    c->r[0] = c->v.s[0];
L_51e6d0:;
    c->r[1] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e6e8u; f_272ea8(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51e710; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0x90u;
    c->r[14] = 0x51e70cu; f_520188(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
L_51e710:;
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_51e81c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51e828; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); } }
    goto L_51e834;
L_51e738:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_51e74c;
L_51e744:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
L_51e74c:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
L_51e750:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_51f868; }
    c->r[0] = 0x1u;
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[8] + 0x71u; ST8(ea, c->r[0]); }
    goto L_51e7a4;
L_51e770:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_51e784;
L_51e77c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
L_51e784:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
L_51e788:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_51f868; }
L_51e798:;
    c->r[7] = c->r[9];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x54u; ST8(ea, c->r[0]); }
L_51e7a4:;
    { uint32_t ea = c->r[4] + 0x77u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[9] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x51e7b8u; f_521694(c);
    c->r[0] = c->r[8] + 0x60u;
    c->r[1] = c->r[9];
    c->r[14] = 0x51e7c4u; f_272ea8(c);
    c->v.s[0] = LD32(c->r[8] + 108u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51e800; }
    c->v.s[2] = LD32(c->r[8] + 96u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[8] + 96u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[8] + 100u);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[8] + 100u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[8] + 104u);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[8] + 104u, c->v.s[2]);
    ST32(c->r[8] + 108u, c->v.s[0]);
L_51e800:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[7];
    goto L_51f868;
L_51e81c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    goto L_51e830;
L_51e828:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
L_51e830:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
L_51e834:;
    c->r[0] = 0x1u;
    c->r[9] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[8] + 0x54u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[1] + 0x77u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->r[14] = 0x51e850u; f_521694(c);
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[9];
    c->r[14] = 0x51e85cu; f_272ea8(c);
    c->v.s[6] = LD32(c->r[13] + 140u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51e89c; }
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[4] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 132u, c->v.s[4]);
    c->v.s[2] = LD32(c->r[13] + 136u);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 136u, c->v.s[2]);
    ST32(c->r[13] + 140u, c->v.s[6]);
    goto L_51e8a4;
L_51e89c:;
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[2] = LD32(c->r[13] + 136u);
L_51e8a4:;
    c->r[10] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    c->v.s[14] = LD32(c->r[13] + 76u);
    c->v.s[8] = LD32(c->r[13] + 64u);
    c->v.s[10] = LD32(c->r[13] + 68u);
    c->v.s[12] = LD32(c->r[13] + 72u);
    c->v.f[1] = c->v.f[14] * c->v.f[0];
    c->v.f[3] = c->v.f[14] * c->v.f[4];
    c->v.f[5] = c->v.f[14] * c->v.f[2];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] * c->v.f[6];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[2]);
    ST32(c->r[8] + 96u, c->v.s[1]);
    ST32(c->r[8] + 100u, c->v.s[3]);
    ST32(c->r[8] + 104u, c->v.s[5]);
    ST32(c->r[8] + 108u, c->v.s[14]);
    goto L_51f868;
L_51e920:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e92cu; f_9c6514(c);
    goto L_51e96c;
L_51e930:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e93cu; f_9c66ac(c);
    goto L_51e96c;
L_51e940:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e94cu; f_9c6778(c);
    goto L_51e96c;
L_51e950:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e95cu; f_9c6914(c);
    goto L_51e96c;
L_51e960:;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[13] + 0x90u;
    c->r[14] = 0x51e96cu; f_9c6844(c);
L_51e96c:;
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[2] = LD32(c->r[13] + 240u);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 244u);
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 248u);
    ST32(c->r[13] + 228u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 232u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51e9c4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0x90u;
    c->r[14] = 0x51e9c0u; f_520188(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
L_51e9c4:;
    { uint32_t ea = c->r[1] + 0x77u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_51ec50; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x51e9e0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x51e9fcu: goto L_51e9fc; case 0x51eea8u: goto L_51eea8; case 0x51f0f4u: goto L_51f0f4; case 0x51f344u: goto L_51f344; case 0x51f5a4u: goto L_51f5a4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51e9fc:;
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51ea04u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51ea10u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51ea1cu; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51ea28u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51ea34u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51ea40u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[16] * c->v.f[18];
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->r[9] = 0x0u;
    c->v.f[8] = c->v.f[16] * c->v.f[24];
    c->v.f[10] = c->v.f[22] * c->v.f[0];
    c->r[2] = 0x151a80cu;
    c->r[4] = 0x3f800000u;
    c->r[5] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0x51ea80u + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[13] + 68u, c->v.s[20]);
    c->v.f[0] = -(float)(c->v.f[16] * c->v.f[0]);
    ST32(c->r[13] + 72u, c->v.s[2]);
    c->v.s[2] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[6] = c->v.f[18] * c->v.f[22];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[20];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[6]);
    ST32(c->r[13] + 84u, c->v.s[10]);
    c->v.s[16] = 0x4422f983u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.f[2] = c->v.f[22] * c->v.f[24];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[20]);
    ST32(c->r[13] + 88u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 224u);
    ST32(c->r[13] + 104u, c->v.s[2]);
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 264u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51eb50u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 232u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 256u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51ebc8u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 272u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51ec3cu; f_21ebe8(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x51ec48u; f_9c65e0(c);
    goto L_51f7f0;
L_51ec50:;
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51ec58u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51ec64u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51ec70u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51ec7cu; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51ec88u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51ec94u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.s[6] = c->v.s[18] ^ 0x80000000u;
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->r[9] = 0x0u;
    c->r[2] = 0x151a5bcu;
    c->r[4] = 0x3f800000u;
    c->r[5] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0x51ecd0u + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 68u, c->v.s[4]);
    ST32(c->r[13] + 72u, c->v.s[6]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->v.s[18] = 0x4b400000u;
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[20]);
    ST32(c->r[13] + 80u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    ST32(c->r[13] + 84u, c->v.s[8]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 96u, c->v.s[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.s[16] = 0x4422f983u;
    c->v.s[2] = c->v.s[18];
    ST32(c->r[13] + 100u, c->v.s[4]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 224u);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 264u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51eda4u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 272u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51ee1cu; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 232u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 256u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51ee90u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x51ee9cu; f_9c6514(c);
    goto L_51f7f0;
L_51eea8:;
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51eeb0u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51eebcu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51eec8u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51eed4u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51eee0u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0x51eef0u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[20]);
    c->r[9] = 0x0u;
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[24]);
    c->r[2] = 0x151a370u;
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    c->r[4] = 0x3f800000u;
    c->r[5] = c->r[13] + 0x40u;
    { uint32_t ea = 0x51ef1cu + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[22] * c->v.f[18]);
    ST32(c->r[13] + 68u, c->v.s[4]);
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    ST32(c->r[13] + 72u, c->v.s[2]);
    c->v.f[2] = -(float)(c->v.f[22] * c->v.f[20]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[24];
    ST32(c->r[13] + 84u, c->v.s[4]);
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 88u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    c->v.s[16] = 0x4422f983u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = c->v.s[18];
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 96u, c->v.s[4]);
    ST32(c->r[13] + 100u, c->v.s[6]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 228u);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 272u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51eff8u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 264u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f070u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 232u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 256u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f0e4u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x51f0f0u; f_9c66ac(c);
    goto L_51f7f0;
L_51f0f4:;
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51f0fcu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51f108u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51f114u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51f120u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51f12cu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->v.f[28] = c->v.f[22] * c->v.f[24];
    c->r[14] = 0x51f140u; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[18] * c->v.f[22];
    c->v.f[6] = c->v.f[20] * c->v.f[24];
    c->v.s[8] = c->v.s[26];
    c->r[9] = 0x0u;
    c->r[2] = 0x151a11cu;
    c->r[4] = 0x3f800000u;
    c->r[5] = c->r[13] + 0x40u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[26] * c->v.f[20]);
    { uint32_t ea = 0x51f170u + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[2] = c->v.f[20] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[24]);
    c->v.f[6] = c->v.f[22] * c->v.f[0];
    ST32(c->r[13] + 68u, c->v.s[8]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->v.s[4] = c->v.s[20] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 80u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 84u, c->v.s[6]);
    c->v.s[16] = 0x4422f983u;
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 228u);
    ST32(c->r[13] + 100u, c->v.s[2]);
    c->v.s[2] = c->v.s[18];
    ST32(c->r[13] + 104u, c->v.s[28]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 272u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f248u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 232u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 256u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f2c0u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 264u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f334u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x51f340u; f_9c6778(c);
    goto L_51f7f0;
L_51f344:;
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51f34cu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51f358u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51f364u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51f370u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51f37cu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->v.f[26] = c->v.f[16] * c->v.f[18];
    c->r[14] = 0x51f38cu; f_15efdf4(c);
    c->v.f[4] = c->v.f[16] * c->v.f[20];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[20]);
    c->r[9] = 0x0u;
    c->v.f[6] = c->v.f[20] * c->v.f[22];
    c->r[2] = 0x1519ed8u;
    c->r[5] = c->r[13] + 0x40u;
    c->r[4] = 0x3f800000u;
    { uint32_t ea = 0x51f3b4u + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[4] = c->v.f[4] * c->v.f[24];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    ST32(c->r[13] + 68u, c->v.s[6]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[20]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.s[2] = c->v.s[16] ^ 0x80000000u;
    c->v.s[16] = 0x4422f983u;
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[22];
    c->v.s[18] = 0x4b400000u;
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 100u, c->v.s[2]);
    c->v.s[2] = c->v.s[18];
    ST32(c->r[13] + 104u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 232u);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 256u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f4a0u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 264u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f518u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 272u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f58cu; f_21ebe8(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x51f598u; f_9c6914(c);
    goto L_51f7f0;
L_51f5a4:;
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51f5acu; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51f5b8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51f5c4u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->r[14] = 0x51f5d0u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 212u);
    c->r[14] = 0x51f5dcu; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    c->r[14] = 0x51f5e8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->v.f[6] = c->v.f[16] * c->v.f[20];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[9] = 0x0u;
    c->r[2] = 0x1519c78u;
    c->r[5] = c->r[13] + 0x40u;
    c->r[4] = 0x3f800000u;
    { uint32_t ea = 0x51f614u + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[18] * c->v.f[8]);
    ST32(c->r[13] + 64u, c->v.s[4]);
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[24]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[6]);
    c->v.f[2] = c->v.f[16] * c->v.f[18];
    c->v.f[6] = c->v.f[18] * c->v.f[22];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 80u, c->v.s[4]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[2] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 84u, c->v.s[8]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    c->v.f[0] = -(float)(c->v.f[16] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 96u, c->v.s[18]);
    c->v.s[18] = 0x4b400000u;
    c->v.s[16] = 0x4422f983u;
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 232u);
    ST32(c->r[13] + 104u, c->v.s[2]);
    c->v.s[2] = c->v.s[18];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 256u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f6f8u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 272u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f770u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[13] + 224u);
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[9]); }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[0] = c->v.s[18];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 264u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 276u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x51f7e4u; f_21ebe8(c);
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[5];
    c->r[14] = 0x51f7f0u; f_9c6844(c);
L_51f7f0:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_51f858; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51f84c; }
L_51f838:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); } }
    goto L_51f868;
L_51f84c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    goto L_51f864;
L_51f858:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
L_51f85c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
L_51f864:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
L_51f868:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[0]); }
L_51f888:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_51f914; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[0] = c->r[1] | 0x1u;
    c->v.s[0] = c->r[2];
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_51f954; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51fc98; }
    { uint32_t ea = c->r[4] + 0x79u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_51fc64; }
    c->r[7] = c->r[3];
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_51fdd8; }
    { uint32_t ea = c->r[4] + 0x72u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_51fdd8; }
    c->r[6] = c->r[9];
    goto L_51fde0;
L_51f914:;
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = LD32(c->r[3]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[8], c->v.s[0]);
    c->v.s[0] = LD32(c->r[8] + 4u);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[8] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[8] + 8u);
    c->v.s[2] = LD32(c->r[3] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[8] + 8u, c->v.s[0]);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_5200fc; }
    goto L_520164;
L_51f954:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_51fc64; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51fc64; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1519870u;
    c->v.s[0] = LD32(c->r[1] + 68u);
    c->v.s[8] = LD32(c->r[1] + 100u);
    c->v.s[2] = LD32(c->r[1] + 72u);
    c->v.s[10] = LD32(c->r[1] + 104u);
    c->v.s[4] = LD32(c->r[1] + 64u);
    c->v.s[6] = LD32(c->r[1] + 96u);
    { uint32_t ea = 0x51f994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 4u);
    c->v.s[1] = LD32(c->r[0] + 8u);
    c->v.f[18] = c->v.f[6] - c->v.f[4];
    c->v.f[16] = c->v.f[10] - c->v.f[2];
    c->v.f[20] = c->v.f[8] - c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[14];
    c->v.f[4] = c->v.f[16] * c->v.f[12];
    c->v.f[2] = c->v.f[20] * c->v.f[1];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[20] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[16] * c->v.f[14]);
    c->v.f[22] = c->v.f[18] * c->v.f[0];
    c->v.f[26] = c->v.f[16] * c->v.f[4];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[24] = c->v.f[20] * c->v.f[2];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_51fa0c; }
    c->v.s[0] = c->v.s[2];
    c->r[7] = c->r[3];
    c->r[4] = c->r[14];
    c->r[14] = 0x51fa04u; f_15efddc(c);
    c->r[14] = c->r[4];
    c->r[3] = c->r[7];
L_51fa0c:;
    c->v.s[28] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_51fa30; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[22] = c->v.f[0] * c->v.f[22];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
L_51fa30:;
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 240u, c->v.s[26]);
    ST32(c->r[13] + 244u, c->v.s[22]);
    ST32(c->r[13] + 248u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_51fa78; }
    c->r[7] = c->r[3];
    c->r[4] = c->r[14];
    c->r[14] = 0x51fa6cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
    c->r[14] = c->r[4];
    c->r[3] = c->r[7];
L_51fa78:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    c->r[4] = c->r[14];
    c->r[7] = c->r[3];
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_51faa0; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[20] = c->v.f[20] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_51faa0:;
    c->r[0] = 0x1519080u;
    c->r[6] = c->r[13] + 0x90u;
    c->r[10] = 0x0u;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[2] = c->r[13] + 0xe0u;
    ST32(c->r[13] + 224u, c->v.s[18]);
    ST32(c->r[13] + 228u, c->v.s[20]);
    ST32(c->r[13] + 232u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x51faccu + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x51fad0u; f_9cbde0(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xf0u;
    c->pc = c->r[2]; c->r[14] = 0x51fae4u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[13] + 292u);
    c->v.s[4] = LD32(c->r[13] + 244u);
    c->v.s[2] = LD32(c->r[13] + 240u);
    c->v.s[12] = LD32(c->r[13] + 288u);
    c->v.s[10] = LD32(c->r[13] + 260u);
    c->v.s[8] = LD32(c->r[13] + 256u);
    c->v.s[14] = LD32(c->r[13] + 276u);
    c->v.s[3] = LD32(c->r[13] + 272u);
    c->v.s[6] = LD32(c->r[13] + 248u);
    c->v.s[1] = LD32(c->r[13] + 296u);
    c->v.s[5] = LD32(c->r[13] + 264u);
    c->r[3] = c->r[13] + 0x120u;
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[2] = LD32(c->r[13] + 280u);
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[12]);
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[10]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[1]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[1]);
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[8] + 16u, c->v.s[4]);
    ST32(c->r[8] + 20u, c->v.s[2]);
    ST32(c->r[8] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[7] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x51fb78u; f_21ebe8(c);
    c->v.s[0] = LD32(c->r[8] + 16u);
    c->v.s[6] = LD32(c->r[13] + 288u);
    c->v.s[2] = LD32(c->r[8] + 20u);
    c->v.s[4] = LD32(c->r[8] + 24u);
    c->v.s[8] = LD32(c->r[13] + 292u);
    c->v.s[10] = LD32(c->r[13] + 296u);
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    c->v.f[0] = c->v.f[8] + c->v.f[2];
    c->v.f[2] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 64u, c->v.s[6]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    ST32(c->r[13] + 72u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_52009c; }
    { uint32_t ea = c->r[4] + 0x92u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51fbe8; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x40u;
    c->pc = c->r[2]; c->r[14] = 0x51fbe0u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    ST32(c->r[13] + 68u, c->v.s[0]);
L_51fbe8:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x40c90fdbu;
    c->v.s[10] = 0x43b40000u;
    c->r[10] = c->r[8] + 0x30u;
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[4] * c->v.f[2];
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    c->v.f[4] = c->v.f[4] / c->v.f[10];
    c->v.f[6] = c->v.f[6] / c->v.f[10];
    c->v.f[2] = c->v.f[2] / c->v.f[10];
    ST32(c->r[13] + 240u, c->v.s[4]);
    ST32(c->r[13] + 244u, c->v.s[6]);
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x72u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LE) { goto L_51ffa8; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x51fc50u; rt_dispatch(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[1] = c->r[0] + 0x38u;
    c->r[2] = c->r[0] + 0x34u;
    c->r[0] = c->r[0] + 0x30u;
    goto L_51ffb8;
L_51fc64:;
    c->v.s[6] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[3] + 4u);
    c->v.s[10] = LD32(c->r[3] + 8u);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[0] = c->v.f[0] + c->v.f[10];
    ST32(c->r[13] + 64u, c->v.s[4]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_52009c;
L_51fc98:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x72u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x51fcb4u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[10]); }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51fdac; }
    c->v.s[0] = LD32(c->r[9] + 96u);
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = c->r[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = c->r[1];
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[9] + 100u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = c->r[0];
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[9] + 104u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[13] + 200u, c->v.s[0]);
L_51fdac:;
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[14] = 0x51fdb8u; f_21ebe8(c);
    c->r[2] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[10]); }
    goto L_52009c;
L_51fdd8:;
    c->r[6] = c->r[9];
    c->r[1] = ~0x0u;
L_51fde0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x51fdf0u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51ff48; }
    c->r[6] = 0x0u;
    c->r[0] = c->r[8] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x81u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51fefc; }
    c->r[3] = c->r[9];
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = c->r[2];
    c->v.s[0] = LD32(c->r[3] + 96u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = c->r[1];
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 100u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = c->r[0];
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 104u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[13] + 200u, c->v.s[0]);
L_51fefc:;
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[14] = 0x51ff08u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[13] + 192u);
    c->v.s[8] = LD32(c->r[13] + 196u);
    c->v.s[10] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] + c->v.f[4];
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    goto L_52009c;
L_51ff48:;
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->v.s[8] = c->r[1];
    { uint32_t ea = c->r[6] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[3]); }
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[7] + 4u);
    c->v.s[4] = LD32(c->r[7] + 8u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.s[6] = c->r[2];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] + c->v.f[4];
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    goto L_52009c;
L_51ffa8:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[0] + 0xe8u;
    c->r[2] = c->r[0] + 0xe4u;
    c->r[0] = c->r[0] + 0xe0u;
L_51ffb8:;
    c->v.s[6] = LD32(c->r[0]);
    c->r[0] = 0x1519218u;
    c->v.s[4] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[13] + 64u);
    c->v.s[10] = LD32(c->r[13] + 72u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x51ffecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[10];
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[10];
    ST32(c->r[13] + 144u, c->v.s[6]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    ST32(c->r[13] + 152u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    c->v.f[12] = c->v.f[2] * c->v.f[4];
    c->v.f[14] = c->v.f[8] * c->v.f[6];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[10] = c->v.f[0] * c->v.f[10];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[4] = c->v.f[12] * c->v.f[2];
    c->v.f[8] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[12] * c->v.f[6]);
    ST32(c->r[13] + 224u, c->v.s[4]);
    ST32(c->r[13] + 228u, c->v.s[8]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    c->r[14] = 0x520058u; f_520454(c);
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_520084; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_520090; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); } }
    goto L_52009c;
L_520084:;
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[6]); }
    goto L_52009c;
L_520090:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[0]); }
L_52009c:;
    { uint32_t ea = c->r[4] + 0x92u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5200d0; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x40u;
    c->pc = c->r[2]; c->r[14] = 0x5200bcu; rt_dispatch(c);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    ST32(c->r[13] + 68u, c->v.s[0]);
    goto L_5200d4;
L_5200d0:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5200d4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_520164; }
L_5200fc:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x82u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_520140; }
    c->v.s[0] = LD32(c->r[8] + 64u);
    c->v.s[2] = LD32(c->r[9] + 96u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[8] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[8] + 68u);
    c->v.s[2] = LD32(c->r[9] + 100u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[8] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[8] + 72u);
    c->v.s[2] = LD32(c->r[9] + 104u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[8] + 72u, c->v.s[0]);
L_520140:;
    { uint32_t ea = c->r[4] + 0x83u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_520164; }
    c->r[0] = 0x50cu;
    c->v.s[0] = LD32(c->r[4] + 220u);
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[8] + 80u, c->v.s[0]);
L_520164:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
