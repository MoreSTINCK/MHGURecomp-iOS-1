#include "cpu.h"
#include "neon_rt.h"
void f_3662a0(Cpu *c);
void f_477454(Cpu *c);
void f_5f7478(Cpu *c);
void f_5f7500(Cpu *c);
void f_70c964(Cpu *c);
void f_723b0c(Cpu *c);
void f_723da4(Cpu *c);
void f_726348(Cpu *c);
void f_5f45dc(Cpu *restrict c) {
    FN_ENTER(0x5f45dcu);
L_5f45dc:;
    c->r[0] = 0x14447a0u;
    { uint32_t ea = 0x5f45e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f46c8; }
    goto L_5f469c;
L_5f469c:;
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_CC) { goto L_5f46c8; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2000u;
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f46c8:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f46fc; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CC) { goto L_5f46fc; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f46fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4758; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f4714u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444660u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4758; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4750; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4750:;
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4758:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f47b0; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[14] = 0x5f476cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444608u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f47b0; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f47a8; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f47a8:;
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f47b0:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4808; }
    c->r[1] = 0x1u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f47c4u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14445b0u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f47d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4808; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4800; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4800:;
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4808:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4860; }
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f481cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444558u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4860; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4858; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4858:;
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4860:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f48b8; }
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[14] = 0x5f4874u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444500u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4888u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f48b8; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f48b0; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f48b0:;
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f48b8:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4910; }
    c->r[1] = 0x2u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f48ccu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14444a8u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f48e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4910; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4908; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4908:;
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4910:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4968; }
    c->r[1] = 0x3u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f4924u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444450u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4968; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4960; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4960:;
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4968:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f49c0; }
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[14] = 0x5f497cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14443f8u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f49c0; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f49b8; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f49b8:;
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f49c0:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4a18; }
    c->r[1] = 0x3u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f49d4u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14443a0u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f49e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4a18; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4a10; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4a10:;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4a18:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4a70; }
    c->r[1] = 0x4u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f4a2cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444348u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4a40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4a70; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4a68; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4a68:;
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4a70:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4ac8; }
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[14] = 0x5f4a84u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14442f0u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4a98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4ac8; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4ac0; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4ac0:;
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4ac8:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4b20; }
    c->r[1] = 0x4u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4adcu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444298u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4af0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4b20; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4b18; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4b18:;
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4b20:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4b78; }
    c->r[1] = 0x5u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4b34u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444240u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4b48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4b78; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4b70; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4b70:;
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4b78:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4bd0; }
    c->r[1] = 0x6u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4b8cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14441e8u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4bd0; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4bc8; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4bc8:;
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4bd0:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4c28; }
    c->r[1] = 0x7u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4be4u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444190u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4c28; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4c20; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4c20:;
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4c28:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4c80; }
    c->r[1] = 0x8u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4c3cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444138u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4c80; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4c78; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[1]); }
L_5f4c78:;
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[2]); }
L_5f4c80:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_5f4cd8; }
    c->r[1] = 0xbu;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4c94u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14440e0u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4ca8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { goto L_5f4cd8; }
    { uint32_t ea = c->r[0] + 0x9d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5f4cd0; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xb20u; ST32(ea, c->r[2]); }
L_5f4cd0:;
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[1]); }
L_5f4cd8:;
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4d34; }
    c->r[1] = 0xdu;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4cf0u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1444084u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4d04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4d34; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4d2c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4d2c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4d34:;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4d8c; }
    c->r[1] = 0xeu;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4d48u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x144402cu;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4d8c; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4d84; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4d84:;
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4d8c:;
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4de4; }
    c->r[1] = 0xcu;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4da0u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443fd4u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4db4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4de4; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4ddc; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4ddc:;
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4de4:;
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4e3c; }
    c->r[1] = 0x10u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4df8u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443f7cu;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4e3c; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4e34; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4e34:;
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4e3c:;
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4e94; }
    c->r[1] = 0x11u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4e50u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443f24u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4e94; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4e8c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4e8c:;
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4e94:;
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4eec; }
    c->r[1] = 0x12u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4ea8u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443eccu;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4ebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4eec; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4ee4; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4ee4:;
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4eec:;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4f44; }
    c->r[1] = 0x13u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4f00u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443e74u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4f14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4f44; }
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4f3c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4f3c:;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4f44:;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4f9c; }
    c->r[1] = 0x14u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4f58u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443e1cu;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4f6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4f9c; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4f94; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4f94:;
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4f9c:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4ff4; }
    c->r[1] = 0x15u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f4fb0u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443dc4u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f4fc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f4ff4; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4fec; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f4fec:;
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f4ff4:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5044; }
    c->r[0] = 0x1443d80u;
    { uint32_t ea = 0x5f5008u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x5f5008u; f_5f7478(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_5f5044; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f503c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f503c:;
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5044:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f50a4; }
    c->r[0] = 0x1443f64u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x5f505cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5060u; f_70c964(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443d14u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = 0x5f5074u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_5f50a4; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f509c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f509c:;
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f50a4:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5104; }
    c->r[0] = 0x1443f04u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x5f50bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f50c0u; f_70c964(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443cb4u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = 0x5f50d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_5f5104; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f50fc; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f50fc:;
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5104:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5164; }
    c->r[0] = 0x1443ea4u;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x5f511cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5120u; f_70c964(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443c54u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = 0x5f5134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_5f5164; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f515c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f515c:;
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5164:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f51c4; }
    c->r[0] = 0x1443e44u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5f517cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5180u; f_70c964(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443bf4u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = 0x5f5194u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_5f51c4; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f51bc; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
L_5f51bc:;
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f51c4:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f51f8; }
    { uint32_t ea = c->r[0] + 0xc2eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f51f8; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f51f8:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f522c; }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x32u);
    if (COND_CC) { goto L_5f522c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    c->r[1] = c->r[1] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f522c:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5274; }
    c->r[1] = 0x1443974u;
    c->r[3] = 0x384cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x5f5248u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CC) { goto L_5f5274; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    c->r[1] = c->r[1] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5274:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f52bc; }
    c->r[1] = 0x144392cu;
    c->r[3] = 0x384cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x5f5290u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1eu);
    if (COND_CC) { goto L_5f52bc; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f52bc:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5304; }
    c->r[1] = 0x14438e4u;
    c->r[3] = 0x384cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x5f52d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x32u);
    if (COND_CC) { goto L_5f5304; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x800000u;
    c->r[1] = c->r[1] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5304:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5338; }
    { uint32_t ea = c->r[0] + 0xc2eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5338; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5338:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f536c; }
    { uint32_t ea = c->r[0] + 0xc76u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f536c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2000000u;
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f536c:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f53a0; }
    { uint32_t ea = c->r[0] + 0xc75u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f53a0; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x4000000u;
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f53a0:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f53d4; }
    { uint32_t ea = c->r[0] + 0xc75u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f53d4; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f53d4:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5408; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5408; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x10000000u;
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5408:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f543c; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f543c; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x20000000u;
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f543c:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5470; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5470; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[2]); }
L_5f5470:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_5f54a4; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f54a4; }
    { uint32_t ea = c->r[0] + 0xa80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xb24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[1]); }
L_5f54a4:;
    { uint32_t ea = c->r[0] + 0x9e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f54dc; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f54dc; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f54dc:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5510; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5510; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2u;
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f5510:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5544; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5544; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4u;
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f5544:;
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[14] = 0x5f5554u; f_723b0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x144381cu;
    c->r[4] = 0x1388u;
    (void)f_subs(c, c->r[1], c->r[4]);
    { uint32_t ea = 0x5f556cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_5f563c; }
    { uint32_t ea = c->r[0] + 0x9e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f563c; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f55bc; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f55bc:;
    c->r[2] = c->r[1] | 0x18u;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f55e4; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f55e4:;
    c->r[2] = c->r[1] | 0x38u;
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f560c; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f560c:;
    c->r[2] = c->r[1] | 0x78u;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5634; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5634:;
    c->r[1] = c->r[1] | 0xf8u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f563c:;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    c->r[14] = 0x5f564cu; f_723b0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443728u;
    (void)f_subs(c, c->r[1], c->r[4]);
    { uint32_t ea = 0x5f5660u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_5f5730; }
    { uint32_t ea = c->r[0] + 0x9e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5730; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] | 0x100u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f56b0; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f56b0:;
    c->r[2] = c->r[1] | 0x300u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f56d8; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f56d8:;
    c->r[2] = c->r[1] | 0x700u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5700; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5700:;
    c->r[2] = c->r[1] | 0xf00u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5728; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5728:;
    c->r[1] = c->r[1] | 0x1f00u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f5730:;
    c->r[1] = ~0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    c->r[14] = 0x5f5740u; f_723b0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443630u;
    c->r[4] = 0x1388u;
    (void)f_subs(c, c->r[1], c->r[4]);
    { uint32_t ea = 0x5f5758u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_5f5888; }
    goto L_5f57bc;
L_5f57bc:;
    { uint32_t ea = c->r[0] + 0x9e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5888; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5808; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5808:;
    c->r[2] = c->r[1] | 0x6000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5830; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5830:;
    c->r[2] = c->r[1] | 0xe000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5858; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5858:;
    c->r[2] = c->r[1] | 0x1e000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5880; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5880:;
    c->r[1] = c->r[1] | 0x3e000u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f5888:;
    c->r[1] = ~0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x5f5898u; f_723b0c(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CC) { goto L_5f5978; }
    c->r[0] = 0x14434dcu;
    { uint32_t ea = 0x5f58acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5978; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f58f8; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f58f8:;
    c->r[2] = c->r[1] | 0xc0000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5920; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5920:;
    c->r[2] = c->r[1] | 0x1c0000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5948; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5948:;
    c->r[2] = c->r[1] | 0x3c0000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f5970; }
    { uint32_t ea = c->r[0] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[0] + 0xb28u; ST32(ea, c->r[2]); }
L_5f5970:;
    c->r[1] = c->r[1] | 0x7c0000u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
L_5f5978:;
    c->r[0] = 0x14433fcu;
    { uint32_t ea = 0x5f5984u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5988u; f_477454(c);
    c->r[8] = 0x554u;
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_CC) { goto L_5f5a04; }
    c->r[0] = 0x14433e4u;
    { uint32_t ea = 0x5f59a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9e2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5a04; }
    c->r[1] = 0x97u;
    c->r[2] = 0x1u;
L_5f59b8:;
    c->r[7] = (c->r[1] >> 5);
    c->r[4] = c->r[1] & 0x1fu;
    c->r[5] = c->r[0] + (c->r[7] << 2);
    c->r[3] = sh_lsl(c->r[2], c->r[4]);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x9d0u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f59f0; }
    { uint32_t ea = c->r[5] + 0xa74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xb18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xb18u; ST32(ea, c->r[4]); }
L_5f59f0:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] | c->r[6];
    (void)f_subs(c, c->r[1], 0xb5u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f59b8; }
L_5f5a04:;
    c->r[0] = 0x1443370u;
    { uint32_t ea = 0x5f5a10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5a14u; f_477454(c);
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CC) { goto L_5f5a8c; }
    c->r[0] = 0x144335cu;
    { uint32_t ea = 0x5f5a2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9e6u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5a8c; }
    c->r[1] = 0xb5u;
    c->r[2] = 0x1u;
L_5f5a40:;
    c->r[7] = (c->r[1] >> 5);
    c->r[4] = c->r[1] & 0x1fu;
    c->r[5] = c->r[0] + (c->r[7] << 2);
    c->r[3] = sh_lsl(c->r[2], c->r[4]);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x9d0u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5a78; }
    { uint32_t ea = c->r[5] + 0xa74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xb18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xb18u; ST32(ea, c->r[4]); }
L_5f5a78:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] | c->r[6];
    (void)f_subs(c, c->r[1], 0xd3u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f5a40; }
L_5f5a8c:;
    c->r[0] = 0x14432e8u;
    { uint32_t ea = 0x5f5a98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5a9cu; f_477454(c);
    c->r[1] = 0x554u;
    c->r[2] = 0x3e7u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x14432d4u;
    { uint32_t ea = 0x5f5ab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_5f5ae8; }
    { uint32_t ea = c->r[0] + 0x9f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5ae8; }
    { uint32_t ea = c->r[0] + 0xa9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x800u;
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xa9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xb40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9f8u; ST32(ea, c->r[1]); }
L_5f5ae8:;
    { uint32_t ea = c->r[0] + 0xc2bu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5b58; }
    { uint32_t ea = c->r[0] + 0x9f9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5b58; }
    c->r[1] = 0x14cu;
    c->r[2] = 0x1u;
    c->r[12] = 0x16au;
L_5f5b0c:;
    c->r[6] = (c->r[1] >> 5);
    c->r[3] = c->r[1] & 0x1fu;
    c->r[4] = c->r[0] + (c->r[6] << 2);
    c->r[7] = sh_lsl(c->r[2], c->r[3]);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5b44; }
    { uint32_t ea = c->r[4] + 0xa74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xb18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[3]); }
L_5f5b44:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], c->r[12]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f5b0c; }
L_5f5b58:;
    { uint32_t ea = c->r[0] + 0xc2eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5bc4; }
    { uint32_t ea = c->r[0] + 0x9fdu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5bc4; }
    c->r[1] = 0x16au;
    c->r[2] = 0x1u;
L_5f5b78:;
    c->r[7] = (c->r[1] >> 5);
    c->r[4] = c->r[1] & 0x1fu;
    c->r[5] = c->r[0] + (c->r[7] << 2);
    c->r[3] = sh_lsl(c->r[2], c->r[4]);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x9d0u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5bb0; }
    { uint32_t ea = c->r[5] + 0xa74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xb18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xb18u; ST32(ea, c->r[4]); }
L_5f5bb0:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] | c->r[6];
    (void)f_subs(c, c->r[1], 0x188u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f5b78; }
L_5f5bc4:;
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5c38; }
    { uint32_t ea = c->r[0] + 0xa01u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5c38; }
    c->r[1] = 0x188u;
    c->r[2] = 0x1u;
    c->r[12] = 0x1a6u;
L_5f5be8:;
    c->r[6] = (c->r[1] >> 5);
    c->r[3] = c->r[1] & 0x1fu;
    c->r[4] = c->r[0] + (c->r[6] << 2);
    c->r[7] = sh_lsl(c->r[2], c->r[3]);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5c20; }
    { uint32_t ea = c->r[4] + 0xa74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xb18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[3]); }
L_5f5c20:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], c->r[12]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f5be8; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5f5c38:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f5ca0; }
    { uint32_t ea = c->r[0] + 0xa04u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5ca0; }
    c->r[1] = 0x1a6u;
    c->r[2] = 0x1u;
L_5f5c54:;
    c->r[7] = (c->r[1] >> 5);
    c->r[4] = c->r[1] & 0x1fu;
    c->r[5] = c->r[0] + (c->r[7] << 2);
    c->r[3] = sh_lsl(c->r[2], c->r[4]);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x9d0u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5c8c; }
    { uint32_t ea = c->r[5] + 0xa74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xb18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xb18u; ST32(ea, c->r[4]); }
L_5f5c8c:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] | c->r[6];
    (void)f_subs(c, c->r[1], 0x1c4u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f5c54; }
L_5f5ca0:;
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_5f5d10; }
    { uint32_t ea = c->r[0] + 0xa08u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5d10; }
    c->r[1] = 0x1c4u;
    c->r[2] = 0x1u;
    c->r[12] = 0x1e2u;
L_5f5cc4:;
    c->r[6] = (c->r[1] >> 5);
    c->r[3] = c->r[1] & 0x1fu;
    c->r[4] = c->r[0] + (c->r[6] << 2);
    c->r[7] = sh_lsl(c->r[2], c->r[3]);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5cfc; }
    { uint32_t ea = c->r[4] + 0xa74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xb18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[3]); }
L_5f5cfc:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], c->r[12]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f5cc4; }
L_5f5d10:;
    { uint32_t ea = c->r[0] + 0xa0cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5d70; }
    c->r[0] = 0x1444bc0u;
    { uint32_t ea = 0x5f5d28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5d2cu; f_3662a0(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1443048u;
    (void)f_subs(c, c->r[1], 0x64u);
    { uint32_t ea = 0x5f5d40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_CC) { goto L_5f5d70; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5d68; }
    { uint32_t ea = c->r[0] + 0xab0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xab0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xb54u; ST32(ea, c->r[1]); }
L_5f5d68:;
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xa0cu; ST32(ea, c->r[2]); }
L_5f5d70:;
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5dcc; }
    c->r[0] = 0x1444b64u;
    { uint32_t ea = 0x5f5d84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f5d88u; f_3662a0(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442fecu;
    (void)f_subs(c, c->r[1], 0x3e8u);
    { uint32_t ea = 0x5f5d9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_5f5dcc; }
    { uint32_t ea = c->r[0] + 0xa0cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5dc4; }
    { uint32_t ea = c->r[0] + 0xab0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xab0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xb54u; ST32(ea, c->r[2]); }
L_5f5dc4:;
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xa0cu; ST32(ea, c->r[1]); }
L_5f5dcc:;
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5e28; }
    c->r[1] = 0x16u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f5de4u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442f90u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f5df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f5e28; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5e20; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
L_5f5e20:;
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f5e28:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5e80; }
    c->r[1] = 0x17u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f5e3cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442f38u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f5e50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f5e80; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5e78; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
L_5f5e78:;
    c->r[2] = c->r[2] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f5e80:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5ed8; }
    c->r[1] = 0x18u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f5e94u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442ee0u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f5ea8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f5ed8; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5ed0; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
L_5f5ed0:;
    c->r[2] = c->r[2] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f5ed8:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5f30; }
    c->r[1] = 0x1au;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f5eecu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442e88u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f5f00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f5f30; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5f28; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
L_5f5f28:;
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f5f30:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5f88; }
    c->r[1] = 0x1bu;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f5f44u; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442e30u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f5f58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f5f88; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5f80; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
L_5f5f80:;
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f5f88:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5fe0; }
    c->r[1] = 0x19u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x5f5f9cu; f_726348(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1442dd8u;
    (void)f_subs(c, c->r[1], 0x14u);
    { uint32_t ea = 0x5f5fb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_5f5fe0; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f5fd8; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
L_5f5fd8:;
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f5fe0:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6028; }
    c->r[1] = 0x1442bc0u;
    c->r[3] = 0x384cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x5f5ffcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x50u);
    if (COND_CC) { goto L_5f6028; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f6028:;
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f605c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_5f605c; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xae8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xb8cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[2]); }
L_5f605c:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6090; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6090; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x1u;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[2]); }
L_5f6090:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f60c4; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f60c4; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x2u;
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[2]); }
L_5f60c4:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f60f8; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f60f8; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x4u;
    c->r[3] = c->r[3] | 0x4u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[2]); }
L_5f60f8:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f612c; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f612c; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x8u;
    c->r[3] = c->r[3] | 0x8u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[2]); }
L_5f612c:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6160; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6160; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x10u;
    c->r[3] = c->r[3] | 0x10u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[2]); }
L_5f6160:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6194; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6194; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x20u;
    c->r[3] = c->r[3] | 0x20u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[2]); }
L_5f6194:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f61c8; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f61c8; }
    { uint32_t ea = c->r[0] + 0xaecu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40u;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xaecu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xb90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[1]); }
L_5f61c8:;
    c->r[0] = 0x1442bacu;
    { uint32_t ea = 0x5f61d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f61d8u; f_477454(c);
    c->r[8] = 0x554u;
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x32u);
    if (COND_CC) { goto L_5f625c; }
    c->r[0] = 0x1442b94u;
    { uint32_t ea = 0x5f61f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa48u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f625c; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[12] = 0x3c7u;
L_5f620c:;
    c->r[6] = c->r[1] + c->r[12];
    c->r[3] = c->r[1] + 0x7u;
    c->r[6] = (c->r[6] >> 5);
    c->r[7] = sh_lsl(c->r[2], c->r[3]);
    c->r[4] = c->r[0] + (c->r[6] << 2);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6248; }
    { uint32_t ea = c->r[4] + 0xa74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xb18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[3]); }
L_5f6248:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], 0xfu);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f620c; }
L_5f625c:;
    c->r[0] = 0x1442b18u;
    { uint32_t ea = 0x5f6268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f626cu; f_477454(c);
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_CC) { goto L_5f62ec; }
    c->r[0] = 0x1442b04u;
    { uint32_t ea = 0x5f6284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f62ec; }
    c->r[1] = 0x0u;
    c->r[12] = 0x3d6u;
    c->r[3] = 0x1u;
L_5f629c:;
    c->r[6] = c->r[1] + c->r[12];
    c->r[2] = c->r[6] & 0x1fu;
    c->r[6] = (c->r[6] >> 5);
    c->r[4] = c->r[0] + (c->r[6] << 2);
    c->r[7] = sh_lsl(c->r[3], c->r[2]);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f62d8; }
    { uint32_t ea = c->r[4] + 0xa74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | c->r[7];
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | c->r[7];
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[2]); }
L_5f62d8:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], 0xfu);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f629c; }
L_5f62ec:;
    c->r[0] = 0x1442a88u;
    { uint32_t ea = 0x5f62f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f62fcu; f_477454(c);
    c->r[8] = 0x554u;
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xc8u);
    if (COND_CC) { goto L_5f6378; }
    c->r[0] = 0x1442a70u;
    { uint32_t ea = 0x5f6318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6378; }
    c->r[1] = 0x3e5u;
    c->r[2] = 0x1u;
L_5f632c:;
    c->r[7] = (c->r[1] >> 5);
    c->r[4] = c->r[1] - 0x3e0u;
    c->r[5] = c->r[0] + (c->r[7] << 2);
    c->r[3] = sh_lsl(c->r[2], c->r[4]);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x9d0u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6364; }
    { uint32_t ea = c->r[5] + 0xa74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xb18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    { uint32_t ea = c->r[5] + 0xb18u; ST32(ea, c->r[4]); }
L_5f6364:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] | c->r[6];
    (void)f_subs(c, c->r[1], 0x3f4u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f632c; }
L_5f6378:;
    c->r[0] = 0x14429fcu;
    { uint32_t ea = 0x5f6384u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f6388u; f_477454(c);
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1f4u);
    if (COND_CC) { goto L_5f6404; }
    c->r[0] = 0x14429e8u;
    { uint32_t ea = 0x5f63a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6404; }
    c->r[1] = 0x3f4u;
    c->r[2] = 0x1u;
    c->r[12] = 0x403u;
L_5f63b8:;
    c->r[6] = (c->r[1] >> 5);
    c->r[3] = c->r[1] & 0x1fu;
    c->r[4] = c->r[0] + (c->r[6] << 2);
    c->r[7] = sh_lsl(c->r[2], c->r[3]);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f63f0; }
    { uint32_t ea = c->r[4] + 0xa74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xa74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xb18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[4] + 0xb18u; ST32(ea, c->r[3]); }
L_5f63f0:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], c->r[12]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f63b8; }
L_5f6404:;
    c->r[0] = 0x1442970u;
    { uint32_t ea = 0x5f6410u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f6414u; f_477454(c);
    c->r[1] = 0x554u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x3e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5f6460; }
    c->r[0] = 0x1442954u;
    { uint32_t ea = 0x5f6434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6460; }
    { uint32_t ea = c->r[0] + 0xaf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x8u;
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xaf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xb98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xa50u; ST32(ea, c->r[1]); }
L_5f6460:;
    c->r[0] = 0x1442c74u;
    { uint32_t ea = 0x5f646cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x57du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6620; }
    c->r[1] = 0x1442904u;
    { uint32_t ea = 0x5f6484u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6620; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] | 0x10u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f64d0; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f64d0:;
    c->r[3] = c->r[2] | 0x30u;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f64f8; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f64f8:;
    c->r[3] = c->r[2] | 0x70u;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6520; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6520:;
    c->r[3] = c->r[2] | 0xf0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6548; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x100u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x100u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6548:;
    c->r[3] = c->r[2] | 0x1f0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6570; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x200u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x200u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6570:;
    c->r[3] = c->r[2] | 0x3f0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6598; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6598:;
    c->r[3] = c->r[2] | 0x7f0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f65c0; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x800u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x800u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f65c0:;
    c->r[3] = c->r[2] | 0xff0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f65e8; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f65e8:;
    c->r[3] = 0x1ff0u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6614; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6614:;
    c->r[3] = 0x3ff0u;
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[2]); }
L_5f6620:;
    { uint32_t ea = c->r[0] + 0x583u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f67d8; }
    c->r[1] = 0x1442750u;
    { uint32_t ea = 0x5f6638u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f67d8; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6684; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6684:;
    c->r[3] = c->r[2] | 0xc000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f66ac; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f66ac:;
    c->r[3] = c->r[2] | 0x1c000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f66d4; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f66d4:;
    c->r[3] = c->r[2] | 0x3c000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f66fc; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f66fc:;
    c->r[3] = c->r[2] | 0x7c000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6724; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6724:;
    c->r[3] = c->r[2] | 0xfc000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f674c; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x100000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x100000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f674c:;
    c->r[3] = c->r[2] | 0x1fc000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6774; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6774:;
    c->r[3] = c->r[2] | 0x3fc000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f679c; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f679c:;
    c->r[3] = 0xc000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x7f0000u;
    c->r[7] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_5f67cc; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x800000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x800000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[7]); }
L_5f67cc:;
    c->r[3] = c->r[3] + 0x800000u;
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[2]); }
L_5f67d8:;
    { uint32_t ea = c->r[0] + 0x510u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6988; }
    c->r[1] = 0x1442598u;
    { uint32_t ea = 0x5f67f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6988; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] | 0x1000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f683c; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f683c:;
    c->r[3] = c->r[2] | 0x3000000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6864; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6864:;
    c->r[3] = c->r[2] | 0x7000000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f688c; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f688c:;
    c->r[3] = c->r[2] | 0xf000000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f68b4; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f68b4:;
    c->r[3] = c->r[2] | 0x1f000000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f68dc; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f68dc:;
    c->r[3] = c->r[2] | 0x3f000000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6904; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f6904:;
    c->r[3] = c->r[2] | 0x7f000000u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_5f692c; }
    { uint32_t ea = c->r[1] + 0xaf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + 0xaf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + 0xb98u; ST32(ea, c->r[3]); }
L_5f692c:;
    c->r[2] = c->r[2] | 0xff000000u;
    { uint32_t ea = c->r[1] + 0xa50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6958; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6958:;
    c->r[3] = c->r[2] | 0x1u;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6980; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6980:;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[2]); }
L_5f6988:;
    { uint32_t ea = c->r[0] + 0x5b1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6b3c; }
    c->r[1] = 0x14423e8u;
    { uint32_t ea = 0x5f69a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6b3c; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] | 0x4u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f69ec; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f69ec:;
    c->r[3] = c->r[2] | 0xcu;
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6a14; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6a14:;
    c->r[3] = c->r[2] | 0x1cu;
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6a3c; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x20u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6a3c:;
    c->r[3] = c->r[2] | 0x3cu;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6a64; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x40u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6a64:;
    c->r[3] = c->r[2] | 0x7cu;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6a8c; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6a8c:;
    c->r[3] = c->r[2] | 0xfcu;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6ab4; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x100u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x100u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6ab4:;
    c->r[3] = c->r[2] | 0x1fcu;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6adc; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x200u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x200u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6adc:;
    c->r[3] = c->r[2] | 0x3fcu;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6b04; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x400u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6b04:;
    c->r[3] = 0x7fcu;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6b30; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x800u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x800u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6b30:;
    c->r[3] = 0xffcu;
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[2]); }
L_5f6b3c:;
    { uint32_t ea = c->r[0] + 0x596u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f6c20; }
    c->r[1] = 0x1442234u;
    { uint32_t ea = 0x5f6b54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6c20; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6ba0; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6ba0:;
    c->r[3] = c->r[2] | 0x3000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6bc8; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6bc8:;
    c->r[3] = c->r[2] | 0x7000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6bf0; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8000u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8000u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6bf0:;
    c->r[3] = c->r[2] | 0xf000u;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_5f6c18; }
    { uint32_t ea = c->r[1] + 0xaf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10000u;
    { uint32_t ea = c->r[1] + 0xaf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xb9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x10000u;
    { uint32_t ea = c->r[1] + 0xb9cu; ST32(ea, c->r[3]); }
L_5f6c18:;
    c->r[2] = c->r[2] | 0x1f000u;
    { uint32_t ea = c->r[1] + 0xa54u; ST32(ea, c->r[2]); }
L_5f6c20:;
    { uint32_t ea = c->r[0] + 0x580u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1442158u;
    { uint32_t ea = 0x5f6c30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_5f6d04; }
    { uint32_t ea = c->r[0] + 0xa54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f6d04; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xaf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xb9cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xa54u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f6c84; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xaf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xb9cu; ST32(ea, c->r[2]); }
L_5f6c84:;
    c->r[2] = c->r[1] | 0x60000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0xa54u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f6cac; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xaf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xb9cu; ST32(ea, c->r[2]); }
L_5f6cac:;
    c->r[2] = c->r[1] | 0xe0000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0xa54u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f6cd4; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xaf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xb9cu; ST32(ea, c->r[2]); }
L_5f6cd4:;
    c->r[2] = c->r[1] | 0x1e0000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0] + 0xa54u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_5f6cfc; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xaf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[0] + 0xb9cu; ST32(ea, c->r[2]); }
L_5f6cfc:;
    c->r[1] = c->r[1] | 0x3e0000u;
    { uint32_t ea = c->r[0] + 0xa54u; ST32(ea, c->r[1]); }
L_5f6d04:;
    c->r[4] = 0x42cu;
    c->r[1] = 0x9cb4u;
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5f6d14u; f_723da4(c);
    c->r[1] = 0x1442064u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6d24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6d50; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x40u;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6d50:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9d18u;
    c->r[14] = 0x5f6d5cu; f_723da4(c);
    c->r[1] = 0x144201cu;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6d6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6d98; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x80u;
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6d98:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9d7cu;
    c->r[14] = 0x5f6da8u; f_723da4(c);
    c->r[1] = 0x1441fd0u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6db8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6de4; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x100u;
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6de4:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9de0u;
    c->r[14] = 0x5f6df0u; f_723da4(c);
    c->r[1] = 0x1441f88u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6e00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6e2c; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x200u;
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6e2c:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9e44u;
    c->r[14] = 0x5f6e3cu; f_723da4(c);
    c->r[1] = 0x1441f3cu;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6e4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6e78; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x400u;
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6e78:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9ea8u;
    c->r[14] = 0x5f6e84u; f_723da4(c);
    c->r[1] = 0x1441ef4u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6e94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6ec0; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x800u;
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6ec0:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9f0cu;
    c->r[14] = 0x5f6ed0u; f_723da4(c);
    c->r[1] = 0x1441ea8u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6ee0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6f0c; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x1000u;
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6f0c:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9f70u;
    c->r[14] = 0x5f6f18u; f_723da4(c);
    c->r[1] = 0x1441e60u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6f28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6f54; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x2000u;
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6f54:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0x9fd4u;
    c->r[14] = 0x5f6f64u; f_723da4(c);
    c->r[1] = 0x1441e14u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6f74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6fa0; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x4000u;
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6fa0:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa038u;
    c->r[14] = 0x5f6facu; f_723da4(c);
    c->r[1] = 0x1441dccu;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f6fbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f6fe8; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x8000u;
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f6fe8:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa09cu;
    c->r[14] = 0x5f6ff8u; f_723da4(c);
    c->r[1] = 0x1441d80u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f7008u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f7034; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x10000u;
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f7034:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa100u;
    c->r[14] = 0x5f7040u; f_723da4(c);
    c->r[1] = 0x1441d38u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f7050u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f707c; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x20000u;
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f707c:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa164u;
    c->r[14] = 0x5f708cu; f_723da4(c);
    c->r[1] = 0x1441cecu;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f709cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f70c8; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x40000u;
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f70c8:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa1c8u;
    c->r[14] = 0x5f70d4u; f_723da4(c);
    c->r[1] = 0x1441ca4u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f70e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f7110; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x80000u;
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f7110:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa22cu;
    c->r[14] = 0x5f7120u; f_723da4(c);
    c->r[1] = 0x1441c58u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f7130u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f715c; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x100000u;
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f715c:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa290u;
    c->r[14] = 0x5f7168u; f_723da4(c);
    c->r[1] = 0x1441c10u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f7178u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f71a4; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x200000u;
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f71a4:;
    c->r[4] = 0x42cu;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa2f4u;
    c->r[14] = 0x5f71b4u; f_723da4(c);
    c->r[1] = 0x1441bc4u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f71c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_5f71f0; }
    { uint32_t ea = c->r[1] + 0xb04u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x400000u;
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[1] + 0xb04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xba8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400000u;
    { uint32_t ea = c->r[1] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa60u; ST32(ea, c->r[0]); }
L_5f71f0:;
    c->r[0] = c->r[1] + c->r[4];
    c->r[1] = 0xa358u;
    c->r[14] = 0x5f71fcu; f_723da4(c);
    c->r[1] = 0x1441b7cu;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = 0x5f720cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xa60u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_5f7238; }
    { uint32_t ea = c->r[2] + 0xb04u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x800000u;
    c->r[0] = c->r[0] | 0x800000u;
    { uint32_t ea = c->r[2] + 0xb04u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xba8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x800000u;
    { uint32_t ea = c->r[2] + 0xba8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xa60u; ST32(ea, c->r[1]); }
L_5f7238:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f72cc; }
    c->r[0] = 0x1233e74u;
    c->r[4] = 0x0u;
    c->r[6] = 0x42cu;
    c->r[5] = 0x5f7254u + c->r[0];
    c->r[0] = 0x1441b2cu;
    { uint32_t ea = 0x5f725cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f7258:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + c->r[6];
    c->r[14] = 0x5f7264u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5f7294; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x11u);
    if (COND_LS) { goto L_5f7258; }
    { uint32_t ea = c->r[2] + 0xa60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f72d4; }
    goto L_5f7374;
L_5f7294:;
    c->r[0] = 0x1441ae8u;
    { uint32_t ea = 0x5f72a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f72c4; }
    { uint32_t ea = c->r[2] + 0xb04u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[2] + 0xb04u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xba8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    { uint32_t ea = c->r[2] + 0xba8u; ST32(ea, c->r[1]); }
L_5f72c4:;
    c->r[1] = c->r[0] | 0x1000000u;
    { uint32_t ea = c->r[2] + 0xa60u; ST32(ea, c->r[1]); }
L_5f72cc:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f7374; }
L_5f72d4:;
    c->r[0] = 0x1233ddcu;
    c->r[4] = 0x0u;
    c->r[8] = 0x42cu;
    c->r[6] = 0x0u;
    c->r[5] = 0x5f72ecu + c->r[0];
    c->r[0] = 0x1441a94u;
    { uint32_t ea = 0x5f72f4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f72f0:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + c->r[8];
    c->r[14] = 0x5f72fcu; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f7314; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_5f733c; }
L_5f7314:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x12u);
    if (COND_CC) { goto L_5f72f0; }
    { uint32_t ea = c->r[2] + 0xa60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f737c; }
    goto L_5f73e4;
L_5f733c:;
    c->r[0] = 0x1441a40u;
    { uint32_t ea = 0x5f7348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f736c; }
    { uint32_t ea = c->r[2] + 0xb04u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[2] + 0xb04u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xba8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[2] + 0xba8u; ST32(ea, c->r[1]); }
L_5f736c:;
    c->r[1] = c->r[0] | 0x2000000u;
    { uint32_t ea = c->r[2] + 0xa60u; ST32(ea, c->r[1]); }
L_5f7374:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f73e4; }
L_5f737c:;
    c->r[0] = 0x1233d38u;
    c->r[4] = 0x0u;
    c->r[6] = 0x42cu;
    c->r[5] = 0x5f7390u + c->r[0];
    c->r[0] = 0x14419f0u;
    { uint32_t ea = 0x5f7398u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f7394:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + c->r[6];
    c->r[14] = 0x5f73a0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f73e4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x11u);
    if (COND_LS) { goto L_5f7394; }
    { uint32_t ea = c->r[2] + 0xa60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f73dc; }
    { uint32_t ea = c->r[2] + 0xb04u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[2] + 0xb04u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xba8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000000u;
    { uint32_t ea = c->r[2] + 0xba8u; ST32(ea, c->r[1]); }
L_5f73dc:;
    c->r[0] = c->r[0] | 0x4000000u;
    { uint32_t ea = c->r[2] + 0xa60u; ST32(ea, c->r[0]); }
L_5f73e4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5f7500(c);
}
