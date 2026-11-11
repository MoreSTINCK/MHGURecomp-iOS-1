#include "cpu.h"
#include "neon_rt.h"
void f_26b7cc4(Cpu *c);
void f_26b8034(Cpu *c);
void f_26b8048(Cpu *c);
void f_26b806c(Cpu *c);
void f_26b80b8(Cpu *c);
void f_26b8380(Cpu *c);
void f_26b9210(Cpu *c);
void f_283b33c(Cpu *c);
void f_283b648(Cpu *c);
void f_284c934(Cpu *c);
void f_284c940(Cpu *c);
void f_2850060(Cpu *c);
void f_2850090(Cpu *c);
void f_28500b4(Cpu *c);
void f_2850138(Cpu *c);
void f_28501a4(Cpu *c);
void f_285033c(Cpu *c);
void f_285039c(Cpu *c);
void f_28503a8(Cpu *c);
void f_28503f0(Cpu *c);
void f_2850480(Cpu *c);
void f_285048c(Cpu *c);
void f_2850498(Cpu *c);
void f_28504a4(Cpu *c);
void f_28504bc(Cpu *c);
void f_2850564(Cpu *c);
void f_2850594(Cpu *c);
void f_28505b8(Cpu *c);
void f_28505c4(Cpu *c);
void f_285069c(Cpu *c);
void f_28506a8(Cpu *c);
void f_2850774(Cpu *c);
void f_28507b0(Cpu *c);
void f_285081c(Cpu *c);
void f_2850828(Cpu *c);
void f_2850834(Cpu *c);
void f_2850840(Cpu *c);
void f_285084c(Cpu *c);
void f_2850858(Cpu *c);
void f_2850864(Cpu *c);
void f_2850870(Cpu *c);
void f_285087c(Cpu *c);
void f_2850888(Cpu *c);
void f_2850894(Cpu *c);
void f_28508a0(Cpu *c);
void f_28508ac(Cpu *c);
void f_28508b8(Cpu *c);
void f_28508c4(Cpu *c);
void f_28508d0(Cpu *c);
void f_28508dc(Cpu *c);
void f_28508e8(Cpu *c);
void f_26b4c8c(Cpu *restrict c) {
    FN_ENTER(0x26b4c8cu);
L_26b4c8c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26b6b3c; }
    c->r[0] = 0x4896d5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4cb0u + c->r[0];
    c->r[14] = 0x26b4cb0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b3c; }
    goto L_26b4e58;
L_26b4e58:;
    c->r[0] = 0x489529u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4e68u + c->r[0];
    c->r[14] = 0x26b4e68u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b54; }
    c->r[0] = 0x489518u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4e80u + c->r[0];
    c->r[14] = 0x26b4e80u; f_283b648(c);
    c->r[7] = 0x1410u;
    c->r[11] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xd10000u;
    if (COND_EQ) { goto L_26b6b68; }
    c->r[0] = 0x4894fdu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4ea4u + c->r[0];
    c->r[14] = 0x26b4ea4u; f_283b648(c);
    c->r[10] = 0x1410u;
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x6880000u;
    if (COND_EQ) { goto L_26b6b74; }
    c->r[0] = 0x4894e2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4ec8u + c->r[0];
    c->r[14] = 0x26b4ec8u; f_283b648(c);
    c->r[8] = 0x1410u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x530000u;
    if (COND_EQ) { goto L_26b6b84; }
    c->r[0] = 0x4894cbu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4ee8u + c->r[0];
    c->r[14] = 0x26b4ee8u; f_283b648(c);
    c->r[5] = 0x1510u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x60a0000u;
    if (COND_EQ) { goto L_26b6b88; }
    c->r[0] = 0x4894b4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4f08u + c->r[0];
    c->r[14] = 0x26b4f08u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b90; }
    c->r[0] = 0x4894a5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4f20u + c->r[0];
    c->r[14] = 0x26b4f20u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x400u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48948eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4f40u + c->r[0];
    c->r[14] = 0x26b4f40u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6ba0; }
    c->r[0] = 0x48947fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4f58u + c->r[0];
    c->r[14] = 0x26b4f58u; f_283b648(c);
    c->r[1] = 0x1510u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[1], 0x300u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48945cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4f84u + c->r[0];
    c->r[14] = 0x26b4f84u; f_283b648(c);
    c->r[5] = 0x1410u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xad10000u;
    if (COND_EQ) { goto L_26b6bac; }
    c->r[0] = 0x489445u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4fa4u + c->r[0];
    c->r[14] = 0x26b4fa4u; f_283b648(c);
    c->r[1] = 0x1110u;
    c->r[2] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa880000u;
    c->r[5] = f_adds(c, c->r[1], 0x700u);
    c->r[6] = c->r[2] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489422u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4fd0u + c->r[0];
    c->r[14] = 0x26b4fd0u; f_283b648(c);
    c->r[5] = 0x1410u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa530000u;
    if (COND_EQ) { goto L_26b6bac; }
    c->r[0] = 0x48940bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b4ff0u + c->r[0];
    c->r[14] = 0x26b4ff0u; f_283b648(c);
    c->r[2] = 0x1210u;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa0a0000u;
    c->r[5] = f_adds(c, c->r[2], 0x600u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4893e8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b501cu + c->r[0];
    c->r[14] = 0x26b501cu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x200u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4893d1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b503cu + c->r[0];
    c->r[14] = 0x26b503cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6bb4; }
    c->r[0] = 0x4893c2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5054u + c->r[0];
    c->r[14] = 0x26b5054u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0x400u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4893a7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5078u + c->r[0];
    c->r[14] = 0x26b5078u; f_283b648(c);
    c->r[1] = 0x1510u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[1], 0x200u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489384u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b50a4u + c->r[0];
    c->r[14] = 0x26b50a4u; f_283b648(c);
    c->r[1] = 0x1110u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa880000u;
    c->r[5] = f_adds(c, c->r[1], 0x100u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48935fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b50d0u + c->r[0];
    c->r[14] = 0x26b50d0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6bc4; }
    c->r[0] = 0x48934eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b50e8u + c->r[0];
    c->r[14] = 0x26b50e8u; f_283b648(c);
    c->r[5] = 0x1110u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa880000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489331u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b510cu + c->r[0];
    c->r[14] = 0x26b510cu; f_283b648(c);
    c->r[1] = 0x1210u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa0a0000u;
    c->r[5] = f_adds(c, c->r[1], 0x100u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48930cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5138u + c->r[0];
    c->r[14] = 0x26b5138u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6bd4; }
    c->r[0] = 0x4892fdu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5150u + c->r[0];
    c->r[14] = 0x26b5150u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6be0; }
    c->r[0] = 0x4892eeu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5168u + c->r[0];
    c->r[14] = 0x26b5168u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0xd10u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4892d7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5188u + c->r[0];
    c->r[14] = 0x26b5188u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0xd10u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4892bcu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b51acu + c->r[0];
    c->r[14] = 0x26b51acu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0xd10u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4892a5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b51ccu + c->r[0];
    c->r[14] = 0x26b51ccu; f_283b648(c);
    c->r[1] = 0x1510u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[1], 0xc10u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489282u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b51f8u + c->r[0];
    c->r[14] = 0x26b51f8u; f_283b648(c);
    c->r[1] = 0x1410u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xad10000u;
    c->r[5] = f_adds(c, c->r[1], 0xd10u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48925fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5224u + c->r[0];
    c->r[14] = 0x26b5224u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6bf4; }
    c->r[0] = 0x489250u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b523cu + c->r[0];
    c->r[14] = 0x26b523cu; f_283b648(c);
    c->r[1] = 0x1410u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[5] = f_adds(c, c->r[1], 0xd10u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48922du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5268u + c->r[0];
    c->r[14] = 0x26b5268u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6bfc; }
    c->r[0] = 0x48921eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5280u + c->r[0];
    c->r[14] = 0x26b5280u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c08; }
    c->r[0] = 0x489214u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5298u + c->r[0];
    c->r[14] = 0x26b5298u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c14; }
    c->r[0] = 0x48920au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b52b0u + c->r[0];
    c->r[14] = 0x26b52b0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c28; }
    c->r[0] = 0x4891ffu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b52c8u + c->r[0];
    c->r[14] = 0x26b52c8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c38; }
    c->r[0] = 0x4891f4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b52e0u + c->r[0];
    c->r[14] = 0x26b52e0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c48; }
    c->r[0] = 0x4891f0u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b52f8u + c->r[0];
    c->r[14] = 0x26b52f8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c54; }
    c->r[0] = 0x4891ecu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5310u + c->r[0];
    c->r[14] = 0x26b5310u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c68; }
    c->r[0] = 0x4891e2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5328u + c->r[0];
    c->r[14] = 0x26b5328u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c74; }
    c->r[0] = 0x4891d8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5340u + c->r[0];
    c->r[14] = 0x26b5340u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6c88; }
    c->r[0] = 0x4891d5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5358u + c->r[0];
    c->r[14] = 0x26b5358u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6ca0; }
    c->r[0] = 0x4891d2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5370u + c->r[0];
    c->r[14] = 0x26b5370u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0xf10u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4891beu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5390u + c->r[0];
    c->r[14] = 0x26b5390u; f_283b648(c);
    c->r[1] = 0x1510u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[1], 0xe10u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48919eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b53bcu + c->r[0];
    c->r[14] = 0x26b53bcu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0xc10u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48918au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b53dcu + c->r[0];
    c->r[14] = 0x26b53dcu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0xc10u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489172u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5400u + c->r[0];
    c->r[14] = 0x26b5400u; f_283b648(c);
    c->r[7] = 0x2320u;
    c->r[1] = 0x2u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[7], 0x7e0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489157u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b542cu + c->r[0];
    c->r[14] = 0x26b542cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[7];
    c->r[6] = 0x2u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489148u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b544cu + c->r[0];
    c->r[14] = 0x26b544cu; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x7e0000u);
    c->r[1] = 0x2u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48912du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5478u + c->r[0];
    c->r[14] = 0x26b5478u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6cb4; }
    c->r[0] = 0x489126u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5490u + c->r[0];
    c->r[14] = 0x26b5490u; f_283b648(c);
    c->r[7] = 0x2320u;
    c->r[1] = 0x3u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[7], 0x7e0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48910au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b54bcu + c->r[0];
    c->r[14] = 0x26b54bcu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[7];
    c->r[6] = 0x3u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4890fau;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b54dcu + c->r[0];
    c->r[14] = 0x26b54dcu; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x7e0000u);
    c->r[1] = 0x3u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4890deu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5508u + c->r[0];
    c->r[14] = 0x26b5508u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6cc8; }
    c->r[0] = 0x4890d6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5520u + c->r[0];
    c->r[14] = 0x26b5520u; f_283b648(c);
    c->r[7] = 0x2320u;
    c->r[1] = 0x4u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[7], 0x7e0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4890c1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b554cu + c->r[0];
    c->r[14] = 0x26b554cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[7];
    c->r[6] = 0x4u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4890b8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b556cu + c->r[0];
    c->r[14] = 0x26b556cu; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x7e0000u);
    c->r[1] = 0x4u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4890a3u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5598u + c->r[0];
    c->r[14] = 0x26b5598u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6cdc; }
    c->r[0] = 0x4890a2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b55b0u + c->r[0];
    c->r[14] = 0x26b55b0u; f_283b648(c);
    c->r[7] = 0x2320u;
    c->r[1] = 0x6u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[7], 0x7e0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489087u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b55dcu + c->r[0];
    c->r[14] = 0x26b55dcu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[7];
    c->r[6] = 0x6u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489078u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b55fcu + c->r[0];
    c->r[14] = 0x26b55fcu; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x7e0000u);
    c->r[1] = 0x6u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48905du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5628u + c->r[0];
    c->r[14] = 0x26b5628u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6cec; }
    c->r[0] = 0x489056u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5640u + c->r[0];
    c->r[14] = 0x26b5640u; f_283b648(c);
    c->r[7] = 0x2320u;
    c->r[1] = 0x7u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x60a0000u;
    c->r[5] = f_adds(c, c->r[7], 0x7e0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489042u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b566cu + c->r[0];
    c->r[14] = 0x26b566cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d00; }
    c->r[0] = 0x489042u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5684u + c->r[0];
    c->r[14] = 0x26b5684u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d0c; }
    c->r[0] = 0x489042u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b569cu + c->r[0];
    c->r[14] = 0x26b569cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d20; }
    c->r[0] = 0x489042u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b56b4u + c->r[0];
    c->r[14] = 0x26b56b4u; f_283b648(c);
    c->r[7] = 0x2740u;
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x530000u;
    if (COND_EQ) { goto L_26b6b90; }
    c->r[0] = 0x48902bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b56d8u + c->r[0];
    c->r[14] = 0x26b56d8u; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x720u);
    c->r[1] = 0x2u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x489011u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5704u + c->r[0];
    c->r[14] = 0x26b5704u; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x720u);
    c->r[1] = 0x3u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488ff6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5730u + c->r[0];
    c->r[14] = 0x26b5730u; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x720u);
    c->r[1] = 0x4u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488fe2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b575cu + c->r[0];
    c->r[14] = 0x26b575cu; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x720u);
    c->r[1] = 0x6u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488fc8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5788u + c->r[0];
    c->r[14] = 0x26b5788u; f_283b648(c);
    c->r[1] = 0x2020u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[5] = f_adds(c, c->r[1], 0x720u);
    c->r[1] = 0x7u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488fb5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b57b4u + c->r[0];
    c->r[14] = 0x26b57b4u; f_283b648(c);
    c->r[10] = 0x2740u;
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xa530000u;
    if (COND_EQ) { goto L_26b6bb4; }
    c->r[0] = 0x488f9eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b57d8u + c->r[0];
    c->r[14] = 0x26b57d8u; f_283b648(c);
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[5] = f_adds(c, c->r[1], 0x620u);
    c->r[1] = 0x2u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488f84u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5804u + c->r[0];
    c->r[14] = 0x26b5804u; f_283b648(c);
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[5] = f_adds(c, c->r[1], 0x620u);
    c->r[1] = 0x3u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488f69u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5830u + c->r[0];
    c->r[14] = 0x26b5830u; f_283b648(c);
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[5] = f_adds(c, c->r[1], 0x620u);
    c->r[1] = 0x4u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488f55u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b585cu + c->r[0];
    c->r[14] = 0x26b585cu; f_283b648(c);
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[5] = f_adds(c, c->r[1], 0x620u);
    c->r[1] = 0x6u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488f3bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5888u + c->r[0];
    c->r[14] = 0x26b5888u; f_283b648(c);
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa530000u;
    c->r[5] = f_adds(c, c->r[1], 0x620u);
    c->r[1] = 0x7u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488f28u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b58b4u + c->r[0];
    c->r[14] = 0x26b58b4u; f_283b648(c);
    c->r[1] = 0x2120u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa0a0000u;
    c->r[5] = f_adds(c, c->r[1], 0x3d00u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488f0cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b58e0u + c->r[0];
    c->r[14] = 0x26b58e0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x4000u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488effu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5900u + c->r[0];
    c->r[14] = 0x26b5900u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x4000u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488ef2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5920u + c->r[0];
    c->r[14] = 0x26b5920u; f_283b648(c);
    c->r[5] = 0x6740u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x530000u;
    if (COND_EQ) { goto L_26b6d30; }
    c->r[0] = 0x488ef1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5940u + c->r[0];
    c->r[14] = 0x26b5940u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d3c; }
    c->r[0] = 0x488ef4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5958u + c->r[0];
    c->r[14] = 0x26b5958u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d44; }
    c->r[0] = 0x488efcu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5970u + c->r[0];
    c->r[14] = 0x26b5970u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d50; }
    c->r[0] = 0x488ee7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5988u + c->r[0];
    c->r[14] = 0x26b5988u; f_283b648(c);
    c->r[5] = 0xe10u;
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xb080000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488ec7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b59acu + c->r[0];
    c->r[14] = 0x26b59acu; f_283b648(c);
    c->r[7] = 0xa10u;
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xb200000u;
    if (COND_EQ) { goto L_26b6b90; }
    c->r[0] = 0x488ea7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b59d0u + c->r[0];
    c->r[14] = 0x26b59d0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0xf10u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488e8eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b59f0u + c->r[0];
    c->r[14] = 0x26b59f0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x4000u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488e78u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5a10u + c->r[0];
    c->r[14] = 0x26b5a10u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d60; }
    c->r[0] = 0x488e6du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5a28u + c->r[0];
    c->r[14] = 0x26b5a28u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d74; }
    c->r[0] = 0x488e58u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5a40u + c->r[0];
    c->r[14] = 0x26b5a40u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d7c; }
    c->r[0] = 0x488e43u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5a58u + c->r[0];
    c->r[14] = 0x26b5a58u; f_283b648(c);
    c->r[5] = 0x304u;
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa000000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488e22u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5a7cu + c->r[0];
    c->r[14] = 0x26b5a7cu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x104u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488e05u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5a9cu + c->r[0];
    c->r[14] = 0x26b5a9cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d84; }
    c->r[0] = 0x488df1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5ab4u + c->r[0];
    c->r[14] = 0x26b5ab4u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d8c; }
    c->r[0] = 0x488dddu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5accu + c->r[0];
    c->r[14] = 0x26b5accu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6d98; }
    c->r[0] = 0x488dcau;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5ae4u + c->r[0];
    c->r[14] = 0x26b5ae4u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6da0; }
    c->r[0] = 0x488db7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5afcu + c->r[0];
    c->r[14] = 0x26b5afcu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6dac; }
    c->r[0] = 0x488da4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5b14u + c->r[0];
    c->r[14] = 0x26b5b14u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6db4; }
    c->r[0] = 0x488d91u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5b2cu + c->r[0];
    c->r[14] = 0x26b5b2cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6dc8; }
    c->r[0] = 0x488d83u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5b44u + c->r[0];
    c->r[14] = 0x26b5b44u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6ddc; }
    c->r[0] = 0x488d78u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5b5cu + c->r[0];
    c->r[14] = 0x26b5b5cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6dec; }
    c->r[0] = 0x488d63u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5b74u + c->r[0];
    c->r[14] = 0x26b5b74u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6df4; }
    c->r[0] = 0x488d4eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5b8cu + c->r[0];
    c->r[14] = 0x26b5b8cu; f_283b648(c);
    c->r[5] = 0x304u;
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1240000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488d2du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5bb0u + c->r[0];
    c->r[14] = 0x26b5bb0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x104u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488d10u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5bd0u + c->r[0];
    c->r[14] = 0x26b5bd0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e00; }
    c->r[0] = 0x488cfcu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5be8u + c->r[0];
    c->r[14] = 0x26b5be8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e08; }
    c->r[0] = 0x488ce8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5c00u + c->r[0];
    c->r[14] = 0x26b5c00u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e14; }
    c->r[0] = 0x488cdau;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5c18u + c->r[0];
    c->r[14] = 0x26b5c18u; f_283b648(c);
    c->r[6] = 0x9u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e24; }
    c->r[0] = 0x488cc1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5c34u + c->r[0];
    c->r[14] = 0x26b5c34u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e34; }
    c->r[0] = 0x488cacu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5c4cu + c->r[0];
    c->r[14] = 0x26b5c4cu; f_283b648(c);
    c->r[5] = 0x304u;
    c->r[6] = 0x9u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488c8bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5c70u + c->r[0];
    c->r[14] = 0x26b5c70u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x104u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488c6eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5c90u + c->r[0];
    c->r[14] = 0x26b5c90u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e40; }
    c->r[0] = 0x488c5bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5ca8u + c->r[0];
    c->r[14] = 0x26b5ca8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e48; }
    c->r[0] = 0x488c48u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5cc0u + c->r[0];
    c->r[14] = 0x26b5cc0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e54; }
    c->r[0] = 0x488c35u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5cd8u + c->r[0];
    c->r[14] = 0x26b5cd8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e64; }
    c->r[0] = 0x488c22u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5cf0u + c->r[0];
    c->r[14] = 0x26b5cf0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e74; }
    c->r[0] = 0x488c13u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5d08u + c->r[0];
    c->r[14] = 0x26b5d08u; f_283b648(c);
    c->r[9] = 0x2120u;
    c->r[8] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xd10000u;
    if (COND_EQ) { goto L_26b6ee8; }
    c->r[0] = 0x488bf8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5d2cu + c->r[0];
    c->r[14] = 0x26b5d2cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e80; }
    c->r[0] = 0x488be9u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5d44u + c->r[0];
    c->r[14] = 0x26b5d44u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6e94; }
    c->r[0] = 0x488bd6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5d5cu + c->r[0];
    c->r[14] = 0x26b5d5cu; f_283b648(c);
    c->r[7] = 0x810u;
    c->r[6] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa500000u;
    if (COND_EQ) { goto L_26b6ea4; }
    c->r[0] = 0x488bb7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5d80u + c->r[0];
    c->r[14] = 0x26b5d80u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x380000u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488b9cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5da0u + c->r[0];
    c->r[14] = 0x26b5da0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6f04; }
    c->r[0] = 0x488b89u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5db8u + c->r[0];
    c->r[14] = 0x26b5db8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[9], 0x620u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488b76u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5dd8u + c->r[0];
    c->r[14] = 0x26b5dd8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6eb0; }
    c->r[0] = 0x488b61u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5df0u + c->r[0];
    c->r[14] = 0x26b5df0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6ec4; }
    c->r[0] = 0x488b4cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5e08u + c->r[0];
    c->r[14] = 0x26b5e08u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6ed4; }
    c->r[0] = 0x488b37u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5e20u + c->r[0];
    c->r[14] = 0x26b5e20u; f_283b648(c);
    c->r[7] = 0x710u;
    c->r[8] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8440000u;
    if (COND_EQ) { goto L_26b6f04; }
    c->r[0] = 0x488b19u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5e44u + c->r[0];
    c->r[14] = 0x26b5e44u; f_283b648(c);
    c->r[5] = 0x710u;
    c->r[6] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80c0000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488afbu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5e68u + c->r[0];
    c->r[14] = 0x26b5e68u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x700u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488ae0u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5e88u + c->r[0];
    c->r[14] = 0x26b5e88u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x700u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488ac5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5ea8u + c->r[0];
    c->r[14] = 0x26b5ea8u; f_283b648(c);
    c->r[5] = 0xf10u;
    c->r[6] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488aa5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5eccu + c->r[0];
    c->r[14] = 0x26b5eccu; f_283b648(c);
    c->r[9] = 0xf10u;
    c->r[11] = 0xau;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x9040000u;
    if (COND_EQ) { goto L_26b6ee8; }
    c->r[0] = 0x488a85u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5ef0u + c->r[0];
    c->r[14] = 0x26b5ef0u; f_283b648(c);
    c->r[10] = 0xf10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x8240000u;
    if (COND_EQ) { goto L_26b6ef4; }
    c->r[0] = 0x488a69u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5f10u + c->r[0];
    c->r[14] = 0x26b5f10u; f_283b648(c);
    c->r[7] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8140000u;
    if (COND_EQ) { goto L_26b6f04; }
    c->r[0] = 0x488a50u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5f30u + c->r[0];
    c->r[14] = 0x26b5f30u; f_283b648(c);
    c->r[8] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x8840000u;
    if (COND_EQ) { goto L_26b6f10; }
    c->r[0] = 0x488a37u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5f50u + c->r[0];
    c->r[14] = 0x26b5f50u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x100u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488a1bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5f70u + c->r[0];
    c->r[14] = 0x26b5f70u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[9], 0x100u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4889ffu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5f90u + c->r[0];
    c->r[14] = 0x26b5f90u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x100u);
    c->r[1] = 0xau;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4889dfu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5fb4u + c->r[0];
    c->r[14] = 0x26b5fb4u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x200u);
    c->r[1] = 0xau;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4889c2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5fd8u + c->r[0];
    c->r[14] = 0x26b5fd8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0x200u);
    c->r[1] = 0xau;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4889a5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b5ffcu + c->r[0];
    c->r[14] = 0x26b5ffcu; f_283b648(c);
    c->r[7] = 0x408u;
    c->r[1] = 0xbu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x9040000u;
    c->r[5] = f_adds(c, c->r[7], 0x1c0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48897fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6028u + c->r[0];
    c->r[14] = 0x26b6028u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6f30; }
    c->r[0] = 0x48896du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6040u + c->r[0];
    c->r[14] = 0x26b6040u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6f20; }
    c->r[0] = 0x48895bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6058u + c->r[0];
    c->r[14] = 0x26b6058u; f_283b648(c);
    c->r[7] = 0x710u;
    c->r[8] = 0xbu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8440000u;
    if (COND_EQ) { goto L_26b6f30; }
    c->r[0] = 0x488940u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b607cu + c->r[0];
    c->r[14] = 0x26b607cu; f_283b648(c);
    c->r[5] = 0x710u;
    c->r[6] = 0xbu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80c0000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488925u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b60a0u + c->r[0];
    c->r[14] = 0x26b60a0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x700u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48890du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b60c0u + c->r[0];
    c->r[14] = 0x26b60c0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x700u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4888f5u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b60e0u + c->r[0];
    c->r[14] = 0x26b60e0u; f_283b648(c);
    c->r[2] = 0x408u;
    c->r[1] = 0xcu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x9040000u;
    c->r[5] = f_adds(c, c->r[2], 0x1c0000u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4888cfu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b610cu + c->r[0];
    c->r[14] = 0x26b610cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6f40; }
    c->r[0] = 0x4888bdu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6124u + c->r[0];
    c->r[14] = 0x26b6124u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6f50; }
    c->r[0] = 0x4888abu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b613cu + c->r[0];
    c->r[14] = 0x26b613cu; f_283b648(c);
    c->r[7] = 0x710u;
    c->r[8] = 0xcu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8440000u;
    if (COND_EQ) { goto L_26b6f64; }
    c->r[0] = 0x488890u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6160u + c->r[0];
    c->r[14] = 0x26b6160u; f_283b648(c);
    c->r[5] = 0x710u;
    c->r[6] = 0xcu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80c0000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488875u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6184u + c->r[0];
    c->r[14] = 0x26b6184u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x700u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48885du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b61a4u + c->r[0];
    c->r[14] = 0x26b61a4u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x700u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488845u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b61c4u + c->r[0];
    c->r[14] = 0x26b61c4u; f_283b648(c);
    c->r[6] = 0xdu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7060; }
    c->r[0] = 0x488830u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b61e0u + c->r[0];
    c->r[14] = 0x26b61e0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6fb4; }
    c->r[0] = 0x48881fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b61f8u + c->r[0];
    c->r[14] = 0x26b61f8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6f70; }
    c->r[0] = 0x48880eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6210u + c->r[0];
    c->r[14] = 0x26b6210u; f_283b648(c);
    c->r[7] = 0x710u;
    c->r[8] = 0xdu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8440000u;
    if (COND_EQ) { goto L_26b6fa8; }
    c->r[0] = 0x4887f4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6234u + c->r[0];
    c->r[14] = 0x26b6234u; f_283b648(c);
    c->r[5] = 0x710u;
    c->r[6] = 0xdu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80c0000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4887dau;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6258u + c->r[0];
    c->r[14] = 0x26b6258u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x700u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4887c3u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6278u + c->r[0];
    c->r[14] = 0x26b6278u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x700u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4887acu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6298u + c->r[0];
    c->r[14] = 0x26b6298u; f_283b648(c);
    c->r[5] = 0xf10u;
    c->r[6] = 0xdu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488790u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b62bcu + c->r[0];
    c->r[14] = 0x26b62bcu; f_283b648(c);
    c->r[10] = 0xf10u;
    c->r[8] = 0xdu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x9040000u;
    if (COND_EQ) { goto L_26b6f80; }
    c->r[0] = 0x488774u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b62e0u + c->r[0];
    c->r[14] = 0x26b62e0u; f_283b648(c);
    c->r[11] = 0xf10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x8240000u;
    if (COND_EQ) { goto L_26b6f8c; }
    c->r[0] = 0x48875cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6300u + c->r[0];
    c->r[14] = 0x26b6300u; f_283b648(c);
    c->r[9] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x8140000u;
    if (COND_EQ) { goto L_26b6f98; }
    c->r[0] = 0x488747u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6320u + c->r[0];
    c->r[14] = 0x26b6320u; f_283b648(c);
    c->r[7] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8840000u;
    if (COND_EQ) { goto L_26b6fa8; }
    c->r[0] = 0x488732u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6340u + c->r[0];
    c->r[14] = 0x26b6340u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x100u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48871au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6360u + c->r[0];
    c->r[14] = 0x26b6360u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x100u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488702u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6380u + c->r[0];
    c->r[14] = 0x26b6380u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[11], 0x100u);
    c->r[1] = 0xdu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4886e6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b63a4u + c->r[0];
    c->r[14] = 0x26b63a4u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[9], 0x200u);
    c->r[1] = 0xdu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4886cdu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b63c8u + c->r[0];
    c->r[14] = 0x26b63c8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x200u);
    c->r[1] = 0xdu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4886b4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b63ecu + c->r[0];
    c->r[14] = 0x26b63ecu; f_283b648(c);
    c->r[6] = 0xeu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7060; }
    c->r[0] = 0x4886a2u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6408u + c->r[0];
    c->r[14] = 0x26b6408u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6fb4; }
    c->r[0] = 0x488694u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6420u + c->r[0];
    c->r[14] = 0x26b6420u; f_283b648(c);
    c->r[5] = 0x408u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x8240000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48867eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6440u + c->r[0];
    c->r[14] = 0x26b6440u; f_283b648(c);
    c->r[7] = 0x710u;
    c->r[8] = 0xeu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8440000u;
    if (COND_EQ) { goto L_26b6fdc; }
    c->r[0] = 0x488667u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6464u + c->r[0];
    c->r[14] = 0x26b6464u; f_283b648(c);
    c->r[5] = 0x710u;
    c->r[6] = 0xeu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x80c0000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488650u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6488u + c->r[0];
    c->r[14] = 0x26b6488u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x700u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48863cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b64a8u + c->r[0];
    c->r[14] = 0x26b64a8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x700u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488628u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b64c8u + c->r[0];
    c->r[14] = 0x26b64c8u; f_283b648(c);
    c->r[5] = 0xf10u;
    c->r[6] = 0xeu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48860fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b64ecu + c->r[0];
    c->r[14] = 0x26b64ecu; f_283b648(c);
    c->r[11] = 0xf10u;
    c->r[8] = 0xeu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x9040000u;
    if (COND_EQ) { goto L_26b6fc0; }
    c->r[0] = 0x4885f6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6510u + c->r[0];
    c->r[14] = 0x26b6510u; f_283b648(c);
    c->r[9] = 0xf10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x8240000u;
    if (COND_EQ) { goto L_26b6fd0; }
    c->r[0] = 0x4885e1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6530u + c->r[0];
    c->r[14] = 0x26b6530u; f_283b648(c);
    c->r[7] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8140000u;
    if (COND_EQ) { goto L_26b6fdc; }
    c->r[0] = 0x4885cfu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6550u + c->r[0];
    c->r[14] = 0x26b6550u; f_283b648(c);
    c->r[10] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x8840000u;
    if (COND_EQ) { goto L_26b6fec; }
    c->r[0] = 0x4885bdu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6570u + c->r[0];
    c->r[14] = 0x26b6570u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x100u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4885a8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6590u + c->r[0];
    c->r[14] = 0x26b6590u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[11], 0x100u);
    c->r[6] = c->r[8] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488593u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b65b0u + c->r[0];
    c->r[14] = 0x26b65b0u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[9], 0x100u);
    c->r[1] = 0xeu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48857au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b65d4u + c->r[0];
    c->r[14] = 0x26b65d4u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x200u);
    c->r[1] = 0xeu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488564u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b65f8u + c->r[0];
    c->r[14] = 0x26b65f8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x200u);
    c->r[1] = 0xeu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48854eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b661cu + c->r[0];
    c->r[14] = 0x26b661cu; f_283b648(c);
    c->r[7] = 0xf10u;
    c->r[9] = 0xfu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x9040000u;
    c->r[5] = f_adds(c, c->r[7], 0x1c0000u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48852bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6648u + c->r[0];
    c->r[14] = 0x26b6648u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6ff8; }
    c->r[0] = 0x48851cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6660u + c->r[0];
    c->r[14] = 0x26b6660u; f_283b648(c);
    c->r[11] = 0xf10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x8240000u;
    if (COND_EQ) { goto L_26b7004; }
    c->r[0] = 0x488505u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6680u + c->r[0];
    c->r[14] = 0x26b6680u; f_283b648(c);
    c->r[8] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x8140000u;
    if (COND_EQ) { goto L_26b7010; }
    c->r[0] = 0x4884f1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b66a0u + c->r[0];
    c->r[14] = 0x26b66a0u; f_283b648(c);
    c->r[10] = 0x2220u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x8840000u;
    if (COND_EQ) { goto L_26b7020; }
    c->r[0] = 0x4884ddu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b66c0u + c->r[0];
    c->r[14] = 0x26b66c0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7030; }
    c->r[0] = 0x4884ceu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b66d8u + c->r[0];
    c->r[14] = 0x26b66d8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x100u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4884b7u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b66f8u + c->r[0];
    c->r[14] = 0x26b66f8u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[11], 0x100u);
    c->r[1] = 0xfu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48849cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b671cu + c->r[0];
    c->r[14] = 0x26b671cu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0x200u);
    c->r[1] = 0xfu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488484u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6740u + c->r[0];
    c->r[14] = 0x26b6740u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x200u);
    c->r[1] = 0xfu;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48846cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6764u + c->r[0];
    c->r[14] = 0x26b6764u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7040; }
    c->r[0] = 0x48845fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b677cu + c->r[0];
    c->r[14] = 0x26b677cu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b704c; }
    c->r[0] = 0x488452u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6794u + c->r[0];
    c->r[14] = 0x26b6794u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7054; }
    c->r[0] = 0x488445u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b67acu + c->r[0];
    c->r[14] = 0x26b67acu; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b705c; }
    c->r[0] = 0x488438u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b67c4u + c->r[0];
    c->r[14] = 0x26b67c4u; f_283b648(c);
    c->r[1] = 0xb10u;
    c->r[7] = 0x10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[1], 0x200u);
    c->r[6] = c->r[7] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48841au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b67f0u + c->r[0];
    c->r[14] = 0x26b67f0u; f_283b648(c);
    c->r[1] = 0xb10u;
    c->r[9] = 0x11u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[1], 0x200u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4883fcu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b681cu + c->r[0];
    c->r[14] = 0x26b681cu; f_283b648(c);
    c->r[1] = 0xb10u;
    c->r[10] = 0x12u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[1], 0x200u);
    c->r[6] = c->r[10] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4883deu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6848u + c->r[0];
    c->r[14] = 0x26b6848u; f_283b648(c);
    c->r[8] = 0xb10u;
    c->r[11] = 0x13u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[8], 0x200u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4883c0u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6874u + c->r[0];
    c->r[14] = 0x26b6874u; f_283b648(c);
    c->r[1] = 0xb10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[1], 0x100u);
    c->r[6] = c->r[7] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4883a6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b689cu + c->r[0];
    c->r[14] = 0x26b689cu; f_283b648(c);
    c->r[1] = 0xb10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[1], 0x100u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48838cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b68c4u + c->r[0];
    c->r[14] = 0x26b68c4u; f_283b648(c);
    c->r[1] = 0xb10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x9210000u;
    c->r[5] = f_adds(c, c->r[1], 0x100u);
    c->r[6] = c->r[10] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488372u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b68ecu + c->r[0];
    c->r[14] = 0x26b68ecu; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0x100u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488360u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b690cu + c->r[0];
    c->r[14] = 0x26b690cu; f_283b648(c);
    c->r[5] = 0xb10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x10u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9210000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48834au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6930u + c->r[0];
    c->r[14] = 0x26b6930u; f_283b648(c);
    c->r[5] = 0xb10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x11u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9210000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488334u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6954u + c->r[0];
    c->r[14] = 0x26b6954u; f_283b648(c);
    c->r[5] = 0xb10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x12u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9210000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48831eu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6978u + c->r[0];
    c->r[14] = 0x26b6978u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[8];
    c->r[6] = 0x13u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48830cu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6998u + c->r[0];
    c->r[14] = 0x26b6998u; f_283b648(c);
    c->r[5] = 0xa10u;
    c->r[6] = 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x4882f4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b69bcu + c->r[0];
    c->r[14] = 0x26b69bcu; f_283b648(c);
    c->r[8] = 0xa10u;
    c->r[11] = 0x11u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b7070; }
    c->r[0] = 0x4882dcu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b69e0u + c->r[0];
    c->r[14] = 0x26b69e0u; f_283b648(c);
    c->r[7] = 0xa10u;
    c->r[9] = 0x12u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b707c; }
    c->r[0] = 0x4882c4u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6a04u + c->r[0];
    c->r[14] = 0x26b6a04u; f_283b648(c);
    c->r[10] = 0xa10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b7088; }
    c->r[0] = 0x4882b0u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6a24u + c->r[0];
    c->r[14] = 0x26b6a24u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[5], 0x8000u);
    c->r[6] = c->r[6] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48829du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6a44u + c->r[0];
    c->r[14] = 0x26b6a44u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[8], 0x8000u);
    c->r[6] = c->r[11] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48828au;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6a64u + c->r[0];
    c->r[14] = 0x26b6a64u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[7], 0x8000u);
    c->r[6] = c->r[9] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488277u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6a84u + c->r[0];
    c->r[14] = 0x26b6a84u; f_283b648(c);
    c->r[5] = f_adds(c, c->r[10], 0x8000u);
    c->r[1] = 0x13u;
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x488260u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6aa8u + c->r[0];
    c->r[14] = 0x26b6aa8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7098; }
    c->r[0] = 0x48824du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6ac0u + c->r[0];
    c->r[14] = 0x26b6ac0u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b70ac; }
    c->r[0] = 0x48823fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6ad8u + c->r[0];
    c->r[14] = 0x26b6ad8u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b70bc; }
    c->r[0] = 0x488232u;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6af0u + c->r[0];
    c->r[14] = 0x26b6af0u; f_283b648(c);
    c->r[5] = 0x1a18u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    if (COND_EQ) { goto L_26b70c0; }
    c->r[0] = 0x48821du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6b10u + c->r[0];
    c->r[14] = 0x26b6b10u; f_283b648(c);
    c->r[1] = 0x0u;
    c->r[5] = f_adds(c, c->r[5], 0x208u);
    c->r[6] = c->r[1] + 0x0u + c->cf;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b6b44; }
    c->r[0] = 0x48784du;
    c->r[1] = c->r[4];
    c->r[0] = 0x26b6b34u + c->r[0];
    c->r[14] = 0x26b6b34u; f_283b648(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b70cc; }
L_26b6b3c:;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_26b6b44:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26b6b54:;
    c->r[5] = 0x608u;
L_26b6b58:;
    c->r[6] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa880000u;
    goto L_26b6b44;
L_26b6b68:;
    c->r[5] = c->r[7] | 0x100u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6b74:;
    c->r[5] = c->r[10] | 0x100u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6b84:;
    c->r[5] = c->r[8] | 0x100u;
L_26b6b88:;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6b90:;
    c->r[5] = c->r[7];
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6ba0:;
    c->r[5] = c->r[8];
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6bac:;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6bb4:;
    c->r[5] = c->r[10];
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6bc4:;
    c->r[5] = 0x1210u;
L_26b6bc8:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0a0000u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6bd4:;
    c->r[5] = 0x1918u;
    goto L_26b6b58;
L_26b6be0:;
    c->r[5] = 0x1918u;
    c->r[6] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0a0000u;
    goto L_26b6b44;
L_26b6bf4:;
    c->r[5] = 0x2120u;
    goto L_26b6b58;
L_26b6bfc:;
    c->r[5] = 0x2120u;
    goto L_26b6bc8;
L_26b6c08:;
    c->r[0] = 0x2020u;
    c->r[6] = 0x2u;
    goto L_26b6c90;
L_26b6c14:;
    c->r[5] = 0x2120u;
    c->r[6] = 0x2u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa530000u;
    goto L_26b6b44;
L_26b6c28:;
    c->r[0] = 0x2020u;
    c->r[6] = 0x3u;
    goto L_26b6c90;
L_26b6c38:;
    c->r[5] = 0x2120u;
    c->r[6] = 0x3u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa530000u;
    goto L_26b6b44;
L_26b6c48:;
    c->r[0] = 0x2020u;
    c->r[6] = 0x4u;
    goto L_26b6c90;
L_26b6c54:;
    c->r[5] = 0x2120u;
    c->r[6] = 0x4u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa530000u;
    goto L_26b6b44;
L_26b6c68:;
    c->r[0] = 0x2020u;
    c->r[6] = 0x6u;
    goto L_26b6c90;
L_26b6c74:;
    c->r[5] = 0x2120u;
    c->r[6] = 0x6u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa530000u;
    goto L_26b6b44;
L_26b6c88:;
    c->r[0] = 0x2020u;
    c->r[6] = 0x7u;
L_26b6c90:;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    c->r[5] = c->r[0] | 0x100u;
    goto L_26b6b44;
L_26b6ca0:;
    c->r[5] = 0x2120u;
    c->r[6] = 0x7u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa530000u;
    goto L_26b6b44;
L_26b6cb4:;
    c->r[5] = 0x2020u;
    c->r[6] = 0x2u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x530000u;
    goto L_26b6b44;
L_26b6cc8:;
    c->r[5] = 0x2020u;
    c->r[6] = 0x3u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x530000u;
    goto L_26b6b44;
L_26b6cdc:;
    c->r[5] = 0x2020u;
    c->r[6] = 0x4u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x530000u;
    goto L_26b6b44;
L_26b6cec:;
    c->r[5] = 0x2020u;
    c->r[6] = 0x6u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x530000u;
    goto L_26b6b44;
L_26b6d00:;
    c->r[5] = c->r[7];
    c->r[6] = 0x7u;
    goto L_26b6b44;
L_26b6d0c:;
    c->r[5] = 0x2020u;
    c->r[6] = 0x7u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xd10000u;
    goto L_26b6b44;
L_26b6d20:;
    c->r[5] = 0x2020u;
    c->r[6] = 0x7u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x530000u;
    goto L_26b6b44;
L_26b6d30:;
    c->r[6] = 0x7u;
    goto L_26b6b44;
L_26b6d3c:;
    c->r[6] = 0x8u;
    goto L_26b6b44;
L_26b6d44:;
    c->r[6] = 0x5u;
    goto L_26b6b44;
L_26b6d50:;
    c->r[5] = 0x408u;
    c->r[6] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xb200000u;
    goto L_26b6b44;
L_26b6d60:;
    c->r[5] = 0x5d20u;
    c->r[6] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xb080000u;
    goto L_26b6b44;
L_26b6d74:;
    c->r[5] = 0x101u;
    goto L_26b6dcc;
L_26b6d7c:;
    c->r[5] = 0x202u;
    goto L_26b6dcc;
L_26b6d84:;
    c->r[5] = 0xa10u;
    goto L_26b6dcc;
L_26b6d8c:;
    c->r[5] = 0x1c20u;
    goto L_26b6dcc;
L_26b6d98:;
    c->r[5] = 0x508u;
    goto L_26b6de0;
L_26b6da0:;
    c->r[5] = 0x508u;
    goto L_26b6db8;
L_26b6dac:;
    c->r[5] = 0xe10u;
    goto L_26b6de0;
L_26b6db4:;
    c->r[5] = 0xe10u;
L_26b6db8:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x2000000u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6dc8:;
    c->r[5] = 0x4a10u;
L_26b6dcc:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa000000u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6ddc:;
    c->r[5] = 0x5d20u;
L_26b6de0:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x490000u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6dec:;
    c->r[5] = 0x101u;
    goto L_26b6e18;
L_26b6df4:;
    c->r[5] = 0x202u;
    goto L_26b6e18;
L_26b6e00:;
    c->r[5] = 0xa10u;
    goto L_26b6e18;
L_26b6e08:;
    c->r[5] = 0x1c20u;
    goto L_26b6e18;
L_26b6e14:;
    c->r[5] = 0x4a10u;
L_26b6e18:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1240000u;
    c->r[6] = 0x1u;
    goto L_26b6b44;
L_26b6e24:;
    c->r[5] = 0x101u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    goto L_26b6b44;
L_26b6e34:;
    c->r[5] = 0x202u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    goto L_26b6b44;
L_26b6e40:;
    c->r[5] = 0x508u;
    goto L_26b6e58;
L_26b6e48:;
    c->r[5] = 0x508u;
    goto L_26b6e68;
L_26b6e54:;
    c->r[5] = 0xe10u;
L_26b6e58:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x3200000u;
    c->r[6] = 0x9u;
    goto L_26b6b44;
L_26b6e64:;
    c->r[5] = 0xe10u;
L_26b6e68:;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1210000u;
    c->r[6] = 0x9u;
    goto L_26b6b44;
L_26b6e74:;
    c->r[5] = 0x1918u;
    goto L_26b6e98;
L_26b6e80:;
    c->r[5] = 0x2120u;
    c->r[6] = 0xau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x6880000u;
    goto L_26b6b44;
L_26b6e94:;
    c->r[5] = 0x910u;
L_26b6e98:;
    c->r[6] = 0xau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa880000u;
    goto L_26b6b44;
L_26b6ea4:;
    c->r[5] = c->r[7] | 0x100u;
    c->r[6] = 0xau;
    goto L_26b6b44;
L_26b6eb0:;
    c->r[5] = 0x408u;
    c->r[6] = 0xau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    goto L_26b6b44;
L_26b6ec4:;
    c->r[5] = 0x408u;
    c->r[6] = 0xau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9040000u;
    goto L_26b6b44;
L_26b6ed4:;
    c->r[5] = 0x408u;
    c->r[6] = 0xau;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x8240000u;
    goto L_26b6b44;
L_26b6ee8:;
    c->r[5] = c->r[9];
    c->r[6] = 0xau;
    goto L_26b6b44;
L_26b6ef4:;
    c->r[5] = c->r[10];
    c->r[6] = 0xau;
    goto L_26b6b44;
L_26b6f04:;
    c->r[5] = c->r[7];
    c->r[6] = 0xau;
    goto L_26b6b44;
L_26b6f10:;
    c->r[5] = c->r[8];
    c->r[6] = 0xau;
    goto L_26b6b44;
L_26b6f20:;
    c->r[5] = 0x408u;
    c->r[6] = 0xbu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x8240000u;
    goto L_26b6b44;
L_26b6f30:;
    c->r[5] = c->r[7];
    c->r[6] = 0xbu;
    goto L_26b6b44;
L_26b6f40:;
    c->r[5] = 0x408u;
    c->r[6] = 0xcu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9040000u;
    goto L_26b6b44;
L_26b6f50:;
    c->r[5] = 0x408u;
    c->r[6] = 0xcu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x8240000u;
    goto L_26b6b44;
L_26b6f64:;
    c->r[5] = c->r[7];
    c->r[6] = 0xcu;
    goto L_26b6b44;
L_26b6f70:;
    c->r[5] = 0x408u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x8240000u;
    goto L_26b6b44;
L_26b6f80:;
    c->r[5] = c->r[10];
    c->r[6] = 0xdu;
    goto L_26b6b44;
L_26b6f8c:;
    c->r[5] = c->r[11];
    c->r[6] = 0xdu;
    goto L_26b6b44;
L_26b6f98:;
    c->r[5] = c->r[9];
    c->r[6] = 0xdu;
    goto L_26b6b44;
L_26b6fa8:;
    c->r[5] = c->r[7];
    c->r[6] = 0xdu;
    goto L_26b6b44;
L_26b6fb4:;
    c->r[5] = 0x408u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9040000u;
    goto L_26b6b44;
L_26b6fc0:;
    c->r[5] = c->r[11];
    c->r[6] = 0xeu;
    goto L_26b6b44;
L_26b6fd0:;
    c->r[5] = c->r[9];
    c->r[6] = 0xeu;
    goto L_26b6b44;
L_26b6fdc:;
    c->r[5] = c->r[7];
    c->r[6] = 0xeu;
    goto L_26b6b44;
L_26b6fec:;
    c->r[5] = c->r[10];
    c->r[6] = 0xeu;
    goto L_26b6b44;
L_26b6ff8:;
    c->r[5] = c->r[7];
    c->r[6] = 0xfu;
    goto L_26b6b44;
L_26b7004:;
    c->r[5] = c->r[11];
    c->r[6] = 0xfu;
    goto L_26b6b44;
L_26b7010:;
    c->r[5] = c->r[8];
    c->r[6] = 0xfu;
    goto L_26b6b44;
L_26b7020:;
    c->r[5] = c->r[10];
    c->r[6] = 0xfu;
    goto L_26b6b44;
L_26b7030:;
    c->r[5] = 0x1010u;
    c->r[6] = 0xfu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    goto L_26b6b44;
L_26b7040:;
    c->r[6] = 0x10u;
    goto L_26b7060;
L_26b704c:;
    c->r[6] = 0x11u;
    goto L_26b7060;
L_26b7054:;
    c->r[6] = 0x12u;
    goto L_26b7060;
L_26b705c:;
    c->r[6] = 0x13u;
L_26b7060:;
    c->r[5] = 0x408u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    goto L_26b6b44;
L_26b7070:;
    c->r[5] = c->r[8];
    c->r[6] = 0x11u;
    goto L_26b6b44;
L_26b707c:;
    c->r[5] = c->r[7];
    c->r[6] = 0x12u;
    goto L_26b6b44;
L_26b7088:;
    c->r[5] = c->r[10];
    c->r[6] = 0x13u;
    goto L_26b6b44;
L_26b7098:;
    c->r[5] = 0x508u;
    c->r[6] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9210000u;
    goto L_26b6b44;
L_26b70ac:;
    c->r[5] = 0x408u;
    c->r[6] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9200000u;
    goto L_26b6b44;
L_26b70bc:;
    c->r[5] = c->r[10];
L_26b70c0:;
    c->r[6] = 0x0u;
    goto L_26b6b44;
L_26b70cc:;
    c->r[5] = 0x6640u;
    c->r[6] = 0x14u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa880000u;
    goto L_26b6b44;
}
void f_26b721c(Cpu *restrict c) {
    FN_ENTER(0x26b721cu);
L_26b721c:;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    c->r[1] = 0x4f58fcu;
    c->r[1] = 0x26b7234u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_26b723c(Cpu *restrict c) {
    FN_ENTER(0x26b723cu);
L_26b723c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[1], 0xau);
    c->r[12] = 0x0u;
    if (COND_HI) { goto L_26b725c; }
    c->r[3] = 0x4f58d4u;
    c->r[3] = 0x26b725cu + c->r[3];
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
L_26b725c:;
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_HI) { goto L_26b7270; }
    c->r[1] = 0x4f58c0u;
    c->r[1] = 0x26b7270u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
L_26b7270:;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_NE) { goto L_26b72b4; }
    c->r[1] = 0x3f800000u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26b72b4:;
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_NE) { goto L_26b72c8; }
    c->r[1] = 0x4f5688u;
    c->r[1] = 0x26b72c8u + c->r[1];
    goto L_26b7350;
L_26b72c8:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_26b72dc; }
    c->r[1] = 0x4f56a4u;
    c->r[1] = 0x26b72dcu + c->r[1];
    goto L_26b7350;
L_26b72dc:;
    (void)f_subs(c, c->r[14], 0x2u);
    if (COND_NE) { goto L_26b72f0; }
    c->r[1] = 0x4f56c0u;
    c->r[1] = 0x26b72f0u + c->r[1];
    goto L_26b7350;
L_26b72f0:;
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_NE) { goto L_26b7304; }
    c->r[1] = 0x4f56dcu;
    c->r[1] = 0x26b7304u + c->r[1];
    goto L_26b7350;
L_26b7304:;
    (void)f_subs(c, c->r[14], 0x3u);
    if (COND_NE) { goto L_26b7318; }
    c->r[1] = 0x4f56f8u;
    c->r[1] = 0x26b7318u + c->r[1];
    goto L_26b7350;
L_26b7318:;
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_NE) { goto L_26b732c; }
    c->r[1] = 0x4f5714u;
    c->r[1] = 0x26b732cu + c->r[1];
    goto L_26b7350;
L_26b732c:;
    (void)f_subs(c, c->r[14], 0x4u);
    if (COND_NE) { goto L_26b7340; }
    c->r[1] = 0x4f5730u;
    c->r[1] = 0x26b7340u + c->r[1];
    goto L_26b7350;
L_26b7340:;
    (void)f_subs(c, c->r[12], 0x4u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x4f574cu;
    c->r[1] = 0x26b7354u + c->r[1];
L_26b7350:;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b738c(Cpu *restrict c) {
    FN_ENTER(0x26b738cu);
L_26b738c:;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    c->r[1] = 0x4f57dcu;
    c->r[1] = 0x26b73a4u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_26b73ac(Cpu *restrict c) {
    FN_ENTER(0x26b73acu);
L_26b73ac:;
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[1], 0xau);
    c->r[3] = 0x0u;
    if (COND_HI) { goto L_26b73c8; }
    c->r[3] = 0x4f57b8u;
    c->r[3] = 0x26b73c8u + c->r[3];
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
L_26b73c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_HI) { goto L_26b7404; }
    c->r[1] = 0x4f579cu;
    c->r[14] = 0x430u;
    c->r[1] = 0x26b73e4u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[1] & shc_lsr(c, c->r[14], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b7404; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_26b7404; }
    c->r[1] = 0x4f56ccu;
    c->r[1] = 0x26b7404u + c->r[1];
    goto L_26b741c;
L_26b7404:;
    (void)f_subs(c, c->r[3], 0x1u);
    c->r[1] = 0x0u;
    if (COND_EQ) { (void)f_subs(c, c->r[12], 0x0u); }
    if (COND_NE) { goto L_26b7430; }
    c->r[1] = 0x4f56e0u;
    c->r[1] = 0x26b7420u + c->r[1];
L_26b741c:;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
L_26b7430:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b7448(Cpu *restrict c) {
    FN_ENTER(0x26b7448u);
L_26b7448:;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[2] + 12u);
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->v.s[2] = LD32(c->r[2] + 20u);
    c->v.s[0] = LD32(c->r[2] + 16u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2] + 24u);
    c->v.s[6] = LD32(c->r[2] + 28u);
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 32u);
    c->v.s[2] = LD32(c->r[2] + 36u);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[2] + 40u);
    c->v.s[6] = LD32(c->r[2] + 44u);
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_26b74d4(Cpu *restrict c) {
    FN_ENTER(0x26b74d4u);
L_26b74d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[3] = c->r[2] - 0x1u;
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[3], 0xeu);
    if (COND_HI) { goto L_26b75b0; }
    c->r[3] = (c->r[3] << 2);
    c->r[4] = 0x26b74f4u + 0xcu;
    c->r[12] = 0x0u;
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[4]; switch (c->pc) { case 0x26b753cu: goto L_26b753c; case 0x26b7548u: goto L_26b7548; case 0x26b7550u: goto L_26b7550; case 0x26b7558u: goto L_26b7558; case 0x26b7560u: goto L_26b7560; case 0x26b7568u: goto L_26b7568; case 0x26b7574u: goto L_26b7574; case 0x26b7580u: goto L_26b7580; case 0x26b758cu: goto L_26b758c; case 0x26b7598u: goto L_26b7598; case 0x26b75a0u: goto L_26b75a0; case 0x26b75b0u: goto L_26b75b0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26b753c:;
    c->r[14] = 0x0u;
    c->r[12] = 0x0u;
    goto L_26b75a0;
L_26b7548:;
    c->r[14] = 0x2u;
    goto L_26b75a0;
L_26b7550:;
    c->r[14] = 0x3u;
    goto L_26b75a0;
L_26b7558:;
    c->r[14] = 0x4u;
    goto L_26b75a0;
L_26b7560:;
    c->r[14] = 0x5u;
    goto L_26b75a0;
L_26b7568:;
    c->r[12] = 0x1u;
    c->r[14] = 0x6u;
    goto L_26b75a0;
L_26b7574:;
    c->r[12] = 0x1u;
    c->r[14] = 0x7u;
    goto L_26b75a0;
L_26b7580:;
    c->r[12] = 0x1u;
    c->r[14] = 0x8u;
    goto L_26b75a0;
L_26b758c:;
    c->r[12] = 0x1u;
    c->r[14] = 0x9u;
    goto L_26b75a0;
L_26b7598:;
    c->r[12] = 0x1u;
    c->r[14] = 0xau;
L_26b75a0:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[14]); }
    if (COND_NE) { { uint32_t ea = c->r[1]; ST8(ea, c->r[12]); } }
L_26b75b0:;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26b75b8(Cpu *restrict c) {
    FN_ENTER(0x26b75b8u);
L_26b75b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[6] = c->r[1];
    c->r[1] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0];
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LS) { goto L_26b75e8; }
L_26b75e0:;
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26b75e8:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x41u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x3cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x14u;
    c->r[0] = 0x5a4f74u;
    { uint32_t ea = 0x26b7618u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f64u;
    { uint32_t ea = 0x26b7624u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f54u;
    { uint32_t ea = 0x26b7630u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f44u;
    { uint32_t ea = 0x26b763cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f34u;
    { uint32_t ea = 0x26b7648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f24u;
    { uint32_t ea = 0x26b7654u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f14u;
    { uint32_t ea = 0x26b7660u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4f04u;
    { uint32_t ea = 0x26b766cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x48c880u;
    c->r[0] = 0x26b7678u + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4b4128u;
    c->r[0] = 0x26b7684u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4edcu;
    { uint32_t ea = 0x26b7690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4eccu;
    { uint32_t ea = 0x26b769cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4ebcu;
    { uint32_t ea = 0x26b76a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4eacu;
    { uint32_t ea = 0x26b76b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4e9cu;
    { uint32_t ea = 0x26b76c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4e8cu;
    { uint32_t ea = 0x26b76ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4e7cu;
    { uint32_t ea = 0x26b76d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4e6cu;
    { uint32_t ea = 0x26b76e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5a4e5cu;
    { uint32_t ea = 0x26b76f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_26b76f0:;
    c->r[10] = c->r[9];
    c->r[11] = c->r[1];
    { uint32_t ea = c->r[10] - 0xcu; uint32_t v = LD32(ea); c->r[10] = ea; c->r[2] = v; }
    c->r[3] = (c->r[2] >> 16) & 0xfffu;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xc000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3fu;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_HI) { goto L_26b7c6c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 2);
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[7] = 0x26b7734u + 0xcu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->pc = c->r[5] + c->r[7]; switch (c->pc) { case 0x26b75e0u: goto L_26b75e0; case 0x26b777cu: goto L_26b777c; case 0x26b7788u: goto L_26b7788; case 0x26b7790u: goto L_26b7790; case 0x26b7798u: goto L_26b7798; case 0x26b77a0u: goto L_26b77a0; case 0x26b77a8u: goto L_26b77a8; case 0x26b77b4u: goto L_26b77b4; case 0x26b77c0u: goto L_26b77c0; case 0x26b77ccu: goto L_26b77cc; case 0x26b77d8u: goto L_26b77d8; case 0x26b77e0u: goto L_26b77e0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_26b777c:;
    c->r[4] = 0x0u;
    c->r[1] = 0x0u;
    goto L_26b77e0;
L_26b7788:;
    c->r[4] = 0x2u;
    goto L_26b77e0;
L_26b7790:;
    c->r[4] = 0x3u;
    goto L_26b77e0;
L_26b7798:;
    c->r[4] = 0x4u;
    goto L_26b77e0;
L_26b77a0:;
    c->r[4] = 0x5u;
    goto L_26b77e0;
L_26b77a8:;
    c->r[1] = 0x1u;
    c->r[4] = 0x6u;
    goto L_26b77e0;
L_26b77b4:;
    c->r[1] = 0x1u;
    c->r[4] = 0x7u;
    goto L_26b77e0;
L_26b77c0:;
    c->r[1] = 0x1u;
    c->r[4] = 0x8u;
    goto L_26b77e0;
L_26b77cc:;
    c->r[1] = 0x1u;
    c->r[4] = 0x9u;
    goto L_26b77e0;
L_26b77d8:;
    c->r[1] = 0x1u;
    c->r[4] = 0xau;
L_26b77e0:;
    c->r[2] = c->r[2] & 0x3fffu;
    c->r[0] = 0x130fu;
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_26b783c; }
    c->r[0] = 0x170fu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_26b7870; }
    c->r[0] = 0x201fu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_26b78c8; }
    c->r[0] = 0x2020u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b794c; }
    c->r[0] = 0x2120u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b7958; }
    c->r[0] = 0x2320u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7994;
L_26b783c:;
    (void)f_subs(c, c->r[2], 0x910u);
    if (COND_GE) { goto L_26b78a0; }
    (void)f_subs(c, c->r[2], 0x710u);
    if (COND_GE) { goto L_26b78ec; }
    c->r[0] = 0x408u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b796c; }
    c->r[0] = 0x508u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7994;
L_26b7870:;
    c->r[0] = 0x150fu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { goto L_26b7904; }
    c->r[0] = 0x1310u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b7980; }
    c->r[0] = 0x1410u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7974;
L_26b78a0:;
    c->r[0] = 0x110fu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { goto L_26b7928; }
    (void)f_subs(c, c->r[2], 0x910u);
    if (COND_EQ) { goto L_26b798c; }
    (void)f_subs(c, c->r[2], 0xe10u);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b79b4;
L_26b78c8:;
    c->r[0] = 0x1710u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b79a0; }
    c->r[0] = 0x1810u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7974;
L_26b78ec:;
    if (COND_EQ) { goto L_26b79ac; }
    (void)f_subs(c, c->r[2], 0x810u);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7994;
L_26b7904:;
    c->r[0] = 0x1510u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b79c0; }
    c->r[0] = 0x1610u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b79dc;
L_26b7928:;
    c->r[0] = 0x1110u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_26b79d4; }
    c->r[0] = 0x1210u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7994;
L_26b794c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b7994;
L_26b7958:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0xau;
    goto L_26b79e4;
L_26b796c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_26b7974:;
    c->r[0] = c->r[6];
    c->r[2] = 0x5u;
    goto L_26b79e4;
L_26b7980:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b79dc;
L_26b798c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_26b7994:;
    c->r[0] = c->r[6];
    c->r[2] = 0x2u;
    goto L_26b79e4;
L_26b79a0:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_26b79dc;
L_26b79ac:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_26b79b4:;
    c->r[0] = c->r[6];
    c->r[2] = 0x6u;
    goto L_26b79e4;
L_26b79c0:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x4u;
    goto L_26b79e4;
L_26b79d4:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
L_26b79dc:;
    c->r[0] = c->r[6];
    c->r[2] = 0x1u;
L_26b79e4:;
    c->r[14] = 0x26b79e8u; f_26b7cc4(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b75e0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = (c->r[4] << 3);
    c->r[3] = udiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[7] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_HI) { goto L_26b7c6c; }
    { uint32_t ea = c->r[9] - 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { { uint32_t ea = c->r[9] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_LS) { { uint32_t ea = c->r[7] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_LS) { (void)f_subs(c, c->r[1], c->r[0]); }
    if (COND_HI) { goto L_26b7c6c; }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_26b7a58; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_26b7c6c; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26b7a7c; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t r = c->r[0] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_26b7ad0; }
    goto L_26b7c6c;
L_26b7a58:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26b7a98; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD8(ea); c->r[7] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[7], c->r[0]); }
    if (COND_EQ) { goto L_26b7ab8; }
    goto L_26b7c6c;
L_26b7a7c:;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[4] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x3fu; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_26b7ae8; }
    goto L_26b75e0;
L_26b7a98:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_26b7c6c; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x40u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3fu; ST8(ea, c->r[7]); }
L_26b7ab8:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfeu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xdbu); }
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t r = c->r[4] & 0x3fu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b7c6c; }
L_26b7ad0:;
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_EQ) { goto L_26b7b1c; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_EQ) { goto L_26b7b6c; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_26b7bac; }
L_26b7ae8:;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x3u; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    goto L_26b7c44;
L_26b7b1c:;
    { uint32_t r = c->r[11] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b7c6c; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], c->r[0]); }
    if (COND_NE) { goto L_26b7c6c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x49u);
    if (COND_NE) { goto L_26b7b50; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4au);
    if (COND_NE) { goto L_26b7c6c; }
L_26b7b50:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x3cu; ST8(ea, c->r[0]); }
    goto L_26b7c40;
L_26b7b6c:;
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[0] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x3du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3eu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x3cu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_26b7bb4; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    goto L_26b7bc0;
L_26b7bac:;
    c->r[1] = c->r[11];
    goto L_26b7c44;
L_26b7bb4:;
    (void)f_subs(c, c->r[3], (c->r[2] << 1));
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_26b7c6c; }
L_26b7bc0:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_26b7be4; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_EQ) { goto L_26b7bf8; }
    goto L_26b7c6c;
L_26b7be4:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x4u);
    if (COND_EQ) { c->r[1] = (c->r[1] << 1); }
    if (COND_EQ) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_NE) { goto L_26b7c6c; }
L_26b7bf8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x31u);
    if (COND_EQ) { goto L_26b7c20; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], 0x49u);
    if (COND_EQ) { goto L_26b7c44; }
    (void)f_subs(c, c->r[2], 0x32u);
    if (COND_NE) { goto L_26b7c6c; }
    c->r[2] = 0x0u;
    goto L_26b7c24;
L_26b7c20:;
    c->r[2] = 0x4u;
L_26b7c24:;
    { uint32_t r = c->r[11] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[11];
    if (COND_NE) { goto L_26b7c44; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_26b7c40:;
    c->r[1] = 0x0u;
L_26b7c44:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x58u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { goto L_26b76f0; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x2u; }
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26b7c6c:;
    c->r[0] = 0x2u;
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26b7cc4(Cpu *restrict c) {
    FN_ENTER(0x26b7cc4u);
L_26b7cc4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = (c->r[3] >> 9) & 0x7u;
    c->r[7] = c->r[0];
    c->r[0] = (c->r[3] >> 6) & 0x7u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[12], 0x4u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[11] = (c->r[3] >> 3) & 0x7u;
    c->r[0] = 0x2u;
    if (COND_CC) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26b802c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[3] & 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b7e78; }
    (void)f_subs(c, c->r[12], 0x4u);
    if (COND_CS) { goto L_26b7dcc; }
L_26b7d14:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = 0x0u;
    c->r[14] = 0x0u;
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = (c->r[7] >> 6) & 0x7u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = (c->r[7] >> 3) & 0x7u;
    if (COND_EQ) { c->r[8] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[3] = (c->r[7] >> 9) & 0x7u;
    if (COND_HI) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[11], c->r[0]);
    c->r[0] = c->r[7] & 0x7u;
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[11], 0x3u);
    if (COND_HI) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[10], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_HI) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[12], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_HI) { c->r[9] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_26b7dbc; }
    c->r[3] = c->r[9] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_26b7dbc; }
    c->r[0] = c->r[0] | c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[4] | c->r[6]; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_26b7dbc; }
    { uint32_t r = c->r[14] | c->r[8]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26b8014; }
L_26b7dbc:;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[1] = c->r[1] + 0x4u;
    if (COND_NE) { goto L_26b7d14; }
    goto L_26b8008;
L_26b7dcc:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x0u;
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = (c->r[7] >> 6) & 0x7u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = (c->r[7] >> 3) & 0x7u;
    c->r[5] = (c->r[7] >> 9) & 0x7u;
    if (COND_EQ) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[3] = 0x0u;
    if (COND_HI) { c->r[8] = 0x1u; }
    (void)f_subs(c, c->r[11], c->r[0]);
    c->r[0] = c->r[7] & 0x7u;
    if (COND_EQ) { c->r[9] = 0x1u; }
    (void)f_subs(c, c->r[11], 0x3u);
    if (COND_HI) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[10], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_HI) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[12], c->r[5]);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_HI) { c->r[4] = 0x1u; }
    { uint32_t r = c->r[4] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { goto L_26b7e68; }
    c->r[0] = c->r[3] | c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[6] | c->r[9]; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_26b7e68; }
    { uint32_t r = c->r[8] | c->r[14]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26b8014; }
L_26b7e68:;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[1] = c->r[1] + 0x4u;
    if (COND_NE) { goto L_26b7dcc; }
    goto L_26b8008;
L_26b7e78:;
    (void)f_subs(c, c->r[12], 0x4u);
    if (COND_CS) { goto L_26b7f58; }
L_26b7e80:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x0u;
    c->r[8] = 0x0u;
    c->r[9] = c->r[12];
    c->r[0] = (c->r[7] >> 6) & 0x7u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[7] >> 3) & 0x7u;
    if (COND_HI) { c->r[3] = 0x1u; }
    c->r[5] = (c->r[7] >> 9) & 0x7u;
    (void)f_subs(c, c->r[11], c->r[0]);
    c->r[0] = c->r[7] & 0x7u;
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[11], 0x3u);
    if (COND_HI) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[10], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_HI) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[12], c->r[5]);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[8] = 0x1u; }
    (void)f_subs(c, c->r[12], 0x3u);
    c->r[12] = c->r[11];
    c->r[11] = c->r[10];
    c->r[10] = 0x0u;
    if (COND_HI) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[10], (c->r[7] >> 30));
    c->r[10] = c->r[11];
    c->r[11] = c->r[12];
    c->r[12] = c->r[9];
    if (COND_EQ) { c->r[5] = c->r[5] | c->r[8]; }
    if (COND_EQ) { (void)f_subs(c, c->r[5], 0x1u); }
    if (COND_NE) { goto L_26b7f48; }
    c->r[0] = c->r[0] | c->r[14];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[4] | c->r[6]; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_26b7f48; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26b8014; }
L_26b7f48:;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[1] = c->r[1] + 0x4u;
    if (COND_NE) { goto L_26b7e80; }
    goto L_26b8008;
L_26b7f58:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = 0x0u;
    c->r[14] = 0x0u;
    c->r[9] = 0x0u;
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = (c->r[7] >> 6) & 0x7u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = (c->r[7] >> 3) & 0x7u;
    if (COND_EQ) { c->r[8] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[3] = (c->r[7] >> 9) & 0x7u;
    if (COND_HI) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[11], c->r[0]);
    c->r[0] = c->r[7] & 0x7u;
    if (COND_EQ) { c->r[9] = 0x1u; }
    (void)f_subs(c, c->r[11], 0x3u);
    if (COND_HI) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[10], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_HI) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[12], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_HI) { c->r[6] = 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = c->r[6] | c->r[3]; }
    if (COND_EQ) { (void)f_subs(c, c->r[3], 0x1u); }
    if (COND_NE) { goto L_26b7ffc; }
    c->r[0] = c->r[0] | c->r[5];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[4] | c->r[9]; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_26b7ffc; }
    { uint32_t r = c->r[14] | c->r[8]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_26b8014; }
L_26b7ffc:;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[1] = c->r[1] + 0x4u;
    if (COND_NE) { goto L_26b7f58; }
L_26b8008:;
    c->r[0] = 0x2u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26b8014:;
    c->r[0] = (c->r[7] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x42u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_26b802c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26b8034(Cpu *restrict c) {
    FN_ENTER(0x26b8034u);
L_26b8034:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2];
    c->r[2] = c->r[1];
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_28503a8(c);
}
void f_26b8048(Cpu *restrict c) {
    FN_ENTER(0x26b8048u);
L_26b8048:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8064; }
    c->r[14] = 0x26b8064u; f_2850774(c);
L_26b8064:;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b806c(Cpu *restrict c) {
    FN_ENTER(0x26b806cu);
L_26b806c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[1] = 0x0u;
    c->r[2] = 0x50u;
    c->r[6] = c->r[0];
    c->r[7] = 0x0u;
    c->r[14] = 0x26b808cu; f_2850138(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x26b80a4u; f_2850060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[7] = 0x6u; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26b80b8(Cpu *restrict c) {
    FN_ENTER(0x26b80b8u);
L_26b80b8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[8] = 0xcccdu;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xcccc0000u;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = (c->r[3] >> 3);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] - (c->r[2] << 1);
    c->r[5] = c->r[4] + (c->r[0] << 3);
    if (COND_EQ) { goto L_26b8130; }
    c->r[7] = c->r[4] + (c->r[0] << 3);
    (void)f_subs(c, c->r[1], 0xau);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    if (COND_NE) { goto L_26b81ac; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8120; }
    c->r[1] = ~0x0u;
    c->r[14] = 0x26b8110u; f_285081c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b8118u; f_2850774(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_26b8120:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26b8310; }
    goto L_26b8318;
L_26b8130:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[6]); }
    c->r[14] = 0x26b8164u; f_284c934(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[13];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf00u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x26b819cu; f_284c940(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8264; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    goto L_26b8374;
L_26b81ac:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8280; }
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x26b81c0u; f_285081c(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_26b8270; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[6]); }
    c->r[14] = 0x26b8200u; f_284c934(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf00u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[10] + c->r[5];
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 3);
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] - (c->r[1] << 1);
    c->r[1] = c->r[13];
    c->r[7] = c->r[4] + (c->r[0] << 3);
    c->r[0] = c->r[9];
    c->r[2] = c->r[7];
    c->r[14] = 0x26b8250u; f_284c940(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8364; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    goto L_26b8374;
L_26b8264:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    goto L_26b836c;
L_26b8270:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b8278u; f_2850774(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
L_26b8280:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_26b8308; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 3);
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] - (c->r[1] << 1);
    c->r[7] = c->r[4] + (c->r[0] << 3);
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b82d4; }
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x26b82c0u; f_285081c(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_26b8120; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b82d0u; f_2850774(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[9]); }
L_26b82d4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b82dcu; f_285039c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
L_26b8308:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26b8318; }
L_26b8310:;
    c->r[6] = c->r[5];
    goto L_26b8374;
L_26b8318:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint64_t r = (uint64_t)c->r[1] * c->r[8]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[3] >> 3);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[1] = c->r[1] - (c->r[2] << 1);
    c->r[6] = c->r[4] + (c->r[1] << 3);
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_26b8350; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26b8350:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    goto L_26b8374;
L_26b8364:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[7];
L_26b836c:;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_26b8374:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26b8380(Cpu *restrict c) {
    FN_ENTER(0x26b8380u);
L_26b8380:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8408; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0xcccdu;
    c->r[6] = 0x0u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xcccc0000u;
L_26b83a4:;
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 3);
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[7] = c->r[0] - (c->r[1] << 1);
    c->r[5] = c->r[4] + (c->r[7] << 3);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b83d8; }
    c->r[1] = ~0x0u;
    c->r[14] = 0x26b83ccu; f_285081c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b83d4u; f_2850774(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
L_26b83d8:;
    { uint32_t ea = c->r[4] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b83e0u; f_285039c(c);
    { uint32_t ea = c->r[4] + (c->r[7] << 3); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_26b83a4; }
L_26b8408:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_28500b4(c);
}
void f_26b8414(Cpu *restrict c) {
    FN_ENTER(0x26b8414u);
L_26b8414:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[1];
    c->r[1] = 0x0u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xc4u;
    { uint32_t r = c->r[5] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[3] = c->r[4];
    c->r[1] = c->r[1] + 0x8u;
    c->r[14] = 0x26b8450u; f_2850828(c);
    c->v.s[0] = c->r[7];
    c->v.s[2] = c->r[8];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    if (COND_NE) { goto L_26b8504; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26b84a0; }
    c->r[2] = 0xc4u;
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] * c->r[2] + c->r[6]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0x84u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x88u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x90u; ST32(ea, c->r[1]); }
    goto L_26b84bc;
L_26b84a0:;
    c->r[0] = 0xc4u;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 140u, c->v.s[2]);
    ST32(c->r[0] + 144u, c->v.s[0]);
L_26b84bc:;
    c->r[0] = 0xc4u;
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t r = c->r[5] * c->r[0] + c->r[6]; c->r[0] = r; }
    if (COND_EQ) { goto L_26b84dc; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[12] = c->r[0] + 0x94u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    goto L_26b84ec;
L_26b84dc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[8]); }
L_26b84ec:;
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[7]); }
    c->r[0] = 0xc4u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[5] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[6] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
L_26b8504:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26b850c(Cpu *restrict c) {
    FN_ENTER(0x26b850cu);
L_26b850c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[1];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x620u;
    c->r[14] = 0x26b8530u; f_2850828(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8540; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26b8540:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8570; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x664u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x668u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x66cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x670u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26b8570:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x664u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x668u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x66cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x670u; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b858c(Cpu *restrict c) {
    FN_ENTER(0x26b858cu);
L_26b858c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    { uint32_t ea = c->r[0] + 0x724u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26b8690; }
    c->r[12] = c->r[1] + 0x168u;
    c->r[11] = 0x0u;
    c->r[2] = 0xc4u;
    c->r[8] = 0x1u;
    c->r[5] = 0x0u;
    c->r[14] = 0x0u;
    goto L_26b8648;
L_26b85b8:;
    { uint32_t ea = c->r[0] + 0x728u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[14], c->r[4]);
    if (COND_CS) { goto L_26b867c; }
    { uint32_t ea = c->r[7] + 0x94u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x9cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[1] + (c->r[14] << 4);
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x68cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x690u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x694u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x698u; ST32(ea, c->r[7]); }
    c->r[6] = sh_lsl(c->r[8], c->r[14]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_26b8608; }
    { uint32_t ea = c->r[1] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x1u;
    c->r[4] = c->r[4] | c->r[6];
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[4]); }
L_26b8608:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_26b863c; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
L_26b8614:;
    { uint32_t ea = c->r[4] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[3] = c->r[3] | c->r[6];
    { uint32_t ea = c->r[4] - 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | c->r[6];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    c->r[4] = c->r[4] + 0x188u;
    if (COND_NE) { goto L_26b8614; }
L_26b863c:;
    { uint32_t ea = c->r[0] + 0x724u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[14] + 0x1u;
    goto L_26b867c;
L_26b8648:;
    { uint32_t r = c->r[5] * c->r[2] + c->r[1]; c->r[7] = r; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7] + 0xa4u; ST32(ea, c->r[11]); }
    if (COND_EQ) { goto L_26b867c; }
    { uint32_t r = c->r[5] * c->r[2]; c->r[4] = r; }
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26b867c; }
    { uint32_t ea = c->r[7] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x5u);
    if (COND_EQ) { { uint32_t ea = c->r[7] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[4], 0x2u); }
    if (COND_EQ) { goto L_26b85b8; }
L_26b867c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_CC) { goto L_26b8648; }
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26b8690:;
    c->r[14] = 0x0u;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26b869c(Cpu *restrict c) {
    FN_ENTER(0x26b869cu);
L_26b869c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[1] + 0x688u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26b86f4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_26b870c; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->v.s[2] = 0x3f800000u;
    c->r[0] = 0xc4u;
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[3] = c->r[0] + 0x54u;
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_26b8728; }
    c->r[0] = 0x3f800000u;
    c->r[12] = 0x2u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    goto L_26b8740;
L_26b86f4:;
    c->r[3] = 0xc4u;
    c->r[12] = 0x1u;
    c->r[14] = 0x3u;
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[3] = r; }
    ST32(c->r[3] + 84u, c->v.s[0]);
    goto L_26b8740;
L_26b870c:;
    c->r[0] = 0xc4u;
    c->r[12] = 0x1u;
    c->r[14] = 0x0u;
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    ST32(c->r[0] + 84u, c->v.s[0]);
    c->r[0] = 0x4u;
    goto L_26b8740;
L_26b8728:;
    ST32(c->r[3], c->v.s[0]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->r[14] = 0x0u;
    c->r[12] = 0x0u;
    ST32(c->r[0] + 88u, c->v.s[0]);
    c->r[0] = 0x1u;
L_26b8740:;
    c->r[3] = 0xc4u;
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5cu; ST32(ea, c->r[14]); }
    c->r[1] = c->r[1] + 0x60u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26b875c(Cpu *restrict c) {
    FN_ENTER(0x26b875cu);
L_26b875c:;
    c->r[0] = c->r[2] & 0x1u;
    { uint32_t ea = c->r[1] + 0x70cu; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 1) & 0x1u;
    { uint32_t ea = c->r[1] + 0x70du; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 2) & 0x1u;
    { uint32_t ea = c->r[1] + 0x70eu; ST8(ea, c->r[0]); }
    return;
}
void f_26b8778(Cpu *restrict c) {
    FN_ENTER(0x26b8778u);
L_26b8778:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x38u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[14];
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[12] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    if (COND_LT) { c->r[7] = c->r[14]; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5];
    if (COND_LT) { c->r[4] = c->r[14]; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[11] = v; }
    (void)f_subs(c, c->r[11], c->r[6]);
    c->r[6] = c->r[2];
    if (COND_GT) { c->r[6] = c->r[14]; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = c->r[2];
    c->r[2] = c->r[9];
    if (COND_GT) { c->r[0] = c->r[14]; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[10] = r; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[14];
    if (COND_NE) { c->r[7] = c->r[12]; }
    if (COND_NE) { c->r[0] = c->r[4]; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    if (COND_EQ) { c->r[5] = c->r[12]; }
    c->r[10] = c->r[11];
    c->r[11] = c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7] - c->r[0];
    c->v.s[4] = c->r[0];
    c->r[0] = c->r[4];
    if (COND_NE) { c->r[0] = c->r[14]; }
    c->r[14] = c->r[8];
    (void)f_subs(c, c->r[11], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    c->r[4] = c->r[14];
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[3] + 8u);
    c->v.s[0] = LD32(c->r[3] + 4u);
    c->v.s[10] = LD32(c->r[3] + 12u);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7] - c->r[0];
    c->r[7] = c->r[5];
    c->v.s[6] = c->r[0];
    c->v.f[10] = c->v.f[10] - c->v.f[0];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[12] = (float)c->v.s[4];
    c->v.f[4] = c->v.f[10] / c->v.f[6];
    c->v.f[6] = c->v.f[8] / c->v.f[12];
    if (COND_EQ) { goto L_26b8980; }
    c->r[2] = c->r[5] - c->r[10];
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    c->r[11] = c->r[1] - c->r[6];
    c->r[8] = c->r[9] - c->r[10];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    c->r[14] = c->r[4] - c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26b88fc; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[9] = c->r[2];
    c->r[2] = c->r[14];
    c->r[14] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    goto L_26b8934;
L_26b88fc:;
    c->r[0] = c->r[14] + c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[10] - c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[12] = c->r[2] + c->r[6];
    c->r[2] = c->r[8];
    c->r[7] = c->r[11] + c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[2] + c->r[6];
    c->r[8] = c->r[9] + c->r[0];
    c->r[0] = c->r[6] - c->r[10];
    c->r[9] = c->r[11];
    c->r[5] = c->r[0] + c->r[1];
L_26b8934:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t r = c->r[11] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[12] = c->r[5] - c->r[2]; }
    if (COND_NE) { c->r[4] = c->r[5] - c->r[0]; }
    { uint32_t r = c->r[11] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26b8968; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26b8980;
L_26b8968:;
    c->r[7] = c->r[8] - c->r[14];
    c->r[2] = c->r[8] - c->r[9];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
L_26b8980:;
    c->r[0] = c->r[12] - c->r[6];
    c->r[6] = c->r[4] - c->r[6];
    c->v.s[14] = c->v.s[2];
    c->v.s[8] = c->r[6];
    c->v.s[10] = c->r[0];
    c->r[0] = c->r[7] - c->r[10];
    c->r[7] = c->r[2] - c->r[10];
    c->v.s[12] = c->r[7];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[8] = (float)(int32_t)c->v.s[12];
    c->v.s[12] = c->r[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.s[10] = c->v.s[0];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[8]);
    ST32(c->r[3], c->v.s[14]);
    c->v.f[6] = (float)(int32_t)c->v.s[12];
    ST32(c->r[3] + 8u, c->v.s[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[6]);
    ST32(c->r[3] + 4u, c->v.s[10]);
    ST32(c->r[3] + 12u, c->v.s[0]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_26b8af0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8a28; }
    c->r[11] = c->r[11] ^ 0x4u;
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_EQ) { goto L_26b8a34; }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_26b8a28; }
    c->r[11] = 0x1u;
    goto L_26b8a38;
L_26b8a28:;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { goto L_26b8a38; }
    goto L_26b8af0;
L_26b8a34:;
    c->r[11] = 0x2u;
L_26b8a38:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[11] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[8] = c->r[5] - c->r[3];
    c->r[4] = c->r[1] - c->r[6];
    c->r[10] = c->r[9] - c->r[3];
    c->r[5] = c->r[0] - c->r[6];
    if (COND_NE) { goto L_26b8a7c; }
    c->r[6] = c->r[8];
    c->r[8] = c->r[4];
    c->r[4] = c->r[10];
    c->r[10] = c->r[5];
    c->r[2] = c->r[12];
    goto L_26b8abc;
L_26b8a7c:;
    c->r[0] = c->r[10] + c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + c->r[5];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[6];
    c->r[2] = c->r[0] + c->r[14];
    c->r[0] = c->r[6] - c->r[3];
    c->r[6] = c->r[4];
    c->r[4] = c->r[5];
    c->r[14] = c->r[0] + c->r[12];
L_26b8abc:;
    { uint32_t r = c->r[11] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[14] - c->r[8]; }
    if (COND_NE) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = c->r[14] - c->r[10]; }
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); } }
    { uint32_t r = c->r[11] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b8af0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] - c->r[6];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_26b8af0:;
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26b8af8(Cpu *restrict c) {
    FN_ENTER(0x26b8af8u);
L_26b8af8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_26b8b6c; }
    { uint32_t ea = c->r[0] + 0x724u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[12], c->r[2]);
    if (COND_CC) { goto L_26b8b68; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { vfp_cmp_f(c, c->v.f[1], 0.0f); }
    if (COND_PL) { vfp_mrs_flags(c); }
    if (COND_MI) { goto L_26b8b6c; }
    c->v.f[2] = c->v.f[0] + c->v.f[1];
    c->v.s[4] = 0x3f800000u;
    c->r[0] = 0xbu;
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_GT) { return; }
    c->r[0] = 0xc4u;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[12]); }
    ST32(c->r[0] + 180u, c->v.s[0]);
    ST32(c->r[0] + 184u, c->v.s[1]);
    ST32(c->r[0] + 188u, c->v.s[0]);
    ST32(c->r[0] + 192u, c->v.s[1]);
    c->r[0] = 0x0u;
L_26b8b68:;
    return;
L_26b8b6c:;
    c->r[0] = 0xbu;
    return;
}
void f_26b8b74(Cpu *restrict c) {
    FN_ENTER(0x26b8b74u);
L_26b8b74:;
    c->r[12] = c->r[0];
    c->r[0] = 0xbu;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_26b8ba4; }
    { uint32_t ea = c->r[12] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { return; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x714u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x718u; ST8(ea, c->r[3]); }
L_26b8ba4:;
    return;
}
void f_26b8ba8(Cpu *restrict c) {
    FN_ENTER(0x26b8ba8u);
L_26b8ba8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = 0x0u;
    c->r[5] = c->r[3];
    c->r[9] = c->r[2];
    c->r[8] = c->r[1];
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[4]); }
    c->r[14] = 0x26b8bfcu; f_284c934(c);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    c->r[6] = 0xbu;
    if (COND_NE) { { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_26b8cac; }
    { uint32_t ea = c->r[7] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b8c8c; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[9]); }
    if (COND_NE) { goto L_26b8cac; }
    c->r[1] = 0x100u;
    c->r[4] = (c->r[0] << 2);
    c->r[0] = 0xf00u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[7] + 0xed8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b8c64u; f_284c940(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26b8cac; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26b8c94; }
    c->r[6] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    goto L_26b8ca4;
L_26b8c8c:;
    c->r[6] = 0x2u;
    goto L_26b8cac;
L_26b8c94:;
    c->r[1] = 0x5a38ecu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x26b8ca4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
L_26b8ca4:;
    c->r[3] = c->r[4];
    c->r[14] = 0x26b8cacu; f_28503a8(c);
L_26b8cac:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26b8cbc(Cpu *restrict c) {
    FN_ENTER(0x26b8cbcu);
L_26b8cbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[0];
    c->r[0] = 0xbu;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LE) { goto L_26b8d14; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_LE) { goto L_26b8d14; }
    c->r[2] = c->r[14] | c->r[2];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_26b8d14; }
    { uint32_t ea = c->r[12] + 0x72cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[12] + 0x730u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { c->r[0] = 0x2u; }
L_26b8d14:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26b8d18(Cpu *restrict c) {
    FN_ENTER(0x26b8d18u);
L_26b8d18:;
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->r[2] = c->r[0];
    c->r[0] = 0xbu;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_26b8d98; }
    c->v.s[4] = LD32(c->r[1] + 4u);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_26b8d98; }
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { c->v.s[2] = LD32(c->r[1] + 12u); }
    if (COND_GE) { vfp_cmp_f(c, c->v.f[2], c->v.f[4]); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_LE) { goto L_26b8d98; }
    c->r[0] = 0x72cu;
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = 0x2u;
    c->v.f[4] = (float)c->v.s[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { return; }
    c->r[0] = c->r[2] + 0x730u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.f[0] = (float)c->v.s[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0x2u; }
L_26b8d98:;
    return;
}
void f_26b8d9c(Cpu *restrict c) {
    FN_ENTER(0x26b8d9cu);
L_26b8d9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 8u);
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[2] = c->r[4] - c->r[0];
    c->r[0] = 0x734u;
    c->r[14] = c->r[5] - c->r[14];
    c->r[5] = c->r[12] + c->r[0];
    c->r[4] = c->r[14];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->r[0] = 0x2u;
    c->v.s[8] = LD32(c->r[5]);
    if (COND_EQ) { c->r[4] = c->r[2]; }
    c->v.s[4] = c->r[4];
    c->v.f[2] = (float)c->v.s[4];
    c->v.f[4] = c->v.f[0] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_26b8e54; }
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 12u);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = c->r[14]; }
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.s[6] = c->r[2];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[8] = c->v.f[4] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_26b8e54; }
    c->r[1] = 0x738u;
    c->r[1] = c->r[12] + c->r[1];
    c->v.s[8] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[0] = 0x2u; }
L_26b8e54:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b8e58(Cpu *restrict c) {
    FN_ENTER(0x26b8e58u);
L_26b8e58:;
    c->v.f[6] = c->v.f[0] + c->v.f[1];
    c->v.s[4] = 0x3f800000u;
    c->r[0] = 0xbu;
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { return; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { vfp_cmp_f(c, c->v.f[1], 0.0f); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_LT) { goto L_26b8eac; }
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { vfp_cmp_f(c, c->v.f[3], 0.0f); }
    if (COND_GE) { vfp_mrs_flags(c); }
    if (COND_LT) { goto L_26b8eac; }
    c->v.f[0] = c->v.f[2] + c->v.f[3];
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0xbu; }
L_26b8eac:;
    return;
}
void f_26b8eb0(Cpu *restrict c) {
    FN_ENTER(0x26b8eb0u);
L_26b8eb0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[2] + 0x70eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26b8ee8; }
    c->r[7] = c->r[2] + 0xa4u;
    c->r[12] = 0x0u;
L_26b8ec8:;
    { uint32_t ea = c->r[7] - 0xa4u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; } }
    c->r[7] = c->r[7] + 0xc4u;
    if (COND_NE) { c->r[12] = c->r[5] | c->r[12]; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_26b8ec8; }
    goto L_26b8eec;
L_26b8ee8:;
    c->r[12] = 0x0u;
L_26b8eec:;
    { uint32_t ea = c->r[0] + 0x728u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26b9000; }
    c->r[3] = 0x0u;
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26b8f88; }
    c->r[6] = 0x0u;
L_26b8f0c:;
    { uint32_t r = c->r[12] & shc_lsl(c, c->r[8], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b8f74; }
    c->r[4] = c->r[2] + c->r[3];
    c->r[14] = 0xbu;
    { uint32_t ea = c->r[4] + 0x68cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x694u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_LE) { goto L_26b9004; }
    { uint32_t ea = c->r[4] + 0x690u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[5] | c->r[10];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x698u; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[4], c->r[5]); }
    if (COND_LE) { goto L_26b9004; }
    { uint32_t ea = c->r[0] + 0x72cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x2u;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_LS) { { uint32_t ea = c->r[0] + 0x730u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_LS) { (void)f_subs(c, c->r[4], c->r[7]); }
    if (COND_HI) { goto L_26b9004; }
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[3]; ST32(ea, c->r[5]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x728u; uint32_t v = LD32(ea); c->r[4] = v; }
L_26b8f74:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[3] = c->r[3] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CC) { goto L_26b8f0c; }
    goto L_26b9000;
L_26b8f88:;
    c->r[6] = 0x0u;
L_26b8f8c:;
    { uint32_t r = c->r[12] & shc_lsl(c, c->r[8], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26b8ff0; }
    c->r[4] = c->r[2] + c->r[3];
    c->r[14] = 0xbu;
    { uint32_t ea = c->r[4] + 0x68cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x694u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[10]);
    if (COND_LE) { goto L_26b9004; }
    { uint32_t ea = c->r[4] + 0x690u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[5] | c->r[10];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x698u; uint32_t v = LD32(ea); c->r[4] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[4], c->r[5]); }
    if (COND_LE) { goto L_26b9004; }
    { uint32_t ea = c->r[0] + 0x72cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x2u;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_LS) { { uint32_t ea = c->r[0] + 0x730u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_LS) { (void)f_subs(c, c->r[4], c->r[7]); }
    if (COND_HI) { goto L_26b9004; }
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[3]; ST32(ea, c->r[10]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x728u; uint32_t v = LD32(ea); c->r[4] = v; }
L_26b8ff0:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[3] = c->r[3] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CC) { goto L_26b8f8c; }
L_26b9000:;
    c->r[14] = c->r[12];
L_26b9004:;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26b900c(Cpu *restrict c) {
    FN_ENTER(0x26b900cu);
L_26b900c:;
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[1] + 132u);
    c->v.s[4] = LD32(c->r[1] + 140u);
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[3] = c->r[3] - c->r[0];
    c->r[2] = c->r[3];
    if (COND_EQ) { goto L_26b9038; }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[0];
L_26b9038:;
    c->v.s[2] = c->r[2];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[1] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_CS) { goto L_26b9050; }
L_26b904c:;
    return;
L_26b9050:;
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->r[0] = 0x1u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_26b904c; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_26b904c; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_26b909c; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9094; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    c->r[0] = 0x1u;
    if (COND_NE) { return; }
L_26b9094:;
    c->r[0] = 0x0u;
    return;
L_26b909c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_26b90c4; }
    c->v.s[4] = 0x3e800000u;
    c->r[0] = 0x3u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[0] = 0x2u; }
    return;
L_26b90c4:;
    c->v.s[2] = 0x44340000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_26b90dc; }
    c->r[0] = 0x1u;
    return;
L_26b90dc:;
    c->v.s[2] = c->r[3];
    c->v.s[4] = 0x3f000000u;
    c->r[0] = 0x2u;
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[0] = 0x1u; }
    return;
}
void f_26b9104(Cpu *restrict c) {
    FN_ENTER(0x26b9104u);
L_26b9104:;
    c->v.s[2] = LD32(c->r[1] + 136u);
    c->v.s[4] = LD32(c->r[1] + 144u);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26b9120; }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26b9128;
L_26b9120:;
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
L_26b9128:;
    c->r[2] = c->r[2] - c->r[0];
    c->v.s[0] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[1] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_CS) { goto L_26b9144; }
L_26b9140:;
    return;
L_26b9144:;
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    c->r[0] = 0x1u;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_26b9140; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_26b9140; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_26b9190; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9188; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    c->r[0] = 0x1u;
    if (COND_NE) { return; }
L_26b9188:;
    c->r[0] = 0x0u;
    return;
L_26b9190:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_26b91b8; }
    c->v.s[4] = 0x3e800000u;
    c->r[0] = 0x3u;
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[0] = 0x2u; }
    return;
L_26b91b8:;
    c->v.s[0] = LD32(c->r[1] + 132u);
    c->v.s[2] = LD32(c->r[1] + 140u);
    c->v.s[4] = 0x44340000u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_26b91dc; }
    c->r[0] = 0x1u;
    return;
L_26b91dc:;
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[4] = 0x3f000000u;
    c->r[0] = c->r[1] - c->r[0];
    c->v.s[2] = c->r[0];
    c->r[0] = 0x2u;
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[0] = 0x1u; }
    return;
}
void f_26b9210(Cpu *restrict c) {
    FN_ENTER(0x26b9210u);
L_26b9210:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[5] = 0x0u;
    c->r[6] = c->r[3];
    c->r[4] = c->r[2];
    c->r[8] = c->r[1];
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST16(ea, c->r[5]); }
    c->r[14] = 0x26b9254u; f_284c934(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf00u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x26b928cu; f_284c940(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b92ac; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = c->r[4];
    c->r[14] = 0x26b92a8u; f_28503a8(c);
    c->r[0] = 0x0u;
L_26b92ac:;
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26b92b4(Cpu *restrict c) {
    FN_ENTER(0x26b92b4u);
L_26b92b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->v.s[16] = LD32(c->r[5]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x26b92d0u; f_2850834(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 4u);
    c->r[14] = 0x26b92dcu; f_2850834(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[14] = 0x26b92e8u; f_2850834(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->r[14] = 0x26b92f4u; f_2850834(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 20u);
    c->r[14] = 0x26b9300u; f_2850834(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[16]);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 24u);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[18] : c->v.s[16];
    vfp_cmp_f(c, c->v.f[20], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[18] = COND_GT ? c->v.s[20] : c->v.s[2];
    c->r[14] = 0x26b9324u; f_2850834(c);
    vfp_cmp_f(c, c->v.f[22], c->v.f[18]);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 32u);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[22] : c->v.s[18];
    vfp_cmp_f(c, c->v.f[24], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[20] = COND_GT ? c->v.s[24] : c->v.s[2];
    c->r[14] = 0x26b9348u; f_2850834(c);
    vfp_cmp_f(c, c->v.f[26], c->v.f[20]);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = LD32(c->r[5] + 36u);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[26] : c->v.s[20];
    vfp_cmp_f(c, c->v.f[16], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GT ? c->v.s[16] : c->v.s[2];
    c->r[14] = 0x26b936cu; f_2850834(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[16]);
    c->v.s[2] = LD32(c->r[5] + 40u);
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[18] : c->v.s[16];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GT ? c->v.s[0] : c->v.s[4];
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x26b9390u; f_2850834(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[2] = 0x44800000u;
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xfff80000u;
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[0] : c->v.s[16];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_26b93d8; }
    c->r[0] = 0x0u;
L_26b93bc:;
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->r[0] = c->r[0] + 0x1u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_26b93d8; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_LT) { goto L_26b93bc; }
L_26b93d8:;
    c->r[1] = c->r[0] + 0x8u;
    c->r[3] = 0x1u;
    c->v.s[0] = 0x3f000000u;
    c->v.s[4] = LD32(c->r[5]);
    c->r[12] = 0xffffu;
    c->r[1] = sh_lsl(c->r[3], c->r[1]);
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x70000u;
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[2];
    c->v.s[6] = c->v.s[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[6]);
    c->r[3] = c->v.s[4];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b942c; }
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[1] = c->v.s[4];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b942c:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->v.s[6] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[6]);
    c->r[3] = c->v.s[4];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b9464; }
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[1] = c->v.s[4];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b9464:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->v.s[6] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[4] = LD32(c->r[5] + 8u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[6]);
    c->r[3] = c->v.s[4];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b949c; }
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[1] = c->v.s[4];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b949c:;
    c->v.s[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    c->v.s[4] = 0x487fc000u;
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 12u);
    c->v.s[10] = c->v.s[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[8] = c->v.f[10] + c->v.f[0];
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b94e0; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b94e0:;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 16u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b9518; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b9518:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 20u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b9550; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b9550:;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 24u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b9588; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b9588:;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[6];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 28u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[8] = c->v.f[10] + c->v.f[0];
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b95c4; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b95c4:;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 32u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b95fc; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b95fc:;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 36u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[3] = c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b9634; }
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[8]);
    c->r[1] = c->v.s[8];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b9634:;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    c->v.s[10] = c->v.s[0];
    c->r[1] = c->r[2];
    c->v.s[8] = LD32(c->r[5] + 40u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[3] = c->v.s[2];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b966c; }
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[1] = c->v.s[2];
    if (COND_GT) { c->r[1] = c->r[12]; }
L_26b966c:;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->v.s[2] = LD32(c->r[5] + 44u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[3] = c->v.s[0];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { goto L_26b96a0; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    (void)f_subs(c, c->r[3], c->r[12]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[2] = c->v.s[0];
    if (COND_GT) { c->r[2] = c->r[12]; }
L_26b96a0:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b96bc(Cpu *restrict c) {
    FN_ENTER(0x26b96bcu);
L_26b96bc:;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    return;
}
void f_26b96d0(Cpu *restrict c) {
    FN_ENTER(0x26b96d0u);
L_26b96d0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[1];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[2] = c->r[3];
    c->r[3] = c->r[12];
    c->r[14] = 0x26b96fcu; f_2850840(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26b9704(Cpu *restrict c) {
    FN_ENTER(0x26b9704u);
L_26b9704:;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x2u;
    c->r[1] = (c->r[1] >> 2);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10100000u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[12] + 0xcu;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[2]); }
    return;
}
void f_26b972c(Cpu *restrict c) {
    FN_ENTER(0x26b972cu);
L_26b972c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x2u;
    c->r[1] = (c->r[1] >> 2);
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x10100000u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[14]); }
    c->r[14] = c->r[12] + 0x8u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[14] = 0x26b9764u; f_285084c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26b976c(Cpu *restrict c) {
    FN_ENTER(0x26b976cu);
L_26b976c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0xf38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xed0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x26b9790u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b97e8; }
    c->r[0] = c->r[5] + 0xe70u;
    c->r[14] = 0x26b97a0u; f_26b80b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0xed4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26b97ec; }
    { uint32_t ea = c->r[5] + 0xeccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xed0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x26b97b8u; f_26b8034(c);
    { uint32_t ea = c->r[5] + 0xf38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70fu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x26b97ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x71cu;
    c->r[14] = 0x26b97e4u; f_28501a4(c);
    c->r[0] = 0x0u;
L_26b97e8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26b97ec:;
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b97f4(Cpu *restrict c) {
    FN_ENTER(0x26b97f4u);
L_26b97f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x70fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9840; }
    { uint32_t ea = c->r[5] + 0xf34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[14] = 0x26b9818u; f_285081c(c);
    { uint32_t ea = c->r[5] + 0xf34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9820u; f_2850774(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0xf34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xf38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_26b9840:;
    c->r[0] = 0x50000u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b9848(Cpu *restrict c) {
    FN_ENTER(0x26b9848u);
L_26b9848:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[11] + 0xf38u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x70fu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x26b9878u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    c->pc = c->r[2]; c->r[14] = 0x26b9890u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x65cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[6] = c->r[0] + 0x2u;
    c->r[0] = c->r[11] + 0xee0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b990c; }
    c->r[7] = c->r[11] + 0x3cu;
    c->r[10] = 0x0u;
L_26b98b8:;
    { uint32_t ea = c->r[7] - 0x3cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26b98fc; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[7] - 0x34u;
    c->pc = c->r[2]; c->r[14] = 0x26b98e0u; rt_dispatch(c);
    c->r[0] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[6] = c->r[0] + c->r[6];
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_EQ) { c->r[6] = c->r[6] + c->r[0]; }
    { uint32_t ea = c->r[11] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
L_26b98fc:;
    c->r[10] = c->r[10] + 0x1u;
    c->r[7] = c->r[7] + 0xc4u;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { goto L_26b98b8; }
L_26b990c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x26b9920u; f_2850858(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26b9928u; f_2850774(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x9u;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[1] = c->r[6] + c->r[1];
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[1] = c->r[1] + (c->r[1] << 1);
    if (COND_NE) { c->r[0] = 0xbu; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x26b9960u; f_2850594(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[4];
    c->r[2] = 0x6au;
    c->r[3] = 0x5du;
    c->r[14] = 0x26b9974u; f_2850864(c);
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x26b9980u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x26b998cu; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x26b999cu; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x26b99acu; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b99c0; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x26b99c0u; rt_dispatch(c);
L_26b99c0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
L_26b99c8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[4];
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[6]; c->r[14] = 0x26b99e4u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x65cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[7] + 0x58u;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_26b99c8; }
    { uint32_t ea = c->r[11] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9b28; }
    c->r[4] = 0x0u;
L_26b9a0c:;
    c->r[0] = 0xc4u;
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9b18; }
    c->r[0] = 0xc4u;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[10] = c->r[0] + 0x44u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 5);
    c->r[9] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_26b9a48:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[4];
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0x26b9a70u; rt_dispatch(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x58u;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_26b9a48; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26b9ab0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x26b9ab0u; rt_dispatch(c);
L_26b9ab0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_26b9b18; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    c->r[9] = c->r[0] + 0x8u;
L_26b9acc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x26b9b00u; rt_dispatch(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x58u;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_26b9acc; }
L_26b9b18:;
    { uint32_t ea = c->r[11] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_26b9a0c; }
L_26b9b28:;
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x26b9b34u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x26b9b40u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x74cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26b9b5c; }
    { uint32_t ea = c->r[11] + 0x750u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0xee0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->pc = c->r[3]; c->r[14] = 0x26b9b5cu; rt_dispatch(c);
L_26b9b5c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[4];
    c->r[14] = 0x26b9b6cu; f_2850870(c);
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[4];
    c->r[14] = 0x26b9b78u; f_285087c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_26b9bc8; }
    { uint32_t ea = c->r[11] + 0xf34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9b8cu; f_2850774(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0xf34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xed4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x26b9b9cu; f_2850888(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x26b9ba8u; f_26b8048(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26b9bc8; }
    { uint32_t ea = c->r[11] + 0xf34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[1];
    c->r[14] = 0x26b9bc4u; f_2850888(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_26b9bc8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26b9bd4(Cpu *restrict c) {
    FN_ENTER(0x26b9bd4u);
L_26b9bd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[2];
    c->r[1] = c->r[3];
    c->r[14] = 0x26b9bf0u; f_285048c(c);
    c->r[2] = c->r[0];
    c->r[3] = c->r[13] + 0xcu;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x26b9c04u; f_2850894(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_26b9d1c; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26b9d10; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9c24u; f_28508a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9c50; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[14] = 0x26b9c38u; f_28504a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9cd4; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[14] = 0x26b9c4cu; f_28504bc(c);
    goto L_26b9d10;
L_26b9c50:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9c60u; f_28505b8(c);
    c->r[2] = c->r[13] + 0x8u;
    c->r[1] = c->r[4];
    c->r[5] = c->r[0];
    c->r[14] = 0x26b9c70u; f_2850480(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_26b9cfc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26b9c84u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9cfc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26b9c94u; f_285069c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26b9ce4; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x484425u;
    c->r[2] = 0x26b9cbcu + c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x26b9cc0u; f_283b33c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x26b9cc8u; f_28506a8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_26b9d04; }
    goto L_26b9d10;
L_26b9cd4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9cdcu; f_2850774(c);
    c->r[4] = 0x6u;
    goto L_26b9d1c;
L_26b9ce4:;
    c->r[0] = 0x4843f1u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[5];
    c->r[2] = 0x26b9cf8u + c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x26b9cfcu; f_283b33c(c);
L_26b9cfc:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26b9d10; }
L_26b9d04:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9d0cu; f_2850774(c);
    goto L_26b9d1c;
L_26b9d10:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9d18u; f_2850774(c);
    c->r[4] = 0x0u;
L_26b9d1c:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26b9d30(Cpu *restrict c) {
    FN_ENTER(0x26b9d30u);
L_26b9d30:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[2];
    c->r[6] = c->r[0];
    c->r[8] = c->r[3];
    c->r[9] = c->r[1];
    c->r[0] = c->r[4];
    c->r[14] = 0x26b9d50u; f_28505c4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_26b9dc4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26b9d64u; f_2850498(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26b9dc4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26b9d74u; f_285069c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b9dac; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x484345u;
    c->r[2] = 0x26b9d9cu + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26b9da0u; f_283b33c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x26b9da8u; f_28506a8(c);
    goto L_26b9dc4;
L_26b9dac:;
    c->r[0] = 0x484329u;
    c->r[1] = 0x28u;
    c->r[3] = c->r[4];
    c->r[2] = 0x26b9dc0u + c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x26b9dc4u; f_283b33c(c);
L_26b9dc4:;
    c->r[3] = c->r[13] + 0x8u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
    c->r[14] = 0x26b9dd8u; f_2850894(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b9e00; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26b9df4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9df0u; f_28505b8(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_26b9df4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9dfcu; f_2850774(c);
    c->r[0] = 0x0u;
L_26b9e00:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_26b9e10(Cpu *restrict c) {
    FN_ENTER(0x26b9e10u);
L_26b9e10:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[0] = 0x484f04u;
    c->r[7] = c->r[1];
    c->r[1] = c->r[13];
    c->r[8] = c->r[2];
    c->r[0] = 0x26b9e34u + c->r[0];
    c->r[14] = 0x26b9e34u; f_285033c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b9e48; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26b9fcc; }
L_26b9e48:;
    c->r[0] = 0xf40u;
    c->r[14] = 0x26b9e50u; f_2850060(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26b9f7c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0xf40u;
    c->r[4] = 0x0u;
    c->r[14] = 0x26b9e70u; f_2850138(c);
    c->r[0] = 0x71cu;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[5] + 0xed8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xf34u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5] + c->r[0];
    if (COND_EQ) { goto L_26b9f84; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
L_26b9e8c:;
    c->r[4] = c->r[5] + 0xee0u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[4];
    c->r[14] = 0x26b9ea0u; f_28508ac(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26b9fa8; }
    c->r[0] = 0x6au;
    c->r[1] = 0x6au;
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[5] + 0xef4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x128u;
    c->r[0] = 0x26b9eccu + c->r[0];
    { uint32_t ea = c->r[5] + 0xf08u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0xf0cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + 0xf30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26b9ee0u; f_28508b8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26b9fa8; }
    c->r[1] = c->r[13] + 0x4u;
    c->r[0] = 0x301u;
    c->r[14] = 0x26b9ef8u; f_28503f0(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26b9fa8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x2u;
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[5] + 0x720u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_26b9fa8; }
    c->r[0] = 0x5a2670u;
    { uint32_t ea = 0x26b9f24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xf38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x26b9f30u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26b9fa8; }
    { uint32_t ea = c->r[5] + 0xf38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xed8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x26b9f50u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5] + 0xe70u;
    c->r[1] = c->r[4];
    c->r[14] = 0x26b9f60u; f_26b806c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_26b9fa8; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0xed4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
    goto L_26b9fb0;
L_26b9f7c:;
    c->r[6] = 0x6u;
    goto L_26b9fb0;
L_26b9f84:;
    c->r[0] = 0x4f2c14u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    c->r[3] = 0x26b9f98u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x26b9f9cu; f_28508c4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26b9fbc; }
L_26b9fa8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x26b9fb0u; f_28507b0(c);
L_26b9fb0:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_26b9fbc:;
    { uint32_t ea = c->r[5] + 0xedcu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x71cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xed8u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_26b9e8c;
L_26b9fcc:;
    c->r[0] = 0x484d76u;
    c->r[0] = 0x26b9fd8u + c->r[0];
    c->r[14] = 0x26b9fd8u; f_2850090(c);
    c->r[0] = 0x1u;
    c->r[14] = 0x26b9fe0u; f_28508d0(c);
    rt_udf(c, 0x26b9fe0u);
}
void f_26b9ff4(Cpu *restrict c) {
    FN_ENTER(0x26b9ff4u);
L_26b9ff4:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x744u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[3] + 0x748u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_26ba00c(Cpu *restrict c) {
    FN_ENTER(0x26ba00cu);
L_26ba00c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0xe70u;
    c->r[14] = 0x26ba01cu; f_26b8380(c);
    { uint32_t ea = c->r[4] + 0xf38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ba034; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x26ba034u; rt_dispatch(c);
L_26ba034:;
    { uint32_t ea = c->r[4] + 0xf34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ba03cu; f_2850774(c);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0xee0u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_26ba05c; }
    { uint32_t ea = c->r[4] + 0xed8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ba054u; f_28508dc(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0xee0u; ST32(ea, c->r[0]); }
L_26ba05c:;
    { uint32_t ea = c->r[4] + 0xf30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26ba070; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26ba070u; f_2850564(c);
L_26ba070:;
    { uint32_t ea = c->r[4] + 0xedcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_26ba088; }
    c->r[14] = 0x26ba088u; f_28508e8(c);
L_26ba088:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_28500b4(c);
}
void f_26ba094(Cpu *restrict c) {
    FN_ENTER(0x26ba094u);
L_26ba094:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0xcu;
    c->r[14] = 0x26ba0a8u; f_2850060(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26ba130; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0xcu;
    c->r[14] = 0x26ba0c4u; f_2850138(c);
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0xf3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); c->r[5] = c->r[5] + 0x4u; }
    c->r[1] = 0x5a2488u;
    c->r[2] = 0x2080u;
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[4] + 0x724u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x728u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4000u;
    { uint32_t ea = c->r[4] + 0x72cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x730u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3d800000u;
    { uint32_t ea = c->r[4] + 0x734u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41800000u;
    { uint32_t ea = 0x26ba108u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x738u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x73cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x73du; ST8(ea, c->r[0]); }
    c->r[0] = 0x820u;
    { uint32_t ea = c->r[4] + 0x740u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xed8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x26ba128u; f_26b9210(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_26ba130:;
    c->r[0] = 0x6u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ba140(Cpu *restrict c) {
    FN_ENTER(0x26ba140u);
L_26ba140:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xf3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ba15cu; f_285039c(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ba164u; f_285039c(c);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26ba178u; f_28500b4(c);
    { uint32_t ea = c->r[4] + 0xf3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26ba180(Cpu *restrict c) {
    FN_ENTER(0x26ba180u);
L_26ba180:;
    c->r[0] = 0x610u;
    return;
}
