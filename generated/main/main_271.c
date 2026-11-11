#include "cpu.h"
#include "neon_rt.h"
void f_26ff44(Cpu *c);
void f_2b0a00(Cpu *c);
void f_2b0a60(Cpu *c);
void f_2c1660(Cpu *c);
void f_2c1708(Cpu *c);
void f_52a400(Cpu *c);
void f_52a45c(Cpu *c);
void f_638e44(Cpu *c);
void f_63aff4(Cpu *c);
void f_aa7dc4(Cpu *c);
void f_12b18f8(Cpu *c);
void f_12b1908(Cpu *c);
void f_12b1a48(Cpu *c);
void f_12b1edc(Cpu *c);
void f_12be768(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efddc(Cpu *c);
void f_12ba910(Cpu *restrict c) {
    FN_ENTER(0x12ba910u);
L_12ba910:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xc8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[0];
    c->r[1] = 0xcb24u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[10];
    c->r[4] = c->r[10];
    c->r[9] = c->r[10];
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcb94u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); c->r[4] = ea; }
    c->r[1] = 0xcc04u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcc74u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcce4u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcd54u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcdc4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xce34u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcea4u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xcf14u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + c->r[1]; ST8(ea, c->r[0]); c->r[9] = ea; }
    c->r[1] = 0xcf84u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcff4u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xd064u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xd0d4u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xd144u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xd1b4u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xd224u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = 0xd294u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); c->r[6] = ea; }
    c->r[1] = 0xd304u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xd374u;
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); c->r[2] = ea; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    c->r[14] = 0x12baa3cu; f_2b0a00(c);
    c->r[5] = c->r[0];
    c->r[0] = 0xd3e1u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0xcb0cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[0] = c->r[5] - 0x204u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { c->r[8] = c->r[7]; }
    (void)f_subs(c, c->r[0], 0x2au);
    if (COND_HI) { goto L_12bb0d8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x12baa7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x12bab2cu: goto L_12bab2c; case 0x12bace0u: goto L_12bace0; case 0x12bad10u: goto L_12bad10; case 0x12badacu: goto L_12badac; case 0x12bb060u: goto L_12bb060; case 0x12bb0d8u: goto L_12bb0d8; case 0x12bb120u: goto L_12bb120; case 0x12bb194u: goto L_12bb194; case 0x12bb1b4u: goto L_12bb1b4; case 0x12bb228u: goto L_12bb228; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bab2c:;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bab70; }
    c->r[0] = 0x1u;
    c->r[1] = 0xcb98u;
    c->r[2] = 0x3ecu;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
L_12bab48:;
    c->r[1] = 0xcb9cu;
    c->r[2] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcbc0u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbc1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0xcbf0u;
L_12bab6c:;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
L_12bab70:;
    c->r[0] = 0x202u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[0], 0x1cu);
    if (COND_HI) { goto L_12bc020; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x12bab94u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x12bac0cu: goto L_12bac0c; case 0x12bb424u: goto L_12bb424; case 0x12bb530u: goto L_12bb530; case 0x12bb608u: goto L_12bb608; case 0x12bb6dcu: goto L_12bb6dc; case 0x12bc020u: goto L_12bc020; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bac0c:;
    c->r[0] = 0xd420u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bac5c; }
    c->r[0] = 0xd424u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bac5c; }
    c->r[0] = 0xd428u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bac5c; }
    c->r[0] = 0xd42cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bac5c; }
    c->r[0] = 0xd430u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd9b8; }
L_12bac5c:;
    c->r[0] = 0xd408u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12baf3c; }
    c->v.s[0] = 0x42a00000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x12bac88u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12baf44; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    c->r[1] = 0x3f3u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0xce38u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xce3cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xce60u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xce70u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[5]); c->r[0] = ea; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    goto L_12baff8;
L_12bace0:;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bab70; }
    c->r[0] = 0x206u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_12bb2e0; }
    c->r[1] = 0x5efc58u;
    c->r[1] = 0x12bad08u + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    goto L_12bb2e4;
L_12bad10:;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bab70; }
    c->r[0] = 0x205u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_12bd6cc; }
L_12bad24:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[1] = 0x3edu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc78u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcc7cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc7du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcca0u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcca1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xccd0u;
    c->r[1] = 0x3efu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcce8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xccecu;
    c->r[1] = 0x501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcd10u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcd11u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xcd40u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bc698;
L_12badac:;
    c->r[0] = 0x73e0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12badd4; }
    c->r[0] = 0x73e1u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8u;
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_EQ) { c->r[7] = 0x0u; }
L_12badd4:;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bab70; }
    c->v.s[0] = 0x428c0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[4] = 0x1u;
    c->r[14] = 0x12badfcu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd750; }
    c->r[0] = 0x202u;
    c->r[0] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[0], 0x23u);
    if (COND_HI) { goto L_12bc020; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x12bae20u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x12bac0cu: goto L_12bac0c; case 0x12bad24u: goto L_12bad24; case 0x12baeb4u: goto L_12baeb4; case 0x12bb424u: goto L_12bb424; case 0x12bb530u: goto L_12bb530; case 0x12bb608u: goto L_12bb608; case 0x12bb6dcu: goto L_12bb6dc; case 0x12bc020u: goto L_12bc020; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12baeb4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[1] = 0x3eeu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd58u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcd5cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd5du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcd80u;
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd81u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcdb0u;
    c->r[1] = 0x3f0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcdc8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcdccu;
    c->r[1] = 0x901u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcdf0u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcdf1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xce20u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bc698;
L_12baf3c:;
    c->r[5] = 0x1u;
    goto L_12bc698;
L_12baf44:;
    c->v.s[0] = 0x42c80000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x12baf60u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bbc40; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3f4u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd58u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcd5cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd5du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcd80u;
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd81u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcdb0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xcea8u;
    c->r[1] = 0x3f5u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xceacu;
    c->r[1] = 0x901u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xced0u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xcee0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[7]); c->r[0] = ea; }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
L_12baff8:;
    c->r[2] = 0xd410u;
    c->r[3] = c->r[10];
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xd414u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[2] = 0xcb64u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd418u;
    c->r[2] = 0xcb68u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xcb6cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xcb80u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    goto L_12bbc60;
L_12bb060:;
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bc698; }
    c->v.s[0] = 0x42480000u;
    c->v.s[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x1u;
    c->r[14] = 0x12bb088u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc698; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[1] = 0x3ebu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc08u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcc0cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[2] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcc30u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcc31u;
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xcc60u;
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bc698;
L_12bb0d8:;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bab70; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3ecu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb28u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcb2cu;
    c->r[2] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcb50u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcb51u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0xcb80u;
    goto L_12bab6c;
L_12bb120:;
    (void)f_subs(c, c->r[8], 0x4u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_12bb424; }
    c->v.s[0] = 0x43200000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x12bb148u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bb424; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xcb98u;
    c->r[1] = 0x3ecu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcb9cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcbc0u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcbc1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xcbf0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bb424;
L_12bb194:;
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bc698; }
    c->v.s[0] = 0x43c30000u;
    c->v.s[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_12bb20c;
L_12bb1b4:;
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bc698; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[0] = 0x428c0000u;
    c->v.s[1] = 0x0u;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x12bb1dcu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_12bd8ec; }
    c->v.s[0] = 0x42b40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bb1fcu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_12bd974; }
    c->v.s[0] = 0x430c0000u;
    c->v.s[1] = 0x0u;
L_12bb20c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bb21cu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_12bb258; }
    goto L_12bd974;
L_12bb228:;
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_EQ) { goto L_12bc698; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[0] = 0x428c0000u;
    c->v.s[1] = 0x0u;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x12bb250u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd8ac; }
L_12bb258:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[1] = 0x3eeu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd58u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcd5cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd5du;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcd80u;
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd81u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcdb0u;
    c->r[1] = 0x3f0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcdc8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcdccu;
    c->r[1] = 0x901u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcdf0u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcdf1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xce20u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bc698;
L_12bb2e0:;
    c->v.s[0] = 0x0u;
L_12bb2e4:;
    c->r[0] = 0x202u;
    c->r[4] = 0x1u;
    c->r[0] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[0], 0x1cu);
    if (COND_HI) { goto L_12bc020; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x12bb304u + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x12bac0cu: goto L_12bac0c; case 0x12bb380u: goto L_12bb380; case 0x12bb424u: goto L_12bb424; case 0x12bb530u: goto L_12bb530; case 0x12bb608u: goto L_12bb608; case 0x12bb6dcu: goto L_12bb6dc; case 0x12bc020u: goto L_12bc020; case 0x12bd7a8u: goto L_12bd7a8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bb380:;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bb394u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd850; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3edu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc78u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcc7cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc7du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcca0u;
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcca1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xccd0u;
    c->r[2] = 0x3efu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcce8u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xccecu;
    c->r[2] = 0x501u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcd10u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcd11u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0xcd40u;
    goto L_12bd844;
L_12bb424:;
    c->r[0] = 0xd420u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb474; }
    c->r[0] = 0xd424u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb474; }
    c->r[0] = 0xd428u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb474; }
    c->r[0] = 0xd42cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb474; }
    c->r[0] = 0xd430u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd9b8; }
L_12bb474:;
    c->r[0] = 0xd408u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bb8d8; }
    c->v.s[0] = 0x43340000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x12bb4a0u; f_2b0a60(c);
    c->r[1] = 0xd410u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_12bb8e0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3f3u;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xce38u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xce3cu;
    c->r[2] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xce60u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = 0xce70u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0xd414u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[2] = 0xce74u;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0xd418u;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] - 0x5a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x59cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - 0x588u; ST8(ea, c->r[0]); }
    goto L_12bb8f4;
L_12bb530:;
    c->r[0] = 0xd420u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb580; }
    c->r[0] = 0xd424u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb580; }
    c->r[0] = 0xd428u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb580; }
    c->r[0] = 0xd42cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb580; }
    c->r[0] = 0xd430u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd9b8; }
L_12bb580:;
    c->r[0] = 0xd408u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bb8d0; }
    c->v.s[0] = 0x42a00000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x12bb5acu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bba20; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    c->r[1] = 0x3f3u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0xce38u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xce3cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xce60u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xce70u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); c->r[0] = ea; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    goto L_12bbad0;
L_12bb608:;
    c->r[0] = 0xd420u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb658; }
    c->r[0] = 0xd424u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb658; }
    c->r[0] = 0xd428u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb658; }
    c->r[0] = 0xd42cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb658; }
    c->r[0] = 0xd430u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd9b8; }
L_12bb658:;
    c->r[0] = 0xd408u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bb8d0; }
    c->v.s[0] = 0x42820000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x12bb684u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bbb30; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    c->r[1] = 0x3f3u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0xce38u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xce3cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xce60u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xce70u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); c->r[0] = ea; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    goto L_12bbbe0;
L_12bb6dc:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1cu;
    c->r[14] = 0x12bb6ecu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb740; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1du;
    c->r[14] = 0x12bb704u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb740; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x22u;
    c->r[4] = 0x1u;
    c->r[14] = 0x12bb720u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bb740; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x23u;
    c->r[14] = 0x12bb738u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc038; }
L_12bb740:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    c->r[1] = 0x3f3u;
    c->r[9] = c->r[10];
    c->r[2] = 0xce74u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0xce38u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xce3cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xce60u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xd410u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0xce70u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd414u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd418u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[14] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[10] - 0x5a0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x47cu;
    { uint32_t ea = c->r[10] - 0x59cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] - 0x588u; ST8(ea, c->r[7]); }
    c->r[0] = c->r[10] - c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
L_12bb7cc:;
    { uint32_t ea = c->r[14] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bb8bc; }
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_HI) { goto L_12bb8bc; }
    c->r[8] = (c->r[5] << 2);
    c->r[12] = 0x12bb7ecu + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[12]; switch (c->pc) { case 0x12bb808u: goto L_12bb808; case 0x12bb810u: goto L_12bb810; case 0x12bb818u: goto L_12bb818; case 0x12bb828u: goto L_12bb828; case 0x12bb82cu: goto L_12bb82c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bb808:;
    c->r[0] = 0x1u;
    goto L_12bb82c;
L_12bb810:;
    c->r[0] = 0x2u;
    goto L_12bb82c;
L_12bb818:;
    c->r[0] = 0x3u;
    goto L_12bb82c;
L_12bb828:;
    c->r[0] = 0x4u;
L_12bb82c:;
    c->r[1] = 0xfb64u;
    c->r[7] = c->r[14] + c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[2] = c->r[1];
    c->r[1] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[1] + 0x2du; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[2]; ST8(ea, c->r[0]); }
    c->r[0] = 0xfedcu;
    c->r[2] = 0x3f7u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[7] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + (c->r[6] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; ST32(ea, c->r[3]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST8(ea, c->r[3]); }
L_12bb8bc:;
    c->r[4] = c->r[4] + 0x70u;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[4], 0x230u);
    if (COND_NE) { goto L_12bb7cc; }
    goto L_12bc014;
L_12bb8d0:;
    c->r[5] = 0x1u;
    goto L_12bc698;
L_12bb8d8:;
    c->r[5] = 0x1u;
    goto L_12bc698;
L_12bb8e0:;
    c->r[0] = 0xd418u;
    c->r[6] = c->r[10] + c->r[0];
    c->r[0] = 0xd414u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
L_12bb8f4:;
    c->r[0] = 0xd420u;
    c->r[5] = 0x0u;
    c->r[8] = 0x0u;
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0xcf9cu;
    c->r[9] = c->r[10] + c->r[0];
    c->r[10] = 0x0u;
L_12bb910:;
    { uint32_t ea = c->r[7] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bba08; }
    c->r[14] = 0x12bb920u; f_638e44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bba08; }
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_HI) { goto L_12bba08; }
    c->r[1] = (c->r[8] << 2);
    c->r[2] = 0x12bb93cu + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x12bb958u: goto L_12bb958; case 0x12bb960u: goto L_12bb960; case 0x12bb968u: goto L_12bb968; case 0x12bb974u: goto L_12bb974; case 0x12bb978u: goto L_12bb978; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bb958:;
    c->r[0] = 0x1u;
    goto L_12bb978;
L_12bb960:;
    c->r[0] = 0x2u;
    goto L_12bb978;
L_12bb968:;
    c->r[0] = 0x3u;
    goto L_12bb978;
L_12bb974:;
    c->r[0] = 0x4u;
L_12bb978:;
    c->r[2] = 0xfb64u;
    c->r[1] = c->r[7] + c->r[10];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[2] + 0x2du; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0xfedcu;
    c->r[3] = 0x3f7u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[1] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[9] + c->r[10]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x5cu; ST8(ea, c->r[5]); }
L_12bba08:;
    c->r[10] = c->r[10] + 0x70u;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[10], 0x230u);
    if (COND_NE) { goto L_12bb910; }
    goto L_12bc014;
L_12bba20:;
    c->v.s[0] = 0x42c80000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x12bba3cu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bbd88; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3f8u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc78u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcc7cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc7du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcca0u;
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcca1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xccd0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = 0xcf18u;
    c->r[1] = 0x3f9u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcf1cu;
    c->r[1] = 0x501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcf40u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xcf50u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[7]); c->r[0] = ea; }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
L_12bbad0:;
    c->r[2] = 0xd410u;
    c->r[3] = c->r[10];
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xd414u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[2] = 0xcb64u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd418u;
    c->r[2] = 0xcb68u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xcb6cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xcb80u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    goto L_12bbda8;
L_12bbb30:;
    c->v.s[0] = 0x42a60000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x12bbb4cu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bbed4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3f8u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc78u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcc7cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc7du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcca0u;
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcca1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xccd0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = 0xcf18u;
    c->r[1] = 0x3f9u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcf1cu;
    c->r[1] = 0x501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcf40u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0xcf50u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[7]); c->r[0] = ea; }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
L_12bbbe0:;
    c->r[2] = 0xd410u;
    c->r[3] = c->r[10];
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xd414u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[2] = 0xcb64u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd418u;
    c->r[2] = 0xcb68u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xcb6cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xcb80u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); }
    goto L_12bbef4;
L_12bbc40:;
    c->r[0] = 0xd418u;
    c->r[9] = c->r[10] + c->r[0];
    c->r[0] = 0xd414u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd410u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
L_12bbc60:;
    c->r[0] = 0xd420u;
    c->r[5] = 0x0u;
    c->r[8] = 0x0u;
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0xcf9cu;
    c->r[4] = c->r[10] + c->r[0];
    c->r[10] = 0x0u;
L_12bbc7c:;
    { uint32_t ea = c->r[7] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bbd74; }
    c->r[14] = 0x12bbc8cu; f_638e44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bbd74; }
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_HI) { goto L_12bbd74; }
    c->r[1] = (c->r[8] << 2);
    c->r[2] = 0x12bbca8u + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x12bbcc4u: goto L_12bbcc4; case 0x12bbcccu: goto L_12bbccc; case 0x12bbcd4u: goto L_12bbcd4; case 0x12bbce0u: goto L_12bbce0; case 0x12bbce4u: goto L_12bbce4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bbcc4:;
    c->r[0] = 0x1u;
    goto L_12bbce4;
L_12bbccc:;
    c->r[0] = 0x2u;
    goto L_12bbce4;
L_12bbcd4:;
    c->r[0] = 0x3u;
    goto L_12bbce4;
L_12bbce0:;
    c->r[0] = 0x4u;
L_12bbce4:;
    c->r[2] = 0xfb64u;
    c->r[1] = c->r[7] + c->r[10];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[2] + 0x2du; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0xfedcu;
    c->r[3] = 0x3f7u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[10]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x5cu; ST8(ea, c->r[5]); }
L_12bbd74:;
    c->r[10] = c->r[10] + 0x70u;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[10], 0x230u);
    if (COND_NE) { goto L_12bbc7c; }
    goto L_12bc014;
L_12bbd88:;
    c->r[0] = 0xd418u;
    c->r[9] = c->r[10] + c->r[0];
    c->r[0] = 0xd414u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd410u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
L_12bbda8:;
    c->r[0] = 0xd420u;
    c->r[5] = 0x0u;
    c->r[8] = 0x0u;
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0xcf9cu;
    c->r[4] = c->r[10] + c->r[0];
    c->r[10] = 0x0u;
L_12bbdc4:;
    { uint32_t ea = c->r[7] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bbebc; }
    c->r[14] = 0x12bbdd4u; f_638e44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bbebc; }
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_HI) { goto L_12bbebc; }
    c->r[1] = (c->r[8] << 2);
    c->r[2] = 0x12bbdf0u + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x12bbe0cu: goto L_12bbe0c; case 0x12bbe14u: goto L_12bbe14; case 0x12bbe20u: goto L_12bbe20; case 0x12bbe28u: goto L_12bbe28; case 0x12bbe2cu: goto L_12bbe2c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bbe0c:;
    c->r[0] = 0x1u;
    goto L_12bbe2c;
L_12bbe14:;
    c->r[0] = 0x2u;
    goto L_12bbe2c;
L_12bbe20:;
    c->r[0] = 0x3u;
    goto L_12bbe2c;
L_12bbe28:;
    c->r[0] = 0x4u;
L_12bbe2c:;
    c->r[2] = 0xfb64u;
    c->r[1] = c->r[7] + c->r[10];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[2] + 0x2du; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0xfedcu;
    c->r[3] = 0x3f7u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[10]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x5cu; ST8(ea, c->r[5]); }
L_12bbebc:;
    c->r[10] = c->r[10] + 0x70u;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[10], 0x230u);
    if (COND_NE) { goto L_12bbdc4; }
    goto L_12bc014;
L_12bbed4:;
    c->r[0] = 0xd418u;
    c->r[9] = c->r[10] + c->r[0];
    c->r[0] = 0xd414u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd410u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
L_12bbef4:;
    c->r[0] = 0xd420u;
    c->r[5] = 0x0u;
    c->r[8] = 0x0u;
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0xcf9cu;
    c->r[4] = c->r[10] + c->r[0];
    c->r[10] = 0x0u;
L_12bbf10:;
    { uint32_t ea = c->r[7] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc004; }
    c->r[14] = 0x12bbf20u; f_638e44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc004; }
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_HI) { goto L_12bc004; }
    c->r[1] = (c->r[8] << 2);
    c->r[2] = 0x12bbf3cu + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x12bbf58u: goto L_12bbf58; case 0x12bbf60u: goto L_12bbf60; case 0x12bbf68u: goto L_12bbf68; case 0x12bbf70u: goto L_12bbf70; case 0x12bbf74u: goto L_12bbf74; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bbf58:;
    c->r[0] = 0x1u;
    goto L_12bbf74;
L_12bbf60:;
    c->r[0] = 0x2u;
    goto L_12bbf74;
L_12bbf68:;
    c->r[0] = 0x3u;
    goto L_12bbf74;
L_12bbf70:;
    c->r[0] = 0x4u;
L_12bbf74:;
    c->r[2] = 0xfb64u;
    c->r[1] = c->r[7] + c->r[10];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[2] + 0x2du; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0xfedcu;
    c->r[3] = 0x3f7u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[10]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x5cu; ST8(ea, c->r[5]); }
L_12bc004:;
    c->r[10] = c->r[10] + 0x70u;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[10], 0x230u);
    if (COND_NE) { goto L_12bbf10; }
L_12bc014:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
L_12bc020:;
    c->r[0] = 0x223u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_12bc290; }
    c->r[0] = 0x21eu;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_12bc350; }
L_12bc038:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1eu;
    c->r[5] = 0x1u;
    c->r[14] = 0x12bc04cu; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    if (COND_NE) { goto L_12bc0a0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x1fu;
    c->r[14] = 0x12bc068u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc0a0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x24u;
    c->r[14] = 0x12bc080u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc0a0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x25u;
    c->r[14] = 0x12bc098u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc350; }
L_12bc0a0:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3f3u;
    c->r[2] = 0xd3b4u;
    c->r[3] = 0xd3b8u;
    c->r[6] = 0xd3bcu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xd378u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd37cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xd3a0u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xd440u;
    c->r[1] = 0xd3b0u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xd444u;
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0xd448u;
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xd3d0u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[5]); }
    c->r[6] = 0xd450u;
    { uint32_t ea = c->r[10] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_12bc1a0; }
    c->r[6] = 0xd1e1u;
    c->r[5] = 0x3f6u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[3]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[6]); }
    c->r[6] = 0xd1b8u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[5]); }
    c->r[6] = 0xd1bcu;
    c->r[5] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[5]); }
    c->r[6] = 0xd1c0u;
    c->r[5] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[0]); }
    c->r[6] = 0xd1c4u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[1]); }
    c->r[6] = 0xd1c8u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[2]); }
    c->r[6] = 0xd1ccu;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xd1fcu;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xd1f8u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xd1f4u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xd1f0u;
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xd1e0u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[5]); }
    c->r[6] = 0xd210u;
    { uint32_t ea = c->r[10] + c->r[6]; ST8(ea, c->r[3]); }
L_12bc1a0:;
    c->r[3] = 0xd454u;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_12bc234; }
    c->r[3] = 0xd251u;
    c->r[7] = 0x1u;
    c->r[6] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0xd228u;
    c->r[7] = 0x3f6u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd22cu;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0xd230u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0xd234u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[1]); }
    c->r[3] = 0xd238u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0xd23cu;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd26cu;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd268u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd264u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd260u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd250u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[6]); }
    c->r[3] = 0xd280u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
L_12bc234:;
    c->r[3] = 0xd458u;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_12bc68c; }
    c->r[3] = 0xd2c1u;
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = 0xd298u;
    c->r[7] = 0x3f6u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd29cu;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0xd2a0u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd2a4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd2a8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[2]); }
    goto L_12bc64c;
L_12bc290:;
    c->r[0] = 0xd450u;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc2b0; }
    c->r[14] = 0x12bc2a8u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc304; }
L_12bc2b0:;
    c->r[0] = 0xd454u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc2cc; }
    c->r[14] = 0x12bc2c4u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc304; }
L_12bc2cc:;
    c->r[0] = 0xd458u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc2e8; }
    c->r[14] = 0x12bc2e0u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc304; }
L_12bc2e8:;
    c->r[0] = 0xd45cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc350; }
    c->r[14] = 0x12bc2fcu; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc350; }
L_12bc304:;
    c->r[0] = 0xd408u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc350; }
    c->v.s[0] = 0x42b40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x12bc330u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc360; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xd378u;
    c->r[1] = 0x3f3u;
    goto L_12bc424;
L_12bc350:;
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_12bc698; }
    goto L_12bc908;
L_12bc360:;
    c->v.s[0] = 0x43340000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x12bc37cu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc410; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3f4u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd58u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcd5cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd5du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcd80u;
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd81u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcdb0u;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xcea8u;
    c->r[1] = 0x3f5u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xceacu;
    c->r[1] = 0x901u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xced0u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcee0u;
    goto L_12bc448;
L_12bc410:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xd378u;
    c->r[1] = 0x3fau;
L_12bc424:;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd37cu;
    c->r[1] = 0x9501u;
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xd3a0u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xd3b0u;
L_12bc448:;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    c->r[3] = 0xd440u;
    c->r[0] = c->r[10];
    c->r[2] = (c->r[2] << 3) - c->r[2];
    c->r[6] = 0xcb68u;
    c->r[7] = 0xcb80u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[5] = c->r[10] + (c->r[2] << 4);
    c->r[2] = 0xcb64u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0xd444u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0xd448u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0xcb6cu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[5] + c->r[7]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_12bc548; }
    c->r[7] = 0xd1e1u;
    { uint32_t ea = c->r[10] + c->r[7]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[6]); }
    c->r[7] = 0xd1b8u;
    c->r[6] = 0x3f6u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0xd1bcu;
    c->r[6] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[7]; ST8(ea, c->r[6]); }
    c->r[6] = 0xd1c0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0xd1c4u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0xd1c8u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0xd1ccu;
    c->r[6] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd1fcu;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd1f8u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd1f4u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd1f0u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd1e0u;
    { uint32_t ea = c->r[10] + c->r[7]; ST8(ea, c->r[6]); }
    c->r[7] = 0xd210u;
    { uint32_t ea = c->r[10] + c->r[7]; ST8(ea, c->r[3]); }
L_12bc548:;
    c->r[3] = 0xd454u;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_12bc5e8; }
    c->r[3] = 0xd251u;
    c->r[7] = 0x1u;
    c->r[6] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0xd228u;
    c->r[7] = 0x3f6u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd22cu;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[7] = 0xd230u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd234u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xd238u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[3]); }
    c->r[3] = 0xd23cu;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd26cu;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd268u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd264u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd260u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd250u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[6]); }
    c->r[3] = 0xd280u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
L_12bc5e8:;
    c->r[3] = 0xd458u;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_12bc68c; }
    c->r[3] = 0xd2c1u;
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[3]); }
    c->r[3] = 0xd298u;
    c->r[7] = 0x3f6u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0xd29cu;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[3]; ST8(ea, c->r[7]); }
    c->r[3] = 0xd2a0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd2a4u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xd2a8u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
L_12bc64c:;
    c->r[0] = 0xd2acu;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd2dcu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd2d8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd2d4u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd2d0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd2c0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0xd2f0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
L_12bc68c:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_12bcabc; }
L_12bc698:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    c->r[0] = 0xd420u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc700; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd424u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_12bc700; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd428u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_12bc700; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd42cu;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_12bc700; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd430u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_12bc8fc; }
L_12bc700:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0xd439u;
    c->r[2] = 0xd410u;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_12bc794; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    c->r[3] = 0x3f3u;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0xce38u;
    { uint32_t ea = c->r[6] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xce3cu;
    c->r[3] = 0x9501u;
    { uint32_t ea = c->r[6] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0xce60u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[6] + c->r[2]; ST8(ea, c->r[3]); }
    c->r[3] = 0xce70u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0xd414u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = 0xce74u;
    { uint32_t ea = c->r[6] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0xd418u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x5a0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x59cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] - 0x588u; ST8(ea, c->r[1]); }
    goto L_12bc7a8;
L_12bc794:;
    c->r[1] = 0xd418u;
    c->r[5] = c->r[6] + c->r[1];
    c->r[1] = 0xd414u;
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
L_12bc7a8:;
    c->r[1] = 0xd424u;
    c->r[4] = 0x0u;
    c->r[9] = 0x0u;
    c->r[7] = c->r[6] + c->r[1];
    c->r[1] = 0xcf90u;
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0xcf9cu;
    c->r[10] = c->r[6] + c->r[1];
    c->r[1] = 0xcfc0u;
    c->r[8] = c->r[6] + c->r[1];
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc8f4; }
L_12bc7e0:;
    c->r[14] = 0x12bc7e4u; f_638e44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc8f4; }
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_HI) { goto L_12bc8f4; }
    c->r[1] = (c->r[9] << 2);
    c->r[2] = 0x12bc800u + 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x12bc81cu: goto L_12bc81c; case 0x12bc824u: goto L_12bc824; case 0x12bc82cu: goto L_12bc82c; case 0x12bc834u: goto L_12bc834; case 0x12bc838u: goto L_12bc838; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bc81c:;
    c->r[0] = 0x1u;
    goto L_12bc838;
L_12bc824:;
    c->r[0] = 0x2u;
    goto L_12bc838;
L_12bc82c:;
    c->r[0] = 0x3u;
    goto L_12bc838;
L_12bc834:;
    c->r[0] = 0x4u;
L_12bc838:;
    c->r[2] = 0xfb64u;
    c->r[1] = c->r[7] + c->r[6];
    c->r[3] = 0x3f7u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[2] + 0x29u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0xfd91u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x520u; ST32(ea, c->r[3]); }
    c->r[0] = 0x3u;
    c->r[3] = 0xfedcu;
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[0]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[4]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 0x494u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[4]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x58u; ST8(ea, c->r[4]); }
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_EQ) { goto L_12bc8fc; }
L_12bc8dc:;
    { uint32_t ea = c->r[7] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + 0x1u;
    c->r[6] = c->r[6] + 0x70u;
    c->r[9] = c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bc7e0; }
L_12bc8f4:;
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_NE) { goto L_12bc8dc; }
L_12bc8fc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bcabc; }
L_12bc908:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xd450u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc928; }
    c->r[14] = 0x12bc920u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc988; }
L_12bc928:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xd454u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc948; }
    c->r[14] = 0x12bc940u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc988; }
L_12bc948:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xd458u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bc968; }
    c->r[14] = 0x12bc960u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bc988; }
L_12bc968:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xd45cu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bcabc; }
    c->r[14] = 0x12bc980u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bcabc; }
L_12bc988:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[1] = 0x3f3u;
    c->r[9] = 0x0u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    c->r[0] = 0xd378u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xd37cu;
    c->r[1] = 0x9501u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[2];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[2] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xd3a0u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xd440u;
    c->r[1] = 0xd3b0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd444u;
    c->r[1] = 0xd3b4u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd448u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[8] = v; }
    c->r[4] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[7] - 0x90u; ST32(ea, c->r[8]); ST32(ea + 4, c->r[9]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[7] - 0x78u; ST8(ea, c->r[3]); }
L_12bca08:;
    { uint32_t ea = c->r[4] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bcaac; }
    c->r[14] = 0x12bca18u; f_63aff4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bcaac; }
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_HI) { goto L_12bcaac; }
    c->r[1] = 0xfd91u;
    c->r[0] = c->r[4] + c->r[8];
    c->r[2] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = c->r[1];
    c->r[1] = 0xfb64u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[3]; ST8(ea, c->r[10]); }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[1] + 0x200u; ST8(ea, c->r[2]); }
    c->r[2] = 0x3f6u;
    { uint32_t ea = c->r[0] - 0x298u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[1] + 0x208u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x210u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x214u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x218u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x290u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x28cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x288u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0x284u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] + c->r[3];
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0xfu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x13u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x17u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x1bu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x22cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2fu; ST8(ea, c->r[9]); }
L_12bcaac:;
    c->r[8] = c->r[8] + 0x70u;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[8], 0x1c0u);
    if (COND_NE) { goto L_12bca08; }
L_12bcabc:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x21u;
    c->r[0] = c->r[10];
    c->r[14] = 0x12bcad0u; f_26ff44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd090; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x20du;
    c->r[0] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[0], 0x23u);
    if (COND_HI) { goto L_12bd090; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x12bcaf8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x12bcb8cu: goto L_12bcb8c; case 0x12bcc28u: goto L_12bcc28; case 0x12bcd18u: goto L_12bcd18; case 0x12bcddcu: goto L_12bcddc; case 0x12bcf04u: goto L_12bcf04; case 0x12bd090u: goto L_12bd090; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bcb8c:;
    c->v.s[0] = 0x42480000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[6] = 0x1u;
    c->r[5] = 0x0u;
    c->r[14] = 0x12bcbacu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd090; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x405u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0xce38u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xce3cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0xce3du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xce60u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[0] = 0xce61u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xce80u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43480000u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0xce84u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] + 0xe70000u;
    c->r[1] = 0xce88u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xce8cu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0xce90u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[6]); }
    goto L_12bd090;
L_12bcc28:;
    c->r[0] = 0x1428u;
    c->v.s[2] = 0x41700000u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 444u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_12bcc80; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    c->r[3] = 0x3fbu;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0xcb28u;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xcb2cu;
    c->r[3] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0xcb50u;
    c->r[3] = 0x1007u;
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0xcb80u;
    { uint32_t ea = c->r[10] + c->r[2]; ST8(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[0] + 444u);
L_12bcc80:;
    c->v.s[2] = 0x42340000u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_12bcccc; }
    c->r[1] = 0x1u;
    c->r[3] = 0x3fcu;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0xcb98u;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xcb9cu;
    c->r[3] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0xcbc0u;
    c->r[3] = 0xc07u;
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0xcbf0u;
    { uint32_t ea = c->r[10] + c->r[2]; ST8(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[0] + 444u);
L_12bcccc:;
    c->v.s[2] = 0x42960000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_12bd090; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3fdu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc08u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcc0cu;
    c->r[2] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcc30u;
    c->r[2] = 0x307u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcc60u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_12bd090;
L_12bcd18:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3fdu;
    c->r[3] = 0x7u;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc08u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcc0cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc0du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcc30u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0xcc31u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    c->r[1] = 0xcc60u;
    c->r[7] = 0x3fcu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb98u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = 0xcb9cu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb9du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbc0u;
    c->r[2] = 0xcu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0xcbc1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbf0u;
    c->r[2] = 0x3fbu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb28u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcb2cu;
    c->r[2] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcb50u;
    c->r[2] = 0x1007u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcb80u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    goto L_12bd090;
L_12bcddc:;
    c->v.s[0] = 0x42200000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x1u;
    c->r[14] = 0x12bcdf8u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bcfd4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3feu;
    c->r[2] = 0x3ffu;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc78u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcc7cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc7du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcca0u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcca1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xccd0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcce8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xccecu;
    c->r[2] = 0x7u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xccedu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcd10u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0xcd11u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[3]); }
    c->r[0] = 0xcd40u;
    c->r[3] = 0x400u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd58u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = 0xcd5cu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcd5du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcd80u;
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0xcd81u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcdb0u;
    c->r[1] = 0x401u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcdc8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcdccu;
    c->r[1] = 0x501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcdf0u;
    c->r[1] = 0x1007u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xce20u;
    goto L_12bd08c;
L_12bcf04:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x402u;
    c->r[3] = 0x7u;
    c->r[7] = 0x3u;
    c->r[6] = 0x403u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc08u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcc0cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcc0du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcc30u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0xcc31u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    c->r[1] = 0xcc60u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb98u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0xcb9cu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb9du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbc0u;
    c->r[2] = 0xcu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0xcbc1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbf0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xcb28u;
    c->r[1] = 0x404u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcb2cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcb50u;
    c->r[1] = 0x1007u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcb80u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[7]); }
    goto L_12bd090;
L_12bcfd4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3fdu;
    c->r[2] = 0x7u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc08u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcc0cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc0du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcc30u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0xcc31u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[3]); }
    c->r[0] = 0xcc60u;
    c->r[3] = 0x3fcu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcb98u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = 0xcb9cu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcb9du;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcbc0u;
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0xcbc1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcbf0u;
    c->r[1] = 0x3fbu;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcb28u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcb2cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcb50u;
    c->r[1] = 0x1007u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcb80u;
L_12bd08c:;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[5]); }
L_12bd090:;
    c->r[0] = 0xcb50u;
    c->v.s[22] = 0x4622f983u;
    c->v.s[26] = 0x44660000u;
    c->v.s[28] = 0x38c90fdbu;
    c->v.s[24] = 0x3f000000u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[8] = 0x0u;
    c->r[4] = c->r[10] + c->r[0];
    c->r[0] = 0x77c990u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x12bd0c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x77c984u;
    { uint32_t ea = 0x12bd0d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x77c978u;
    { uint32_t ea = 0x12bd0dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x77c96cu;
    { uint32_t ea = 0x12bd0e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x77cadcu;
    { uint32_t ea = 0x12bd0f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x77c954u;
    { uint32_t ea = 0x12bd100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
L_12bd100:;
    c->r[7] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[7] - 0x2cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd160; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] - 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_12bd198; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_12bd1b8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd6ac; }
    { uint32_t ea = c->r[7] - 0x23u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[2] = c->r[13] + 0xb0u;
    c->r[14] = 0x12bd15cu; f_2c1708(c);
    goto L_12bd258;
L_12bd160:;
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_12bd180; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd6ac; }
    c->r[1] = 0x1u;
    goto L_12bd18c;
L_12bd180:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd6ac; }
    c->r[1] = 0x0u;
L_12bd18c:;
    c->r[14] = 0x12bd190u; f_52a400(c);
    { uint32_t ea = c->r[7] - 0x30u; ST32(ea, c->r[9]); }
    goto L_12bd6ac;
L_12bd198:;
    { uint32_t ea = c->r[7] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    goto L_12bd254;
L_12bd1b8:;
    c->v.s[16] = LD32(c->r[7] - 16u);
    c->v.s[18] = LD32(c->r[7] - 12u);
    c->v.s[20] = LD32(c->r[7] - 8u);
    { uint32_t ea = c->r[7] - 0x23u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[2] = c->r[13] + 0x60u;
    c->r[14] = 0x12bd1d4u; f_2c1660(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    c->v.s[30] = LD32(c->r[13] + 136u);
    c->v.s[17] = LD32(c->r[13] + 132u);
    c->v.s[19] = LD32(c->r[13] + 128u);
    c->v.s[21] = LD32(c->r[13] + 120u);
    c->v.s[23] = LD32(c->r[13] + 116u);
    c->v.s[25] = LD32(c->r[13] + 96u);
    c->v.s[27] = LD32(c->r[13] + 100u);
    c->v.s[29] = LD32(c->r[13] + 104u);
    c->v.s[31] = LD32(c->r[13] + 112u);
    c->r[0] = c->r[10];
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[7] - 0x23u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x12bd20cu; f_2c1708(c);
    c->v.f[0] = c->v.f[18] * c->v.f[31];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[25]);
    c->v.s[6] = LD32(c->r[13] + 80u);
    c->v.f[2] = c->v.f[18] * c->v.f[23];
    c->v.f[4] = c->v.f[18] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[27]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[29]);
    c->v.s[8] = LD32(c->r[13] + 84u);
    c->v.s[10] = LD32(c->r[13] + 88u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[19]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[17]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[13] + 180u, c->v.s[2]);
    ST32(c->r[13] + 184u, c->v.s[0]);
L_12bd254:;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[9]); }
L_12bd258:;
    { uint32_t ea = c->r[4] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_12bd6ac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x12bd274u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x12bd298u: goto L_12bd298; case 0x12bd2a4u: goto L_12bd2a4; case 0x12bd32cu: goto L_12bd32c; case 0x12bd37cu: goto L_12bd37c; case 0x12bd394u: goto L_12bd394; case 0x12bd3a0u: goto L_12bd3a0; case 0x12bd3d4u: goto L_12bd3d4; case 0x12bd3f8u: goto L_12bd3f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_12bd298:;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    goto L_12bd554;
L_12bd2a4:;
    c->v.s[16] = LD32(c->r[7] + 32u);
    c->v.s[18] = LD32(c->r[7] + 36u);
    c->v.s[20] = LD32(c->r[7] + 40u);
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[2] = c->r[13] + 0x60u;
    c->r[14] = 0x12bd2c0u; f_2c1660(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    c->v.s[30] = LD32(c->r[13] + 136u);
    c->v.s[17] = LD32(c->r[13] + 132u);
    c->v.s[19] = LD32(c->r[13] + 128u);
    c->v.s[21] = LD32(c->r[13] + 120u);
    c->v.s[23] = LD32(c->r[13] + 116u);
    c->v.s[25] = LD32(c->r[13] + 96u);
    c->v.s[27] = LD32(c->r[13] + 100u);
    c->v.s[29] = LD32(c->r[13] + 104u);
    c->v.s[31] = LD32(c->r[13] + 112u);
    c->r[0] = c->r[10];
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x12bd2f8u; f_2c1708(c);
    c->v.f[0] = c->v.f[18] * c->v.f[31];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[25]);
    c->v.s[6] = LD32(c->r[13] + 80u);
    c->v.f[2] = c->v.f[18] * c->v.f[23];
    c->v.f[4] = c->v.f[18] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[27]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[29]);
    c->v.s[8] = LD32(c->r[13] + 84u);
    c->v.s[10] = LD32(c->r[13] + 88u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[19]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[17]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[30]);
    goto L_12bd510;
L_12bd32c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x12bd340u; f_12b1a48(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_12bd530; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_12bd54c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd55c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_12bd3cc;
L_12bd37c:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_12bd3cc;
L_12bd394:;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xd450u;
    goto L_12bd3a8;
L_12bd3a0:;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xd420u;
L_12bd3a8:;
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_12bd55c; }
L_12bd3b8:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
L_12bd3cc:;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    goto L_12bd528;
L_12bd3d4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x12bd3e8u; f_12b18f8(c);
    goto L_12bd55c;
L_12bd3f8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[18] = LD32(c->r[7] + 32u);
    c->v.s[20] = LD32(c->r[7] + 36u);
    c->v.s[16] = LD32(c->r[7] + 40u);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x12bd49cu; f_12b1908(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    c->v.s[30] = LD32(c->r[13] + 136u);
    c->v.s[17] = LD32(c->r[13] + 132u);
    c->v.s[19] = LD32(c->r[13] + 128u);
    c->v.s[21] = LD32(c->r[13] + 120u);
    c->v.s[23] = LD32(c->r[13] + 116u);
    c->v.s[25] = LD32(c->r[13] + 96u);
    c->v.s[27] = LD32(c->r[13] + 100u);
    c->v.s[29] = LD32(c->r[13] + 104u);
    c->v.s[31] = LD32(c->r[13] + 112u);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x12bd4e0u; f_12b18f8(c);
    c->v.f[0] = c->v.f[20] * c->v.f[31];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[25]);
    c->v.s[6] = LD32(c->r[13] + 80u);
    c->v.f[2] = c->v.f[20] * c->v.f[23];
    c->v.f[4] = c->v.f[20] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[27]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[29]);
    c->v.s[8] = LD32(c->r[13] + 84u);
    c->v.s[10] = LD32(c->r[13] + 88u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[19]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[17]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[30]);
L_12bd510:;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[13] + 164u, c->v.s[2]);
    ST32(c->r[13] + 168u, c->v.s[0]);
L_12bd528:;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[9]); }
    goto L_12bd55c;
L_12bd530:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x12bd540u; f_12b1edc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bd3b8; }
    goto L_12bd55c;
L_12bd54c:;
    c->r[0] = c->r[10];
    c->r[1] = 0x82u;
L_12bd554:;
    c->r[2] = c->r[13] + 0xa0u;
    c->r[14] = 0x12bd55cu; f_2c1708(c);
L_12bd55c:;
    { uint32_t ea = c->r[7] - 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_12bd590; }
    { uint32_t ea = c->r[7] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[3] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x12bd584u; f_12be768(c);
    { uint32_t ea = c->r[7] - 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_12bd6ac; }
L_12bd590:;
    { uint32_t ea = c->r[5] + 0x150u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_12bd6ac; }
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[6] = LD32(c->r[13] + 160u);
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[8] = LD32(c->r[13] + 164u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.s[10] = LD32(c->r[13] + 168u);
    c->v.f[16] = c->v.f[6] - c->v.f[0];
    c->v.f[30] = c->v.f[8] - c->v.f[2];
    c->v.f[18] = c->v.f[10] - c->v.f[4];
    c->v.f[17] = c->v.f[16] * c->v.f[16];
    c->v.f[19] = c->v.f[18] * c->v.f[18];
    c->v.s[0] = c->v.s[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + c->v.f[19];
    c->v.f[20] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_12bd5ec; }
    c->r[14] = 0x12bd5e8u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_12bd5ec:;
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[18];
    c->r[14] = 0x12bd5f8u; f_15efd70(c);
    c->v.s[2] = c->v.s[24];
    c->v.f[16] = c->v.f[20] / c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.f[0] = c->v.f[17] + c->v.f[19];
    c->v.f[1] = sqrtf(c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[2];
    c->r[10] = (uint32_t)(uint16_t)(c->r[0]);
    vfp_cmp_f(c, c->v.f[1], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_12bd62c; }
    c->r[14] = 0x12bd628u; f_15efddc(c);
    c->v.s[1] = c->v.s[0];
L_12bd62c:;
    c->v.s[0] = c->v.s[30] ^ 0x80000000u;
    c->r[14] = 0x12bd634u; f_15efd70(c);
    c->v.s[2] = c->v.s[24];
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = 0x0u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->r[10];
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[5];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[0] * c->v.f[28];
    c->v.f[2] = c->v.f[2] * c->v.f[28];
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x64u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = 0x12bd688u; f_52a45c(c);
    c->r[0] = c->r[7];
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[10]); }
    ST32(c->r[7] + 104u, c->v.s[16]);
    { uint32_t ea = c->r[7] + 0x6cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x12bd6a4u; f_aa7dc4(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
L_12bd6ac:;
    c->r[6] = c->r[6] + 0x70u;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[6], 0x8c0u);
    if (COND_NE) { goto L_12bd100; }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_12bd6cc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3eeu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd58u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcd5cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd5du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcd80u;
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd81u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcdb0u;
    c->r[2] = 0x3f0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcdc8u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcdccu;
    c->r[2] = 0x901u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcdf0u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcdf1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0xce20u;
    goto L_12bab6c;
L_12bd750:;
    c->v.s[1] = 0x428c0000u;
    c->v.s[0] = 0x41f00000u;
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bd768u; f_2b0a60(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_12bd784; }
    c->r[0] = c->r[7] ^ 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bab70; }
L_12bd784:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3ebu; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb98u;
    c->r[1] = c->r[10] + c->r[1];
    if (COND_NE) { c->r[2] = 0x3ecu; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    goto L_12bab48;
L_12bd7a8:;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bd7bcu; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd850; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3eeu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd58u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcd5cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd5du;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcd80u;
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcd81u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcdb0u;
    c->r[2] = 0x3f0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcdc8u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcdccu;
    c->r[2] = 0x901u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0xcdf0u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcdf1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0xce20u;
L_12bd844:;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_12bab70;
L_12bd850:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[2] = 0x3ecu;
    (void)f_subs(c, c->r[7], 0x4u);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb98u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcb9cu;
    c->r[2] = 0x95u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0xcb9du;
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbc0u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xcbc1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[8]); }
    c->r[1] = 0xcbf0u;
    c->r[1] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_12bab70;
L_12bd8ac:;
    c->v.s[0] = 0x42b40000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bd8c4u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_12bd974; }
    c->v.s[0] = 0x430c0000u;
    c->v.s[1] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x12bd8e4u; f_2b0a60(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_12bd974; }
L_12bd8ec:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[1] = 0x3edu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc78u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcc7cu;
    c->r[1] = 0x95u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcc7du;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcca0u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcca1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xccd0u;
    c->r[1] = 0x3efu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcce8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xccecu;
    c->r[1] = 0x501u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcd10u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcd11u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xcd40u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bc698;
L_12bd974:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[1] = 0x3ecu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0xcb98u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcb9cu;
    c->r[1] = 0x9501u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0xcbc0u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xcbc1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0xcbf0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    goto L_12bc698;
L_12bd9b8:;
    c->r[5] = 0x1u;
    goto L_12bc698;
}
