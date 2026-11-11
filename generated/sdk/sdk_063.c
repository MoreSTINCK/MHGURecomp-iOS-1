#include "cpu.h"
#include "neon_rt.h"
void f_27b9310(Cpu *c);
void f_27bab48(Cpu *c);
void f_27c75a8(Cpu *c);
void f_27c79bc(Cpu *c);
void f_27cda3c(Cpu *c);
void f_27cdb70(Cpu *c);
void f_27d500c(Cpu *c);
void f_27e3894(Cpu *c);
void f_27e474c(Cpu *c);
void f_27e4c20(Cpu *c);
void f_283aa78(Cpu *c);
void f_283afac(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283f1ac(Cpu *c);
void f_284f5c8(Cpu *c);
void f_27e3728(Cpu *restrict c) {
    FN_ENTER(0x27e3728u);
L_27e3728:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[7] = c->r[1];
    c->r[6] = c->r[0];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_27e3864; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27e3758u; f_27e3894(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_EQ) { goto L_27e3864; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x27e3774u; f_27c79bc(c);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_27e3868; }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    c->r[9] = c->r[6];
    c->r[1] = c->r[7] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_27e3868; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    if (COND_EQ) { c->r[1] = c->r[7] - 0xbu; }
    c->r[0] = c->r[7] - 0x18u;
    c->r[14] = 0x27e37c4u; f_27c75a8(c);
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[7] - 24u);
    ST64(c->r[13], c->v.d[16]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] - 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[8] - 0x18u;
    c->r[6] = c->r[8];
L_27e37f0:;
    c->r[4] = c->r[6] - 0x18u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e380c; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e380cu; f_283b288(c);
L_27e380c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e3820; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3820u; f_283b288(c);
L_27e3820:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_27e37f0; }
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[2] = (c->r[0] >> 1); }
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    if (COND_EQ) { c->r[1] = c->r[0] | 0x1u; }
    c->r[0] = c->r[8] - 0x30u;
    c->r[14] = 0x27e3850u; f_27c75a8(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3868; }
    c->r[0] = c->r[5];
    c->r[14] = 0x27e3860u; f_283b288(c);
    goto L_27e3868;
L_27e3864:;
    c->r[9] = c->r[6];
L_27e3868:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_27e3894(Cpu *restrict c) {
    FN_ENTER(0x27e3894u);
L_27e3894:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[7] = c->r[0];
    c->r[9] = c->r[2];
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_27e410c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[4], 0x9u);
    if (COND_HI) { goto L_27e410c; }
    c->r[8] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_EQ) { goto L_27e410c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x30u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_27e3904; }
    c->r[2] = c->r[7] + 0x2u;
L_27e38e0:;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_27e410c; }
    c->r[3] = c->r[4] + (c->r[4] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[6] = v; }
    c->r[4] = c->r[0] + (c->r[3] << 1);
    c->r[0] = c->r[6] - 0x30u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CC) { goto L_27e38e0; }
    c->r[8] = c->r[2] - 0x1u;
L_27e3904:;
    c->r[0] = c->r[1] - c->r[8];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CC) { goto L_27e410c; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[4], 0x10u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27e4118; }
    (void)f_subs(c, c->r[4], 0xbu);
    if (COND_CS) { goto L_27e3950; }
    c->r[0] = (c->r[4] << 1);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[10] = c->r[0] | 0x1u;
    c->r[5] = c->r[10];
    if (COND_NE) { goto L_27e397c; }
    goto L_27e398c;
L_27e3950:;
    c->r[6] = c->r[4] + 0x10u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e3960u; f_283b27c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    c->r[10] = c->r[0] | 0x1u;
L_27e397c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[2] = c->r[4];
    c->r[14] = 0x27e398cu; f_283aa78(c);
L_27e398c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = (c->r[6] >> 1); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[10]; }
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_CS) { c->r[7] = 0xau; }
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27e4120; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27e39ec; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[6] = c->r[0] | 0x1u;
    if (COND_NE) { goto L_27e3a08; }
    goto L_27e3a18;
L_27e39ec:;
    c->r[0] = 0x10u;
    c->r[14] = 0x27e39f4u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
L_27e3a08:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x27e3a18u; f_283aa78(c);
L_27e3a18:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[7]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_27e3a64; }
    c->r[1] = 0x35dfbfu;
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = 0x27e3a50u + c->r[1];
    if (COND_EQ) { c->r[0] = c->r[2] | 0x1u; }
    c->r[2] = 0xau;
    c->r[14] = 0x27e3a58u; f_283afac(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0x1u; }
L_27e3a64:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_27e3a74; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3a74u; f_283b288(c);
L_27e3a74:;
    c->r[14] = 0x5555u;
    c->r[10] = 0xaaaau;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x5550000u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xaaa0000u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_27e3b4c; }
    c->r[0] = 0x20u;
    c->r[6] = c->r[14];
    c->r[14] = 0x27e3a98u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x3d4944u;
    c->r[1] = c->r[7] + 0xdu;
    c->r[0] = 0x27e3aacu + c->r[0];
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[0] + 0xdu;
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x15u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e3c94; }
    c->r[2] = 0x21u;
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27e3f30;
L_27e3b4c:;
    c->r[7] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x21u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7] | 0x1u;
    c->r[7] = c->r[7] | 0x5u;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x23u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[0] | (c->r[6] << 8);
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[1] | (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[2] = c->r[2] | (c->r[7] << 8);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x6u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_27e3d14; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[12]); }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[6] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
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
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27e4108;
L_27e3c94:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_HI) { goto L_27e4128; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CS) { goto L_27e3ce0; }
    c->r[10] = (c->r[1] << 1);
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { c->r[10] = c->r[0]; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_27e3db4; }
L_27e3ce0:;
    c->r[0] = c->r[10] + (c->r[10] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e3d9c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x27e3d10u; f_283b27c(c);
    goto L_27e3dbc;
L_27e3d14:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] - c->r[3];
    c->r[1] = 0xaaabu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_HI) { goto L_27e4130; }
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_CS) { goto L_27e3d60; }
    c->r[10] = (c->r[1] << 1);
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { c->r[10] = c->r[0]; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_27e3f4c; }
L_27e3d60:;
    c->r[0] = c->r[10] + (c->r[10] << 1);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[3] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_27e3da8; }
    c->r[0] = c->r[1];
    c->r[6] = c->r[12];
    c->r[14] = 0x27e3d94u; f_283b27c(c);
    c->r[12] = c->r[6];
    goto L_27e3f54;
L_27e3d9c:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e3dbc;
L_27e3da8:;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_27e3f54;
L_27e3db4:;
    c->r[10] = 0x0u;
    c->r[0] = 0x0u;
L_27e3dbc:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x21u;
    c->r[1] = c->r[0];
    c->r[6] = c->r[10] + (c->r[10] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[6] << 3);
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[6] = (c->r[3] >> 8);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); c->r[7] = c->r[7] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x13u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[3] >> 24);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27e3e94; }
L_27e3e40:;
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
    if (COND_NE) { goto L_27e3e40; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27e3e98;
L_27e3e94:;
    c->r[7] = c->r[6];
L_27e3e98:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e3ee4; }
L_27e3eac:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e3ec0; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3ec0u; f_283b288(c);
L_27e3ec0:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e3ed8; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3ed8u; f_283b288(c);
L_27e3ed8:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27e3eac; }
L_27e3ee4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e3f30; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27e3f28; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e3f28; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27e3f30;
L_27e3f28:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27e3f30u; f_283b288(c);
L_27e3f30:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[8] + c->r[4];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e410c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e3f48u; f_283b288(c);
    goto L_27e410c;
L_27e3f4c:;
    c->r[10] = 0x0u;
    c->r[0] = 0x0u;
L_27e3f54:;
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST8(ea, c->r[12]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[6]); }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 24);
    c->r[2] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[5] = c->r[10] + (c->r[10] << 1);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[12] = v; }
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
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27e406c; }
L_27e4018:;
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
    if (COND_NE) { goto L_27e4018; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27e4070;
L_27e406c:;
    c->r[7] = c->r[6];
L_27e4070:;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e40bc; }
L_27e4084:;
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e4098; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e4098u; f_283b288(c);
L_27e4098:;
    { uint32_t ea = c->r[6] - 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x18u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e40b0; }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e40b0u; f_283b288(c);
L_27e40b0:;
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_27e4084; }
L_27e40bc:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_27e4108; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_CC) { goto L_27e4100; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { goto L_27e4100; }
    c->r[2] = 0xfu - c->r[7];
    c->r[1] = 0x1000u;
    c->r[2] = c->r[2] + c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] & 0xfffffff0u;
    c->r[2] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); } }
    goto L_27e4108;
L_27e4100:;
    c->r[0] = c->r[7];
    c->r[14] = 0x27e4108u; f_283b288(c);
L_27e4108:;
    c->r[7] = c->r[8] + c->r[4];
L_27e410c:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27e4118:;
    c->r[14] = 0x27e4120u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e4120:;
    c->r[14] = 0x27e4128u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e4128:;
    c->r[14] = 0x27e4130u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e4130:;
    c->r[5] = c->r[12];
    c->r[14] = 0x27e413cu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27e4194(Cpu *restrict c) {
    FN_ENTER(0x27e4194u);
L_27e4194:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[1];
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    c->r[6] = c->r[7];
    if (COND_EQ) { c->r[6] = (c->r[0] >> 1); }
    (void)f_subs(c, c->r[6], 0xdu);
    if (COND_HI) { goto L_27e42d8; }
    c->r[0] = (c->r[6] << 2);
    c->r[1] = 0x27e41ccu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x27e4208u: goto L_27e4208; case 0x27e4234u: goto L_27e4234; case 0x27e42b4u: goto L_27e42b4; case 0x27e42d8u: goto L_27e42d8; case 0x27e42e4u: goto L_27e42e4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27e4208:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_27e43e0; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = LD64(c->r[5]);
    ST64(c->r[9], c->v.d[16]);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e4234:;
    c->r[1] = 0x3d41d8u;
    c->r[4] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[4]; }
    c->r[1] = 0x27e4250u + c->r[1];
    c->r[2] = 0xcu;
    c->r[14] = 0x27e4254u; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e4408; }
    c->r[1] = 0x3d41d0u;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xcu;
    if (COND_EQ) { c->r[0] = c->r[4]; }
    c->r[1] = 0x27e4278u + c->r[1];
    c->r[14] = 0x27e4278u; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_27e42d8; }
    c->r[0] = 0x35d852u;
    c->r[2] = 0x31u;
    c->r[1] = 0x27e4290u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x27e4294u; f_27cda3c(c);
    c->r[0] = 0x10u;
    c->r[14] = 0x27e429cu; f_283b27c(c);
    c->r[1] = 0x3d41a4u;
    c->r[2] = 0x11u;
    c->r[3] = 0xdu;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x27e42b4u + c->r[1];
    goto L_27e4438;
L_27e42b4:;
    c->r[1] = 0x3d414cu;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xbu;
    c->r[1] = 0x27e42ccu + c->r[1];
    if (COND_EQ) { c->r[0] = c->r[5] + 0x1u; }
    c->r[14] = 0x27e42d0u; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e4460; }
L_27e42d8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[5] + 0x1u;
    goto L_27e4310;
L_27e42e4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[5] + 0x1u;
    c->r[1] = 0x3d4164u;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[2] = 0xdu;
    c->r[0] = c->r[4];
    c->r[1] = 0x27e4304u + c->r[1];
    if (COND_EQ) { c->r[0] = c->r[7]; }
    c->r[14] = 0x27e4308u; f_283afac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e44d0; }
L_27e4310:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[7] = c->r[4]; }
    c->r[6] = c->r[7] + c->r[6];
    { uint32_t ea = c->r[6] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3eu);
    if (COND_NE) { goto L_27e436c; }
    c->r[0] = 0x1u;
    goto L_27e4348;
L_27e4330:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[6] = c->r[6] + 0x1u;
    goto L_27e4348;
L_27e433c:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_27e436c; }
    c->r[6] = c->r[6] + 0x1u;
L_27e4348:;
    c->r[6] = c->r[6] - 0x1u;
L_27e434c:;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27e4378; }
    { uint32_t ea = c->r[6] - 0x1u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3eu);
    if (COND_EQ) { goto L_27e4330; }
    (void)f_subs(c, c->r[1], 0x3cu);
    if (COND_NE) { goto L_27e434c; }
    goto L_27e433c;
L_27e436c:;
    c->r[0] = c->r[6] - c->r[7];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_GE) { goto L_27e438c; }
L_27e4378:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e438c:;
    c->r[0] = c->r[6] - 0x1u;
L_27e4390:;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_27e43a8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] - 0x1u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3au);
    if (COND_NE) { goto L_27e4390; }
    c->r[7] = c->r[0] + 0x2u;
L_27e43a8:;
    c->r[8] = c->r[6] - c->r[7];
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[8], 0x10u);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27e4608; }
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_HI) { goto L_27e4528; }
    c->r[0] = (c->r[8] << 1);
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); c->r[9] = c->r[9] + 0x1u; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_27e4550; }
    goto L_27e45c0;
L_27e43e0:;
    (void)f_adds(c, c->r[7], 0x10u);
    if (COND_CS) { goto L_27e4610; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0xbu);
    if (COND_CS) { goto L_27e45cc; }
    c->r[0] = (c->r[7] << 1);
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); c->r[9] = c->r[9] + 0x1u; }
    if (COND_NE) { goto L_27e45ec; }
    goto L_27e45fc;
L_27e4408:;
    c->r[0] = 0x35d698u;
    c->r[2] = 0x31u;
    c->r[1] = 0x27e4418u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x27e441cu; f_27cda3c(c);
    c->r[0] = 0x10u;
    c->r[14] = 0x27e4424u; f_283b27c(c);
    c->r[1] = 0x3d3ffcu;
    c->r[2] = 0x11u;
    c->r[3] = 0xdu;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x27e443cu + c->r[1];
L_27e4438:;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    c->v.d[16] = LD64(c->r[1]);
    c->r[1] = c->r[1] + 0x5u;
    { uint32_t ea = c->r[1]; c->v.d[17] = LD64(ea + 0u); }
    c->r[1] = c->r[0] + 0x5u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[17]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e4460:;
    c->r[0] = 0x35d5f9u;
    c->r[2] = 0x46u;
    c->r[1] = 0x27e4470u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x27e4474u; f_27cda3c(c);
    c->r[0] = 0x10u;
    c->r[14] = 0x27e447cu; f_283b27c(c);
    c->r[1] = 0x3d3c44u;
    c->r[2] = 0x11u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x27e4494u + c->r[1];
    c->r[2] = 0x69u;
    c->v.d[16] = LD64(c->r[1]);
    c->r[1] = 0x6972u;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x676e0000u;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[1]); c->r[2] = ea; }
    c->r[1] = 0x67u;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x6eu;
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e44d0:;
    c->r[0] = 0x35d634u;
    c->r[2] = 0x32u;
    c->r[1] = 0x27e44e0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x27e44e4u; f_27cda3c(c);
    c->r[0] = 0x10u;
    c->r[14] = 0x27e44ecu; f_283b27c(c);
    c->r[1] = 0x3d3f74u;
    c->r[2] = 0x11u;
    c->r[3] = 0xeu;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x27e4504u + c->r[1];
    c->v.d[16] = LD64(c->r[1]);
    c->r[1] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; c->v.d[17] = LD64(ea + 0u); }
    c->r[1] = c->r[0] + 0x6u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[17]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); }
    { uint32_t ea = c->r[0] + 0xeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e4528:;
    c->r[5] = c->r[8] + 0x10u;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x27e4538u; f_283b27c(c);
    c->r[1] = c->r[5] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_27e45c0; }
L_27e4550:;
    (void)f_subs(c, c->r[8], 0x10u);
    if (COND_CC) { goto L_27e45a4; }
    c->r[2] = c->r[8];
    c->r[2] = c->r[2] & 0xfffffff0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_27e45a4; }
    (void)f_subs(c, c->r[9], c->r[6]);
    if (COND_CC) { c->r[0] = c->r[9] + c->r[8]; }
    if (COND_CC) { (void)f_subs(c, c->r[7], c->r[0]); }
    if (COND_CC) { goto L_27e45a4; }
    c->r[1] = c->r[9] + c->r[2];
    c->r[0] = c->r[7] + c->r[2];
    c->r[3] = c->r[2];
    c->r[5] = c->r[9];
L_27e4588:;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[7] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    if (COND_NE) { goto L_27e4588; }
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_NE) { goto L_27e45ac; }
    goto L_27e45bc;
L_27e45a4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[9];
L_27e45ac:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x1u; }
    if (COND_NE) { goto L_27e45ac; }
L_27e45bc:;
    c->r[9] = c->r[9] + c->r[8];
L_27e45c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e45cc:;
    c->r[4] = c->r[7] + 0x10u;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x27e45dcu; f_283b27c(c);
    c->r[1] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[0];
L_27e45ec:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x27e45fcu; f_283aa78(c);
L_27e45fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_27e4608:;
    c->r[14] = 0x27e4610u;
    __attribute__((musttail)) return f_284f5c8(c);
L_27e4610:;
    c->r[14] = 0x27e4618u;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27e4648(Cpu *restrict c) {
    FN_ENTER(0x27e4648u);
L_27e4648:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_27e4684; }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); }
    c->r[2] = c->r[0];
    c->r[2] = c->r[2] & 0xfffffffeu;
    c->r[6] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_EQ) { goto L_27e4694; }
    goto L_27e4708;
L_27e4684:;
    c->r[10] = (c->r[0] >> 1);
    c->r[6] = 0xau;
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_NE) { goto L_27e4708; }
L_27e4694:;
    (void)f_adds(c, c->r[6], 0x11u);
    if (COND_EQ) { goto L_27e4744; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[4] = ~0x10u;
    if (COND_EQ) { c->r[9] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; } }
    (void)f_adds(c, c->r[6], 0x8000001au);
    if (COND_HI) { goto L_27e46d0; }
    c->r[0] = c->r[6] + 0x1u;
    c->r[4] = 0xbu;
    (void)f_subs(c, c->r[0], (c->r[6] << 1));
    if (COND_CC) { c->r[0] = (c->r[6] << 1); }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_CS) { c->r[4] = c->r[0] + 0x10u; }
    if (COND_CS) { c->r[4] = c->r[4] & 0xfffffff0u; }
L_27e46d0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x27e46d8u; f_283b27c(c);
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[7] = c->r[0];
    c->r[14] = 0x27e46e8u; f_283aa78(c);
    (void)f_subs(c, c->r[6], 0xau);
    if (COND_EQ) { goto L_27e46f8; }
    c->r[0] = c->r[9];
    c->r[14] = 0x27e46f8u; f_283b288(c);
L_27e46f8:;
    c->r[0] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    goto L_27e4714;
L_27e4708:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_27e4720; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
L_27e4714:;
    c->r[0] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    goto L_27e4730;
L_27e4720:;
    c->r[0] = 0x2u;
    c->r[0] = c->r[0] + (c->r[10] << 1);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    c->r[7] = c->r[5];
L_27e4730:;
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[8]); c->r[7] = ea; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27e4744:;
    c->r[14] = 0x27e474cu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27e474c(Cpu *restrict c) {
    FN_ENTER(0x27e474cu);
L_27e474c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[4] = c->r[0];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[3];
    c->r[7] = c->r[2];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { c->r[6] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; } }
    c->r[8] = f_subs(c, c->r[5], c->r[7]);
    c->r[14] = c->r[10] - c->r[6];
    if (COND_EQ) { goto L_27e49b4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_27e47a0; }
    c->r[2] = (c->r[0] >> 1);
    c->r[3] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_LS) { goto L_27e47ac; }
    goto L_27e47f4;
L_27e47a0:;
    { uint32_t ea = c->r[4] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_HI) { goto L_27e47f4; }
L_27e47ac:;
    c->r[2] = c->r[3] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_LS) { goto L_27e47f4; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[8], 0x10u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_27e4ad4; }
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_HI) { goto L_27e49d4; }
    c->r[0] = (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x18u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x18u;
    c->r[0] = c->r[0] | 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_27e49fc; }
    goto L_27e4a5c;
L_27e47f4:;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    if (COND_NE) { goto L_27e480c; }
    c->r[3] = (c->r[0] >> 1);
    c->r[10] = 0xau;
    goto L_27e481c;
L_27e480c:;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[10] = c->r[1] - 0x1u;
L_27e481c:;
    c->r[1] = c->r[10] - c->r[3];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[1], c->r[8]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    if (COND_CS) { goto L_27e4904; }
    c->r[1] = ~0x10u;
    c->r[2] = c->r[1] - c->r[10];
    c->r[1] = c->r[3] + c->r[8];
    c->r[3] = c->r[1] - c->r[10];
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_27e4ad4; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_adds(c, c->r[10], 0x8000001au);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x10u;
    if (COND_HI) { goto L_27e4880; }
    (void)f_subs(c, c->r[1], (c->r[10] << 1));
    c->r[0] = 0xbu;
    if (COND_CC) { c->r[1] = (c->r[10] << 1); }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_CS) { c->r[0] = c->r[1] + 0x10u; }
    if (COND_CS) { c->r[0] = c->r[0] & 0xfffffff0u; }
L_27e4880:;
    c->r[6] = c->r[0];
    c->r[14] = 0x27e4888u; f_283b27c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_27e48ac; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[14];
    c->r[14] = 0x27e48a8u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27e48ac:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[3], c->r[14]);
    if (COND_EQ) { goto L_27e48d4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[14];
    c->r[0] = c->r[9] + c->r[14];
    c->r[0] = c->r[0] + c->r[8];
    c->r[14] = 0x27e48ccu; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27e48d4:;
    (void)f_subs(c, c->r[10], 0xau);
    if (COND_EQ) { goto L_27e48ec; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e48e4u; f_283b288(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27e48ec:;
    c->r[0] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_27e4934;
L_27e4904:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_EQ) { c->r[9] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; } }
    c->r[2] = f_subs(c, c->r[3], c->r[14]);
    if (COND_EQ) { goto L_27e4934; }
    c->r[1] = c->r[9] + c->r[14];
    c->r[0] = c->r[1] + c->r[8];
    c->r[14] = 0x27e4928u; f_283f1ac(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
L_27e4934:;
    c->r[1] = c->r[3] + c->r[8];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27e494c; }
    c->r[0] = (c->r[1] << 1);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_27e4950;
L_27e494c:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_27e4950:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[5]);
    { uint32_t ea = c->r[9] + c->r[1]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_27e49b4; }
    c->r[2] = c->r[9] + c->r[14];
    (void)f_subs(c, c->r[8], 0x10u);
    if (COND_CC) { goto L_27e499c; }
    c->r[12] = c->r[8];
    c->r[12] = c->r[12] & 0xfffffff0u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_27e499c; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_CS) { goto L_27e4aac; }
    c->r[0] = c->r[10] - c->r[7];
    c->r[0] = c->r[0] - c->r[6];
    c->r[0] = c->r[5] + c->r[0];
    c->r[0] = c->r[9] + c->r[0];
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LS) { goto L_27e4aac; }
L_27e499c:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
L_27e49a4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[2] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); c->r[0] = c->r[0] + 0x1u; }
    if (COND_NE) { goto L_27e49a4; }
L_27e49b4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[4] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    c->r[4] = c->r[0] + c->r[14];
L_27e49c8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_27e49d4:;
    c->r[6] = c->r[8] + 0x10u;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x27e49e4u; f_283b27c(c);
    c->r[1] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27e4a5c; }
L_27e49fc:;
    (void)f_subs(c, c->r[8], 0x10u);
    if (COND_CC) { goto L_27e4a40; }
    c->r[12] = c->r[8];
    c->r[12] = c->r[12] & 0xfffffff0u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_27e4a40; }
    c->r[2] = c->r[0] + c->r[12];
    c->r[1] = c->r[7] + c->r[12];
    c->r[3] = c->r[12];
    c->r[6] = c->r[0];
L_27e4a24:;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[7] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    if (COND_NE) { goto L_27e4a24; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_NE) { goto L_27e4a48; }
    goto L_27e4a58;
L_27e4a40:;
    c->r[1] = c->r[7];
    c->r[2] = c->r[0];
L_27e4a48:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { goto L_27e4a48; }
L_27e4a58:;
    c->r[0] = c->r[0] + c->r[8];
L_27e4a5c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { c->r[1] = (c->r[0] >> 1); }
    c->r[0] = c->r[13] + 0x18u;
    if (COND_EQ) { c->r[2] = c->r[0] | 0x1u; }
    c->r[3] = c->r[2] + c->r[1];
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[14] = 0x27e4a90u; f_27e474c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e49c8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e4aa8u; f_283b288(c);
    goto L_27e49c8;
L_27e4aac:;
    c->r[1] = c->r[7] + c->r[12];
    c->r[0] = c->r[2] + c->r[12];
    c->r[3] = c->r[12];
L_27e4ab8:;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[7] = ea + 16u; }
    c->r[3] = f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    if (COND_NE) { goto L_27e4ab8; }
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_NE) { goto L_27e49a4; }
    goto L_27e49b4;
L_27e4ad4:;
    c->r[14] = 0x27e4adcu;
    __attribute__((musttail)) return f_284f5c8(c);
}
void f_27e4b00(Cpu *restrict c) {
    FN_ENTER(0x27e4b00u);
L_27e4b00:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_27e4b64;
L_27e4b18:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
L_27e4b1c:;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1000u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CC) { goto L_27e4b5c; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_HI) { goto L_27e4b5c; }
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xfu - c->r[5];
    c->r[2] = 0x1000u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffff0u;
    c->r[1] = c->r[5] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); } }
    goto L_27e4b64;
L_27e4b5c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x27e4b64u; f_283b288(c);
L_27e4b64:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_EQ) { goto L_27e4bd0; }
    c->r[6] = c->r[7] - 0x10u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_27e4b64; }
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_27e4b1c; }
L_27e4b90:;
    c->r[8] = c->r[4] - 0x18u;
    { uint32_t ea = c->r[7] - 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e4bac; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e4bacu; f_283b288(c);
L_27e4bac:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_27e4bc0; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x27e4bc0u; f_283b288(c);
L_27e4bc0:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_27e4b90; }
    goto L_27e4b18;
L_27e4bd0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_27e4c14; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1000u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_27e4c10; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_27e4c10; }
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); } }
    goto L_27e4c14;
L_27e4c10:;
    c->r[14] = 0x27e4c14u; f_283b288(c);
L_27e4c14:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_27e4c20(Cpu *restrict c) {
    FN_ENTER(0x27e4c20u);
L_27e4c20:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_27e4d20; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4au);
    if (COND_EQ) { goto L_27e4c70; }
    (void)f_subs(c, c->r[0], 0x4cu);
    if (COND_EQ) { goto L_27e4ca8; }
    (void)f_subs(c, c->r[0], 0x58u);
    if (COND_NE) { goto L_27e4cf4; }
    c->r[7] = c->r[4] + 0x1u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27e4c6cu; f_27cdb70(c);
    goto L_27e4cd4;
L_27e4c70:;
    c->r[7] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_27e4d20; }
L_27e4c7c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x45u);
    if (COND_EQ) { goto L_27e4d1c; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x27e4c98u; f_27e4c20(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[7] = c->r[0];
    if (COND_NE) { goto L_27e4c7c; }
    goto L_27e4d20;
L_27e4ca8:;
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_27e4d08; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5au);
    if (COND_NE) { goto L_27e4d08; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x27e4cd4u; f_27b9310(c);
L_27e4cd4:;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[5]); }
    if (COND_EQ) { goto L_27e4d20; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x45u);
    if (COND_EQ) { c->r[4] = c->r[0]; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_27e4cf4:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_27bab48(c);
L_27e4d08:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_27d500c(c);
L_27e4d1c:;
    c->r[4] = c->r[7] + 0x1u;
L_27e4d20:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
