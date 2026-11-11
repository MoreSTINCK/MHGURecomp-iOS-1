#include "cpu.h"
#include "neon_rt.h"
void f_27b91ec(Cpu *c);
void f_27bab48(Cpu *c);
void f_27c73c8(Cpu *c);
void f_27c75a8(Cpu *c);
void f_27cdb70(Cpu *c);
void f_27d4d10(Cpu *c);
void f_27dac98(Cpu *c);
void f_27e3894(Cpu *c);
void f_27e4194(Cpu *c);
void f_27e4648(Cpu *c);
void f_27e474c(Cpu *c);
void f_27e4b00(Cpu *c);
void f_27e4c20(Cpu *c);
void f_283aa78(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283f1ac(Cpu *c);
void f_284f5c8(Cpu *c);
void f_2854f2c(Cpu *c);
void f_27c73c8(Cpu *restrict c) {
    FN_ENTER(0x27c73c8u);
L_27c73c8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_27c7400; }
    c->r[9] = (c->r[0] >> 1);
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_CS) { goto L_27c740c; }
    goto L_27c75a0;
L_27c7400:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_CC) { goto L_27c75a0; }
L_27c740c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27c741c; }
    c->r[10] = 0xau;
    goto L_27c742c;
L_27c741c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[10] = c->r[1] - 0x1u;
L_27c742c:;
    c->r[1] = c->r[10] - c->r[9];
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { goto L_27c7508; }
    c->r[1] = ~0x11u;
    c->r[6] = c->r[9] + c->r[5];
    c->r[1] = c->r[1] - c->r[10];
    c->r[2] = c->r[6] - c->r[10];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27c75a0; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_adds(c, c->r[10], 0x8000001au);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x10u;
    if (COND_HI) { goto L_27c748c; }
    (void)f_subs(c, c->r[6], (c->r[10] << 1));
    c->r[1] = c->r[6];
    c->r[0] = 0xbu;
    if (COND_CC) { c->r[1] = (c->r[10] << 1); }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xfffffff0u; }
L_27c748c:;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[14] = 0x27c7494u; f_283b27c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c74b0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c74b0u; f_283aa78(c);
L_27c74b0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[6] + c->r[7];
    c->r[0] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c74c4u; f_283aa78(c);
    c->r[2] = f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_27c74dc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + c->r[5];
    c->r[1] = c->r[1] + c->r[7];
    c->r[14] = 0x27c74dcu; f_283aa78(c);
L_27c74dc:;
    (void)f_subs(c, c->r[10], 0xau);
    if (COND_EQ) { goto L_27c74ec; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c74ecu; f_283b288(c);
L_27c74ec:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[6] + c->r[0];
    goto L_27c758c;
L_27c7508:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27c7594; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[8] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; } }
    c->r[2] = f_subs(c, c->r[9], c->r[7]);
    c->r[6] = c->r[8] + c->r[7];
    if (COND_EQ) { goto L_27c7554; }
    c->r[0] = c->r[6] + c->r[5];
    c->r[1] = c->r[6];
    c->r[7] = c->r[3];
    c->r[14] = 0x27c7538u; f_283f1ac(c);
    c->r[0] = c->r[8] + c->r[9];
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { c->r[1] = c->r[1] + c->r[5]; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_HI) { c->r[1] = c->r[7]; }
    goto L_27c7558;
L_27c7554:;
    c->r[1] = c->r[3];
L_27c7558:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c7564u; f_283f1ac(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + c->r[5];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c7584; }
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    goto L_27c758c;
L_27c7584:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + c->r[0];
L_27c758c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c7594:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27c75a0:;
    c->r[14] = 0x27c75a8u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27c75a8(Cpu *restrict c) {
    FN_ENTER(0x27c75a8u);
L_27c75a8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c75d8; }
    c->r[8] = 0xau;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c75f0; }
    goto L_27c75f8;
L_27c75d8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0];
    c->r[2] = c->r[2] & 0xfffffffeu;
    c->r[8] = c->r[2] - 0x1u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c75f8; }
L_27c75f0:;
    c->r[7] = (c->r[0] >> 1) & 0x7fu;
    goto L_27c75fc;
L_27c75f8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c75fc:;
    c->r[2] = c->r[8] - c->r[7];
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_CS) { goto L_27c76b4; }
    c->r[2] = ~0x11u;
    c->r[9] = c->r[7] + c->r[10];
    c->r[3] = c->r[2] - c->r[8];
    c->r[2] = c->r[9] - c->r[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_27c7710; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[0] = c->r[4] + 0x1u; }
    c->r[6] = ~0x10u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_adds(c, c->r[8], 0x8000001au);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_27c765c; }
    (void)f_subs(c, c->r[9], (c->r[8] << 1));
    c->r[0] = c->r[9];
    c->r[6] = 0xbu;
    if (COND_CC) { c->r[0] = (c->r[8] << 1); }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { c->r[6] = c->r[0] + 0x10u; }
    if (COND_CS) { c->r[6] = c->r[6] & 0xfffffff0u; }
L_27c765c:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c7664u; f_283b27c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c7680; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c7680u; f_283aa78(c);
L_27c7680:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0x27c7690u; f_283aa78(c);
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_EQ) { goto L_27c76a0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c76a0u; f_283b288(c);
L_27c76a0:;
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[5] + c->r[9];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    goto L_27c76fc;
L_27c76b4:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_27c7704; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[10];
    if (COND_EQ) { c->r[5] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; } }
    c->r[0] = c->r[5] + c->r[7];
    c->r[14] = 0x27c76d4u; f_283aa78(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[7] + c->r[10];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c76f4; }
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    goto L_27c76fc;
L_27c76f4:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + c->r[0];
L_27c76fc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_27c7704:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27c7710:;
    c->r[14] = 0x27c7718u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27c7718(Cpu *restrict c) {
    FN_ENTER(0x27c7718u);
L_27c7718:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[1];
    c->r[9] = c->r[0];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1000u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[5] = v; }
    c->r[1] = c->r[0] - c->r[5];
    (void)f_subs(c, c->r[1], 0x20u);
    if (COND_CS) { goto L_27c7768; }
    c->r[0] = 0x20u;
    c->r[14] = 0x27c7760u; f_283b27c(c);
    c->r[5] = c->r[0];
    goto L_27c7770;
L_27c7768:;
    c->r[1] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_27c7770:;
    c->r[0] = c->r[5] + 0x18u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c77b0; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[6]);
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c7818;
L_27c77b0:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c78d4; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27c77e0; }
    c->r[0] = (c->r[7] << 1);
    c->r[4] = c->r[5];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); c->r[4] = c->r[4] + 0x1u; }
    if (COND_NE) { goto L_27c7800; }
    goto L_27c7810;
L_27c77e0:;
    c->r[10] = c->r[7] + 0x10u;
    c->r[10] = c->r[10] & 0xfffffff0u;
    c->r[0] = c->r[10];
    c->r[14] = 0x27c77f0u; f_283b27c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[10] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
L_27c7800:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c7810u; f_283aa78(c);
L_27c7810:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[7]; ST8(ea, c->r[0]); }
L_27c7818:;
    c->r[1] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c7850; }
    c->v.d[16] = LD64(c->r[1]);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    ST64(c->r[0], c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    goto L_27c78bc;
L_27c7850:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c78dc; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27c7880; }
    c->r[0] = (c->r[7] << 1);
    c->r[4] = c->r[5] + 0xdu;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[5] + 0xcu; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_27c78a4; }
    goto L_27c78b4;
L_27c7880:;
    c->r[6] = c->r[7] + 0x10u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c7890u; f_283b27c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[4]); }
L_27c78a4:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c78b4u; f_283aa78(c);
L_27c78b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[7]; ST8(ea, c->r[0]); }
L_27c78bc:;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27c78d4:;
    c->r[14] = 0x27c78dcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c78dc:;
    c->r[14] = 0x27c78e4u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27c79bc(Cpu *restrict c) {
    FN_ENTER(0x27c79bcu);
L_27c79bc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x6cu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] - c->r[0];
    c->r[8] = c->r[2];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_27c7ac4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x49u);
    if (COND_NE) { goto L_27c7ac4; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c7ad0; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] - 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27c7a58;
L_27c7a08:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c7a10u; f_283b288(c);
    goto L_27c7a58;
L_27c7a14:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[4] = v; }
L_27c7a18:;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c7a08; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c7a08; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[4];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[4] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
L_27c7a58:;
    { uint32_t ea = c->r[10] - 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_EQ) { goto L_27c7ad0; }
    c->r[6] = c->r[7] - 0x10u;
    { uint32_t ea = c->r[10] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c7a58; }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_EQ) { goto L_27c7a18; }
L_27c7a84:;
    c->r[5] = c->r[8] - 0x18u;
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c7aa0; }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c7aa0u; f_283b288(c);
L_27c7aa0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c7ab4; }
    { uint32_t ea = c->r[8] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c7ab4u; f_283b288(c);
L_27c7ab4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_NE) { goto L_27c7a84; }
    goto L_27c7a14;
L_27c7ac4:;
    c->r[4] = c->r[0];
    c->r[5] = c->r[4];
    goto L_27c89a4;
L_27c7ad0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = 0x0u;
    c->r[0] = 0x3c02u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[9]); }
    c->r[1] = 0xaaaau;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t ea = c->r[11] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3eu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27c7b18; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->r[0] = 0x2u;
    c->r[1] = 0x0u;
    goto L_27c8570;
L_27c7b18:;
    c->r[0] = 0x379d4bu;
    c->r[0] = 0x27c7b24u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_27c7b24:;
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c7cc8; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27c7b64; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    goto L_27c7cc8;
L_27c7b64:;
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] - c->r[2];
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 4);
    (void)f_subs(c, c->r[0], 0x10000000u);
    if (COND_CS) { goto L_27c89ec; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[7] = ~0xf0000000u;
    (void)f_adds(c, c->r[2], 0xf8000002u);
    if (COND_HI) { goto L_27c7ba8; }
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 3);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c7bdc; }
L_27c7ba8:;
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[7] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[7] << 4));
    if (COND_CS) { goto L_27c7bd0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c7bccu; f_283b27c(c);
    goto L_27c7be4;
L_27c7bd0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c7be4;
L_27c7bdc:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27c7be4:;
    c->r[1] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[0] + (c->r[6] << 4); ST32(ea, c->r[9]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    c->r[2] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_27c7c5c; }
L_27c7c0c:;
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] - 0x10u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[9]); }
    if (COND_NE) { goto L_27c7c0c; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c7c60;
L_27c7c5c:;
    c->r[4] = c->r[7];
L_27c7c60:;
    { uint32_t ea = c->r[8] + 0x20u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], c->r[4]);
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x28u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_27c7c8c; }
L_27c7c78:;
    c->r[7] = c->r[7] - 0x10u;
    c->r[0] = c->r[7];
    c->r[14] = 0x27c7c84u; f_27b91ec(c);
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27c7c78; }
L_27c7c8c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27c7cc8; }
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c7cc0; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c7cc0; }
    c->r[1] = 0x1000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c7cc8;
L_27c7cc0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c7cc8u; f_283b288(c);
L_27c7cc8:;
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[8];
    c->r[10] = c->r[5];
    c->r[14] = 0x27c7ce0u; f_27e4c20(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c7d1c; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] - 0x10u;
L_27c7d04:;
    c->r[0] = c->r[0] - 0x10u;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27c7d10u; f_27b91ec(c);
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_27c7d04; }
L_27c7d1c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_27c87a0; }
    c->r[0] = c->r[6] - c->r[4];
    c->r[2] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[7] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[10] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[1] * c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c83f8; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_27c7dac; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[4] - 0xcu; ST32(ea, c->r[0]); }
    goto L_27c7f18;
L_27c7dac:;
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 4);
    (void)f_subs(c, c->r[2], 0x10000000u);
    if (COND_CS) { goto L_27c89f4; }
    c->r[3] = c->r[0] - c->r[3];
    c->r[8] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 4);
    c->r[1] = c->r[4] - 0x4u;
    (void)f_adds(c, c->r[0], 0xf8000001u);
    if (COND_CS) { goto L_27c7e04; }
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 3);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], c->r[2]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_27c7e10; }
    c->r[7] = 0x0u;
    goto L_27c7e40;
L_27c7e04:;
    c->r[7] = ~0xf0000000u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
L_27c7e10:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1000u;
    c->r[1] = (c->r[7] << 4);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], (c->r[7] << 4));
    if (COND_CS) { goto L_27c7e38; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c7e34u; f_283b27c(c);
    goto L_27c7e40;
L_27c7e38:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_27c7e40:;
    c->r[1] = c->r[0] + (c->r[8] << 4);
    c->r[2] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[8] << 4); ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27c7ee0; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27c7e84:;
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x10u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27c7e84; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27c7eec;
L_27c7ee0:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27c7eec:;
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] - 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[14] = 0x27c7f18u; f_27e4b00(c);
L_27c7f18:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[3] = c->r[0];
    if (COND_CS) { goto L_27c83f8; }
    goto L_27c81e0;
L_27c7f30:;
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27c7f44;
L_27c7f3c:;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
L_27c7f44:;
    c->r[2] = c->r[4] + (c->r[4] << 1);
    c->r[10] = c->r[7];
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[10] + (c->r[2] << 3); ST32(ea, c->r[9]); c->r[10] = ea; }
    c->r[3] = c->r[7] + (c->r[0] << 3);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c7f84; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[10], c->v.d[16]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c8010;
L_27c7f84:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_CS) { goto L_27c89c8; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xbu);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_CS) { goto L_27c7fb8; }
    c->r[0] = (c->r[4] << 1);
    c->r[6] = c->r[10];
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27c7ff8; }
    goto L_27c8004;
L_27c7fb8:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[7] + (c->r[2] << 3);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + 0x10u;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x27c7fd8u; f_283b27c(c);
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27c7ff8:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27c8004u; f_283aa78(c);
L_27c8004:;
    { uint32_t ea = c->r[6] + c->r[4]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c8010:;
    c->r[2] = c->r[7] + (c->r[2] << 3);
    c->r[0] = c->r[8];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c804c; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27c80c4;
L_27c804c:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27c89d8; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27c807c; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); c->r[4] = c->r[4] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { goto L_27c80b0; }
    goto L_27c80bc;
L_27c807c:;
    c->r[7] = c->r[6] + 0x10u;
    c->r[8] = c->r[2];
    c->r[7] = c->r[7] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x27c8094u; f_283b27c(c);
    c->r[1] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27c80b0:;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0x27c80bcu; f_283aa78(c);
L_27c80bc:;
    { uint32_t ea = c->r[4] + c->r[6]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27c80c4:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[10] + 0x18u;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_27c812c; }
L_27c80d8:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[10] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[10] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[2]); }
    c->r[10] = c->r[10] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_27c80d8; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27c8130;
L_27c812c:;
    c->r[7] = c->r[4];
L_27c8130:;
    { uint32_t ea = c->r[5] - 0x10u; ST32(ea, c->r[10]); }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[5] - 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[4], c->r[7]);
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_27c818c; }
L_27c8154:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8168; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8168u; f_283b288(c);
L_27c8168:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8180; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8180u; f_283b288(c);
L_27c8180:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[4] = c->r[5];
    if (COND_NE) { goto L_27c8154; }
L_27c818c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c83e4; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27c81d4; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27c81d4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27c83e4;
L_27c81d4:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27c81dcu; f_283b288(c);
    goto L_27c83e4;
L_27c81e0:;
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[0] + (c->r[2] << 3);
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_27c8234; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c82c8; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c8330;
L_27c8234:;
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[6] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27c89b0; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[6] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c8294; }
    c->r[6] = (c->r[1] << 1);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c7f3c; }
L_27c8294:;
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[7];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27c7f30; }
    c->r[14] = 0x27c82c0u; f_283b27c(c);
    c->r[7] = c->r[0];
    goto L_27c7f44;
L_27c82c8:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_CS) { goto L_27c89b8; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xbu);
    if (COND_CS) { goto L_27c82f8; }
    c->r[0] = (c->r[4] << 1);
    c->r[7] = c->r[6];
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27c8320; }
    goto L_27c832c;
L_27c82f8:;
    c->r[10] = c->r[4] + 0x10u;
    c->r[7] = c->r[1];
    c->r[10] = c->r[10] & 0xfffffff0u;
    c->r[0] = c->r[10];
    c->r[14] = 0x27c830cu; f_283b27c(c);
    c->r[1] = c->r[7];
    c->r[7] = c->r[0];
    c->r[0] = c->r[10] | 0x1u;
    c->r[10] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[7]); }
L_27c8320:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[4];
    c->r[14] = 0x27c832cu; f_283aa78(c);
L_27c832c:;
    { uint32_t ea = c->r[7] + c->r[4]; ST8(ea, c->r[9]); }
L_27c8330:;
    c->r[4] = c->r[6];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c8368; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_27c83d8;
L_27c8368:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27c89c0; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27c8398; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); c->r[4] = c->r[4] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { goto L_27c83c8; }
    goto L_27c83d4;
L_27c8398:;
    c->r[8] = c->r[7] + 0x10u;
    c->r[4] = c->r[1];
    c->r[8] = c->r[8] & 0xfffffff0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x27c83acu; f_283b27c(c);
    c->r[1] = c->r[4];
    c->r[4] = c->r[0];
    c->r[0] = c->r[8] | 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_27c83c8:;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c83d4u; f_283aa78(c);
L_27c83d4:;
    { uint32_t ea = c->r[4] + c->r[7]; ST8(ea, c->r[9]); }
L_27c83d8:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[5] - 0xcu; ST32(ea, c->r[0]); }
L_27c83e4:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_27c81e0; }
L_27c83f8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27c8554; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[7] = c->r[1];
    c->r[4] = (c->r[0] << 3);
L_27c841c:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27c8444; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0x40u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27c8444u; f_27c75a8(c);
L_27c8444:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] + 0xdu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[14] = 0x27c8468u; f_27c75a8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    ST64(c->r[11] - 48u, c->v.d[16]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[10] | 0x1u; }
    c->r[0] = c->r[11] - 0x40u;
    c->r[14] = 0x27c84a8u; f_27c75a8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27c84b8; }
    c->r[0] = c->r[6];
    c->r[14] = 0x27c84b8u; f_283b288(c);
L_27c84b8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[4] = c->r[4] + 0x18u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_27c841c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27c8554; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6];
L_27c84e4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27c8534; }
    c->r[4] = c->r[6] - 0x18u;
L_27c84f4:;
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8510; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8510u; f_283b288(c);
L_27c8510:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8524; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8524u; f_283b288(c);
L_27c8524:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_27c84f4; }
    c->r[6] = c->r[4];
L_27c8534:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] - 0x1u;
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_27c84e4; }
L_27c8554:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27c7b24; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c8570:;
    c->r[4] = c->r[11] - 0x40u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[6] = c->r[4] | 0x1u;
    if (COND_EQ) { c->r[9] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[6]; }
    c->r[0] = c->r[1] + c->r[9];
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3eu);
    if (COND_NE) { goto L_27c85ac; }
    c->r[0] = 0x3795b8u;
    c->r[1] = 0x27c85a0u + c->r[0];
    c->r[0] = c->r[11] - 0x40u;
    c->r[2] = 0x2u;
    c->r[14] = 0x27c85a8u; f_27c75a8(c);
    goto L_27c85c0;
L_27c85ac:;
    c->r[0] = 0x3774c6u;
    c->r[1] = 0x27c85b8u + c->r[0];
    c->r[0] = c->r[11] - 0x40u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27c85c0u; f_27c75a8(c);
L_27c85c0:;
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x5u;
    { uint32_t ea = c->r[11] - 0x3fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[0] | (c->r[5] << 8);
    { uint32_t ea = c->r[11] - 0x3bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[6] << 8);
    { uint32_t ea = c->r[11] - 0x39u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[2] = c->r[2] | (c->r[4] << 8);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c8708; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x46u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27c8980;
L_27c8708:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xaaaau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27c89fc; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x5555u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c8768; }
    c->r[1] = (c->r[1] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_27c87b8; }
L_27c8768:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c87ac; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c879cu; f_283b27c(c);
    goto L_27c87c4;
L_27c87a0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[5];
    goto L_27c8988;
L_27c87ac:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c87c4;
L_27c87b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_27c87c4:;
    c->r[2] = c->r[4] + (c->r[4] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[7]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[11] - 0x2au; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x2au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x46u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 8);
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x46u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27c88dc; }
L_27c888c:;
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
    if (COND_NE) { goto L_27c888c; }
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    goto L_27c88e0;
L_27c88dc:;
    c->r[4] = c->r[6];
L_27c88e0:;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[4]);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c892c; }
L_27c88f4:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8908; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8908u; f_283b288(c);
L_27c8908:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8920; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8920u; f_283b288(c);
L_27c8920:;
    (void)f_subs(c, c->r[4], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27c88f4; }
L_27c892c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_27c8980; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c8978; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c8978; }
    c->r[2] = 0xfu - c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[4] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c8980;
L_27c8978:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c8980u; f_283b288(c);
L_27c8980:;
    c->r[4] = c->r[6] + 0x1u;
    c->r[8] = 0x0u;
L_27c8988:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c899c; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c899cu; f_283b288(c);
L_27c899c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[5] = c->r[4]; }
L_27c89a4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27c89b0:;
    c->r[14] = 0x27c89b8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89b8:;
    c->r[14] = 0x27c89c0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89c0:;
    c->r[14] = 0x27c89c8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89c8:;
    c->r[8] = c->r[7];
    c->r[7] = c->r[3];
    c->r[14] = 0x27c89d8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89d8:;
    c->r[8] = c->r[7];
    c->r[6] = c->r[2];
    c->r[7] = c->r[3];
    c->r[14] = 0x27c89ecu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89ec:;
    c->r[14] = 0x27c89f4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89f4:;
    c->r[14] = 0x27c89fcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27c89fc:;
    c->r[14] = 0x27c8a04u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27c8b14(Cpu *restrict c) {
    FN_ENTER(0x27c8b14u);
L_27c8b14:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[6] = c->r[1];
    c->r[9] = c->r[0];
    c->r[0] = c->r[6] - c->r[9];
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27c9448; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x53u);
    if (COND_NE) { goto L_27c9448; }
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[4] = 0x5555u;
    c->r[7] = 0xaaaau;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x5550000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[5] - 0x5fu;
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_HI) { goto L_27c909c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27c8b74u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27c8bccu: goto L_27c8bcc; case 0x27c909cu: goto L_27c909c; case 0x27c911cu: goto L_27c911c; case 0x27c9200u: goto L_27c9200; case 0x27c925cu: goto L_27c925c; case 0x27c92c0u: goto L_27c92c0; case 0x27c9318u: goto L_27c9318; case 0x27c9374u: goto L_27c9374; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27c8bcc:;
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27c9448; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c9090; }
    c->r[7] = 0xaaabu;
    c->r[9] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    goto L_27c8e9c;
L_27c8c04:;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27c8c18;
L_27c8c10:;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
L_27c8c18:;
    c->r[10] = c->r[4] + (c->r[4] << 1);
    c->r[6] = c->r[3];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[6] + (c->r[10] << 3); ST32(ea, c->r[9]); c->r[6] = ea; }
    c->r[12] = c->r[3] + (c->r[0] << 3);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c8c58; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c8cdc;
L_27c8c58:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27ca554; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27c8c8c; }
    c->r[0] = (c->r[7] << 1);
    c->r[4] = c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); c->r[4] = c->r[4] + 0x1u; }
    if (COND_NE) { goto L_27c8cc4; }
    goto L_27c8cd0;
L_27c8c8c:;
    c->r[5] = c->r[7] + 0x10u;
    c->r[0] = c->r[3] + (c->r[10] << 3);
    c->r[5] = c->r[5] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[4] = c->r[1];
    c->r[14] = 0x27c8ca8u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); }
L_27c8cc4:;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c8cd0u; f_283aa78(c);
L_27c8cd0:;
    { uint32_t ea = c->r[4] + c->r[7]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
L_27c8cdc:;
    c->r[10] = c->r[3] + (c->r[10] << 3);
    c->r[0] = c->r[8];
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[9]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c8d18; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_27c8d8c;
L_27c8d18:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27ca564; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27c8d48; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_27c8d78; }
    goto L_27c8d84;
L_27c8d48:;
    c->r[4] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c8d5cu; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
L_27c8d78:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c8d84u; f_283aa78(c);
L_27c8d84:;
    { uint32_t ea = c->r[7] + c->r[5]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27c8d8c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_27c8df0; }
L_27c8da0:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[6] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[6] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_27c8da0; }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    goto L_27c8df4;
L_27c8df0:;
    c->r[4] = c->r[5];
L_27c8df4:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[5], c->r[4]);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_27c8e44; }
L_27c8e0c:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8e20; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8e20u; f_283b288(c);
L_27c8e20:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c8e38; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c8e38u; f_283b288(c);
L_27c8e38:;
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27c8e0c; }
L_27c8e44:;
    c->r[7] = 0xaaabu;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    if (COND_EQ) { goto L_27c9080; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27c8e90; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27c8e90; }
    c->r[2] = 0xfu - c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[4] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27c9080;
L_27c8e90:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c8e98u; f_283b288(c);
    goto L_27c9080;
L_27c8e9c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_27c8ed8; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c8f64; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c8fd0;
L_27c8ed8:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaaau;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = c->r[5] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27ca544; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c8f30; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27c8c10; }
L_27c8f30:;
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27c8c04; }
    c->r[14] = 0x27c8f5cu; f_283b27c(c);
    c->r[3] = c->r[0];
    goto L_27c8c18;
L_27c8f64:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27ca544; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27c8f94; }
    c->r[0] = (c->r[6] << 1);
    c->r[7] = c->r[5];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27c8fb0; }
    goto L_27c8fc0;
L_27c8f94:;
    c->r[4] = c->r[6] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c8fa4u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
L_27c8fb0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[10];
    c->r[2] = c->r[6];
    c->r[14] = 0x27c8fc0u; f_283aa78(c);
L_27c8fc0:;
    { uint32_t ea = c->r[7] + c->r[6]; ST8(ea, c->r[9]); }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
L_27c8fd0:;
    c->r[6] = c->r[5];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[9]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c9004; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c9074;
L_27c9004:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27ca54c; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27c9030; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27c9054; }
    goto L_27c9064;
L_27c9030:;
    c->r[4] = c->r[7] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27c9040u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[6]); }
L_27c9054:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[7];
    c->r[14] = 0x27c9064u; f_283aa78(c);
L_27c9064:;
    { uint32_t ea = c->r[6] + c->r[7]; ST8(ea, c->r[9]); }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
L_27c9074:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_27c9080:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x18u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_27c8e9c; }
L_27c9090:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27c909c:;
    c->r[4] = c->r[5] - 0x30u;
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_CC) { goto L_27c90b8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27c90b0u; f_2854f2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c9448; }
L_27c90b8:;
    c->r[8] = c->r[9] + 0x2u;
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_EQ) { goto L_27c9448; }
    c->r[0] = ~0x36u;
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_CC) { c->r[0] = ~0x2fu; }
    c->r[5] = c->r[0] + c->r[5];
L_27c90d4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[7] = c->r[4] - 0x30u;
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_CC) { goto L_27c90f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x27c90ecu; f_2854f2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27c971c; }
L_27c90f4:;
    c->r[0] = c->r[5] + (c->r[5] << 3);
    (void)f_subs(c, c->r[7], 0xau);
    c->r[1] = ~0x36u;
    if (COND_CC) { c->r[1] = ~0x2fu; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[8]);
    c->r[5] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_27c90d4; }
    goto L_27c9448;
L_27c911c:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c9124u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3ef310u;
    c->r[1] = 0x65u;
    c->r[0] = 0x27c9138u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x6572u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6d610000u;
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0x6du;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_27c93d8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ca57c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { goto L_27c91cc; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c9c0c; }
L_27c91cc:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c96d4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c91fcu; f_283b27c(c);
    goto L_27c9c14;
L_27c9200:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c9208u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3ef280u;
    c->r[0] = 0x27c9218u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x6u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c9454; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xeu;
    goto L_27c93e4;
L_27c925c:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c9264u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3ef1a0u;
    c->r[1] = 0x6eu;
    c->r[0] = 0x27c9278u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x69u;
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x67u;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c94d4; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xbu;
    goto L_27c93e4;
L_27c92c0:;
    c->r[0] = 0x20u;
    c->r[14] = 0x27c92c8u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3ef1ccu;
    c->r[1] = 0x67u;
    c->r[0] = 0x27c92dcu + c->r[0];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c9554; }
    c->r[2] = 0x21u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x11u;
    goto L_27c93e4;
L_27c9318:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c9320u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3ef138u;
    c->r[0] = 0x27c9330u + c->r[0];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = c->r[0] + 0x5u;
    { uint32_t ea = c->r[0]; c->v.d[17] = LD64(ea + 0u); }
    c->r[0] = c->r[6] + 0x5u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c95d4; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xdu;
    goto L_27c93e4;
L_27c9374:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27c937cu; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x3ef098u;
    c->r[1] = 0x65u;
    c->r[0] = 0x27c9390u + c->r[0];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->v.d[16] = LD64(c->r[0]);
    c->r[0] = 0x6572u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6d610000u;
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0x6du;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c9654; }
L_27c93d8:;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xcu;
L_27c93e4:;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    c->r[9] = c->r[9] + 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_27c9448:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27c9454:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ca584; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { goto L_27c94a0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c9d90; }
L_27c94a0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c96e0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c94d0u; f_283b27c(c);
    goto L_27c9d98;
L_27c94d4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ca58c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { goto L_27c9520; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27c9f14; }
L_27c9520:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c96ec; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c9550u; f_283b27c(c);
    goto L_27c9f1c;
L_27c9554:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ca594; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { goto L_27c95a0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27ca09c; }
L_27c95a0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c96f8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c95d0u; f_283b27c(c);
    goto L_27ca0a4;
L_27c95d4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ca59c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { goto L_27c9620; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27ca22c; }
L_27c9620:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c9704; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c9650u; f_283b27c(c);
    goto L_27ca234;
L_27c9654:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27ca5a4; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { goto L_27c96a0; }
    c->r[7] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27ca3b8; }
L_27c96a0:;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27c9710; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27c96d0u; f_283b27c(c);
    goto L_27ca3c0;
L_27c96d4:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c9c14;
L_27c96e0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c9d98;
L_27c96ec:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27c9f1c;
L_27c96f8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27ca0a4;
L_27c9704:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27ca234;
L_27c9710:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27ca3c0;
L_27c971c:;
    (void)f_subs(c, c->r[4], 0x5fu);
    if (COND_NE) { goto L_27c9448; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[1], (uint32_t)((int32_t)c->r[2] >> 4));
    if (COND_CS) { goto L_27c9448; }
    { uint32_t ea = c->r[0] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c9c04; }
    c->r[4] = 0x0u;
    goto L_27c99f8;
L_27c9758:;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27c976c;
L_27c9764:;
    c->r[6] = 0x0u;
    c->r[9] = 0x0u;
L_27c976c:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[10] = c->r[9];
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[10] + (c->r[2] << 3); ST32(ea, c->r[4]); c->r[10] = ea; }
    c->r[3] = c->r[9] + (c->r[0] << 3);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c97ac; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7]);
    ST64(c->r[10], c->v.d[16]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c9834;
L_27c97ac:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27ca5b4; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    if (COND_CS) { goto L_27c97e0; }
    c->r[0] = (c->r[5] << 1);
    c->r[6] = c->r[10];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27c981c; }
    goto L_27c9828;
L_27c97e0:;
    c->r[0] = c->r[9] + (c->r[2] << 3);
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[9] = c->r[5] + 0x10u;
    c->r[9] = c->r[9] & 0xfffffff0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x27c97fcu; f_283b27c(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[9] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
L_27c981c:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c9828u; f_283aa78(c);
L_27c9828:;
    { uint32_t ea = c->r[6] + c->r[5]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27c9834:;
    c->r[2] = c->r[9] + (c->r[2] << 3);
    c->r[0] = c->r[7];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c986c; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c98e0;
L_27c986c:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27ca5bc; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27c9898; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { goto L_27c98cc; }
    goto L_27c98d8;
L_27c9898:;
    c->r[9] = c->r[6] + 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[9] = c->r[9] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x27c98b0u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] | 0x1u;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[6]); }
L_27c98cc:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x27c98d8u; f_283aa78(c);
L_27c98d8:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
L_27c98e0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x18u;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_EQ) { goto L_27c994c; }
L_27c98f8:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[10] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[10] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[2]); }
    c->r[10] = c->r[10] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_NE) { goto L_27c98f8; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[5] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    goto L_27c9954;
L_27c994c:;
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
L_27c9954:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[9], c->r[5]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_27c99a4; }
L_27c996c:;
    { uint32_t ea = c->r[9] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9980; }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c9980u; f_283b288(c);
L_27c9980:;
    { uint32_t ea = c->r[9] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[9] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9998; }
    { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c9998u; f_283b288(c);
L_27c9998:;
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[9] = c->r[6];
    if (COND_NE) { goto L_27c996c; }
L_27c99a4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27c9bf0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27c99ec; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27c99ec; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27c9bf0;
L_27c99ec:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27c99f4u; f_283b288(c);
    goto L_27c9bf0;
L_27c99f8:;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_EQ) { goto L_27c9a38; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c9ad0; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7]);
    ST64(c->r[10], c->v.d[16]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27c9b34;
L_27c9a38:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0xaaabu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[10] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[6]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27ca574; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[6] = c->r[3];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27c9a98; }
    c->r[6] = (c->r[1] << 1);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c9764; }
L_27c9a98:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[9] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[9];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27c9758; }
    c->r[14] = 0x27c9ac8u; f_283b27c(c);
    c->r[9] = c->r[0];
    goto L_27c976c;
L_27c9ad0:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27ca574; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_CS) { goto L_27c9b00; }
    c->r[0] = (c->r[5] << 1);
    c->r[6] = c->r[10];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27c9b24; }
    goto L_27c9b30;
L_27c9b00:;
    c->r[9] = c->r[5] + 0x10u;
    c->r[6] = c->r[1];
    c->r[9] = c->r[9] & 0xfffffff0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x27c9b14u; f_283b27c(c);
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[9] | 0x1u;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
L_27c9b24:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27c9b30u; f_283aa78(c);
L_27c9b30:;
    { uint32_t ea = c->r[6] + c->r[5]; ST8(ea, c->r[4]); }
L_27c9b34:;
    c->r[5] = c->r[10];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27c9b70; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27c9be0;
L_27c9b70:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27ca5ac; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27c9ba0; }
    c->r[0] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_27c9bd0; }
    goto L_27c9bdc;
L_27c9ba0:;
    c->r[9] = c->r[6] + 0x10u;
    c->r[5] = c->r[1];
    c->r[9] = c->r[9] & 0xfffffff0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x27c9bb4u; f_283b27c(c);
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    c->r[0] = c->r[9] | 0x1u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c9bd0:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x27c9bdcu; f_283aa78(c);
L_27c9bdc:;
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[4]); }
L_27c9be0:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27c9bf0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x18u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_27c99f8; }
L_27c9c04:;
    c->r[9] = c->r[8] + 0x1u;
    goto L_27c9448;
L_27c9c0c:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27c9c14:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xcu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[4] = c->r[1] + 0xdu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27c9cec; }
L_27c9c98:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27c9c98; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27c9cf0;
L_27c9cec:;
    c->r[6] = c->r[4];
L_27c9cf0:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c9d3c; }
L_27c9d04:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9d18; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c9d18u; f_283b288(c);
L_27c9d18:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9d30; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c9d30u; f_283b288(c);
L_27c9d30:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27c9d04; }
L_27c9d3c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c9d88; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27c9d80; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27c9d80; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27c9d88; }
    goto L_27ca528;
L_27c9d80:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c9d88u; f_283b288(c);
L_27c9d88:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27c9d90:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27c9d98:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[4] = c->r[1] + 0xdu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27c9e70; }
L_27c9e1c:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27c9e1c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27c9e74;
L_27c9e70:;
    c->r[6] = c->r[4];
L_27c9e74:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27c9ec0; }
L_27c9e88:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9e9c; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c9e9cu; f_283b288(c);
L_27c9e9c:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27c9eb4; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27c9eb4u; f_283b288(c);
L_27c9eb4:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27c9e88; }
L_27c9ec0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27c9f0c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27c9f04; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27c9f04; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27c9f0c; }
    goto L_27ca528;
L_27c9f04:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27c9f0cu; f_283b288(c);
L_27c9f0c:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27c9f14:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27c9f1c:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[4] = c->r[1] + 0xdu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27c9ff4; }
L_27c9fa0:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27c9fa0; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27c9ff8;
L_27c9ff4:;
    c->r[6] = c->r[4];
L_27c9ff8:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27ca044; }
L_27ca00c:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca020; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca020u; f_283b288(c);
L_27ca020:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca038; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca038u; f_283b288(c);
L_27ca038:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27ca00c; }
L_27ca044:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ca090; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27ca088; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27ca088; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27ca090; }
    goto L_27ca528;
L_27ca088:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27ca090u; f_283b288(c);
L_27ca090:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27ca09c:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27ca0a4:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x21u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[4] = c->r[1] + 0xdu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27ca17c; }
L_27ca128:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27ca128; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27ca180;
L_27ca17c:;
    c->r[6] = c->r[4];
L_27ca180:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27ca1cc; }
L_27ca194:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca1a8; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca1a8u; f_283b288(c);
L_27ca1a8:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca1c0; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca1c0u; f_283b288(c);
L_27ca1c0:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27ca194; }
L_27ca1cc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ca21c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27ca214; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27ca214; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27ca21c; }
    goto L_27ca528;
L_27ca214:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27ca21cu; f_283b288(c);
L_27ca21c:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27ca22c:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27ca234:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xdu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[4] = c->r[1] + 0xdu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27ca314; }
L_27ca2b8:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27ca2b8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27ca318;
L_27ca314:;
    c->r[6] = c->r[4];
L_27ca318:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27ca364; }
L_27ca32c:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca340; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca340u; f_283b288(c);
L_27ca340:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca358; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca358u; f_283b288(c);
L_27ca358:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27ca32c; }
L_27ca364:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ca3b0; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27ca3a8; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27ca3a8; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27ca3b0; }
    goto L_27ca528;
L_27ca3a8:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27ca3b0u; f_283b288(c);
L_27ca3b0:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27ca3b8:;
    c->r[7] = 0x0u;
    c->r[0] = 0x0u;
L_27ca3c0:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x11u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0xcu;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[4] = c->r[1] + 0xdu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = (c->r[3] >> 8);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27ca498; }
L_27ca444:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27ca444; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27ca49c;
L_27ca498:;
    c->r[6] = c->r[4];
L_27ca49c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27ca4e8; }
L_27ca4b0:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca4c4; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca4c4u; f_283b288(c);
L_27ca4c4:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca4dc; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca4dcu; f_283b288(c);
L_27ca4dc:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27ca4b0; }
L_27ca4e8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27ca53c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27ca534; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27ca534; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_27ca53c; }
L_27ca528:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27ca534:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27ca53cu; f_283b288(c);
L_27ca53c:;
    c->r[9] = c->r[9] + 0x2u;
    goto L_27c9448;
L_27ca544:;
    c->r[14] = 0x27ca54cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca54c:;
    c->r[14] = 0x27ca554u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca554:;
    c->r[7] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27ca564u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca564:;
    c->r[7] = c->r[3];
    c->r[5] = c->r[12];
    c->r[14] = 0x27ca574u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca574:;
    c->r[14] = 0x27ca57cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca57c:;
    c->r[14] = 0x27ca584u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca584:;
    c->r[14] = 0x27ca58cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca58c:;
    c->r[14] = 0x27ca594u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca594:;
    c->r[14] = 0x27ca59cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca59c:;
    c->r[14] = 0x27ca5a4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca5a4:;
    c->r[14] = 0x27ca5acu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca5ac:;
    c->r[14] = 0x27ca5b4u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca5b4:;
    c->r[14] = 0x27ca5bcu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27ca5bc:;
    c->r[6] = c->r[2];
    c->r[14] = 0x27ca5c8u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27ca728(Cpu *restrict c) {
    FN_ENTER(0x27ca728u);
L_27ca728:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x3cu;
    c->r[9] = c->r[0];
    c->r[10] = c->r[2];
    c->r[0] = c->r[1] - c->r[9];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27cad98; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x54u);
    if (COND_NE) { goto L_27cad98; }
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0xaaaau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[0], 0x5fu);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_27cac5c; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27cad98; }
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_27cacac; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27cac50; }
    c->r[7] = 0xaaabu;
    c->r[9] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    goto L_27caa58;
L_27ca7b8:;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27ca7cc;
L_27ca7c4:;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
L_27ca7cc:;
    c->r[10] = c->r[4] + (c->r[4] << 1);
    c->r[6] = c->r[3];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[6] + (c->r[10] << 3); ST32(ea, c->r[9]); c->r[6] = ea; }
    c->r[12] = c->r[3] + (c->r[0] << 3);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27ca80c; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27ca890;
L_27ca80c:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27cb950; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27ca840; }
    c->r[0] = (c->r[7] << 1);
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { goto L_27ca878; }
    goto L_27ca884;
L_27ca840:;
    c->r[4] = c->r[7] + 0x10u;
    c->r[0] = c->r[3] + (c->r[10] << 3);
    c->r[4] = c->r[4] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[5] = c->r[1];
    c->r[14] = 0x27ca85cu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); }
L_27ca878:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x27ca884u; f_283aa78(c);
L_27ca884:;
    { uint32_t ea = c->r[5] + c->r[7]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_27ca890:;
    c->r[10] = c->r[3] + (c->r[10] << 3);
    c->r[0] = c->r[8];
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[9]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27ca8cc; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[7], c->v.d[16]);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_27ca940;
L_27ca8cc:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_CS) { goto L_27cb960; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xbu);
    if (COND_CS) { goto L_27ca8fc; }
    c->r[0] = (c->r[4] << 1);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_27ca92c; }
    goto L_27ca938;
L_27ca8fc:;
    c->r[5] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27ca910u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
L_27ca92c:;
    c->r[0] = c->r[7];
    c->r[2] = c->r[4];
    c->r[14] = 0x27ca938u; f_283aa78(c);
L_27ca938:;
    { uint32_t ea = c->r[7] + c->r[4]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27ca940:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_27ca9a4; }
L_27ca954:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[6] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[6] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_27ca954; }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    goto L_27ca9a8;
L_27ca9a4:;
    c->r[4] = c->r[5];
L_27ca9a8:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[5], c->r[4]);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_27ca9f8; }
L_27ca9c0:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca9d4; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca9d4u; f_283b288(c);
L_27ca9d4:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ca9ec; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ca9ecu; f_283b288(c);
L_27ca9ec:;
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_NE) { goto L_27ca9c0; }
L_27ca9f8:;
    c->r[5] = 0xaaaau;
    c->r[7] = 0xaaabu;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xaaa0000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    if (COND_EQ) { goto L_27cac40; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CC) { goto L_27caa4c; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27caa4c; }
    c->r[2] = 0xfu - c->r[4];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[4] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); } }
    goto L_27cac40;
L_27caa4c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27caa54u; f_283b288(c);
    goto L_27cac40;
L_27caa58:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { goto L_27caa94; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cab14; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[4], c->v.d[16]);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27cab88;
L_27caa94:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[7]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27cb940; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27caae0; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27ca7c4; }
L_27caae0:;
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27ca7b8; }
    c->r[14] = 0x27cab0cu; f_283b27c(c);
    c->r[3] = c->r[0];
    goto L_27ca7cc;
L_27cab14:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_adds(c, c->r[6], 0x10u);
    if (COND_CS) { goto L_27cb940; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[6], 0xbu);
    if (COND_CS) { goto L_27cab44; }
    c->r[0] = (c->r[6] << 1);
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { goto L_27cab68; }
    goto L_27cab78;
L_27cab44:;
    c->r[5] = c->r[6] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27cab54u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    c->r[5] = 0xaaaau;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xaaa0000u;
L_27cab68:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[10];
    c->r[2] = c->r[6];
    c->r[14] = 0x27cab78u; f_283aa78(c);
L_27cab78:;
    { uint32_t ea = c->r[7] + c->r[6]; ST8(ea, c->r[9]); }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
L_27cab88:;
    c->r[6] = c->r[4];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[9]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cabbc; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[6], c->v.d[16]);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27cac34;
L_27cabbc:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27cb948; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27cabe8; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27cac14; }
    goto L_27cac24;
L_27cabe8:;
    c->r[5] = c->r[7] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27cabf8u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    c->r[5] = 0xaaaau;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xaaa0000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
L_27cac14:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[7];
    c->r[14] = 0x27cac24u; f_283aa78(c);
L_27cac24:;
    { uint32_t ea = c->r[6] + c->r[7]; ST8(ea, c->r[9]); }
    c->r[7] = 0xaaabu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
L_27cac34:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_27cac40:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x18u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_27caa58; }
L_27cac50:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x2u;
    goto L_27cad9c;
L_27cac5c:;
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_27cad98; }
    c->r[2] = c->r[9] + 0x2u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_27cad98; }
    c->r[1] = 0x2u - c->r[1];
    c->r[5] = 0x0u;
L_27cac7c:;
    c->r[7] = c->r[9] + c->r[5];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - 0x30u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_27cad4c; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[5] = c->r[5] + 0x1u;
    c->r[3] = c->r[9] + c->r[5];
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[2] = f_adds(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_27cac7c; }
    goto L_27cad98;
L_27cacac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27cada8; }
    c->r[2] = 0x4u;
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = 0x5fu;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x54u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x1eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27cb4c0;
L_27cad4c:;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_NE) { goto L_27cad98; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27cad98; }
    { uint32_t ea = c->r[2] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[0], (uint32_t)((int32_t)c->r[2] >> 4));
    if (COND_CS) { goto L_27cb2ec; }
    { uint32_t ea = c->r[1] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27cb2d8; }
    c->r[9] = 0x0u;
    goto L_27cb0d8;
L_27cad98:;
    c->r[6] = c->r[9];
L_27cad9c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27cada8:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27cb980; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x5555u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27cadfc; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27cb330; }
L_27cadfc:;
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cb2e0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27cae2cu; f_283b27c(c);
    goto L_27cb338;
L_27cae30:;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_27cae44;
L_27cae3c:;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_27cae44:;
    c->r[2] = c->r[4] + (c->r[4] << 1);
    c->r[10] = c->r[6];
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[10] + (c->r[2] << 3); ST32(ea, c->r[9]); c->r[10] = ea; }
    c->r[4] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cae80; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[10], c->v.d[16]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27caf10;
L_27cae80:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x10u);
    if (COND_CS) { goto L_27cb988; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0xbu);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    if (COND_CS) { goto L_27caeb8; }
    c->r[0] = (c->r[5] << 1);
    c->r[6] = c->r[10];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27caef8; }
    goto L_27caf04;
L_27caeb8:;
    c->r[0] = c->r[6] + (c->r[2] << 3);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[5] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[1];
    c->r[0] = c->r[4];
    c->r[14] = 0x27caed8u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
L_27caef8:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x27caf04u; f_283aa78(c);
L_27caf04:;
    { uint32_t ea = c->r[6] + c->r[5]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27caf10:;
    c->r[2] = c->r[6] + (c->r[2] << 3);
    c->r[0] = c->r[8];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[9]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27caf48; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27cafc0;
L_27caf48:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_CS) { goto L_27cb994; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xbu);
    if (COND_CS) { goto L_27caf78; }
    c->r[0] = (c->r[4] << 1);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { goto L_27cafac; }
    goto L_27cafb8;
L_27caf78:;
    c->r[6] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x27caf90u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[4]); }
L_27cafac:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x27cafb8u; f_283aa78(c);
L_27cafb8:;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
L_27cafc0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0x18u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_27cb02c; }
L_27cafd8:;
    { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 24u);
    ST64(c->r[10] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[10] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.d[16] = LD64(c->r[1] - 12u);
    ST64(c->r[10] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[2]); }
    c->r[10] = c->r[10] - 0x18u;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[1] - 0x18u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_27cafd8; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    goto L_27cb034;
L_27cb02c:;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_27cb034:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[6], c->r[5]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_27cb084; }
L_27cb04c:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb060; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cb060u; f_283b288(c);
L_27cb060:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb078; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cb078u; f_283b288(c);
L_27cb078:;
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[6] = c->r[4];
    if (COND_NE) { goto L_27cb04c; }
L_27cb084:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27cb2c4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27cb0cc; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27cb0cc; }
    c->r[2] = 0xfu - c->r[5];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27cb2c4;
L_27cb0cc:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27cb0d4u; f_283b288(c);
    goto L_27cb2c4;
L_27cb0d8:;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_EQ) { goto L_27cb118; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cb1b0; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[8]);
    ST64(c->r[10], c->v.d[16]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    goto L_27cb214;
L_27cb118:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0xaaabu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaaaa0000u;
    c->r[3] = 0xaaaau;
    c->r[0] = c->r[10] - c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[6]; c->r[4] = r; }
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_27cb970; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    c->r[5] = c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27cb178; }
    c->r[5] = (c->r[1] << 1);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { c->r[5] = c->r[0]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27cae3c; }
L_27cb178:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    c->r[2] = c->r[1] - c->r[6];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_27cae30; }
    c->r[14] = 0x27cb1a8u; f_283b27c(c);
    c->r[6] = c->r[0];
    goto L_27cae44;
L_27cb1b0:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_CS) { goto L_27cb970; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xbu);
    if (COND_CS) { goto L_27cb1e0; }
    c->r[0] = (c->r[4] << 1);
    c->r[6] = c->r[10];
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    if (COND_NE) { goto L_27cb204; }
    goto L_27cb210;
L_27cb1e0:;
    c->r[5] = c->r[4] + 0x10u;
    c->r[6] = c->r[1];
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27cb1f4u; f_283b27c(c);
    c->r[1] = c->r[6];
    c->r[6] = c->r[0];
    c->r[0] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); }
L_27cb204:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x27cb210u; f_283aa78(c);
L_27cb210:;
    { uint32_t ea = c->r[6] + c->r[4]; ST8(ea, c->r[9]); }
L_27cb214:;
    c->r[5] = c->r[10];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[9]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cb24c; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST64(c->r[5], c->v.d[16]);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27cb2b8;
L_27cb24c:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_CS) { goto L_27cb978; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xbu);
    if (COND_CS) { goto L_27cb27c; }
    c->r[0] = (c->r[4] << 1);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { goto L_27cb2a8; }
    goto L_27cb2b4;
L_27cb27c:;
    c->r[6] = c->r[4] + 0x10u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27cb290u; f_283b27c(c);
    c->r[1] = c->r[5];
    c->r[5] = c->r[0];
    c->r[0] = c->r[6] | 0x1u;
    c->r[2] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_27cb2a8:;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x27cb2b4u; f_283aa78(c);
L_27cb2b4:;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[9]); }
L_27cb2b8:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_27cb2c4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_27cb0d8; }
L_27cb2d8:;
    c->r[6] = c->r[7] + 0x3u;
    goto L_27cad9c;
L_27cb2e0:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27cb338;
L_27cb2ec:;
    c->r[6] = c->r[7] + 0x3u;
    c->r[0] = 0x0u;
    c->r[8] = c->r[6] - c->r[9];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    (void)f_adds(c, c->r[8], 0x10u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27cb9a0; }
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_HI) { goto L_27cb4d0; }
    c->r[0] = (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_adds(c, c->r[5], 0x3u);
    if (COND_NE) { goto L_27cb4f8; }
    goto L_27cb578;
L_27cb330:;
    c->r[5] = 0x0u;
    c->r[0] = 0x0u;
L_27cb338:;
    c->r[2] = c->r[4] + (c->r[4] << 1);
    c->r[3] = 0x4u;
    c->r[1] = c->r[0];
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0x5fu;
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x54u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x1eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
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
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_27cb424; }
L_27cb3d0:;
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
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27cb3d0; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_27cb428;
L_27cb424:;
    c->r[6] = c->r[4];
L_27cb428:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27cb474; }
L_27cb43c:;
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb450; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cb450u; f_283b288(c);
L_27cb450:;
    { uint32_t ea = c->r[4] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[4] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb468; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cb468u; f_283b288(c);
L_27cb468:;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_27cb43c; }
L_27cb474:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27cb4c0; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27cb4b8; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27cb4b8; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27cb4c0;
L_27cb4b8:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27cb4c0u; f_283b288(c);
L_27cb4c0:;
    c->r[0] = 0x1u;
    c->r[6] = c->r[9] + 0x2u;
    { uint32_t ea = c->r[10] + 0x3eu; ST8(ea, c->r[0]); }
    goto L_27cad9c;
L_27cb4d0:;
    c->r[4] = c->r[8] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27cb4e0u; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    (void)f_adds(c, c->r[5], 0x3u);
    if (COND_EQ) { goto L_27cb578; }
L_27cb4f8:;
    c->r[1] = 0x54u;
    (void)f_adds(c, c->r[5], 0x2u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_27cb574; }
    c->r[14] = c->r[5] + 0x2u;
    c->r[2] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[14], 0x10u);
    if (COND_CC) { goto L_27cb54c; }
    c->r[4] = c->r[14];
    c->r[4] = c->r[4] & 0xfffffff0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27cb54c; }
    c->r[1] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27cb914; }
    c->r[1] = 0x0u - c->r[9];
    c->r[1] = c->r[7] + c->r[1];
    c->r[1] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_27cb914; }
L_27cb54c:;
    c->r[1] = c->r[2];
    c->r[12] = c->r[0];
L_27cb554:;
    c->r[2] = 0x3u - c->r[1];
    c->r[3] = c->r[12] + 0x1u;
    c->r[2] = c->r[9] + c->r[2];
    c->r[2] = c->r[5] + c->r[2];
L_27cb564:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[7] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[3]; ST8(ea, c->r[7]); c->r[3] = c->r[3] + 0x1u; }
    if (COND_NE) { goto L_27cb564; }
L_27cb574:;
    c->r[0] = c->r[0] + c->r[8];
L_27cb578:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[2] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x5u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x21u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x23u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[7] = c->r[7] | (c->r[12] << 8);
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[2] = c->r[5] | (c->r[2] << 8);
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[7] | (c->r[2] << 16);
    c->r[0] = c->r[4] | (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x32u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_27cb6a0; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[8]); }
    c->r[4] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x1eu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[5] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x32u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x32u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27cb908;
L_27cb6a0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[4] = 0xaaaau;
    c->r[0] = c->r[0] - c->r[1];
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xaaa0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_27cb9a8; }
    c->r[1] = c->r[2] - c->r[1];
    c->r[2] = 0x5555u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x5550000u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27cb700; }
    c->r[1] = (c->r[1] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_27cb744; }
L_27cb700:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cb738; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27cb734u; f_283b27c(c);
    goto L_27cb750;
L_27cb738:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27cb750;
L_27cb744:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_27cb750:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[8]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[4] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x1eu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[4] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x32u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    c->r[4] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[5]); }
    c->r[5] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x32u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27cb86c; }
L_27cb818:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.d[16] = LD64(c->r[7] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] - 0x18u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_27cb818; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27cb870;
L_27cb86c:;
    c->r[7] = c->r[5];
L_27cb870:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[5], c->r[7]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27cb8bc; }
L_27cb884:;
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb898; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cb898u; f_283b288(c);
L_27cb898:;
    { uint32_t ea = c->r[5] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[5] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cb8b0; }
    { uint32_t ea = c->r[5] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cb8b0u; f_283b288(c);
L_27cb8b0:;
    (void)f_subs(c, c->r[7], c->r[4]);
    c->r[5] = c->r[4];
    if (COND_NE) { goto L_27cb884; }
L_27cb8bc:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27cb908; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27cb900; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27cb900; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27cb908;
L_27cb900:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27cb908u; f_283b288(c);
L_27cb908:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x3eu; ST8(ea, c->r[0]); }
    goto L_27cad9c;
L_27cb914:;
    c->r[12] = c->r[0] + c->r[4];
    c->r[1] = c->r[2] + c->r[4];
    c->r[7] = c->r[0] + 0x1u;
    c->r[3] = c->r[4];
L_27cb924:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[7] = ea + 16u; }
    if (COND_NE) { goto L_27cb924; }
    (void)f_subs(c, c->r[14], c->r[4]);
    if (COND_NE) { goto L_27cb554; }
    goto L_27cb574;
L_27cb940:;
    c->r[14] = 0x27cb948u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb948:;
    c->r[14] = 0x27cb950u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb950:;
    c->r[7] = c->r[3];
    c->r[4] = c->r[12];
    c->r[14] = 0x27cb960u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb960:;
    c->r[7] = c->r[3];
    c->r[4] = c->r[12];
    c->r[14] = 0x27cb970u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb970:;
    c->r[14] = 0x27cb978u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb978:;
    c->r[14] = 0x27cb980u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb980:;
    c->r[14] = 0x27cb988u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb988:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    c->r[14] = 0x27cb994u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb994:;
    c->r[4] = c->r[2];
    c->r[14] = 0x27cb9a0u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb9a0:;
    c->r[14] = 0x27cb9a8u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cb9a8:;
    c->r[14] = 0x27cb9b0u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27cbb1c(Cpu *restrict c) {
    FN_ENTER(0x27cbb1cu);
L_27cbb1c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[7] = c->r[1];
    c->r[6] = c->r[0];
    c->r[0] = c->r[7] - c->r[6];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_27cbd34; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x44u);
    if (COND_NE) { goto L_27cbd34; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20u;
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27cbd34; }
    c->r[4] = c->r[6] + 0x2u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x27cbb70u; f_27cdb70(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_NE) { (void)f_subs(c, c->r[8], c->r[7]); }
    if (COND_EQ) { goto L_27cbd34; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27cbd34; }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_27cbd34; }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[4] - 0xbu; }
    c->r[0] = c->r[4] - 0x18u;
    c->r[14] = 0x27cbbb8u; f_27c75a8(c);
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = 0x375d7bu;
    c->v.d[16] = LD64(c->r[4] - 24u);
    ST64(c->r[13], c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] - 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[6]); }
    c->r[2] = 0x27cbbe4u + c->r[1];
    c->r[0] = c->r[13];
    c->r[1] = 0x0u;
    c->r[3] = 0x9u;
    c->r[14] = 0x27cbbf0u; f_27c73c8(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.d[16] = LD64(c->r[0]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    ST64(c->r[13] + 16u, c->v.d[16]);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    c->r[2] = 0x375d51u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    c->r[1] = 0x27cbc18u + c->r[2];
    c->r[0] = c->r[13] + 0x10u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27cbc20u; f_27c75a8(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[2] = c->r[6] | (c->r[4] << 8);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[14]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST8(ea, c->r[12]); }
    c->r[4] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[4]); }
    c->r[4] = (c->r[0] >> 8);
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x2du; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2bu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27cbce0u; f_27d4d10(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cbcf4; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cbcf4u; f_283b288(c);
L_27cbcf4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cbd08; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cbd08u; f_283b288(c);
L_27cbd08:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cbd1c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cbd1cu; f_283b288(c);
L_27cbd1c:;
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cbd30; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cbd30u; f_283b288(c);
L_27cbd30:;
    c->r[6] = c->r[8] + 0x1u;
L_27cbd34:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27cbd88(Cpu *restrict c) {
    FN_ENTER(0x27cbd88u);
L_27cbd88:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x54u;
    c->r[6] = c->r[1];
    c->r[5] = c->r[0];
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_27cd658; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x31u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_CS) { goto L_27cbdd0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27e3894(c);
L_27cbdd0:;
    c->r[9] = 0x5555u;
    c->r[8] = 0xaaaau;
    c->r[0] = c->r[1] - 0x43u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x5550000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xaaa0000u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_27cbf68; }
    c->r[0] = c->r[6] - c->r[5];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_27cd658; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_27cd658; }
    (void)f_subs(c, c->r[1], 0x44u);
    if (COND_EQ) { goto L_27cc124; }
    (void)f_subs(c, c->r[1], 0x43u);
    if (COND_NE) { goto L_27cd658; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x31u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_27cd658; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_27cd658; }
    c->r[6] = c->r[13] + 0x28u;
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x27cbe44u; f_27e4194(c);
    c->r[5] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] | 0x5u;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2bu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[0] | (c->r[4] << 8);
    { uint32_t ea = c->r[13] + 0x2du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x2fu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[2] = c->r[2] | (c->r[6] << 8);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x22u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x24u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27cc414; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27cc80c;
L_27cbf68:;
    (void)f_subs(c, c->r[1], 0x55u);
    if (COND_NE) { goto L_27cc10c; }
    c->r[0] = c->r[6] - c->r[5];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_27cd658; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6cu);
    if (COND_EQ) { goto L_27cc2b8; }
    (void)f_subs(c, c->r[0], 0x74u);
    if (COND_NE) { goto L_27cd658; }
    c->r[2] = c->r[13] + 0x38u;
    c->r[0] = 0x0u;
    c->r[3] = c->r[2] | 0x5u;
    c->r[12] = 0x10u;
    c->r[7] = 0x64u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[5] = 0x75u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[7]); }
    c->r[7] = 0x6du;
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[7]); }
    c->r[7] = 0x6eu;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[5]); }
    c->r[5] = 0x65u;
    { uint32_t ea = c->r[13] + 0x3fu; ST8(ea, c->r[5]); }
    c->r[5] = 0x61u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[7]); }
    c->r[7] = 0x27u;
    { uint32_t ea = c->r[13] + 0x39u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x41u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x39u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[7] | (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[5] | (c->r[2] << 8);
    { uint32_t ea = c->r[13] + 0x3fu; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[3] = c->r[4] | (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x22u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x24u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_27cc494; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[12]); }
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[2] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[2] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[1] >> 8);
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    c->r[5] = c->r[2] + 0xdu;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[2] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[2] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[1] >> 8);
    { uint32_t ea = c->r[2] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27cc9e8;
L_27cc10c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_27dac98(c);
L_27cc124:;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_27cd658; }
    c->r[2] = 0x1u;
    c->r[3] = 0x27u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd658; }
    c->r[7] = c->r[11] - 0x28u;
    c->r[1] = c->r[0] - 0x18u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x27cc158u; f_27e4194(c);
    c->r[0] = 0x37580cu;
    c->r[2] = 0x27cc164u + c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[14] = 0x27cc174u; f_27c73c8(c);
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x5u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[12] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 8);
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[3] | (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[4]); }
    c->r[0] = c->r[2] | (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_27cc594; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[14]); }
    c->r[7] = c->r[0] + 0x1u;
    c->r[6] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x7u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 24);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27cd638;
L_27cc2b8:;
    c->r[1] = 0x3ec1b8u;
    c->r[14] = c->r[11] - 0x28u;
    c->r[0] = 0x0u;
    c->r[2] = 0x12u;
    c->r[1] = 0x27cc2d0u + c->r[1];
    c->r[3] = c->r[14] | 0x1u;
    c->v.d[16] = LD64(c->r[1]);
    c->r[7] = 0x28u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST8(ea, c->r[2]); }
    c->r[2] = c->r[14] | 0x5u;
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[11] - 0x1fu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x27u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x25u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[7] | (c->r[1] << 8);
    { uint32_t ea = c->r[11] - 0x23u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[5] | (c->r[3] << 8);
    { uint32_t ea = c->r[11] - 0x21u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    c->r[2] = c->r[4] | (c->r[2] << 8);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 4u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CS) { goto L_27cc514; }
    c->r[2] = 0x12u;
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[5] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_27cceb8;
L_27cc414:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[6] = r; }
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27cd94c; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CS) { goto L_27cc460; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27cc64c; }
L_27cc460:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cc61c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27cc490u; f_283b27c(c);
    goto L_27cc654;
L_27cc494:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] - c->r[1];
    c->r[2] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[2]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27cd954; }
    c->r[1] = c->r[3] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CS) { goto L_27cc4e0; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27cc820; }
L_27cc4e0:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cc628; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27cc510u; f_283b27c(c);
    goto L_27cc828;
L_27cc514:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] - c->r[2];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27cd95c; }
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CS) { goto L_27cc560; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27cccf0; }
L_27cc560:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cc634; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27cc590u; f_283b27c(c);
    goto L_27cccf8;
L_27cc594:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xaaabu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaaaa0000u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[3]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27cd964; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CS) { goto L_27cc5e0; }
    c->r[8] = (c->r[1] << 1);
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { c->r[8] = c->r[0]; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27cd478; }
L_27cc5e0:;
    c->r[0] = c->r[8] + (c->r[8] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cc640; }
    c->r[0] = c->r[1];
    c->r[4] = c->r[14];
    c->r[14] = 0x27cc614u; f_283b27c(c);
    c->r[14] = c->r[4];
    goto L_27cd480;
L_27cc61c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27cc654;
L_27cc628:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27cc828;
L_27cc634:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27cccf8;
L_27cc640:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27cd480;
L_27cc64c:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27cc654:;
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[0];
    c->r[5] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[7]); c->r[1] = ea; }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[11] - 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x24u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
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
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27cc76c; }
L_27cc71c:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cc71c; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27cc770;
L_27cc76c:;
    c->r[6] = c->r[7];
L_27cc770:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_27cc7c0; }
L_27cc788:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cc79c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cc79cu; f_283b288(c);
L_27cc79c:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cc7b4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cc7b4u; f_283b288(c);
L_27cc7b4:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27cc788; }
L_27cc7c0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27cc80c; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27cc804; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27cc804; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27cc80c;
L_27cc804:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27cc80cu; f_283b288(c);
L_27cc80c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd64c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_27cd648;
L_27cc820:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27cc828:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    c->r[3] = 0x10u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x22u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[11] - 0x22u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x24u; ST16(ea, c->r[2]); }
    c->r[12] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = (c->r[3] >> 8);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16);
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cc948; }
L_27cc8f4:;
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[0] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[0] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_27cc8f4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27cc94c;
L_27cc948:;
    c->r[8] = c->r[7];
L_27cc94c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[8]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_27cc99c; }
L_27cc964:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cc978; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cc978u; f_283b288(c);
L_27cc978:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cc990; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cc990u; f_283b288(c);
L_27cc990:;
    (void)f_subs(c, c->r[8], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27cc964; }
L_27cc99c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27cc9e8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CC) { goto L_27cc9e0; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27cc9e0; }
    c->r[2] = 0xfu - c->r[8];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[8] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); } }
    goto L_27cc9e8;
L_27cc9e0:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27cc9e8u; f_283b288(c);
L_27cc9e8:;
    c->r[4] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_27cca40; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_27cca88; }
    c->r[0] = c->r[5] + 0x3u;
    (void)f_subs(c, c->r[0], c->r[6]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27ccb00; }
    c->r[0] = c->r[5] - c->r[6];
    c->r[9] = 0x3u;
L_27cca1c:;
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_27ccb0c; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[1] = f_adds(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_27cca1c; }
    c->r[8] = c->r[6];
    goto L_27ccb10;
L_27cca40:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] - 0x18u;
L_27cca48:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cca64; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cca64u; f_283b288(c);
L_27cca64:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cca78; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cca78u; f_283b288(c);
L_27cca78:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cca48; }
    goto L_27cd658;
L_27cca88:;
    c->r[8] = c->r[4];
L_27cca8c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x27u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27cca9cu; f_27e4648(c);
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_EQ) { goto L_27ccab8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27ccab8; }
    c->r[5] = c->r[8] + 0x1u;
    goto L_27cd658;
L_27ccab8:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] - 0x18u;
L_27ccac0:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ccadc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ccadcu; f_283b288(c);
L_27ccadc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ccaf0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ccaf0u; f_283b288(c);
L_27ccaf0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27ccac0; }
    goto L_27cd658;
L_27ccb00:;
    c->r[9] = 0x3u;
    c->r[8] = c->r[6];
    goto L_27ccb10;
L_27ccb0c:;
    c->r[8] = c->r[5] + c->r[9];
L_27ccb10:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = c->r[7];
    { uint32_t ea = c->r[14] - 0x18u; uint32_t v = LD8(ea); c->r[14] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27ccb38; }
    c->r[2] = (c->r[0] >> 1);
    c->r[1] = 0xau;
    c->r[12] = f_subs(c, c->r[8], c->r[4]);
    if (COND_NE) { goto L_27ccb54; }
    goto L_27cca8c;
L_27ccb38:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[1] = c->r[1] - 0x1u;
    c->r[12] = f_subs(c, c->r[8], c->r[4]);
    if (COND_EQ) { goto L_27cca8c; }
L_27ccb54:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_27ccb7c; }
    c->r[2] = (c->r[0] >> 1) & 0x7fu;
    c->r[3] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_LS) { goto L_27ccb8c; }
    goto L_27ccbcc;
L_27ccb7c:;
    { uint32_t ea = c->r[7] - 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_HI) { goto L_27ccbcc; }
L_27ccb8c:;
    c->r[2] = c->r[3] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_LS) { goto L_27ccbcc; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[12], 0x10u);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27cd974; }
    (void)f_subs(c, c->r[12], 0xau);
    if (COND_HI) { goto L_27cd6c4; }
    c->r[0] = (c->r[12] << 1);
    { uint32_t ea = c->r[11] - 0x28u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[0] = c->r[0] | 0x1u;
    goto L_27cd6f4;
L_27ccbcc:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    c->r[3] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[12]); }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_CS) { goto L_27cccb0; }
    c->r[0] = ~0x10u;
    c->r[2] = c->r[2] + c->r[12];
    c->r[14] = c->r[0] - c->r[1];
    c->r[3] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[14], c->r[3]);
    if (COND_CC) { goto L_27cd974; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = ~0x10u;
    if (COND_EQ) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x8000001au);
    if (COND_HI) { goto L_27ccc44; }
    (void)f_subs(c, c->r[2], (c->r[1] << 1));
    c->r[0] = 0xbu;
    if (COND_CC) { c->r[2] = (c->r[1] << 1); }
    (void)f_subs(c, c->r[2], 0xbu);
    if (COND_CS) { c->r[0] = c->r[2] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xfffffff0u; }
L_27ccc44:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[14] = 0x27ccc4cu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27ccc74; }
    c->r[0] = c->r[1];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x27ccc6cu; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
L_27ccc74:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { goto L_27ccc94; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[1];
    c->r[14] = 0x27ccc8cu; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
L_27ccc94:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
L_27cccb0:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = c->r[14] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[3] = v; } }
    (void)f_subs(c, c->r[9], 0x2u);
    c->r[14] = c->r[3] + c->r[2];
    if (COND_EQ) { goto L_27cd828; }
    c->r[1] = ~0x1u;
    c->r[0] = c->r[2] - c->r[4];
    c->r[1] = c->r[1] - c->r[5];
    c->r[12] = c->r[8] + c->r[1];
    (void)f_subs(c, c->r[12], 0x10u);
    if (COND_CS) { goto L_27cd7c4; }
    c->r[2] = c->r[3];
    c->r[3] = c->r[14];
    c->r[7] = c->r[4];
    goto L_27cd808;
L_27cccf0:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27cccf8:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    c->r[3] = 0x12u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[7]); }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    c->r[12] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = (c->r[3] >> 8);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16);
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cce18; }
L_27ccdc4:;
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[0] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[0] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_27ccdc4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_27cce1c;
L_27cce18:;
    c->r[8] = c->r[7];
L_27cce1c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[8]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_27cce6c; }
L_27cce34:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cce48; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cce48u; f_283b288(c);
L_27cce48:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cce60; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cce60u; f_283b288(c);
L_27cce60:;
    (void)f_subs(c, c->r[8], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27cce34; }
L_27cce6c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_27cceb8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CC) { goto L_27cceb0; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_27cceb0; }
    c->r[2] = 0xfu - c->r[8];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[8] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); } }
    goto L_27cceb8;
L_27cceb0:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27cceb8u; f_283b288(c);
L_27cceb8:;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x76u);
    if (COND_NE) { goto L_27ccf40; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x29u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27cced8u; f_27e4648(c);
    c->r[3] = c->r[5] + 0x3u;
L_27ccedc:;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_27cd3b0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_NE) { goto L_27cd3b0; }
    c->r[2] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_27cd664; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_27cd6b4; }
    c->r[0] = c->r[3] + 0x2u;
    c->r[7] = c->r[6];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_27cd85c; }
L_27ccf1c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x30u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_27cd858; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_27ccf1c; }
    c->r[7] = c->r[6];
    goto L_27cd85c;
L_27ccf40:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[14] = 0x27ccf50u; f_27bab48(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cd400; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[1] = c->r[7] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27cd658; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[7] - 0xbu; }
    c->r[0] = c->r[7] - 0x18u;
    c->r[14] = 0x27ccf9cu; f_27c75a8(c);
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[13] + 56u, c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[7] - 0x18u;
    c->r[4] = c->r[7];
L_27ccfc8:;
    c->r[9] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ccfe4; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ccfe4u; f_283b288(c);
L_27ccfe4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27ccff8; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27ccff8u; f_283b288(c);
L_27ccff8:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_NE) { goto L_27ccfc8; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = c->r[13] + 0x38u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[1] = c->r[0]; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] - 0x30u;
    c->r[14] = 0x27cd038u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x374827u;
    c->r[0] = 0x27cd048u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    goto L_27cd360;
L_27cd050:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[2] = 0xaaabu;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27cd450; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0xbu; }
    if (COND_EQ) { c->r[2] = (c->r[3] >> 1); }
    c->r[0] = c->r[0] - 0x18u;
    c->r[14] = 0x27cd098u; f_27c75a8(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[12] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    c->r[2] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cd21c; }
    { uint32_t ea = c->r[13] + 0x38u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
L_27cd108:;
    { uint32_t ea = c->r[13] + 0x38u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x6u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 24);
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[0] >> 16);
    c->r[0] = (c->r[0] >> 8);
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[1] >> 8);
    { uint32_t ea = c->r[3] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[8] - 0x18u;
    c->r[4] = c->r[8];
L_27cd15c:;
    c->r[5] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd178; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd178u; f_283b288(c);
L_27cd178:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd18c; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd18cu; f_283b288(c);
L_27cd18c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_27cd15c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    if (COND_EQ) { c->r[9] = (c->r[4] >> 1); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_27cd360; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[8] - 0x30u;
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[14] = 0x27cd1e0u; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[7];
    if (COND_EQ) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x18u;
    c->r[2] = c->r[9];
    c->r[14] = 0x27cd20cu; f_27c75a8(c);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    goto L_27cd360;
L_27cd21c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0xau;
    c->r[7] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd24c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[0] = c->r[0] & 0xfffffffeu;
    c->r[7] = c->r[0] - 0x1u;
L_27cd24c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cd288; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[9]);
    c->r[1] = (c->r[9] >> 1) & 0x7fu;
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xf0u; }
    if (COND_CS) { c->r[8] = c->r[0] - 0x1u; }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_27cd294; }
    goto L_27cd108;
L_27cd288:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_27cd108; }
L_27cd294:;
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_NE) { goto L_27cd2c8; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_27cd314; }
    c->r[0] = c->r[9] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x27cd2c4u; f_283aa78(c);
    goto L_27cd31c;
L_27cd2c8:;
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0x27cd2d8u; f_283b27c(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_HI) { goto L_27cd2ec; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_27cd108; }
L_27cd2ec:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27cd330; }
    c->r[0] = c->r[9] & 0xfeu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[3];
    c->r[4] = c->r[3];
    c->r[14] = 0x27cd310u; f_283aa78(c);
    goto L_27cd344;
L_27cd314:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x39u; ST8(ea, c->r[0]); }
L_27cd31c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x27cd324u; f_283b288(c);
    c->r[0] = (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x38u; ST8(ea, c->r[0]); }
    goto L_27cd108;
L_27cd330:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[14] = 0x27cd344u; f_283b288(c);
L_27cd344:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    goto L_27cd108;
L_27cd360:;
    c->r[0] = c->r[3];
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[4] = c->r[3];
    c->r[14] = 0x27cd374u; f_27bab48(c);
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_27cd050; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_27cd450; }
    c->r[1] = 0x3745c5u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] - 0x18u;
    c->r[1] = 0x27cd3a4u + c->r[1];
    c->r[2] = 0x1u;
    c->r[14] = 0x27cd3a8u; f_27c75a8(c);
    c->r[3] = c->r[4];
    goto L_27cd454;
L_27cd3b0:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cd658; }
    c->r[6] = c->r[7] - 0x18u;
L_27cd3c0:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd3dc; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd3dcu; f_283b288(c);
L_27cd3dc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd3f0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd3f0u; f_283b288(c);
L_27cd3f0:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cd3c0; }
    goto L_27cd658;
L_27cd400:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cd658; }
    c->r[6] = c->r[7] - 0x18u;
L_27cd410:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd42c; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd42cu; f_283b288(c);
L_27cd42c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd440; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd440u; f_283b288(c);
L_27cd440:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cd410; }
    goto L_27cd658;
L_27cd450:;
    c->r[9] = 0x1u;
L_27cd454:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd46c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd468u; f_283b288(c);
    c->r[3] = c->r[4];
L_27cd46c:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_27cd658; }
    goto L_27ccedc;
L_27cd478:;
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
L_27cd480:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[14]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[6] = c->r[1] + 0x1u;
    c->r[4] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x3eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    c->r[5] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x3eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
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
    { uint32_t ea = c->r[13] + 0x2eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27cd598; }
L_27cd548:;
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 24u);
    ST64(c->r[1] - 24u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[16] = LD64(c->r[6] - 12u);
    ST64(c->r[1] - 12u, c->v.d[16]);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x18u;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] - 0x18u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cd548; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    goto L_27cd59c;
L_27cd598:;
    c->r[6] = c->r[7];
L_27cd59c:;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_27cd5ec; }
L_27cd5b4:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd5c8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd5c8u; f_283b288(c);
L_27cd5c8:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd5e0; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd5e0u; f_283b288(c);
L_27cd5e0:;
    (void)f_subs(c, c->r[6], c->r[4]);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_27cd5b4; }
L_27cd5ec:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27cd638; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CC) { goto L_27cd630; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_27cd630; }
    c->r[2] = 0xfu - c->r[6];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    goto L_27cd638;
L_27cd630:;
    c->r[0] = c->r[6];
    c->r[14] = 0x27cd638u; f_283b288(c);
L_27cd638:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd64c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_27cd648:;
    c->r[14] = 0x27cd64cu; f_283b288(c);
L_27cd64c:;
    c->r[0] = 0x1u;
    c->r[5] = c->r[5] + 0x2u;
    { uint32_t ea = c->r[10] + 0x3cu; ST8(ea, c->r[0]); }
L_27cd658:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27cd664:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cd658; }
    c->r[6] = c->r[7] - 0x18u;
L_27cd674:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd690; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd690u; f_283b288(c);
L_27cd690:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd6a4; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd6a4u; f_283b288(c);
L_27cd6a4:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cd674; }
    goto L_27cd658;
L_27cd6b4:;
    c->r[7] = c->r[2];
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cd888; }
    goto L_27cd89c;
L_27cd6c4:;
    c->r[4] = c->r[12] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[7] = c->r[12];
    c->r[0] = c->r[4];
    c->r[14] = 0x27cd6dcu; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[7];
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[12]); }
L_27cd6f4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_EQ) { goto L_27cd780; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[9] = c->r[12];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_EQ) { goto L_27cd77c; }
    c->r[1] = ~0x2u;
    c->r[1] = c->r[1] - c->r[5];
    c->r[4] = c->r[8] + c->r[1];
    (void)f_subs(c, c->r[4], 0x10u);
    if (COND_CC) { goto L_27cd760; }
    c->r[2] = c->r[4];
    c->r[2] = c->r[2] & 0xfffffff0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27cd760; }
    c->r[7] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_CS) { goto L_27cd91c; }
    c->r[1] = ~0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[5];
    c->r[1] = c->r[8] + c->r[1];
    c->r[1] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27cd91c; }
L_27cd760:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[0];
L_27cd768:;
    c->r[2] = c->r[12] + 0x1u;
L_27cd76c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[8], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27cd76c; }
L_27cd77c:;
    c->r[0] = c->r[0] + c->r[9];
L_27cd780:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[1] = c->r[7];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[14];
    c->r[14] = 0x27cd7b0u; f_27c75a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27cca8c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x27cd7c0u; f_283b288(c);
    goto L_27cca8c;
L_27cd7c4:;
    c->r[9] = c->r[12];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[9] = c->r[9] & 0xfffffff0u;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_27cd7f8; }
    (void)f_subs(c, c->r[14], c->r[8]);
    if (COND_CS) { goto L_27cd8ec; }
    c->r[1] = c->r[2] - 0x2u;
    c->r[1] = c->r[1] - c->r[5];
    c->r[1] = c->r[8] + c->r[1];
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CS) { goto L_27cd8ec; }
L_27cd7f8:;
    c->r[2] = c->r[3];
    c->r[3] = c->r[14];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_27cd808:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = c->r[7] + 0x1u; c->r[1] = v; }
    (void)f_subs(c, c->r[8], c->r[7]);
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); c->r[3] = c->r[3] + 0x1u; }
    if (COND_NE) { goto L_27cd808; }
L_27cd818:;
    c->r[1] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13]; c->r[7] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->r[14] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
L_27cd828:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[14]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[2] + c->r[12];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cd850; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    goto L_27cca8c;
L_27cd850:;
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[0]); }
    goto L_27cca8c;
L_27cd858:;
    c->r[7] = c->r[0];
L_27cd85c:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] - 0x18u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[7];
    if (COND_EQ) { c->r[1] = c->r[0] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[1] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    c->r[1] = c->r[1] + 0x7u;
    c->r[14] = 0x27cd880u; f_27e474c(c);
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27cd89c; }
L_27cd888:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_27cd89c; }
    c->r[5] = c->r[7] + 0x1u;
    goto L_27cd658;
L_27cd89c:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_27cd658; }
    c->r[6] = c->r[7] - 0x18u;
L_27cd8ac:;
    c->r[4] = c->r[7] - 0x18u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd8c8; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd8c8u; f_283b288(c);
L_27cd8c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27cd8dc; }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27cd8dcu; f_283b288(c);
L_27cd8dc:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27cd8ac; }
    goto L_27cd658;
L_27cd8ec:;
    c->r[2] = c->r[3];
    c->r[7] = c->r[4] + c->r[9];
    c->r[3] = c->r[14] + c->r[9];
    c->r[1] = c->r[9];
L_27cd8fc:;
    { uint32_t ea = c->r[4]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[4] = ea + 16u; }
    c->r[1] = f_subs(c, c->r[1], 0x10u);
    { uint32_t ea = c->r[14]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[14] = ea + 16u; }
    if (COND_NE) { goto L_27cd8fc; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], c->r[9]);
    if (COND_NE) { goto L_27cd808; }
    goto L_27cd818;
L_27cd91c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[0] + c->r[2];
    c->r[3] = c->r[2];
    c->r[1] = c->r[5] + c->r[2];
L_27cd92c:;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[5] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[7] = ea + 16u; }
    if (COND_NE) { goto L_27cd92c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_NE) { goto L_27cd768; }
    goto L_27cd77c;
L_27cd94c:;
    c->r[14] = 0x27cd954u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cd954:;
    c->r[14] = 0x27cd95cu;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cd95c:;
    c->r[14] = 0x27cd964u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cd964:;
    c->r[6] = c->r[14];
    c->r[4] = c->r[5];
    c->r[14] = 0x27cd974u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27cd974:;
    c->r[14] = 0x27cd97cu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27cda3c(Cpu *restrict c) {
    FN_ENTER(0x27cda3cu);
L_27cda3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[1];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cda70; }
    c->r[7] = 0xau;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_CC) { goto L_27cda88; }
    goto L_27cdb14;
L_27cda70:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[7] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_CS) { goto L_27cdb14; }
L_27cda88:;
    c->r[2] = ~0x11u;
    c->r[1] = c->r[4] - c->r[7];
    c->r[2] = c->r[2] - c->r[7];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_27cdb68; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[10] = ~0x10u;
    if (COND_EQ) { c->r[8] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; } }
    (void)f_adds(c, c->r[7], 0x8000001au);
    if (COND_HI) { goto L_27cdad4; }
    c->r[0] = (c->r[7] << 1);
    c->r[10] = 0xbu;
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[0] = c->r[4];
    if (COND_HI) { c->r[0] = (c->r[7] << 1); }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { c->r[10] = c->r[0] + 0x10u; }
    if (COND_CS) { c->r[10] = c->r[10] & 0xfffffff0u; }
L_27cdad4:;
    c->r[0] = c->r[10];
    c->r[14] = 0x27cdadcu; f_283b27c(c);
    c->r[1] = c->r[9];
    c->r[2] = c->r[4];
    c->r[6] = c->r[0];
    c->r[14] = 0x27cdaecu; f_283aa78(c);
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_EQ) { goto L_27cdafc; }
    c->r[0] = c->r[8];
    c->r[14] = 0x27cdafcu; f_283b288(c);
L_27cdafc:;
    c->r[0] = c->r[10] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[4]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27cdb14:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[6] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; } }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_27cdb38; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = c->r[4];
    c->r[14] = 0x27cdb38u; f_283f1ac(c);
L_27cdb38:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27cdb5c; }
    c->r[0] = (c->r[4] << 1);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27cdb5c:;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27cdb68:;
    c->r[14] = 0x27cdb70u;
    __attribute__((musttail)) return f_284f5c8(c);
}
