#include "cpu.h"
#include "neon_rt.h"
void f_283abec(Cpu *c);
void f_284cb44(Cpu *c);
void f_284cb50(Cpu *c);
void f_284cb5c(Cpu *c);
void f_284cb68(Cpu *c);
void f_284cb74(Cpu *c);
void f_25fe5b8(Cpu *restrict c) {
    FN_ENTER(0x25fe5b8u);
L_25fe5b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_260144c; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x22u; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x28u;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xe0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[14] = 0x25fe608u; f_283abec(c);
    c->r[0] = 0x1u;
    c->r[6] = 0xffffu;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7] + 0xf8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fe630; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x3u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_25fe694; }
L_25fe630:;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_260143c; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe680; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_25fe668:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_25fe668; }
L_25fe680:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x20u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x22u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[0]); }
    goto L_2601448;
L_25fe694:;
    c->r[0] = c->r[9];
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[14] = 0x25fe6a4u; f_284cb44(c);
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe724; }
    c->r[0] = c->r[9];
    c->r[1] = 0x3u;
    c->r[2] = 0xau;
    c->r[14] = 0x25fe6c0u; f_284cb44(c);
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe724; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_25fe84c; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe710; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_25fe6f8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_25fe6f8; }
L_25fe710:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x20u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x22u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[0]); }
    goto L_25fe858;
L_25fe724:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfff83fffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3ffdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xdeb80000u;
    if (COND_NE) { goto L_25fe7e4; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_25fe86c; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25ff438; }
    c->r[4] = c->r[0] & c->r[1];
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x399u;
    c->r[0] = c->r[4] | 0x21400000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fe7acu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff0d0; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fe7d0u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff5bc; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xdfffffffu;
    goto L_25ff0d4;
L_25fe7e4:;
    c->r[4] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[2]); }
    c->r[3] = 0x6cu;
    c->r[0] = c->r[4] | 0x21400000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x25fe80cu; f_284cb50(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fe8d0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fe838u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fed0c; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xdfffffffu;
    goto L_25fe8d4;
L_25fe84c:;
    c->r[0] = c->r[9];
    c->r[2] = c->r[8];
    c->r[14] = 0x25fe858u; f_284cb44(c);
L_25fe858:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fe86c:;
    c->r[4] = c->r[0] & c->r[1];
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x418u;
    c->r[0] = c->r[4] | 0x21400000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fe898u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fed6c; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fe8bcu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff074; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xdfffffffu;
    goto L_25fed70;
L_25fe8d0:;
    c->r[0] = c->r[4] | 0x1400000u;
L_25fe8d4:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
L_25fe8d8:;
    c->r[1] = 0xfffdu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[4] = c->r[0] | 0x2u;
    c->r[0] = ~0x80000000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000001u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x53d1bau;
    c->r[10] = 0x25fe914u + c->r[0];
    goto L_25fe91c;
L_25fe914:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[8] + 0x1u;
L_25fe91c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[10] + c->r[8]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x25fe948u; f_284cb50(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fea04; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fe96cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fea08; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fe98cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fea08; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 10);
    (void)f_subs(c, c->r[6], c->r[5]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_GT) { c->r[5] = (uint32_t)((int32_t)c->r[0] >> 10); }
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 10);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { c->r[6] = (uint32_t)((int32_t)c->r[3] >> 10); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_25fea14; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fea28; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fea34; }
    goto L_25fea08;
L_25fea04:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25fea08:;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_NE) { goto L_25fe914; }
    goto L_25fea54;
L_25fea14:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25fea1cu; f_284cb74(c);
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_NE) { goto L_25fe914; }
    goto L_25fea54;
L_25fea28:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fea08; }
L_25fea34:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25fea08; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_NE) { goto L_25fe914; }
L_25fea54:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x4fu;
    (void)f_adds(c, c->r[1], 0x80000001u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x80000001u);
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25feaa4u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25feb48; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25feac8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25feb4c; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x4fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25feae8u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25feb4c; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff654; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff6f0; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff6fc; }
    goto L_25feb4c;
L_25feb48:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25feb4c:;
    c->r[0] = ~0x80000000u;
    c->r[7] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x53cf6cu;
    c->r[10] = 0x25feb68u + c->r[0];
    goto L_25feb9c;
L_25feb68:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25feb70u; f_284cb74(c);
    goto L_25fec74;
L_25feb74:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fec74; }
L_25feb80:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25fec74; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25fec74;
L_25feb9c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + c->r[4]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    c->r[2] = 0x0u;
    c->r[0] = c->r[8];
    c->r[3] = c->r[5];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x25febccu; f_284cb50(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fec70; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25febf0u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fec74; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fec10u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fec74; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 10);
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { c->r[6] = (uint32_t)((int32_t)c->r[0] >> 10); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_25feb68; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25feb74; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25feb80; }
    goto L_25fec74;
L_25fec70:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[8]); }
L_25fec74:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_NE) { goto L_25feb9c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x6fu;
    (void)f_adds(c, c->r[0], 0x80000001u);
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fecc0u; f_284cb50(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff430; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fececu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_25ff438; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x6fu;
    goto L_25ff3d4;
L_25fed0c:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x6cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25fed24u; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] | 0x1400000u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fe8d8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff640; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff660; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_25ff664;
L_25fed6c:;
    c->r[0] = c->r[4] | 0x1400000u;
L_25fed70:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
L_25fed74:;
    c->r[1] = 0xfffdu;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x415u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & c->r[1];
    c->r[4] = c->r[0] | 0x2u;
    c->r[0] = 0xbfffu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfebf0000u;
    c->r[0] = c->r[4] & c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fedb4u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fee58; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fedd8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fee5c; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x415u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25fedf8u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fee5c; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff730; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff7e4; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff7f0; }
    goto L_25fee5c;
L_25fee58:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25fee5c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x41eu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fee8cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fef30; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25feeb0u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fef34; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x41eu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25feed0u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fef34; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff73c; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff80c; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff818; }
    goto L_25fef34;
L_25fef30:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25fef34:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x43bu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fef64u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25feffc; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fef88u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff000; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x43bu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25fefa8u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff000; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff748; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff834; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff840; }
    goto L_25ff000;
L_25feffc:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ff000:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x43eu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff030u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff430; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff054u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_25ff438; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x43eu;
    goto L_25ff3d4;
L_25ff074:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x418u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff08cu; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] | 0x1400000u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fed74; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff718; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff754; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_25ff758;
L_25ff0d0:;
    c->r[0] = c->r[4] | 0x1400000u;
L_25ff0d4:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
L_25ff0d8:;
    c->r[1] = 0xfffdu;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x395u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & c->r[1];
    c->r[4] = c->r[0] | 0x2u;
    c->r[0] = 0xbfffu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfebf0000u;
    c->r[0] = c->r[4] & c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff118u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff1bc; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff13cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff1c0; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x395u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff15cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff1c0; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2600c68; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600d64; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600d70; }
    goto L_25ff1c0;
L_25ff1bc:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ff1c0:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x39fu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff1f0u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff294; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff214u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff298; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x39fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff234u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff298; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2600c74; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600d8c; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600d98; }
    goto L_25ff298;
L_25ff294:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ff298:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3c0u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff2c8u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff360; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff2ecu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff364; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x3c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff30cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff364; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2600c80; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600db4; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600dc0; }
    goto L_25ff364;
L_25ff360:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ff364:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3bfu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff394u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff430; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff3b8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_25ff438; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x3bfu;
L_25ff3d4:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff3dcu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff438; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ff5b0; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff618; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff624; }
    goto L_25ff438;
L_25ff430:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_25ff438:;
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x40u; }
    if (COND_EQ) { { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[0], c->r[2]); }
    if (COND_LT) { goto L_25ff480; }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GE) { { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_LT) { goto L_25ff480; }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GE) { goto L_25ff4d4; }
L_25ff480:;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_260143c; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe680; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_25ff4b8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_25ff4b8; }
    goto L_25fe680;
L_25ff4d4:;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_25ffa14; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfffdu;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x31u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & c->r[1];
    c->r[4] = c->r[0] | 0x2u;
    c->r[0] = 0xbfffu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfebf0000u;
    c->r[0] = c->r[4] & c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff520u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff860; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff544u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff864; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x31u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff564u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff864; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26015cc; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601b24; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601b28;
L_25ff5b0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff5b8u; f_284cb74(c);
    goto L_25ff438;
L_25ff5bc:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x399u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff5d4u; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4] | 0x1400000u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25ff0d8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2600c58; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600ca0; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2600ca4;
L_25ff618:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff438; }
L_25ff624:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff438; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff438;
L_25ff640:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff648u; f_284cb74(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_25ff688;
L_25ff654:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff65cu; f_284cb74(c);
    goto L_25feb4c;
L_25ff660:;
    c->r[1] = 0x1u;
L_25ff664:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff688; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff688; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
L_25ff688:;
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2f8u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff6a8; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_25fe8d8;
L_25ff6a8:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_25ff728; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600d2c; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_25ff6d4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_25ff6d4; }
    goto L_2600d2c;
L_25ff6f0:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25feb4c; }
L_25ff6fc:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25feb4c; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25feb4c;
L_25ff718:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff720u; f_284cb74(c);
    c->r[6] = 0xffffu;
    goto L_25ff77c;
L_25ff728:;
    c->r[0] = c->r[9];
    goto L_2600d48;
L_25ff730:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff738u; f_284cb74(c);
    goto L_25fee5c;
L_25ff73c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff744u; f_284cb74(c);
    goto L_25fef34;
L_25ff748:;
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff750u; f_284cb74(c);
    goto L_25ff000;
L_25ff754:;
    c->r[1] = 0x1u;
L_25ff758:;
    c->r[6] = 0xffffu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff77c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff77c; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
L_25ff77c:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2f8u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff79c; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_25fed74;
L_25ff79c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_2600d40; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600d2c; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_25ff7c8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_25ff7c8; }
    goto L_2600d2c;
L_25ff7e4:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fee5c; }
L_25ff7f0:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25fee5c; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25fee5c;
L_25ff80c:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fef34; }
L_25ff818:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25fef34; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25fef34;
L_25ff834:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff000; }
L_25ff840:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff000; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff000;
L_25ff860:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ff864:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x37u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff894u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff928; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff8b8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ff92c; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x37u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff8d8u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ff92c; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26015d8; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601b50; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601b54;
L_25ff928:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ff92c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ff95cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ff9fc; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ff980u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_25ffa04; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ff9a4u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ffa04; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26015e4; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601b7c; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601b80;
L_25ff9fc:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_25ffa04:;
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
L_25ffa14:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_25ffa38; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xfffdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    goto L_25ffe4c;
L_25ffa38:;
    c->r[1] = 0xfffdu;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x4e28u;
    c->r[8] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & c->r[1];
    c->r[4] = c->r[0] | 0x1400000u;
    c->r[0] = 0xbffdu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[4] & c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ffa7cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ffb04; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ffaa0u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ffb08; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x4e28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ffac0u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ffb08; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601460; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601620; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601624;
L_25ffb04:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ffb08:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x9748u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x25ffb38u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ffc08; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ffb5cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ffc0c; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x9748u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ffb7cu; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25ffc18; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2f0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x2f4u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_260146c; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_25ffbe4; }
    c->r[1] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
L_25ffbe4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ffc18; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ffc18; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ffc18;
L_25ffc08:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ffc0c:;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
L_25ffc14:;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_25ffc18:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x9706u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x25ffc48u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ffcfc; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ffc6cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ffd00; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x9706u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ffc8cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ffd00; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2f0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_260147c; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26016b8; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26016c4; }
    goto L_25ffd00;
L_25ffcfc:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25ffd00:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x6797u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[7];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x25ffd30u; f_284cb50(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25ffdd8; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ffd58u; f_284cb5c(c);
    c->r[4] = ~0x80000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ffde0; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x6797u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ffd7cu; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[5] = ~0x80000000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25ffde4; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[4] = (uint32_t)((int32_t)c->r[3] >> 10);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601488; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26016e0; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26016ec; }
    goto L_25ffde4;
L_25ffdd8:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[4] = ~0x80000000u;
L_25ffde0:;
    c->r[5] = ~0x80000000u;
L_25ffde4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25ffe10; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = sdiv32(c->r[6], c->r[2]);
    goto L_25ffe18;
L_25ffe10:;
    c->r[0] = ~0x80000000u;
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[0]); }
L_25ffe18:;
    c->r[7] = c->r[1];
    c->r[1] = 0xfffdu;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0xffffu;
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfebf0000u;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1];
    c->r[1] = c->r[2] + 0x400000u;
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = c->r[2];
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
L_25ffe4c:;
    c->r[0] = c->r[0] & c->r[1];
    c->r[4] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2600018; }
    c->r[0] = 0xbfffu;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xd4f0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfebf0000u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4] & c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25ffe94u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fff30; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25ffeb8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fff34; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xd4f0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25ffed8u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fff34; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601494; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601708; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_260170c;
L_25fff30:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_25fff34:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xac00u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fff64u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_260000c; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x25fff88u; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_2600018; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xac00u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x25fffb0u; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600018; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014a0; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601734; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601738;
L_260000c:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2600014:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2600018:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2600104; }
L_2600020:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x93eu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600050u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26000f8; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600074u; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_2600104; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x93eu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x260009cu; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600104; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014ac; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601770; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601774;
L_26000f8:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2600100:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2600104:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26001f0; }
L_260010c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x995u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x260013cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26001e4; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600160u; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_26001f0; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x995u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600188u; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26001f0; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014b8; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26017ac; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_26017b0;
L_26001e4:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_26001ec:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_26001f0:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26002dc; }
L_26001f8:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xa38u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600228u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26002d0; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x260024cu; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_26002dc; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xa38u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600274u; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26002dc; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014c4; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26017e8; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_26017ec;
L_26002d0:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_26002d8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_26002dc:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26004a0; }
L_26002e4:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xa9fu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600314u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26003b0; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600338u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26003b4; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xa9fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600358u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26003b4; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014d0; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601824; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601828;
L_26003b0:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_26003b4:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xabeu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x26003e4u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600480; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600408u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_2600488; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xabeu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x260042cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600488; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014dc; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601850; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601854;
L_2600480:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2600488:;
    { uint32_t ea = c->r[7] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { { uint32_t ea = c->r[7] + 0xe4u; ST32(ea, c->r[1]); } }
    if (COND_GT) { { uint32_t ea = c->r[7] + 0xe8u; ST32(ea, c->r[0]); } }
L_26004a0:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2600714; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xbaau;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x26004d8u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600574; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x26004fcu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600578; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xbaau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x260051cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600578; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014e8; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601880; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601884;
L_2600574:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_2600578:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xbb1u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x26005a8u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600638; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x26005ccu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_260063c; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xbb1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x26005ecu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_260063c; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26014f4; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26018ac; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_26018b0;
L_2600638:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_260063c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xb95u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x260066cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600708; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600690u; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_2600714; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xb95u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x26006b8u; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600714; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601500; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26018d8; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_26018dc;
L_2600708:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2600710:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2600714:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2600800; }
L_260071c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xc05u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x260074cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26007f4; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600770u; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_2600800; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xc05u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600798u; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600800; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_260150c; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601914; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601918;
L_26007f4:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_26007fc:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2600800:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26009bc; }
L_2600808:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xd20u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600838u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26008d4; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x260085cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26008d8; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xd20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x260087cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26008d8; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601518; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601950; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601954;
L_26008d4:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_26008d8:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xd1au;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600908u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26009b0; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x260092cu; f_284cb5c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_26009bc; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xd1au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600954u; f_284cb68(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26009bc; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[7] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601524; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_260197c; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601980;
L_26009b0:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_26009b8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_26009bc:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2600b60; }
L_26009c4:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[3];
    c->r[2] = 0x0u;
    c->r[3] = 0xb20u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x26009f8u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600aa0; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600a1cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600aa4; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xb20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600a3cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600aa4; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601530; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26019b4; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26019c0; }
    goto L_2600aa4;
L_2600aa0:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_2600aa4:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xb3eu;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600ad4u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600b54; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600af8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    c->r[3] = c->r[7];
    if (COND_NE) { goto L_2600b60; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xb3eu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600b20u; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600b60; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_260153c; }
    { uint32_t ea = c->r[2] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2601544;
L_2600b54:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2600b5c:;
    c->r[3] = c->r[7];
L_2600b60:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2600e00; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    c->r[8] = c->r[3];
    c->r[2] = 0x0u;
    c->r[3] = 0xda7u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x2600ba0u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600bec; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600bc8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600bf0; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xda7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600be8u; f_284cb68(c);
    c->r[7] = c->r[0];
L_2600bec:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_2600bf0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[1] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xbcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2600e00; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[1] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600c8c; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2600ddc; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600de8; }
    goto L_2600e00;
L_2600c58:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2600c60u; f_284cb74(c);
    c->r[6] = 0xffffu;
    goto L_2600cc8;
L_2600c68:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2600c70u; f_284cb74(c);
    goto L_25ff1c0;
L_2600c74:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2600c7cu; f_284cb74(c);
    goto L_25ff298;
L_2600c80:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2600c88u; f_284cb74(c);
    goto L_25ff364;
L_2600c8c:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[14] = 0x2600c98u; f_284cb74(c);
    c->r[3] = c->r[8];
    goto L_2600e00;
L_2600ca0:;
    c->r[1] = 0x1u;
L_2600ca4:;
    c->r[6] = 0xffffu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600cc8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600cc8; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
L_2600cc8:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2f8u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600ce8; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_25ff0d8;
L_2600ce8:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_2600d40; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600d2c; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_2600d14:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_2600d14; }
L_2600d2c:;
    { uint32_t ea = c->r[9] + 0x20u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x22u; ST16(ea, c->r[6]); }
L_2600d34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[0]); }
    goto L_2600d4c;
L_2600d40:;
    c->r[0] = c->r[9];
    c->r[2] = c->r[8];
L_2600d48:;
    c->r[14] = 0x2600d4cu; f_284cb44(c);
L_2600d4c:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2600d64:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff1c0; }
L_2600d70:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff1c0; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff1c0;
L_2600d8c:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff298; }
L_2600d98:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff298; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff298;
L_2600db4:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff364; }
L_2600dc0:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff364; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff364;
L_2600ddc:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600e00; }
L_2600de8:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600e00; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
L_2600e00:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2601144; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[3];
    c->r[2] = 0x0u;
    c->r[3] = 0xe01u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600e40u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600ed4; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600e64u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600ed8; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xe01u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600e84u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600ed8; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601578; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26019dc; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_26019e0;
L_2600ed4:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_2600ed8:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xe40u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600f08u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2600f9c; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600f2cu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2600fa0; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xe40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2600f4cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2600fa0; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601584; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601a08; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601a0c;
L_2600f9c:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_2600fa0:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xe07u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2600fd0u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2601064; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2600ff4u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2601068; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xe07u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2601014u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601068; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601590; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601a34; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601a38;
L_2601064:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_2601068:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xe1au;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2601098u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2601138; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x26010bcu; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    c->r[3] = c->r[7];
    if (COND_NE) { goto L_2601144; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0xe1au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x26010e4u; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601144; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_260159c; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601a60; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601a64;
L_2601138:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2601140:;
    c->r[3] = c->r[7];
L_2601144:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2601304; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[3];
    c->r[2] = 0x0u;
    c->r[3] = 0x1783u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2601184u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2601218; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x26011a8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_260121c; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x1783u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x26011c8u; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_260121c; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26015a8; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601a94; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601a98;
L_2601218:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
L_260121c:;
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1791u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x260124cu; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26012f8; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2601270u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    c->r[3] = c->r[7];
    if (COND_NE) { goto L_2601304; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x1791u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2601298u; f_284cb68(c);
    c->r[1] = c->r[0];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601304; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26015b4; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601ac0; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601ac4;
L_26012f8:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_2601300:;
    c->r[3] = c->r[7];
L_2601304:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & 0x2000u;
    c->r[0] = c->r[0] & 0x80000000u;
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x8u;
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_26013f4; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x62au;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[0] = c->r[0] & 0xffffbfffu;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2601354u; f_284cb50(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26013ec; }
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2601378u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_NE) { goto L_26013f4; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[3] = 0x62au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x260139cu; f_284cb68(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26013f4; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
    { uint32_t ea = c->r[2] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2601454; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26015f0; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_26015f4;
L_26013ec:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = 0xffffu;
L_26013f4:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_260143c; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe680; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_2601420:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_2601420; }
    goto L_25fe680;
L_260143c:;
    c->r[0] = c->r[9];
    c->r[2] = c->r[8];
    c->r[14] = 0x2601448u; f_284cb44(c);
L_2601448:;
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[10]); }
L_260144c:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2601454:;
    c->r[0] = c->r[9];
    c->r[14] = 0x260145cu; f_284cb74(c);
    goto L_26013f4;
L_2601460:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601468u; f_284cb74(c);
    goto L_2601648;
L_260146c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601474u; f_284cb74(c);
    c->r[0] = 0x1u;
    goto L_25ffc14;
L_260147c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601484u; f_284cb74(c);
    goto L_25ffd00;
L_2601488:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601490u; f_284cb74(c);
    goto L_25ffde4;
L_2601494:;
    c->r[0] = c->r[9];
    c->r[14] = 0x260149cu; f_284cb74(c);
    goto L_25fff34;
L_26014a0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014a8u; f_284cb74(c);
    goto L_2600014;
L_26014ac:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014b4u; f_284cb74(c);
    goto L_2600100;
L_26014b8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014c0u; f_284cb74(c);
    goto L_26001ec;
L_26014c4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014ccu; f_284cb74(c);
    goto L_26002d8;
L_26014d0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014d8u; f_284cb74(c);
    goto L_26003b4;
L_26014dc:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014e4u; f_284cb74(c);
    goto L_2600488;
L_26014e8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014f0u; f_284cb74(c);
    goto L_2600578;
L_26014f4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26014fcu; f_284cb74(c);
    goto L_260063c;
L_2601500:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601508u; f_284cb74(c);
    goto L_2600710;
L_260150c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601514u; f_284cb74(c);
    goto L_26007fc;
L_2601518:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601520u; f_284cb74(c);
    goto L_26008d8;
L_2601524:;
    c->r[0] = c->r[9];
    c->r[14] = 0x260152cu; f_284cb74(c);
    goto L_26009b8;
L_2601530:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601538u; f_284cb74(c);
    goto L_2600aa4;
L_260153c:;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 10);
L_2601544:;
    { uint32_t ea = c->r[2] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26015c0; }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2601af4; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_2601af8;
L_2601578:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601580u; f_284cb74(c);
    goto L_2600ed8;
L_2601584:;
    c->r[0] = c->r[9];
    c->r[14] = 0x260158cu; f_284cb74(c);
    goto L_2600fa0;
L_2601590:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2601598u; f_284cb74(c);
    goto L_2601068;
L_260159c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015a4u; f_284cb74(c);
    goto L_2601140;
L_26015a8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015b0u; f_284cb74(c);
    goto L_260121c;
L_26015b4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015bcu; f_284cb74(c);
    goto L_2601300;
L_26015c0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015c8u; f_284cb74(c);
    goto L_2600b5c;
L_26015cc:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015d4u; f_284cb74(c);
    goto L_25ff864;
L_26015d8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015e0u; f_284cb74(c);
    goto L_25ff92c;
L_26015e4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x26015ecu; f_284cb74(c);
    goto L_25ffa04;
L_26015f0:;
    c->r[1] = 0x1u;
L_26015f4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_26013f4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26013f4; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_26013f4;
L_2601620:;
    c->r[1] = 0x1u;
L_2601624:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2601648; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2601648; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
L_2601648:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2f8u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25ffb08; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_2601bac; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26016a8; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
L_2601690:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xcu; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_2601690; }
L_26016a8:;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[9] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x22u; ST16(ea, c->r[0]); }
    goto L_2600d34;
L_26016b8:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ffd00; }
L_26016c4:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ffd00; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ffd00;
L_26016e0:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ffde4; }
L_26016ec:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ffde4; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ffde4;
L_2601708:;
    c->r[1] = 0x1u;
L_260170c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fff34; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25fff34; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25fff34;
L_2601734:;
    c->r[1] = 0x1u;
L_2601738:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_2600018; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600018; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2600020; }
    goto L_2600104;
L_2601770:;
    c->r[1] = 0x1u;
L_2601774:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_2600104; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600104; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_260010c; }
    goto L_26001f0;
L_26017ac:;
    c->r[1] = 0x1u;
L_26017b0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_26001f0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26001f0; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26001f8; }
    goto L_26002dc;
L_26017e8:;
    c->r[1] = 0x1u;
L_26017ec:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_26002dc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26002dc; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26002e4; }
    goto L_26004a0;
L_2601824:;
    c->r[1] = 0x1u;
L_2601828:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26003b4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26003b4; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_26003b4;
L_2601850:;
    c->r[1] = 0x1u;
L_2601854:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_2600488; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600488; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2600488;
L_2601880:;
    c->r[1] = 0x1u;
L_2601884:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600578; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600578; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2600578;
L_26018ac:;
    c->r[1] = 0x1u;
L_26018b0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_260063c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_260063c; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_260063c;
L_26018d8:;
    c->r[1] = 0x1u;
L_26018dc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_2600714; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600714; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_260071c; }
    goto L_2600800;
L_2601914:;
    c->r[1] = 0x1u;
L_2601918:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_2600800; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600800; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2600808; }
    goto L_26009bc;
L_2601950:;
    c->r[1] = 0x1u;
L_2601954:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26008d8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26008d8; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_26008d8;
L_260197c:;
    c->r[1] = 0x1u;
L_2601980:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_26009bc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26009bc; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26009c4; }
    goto L_2600b60;
L_26019b4:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600aa4; }
L_26019c0:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600aa4; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2600aa4;
L_26019dc:;
    c->r[1] = 0x1u;
L_26019e0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600ed8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600ed8; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2600ed8;
L_2601a08:;
    c->r[1] = 0x1u;
L_2601a0c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2600fa0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600fa0; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2600fa0;
L_2601a34:;
    c->r[1] = 0x1u;
L_2601a38:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2601068; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2601068; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2601068;
L_2601a60:;
    c->r[1] = 0x1u;
L_2601a64:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    c->r[3] = c->r[7];
    if (COND_EQ) { goto L_2601144; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2601144; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2601144;
L_2601a94:;
    c->r[1] = 0x1u;
L_2601a98:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_260121c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_260121c; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_260121c;
L_2601ac0:;
    c->r[1] = 0x1u;
L_2601ac4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    c->r[3] = c->r[7];
    if (COND_EQ) { goto L_2601304; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2601304; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2601304;
L_2601af4:;
    c->r[1] = 0x1u;
L_2601af8:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    c->r[3] = c->r[7];
    if (COND_EQ) { goto L_2600b60; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2600b60; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_2600b60;
L_2601b24:;
    c->r[1] = 0x1u;
L_2601b28:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff864; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff864; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff864;
L_2601b50:;
    c->r[1] = 0x1u;
L_2601b54:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25ff92c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ff92c; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ff92c;
L_2601b7c:;
    c->r[1] = 0x1u;
L_2601b80:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0xffffu;
    if (COND_EQ) { goto L_25ffa04; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_25ffa04; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); } }
    goto L_25ffa04;
L_2601bac:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    goto L_2600d48;
}
