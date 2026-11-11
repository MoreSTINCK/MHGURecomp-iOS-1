#include "cpu.h"
#include "neon_rt.h"
void f_9c8f2c(Cpu *c);
void f_a3cfac(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efe30(Cpu *c);
void f_15f00d0(Cpu *c);
void f_a3a01c(Cpu *restrict c) {
    FN_ENTER(0xa3a01cu);
L_a3a01c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[13] = c->r[13] - 0x2800u;
    c->r[7] = c->r[0];
    c->r[0] = 0xfff40cu;
    c->r[9] = c->r[1];
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa3a040u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2000u;
    c->pc = c->r[3]; c->r[14] = 0xa3a050u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1000u;
    c->pc = c->r[3]; c->r[14] = 0xa3a06cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2000u;
    c->pc = c->r[3]; c->r[14] = 0xa3a088u; rt_dispatch(c);
    c->r[4] = c->r[13] + 0x38u;
    c->r[8] = c->r[0];
    c->r[1] = 0x2810u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa3a09cu; f_15efd7c(c);
    c->r[11] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa3a0c0u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3cddc; }
    c->r[0] = c->r[4] + 0x14u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[14] = c->r[6];
    c->r[12] = 0x0u;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x10u;
    if (COND_NE) { c->r[14] = 0x1000u; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_a3a110:;
    c->r[9] = c->r[5];
    c->r[8] = 0x0u;
    goto L_a3a348;
L_a3a11c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3a120:;
    (void)f_subs(c, c->r[12], c->r[4]);
    c->r[7] = c->r[10];
    c->r[11] = 0x14u;
    c->r[14] = c->r[4];
    if (COND_CC) { { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[5]); } }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_a3cd24;
L_a3a144:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = c->r[9];
    c->r[9] = c->r[10];
    c->r[14] = c->r[11];
L_a3a154:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3a16c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[12]; ST8(ea, c->r[5]); }
    c->r[12] = c->r[12] + 0x1u;
L_a3a16c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[13] + 0x38u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3a254; }
    c->r[4] = 0x0u;
    c->r[5] = 0x101cu;
    c->r[11] = c->r[14];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
L_a3a18c:;
    c->r[6] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[0] & 0x8u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a3a1f0; }
    c->r[0] = c->r[13] + 0x38u;
    c->r[10] = c->r[9];
    c->r[9] = c->r[0] + (c->r[4] << 3);
    c->r[0] = 0xfff290u;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa3a1bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3a1c8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0xfffbu;
    c->r[14] = c->r[11];
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
L_a3a1f0:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3a23c; }
    c->r[0] = c->r[13] + 0x38u;
    c->r[7] = c->r[0] + (c->r[4] << 3);
    c->r[0] = 0xfff23cu;
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa3a210u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3a21cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0xfff7u;
    c->r[14] = c->r[11];
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
L_a3a23c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0xcu;
    c->r[7] = c->r[13] + 0x38u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_a3a18c; }
L_a3a254:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    c->r[11] = 0xbu;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3a26c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3a270:;
    c->r[7] = c->r[5];
    c->r[11] = 0xfu;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3cd18; }
L_a3a280:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); }
    goto L_a3cd14;
L_a3a28c:;
    c->r[14] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[12] = c->r[5];
L_a3a2a0:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3cd24; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] | c->r[4];
    { uint32_t ea = c->r[2] + c->r[12]; ST8(ea, c->r[0]); }
    c->r[12] = c->r[12] + 0x1u;
    goto L_a3cd24;
L_a3a2c0:;
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
L_a3a2c8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[10];
L_a3a2d0:;
    (void)f_subs(c, c->r[12], c->r[4]);
    c->r[14] = c->r[4];
    if (COND_CC) { c->r[0] = 0x20u; }
    if (COND_CC) { { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    c->r[6] = c->r[5];
L_a3a2ec:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x1du;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3a300:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    c->r[7] = c->r[6];
L_a3a318:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[11];
L_a3a320:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3a340; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[12]; ST8(ea, c->r[2]); }
    c->r[12] = c->r[12] + 0x1u;
    goto L_a3cd24;
L_a3a340:;
    c->r[6] = c->r[0];
    goto L_a3cd24;
L_a3a348:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[11] = 0x11u; }
    (void)f_subs(c, c->r[11], 0x28u);
    if (COND_HI) { goto L_a3cd24; }
    c->r[10] = c->r[9];
    c->r[0] = (c->r[11] << 2);
    { uint32_t ea = c->r[10] + c->r[8]; uint32_t v = LD8(ea); c->r[10] = ea; c->r[5] = v; }
    c->r[1] = 0xa3a370u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa3a418u: goto L_a3a418; case 0xa3a428u: goto L_a3a428; case 0xa3a448u: goto L_a3a448; case 0xa3a45cu: goto L_a3a45c; case 0xa3a470u: goto L_a3a470; case 0xa3a488u: goto L_a3a488; case 0xa3a4a8u: goto L_a3a4a8; case 0xa3a534u: goto L_a3a534; case 0xa3a5d0u: goto L_a3a5d0; case 0xa3a5d8u: goto L_a3a5d8; case 0xa3a600u: goto L_a3a600; case 0xa3a61cu: goto L_a3a61c; case 0xa3a644u: goto L_a3a644; case 0xa3a65cu: goto L_a3a65c; case 0xa3a688u: goto L_a3a688; case 0xa3a6a0u: goto L_a3a6a0; case 0xa3a714u: goto L_a3a714; case 0xa3a724u: goto L_a3a724; case 0xa3a7acu: goto L_a3a7ac; case 0xa3a7ccu: goto L_a3a7cc; case 0xa3a868u: goto L_a3a868; case 0xa3a870u: goto L_a3a870; case 0xa3a890u: goto L_a3a890; case 0xa3a8a4u: goto L_a3a8a4; case 0xa3a8ccu: goto L_a3a8cc; case 0xa3a8e0u: goto L_a3a8e0; case 0xa3a980u: goto L_a3a980; case 0xa3a9b0u: goto L_a3a9b0; case 0xa3aa64u: goto L_a3aa64; case 0xa3aaccu: goto L_a3aacc; case 0xa3aaf4u: goto L_a3aaf4; case 0xa3ab28u: goto L_a3ab28; case 0xa3ab3cu: goto L_a3ab3c; case 0xa3ab54u: goto L_a3ab54; case 0xa3ab64u: goto L_a3ab64; case 0xa3ab74u: goto L_a3ab74; case 0xa3ab84u: goto L_a3ab84; case 0xa3ab94u: goto L_a3ab94; case 0xa3aba4u: goto L_a3aba4; case 0xa3cd24u: goto L_a3cd24; case 0xa3cd80u: goto L_a3cd80; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a3a418:;
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[5], 0x3cu);
    if (COND_EQ) { c->r[11] = 0x5u; }
    goto L_a3cd24;
L_a3a428:;
    (void)f_subs(c, c->r[5], 0xfdu);
    if (COND_GT) { goto L_a3ac0c; }
    (void)f_subs(c, c->r[5], 0x3cu);
    if (COND_EQ) { goto L_a3b6cc; }
    (void)f_subs(c, c->r[5], 0xefu);
    if (COND_NE) { goto L_a3b6dc; }
    c->r[11] = 0x4u;
    goto L_a3cd24;
L_a3a448:;
    (void)f_subs(c, c->r[5], 0xfeu);
    c->r[11] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x4u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); } }
    goto L_a3cd24;
L_a3a45c:;
    (void)f_subs(c, c->r[5], 0xffu);
    c->r[11] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x3u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); } }
    goto L_a3cd24;
L_a3a470:;
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[5], 0xbfu);
    if (COND_EQ) { goto L_a3b02c; }
    (void)f_subs(c, c->r[5], 0xbbu);
    if (COND_EQ) { c->r[11] = 0x4u; }
    goto L_a3cd24;
L_a3a488:;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_EQ) { goto L_a3b144; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { goto L_a3b14c; }
    (void)f_subs(c, c->r[5], 0x3fu);
    if (COND_NE) { goto L_a3b15c; }
    c->r[11] = 0x1cu;
    goto L_a3cd24;
L_a3a4a8:;
    c->r[11] = 0x6u;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_CC) { goto L_a3cd24; }
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[12]); }
    if (COND_CC) { goto L_a3bae0; }
    c->r[0] = 0xffef60u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3a4ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3a4fcu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c508; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c4f8; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3a528u; f_15efe30(c);
    c->r[0] = 0xffef18u;
    { uint32_t ea = 0xa3a534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a3c4e4;
L_a3a534:;
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_HI) { goto L_a3ac24; }
    c->r[10] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_a3c610; }
    c->r[0] = 0xffeedcu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[6] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3a570u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3a580u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3bfd0; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c600; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3a5a4u; f_15efe30(c);
    c->r[0] = 0xffee9cu;
    { uint32_t ea = 0xa3a5b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3a5c0u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3c60c;
L_a3a5d0:;
    c->r[11] = 0x8u;
    goto L_a3aba8;
L_a3a5d8:;
    c->r[11] = 0x9u;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_CC) { goto L_a3cd24; }
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[12]); }
    if (COND_CS) { goto L_a3b210; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c01c;
L_a3a600:;
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_NE) { goto L_a3aca0; }
    c->r[10] = c->r[7];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b2a0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c76c;
L_a3a61c:;
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_EQ) { goto L_a3b038; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_NE) { goto L_a3b04c; }
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b944; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c540;
L_a3a644:;
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_EQ) { goto L_a3abb4; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_NE) { goto L_a3b074; }
    c->r[11] = 0x10u;
    goto L_a3cd24;
L_a3a65c:;
    (void)f_subs(c, c->r[5], 0x3du);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x20u); }
    if (COND_HI) { goto L_a3accc; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b328; }
    c->r[4] = c->r[14];
    c->r[6] = c->r[7];
    goto L_a3c7b0;
L_a3a688:;
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_EQ) { goto L_a3abb4; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_NE) { goto L_a3b098; }
    c->r[11] = 0x10u;
    goto L_a3cd24;
L_a3a6a0:;
    c->r[11] = 0x11u;
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_NE) { goto L_a3cd24; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x38u;
    c->r[10] = c->r[14];
    c->r[2] = c->r[5];
    c->r[14] = 0xa3a6c4u; f_a3cfac(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa3a6e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4];
    c->r[1] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa3a704u; rt_dispatch(c);
    c->r[14] = c->r[10];
    c->r[12] = 0x0u;
    c->r[11] = 0x0u;
    goto L_a3cd24;
L_a3a714:;
    c->r[11] = 0x12u;
    (void)f_subs(c, c->r[5], 0x22u);
    if (COND_EQ) { c->r[11] = 0x13u; }
    goto L_a3cd24;
L_a3a724:;
    c->r[4] = c->r[7] - c->r[8];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[0], (c->r[4] >> 11));
    if (COND_NE) { goto L_a3ad48; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[9];
    c->r[11] = c->r[12];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[9], c->r[0]);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[9] = c->r[0]; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[1] = c->r[9];
    if (COND_EQ) { goto L_a3a774; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[2] = c->r[4];
    c->r[14] = 0xa3a770u; f_15efe30(c);
    c->r[1] = c->r[9] + c->r[4];
L_a3a774:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1000u - c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3a78cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[7];
    c->r[12] = c->r[11];
    if (COND_NE) { c->r[10] = c->r[0] + c->r[4]; }
    if (COND_EQ) { c->r[9] = c->r[6]; }
    if (COND_NE) { c->r[8] = 0x0u; }
    goto L_a3ad4c;
L_a3a7ac:;
    (void)f_subs(c, c->r[5], 0x22u);
    if (COND_EQ) { goto L_a3b0f8; }
    (void)f_subs(c, c->r[5], 0x26u);
    if (COND_NE) { goto L_a3b10c; }
    c->r[0] = 0x14u;
    c->r[11] = 0x1eu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3a7cc:;
    (void)f_subs(c, c->r[5], 0x3fu);
    if (COND_NE) { goto L_a3ae24; }
    c->r[10] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_a3c648; }
    c->r[0] = 0xffec44u;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[6] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3a808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3a818u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3bfe0; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c638; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3a83cu; f_15efe30(c);
    c->r[0] = 0xffec04u;
    { uint32_t ea = 0xa3a848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3a858u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3c644;
L_a3a868:;
    c->r[11] = 0x16u;
    goto L_a3aba8;
L_a3a870:;
    (void)f_subs(c, c->r[5], 0x76u);
    if (COND_EQ) { goto L_a3b3a8; }
    (void)f_subs(c, c->r[5], 0x65u);
    if (COND_EQ) { goto L_a3b3b0; }
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_NE) { c->r[11] = 0x17u; }
    if (COND_EQ) { c->r[11] = 0x0u; }
    goto L_a3cd24;
L_a3a890:;
    (void)f_subs(c, c->r[5], 0x22u);
    c->r[11] = 0x18u;
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); } }
    if (COND_EQ) { c->r[11] = 0x19u; }
    goto L_a3cd24;
L_a3a8a4:;
    (void)f_subs(c, c->r[5], 0x22u);
    if (COND_NE) { goto L_a3ae3c; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b3b8; }
    c->r[4] = c->r[14];
    c->r[6] = c->r[7];
    goto L_a3c7c8;
L_a3a8cc:;
    (void)f_subs(c, c->r[5], 0x22u);
    c->r[11] = 0x1au;
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); } }
    if (COND_EQ) { c->r[11] = 0x1bu; }
    goto L_a3cd24;
L_a3a8e0:;
    (void)f_subs(c, c->r[5], 0x22u);
    if (COND_NE) { goto L_a3ae54; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_a3c6a8; }
    c->r[0] = 0xffeb2cu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[10] = c->r[6];
    c->r[6] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3a920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3a930u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3bff0; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c698; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3a954u; f_15efe30(c);
    c->r[0] = 0xffeaecu;
    { uint32_t ea = 0xa3a960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3a970u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3c6a4;
L_a3a980:;
    (void)f_subs(c, c->r[5], 0x78u);
    if (COND_NE) { goto L_a3ae6c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[12];
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa3a9a0u; rt_dispatch(c);
    c->r[14] = c->r[5];
    c->r[12] = c->r[4];
    c->r[11] = 0x17u;
    goto L_a3cd24;
L_a3a9b0:;
    (void)f_subs(c, c->r[5], 0x3cu);
    if (COND_NE) { goto L_a3ae88; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_LS) { goto L_a3b438; }
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_a3ccb0; }
    c->r[0] = 0xffea50u;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[6] = c->r[12];
    c->r[10] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3a9fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3aa0cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3c85c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3cc9c; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3aa38u; f_15efe30(c);
    c->r[0] = 0xffea08u;
    { uint32_t ea = 0xa3aa44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3aa54u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    goto L_a3cca8;
L_a3aa64:;
    c->r[0] = c->r[5] - 0x61u;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_a3b440; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xa3aa7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa3aac4u: goto L_a3aac4; case 0xa3b8f8u: goto L_a3b8f8; case 0xa3b910u: goto L_a3b910; case 0xa3b928u: goto L_a3b928; case 0xa3c528u: goto L_a3c528; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a3aac4:;
    c->r[11] = 0x1fu;
    goto L_a3cd24;
L_a3aacc:;
    (void)f_subs(c, c->r[5], 0x6du);
    if (COND_EQ) { goto L_a3b124; }
    (void)f_subs(c, c->r[5], 0x70u);
    if (COND_NE) { goto L_a3b13c; }
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b9cc; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c568;
L_a3aaf4:;
    (void)f_subs(c, c->r[5], 0x78u);
    c->r[11] = 0x22u;
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x58u); }
    if (COND_EQ) { goto L_a3cd24; }
    (void)f_subs(c, c->r[5], 0x30u);
    if (COND_NE) { goto L_a3b00c; }
    c->r[0] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    (void)f_subs(c, c->r[1], 0x78u);
    if (COND_NE) { goto L_a3b00c; }
    c->r[8] = c->r[0];
    goto L_a3cd24;
L_a3ab28:;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3aeb4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[14];
    goto L_a3b6f0;
L_a3ab3c:;
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    if (COND_CS) { goto L_a3af38; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = c->r[14];
    goto L_a3be38;
L_a3ab54:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[5], 0x3bu);
    if (COND_NE) { c->r[11] = 0x23u; }
    goto L_a3cd24;
L_a3ab64:;
    c->r[11] = 0x8u;
    (void)f_subs(c, c->r[5], 0x2du);
    if (COND_EQ) { c->r[11] = 0x25u; }
    goto L_a3cd24;
L_a3ab74:;
    c->r[11] = 0x25u;
    (void)f_subs(c, c->r[5], 0x2du);
    if (COND_EQ) { c->r[11] = 0x26u; }
    goto L_a3cd24;
L_a3ab84:;
    c->r[11] = 0x26u;
    (void)f_subs(c, c->r[5], 0x2du);
    if (COND_EQ) { c->r[11] = 0x27u; }
    goto L_a3cd24;
L_a3ab94:;
    c->r[11] = 0x26u;
    (void)f_subs(c, c->r[5], 0x2du);
    if (COND_EQ) { c->r[11] = 0x28u; }
    goto L_a3cd24;
L_a3aba4:;
    c->r[11] = 0x28u;
L_a3aba8:;
    (void)f_subs(c, c->r[5], 0x3eu);
    if (COND_EQ) { c->r[11] = 0x0u; }
    goto L_a3cd24;
L_a3abb4:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x38u;
    c->r[5] = c->r[14];
    c->r[2] = c->r[4];
    c->r[14] = 0xa3abccu; f_a3cfac(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa3abf0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    c->r[14] = c->r[5];
    c->r[7] = c->r[4];
    c->r[11] = 0x1du;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3ac0c:;
    (void)f_subs(c, c->r[5], 0xfeu);
    if (COND_EQ) { goto L_a3b6d4; }
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_NE) { goto L_a3b6dc; }
    c->r[11] = 0x2u;
    goto L_a3cd24;
L_a3ac24:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_a3ae7c; }
    c->r[0] = 0xffe7f4u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3ac58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3ac68u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3b8d4; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b690; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3ac94u; f_15efe30(c);
    c->r[0] = 0xffe7acu;
    { uint32_t ea = 0xa3aca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a3b67c;
L_a3aca0:;
    c->r[11] = 0xau;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_CC) { goto L_a3cd24; }
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3bc90; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3accc:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CC) { goto L_a3b0ec; }
    c->r[0] = 0xffe74cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3ad00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3ad10u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c428; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c418; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3ad3cu; f_15efe30(c);
    c->r[0] = 0xffe704u;
    { uint32_t ea = 0xa3ad48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a3c404;
L_a3ad48:;
    c->r[10] = c->r[7];
L_a3ad4c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], 0x22u);
    if (COND_NE) { goto L_a3afb8; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x38u;
    c->r[3] = 0xfff5u;
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[6] = c->r[2];
    c->r[2] = 0x1018u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[12]); }
    c->r[2] = 0x101cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_CC) { goto L_a3c72c; }
    c->r[0] = 0xffe68cu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[12];
    c->r[6] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3adc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3add0u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3c000; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c720; }
    c->r[6] = c->r[11];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3adf8u; f_15efe30(c);
    c->r[0] = 0xffe648u;
    { uint32_t ea = 0xa3ae04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3ae14u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3c72c;
L_a3ae24:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b454; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c06c;
L_a3ae3c:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b4ec; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c08c;
L_a3ae54:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3b580; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c0ac;
L_a3ae6c:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[12]); }
    if (COND_CS) { goto L_a3b610; }
L_a3ae7c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3b8e4;
L_a3ae88:;
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_HI) { goto L_a3b6a0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a3a2ec; }
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3c86c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3a2d0;
L_a3aeb4:;
    c->r[0] = 0xffe574u;
    c->r[1] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[4] = c->r[12];
    c->r[6] = c->r[14];
    if (COND_EQ) { c->r[1] = 0x10u; }
    c->r[11] = c->r[1];
    { uint32_t ea = 0xa3aed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa3aee8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3b6e4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3af2c; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[6] = c->r[0];
    c->r[14] = 0xa3af0cu; f_15efe30(c);
    c->r[0] = 0xffe534u;
    { uint32_t ea = 0xa3af18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa3af28u; rt_dispatch(c);
    c->r[0] = c->r[6];
L_a3af2c:;
    c->r[12] = c->r[4];
    c->r[3] = c->r[11];
    goto L_a3b6f0;
L_a3af38:;
    c->r[0] = 0xffe4f0u;
    c->r[9] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[4] = c->r[12];
    c->r[6] = c->r[14];
    if (COND_EQ) { c->r[9] = 0x10u; }
    { uint32_t ea = 0xa3af5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0xa3af6cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3b8c4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3be30; }
    c->r[6] = c->r[1];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[0] = c->r[6];
    c->r[14] = 0xa3af98u; f_15efe30(c);
    c->r[0] = 0xffe4a8u;
    { uint32_t ea = 0xa3afa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa3afb4u; rt_dispatch(c);
    goto L_a3b8cc;
L_a3afb8:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x38u;
    c->r[3] = 0xfff5u;
    (void)f_subs(c, c->r[5], 0x26u);
    c->r[6] = c->r[2];
    c->r[2] = 0x1018u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[12]); }
    c->r[2] = 0x101cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_a3b6b8; }
    c->r[11] = 0x1eu;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_a3c750;
L_a3b00c:;
    c->r[0] = c->r[5] - 0x30u;
    c->r[11] = 0x11u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CC) { c->r[8] = c->r[8] - 0x1u; }
    if (COND_CC) { c->r[11] = 0x21u; }
    goto L_a3cd24;
L_a3b02c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3b038:;
    c->r[11] = c->r[7];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3ba4c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3cb50;
L_a3b04c:;
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_HI) { goto L_a3bad4; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[10] = c->r[6];
    if (COND_CS) { goto L_a3c274; }
    c->r[4] = c->r[14];
    c->r[6] = c->r[7];
    goto L_a3a270;
L_a3b074:;
    c->r[11] = 0xfu;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_CC) { goto L_a3cd24; }
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3c300; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3cc8c;
L_a3b098:;
    c->r[11] = 0xfu;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_CC) { goto L_a3cd24; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x38u;
    c->r[10] = c->r[6];
    c->r[3] = 0xfffau;
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[6] = c->r[2];
    c->r[2] = 0x1014u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[12]); }
    c->r[2] = 0x101cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[2] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_CS) { goto L_a3c398; }
L_a3b0ec:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c438;
L_a3b0f8:;
    c->r[10] = c->r[7];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3baec; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3cbc8;
L_a3b10c:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3bb74; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c5b0;
L_a3b124:;
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3bc08; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c5d4;
L_a3b13c:;
    c->r[11] = 0x11u;
    goto L_a3cd24;
L_a3b144:;
    c->r[11] = 0x24u;
    goto L_a3cd24;
L_a3b14c:;
    c->r[11] = 0x9u;
    goto L_a3cd24;
L_a3b15c:;
    c->r[11] = 0x6u;
    (void)f_subs(c, c->r[5], 0x21u);
    if (COND_CC) { goto L_a3cd24; }
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    if (COND_CC) { goto L_a3a154; }
    c->r[0] = 0xffe2acu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[10] = c->r[9];
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b1a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b1b0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3a144; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[9];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b1fc; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[12];
    c->r[14] = 0xa3b1dcu; f_15efe30(c);
    c->r[0] = 0xffe264u;
    { uint32_t ea = 0xa3b1e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b1f8u; rt_dispatch(c);
    c->r[12] = c->r[9];
L_a3b1fc:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[4];
    c->r[9] = c->r[10];
    goto L_a3a154;
L_a3b210:;
    c->r[0] = 0xffe214u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b248u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c00c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b290; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3b274u; f_15efe30(c);
    c->r[0] = 0xffe1ccu;
    { uint32_t ea = 0xa3b280u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b290u; rt_dispatch(c);
L_a3b290:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c01c;
L_a3b2a0:;
    c->r[0] = 0xffe188u;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[6] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b2c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b2d4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3c02c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c75c; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3b2fcu; f_15efe30(c);
    c->r[0] = 0xffe144u;
    { uint32_t ea = 0xa3b308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b318u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3c768;
L_a3b328:;
    c->r[0] = 0xffe100u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b34cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b35cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c03c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c7ac; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[14] = 0xa3b384u; f_15efe30(c);
    c->r[0] = 0xffe0bcu;
    { uint32_t ea = 0xa3b390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b3a0u; rt_dispatch(c);
    c->r[12] = c->r[11];
    goto L_a3c7b0;
L_a3b3a8:;
    c->r[11] = 0x18u;
    goto L_a3cd24;
L_a3b3b0:;
    c->r[11] = 0x1au;
    goto L_a3cd24;
L_a3b3b8:;
    c->r[0] = 0xffe070u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b3dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b3ecu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c04c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c7c4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[14] = 0xa3b414u; f_15efe30(c);
    c->r[0] = 0xffe02cu;
    { uint32_t ea = 0xa3b420u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b430u; rt_dispatch(c);
    c->r[12] = c->r[11];
    goto L_a3c7c8;
L_a3b438:;
    c->r[12] = 0x0u;
    goto L_a3cd24;
L_a3b440:;
    c->r[11] = 0x20u;
    (void)f_subs(c, c->r[5], 0x23u);
    if (COND_NE) { c->r[11] = 0x11u; }
    goto L_a3cd24;
L_a3b454:;
    c->r[0] = 0xffdfd0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b47cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b48cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c05c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b4d4; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3b4b8u; f_15efe30(c);
    c->r[0] = 0xffdf88u;
    { uint32_t ea = 0xa3b4c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b4d4u; rt_dispatch(c);
L_a3b4d4:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c06c;
L_a3b4ec:;
    c->r[0] = 0xffdf38u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b524u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c07c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b56c; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3b550u; f_15efe30(c);
    c->r[0] = 0xffdef0u;
    { uint32_t ea = 0xa3b55cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b56cu; rt_dispatch(c);
L_a3b56c:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c08c;
L_a3b580:;
    c->r[0] = 0xffdea4u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b5a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b5b8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c09c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b600; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3b5e4u; f_15efe30(c);
    c->r[0] = 0xffde5cu;
    { uint32_t ea = 0xa3b5f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b600u; rt_dispatch(c);
L_a3b600:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c0ac;
L_a3b610:;
    c->r[0] = 0xffde14u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b638u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b648u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3b8d4; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b690; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3b674u; f_15efe30(c);
    c->r[0] = 0xffddccu;
    { uint32_t ea = 0xa3b680u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a3b67c:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b690u; rt_dispatch(c);
L_a3b690:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3b8e4;
L_a3b6a0:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3bd24; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[14];
    goto L_a3c91c;
L_a3b6b8:;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3bdb0; }
    c->r[4] = c->r[14];
    c->r[6] = c->r[7];
    goto L_a3a120;
L_a3b6cc:;
    c->r[11] = 0x5u;
    goto L_a3cd24;
L_a3b6d4:;
    c->r[11] = 0x3u;
    goto L_a3cd24;
L_a3b6dc:;
    c->r[11] = 0x11u;
    goto L_a3cd24;
L_a3b6e4:;
    c->r[3] = c->r[6];
    c->r[0] = c->r[5];
    c->r[12] = c->r[4];
L_a3b6f0:;
    (void)f_subs(c, c->r[12], c->r[3]);
    c->r[2] = 0x0u;
    c->r[4] = ~0x0u;
    if (COND_CC) { c->r[1] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[0] + c->r[12]; ST8(ea, c->r[1]); } }
    goto L_a3b710;
L_a3b708:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[2] = c->r[2] + 0x1u;
L_a3b710:;
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x3bu); }
    if (COND_NE) { goto L_a3b708; }
    c->r[11] = 0x11u;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LS) { goto L_a3b73c; }
L_a3b72c:;
    c->r[14] = c->r[3];
L_a3b730:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3b73c:;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_LS) { goto L_a3b8b0; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
L_a3b748:;
    { uint32_t ea = c->r[9] + c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = c->r[1] - 0x30u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_a3b72c; }
    c->v.s[2] = c->r[4];
    c->r[1] = c->r[9] + c->r[8];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[6] = c->r[7];
    c->v.s[0] = 0x41200000u;
    c->r[10] = c->r[3];
    c->r[9] = c->r[12];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->v.f[1] = (float)c->v.s[2];
    c->r[14] = 0xa3b788u; f_15f00d0(c);
    c->v.s[2] = c->r[5];
    c->r[0] = c->r[8];
    c->r[12] = c->r[9];
    (void)f_subs(c, c->r[7], 0x3bu);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[1] = c->v.s[0];
    c->r[2] = c->r[1] + c->r[2];
    if (COND_EQ) { goto L_a3c44c; }
    c->r[3] = c->r[10];
    (void)f_subs(c, c->r[12], c->r[3]);
    if (COND_CS) { goto L_a3b7d8; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[6];
    goto L_a3b898;
L_a3b7d8:;
    c->r[0] = 0xffdc50u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[5] = (c->r[3] << 1);
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[10] = c->r[3];
    c->r[2] = 0x10u;
    if (COND_EQ) { c->r[5] = 0x10u; }
    { uint32_t ea = 0xa3b7fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa3b80cu; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3b860; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_a3b87c; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3b830u; f_15efe30(c);
    c->r[0] = 0xffdc10u;
    { uint32_t ea = 0xa3b83cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xa3b84cu; rt_dispatch(c);
    c->r[0] = c->r[7];
    c->r[12] = c->r[9];
    c->r[3] = c->r[5];
    c->r[7] = c->r[6];
    goto L_a3b88c;
L_a3b860:;
    c->r[12] = c->r[9];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[6];
    c->r[3] = c->r[10];
    goto L_a3b894;
L_a3b87c:;
    c->r[0] = c->r[7];
    c->r[3] = c->r[5];
    c->r[7] = c->r[6];
    c->r[12] = c->r[9];
L_a3b88c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
L_a3b894:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a3b898:;
    (void)f_subs(c, c->r[12], c->r[3]);
    c->r[8] = c->r[8] + 0x1u;
    c->r[4] = c->r[4] - 0x1u;
    if (COND_CC) { { uint32_t ea = c->r[0] + c->r[12]; ST8(ea, c->r[2]); } }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_CC) { goto L_a3b748; }
L_a3b8b0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[3];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[11] = 0x21u;
    goto L_a3cd24;
L_a3b8c4:;
    c->r[9] = c->r[6];
    c->r[6] = c->r[5];
L_a3b8cc:;
    c->r[12] = c->r[4];
    goto L_a3be38;
L_a3b8d4:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3b8e4:;
    c->r[11] = 0x7u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3b8f8:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3c0bc; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3cc04;
L_a3b910:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3c14c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3cc28;
L_a3b928:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3c1e0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3cc4c;
L_a3b944:;
    c->r[0] = 0xffdae0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[10] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3b97cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c530; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c538; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xa3b9a4u; f_15efe30(c);
    c->r[0] = 0xffda9cu;
    { uint32_t ea = 0xa3b9b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3b9c0u; rt_dispatch(c);
    goto L_a3c538;
L_a3b9cc:;
    c->r[0] = 0xffda58u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[10] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3b9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3ba04u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c558; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c560; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xa3ba2cu; f_15efe30(c);
    c->r[0] = 0xffda14u;
    { uint32_t ea = 0xa3ba38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3ba48u; rt_dispatch(c);
    goto L_a3c560;
L_a3ba4c:;
    c->r[0] = 0xffd9dcu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[6] = c->r[12];
    c->r[10] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3ba70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3ba80u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3c580; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3cb40; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3baa8u; f_15efe30(c);
    c->r[0] = 0xffd998u;
    { uint32_t ea = 0xa3bab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3bac4u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3cb4c;
L_a3bad4:;
    c->r[10] = c->r[6];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3c478; }
L_a3bae0:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[14];
    goto L_a3c518;
L_a3baec:;
    c->r[0] = 0xffd93cu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[6] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3bb10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3bb20u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a3c590; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3cbb8; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0xa3bb48u; f_15efe30(c);
    c->r[0] = 0xffd8f8u;
    { uint32_t ea = 0xa3bb54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3bb64u; rt_dispatch(c);
    c->r[12] = c->r[6];
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    goto L_a3cbc4;
L_a3bb74:;
    c->r[0] = 0xffd8b0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3bb9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3bbacu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c5a0; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3bbf4; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3bbd8u; f_15efe30(c);
    c->r[0] = 0xffd868u;
    { uint32_t ea = 0xa3bbe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3bbf4u; rt_dispatch(c);
L_a3bbf4:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c5b0;
L_a3bc08:;
    c->r[0] = 0xffd81cu;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[10] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3bc30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3bc40u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c5c4; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c5cc; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xa3bc68u; f_15efe30(c);
    c->r[0] = 0xffd7d8u;
    { uint32_t ea = 0xa3bc74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3bc84u; rt_dispatch(c);
    goto L_a3c5cc;
L_a3bc90:;
    c->r[0] = 0xffd794u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3bcb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3bcc8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c8ec; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3ccfc; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3bcf8u; f_15efe30(c);
    c->r[0] = 0xffd748u;
    { uint32_t ea = 0xa3bd04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3bd14u; rt_dispatch(c);
    c->r[12] = c->r[9];
    goto L_a3cd00;
L_a3bd24:;
    c->r[0] = 0xffd700u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[6] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[4] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[6] = 0x10u; }
    { uint32_t ea = 0xa3bd4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xa3bd5cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a3c90c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c914; }
    c->r[0] = c->r[3];
    c->r[1] = c->r[7];
    c->r[2] = c->r[4];
    c->r[11] = c->r[3];
    c->r[14] = 0xa3bd88u; f_15efe30(c);
    c->r[0] = 0xffd6b8u;
    { uint32_t ea = 0xa3bd94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3bda4u; rt_dispatch(c);
    c->r[3] = c->r[11];
    goto L_a3c914;
L_a3bdb0:;
    c->r[0] = 0xffd678u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3bdd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3bde4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3caa8; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3a11c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[14] = 0xa3be0cu; f_15efe30(c);
    c->r[0] = 0xffd634u;
    { uint32_t ea = 0xa3be18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3be28u; rt_dispatch(c);
    c->r[12] = c->r[11];
    goto L_a3a120;
L_a3be30:;
    c->r[12] = c->r[4];
    c->r[6] = c->r[1];
L_a3be38:;
    (void)f_subs(c, c->r[12], c->r[9]);
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    goto L_a3be50;
L_a3be4c:;
    c->r[0] = c->r[0] + 0x1u;
L_a3be50:;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x3bu); }
    if (COND_NE) { goto L_a3be4c; }
    c->r[11] = 0x11u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LS) { goto L_a3be84; }
L_a3be6c:;
    c->r[14] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    goto L_a3bfa8;
L_a3be84:;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_LS) { goto L_a3bf9c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
L_a3be94:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] - 0x30u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CC) { goto L_a3bed4; }
    c->r[3] = c->r[1] - 0x61u;
    (void)f_subs(c, c->r[3], 0x6u);
    if (COND_CS) { c->r[3] = c->r[1] - 0x41u; }
    if (COND_CS) { (void)f_subs(c, c->r[3], 0x5u); }
    if (COND_HI) { goto L_a3be6c; }
    c->r[3] = 0x41u;
    (void)f_subs(c, c->r[1], 0x60u);
    if (COND_HI) { c->r[3] = 0x61u; }
L_a3bed4:;
    { uint32_t ea = c->r[6] + c->r[12]; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[4] = c->r[1] - c->r[3];
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CS) { c->r[4] = c->r[4] + 0xau; }
    (void)f_subs(c, c->r[0], 0x3bu);
    if (COND_EQ) { goto L_a3bfb4; }
    (void)f_subs(c, c->r[12], c->r[9]);
    if (COND_CC) { goto L_a3bf84; }
    c->r[0] = 0xffd53cu;
    c->r[5] = (c->r[9] << 1);
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[2] = 0x10u;
    if (COND_EQ) { c->r[5] = 0x10u; }
    { uint32_t ea = 0xa3bf10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa3bf20u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3bf7c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3bf68; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[12];
    c->r[14] = 0xa3bf48u; f_15efe30(c);
    c->r[0] = 0xffd4f8u;
    { uint32_t ea = 0xa3bf54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa3bf64u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3bf68:;
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = c->r[5];
    goto L_a3bf84;
L_a3bf7c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3bf84:;
    (void)f_subs(c, c->r[12], c->r[9]);
    c->r[8] = c->r[8] + 0x1u;
    if (COND_CC) { c->r[0] = c->r[10] | (c->r[4] << 4); }
    if (COND_CC) { { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); } }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_CC) { goto L_a3be94; }
L_a3bf9c:;
    c->r[14] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->r[11] = 0x22u;
L_a3bfa8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_a3cd24;
L_a3bfb4:;
    (void)f_subs(c, c->r[12], c->r[9]);
    if (COND_CS) { goto L_a3c7e4; }
    c->r[14] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_a3a2a0;
L_a3bfd0:;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[11];
    goto L_a3c610;
L_a3bfe0:;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[11];
    goto L_a3c648;
L_a3bff0:;
    c->r[12] = c->r[6];
    c->r[6] = c->r[10];
    c->r[14] = c->r[11];
    goto L_a3c6a8;
L_a3c000:;
    c->r[12] = c->r[11];
    c->r[14] = c->r[6];
    goto L_a3c72c;
L_a3c00c:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c01c:;
    c->r[11] = 0xau;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c02c:;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[11];
    goto L_a3c76c;
L_a3c03c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
    goto L_a3c7b0;
L_a3c04c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
    goto L_a3c7c8;
L_a3c05c:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c06c:;
    c->r[11] = 0x15u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c07c:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c08c:;
    c->r[11] = 0x19u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c09c:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c0ac:;
    c->r[11] = 0x1bu;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c0bc:;
    c->r[0] = 0xffd36cu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[12];
    c->r[5] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c0e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c0f0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3cbf8; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[11];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c140; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[12];
    c->r[14] = 0xa3c120u; f_15efe30(c);
    c->r[0] = 0xffd320u;
    { uint32_t ea = 0xa3c12cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c13cu; rt_dispatch(c);
    c->r[12] = c->r[11];
L_a3c140:;
    c->r[7] = c->r[5];
    goto L_a3cc04;
L_a3c14c:;
    c->r[0] = 0xffd2dcu;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[12];
    c->r[5] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c180u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3cc1c; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[11];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c1d0; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[12];
    c->r[14] = 0xa3c1b0u; f_15efe30(c);
    c->r[0] = 0xffd290u;
    { uint32_t ea = 0xa3c1bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c1ccu; rt_dispatch(c);
    c->r[12] = c->r[11];
L_a3c1d0:;
    c->r[7] = c->r[5];
    goto L_a3cc28;
L_a3c1e0:;
    c->r[0] = 0xffd248u;
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[12];
    c->r[5] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c204u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c214u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3cc40; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[11];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c264; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[12];
    c->r[14] = 0xa3c244u; f_15efe30(c);
    c->r[0] = 0xffd1fcu;
    { uint32_t ea = 0xa3c250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c260u; rt_dispatch(c);
    c->r[12] = c->r[11];
L_a3c264:;
    c->r[7] = c->r[5];
    goto L_a3cc4c;
L_a3c274:;
    c->r[0] = 0xffd1b4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c2a8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3cc68; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3a26c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[11];
    c->r[14] = 0xa3c2d0u; f_15efe30(c);
    c->r[0] = 0xffd170u;
    { uint32_t ea = 0xa3c2dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c2ecu; rt_dispatch(c);
    c->r[12] = c->r[11];
    goto L_a3a270;
L_a3c300:;
    c->r[0] = 0xffd124u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c338u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3cc7c; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c380; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3c364u; f_15efe30(c);
    c->r[0] = 0xffd0dcu;
    { uint32_t ea = 0xa3c370u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c380u; rt_dispatch(c);
L_a3c380:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3cc8c;
L_a3c398:;
    c->r[0] = 0xffd08cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c3c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c3d0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c428; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c418; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3c3fcu; f_15efe30(c);
    c->r[0] = 0xffd044u;
    { uint32_t ea = 0xa3c408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a3c404:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c418u; rt_dispatch(c);
L_a3c418:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c438;
L_a3c428:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c438:;
    c->r[11] = 0xdu;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c44c:;
    (void)f_subs(c, c->r[12], c->r[10]);
    if (COND_CS) { goto L_a3cabc; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = c->r[10];
    c->r[7] = c->r[6];
    goto L_a3a320;
L_a3c478:;
    c->r[0] = 0xffcfacu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c4a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c4b0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3c508; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3c4f8; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[9];
    c->r[14] = 0xa3c4dcu; f_15efe30(c);
    c->r[0] = 0xffcf64u;
    { uint32_t ea = 0xa3c4e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a3c4e4:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c4f8u; rt_dispatch(c);
L_a3c4f8:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a3c518;
L_a3c508:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c518:;
    c->r[11] = 0xbu;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3cd18; }
    goto L_a3cd10;
L_a3c528:;
    c->r[11] = 0x11u;
    goto L_a3cd24;
L_a3c530:;
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
L_a3c538:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[10];
L_a3c540:;
    c->r[11] = 0x10u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3c5ec; }
    c->r[0] = 0x0u;
    goto L_a3c5e4;
L_a3c558:;
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
L_a3c560:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[10];
L_a3c568:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3c5ec; }
    c->r[0] = 0x27u;
    goto L_a3c5e4;
L_a3c580:;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[10];
    goto L_a3cb50;
L_a3c590:;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[11];
    goto L_a3cbc8;
L_a3c5a0:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3c5b0:;
    c->r[11] = 0x14u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c5c4:;
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
L_a3c5cc:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[10];
L_a3c5d4:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3c5ec; }
    c->r[0] = 0x26u;
L_a3c5e4:;
    { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); }
    c->r[12] = c->r[12] + 0x1u;
L_a3c5ec:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->r[14] = c->r[4];
    c->r[6] = c->r[5];
    goto L_a3cd24;
L_a3c600:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[6];
L_a3c60c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_a3c610:;
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    c->r[11] = 0x15u;
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); }
    goto L_a3cd24;
L_a3c638:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[6];
L_a3c644:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_a3c648:;
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[5] = c->r[14];
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[12];
    c->r[1] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xa3c684u; rt_dispatch(c);
    c->r[11] = 0x16u;
    c->r[12] = c->r[4];
    c->r[7] = c->r[10];
    c->r[14] = c->r[5];
    goto L_a3cd24;
L_a3c698:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[6];
L_a3c6a4:;
    c->r[6] = c->r[10];
L_a3c6a8:;
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[1] = 0xd31c02u;
    c->r[5] = c->r[14];
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[12];
    c->r[1] = 0xa3c6d0u + c->r[1];
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0xa3c6d4u; f_9c8f2c(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_a3c6ec; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    goto L_a3c70c;
L_a3c6ec:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd31bdcu;
    c->r[0] = c->r[7] + c->r[0];
    c->r[1] = 0xa3c700u + c->r[1];
    c->r[14] = 0xa3c700u; f_9c8f2c(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); } }
L_a3c70c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[11] = 0x17u;
    c->r[12] = c->r[4];
    c->r[14] = c->r[5];
    goto L_a3cd24;
L_a3c720:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[11];
L_a3c72c:;
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    c->r[11] = 0xcu;
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
L_a3c750:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[10];
    goto L_a3cd24;
L_a3c75c:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[6];
L_a3c768:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_a3c76c:;
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[4] = c->r[14];
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa3c798u; rt_dispatch(c);
    c->r[12] = 0x0u;
    c->r[11] = 0x0u;
    c->r[7] = c->r[10];
    c->r[14] = c->r[4];
    goto L_a3cd24;
L_a3c7ac:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3c7b0:;
    c->r[7] = c->r[5];
    c->r[11] = 0x12u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3a280; }
    goto L_a3cd18;
L_a3c7c4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3c7c8:;
    c->r[7] = c->r[5];
    c->r[11] = 0x17u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3a280; }
    goto L_a3cd18;
L_a3c7e4:;
    c->r[0] = 0xffcc48u;
    c->r[1] = (c->r[9] << 1);
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[5] = c->r[12];
    if (COND_EQ) { c->r[1] = 0x10u; }
    c->r[11] = c->r[1];
    { uint32_t ea = 0xa3c804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa3c814u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3a28c; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[14] = 0xa3c82cu; f_15efe30(c);
    c->r[0] = 0xffcc14u;
    { uint32_t ea = 0xa3c838u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa3c848u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[12] = c->r[5];
    c->r[14] = c->r[11];
    goto L_a3a2a0;
L_a3c85c:;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[10];
    goto L_a3ccb0;
L_a3c86c:;
    c->r[0] = 0xffcbb8u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[4] = (c->r[14] << 1);
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = 0x10u;
    c->r[10] = c->r[12];
    c->r[11] = c->r[14];
    if (COND_EQ) { c->r[4] = 0x10u; }
    { uint32_t ea = 0xa3c894u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa3c8a4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3a2c0; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3a2c8; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xa3c8ccu; f_15efe30(c);
    c->r[0] = 0xffcb74u;
    { uint32_t ea = 0xa3c8d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa3c8e8u; rt_dispatch(c);
    goto L_a3a2c8;
L_a3c8ec:;
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3c90c:;
    c->r[6] = c->r[11];
    c->r[3] = c->r[7];
L_a3c914:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[4];
L_a3c91c:;
    (void)f_subs(c, c->r[12], c->r[6]);
    c->r[0] = 0x0u;
    c->r[11] = 0x1du;
    if (COND_CC) { { uint32_t ea = c->r[3] + c->r[12]; ST8(ea, c->r[5]); } }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    c->r[0] = 0xfffu;
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_CC) { goto L_a3c9a4; }
    c->r[0] = c->r[3] + c->r[12];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_a3c948:;
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LS) { goto L_a3c96c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x20u);
    if (COND_NE) { goto L_a3c948; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_a3c96c:;
    c->r[2] = c->r[0] - c->r[3];
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->pc = c->r[5]; c->r[14] = 0xa3c988u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_a3c9d0; }
    goto L_a3ca90;
L_a3c9a4:;
    c->r[14] = c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    goto L_a3cd20;
L_a3c9bc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[12]; ST8(ea, c->r[2]); }
    c->r[12] = c->r[12] + 0x1u;
L_a3c9c8:;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CS) { goto L_a3ca90; }
L_a3c9d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[4] = c->r[4] + 0x1u; c->r[2] = v; }
    (void)f_subs(c, c->r[12], c->r[6]);
    if (COND_CC) { goto L_a3ca84; }
    c->r[0] = 0xffca48u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[5] = (c->r[6] << 1);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[10] = c->r[7];
    if (COND_EQ) { c->r[5] = 0x10u; }
    { uint32_t ea = 0xa3ca04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa3ca14u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3ca70; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = c->r[9];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3ca60; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[12];
    c->r[14] = 0xa3ca40u; f_15efe30(c);
    c->r[0] = 0xffca00u;
    { uint32_t ea = 0xa3ca4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa3ca5cu; rt_dispatch(c);
    c->r[12] = c->r[9];
L_a3ca60:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[6] = c->r[5];
    c->r[7] = c->r[10];
    goto L_a3ca78;
L_a3ca70:;
    c->r[7] = c->r[10];
    c->r[12] = c->r[9];
L_a3ca78:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a3ca84:;
    (void)f_subs(c, c->r[12], c->r[6]);
    if (COND_CS) { goto L_a3c9c8; }
    goto L_a3c9bc;
L_a3ca90:;
    c->r[0] = 0x0u;
    c->r[14] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a3b730;
L_a3caa8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
    goto L_a3a120;
L_a3cabc:;
    c->r[0] = 0xffc970u;
    c->r[11] = c->r[2];
    c->r[1] = (c->r[10] << 1);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { c->r[1] = 0x10u; }
    c->r[5] = c->r[1];
    { uint32_t ea = 0xa3cadcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa3caecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3a300; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[14] = 0xa3cb04u; f_15efe30(c);
    c->r[0] = 0xffc93cu;
    { uint32_t ea = 0xa3cb10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xa3cb20u; rt_dispatch(c);
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[6];
    c->r[14] = c->r[5];
    goto L_a3a318;
L_a3cb40:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[6];
L_a3cb4c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_a3cb50:;
    (void)f_subs(c, c->r[12], c->r[14]);
    c->r[1] = c->r[13] + 0x38u;
    c->r[2] = c->r[7];
    c->r[4] = c->r[11];
    c->r[5] = c->r[14];
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa3cb74u; f_a3cfac(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa3cb98u; rt_dispatch(c);
    c->r[0] = 0x0u;
    c->r[11] = 0x1du;
    c->r[12] = 0x0u;
    c->r[7] = c->r[4];
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3cbb8:;
    c->r[14] = c->r[4];
    c->r[7] = c->r[5];
    c->r[12] = c->r[6];
L_a3cbc4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_a3cbc8:;
    (void)f_subs(c, c->r[12], c->r[14]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    c->r[11] = 0xcu;
    if (COND_CC) { c->r[0] = 0x0u; }
    if (COND_CC) { { uint32_t ea = c->r[7] + c->r[12]; ST8(ea, c->r[0]); } }
    if (COND_CC) { c->r[12] = c->r[12] + 0x1u; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    goto L_a3cd24;
L_a3cbf8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[5];
    c->r[12] = c->r[11];
L_a3cc04:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3cd18; }
    c->r[0] = 0x3eu;
    { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); }
    goto L_a3cd14;
L_a3cc1c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[5];
    c->r[12] = c->r[11];
L_a3cc28:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3cd18; }
    c->r[0] = 0x3cu;
    { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); }
    goto L_a3cd14;
L_a3cc40:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[5];
    c->r[12] = c->r[11];
L_a3cc4c:;
    c->r[11] = 0x23u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3cd18; }
    c->r[0] = 0x22u;
    { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[0]); }
    goto L_a3cd14;
L_a3cc68:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[11];
    c->r[6] = c->r[7];
    goto L_a3a270;
L_a3cc7c:;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[11];
L_a3cc8c:;
    c->r[11] = 0xcu;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CC) { goto L_a3cd10; }
    goto L_a3cd18;
L_a3cc9c:;
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    c->r[12] = c->r[6];
L_a3cca8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
L_a3ccb0:;
    c->r[4] = c->r[14];
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_CS) { goto L_a3ccd0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[12]; ST8(ea, c->r[0]); }
    c->r[12] = c->r[12] + 0x1u;
    goto L_a3ccd4;
L_a3ccd0:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
L_a3ccd4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[12];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xa3cce8u; rt_dispatch(c);
    c->r[12] = 0x0u;
    c->r[14] = c->r[4];
    goto L_a3cd24;
L_a3ccfc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_a3cd00:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_CS) { goto L_a3cd18; }
L_a3cd10:;
    { uint32_t ea = c->r[6] + c->r[12]; ST8(ea, c->r[5]); }
L_a3cd14:;
    c->r[12] = c->r[12] + 0x1u;
L_a3cd18:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    c->r[14] = c->r[4];
L_a3cd20:;
    c->r[6] = c->r[10];
L_a3cd24:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_HI) { goto L_a3a348; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x1000u;
    c->r[4] = c->r[12];
    c->r[7] = c->r[14];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa3cd58u; rt_dispatch(c);
    c->r[14] = c->r[7];
    c->r[7] = c->r[0];
    c->r[12] = c->r[4];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a3a110; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[13] + 0x38u;
    goto L_a3cdec;
L_a3cd80:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd3154eu;
    c->r[1] = 0xa3cd94u + c->r[0];
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa3cd98u; rt_dispatch(c);
    c->r[0] = 0xffc6a8u;
    { uint32_t ea = 0xa3cda4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3cdb4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3cdc8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    c->r[7] = c->r[13] + 0x38u;
    goto L_a3ce30;
L_a3cddc:;
    c->r[0] = c->r[4] + 0x10u;
    c->r[6] = c->r[9];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_a3cdec:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa3cdfcu; rt_dispatch(c);
    c->r[0] = 0xffc644u;
    { uint32_t ea = 0xa3ce08u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa3ce18u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xa3ce2cu; rt_dispatch(c);
    c->r[0] = 0x1u;
L_a3ce30:;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a3cf04; }
    c->r[0] = 0xffc5f0u;
    c->r[4] = 0x0u;
    c->r[6] = 0x101cu;
    c->r[5] = 0x0u;
    { uint32_t ea = 0xa3ce5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffc5e4u;
    { uint32_t ea = 0xa3ce68u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_a3ce64:;
    c->r[8] = c->r[7] + c->r[6];
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[9] = c->r[0] & 0x8u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a3ceac; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[7] + (c->r[5] << 3);
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3ce94u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[4]); }
    c->r[1] = 0xfffbu;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
L_a3ceac:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_a3ceec; }
    c->r[0] = c->r[13] + 0x38u;
    c->r[7] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3ced4u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[4]); }
    c->r[1] = 0xfff7u;
    c->r[7] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
L_a3ceec:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] + 0xcu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_a3ce64; }
L_a3cf04:;
    c->r[0] = 0xffc53cu;
    { uint32_t ea = 0xa3cf10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa3cf20u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x4cu;
    c->r[13] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
