#include "cpu.h"
#include "neon_rt.h"
void f_150b35c(Cpu *c);
void f_150b37c(Cpu *c);
void f_15efb7c(Cpu *restrict c) {
    FN_ENTER(0x15efb7cu);
L_15efb7c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[0];
    c->r[0] = 0xc07u;
    c->r[5] = c->r[3];
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_15efc70; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_CC) { goto L_15efc70; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x15efbbcu; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x1u;
    c->r[14] = 0x15efbc8u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x2u;
    c->r[14] = 0x15efbd4u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x3u;
    c->r[14] = 0x15efbe0u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[14] = 0x15efbecu; f_150b35c(c);
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x6u;
    c->r[14] = 0x15efbf8u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x7u;
    c->r[14] = 0x15efc04u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x8u;
    c->r[14] = 0x15efc10u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0x9u;
    c->r[14] = 0x15efc1cu; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0xau;
    c->r[14] = 0x15efc28u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0xbu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0xbu;
    c->r[14] = 0x15efc34u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0xcu;
    c->r[14] = 0x15efc40u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0xdu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0xdu;
    c->r[14] = 0x15efc4cu; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0xeu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0xeu;
    c->r[14] = 0x15efc58u; f_150b37c(c);
    { uint32_t ea = c->r[7] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + 0xfu;
    c->r[14] = 0x15efc64u; f_150b37c(c);
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_15efc70:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_15efc78(Cpu *restrict c) {
    FN_ENTER(0x15efc78u);
L_15efc78:;
    c->r[0] = 0x10u;
    return;
}
void f_15efc80(Cpu *restrict c) {
    FN_ENTER(0x15efc80u);
L_15efc80:;
    c->r[1] = 0x5555u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x55550000u;
    c->r[1] = c->r[1] & (c->r[0] >> 1);
    c->r[0] = c->r[0] - c->r[1];
    c->r[1] = 0x3333u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x33330000u;
    c->r[2] = c->r[0] & c->r[1];
    c->r[0] = c->r[1] & (c->r[0] >> 2);
    c->r[1] = 0xf0fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf0f0000u;
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + (c->r[0] >> 4);
    c->r[0] = c->r[0] & c->r[1];
    c->r[0] = c->r[0] + (c->r[0] >> 8);
    c->r[0] = c->r[0] + (c->r[0] >> 16);
    c->r[0] = c->r[0] & 0x3fu;
    return;
}
void f_15efcc4(Cpu *restrict c) {
    FN_ENTER(0x15efcc4u);
L_15efcc4:;
    c->r[2] = c->r[0];
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    c->r[1] = c->r[1] + 0x1u;
L_15efcd8:;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LE) { goto L_15efcf4; }
    c->r[3] = c->r[2] - 0x1u;
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_15efcd8; }
    return;
L_15efcf4:;
    c->r[0] = 0x0u - c->r[2];
    c->r[1] = 0x5555u;
    c->r[0] = c->r[2] & c->r[0];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x55550000u;
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = c->r[1] & (c->r[0] >> 1);
    c->r[0] = c->r[0] - c->r[1];
    c->r[1] = 0x3333u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x33330000u;
    c->r[2] = c->r[0] & c->r[1];
    c->r[0] = c->r[1] & (c->r[0] >> 2);
    c->r[1] = 0xf0fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf0f0000u;
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + (c->r[0] >> 4);
    c->r[0] = c->r[0] & c->r[1];
    c->r[0] = c->r[0] + (c->r[0] >> 8);
    c->r[0] = c->r[0] + (c->r[0] >> 16);
    c->r[0] = c->r[0] & 0x3fu;
    return;
}
void f_15efd44(Cpu *restrict c) {
    FN_ENTER(0x15efd44u);
L_15efd44:;
    { uint32_t ea = c->r[13] - 0x4u; ST32(ea, c->r[14]); c->r[13] = ea; }
    c->r[14] = 0x4482acu;
    c->r[14] = 0x15efd54u + c->r[14];
    { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD32(ea); c->r[14] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efd58(Cpu *restrict c) {
    FN_ENTER(0x15efd58u);
L_15efd58:;
    c->r[12] = 0x15efd60u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x2acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efd64(Cpu *restrict c) {
    FN_ENTER(0x15efd64u);
L_15efd64:;
    c->r[12] = 0x15efd6cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x2a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efd70(Cpu *restrict c) {
    FN_ENTER(0x15efd70u);
L_15efd70:;
    c->r[12] = 0x15efd78u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x29cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efd7c(Cpu *restrict c) {
    FN_ENTER(0x15efd7cu);
L_15efd7c:;
    c->r[12] = 0x15efd84u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x294u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efd88(Cpu *restrict c) {
    FN_ENTER(0x15efd88u);
L_15efd88:;
    c->r[12] = 0x15efd90u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x28cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efd94(Cpu *restrict c) {
    FN_ENTER(0x15efd94u);
L_15efd94:;
    c->r[12] = 0x15efd9cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x284u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efda0(Cpu *restrict c) {
    FN_ENTER(0x15efda0u);
L_15efda0:;
    c->r[12] = 0x15efda8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x27cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efdac(Cpu *restrict c) {
    FN_ENTER(0x15efdacu);
L_15efdac:;
    c->r[12] = 0x15efdb4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x274u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efdb8(Cpu *restrict c) {
    FN_ENTER(0x15efdb8u);
L_15efdb8:;
    c->r[12] = 0x15efdc0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x26cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efdc4(Cpu *restrict c) {
    FN_ENTER(0x15efdc4u);
L_15efdc4:;
    c->r[12] = 0x15efdccu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x264u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efdd0(Cpu *restrict c) {
    FN_ENTER(0x15efdd0u);
L_15efdd0:;
    c->r[12] = 0x15efdd8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x25cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efddc(Cpu *restrict c) {
    FN_ENTER(0x15efddcu);
L_15efddc:;
    c->r[12] = 0x15efde4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x254u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efde8(Cpu *restrict c) {
    FN_ENTER(0x15efde8u);
L_15efde8:;
    c->r[12] = 0x15efdf0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x24cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efdf4(Cpu *restrict c) {
    FN_ENTER(0x15efdf4u);
L_15efdf4:;
    c->r[12] = 0x15efdfcu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x244u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe00(Cpu *restrict c) {
    FN_ENTER(0x15efe00u);
L_15efe00:;
    c->r[12] = 0x15efe08u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x23cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe0c(Cpu *restrict c) {
    FN_ENTER(0x15efe0cu);
L_15efe0c:;
    c->r[12] = 0x15efe14u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x234u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe18(Cpu *restrict c) {
    FN_ENTER(0x15efe18u);
L_15efe18:;
    c->r[12] = 0x15efe20u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x22cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe24(Cpu *restrict c) {
    FN_ENTER(0x15efe24u);
L_15efe24:;
    c->r[12] = 0x15efe2cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x224u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe30(Cpu *restrict c) {
    FN_ENTER(0x15efe30u);
L_15efe30:;
    c->r[12] = 0x15efe38u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x21cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe3c(Cpu *restrict c) {
    FN_ENTER(0x15efe3cu);
L_15efe3c:;
    c->r[12] = 0x15efe44u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x214u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe48(Cpu *restrict c) {
    FN_ENTER(0x15efe48u);
L_15efe48:;
    c->r[12] = 0x15efe50u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x20cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe54(Cpu *restrict c) {
    FN_ENTER(0x15efe54u);
L_15efe54:;
    c->r[12] = 0x15efe5cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x204u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe60(Cpu *restrict c) {
    FN_ENTER(0x15efe60u);
L_15efe60:;
    c->r[12] = 0x15efe68u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe6c(Cpu *restrict c) {
    FN_ENTER(0x15efe6cu);
L_15efe6c:;
    c->r[12] = 0x15efe74u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe78(Cpu *restrict c) {
    FN_ENTER(0x15efe78u);
L_15efe78:;
    c->r[12] = 0x15efe80u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe84(Cpu *restrict c) {
    FN_ENTER(0x15efe84u);
L_15efe84:;
    c->r[12] = 0x15efe8cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe90(Cpu *restrict c) {
    FN_ENTER(0x15efe90u);
L_15efe90:;
    c->r[12] = 0x15efe98u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efe9c(Cpu *restrict c) {
    FN_ENTER(0x15efe9cu);
L_15efe9c:;
    c->r[12] = 0x15efea4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efea8(Cpu *restrict c) {
    FN_ENTER(0x15efea8u);
L_15efea8:;
    c->r[12] = 0x15efeb0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efeb4(Cpu *restrict c) {
    FN_ENTER(0x15efeb4u);
L_15efeb4:;
    c->r[12] = 0x15efebcu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efec0(Cpu *restrict c) {
    FN_ENTER(0x15efec0u);
L_15efec0:;
    c->r[12] = 0x15efec8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efecc(Cpu *restrict c) {
    FN_ENTER(0x15efeccu);
L_15efecc:;
    c->r[12] = 0x15efed4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efed8(Cpu *restrict c) {
    FN_ENTER(0x15efed8u);
L_15efed8:;
    c->r[12] = 0x15efee0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efee4(Cpu *restrict c) {
    FN_ENTER(0x15efee4u);
L_15efee4:;
    c->r[12] = 0x15efeecu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efef0(Cpu *restrict c) {
    FN_ENTER(0x15efef0u);
L_15efef0:;
    c->r[12] = 0x15efef8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x19cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efefc(Cpu *restrict c) {
    FN_ENTER(0x15efefcu);
L_15efefc:;
    c->r[12] = 0x15eff04u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x194u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff08(Cpu *restrict c) {
    FN_ENTER(0x15eff08u);
L_15eff08:;
    c->r[12] = 0x15eff10u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x18cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff14(Cpu *restrict c) {
    FN_ENTER(0x15eff14u);
L_15eff14:;
    c->r[12] = 0x15eff1cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x184u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff20(Cpu *restrict c) {
    FN_ENTER(0x15eff20u);
L_15eff20:;
    c->r[12] = 0x15eff28u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x17cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff2c(Cpu *restrict c) {
    FN_ENTER(0x15eff2cu);
L_15eff2c:;
    c->r[12] = 0x15eff34u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x174u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff38(Cpu *restrict c) {
    FN_ENTER(0x15eff38u);
L_15eff38:;
    c->r[12] = 0x15eff40u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x16cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff44(Cpu *restrict c) {
    FN_ENTER(0x15eff44u);
L_15eff44:;
    c->r[12] = 0x15eff4cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x164u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff50(Cpu *restrict c) {
    FN_ENTER(0x15eff50u);
L_15eff50:;
    c->r[12] = 0x15eff58u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x15cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff5c(Cpu *restrict c) {
    FN_ENTER(0x15eff5cu);
L_15eff5c:;
    c->r[12] = 0x15eff64u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x154u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff68(Cpu *restrict c) {
    FN_ENTER(0x15eff68u);
L_15eff68:;
    c->r[12] = 0x15eff70u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x14cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff80(Cpu *restrict c) {
    FN_ENTER(0x15eff80u);
L_15eff80:;
    c->r[12] = 0x15eff88u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x13cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff8c(Cpu *restrict c) {
    FN_ENTER(0x15eff8cu);
L_15eff8c:;
    c->r[12] = 0x15eff94u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x134u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15eff98(Cpu *restrict c) {
    FN_ENTER(0x15eff98u);
L_15eff98:;
    c->r[12] = 0x15effa0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x12cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effa4(Cpu *restrict c) {
    FN_ENTER(0x15effa4u);
L_15effa4:;
    c->r[12] = 0x15effacu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x124u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effb0(Cpu *restrict c) {
    FN_ENTER(0x15effb0u);
L_15effb0:;
    c->r[12] = 0x15effb8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x11cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effbc(Cpu *restrict c) {
    FN_ENTER(0x15effbcu);
L_15effbc:;
    c->r[12] = 0x15effc4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x114u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effc8(Cpu *restrict c) {
    FN_ENTER(0x15effc8u);
L_15effc8:;
    c->r[12] = 0x15effd0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x10cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effd4(Cpu *restrict c) {
    FN_ENTER(0x15effd4u);
L_15effd4:;
    c->r[12] = 0x15effdcu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x104u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effe0(Cpu *restrict c) {
    FN_ENTER(0x15effe0u);
L_15effe0:;
    c->r[12] = 0x15effe8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15effec(Cpu *restrict c) {
    FN_ENTER(0x15effecu);
L_15effec:;
    c->r[12] = 0x15efff4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15efff8(Cpu *restrict c) {
    FN_ENTER(0x15efff8u);
L_15efff8:;
    c->r[12] = 0x15f0000u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0004(Cpu *restrict c) {
    FN_ENTER(0x15f0004u);
L_15f0004:;
    c->r[12] = 0x15f000cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xe4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0010(Cpu *restrict c) {
    FN_ENTER(0x15f0010u);
L_15f0010:;
    c->r[12] = 0x15f0018u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xdcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f001c(Cpu *restrict c) {
    FN_ENTER(0x15f001cu);
L_15f001c:;
    c->r[12] = 0x15f0024u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0028(Cpu *restrict c) {
    FN_ENTER(0x15f0028u);
L_15f0028:;
    c->r[12] = 0x15f0030u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0034(Cpu *restrict c) {
    FN_ENTER(0x15f0034u);
L_15f0034:;
    c->r[12] = 0x15f003cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0040(Cpu *restrict c) {
    FN_ENTER(0x15f0040u);
L_15f0040:;
    c->r[12] = 0x15f0048u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f004c(Cpu *restrict c) {
    FN_ENTER(0x15f004cu);
L_15f004c:;
    c->r[12] = 0x15f0054u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0058(Cpu *restrict c) {
    FN_ENTER(0x15f0058u);
L_15f0058:;
    c->r[12] = 0x15f0060u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0064(Cpu *restrict c) {
    FN_ENTER(0x15f0064u);
L_15f0064:;
    c->r[12] = 0x15f006cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xa4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0070(Cpu *restrict c) {
    FN_ENTER(0x15f0070u);
L_15f0070:;
    c->r[12] = 0x15f0078u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f007c(Cpu *restrict c) {
    FN_ENTER(0x15f007cu);
L_15f007c:;
    c->r[12] = 0x15f0084u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0088(Cpu *restrict c) {
    FN_ENTER(0x15f0088u);
L_15f0088:;
    c->r[12] = 0x15f0090u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0094(Cpu *restrict c) {
    FN_ENTER(0x15f0094u);
L_15f0094:;
    c->r[12] = 0x15f009cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00a0(Cpu *restrict c) {
    FN_ENTER(0x15f00a0u);
L_15f00a0:;
    c->r[12] = 0x15f00a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00ac(Cpu *restrict c) {
    FN_ENTER(0x15f00acu);
L_15f00ac:;
    c->r[12] = 0x15f00b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00b8(Cpu *restrict c) {
    FN_ENTER(0x15f00b8u);
L_15f00b8:;
    c->r[12] = 0x15f00c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00c4(Cpu *restrict c) {
    FN_ENTER(0x15f00c4u);
L_15f00c4:;
    c->r[12] = 0x15f00ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00d0(Cpu *restrict c) {
    FN_ENTER(0x15f00d0u);
L_15f00d0:;
    c->r[12] = 0x15f00d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00dc(Cpu *restrict c) {
    FN_ENTER(0x15f00dcu);
L_15f00dc:;
    c->r[12] = 0x15f00e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00e8(Cpu *restrict c) {
    FN_ENTER(0x15f00e8u);
L_15f00e8:;
    c->r[12] = 0x15f00f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f00f4(Cpu *restrict c) {
    FN_ENTER(0x15f00f4u);
L_15f00f4:;
    c->r[12] = 0x15f00fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0100(Cpu *restrict c) {
    FN_ENTER(0x15f0100u);
L_15f0100:;
    c->r[12] = 0x15f0108u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f010c(Cpu *restrict c) {
    FN_ENTER(0x15f010cu);
L_15f010c:;
    c->r[12] = 0x15f0114u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0118(Cpu *restrict c) {
    FN_ENTER(0x15f0118u);
L_15f0118:;
    c->r[12] = 0x15f0120u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0124(Cpu *restrict c) {
    FN_ENTER(0x15f0124u);
L_15f0124:;
    c->r[12] = 0x15f012cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0130(Cpu *restrict c) {
    FN_ENTER(0x15f0130u);
L_15f0130:;
    c->r[12] = 0x15f0138u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f013c(Cpu *restrict c) {
    FN_ENTER(0x15f013cu);
L_15f013c:;
    c->r[12] = 0x15f0144u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0148(Cpu *restrict c) {
    FN_ENTER(0x15f0148u);
L_15f0148:;
    c->r[12] = 0x15f0150u + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0154(Cpu *restrict c) {
    FN_ENTER(0x15f0154u);
L_15f0154:;
    c->r[12] = 0x15f015cu + 0x400000u;
    c->r[12] = c->r[12] + 0x48000u;
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0160(Cpu *restrict c) {
    FN_ENTER(0x15f0160u);
L_15f0160:;
    c->r[12] = 0x15f0168u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xffcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f016c(Cpu *restrict c) {
    FN_ENTER(0x15f016cu);
L_15f016c:;
    c->r[12] = 0x15f0174u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xff4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0178(Cpu *restrict c) {
    FN_ENTER(0x15f0178u);
L_15f0178:;
    c->r[12] = 0x15f0180u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0184(Cpu *restrict c) {
    FN_ENTER(0x15f0184u);
L_15f0184:;
    c->r[12] = 0x15f018cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfe4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0190(Cpu *restrict c) {
    FN_ENTER(0x15f0190u);
L_15f0190:;
    c->r[12] = 0x15f0198u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfdcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f019c(Cpu *restrict c) {
    FN_ENTER(0x15f019cu);
L_15f019c:;
    c->r[12] = 0x15f01a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01a8(Cpu *restrict c) {
    FN_ENTER(0x15f01a8u);
L_15f01a8:;
    c->r[12] = 0x15f01b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01b4(Cpu *restrict c) {
    FN_ENTER(0x15f01b4u);
L_15f01b4:;
    c->r[12] = 0x15f01bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01c0(Cpu *restrict c) {
    FN_ENTER(0x15f01c0u);
L_15f01c0:;
    c->r[12] = 0x15f01c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01cc(Cpu *restrict c) {
    FN_ENTER(0x15f01ccu);
L_15f01cc:;
    c->r[12] = 0x15f01d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01d8(Cpu *restrict c) {
    FN_ENTER(0x15f01d8u);
L_15f01d8:;
    c->r[12] = 0x15f01e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01e4(Cpu *restrict c) {
    FN_ENTER(0x15f01e4u);
L_15f01e4:;
    c->r[12] = 0x15f01ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfa4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01f0(Cpu *restrict c) {
    FN_ENTER(0x15f01f0u);
L_15f01f0:;
    c->r[12] = 0x15f01f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f01fc(Cpu *restrict c) {
    FN_ENTER(0x15f01fcu);
L_15f01fc:;
    c->r[12] = 0x15f0204u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0208(Cpu *restrict c) {
    FN_ENTER(0x15f0208u);
L_15f0208:;
    c->r[12] = 0x15f0210u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0214(Cpu *restrict c) {
    FN_ENTER(0x15f0214u);
L_15f0214:;
    c->r[12] = 0x15f021cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0220(Cpu *restrict c) {
    FN_ENTER(0x15f0220u);
L_15f0220:;
    c->r[12] = 0x15f0228u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f022c(Cpu *restrict c) {
    FN_ENTER(0x15f022cu);
L_15f022c:;
    c->r[12] = 0x15f0234u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0238(Cpu *restrict c) {
    FN_ENTER(0x15f0238u);
L_15f0238:;
    c->r[12] = 0x15f0240u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0244(Cpu *restrict c) {
    FN_ENTER(0x15f0244u);
L_15f0244:;
    c->r[12] = 0x15f024cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0250(Cpu *restrict c) {
    FN_ENTER(0x15f0250u);
L_15f0250:;
    c->r[12] = 0x15f0258u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f025c(Cpu *restrict c) {
    FN_ENTER(0x15f025cu);
L_15f025c:;
    c->r[12] = 0x15f0264u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0268(Cpu *restrict c) {
    FN_ENTER(0x15f0268u);
L_15f0268:;
    c->r[12] = 0x15f0270u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0274(Cpu *restrict c) {
    FN_ENTER(0x15f0274u);
L_15f0274:;
    c->r[12] = 0x15f027cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0280(Cpu *restrict c) {
    FN_ENTER(0x15f0280u);
L_15f0280:;
    c->r[12] = 0x15f0288u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f028c(Cpu *restrict c) {
    FN_ENTER(0x15f028cu);
L_15f028c:;
    c->r[12] = 0x15f0294u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0298(Cpu *restrict c) {
    FN_ENTER(0x15f0298u);
L_15f0298:;
    c->r[12] = 0x15f02a0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02a4(Cpu *restrict c) {
    FN_ENTER(0x15f02a4u);
L_15f02a4:;
    c->r[12] = 0x15f02acu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02b0(Cpu *restrict c) {
    FN_ENTER(0x15f02b0u);
L_15f02b0:;
    c->r[12] = 0x15f02b8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02bc(Cpu *restrict c) {
    FN_ENTER(0x15f02bcu);
L_15f02bc:;
    c->r[12] = 0x15f02c4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02c8(Cpu *restrict c) {
    FN_ENTER(0x15f02c8u);
L_15f02c8:;
    c->r[12] = 0x15f02d0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02d4(Cpu *restrict c) {
    FN_ENTER(0x15f02d4u);
L_15f02d4:;
    c->r[12] = 0x15f02dcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02e0(Cpu *restrict c) {
    FN_ENTER(0x15f02e0u);
L_15f02e0:;
    c->r[12] = 0x15f02e8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xefcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02ec(Cpu *restrict c) {
    FN_ENTER(0x15f02ecu);
L_15f02ec:;
    c->r[12] = 0x15f02f4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xef4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f02f8(Cpu *restrict c) {
    FN_ENTER(0x15f02f8u);
L_15f02f8:;
    c->r[12] = 0x15f0300u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xeecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0304(Cpu *restrict c) {
    FN_ENTER(0x15f0304u);
L_15f0304:;
    c->r[12] = 0x15f030cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xee4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0310(Cpu *restrict c) {
    FN_ENTER(0x15f0310u);
L_15f0310:;
    c->r[12] = 0x15f0318u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xedcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f031c(Cpu *restrict c) {
    FN_ENTER(0x15f031cu);
L_15f031c:;
    c->r[12] = 0x15f0324u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xed4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0328(Cpu *restrict c) {
    FN_ENTER(0x15f0328u);
L_15f0328:;
    c->r[12] = 0x15f0330u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xeccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0334(Cpu *restrict c) {
    FN_ENTER(0x15f0334u);
L_15f0334:;
    c->r[12] = 0x15f033cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xec4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0340(Cpu *restrict c) {
    FN_ENTER(0x15f0340u);
L_15f0340:;
    c->r[12] = 0x15f0348u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xebcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f034c(Cpu *restrict c) {
    FN_ENTER(0x15f034cu);
L_15f034c:;
    c->r[12] = 0x15f0354u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xeb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0358(Cpu *restrict c) {
    FN_ENTER(0x15f0358u);
L_15f0358:;
    c->r[12] = 0x15f0360u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xeacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0364(Cpu *restrict c) {
    FN_ENTER(0x15f0364u);
L_15f0364:;
    c->r[12] = 0x15f036cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xea4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0370(Cpu *restrict c) {
    FN_ENTER(0x15f0370u);
L_15f0370:;
    c->r[12] = 0x15f0378u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f037c(Cpu *restrict c) {
    FN_ENTER(0x15f037cu);
L_15f037c:;
    c->r[12] = 0x15f0384u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0388(Cpu *restrict c) {
    FN_ENTER(0x15f0388u);
L_15f0388:;
    c->r[12] = 0x15f0390u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0394(Cpu *restrict c) {
    FN_ENTER(0x15f0394u);
L_15f0394:;
    c->r[12] = 0x15f039cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03a0(Cpu *restrict c) {
    FN_ENTER(0x15f03a0u);
L_15f03a0:;
    c->r[12] = 0x15f03a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03ac(Cpu *restrict c) {
    FN_ENTER(0x15f03acu);
L_15f03ac:;
    c->r[12] = 0x15f03b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03b8(Cpu *restrict c) {
    FN_ENTER(0x15f03b8u);
L_15f03b8:;
    c->r[12] = 0x15f03c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03c4(Cpu *restrict c) {
    FN_ENTER(0x15f03c4u);
L_15f03c4:;
    c->r[12] = 0x15f03ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03d0(Cpu *restrict c) {
    FN_ENTER(0x15f03d0u);
L_15f03d0:;
    c->r[12] = 0x15f03d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03dc(Cpu *restrict c) {
    FN_ENTER(0x15f03dcu);
L_15f03dc:;
    c->r[12] = 0x15f03e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03e8(Cpu *restrict c) {
    FN_ENTER(0x15f03e8u);
L_15f03e8:;
    c->r[12] = 0x15f03f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f03f4(Cpu *restrict c) {
    FN_ENTER(0x15f03f4u);
L_15f03f4:;
    c->r[12] = 0x15f03fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0400(Cpu *restrict c) {
    FN_ENTER(0x15f0400u);
L_15f0400:;
    c->r[12] = 0x15f0408u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f040c(Cpu *restrict c) {
    FN_ENTER(0x15f040cu);
L_15f040c:;
    c->r[12] = 0x15f0414u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0418(Cpu *restrict c) {
    FN_ENTER(0x15f0418u);
L_15f0418:;
    c->r[12] = 0x15f0420u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0424(Cpu *restrict c) {
    FN_ENTER(0x15f0424u);
L_15f0424:;
    c->r[12] = 0x15f042cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0430(Cpu *restrict c) {
    FN_ENTER(0x15f0430u);
L_15f0430:;
    c->r[12] = 0x15f0438u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f043c(Cpu *restrict c) {
    FN_ENTER(0x15f043cu);
L_15f043c:;
    c->r[12] = 0x15f0444u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0448(Cpu *restrict c) {
    FN_ENTER(0x15f0448u);
L_15f0448:;
    c->r[12] = 0x15f0450u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0454(Cpu *restrict c) {
    FN_ENTER(0x15f0454u);
L_15f0454:;
    c->r[12] = 0x15f045cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0460(Cpu *restrict c) {
    FN_ENTER(0x15f0460u);
L_15f0460:;
    c->r[12] = 0x15f0468u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f046c(Cpu *restrict c) {
    FN_ENTER(0x15f046cu);
L_15f046c:;
    c->r[12] = 0x15f0474u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0478(Cpu *restrict c) {
    FN_ENTER(0x15f0478u);
L_15f0478:;
    c->r[12] = 0x15f0480u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0484(Cpu *restrict c) {
    FN_ENTER(0x15f0484u);
L_15f0484:;
    c->r[12] = 0x15f048cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xde4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0490(Cpu *restrict c) {
    FN_ENTER(0x15f0490u);
L_15f0490:;
    c->r[12] = 0x15f0498u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xddcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f049c(Cpu *restrict c) {
    FN_ENTER(0x15f049cu);
L_15f049c:;
    c->r[12] = 0x15f04a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04a8(Cpu *restrict c) {
    FN_ENTER(0x15f04a8u);
L_15f04a8:;
    c->r[12] = 0x15f04b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04b4(Cpu *restrict c) {
    FN_ENTER(0x15f04b4u);
L_15f04b4:;
    c->r[12] = 0x15f04bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04c0(Cpu *restrict c) {
    FN_ENTER(0x15f04c0u);
L_15f04c0:;
    c->r[12] = 0x15f04c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04cc(Cpu *restrict c) {
    FN_ENTER(0x15f04ccu);
L_15f04cc:;
    c->r[12] = 0x15f04d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04d8(Cpu *restrict c) {
    FN_ENTER(0x15f04d8u);
L_15f04d8:;
    c->r[12] = 0x15f04e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04e4(Cpu *restrict c) {
    FN_ENTER(0x15f04e4u);
L_15f04e4:;
    c->r[12] = 0x15f04ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xda4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04f0(Cpu *restrict c) {
    FN_ENTER(0x15f04f0u);
L_15f04f0:;
    c->r[12] = 0x15f04f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f04fc(Cpu *restrict c) {
    FN_ENTER(0x15f04fcu);
L_15f04fc:;
    c->r[12] = 0x15f0504u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0508(Cpu *restrict c) {
    FN_ENTER(0x15f0508u);
L_15f0508:;
    c->r[12] = 0x15f0510u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0514(Cpu *restrict c) {
    FN_ENTER(0x15f0514u);
L_15f0514:;
    c->r[12] = 0x15f051cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0520(Cpu *restrict c) {
    FN_ENTER(0x15f0520u);
L_15f0520:;
    c->r[12] = 0x15f0528u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f052c(Cpu *restrict c) {
    FN_ENTER(0x15f052cu);
L_15f052c:;
    c->r[12] = 0x15f0534u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0538(Cpu *restrict c) {
    FN_ENTER(0x15f0538u);
L_15f0538:;
    c->r[12] = 0x15f0540u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0544(Cpu *restrict c) {
    FN_ENTER(0x15f0544u);
L_15f0544:;
    c->r[12] = 0x15f054cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0550(Cpu *restrict c) {
    FN_ENTER(0x15f0550u);
L_15f0550:;
    c->r[12] = 0x15f0558u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f055c(Cpu *restrict c) {
    FN_ENTER(0x15f055cu);
L_15f055c:;
    c->r[12] = 0x15f0564u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0568(Cpu *restrict c) {
    FN_ENTER(0x15f0568u);
L_15f0568:;
    c->r[12] = 0x15f0570u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0574(Cpu *restrict c) {
    FN_ENTER(0x15f0574u);
L_15f0574:;
    c->r[12] = 0x15f057cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0580(Cpu *restrict c) {
    FN_ENTER(0x15f0580u);
L_15f0580:;
    c->r[12] = 0x15f0588u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f058c(Cpu *restrict c) {
    FN_ENTER(0x15f058cu);
L_15f058c:;
    c->r[12] = 0x15f0594u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0598(Cpu *restrict c) {
    FN_ENTER(0x15f0598u);
L_15f0598:;
    c->r[12] = 0x15f05a0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05a4(Cpu *restrict c) {
    FN_ENTER(0x15f05a4u);
L_15f05a4:;
    c->r[12] = 0x15f05acu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05b0(Cpu *restrict c) {
    FN_ENTER(0x15f05b0u);
L_15f05b0:;
    c->r[12] = 0x15f05b8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05bc(Cpu *restrict c) {
    FN_ENTER(0x15f05bcu);
L_15f05bc:;
    c->r[12] = 0x15f05c4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05c8(Cpu *restrict c) {
    FN_ENTER(0x15f05c8u);
L_15f05c8:;
    c->r[12] = 0x15f05d0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05d4(Cpu *restrict c) {
    FN_ENTER(0x15f05d4u);
L_15f05d4:;
    c->r[12] = 0x15f05dcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05e0(Cpu *restrict c) {
    FN_ENTER(0x15f05e0u);
L_15f05e0:;
    c->r[12] = 0x15f05e8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05ec(Cpu *restrict c) {
    FN_ENTER(0x15f05ecu);
L_15f05ec:;
    c->r[12] = 0x15f05f4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f05f8(Cpu *restrict c) {
    FN_ENTER(0x15f05f8u);
L_15f05f8:;
    c->r[12] = 0x15f0600u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0604(Cpu *restrict c) {
    FN_ENTER(0x15f0604u);
L_15f0604:;
    c->r[12] = 0x15f060cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xce4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0610(Cpu *restrict c) {
    FN_ENTER(0x15f0610u);
L_15f0610:;
    c->r[12] = 0x15f0618u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcdcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f061c(Cpu *restrict c) {
    FN_ENTER(0x15f061cu);
L_15f061c:;
    c->r[12] = 0x15f0624u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0628(Cpu *restrict c) {
    FN_ENTER(0x15f0628u);
L_15f0628:;
    c->r[12] = 0x15f0630u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0634(Cpu *restrict c) {
    FN_ENTER(0x15f0634u);
L_15f0634:;
    c->r[12] = 0x15f063cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0640(Cpu *restrict c) {
    FN_ENTER(0x15f0640u);
L_15f0640:;
    c->r[12] = 0x15f0648u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f064c(Cpu *restrict c) {
    FN_ENTER(0x15f064cu);
L_15f064c:;
    c->r[12] = 0x15f0654u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0658(Cpu *restrict c) {
    FN_ENTER(0x15f0658u);
L_15f0658:;
    c->r[12] = 0x15f0660u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0664(Cpu *restrict c) {
    FN_ENTER(0x15f0664u);
L_15f0664:;
    c->r[12] = 0x15f066cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xca4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0670(Cpu *restrict c) {
    FN_ENTER(0x15f0670u);
L_15f0670:;
    c->r[12] = 0x15f0678u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f067c(Cpu *restrict c) {
    FN_ENTER(0x15f067cu);
L_15f067c:;
    c->r[12] = 0x15f0684u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0688(Cpu *restrict c) {
    FN_ENTER(0x15f0688u);
L_15f0688:;
    c->r[12] = 0x15f0690u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0694(Cpu *restrict c) {
    FN_ENTER(0x15f0694u);
L_15f0694:;
    c->r[12] = 0x15f069cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06a0(Cpu *restrict c) {
    FN_ENTER(0x15f06a0u);
L_15f06a0:;
    c->r[12] = 0x15f06a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06ac(Cpu *restrict c) {
    FN_ENTER(0x15f06acu);
L_15f06ac:;
    c->r[12] = 0x15f06b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06b8(Cpu *restrict c) {
    FN_ENTER(0x15f06b8u);
L_15f06b8:;
    c->r[12] = 0x15f06c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06c4(Cpu *restrict c) {
    FN_ENTER(0x15f06c4u);
L_15f06c4:;
    c->r[12] = 0x15f06ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06d0(Cpu *restrict c) {
    FN_ENTER(0x15f06d0u);
L_15f06d0:;
    c->r[12] = 0x15f06d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06dc(Cpu *restrict c) {
    FN_ENTER(0x15f06dcu);
L_15f06dc:;
    c->r[12] = 0x15f06e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06e8(Cpu *restrict c) {
    FN_ENTER(0x15f06e8u);
L_15f06e8:;
    c->r[12] = 0x15f06f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f06f4(Cpu *restrict c) {
    FN_ENTER(0x15f06f4u);
L_15f06f4:;
    c->r[12] = 0x15f06fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0700(Cpu *restrict c) {
    FN_ENTER(0x15f0700u);
L_15f0700:;
    c->r[12] = 0x15f0708u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f070c(Cpu *restrict c) {
    FN_ENTER(0x15f070cu);
L_15f070c:;
    c->r[12] = 0x15f0714u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0718(Cpu *restrict c) {
    FN_ENTER(0x15f0718u);
L_15f0718:;
    c->r[12] = 0x15f0720u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0724(Cpu *restrict c) {
    FN_ENTER(0x15f0724u);
L_15f0724:;
    c->r[12] = 0x15f072cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0730(Cpu *restrict c) {
    FN_ENTER(0x15f0730u);
L_15f0730:;
    c->r[12] = 0x15f0738u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f073c(Cpu *restrict c) {
    FN_ENTER(0x15f073cu);
L_15f073c:;
    c->r[12] = 0x15f0744u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0748(Cpu *restrict c) {
    FN_ENTER(0x15f0748u);
L_15f0748:;
    c->r[12] = 0x15f0750u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0754(Cpu *restrict c) {
    FN_ENTER(0x15f0754u);
L_15f0754:;
    c->r[12] = 0x15f075cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0760(Cpu *restrict c) {
    FN_ENTER(0x15f0760u);
L_15f0760:;
    c->r[12] = 0x15f0768u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f076c(Cpu *restrict c) {
    FN_ENTER(0x15f076cu);
L_15f076c:;
    c->r[12] = 0x15f0774u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0778(Cpu *restrict c) {
    FN_ENTER(0x15f0778u);
L_15f0778:;
    c->r[12] = 0x15f0780u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0784(Cpu *restrict c) {
    FN_ENTER(0x15f0784u);
L_15f0784:;
    c->r[12] = 0x15f078cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbe4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0790(Cpu *restrict c) {
    FN_ENTER(0x15f0790u);
L_15f0790:;
    c->r[12] = 0x15f0798u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbdcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f079c(Cpu *restrict c) {
    FN_ENTER(0x15f079cu);
L_15f079c:;
    c->r[12] = 0x15f07a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07a8(Cpu *restrict c) {
    FN_ENTER(0x15f07a8u);
L_15f07a8:;
    c->r[12] = 0x15f07b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07b4(Cpu *restrict c) {
    FN_ENTER(0x15f07b4u);
L_15f07b4:;
    c->r[12] = 0x15f07bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07c0(Cpu *restrict c) {
    FN_ENTER(0x15f07c0u);
L_15f07c0:;
    c->r[12] = 0x15f07c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07cc(Cpu *restrict c) {
    FN_ENTER(0x15f07ccu);
L_15f07cc:;
    c->r[12] = 0x15f07d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07d8(Cpu *restrict c) {
    FN_ENTER(0x15f07d8u);
L_15f07d8:;
    c->r[12] = 0x15f07e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07e4(Cpu *restrict c) {
    FN_ENTER(0x15f07e4u);
L_15f07e4:;
    c->r[12] = 0x15f07ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xba4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07f0(Cpu *restrict c) {
    FN_ENTER(0x15f07f0u);
L_15f07f0:;
    c->r[12] = 0x15f07f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f07fc(Cpu *restrict c) {
    FN_ENTER(0x15f07fcu);
L_15f07fc:;
    c->r[12] = 0x15f0804u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0808(Cpu *restrict c) {
    FN_ENTER(0x15f0808u);
L_15f0808:;
    c->r[12] = 0x15f0810u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0814(Cpu *restrict c) {
    FN_ENTER(0x15f0814u);
L_15f0814:;
    c->r[12] = 0x15f081cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0820(Cpu *restrict c) {
    FN_ENTER(0x15f0820u);
L_15f0820:;
    c->r[12] = 0x15f0828u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f082c(Cpu *restrict c) {
    FN_ENTER(0x15f082cu);
L_15f082c:;
    c->r[12] = 0x15f0834u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0838(Cpu *restrict c) {
    FN_ENTER(0x15f0838u);
L_15f0838:;
    c->r[12] = 0x15f0840u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0844(Cpu *restrict c) {
    FN_ENTER(0x15f0844u);
L_15f0844:;
    c->r[12] = 0x15f084cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0850(Cpu *restrict c) {
    FN_ENTER(0x15f0850u);
L_15f0850:;
    c->r[12] = 0x15f0858u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f085c(Cpu *restrict c) {
    FN_ENTER(0x15f085cu);
L_15f085c:;
    c->r[12] = 0x15f0864u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0868(Cpu *restrict c) {
    FN_ENTER(0x15f0868u);
L_15f0868:;
    c->r[12] = 0x15f0870u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0874(Cpu *restrict c) {
    FN_ENTER(0x15f0874u);
L_15f0874:;
    c->r[12] = 0x15f087cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0880(Cpu *restrict c) {
    FN_ENTER(0x15f0880u);
L_15f0880:;
    c->r[12] = 0x15f0888u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f088c(Cpu *restrict c) {
    FN_ENTER(0x15f088cu);
L_15f088c:;
    c->r[12] = 0x15f0894u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0898(Cpu *restrict c) {
    FN_ENTER(0x15f0898u);
L_15f0898:;
    c->r[12] = 0x15f08a0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08a4(Cpu *restrict c) {
    FN_ENTER(0x15f08a4u);
L_15f08a4:;
    c->r[12] = 0x15f08acu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08b0(Cpu *restrict c) {
    FN_ENTER(0x15f08b0u);
L_15f08b0:;
    c->r[12] = 0x15f08b8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08bc(Cpu *restrict c) {
    FN_ENTER(0x15f08bcu);
L_15f08bc:;
    c->r[12] = 0x15f08c4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08c8(Cpu *restrict c) {
    FN_ENTER(0x15f08c8u);
L_15f08c8:;
    c->r[12] = 0x15f08d0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08d4(Cpu *restrict c) {
    FN_ENTER(0x15f08d4u);
L_15f08d4:;
    c->r[12] = 0x15f08dcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08e0(Cpu *restrict c) {
    FN_ENTER(0x15f08e0u);
L_15f08e0:;
    c->r[12] = 0x15f08e8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xafcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08ec(Cpu *restrict c) {
    FN_ENTER(0x15f08ecu);
L_15f08ec:;
    c->r[12] = 0x15f08f4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xaf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f08f8(Cpu *restrict c) {
    FN_ENTER(0x15f08f8u);
L_15f08f8:;
    c->r[12] = 0x15f0900u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xaecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0904(Cpu *restrict c) {
    FN_ENTER(0x15f0904u);
L_15f0904:;
    c->r[12] = 0x15f090cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xae4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0910(Cpu *restrict c) {
    FN_ENTER(0x15f0910u);
L_15f0910:;
    c->r[12] = 0x15f0918u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xadcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f091c(Cpu *restrict c) {
    FN_ENTER(0x15f091cu);
L_15f091c:;
    c->r[12] = 0x15f0924u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xad4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0928(Cpu *restrict c) {
    FN_ENTER(0x15f0928u);
L_15f0928:;
    c->r[12] = 0x15f0930u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xaccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0934(Cpu *restrict c) {
    FN_ENTER(0x15f0934u);
L_15f0934:;
    c->r[12] = 0x15f093cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xac4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0940(Cpu *restrict c) {
    FN_ENTER(0x15f0940u);
L_15f0940:;
    c->r[12] = 0x15f0948u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xabcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f094c(Cpu *restrict c) {
    FN_ENTER(0x15f094cu);
L_15f094c:;
    c->r[12] = 0x15f0954u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xab4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0958(Cpu *restrict c) {
    FN_ENTER(0x15f0958u);
L_15f0958:;
    c->r[12] = 0x15f0960u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xaacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0964(Cpu *restrict c) {
    FN_ENTER(0x15f0964u);
L_15f0964:;
    c->r[12] = 0x15f096cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xaa4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0970(Cpu *restrict c) {
    FN_ENTER(0x15f0970u);
L_15f0970:;
    c->r[12] = 0x15f0978u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f097c(Cpu *restrict c) {
    FN_ENTER(0x15f097cu);
L_15f097c:;
    c->r[12] = 0x15f0984u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0988(Cpu *restrict c) {
    FN_ENTER(0x15f0988u);
L_15f0988:;
    c->r[12] = 0x15f0990u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0994(Cpu *restrict c) {
    FN_ENTER(0x15f0994u);
L_15f0994:;
    c->r[12] = 0x15f099cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09a0(Cpu *restrict c) {
    FN_ENTER(0x15f09a0u);
L_15f09a0:;
    c->r[12] = 0x15f09a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09ac(Cpu *restrict c) {
    FN_ENTER(0x15f09acu);
L_15f09ac:;
    c->r[12] = 0x15f09b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09b8(Cpu *restrict c) {
    FN_ENTER(0x15f09b8u);
L_15f09b8:;
    c->r[12] = 0x15f09c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09c4(Cpu *restrict c) {
    FN_ENTER(0x15f09c4u);
L_15f09c4:;
    c->r[12] = 0x15f09ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09d0(Cpu *restrict c) {
    FN_ENTER(0x15f09d0u);
L_15f09d0:;
    c->r[12] = 0x15f09d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09dc(Cpu *restrict c) {
    FN_ENTER(0x15f09dcu);
L_15f09dc:;
    c->r[12] = 0x15f09e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09e8(Cpu *restrict c) {
    FN_ENTER(0x15f09e8u);
L_15f09e8:;
    c->r[12] = 0x15f09f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f09f4(Cpu *restrict c) {
    FN_ENTER(0x15f09f4u);
L_15f09f4:;
    c->r[12] = 0x15f09fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a00(Cpu *restrict c) {
    FN_ENTER(0x15f0a00u);
L_15f0a00:;
    c->r[12] = 0x15f0a08u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a0c(Cpu *restrict c) {
    FN_ENTER(0x15f0a0cu);
L_15f0a0c:;
    c->r[12] = 0x15f0a14u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a18(Cpu *restrict c) {
    FN_ENTER(0x15f0a18u);
L_15f0a18:;
    c->r[12] = 0x15f0a20u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a24(Cpu *restrict c) {
    FN_ENTER(0x15f0a24u);
L_15f0a24:;
    c->r[12] = 0x15f0a2cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a30(Cpu *restrict c) {
    FN_ENTER(0x15f0a30u);
L_15f0a30:;
    c->r[12] = 0x15f0a38u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a3c(Cpu *restrict c) {
    FN_ENTER(0x15f0a3cu);
L_15f0a3c:;
    c->r[12] = 0x15f0a44u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a48(Cpu *restrict c) {
    FN_ENTER(0x15f0a48u);
L_15f0a48:;
    c->r[12] = 0x15f0a50u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a54(Cpu *restrict c) {
    FN_ENTER(0x15f0a54u);
L_15f0a54:;
    c->r[12] = 0x15f0a5cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a60(Cpu *restrict c) {
    FN_ENTER(0x15f0a60u);
L_15f0a60:;
    c->r[12] = 0x15f0a68u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a6c(Cpu *restrict c) {
    FN_ENTER(0x15f0a6cu);
L_15f0a6c:;
    c->r[12] = 0x15f0a74u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a78(Cpu *restrict c) {
    FN_ENTER(0x15f0a78u);
L_15f0a78:;
    c->r[12] = 0x15f0a80u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a84(Cpu *restrict c) {
    FN_ENTER(0x15f0a84u);
L_15f0a84:;
    c->r[12] = 0x15f0a8cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a90(Cpu *restrict c) {
    FN_ENTER(0x15f0a90u);
L_15f0a90:;
    c->r[12] = 0x15f0a98u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0a9c(Cpu *restrict c) {
    FN_ENTER(0x15f0a9cu);
L_15f0a9c:;
    c->r[12] = 0x15f0aa4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0aa8(Cpu *restrict c) {
    FN_ENTER(0x15f0aa8u);
L_15f0aa8:;
    c->r[12] = 0x15f0ab0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ab4(Cpu *restrict c) {
    FN_ENTER(0x15f0ab4u);
L_15f0ab4:;
    c->r[12] = 0x15f0abcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ac0(Cpu *restrict c) {
    FN_ENTER(0x15f0ac0u);
L_15f0ac0:;
    c->r[12] = 0x15f0ac8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0acc(Cpu *restrict c) {
    FN_ENTER(0x15f0accu);
L_15f0acc:;
    c->r[12] = 0x15f0ad4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ad8(Cpu *restrict c) {
    FN_ENTER(0x15f0ad8u);
L_15f0ad8:;
    c->r[12] = 0x15f0ae0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ae4(Cpu *restrict c) {
    FN_ENTER(0x15f0ae4u);
L_15f0ae4:;
    c->r[12] = 0x15f0aecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0af0(Cpu *restrict c) {
    FN_ENTER(0x15f0af0u);
L_15f0af0:;
    c->r[12] = 0x15f0af8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x99cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0afc(Cpu *restrict c) {
    FN_ENTER(0x15f0afcu);
L_15f0afc:;
    c->r[12] = 0x15f0b04u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x994u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b08(Cpu *restrict c) {
    FN_ENTER(0x15f0b08u);
L_15f0b08:;
    c->r[12] = 0x15f0b10u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x98cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b14(Cpu *restrict c) {
    FN_ENTER(0x15f0b14u);
L_15f0b14:;
    c->r[12] = 0x15f0b1cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x984u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b20(Cpu *restrict c) {
    FN_ENTER(0x15f0b20u);
L_15f0b20:;
    c->r[12] = 0x15f0b28u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x97cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b2c(Cpu *restrict c) {
    FN_ENTER(0x15f0b2cu);
L_15f0b2c:;
    c->r[12] = 0x15f0b34u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x974u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b38(Cpu *restrict c) {
    FN_ENTER(0x15f0b38u);
L_15f0b38:;
    c->r[12] = 0x15f0b40u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x96cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b44(Cpu *restrict c) {
    FN_ENTER(0x15f0b44u);
L_15f0b44:;
    c->r[12] = 0x15f0b4cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x964u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b50(Cpu *restrict c) {
    FN_ENTER(0x15f0b50u);
L_15f0b50:;
    c->r[12] = 0x15f0b58u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x95cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b5c(Cpu *restrict c) {
    FN_ENTER(0x15f0b5cu);
L_15f0b5c:;
    c->r[12] = 0x15f0b64u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x954u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b68(Cpu *restrict c) {
    FN_ENTER(0x15f0b68u);
L_15f0b68:;
    c->r[12] = 0x15f0b70u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x94cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b74(Cpu *restrict c) {
    FN_ENTER(0x15f0b74u);
L_15f0b74:;
    c->r[12] = 0x15f0b7cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x944u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b80(Cpu *restrict c) {
    FN_ENTER(0x15f0b80u);
L_15f0b80:;
    c->r[12] = 0x15f0b88u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x93cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b8c(Cpu *restrict c) {
    FN_ENTER(0x15f0b8cu);
L_15f0b8c:;
    c->r[12] = 0x15f0b94u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x934u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0b98(Cpu *restrict c) {
    FN_ENTER(0x15f0b98u);
L_15f0b98:;
    c->r[12] = 0x15f0ba0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x92cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ba4(Cpu *restrict c) {
    FN_ENTER(0x15f0ba4u);
L_15f0ba4:;
    c->r[12] = 0x15f0bacu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x924u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0bb0(Cpu *restrict c) {
    FN_ENTER(0x15f0bb0u);
L_15f0bb0:;
    c->r[12] = 0x15f0bb8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x91cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0bbc(Cpu *restrict c) {
    FN_ENTER(0x15f0bbcu);
L_15f0bbc:;
    c->r[12] = 0x15f0bc4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x914u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0bc8(Cpu *restrict c) {
    FN_ENTER(0x15f0bc8u);
L_15f0bc8:;
    c->r[12] = 0x15f0bd0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x90cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0bd4(Cpu *restrict c) {
    FN_ENTER(0x15f0bd4u);
L_15f0bd4:;
    c->r[12] = 0x15f0bdcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x904u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0be0(Cpu *restrict c) {
    FN_ENTER(0x15f0be0u);
L_15f0be0:;
    c->r[12] = 0x15f0be8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0bec(Cpu *restrict c) {
    FN_ENTER(0x15f0becu);
L_15f0bec:;
    c->r[12] = 0x15f0bf4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0bf8(Cpu *restrict c) {
    FN_ENTER(0x15f0bf8u);
L_15f0bf8:;
    c->r[12] = 0x15f0c00u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c04(Cpu *restrict c) {
    FN_ENTER(0x15f0c04u);
L_15f0c04:;
    c->r[12] = 0x15f0c0cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c10(Cpu *restrict c) {
    FN_ENTER(0x15f0c10u);
L_15f0c10:;
    c->r[12] = 0x15f0c18u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c1c(Cpu *restrict c) {
    FN_ENTER(0x15f0c1cu);
L_15f0c1c:;
    c->r[12] = 0x15f0c24u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c28(Cpu *restrict c) {
    FN_ENTER(0x15f0c28u);
L_15f0c28:;
    c->r[12] = 0x15f0c30u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c34(Cpu *restrict c) {
    FN_ENTER(0x15f0c34u);
L_15f0c34:;
    c->r[12] = 0x15f0c3cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c40(Cpu *restrict c) {
    FN_ENTER(0x15f0c40u);
L_15f0c40:;
    c->r[12] = 0x15f0c48u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c4c(Cpu *restrict c) {
    FN_ENTER(0x15f0c4cu);
L_15f0c4c:;
    c->r[12] = 0x15f0c54u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c58(Cpu *restrict c) {
    FN_ENTER(0x15f0c58u);
L_15f0c58:;
    c->r[12] = 0x15f0c60u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c64(Cpu *restrict c) {
    FN_ENTER(0x15f0c64u);
L_15f0c64:;
    c->r[12] = 0x15f0c6cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c70(Cpu *restrict c) {
    FN_ENTER(0x15f0c70u);
L_15f0c70:;
    c->r[12] = 0x15f0c78u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x89cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c7c(Cpu *restrict c) {
    FN_ENTER(0x15f0c7cu);
L_15f0c7c:;
    c->r[12] = 0x15f0c84u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x894u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c88(Cpu *restrict c) {
    FN_ENTER(0x15f0c88u);
L_15f0c88:;
    c->r[12] = 0x15f0c90u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x88cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0c94(Cpu *restrict c) {
    FN_ENTER(0x15f0c94u);
L_15f0c94:;
    c->r[12] = 0x15f0c9cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x884u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ca0(Cpu *restrict c) {
    FN_ENTER(0x15f0ca0u);
L_15f0ca0:;
    c->r[12] = 0x15f0ca8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x87cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0cac(Cpu *restrict c) {
    FN_ENTER(0x15f0cacu);
L_15f0cac:;
    c->r[12] = 0x15f0cb4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x874u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0cb8(Cpu *restrict c) {
    FN_ENTER(0x15f0cb8u);
L_15f0cb8:;
    c->r[12] = 0x15f0cc0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x86cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0cc4(Cpu *restrict c) {
    FN_ENTER(0x15f0cc4u);
L_15f0cc4:;
    c->r[12] = 0x15f0cccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x864u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0cd0(Cpu *restrict c) {
    FN_ENTER(0x15f0cd0u);
L_15f0cd0:;
    c->r[12] = 0x15f0cd8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x85cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0cdc(Cpu *restrict c) {
    FN_ENTER(0x15f0cdcu);
L_15f0cdc:;
    c->r[12] = 0x15f0ce4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x854u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ce8(Cpu *restrict c) {
    FN_ENTER(0x15f0ce8u);
L_15f0ce8:;
    c->r[12] = 0x15f0cf0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x84cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0cf4(Cpu *restrict c) {
    FN_ENTER(0x15f0cf4u);
L_15f0cf4:;
    c->r[12] = 0x15f0cfcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x844u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d00(Cpu *restrict c) {
    FN_ENTER(0x15f0d00u);
L_15f0d00:;
    c->r[12] = 0x15f0d08u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x83cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d0c(Cpu *restrict c) {
    FN_ENTER(0x15f0d0cu);
L_15f0d0c:;
    c->r[12] = 0x15f0d14u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x834u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d18(Cpu *restrict c) {
    FN_ENTER(0x15f0d18u);
L_15f0d18:;
    c->r[12] = 0x15f0d20u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x82cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d24(Cpu *restrict c) {
    FN_ENTER(0x15f0d24u);
L_15f0d24:;
    c->r[12] = 0x15f0d2cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x824u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d30(Cpu *restrict c) {
    FN_ENTER(0x15f0d30u);
L_15f0d30:;
    c->r[12] = 0x15f0d38u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x81cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d3c(Cpu *restrict c) {
    FN_ENTER(0x15f0d3cu);
L_15f0d3c:;
    c->r[12] = 0x15f0d44u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x814u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d48(Cpu *restrict c) {
    FN_ENTER(0x15f0d48u);
L_15f0d48:;
    c->r[12] = 0x15f0d50u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x80cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d54(Cpu *restrict c) {
    FN_ENTER(0x15f0d54u);
L_15f0d54:;
    c->r[12] = 0x15f0d5cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x804u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d60(Cpu *restrict c) {
    FN_ENTER(0x15f0d60u);
L_15f0d60:;
    c->r[12] = 0x15f0d68u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d6c(Cpu *restrict c) {
    FN_ENTER(0x15f0d6cu);
L_15f0d6c:;
    c->r[12] = 0x15f0d74u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d78(Cpu *restrict c) {
    FN_ENTER(0x15f0d78u);
L_15f0d78:;
    c->r[12] = 0x15f0d80u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d84(Cpu *restrict c) {
    FN_ENTER(0x15f0d84u);
L_15f0d84:;
    c->r[12] = 0x15f0d8cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d90(Cpu *restrict c) {
    FN_ENTER(0x15f0d90u);
L_15f0d90:;
    c->r[12] = 0x15f0d98u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0d9c(Cpu *restrict c) {
    FN_ENTER(0x15f0d9cu);
L_15f0d9c:;
    c->r[12] = 0x15f0da4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0da8(Cpu *restrict c) {
    FN_ENTER(0x15f0da8u);
L_15f0da8:;
    c->r[12] = 0x15f0db0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0db4(Cpu *restrict c) {
    FN_ENTER(0x15f0db4u);
L_15f0db4:;
    c->r[12] = 0x15f0dbcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0dc0(Cpu *restrict c) {
    FN_ENTER(0x15f0dc0u);
L_15f0dc0:;
    c->r[12] = 0x15f0dc8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0dcc(Cpu *restrict c) {
    FN_ENTER(0x15f0dccu);
L_15f0dcc:;
    c->r[12] = 0x15f0dd4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0dd8(Cpu *restrict c) {
    FN_ENTER(0x15f0dd8u);
L_15f0dd8:;
    c->r[12] = 0x15f0de0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0de4(Cpu *restrict c) {
    FN_ENTER(0x15f0de4u);
L_15f0de4:;
    c->r[12] = 0x15f0decu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0df0(Cpu *restrict c) {
    FN_ENTER(0x15f0df0u);
L_15f0df0:;
    c->r[12] = 0x15f0df8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x79cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0dfc(Cpu *restrict c) {
    FN_ENTER(0x15f0dfcu);
L_15f0dfc:;
    c->r[12] = 0x15f0e04u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x794u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e08(Cpu *restrict c) {
    FN_ENTER(0x15f0e08u);
L_15f0e08:;
    c->r[12] = 0x15f0e10u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x78cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e14(Cpu *restrict c) {
    FN_ENTER(0x15f0e14u);
L_15f0e14:;
    c->r[12] = 0x15f0e1cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x784u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e20(Cpu *restrict c) {
    FN_ENTER(0x15f0e20u);
L_15f0e20:;
    c->r[12] = 0x15f0e28u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x77cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e2c(Cpu *restrict c) {
    FN_ENTER(0x15f0e2cu);
L_15f0e2c:;
    c->r[12] = 0x15f0e34u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x774u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e38(Cpu *restrict c) {
    FN_ENTER(0x15f0e38u);
L_15f0e38:;
    c->r[12] = 0x15f0e40u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x76cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e44(Cpu *restrict c) {
    FN_ENTER(0x15f0e44u);
L_15f0e44:;
    c->r[12] = 0x15f0e4cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x764u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e50(Cpu *restrict c) {
    FN_ENTER(0x15f0e50u);
L_15f0e50:;
    c->r[12] = 0x15f0e58u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x75cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e5c(Cpu *restrict c) {
    FN_ENTER(0x15f0e5cu);
L_15f0e5c:;
    c->r[12] = 0x15f0e64u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x754u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e68(Cpu *restrict c) {
    FN_ENTER(0x15f0e68u);
L_15f0e68:;
    c->r[12] = 0x15f0e70u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x74cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e74(Cpu *restrict c) {
    FN_ENTER(0x15f0e74u);
L_15f0e74:;
    c->r[12] = 0x15f0e7cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x744u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e80(Cpu *restrict c) {
    FN_ENTER(0x15f0e80u);
L_15f0e80:;
    c->r[12] = 0x15f0e88u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x73cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e8c(Cpu *restrict c) {
    FN_ENTER(0x15f0e8cu);
L_15f0e8c:;
    c->r[12] = 0x15f0e94u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x734u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0e98(Cpu *restrict c) {
    FN_ENTER(0x15f0e98u);
L_15f0e98:;
    c->r[12] = 0x15f0ea0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x72cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ea4(Cpu *restrict c) {
    FN_ENTER(0x15f0ea4u);
L_15f0ea4:;
    c->r[12] = 0x15f0eacu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x724u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0eb0(Cpu *restrict c) {
    FN_ENTER(0x15f0eb0u);
L_15f0eb0:;
    c->r[12] = 0x15f0eb8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x71cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ebc(Cpu *restrict c) {
    FN_ENTER(0x15f0ebcu);
L_15f0ebc:;
    c->r[12] = 0x15f0ec4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x714u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ec8(Cpu *restrict c) {
    FN_ENTER(0x15f0ec8u);
L_15f0ec8:;
    c->r[12] = 0x15f0ed0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x70cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ed4(Cpu *restrict c) {
    FN_ENTER(0x15f0ed4u);
L_15f0ed4:;
    c->r[12] = 0x15f0edcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x704u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ee0(Cpu *restrict c) {
    FN_ENTER(0x15f0ee0u);
L_15f0ee0:;
    c->r[12] = 0x15f0ee8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0eec(Cpu *restrict c) {
    FN_ENTER(0x15f0eecu);
L_15f0eec:;
    c->r[12] = 0x15f0ef4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ef8(Cpu *restrict c) {
    FN_ENTER(0x15f0ef8u);
L_15f0ef8:;
    c->r[12] = 0x15f0f00u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f04(Cpu *restrict c) {
    FN_ENTER(0x15f0f04u);
L_15f0f04:;
    c->r[12] = 0x15f0f0cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f10(Cpu *restrict c) {
    FN_ENTER(0x15f0f10u);
L_15f0f10:;
    c->r[12] = 0x15f0f18u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f1c(Cpu *restrict c) {
    FN_ENTER(0x15f0f1cu);
L_15f0f1c:;
    c->r[12] = 0x15f0f24u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f28(Cpu *restrict c) {
    FN_ENTER(0x15f0f28u);
L_15f0f28:;
    c->r[12] = 0x15f0f30u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f34(Cpu *restrict c) {
    FN_ENTER(0x15f0f34u);
L_15f0f34:;
    c->r[12] = 0x15f0f3cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f40(Cpu *restrict c) {
    FN_ENTER(0x15f0f40u);
L_15f0f40:;
    c->r[12] = 0x15f0f48u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f4c(Cpu *restrict c) {
    FN_ENTER(0x15f0f4cu);
L_15f0f4c:;
    c->r[12] = 0x15f0f54u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f58(Cpu *restrict c) {
    FN_ENTER(0x15f0f58u);
L_15f0f58:;
    c->r[12] = 0x15f0f60u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f64(Cpu *restrict c) {
    FN_ENTER(0x15f0f64u);
L_15f0f64:;
    c->r[12] = 0x15f0f6cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f70(Cpu *restrict c) {
    FN_ENTER(0x15f0f70u);
L_15f0f70:;
    c->r[12] = 0x15f0f78u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x69cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f7c(Cpu *restrict c) {
    FN_ENTER(0x15f0f7cu);
L_15f0f7c:;
    c->r[12] = 0x15f0f84u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x694u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f88(Cpu *restrict c) {
    FN_ENTER(0x15f0f88u);
L_15f0f88:;
    c->r[12] = 0x15f0f90u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x68cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0f94(Cpu *restrict c) {
    FN_ENTER(0x15f0f94u);
L_15f0f94:;
    c->r[12] = 0x15f0f9cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x684u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fa0(Cpu *restrict c) {
    FN_ENTER(0x15f0fa0u);
L_15f0fa0:;
    c->r[12] = 0x15f0fa8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x67cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fac(Cpu *restrict c) {
    FN_ENTER(0x15f0facu);
L_15f0fac:;
    c->r[12] = 0x15f0fb4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x674u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fb8(Cpu *restrict c) {
    FN_ENTER(0x15f0fb8u);
L_15f0fb8:;
    c->r[12] = 0x15f0fc0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x66cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fc4(Cpu *restrict c) {
    FN_ENTER(0x15f0fc4u);
L_15f0fc4:;
    c->r[12] = 0x15f0fccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x664u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fd0(Cpu *restrict c) {
    FN_ENTER(0x15f0fd0u);
L_15f0fd0:;
    c->r[12] = 0x15f0fd8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x65cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fdc(Cpu *restrict c) {
    FN_ENTER(0x15f0fdcu);
L_15f0fdc:;
    c->r[12] = 0x15f0fe4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x654u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0fe8(Cpu *restrict c) {
    FN_ENTER(0x15f0fe8u);
L_15f0fe8:;
    c->r[12] = 0x15f0ff0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x64cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f0ff4(Cpu *restrict c) {
    FN_ENTER(0x15f0ff4u);
L_15f0ff4:;
    c->r[12] = 0x15f0ffcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x644u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1000(Cpu *restrict c) {
    FN_ENTER(0x15f1000u);
L_15f1000:;
    c->r[12] = 0x15f1008u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x63cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f100c(Cpu *restrict c) {
    FN_ENTER(0x15f100cu);
L_15f100c:;
    c->r[12] = 0x15f1014u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x634u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1018(Cpu *restrict c) {
    FN_ENTER(0x15f1018u);
L_15f1018:;
    c->r[12] = 0x15f1020u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x62cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1024(Cpu *restrict c) {
    FN_ENTER(0x15f1024u);
L_15f1024:;
    c->r[12] = 0x15f102cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x624u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1030(Cpu *restrict c) {
    FN_ENTER(0x15f1030u);
L_15f1030:;
    c->r[12] = 0x15f1038u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x61cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f103c(Cpu *restrict c) {
    FN_ENTER(0x15f103cu);
L_15f103c:;
    c->r[12] = 0x15f1044u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x614u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1048(Cpu *restrict c) {
    FN_ENTER(0x15f1048u);
L_15f1048:;
    c->r[12] = 0x15f1050u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x60cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1054(Cpu *restrict c) {
    FN_ENTER(0x15f1054u);
L_15f1054:;
    c->r[12] = 0x15f105cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x604u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1060(Cpu *restrict c) {
    FN_ENTER(0x15f1060u);
L_15f1060:;
    c->r[12] = 0x15f1068u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f106c(Cpu *restrict c) {
    FN_ENTER(0x15f106cu);
L_15f106c:;
    c->r[12] = 0x15f1074u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1078(Cpu *restrict c) {
    FN_ENTER(0x15f1078u);
L_15f1078:;
    c->r[12] = 0x15f1080u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1084(Cpu *restrict c) {
    FN_ENTER(0x15f1084u);
L_15f1084:;
    c->r[12] = 0x15f108cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1090(Cpu *restrict c) {
    FN_ENTER(0x15f1090u);
L_15f1090:;
    c->r[12] = 0x15f1098u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f109c(Cpu *restrict c) {
    FN_ENTER(0x15f109cu);
L_15f109c:;
    c->r[12] = 0x15f10a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10a8(Cpu *restrict c) {
    FN_ENTER(0x15f10a8u);
L_15f10a8:;
    c->r[12] = 0x15f10b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10b4(Cpu *restrict c) {
    FN_ENTER(0x15f10b4u);
L_15f10b4:;
    c->r[12] = 0x15f10bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10c0(Cpu *restrict c) {
    FN_ENTER(0x15f10c0u);
L_15f10c0:;
    c->r[12] = 0x15f10c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10cc(Cpu *restrict c) {
    FN_ENTER(0x15f10ccu);
L_15f10cc:;
    c->r[12] = 0x15f10d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10d8(Cpu *restrict c) {
    FN_ENTER(0x15f10d8u);
L_15f10d8:;
    c->r[12] = 0x15f10e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10e4(Cpu *restrict c) {
    FN_ENTER(0x15f10e4u);
L_15f10e4:;
    c->r[12] = 0x15f10ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10f0(Cpu *restrict c) {
    FN_ENTER(0x15f10f0u);
L_15f10f0:;
    c->r[12] = 0x15f10f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x59cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f10fc(Cpu *restrict c) {
    FN_ENTER(0x15f10fcu);
L_15f10fc:;
    c->r[12] = 0x15f1104u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x594u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1108(Cpu *restrict c) {
    FN_ENTER(0x15f1108u);
L_15f1108:;
    c->r[12] = 0x15f1110u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x58cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1114(Cpu *restrict c) {
    FN_ENTER(0x15f1114u);
L_15f1114:;
    c->r[12] = 0x15f111cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x584u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1120(Cpu *restrict c) {
    FN_ENTER(0x15f1120u);
L_15f1120:;
    c->r[12] = 0x15f1128u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x57cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f112c(Cpu *restrict c) {
    FN_ENTER(0x15f112cu);
L_15f112c:;
    c->r[12] = 0x15f1134u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x574u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1138(Cpu *restrict c) {
    FN_ENTER(0x15f1138u);
L_15f1138:;
    c->r[12] = 0x15f1140u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x56cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1144(Cpu *restrict c) {
    FN_ENTER(0x15f1144u);
L_15f1144:;
    c->r[12] = 0x15f114cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x564u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1150(Cpu *restrict c) {
    FN_ENTER(0x15f1150u);
L_15f1150:;
    c->r[12] = 0x15f1158u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x55cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f115c(Cpu *restrict c) {
    FN_ENTER(0x15f115cu);
L_15f115c:;
    c->r[12] = 0x15f1164u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x554u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1168(Cpu *restrict c) {
    FN_ENTER(0x15f1168u);
L_15f1168:;
    c->r[12] = 0x15f1170u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x54cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1174(Cpu *restrict c) {
    FN_ENTER(0x15f1174u);
L_15f1174:;
    c->r[12] = 0x15f117cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x544u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1180(Cpu *restrict c) {
    FN_ENTER(0x15f1180u);
L_15f1180:;
    c->r[12] = 0x15f1188u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x53cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f118c(Cpu *restrict c) {
    FN_ENTER(0x15f118cu);
L_15f118c:;
    c->r[12] = 0x15f1194u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x534u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1198(Cpu *restrict c) {
    FN_ENTER(0x15f1198u);
L_15f1198:;
    c->r[12] = 0x15f11a0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x52cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11a4(Cpu *restrict c) {
    FN_ENTER(0x15f11a4u);
L_15f11a4:;
    c->r[12] = 0x15f11acu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x524u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11b0(Cpu *restrict c) {
    FN_ENTER(0x15f11b0u);
L_15f11b0:;
    c->r[12] = 0x15f11b8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x51cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11bc(Cpu *restrict c) {
    FN_ENTER(0x15f11bcu);
L_15f11bc:;
    c->r[12] = 0x15f11c4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x514u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11c8(Cpu *restrict c) {
    FN_ENTER(0x15f11c8u);
L_15f11c8:;
    c->r[12] = 0x15f11d0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x50cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11d4(Cpu *restrict c) {
    FN_ENTER(0x15f11d4u);
L_15f11d4:;
    c->r[12] = 0x15f11dcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x504u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11e0(Cpu *restrict c) {
    FN_ENTER(0x15f11e0u);
L_15f11e0:;
    c->r[12] = 0x15f11e8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11ec(Cpu *restrict c) {
    FN_ENTER(0x15f11ecu);
L_15f11ec:;
    c->r[12] = 0x15f11f4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f11f8(Cpu *restrict c) {
    FN_ENTER(0x15f11f8u);
L_15f11f8:;
    c->r[12] = 0x15f1200u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1204(Cpu *restrict c) {
    FN_ENTER(0x15f1204u);
L_15f1204:;
    c->r[12] = 0x15f120cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1210(Cpu *restrict c) {
    FN_ENTER(0x15f1210u);
L_15f1210:;
    c->r[12] = 0x15f1218u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f121c(Cpu *restrict c) {
    FN_ENTER(0x15f121cu);
L_15f121c:;
    c->r[12] = 0x15f1224u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1228(Cpu *restrict c) {
    FN_ENTER(0x15f1228u);
L_15f1228:;
    c->r[12] = 0x15f1230u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1234(Cpu *restrict c) {
    FN_ENTER(0x15f1234u);
L_15f1234:;
    c->r[12] = 0x15f123cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1240(Cpu *restrict c) {
    FN_ENTER(0x15f1240u);
L_15f1240:;
    c->r[12] = 0x15f1248u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f124c(Cpu *restrict c) {
    FN_ENTER(0x15f124cu);
L_15f124c:;
    c->r[12] = 0x15f1254u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1258(Cpu *restrict c) {
    FN_ENTER(0x15f1258u);
L_15f1258:;
    c->r[12] = 0x15f1260u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1264(Cpu *restrict c) {
    FN_ENTER(0x15f1264u);
L_15f1264:;
    c->r[12] = 0x15f126cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1270(Cpu *restrict c) {
    FN_ENTER(0x15f1270u);
L_15f1270:;
    c->r[12] = 0x15f1278u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x49cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f127c(Cpu *restrict c) {
    FN_ENTER(0x15f127cu);
L_15f127c:;
    c->r[12] = 0x15f1284u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x494u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1288(Cpu *restrict c) {
    FN_ENTER(0x15f1288u);
L_15f1288:;
    c->r[12] = 0x15f1290u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x48cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1294(Cpu *restrict c) {
    FN_ENTER(0x15f1294u);
L_15f1294:;
    c->r[12] = 0x15f129cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x484u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12a0(Cpu *restrict c) {
    FN_ENTER(0x15f12a0u);
L_15f12a0:;
    c->r[12] = 0x15f12a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x47cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12ac(Cpu *restrict c) {
    FN_ENTER(0x15f12acu);
L_15f12ac:;
    c->r[12] = 0x15f12b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x474u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12b8(Cpu *restrict c) {
    FN_ENTER(0x15f12b8u);
L_15f12b8:;
    c->r[12] = 0x15f12c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x46cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12c4(Cpu *restrict c) {
    FN_ENTER(0x15f12c4u);
L_15f12c4:;
    c->r[12] = 0x15f12ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x464u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12d0(Cpu *restrict c) {
    FN_ENTER(0x15f12d0u);
L_15f12d0:;
    c->r[12] = 0x15f12d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x45cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12dc(Cpu *restrict c) {
    FN_ENTER(0x15f12dcu);
L_15f12dc:;
    c->r[12] = 0x15f12e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x454u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12e8(Cpu *restrict c) {
    FN_ENTER(0x15f12e8u);
L_15f12e8:;
    c->r[12] = 0x15f12f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x44cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f12f4(Cpu *restrict c) {
    FN_ENTER(0x15f12f4u);
L_15f12f4:;
    c->r[12] = 0x15f12fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x444u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1300(Cpu *restrict c) {
    FN_ENTER(0x15f1300u);
L_15f1300:;
    c->r[12] = 0x15f1308u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x43cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f130c(Cpu *restrict c) {
    FN_ENTER(0x15f130cu);
L_15f130c:;
    c->r[12] = 0x15f1314u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x434u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1318(Cpu *restrict c) {
    FN_ENTER(0x15f1318u);
L_15f1318:;
    c->r[12] = 0x15f1320u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x42cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1324(Cpu *restrict c) {
    FN_ENTER(0x15f1324u);
L_15f1324:;
    c->r[12] = 0x15f132cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x424u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1330(Cpu *restrict c) {
    FN_ENTER(0x15f1330u);
L_15f1330:;
    c->r[12] = 0x15f1338u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x41cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f133c(Cpu *restrict c) {
    FN_ENTER(0x15f133cu);
L_15f133c:;
    c->r[12] = 0x15f1344u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x414u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1348(Cpu *restrict c) {
    FN_ENTER(0x15f1348u);
L_15f1348:;
    c->r[12] = 0x15f1350u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x40cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1354(Cpu *restrict c) {
    FN_ENTER(0x15f1354u);
L_15f1354:;
    c->r[12] = 0x15f135cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x404u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1360(Cpu *restrict c) {
    FN_ENTER(0x15f1360u);
L_15f1360:;
    c->r[12] = 0x15f1368u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f136c(Cpu *restrict c) {
    FN_ENTER(0x15f136cu);
L_15f136c:;
    c->r[12] = 0x15f1374u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1378(Cpu *restrict c) {
    FN_ENTER(0x15f1378u);
L_15f1378:;
    c->r[12] = 0x15f1380u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1384(Cpu *restrict c) {
    FN_ENTER(0x15f1384u);
L_15f1384:;
    c->r[12] = 0x15f138cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1390(Cpu *restrict c) {
    FN_ENTER(0x15f1390u);
L_15f1390:;
    c->r[12] = 0x15f1398u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f139c(Cpu *restrict c) {
    FN_ENTER(0x15f139cu);
L_15f139c:;
    c->r[12] = 0x15f13a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13a8(Cpu *restrict c) {
    FN_ENTER(0x15f13a8u);
L_15f13a8:;
    c->r[12] = 0x15f13b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13b4(Cpu *restrict c) {
    FN_ENTER(0x15f13b4u);
L_15f13b4:;
    c->r[12] = 0x15f13bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13c0(Cpu *restrict c) {
    FN_ENTER(0x15f13c0u);
L_15f13c0:;
    c->r[12] = 0x15f13c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13cc(Cpu *restrict c) {
    FN_ENTER(0x15f13ccu);
L_15f13cc:;
    c->r[12] = 0x15f13d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13d8(Cpu *restrict c) {
    FN_ENTER(0x15f13d8u);
L_15f13d8:;
    c->r[12] = 0x15f13e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13e4(Cpu *restrict c) {
    FN_ENTER(0x15f13e4u);
L_15f13e4:;
    c->r[12] = 0x15f13ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13f0(Cpu *restrict c) {
    FN_ENTER(0x15f13f0u);
L_15f13f0:;
    c->r[12] = 0x15f13f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x39cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f13fc(Cpu *restrict c) {
    FN_ENTER(0x15f13fcu);
L_15f13fc:;
    c->r[12] = 0x15f1404u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x394u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1408(Cpu *restrict c) {
    FN_ENTER(0x15f1408u);
L_15f1408:;
    c->r[12] = 0x15f1410u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x38cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1414(Cpu *restrict c) {
    FN_ENTER(0x15f1414u);
L_15f1414:;
    c->r[12] = 0x15f141cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x384u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1420(Cpu *restrict c) {
    FN_ENTER(0x15f1420u);
L_15f1420:;
    c->r[12] = 0x15f1428u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x37cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f142c(Cpu *restrict c) {
    FN_ENTER(0x15f142cu);
L_15f142c:;
    c->r[12] = 0x15f1434u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x374u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1438(Cpu *restrict c) {
    FN_ENTER(0x15f1438u);
L_15f1438:;
    c->r[12] = 0x15f1440u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x36cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1444(Cpu *restrict c) {
    FN_ENTER(0x15f1444u);
L_15f1444:;
    c->r[12] = 0x15f144cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x364u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1450(Cpu *restrict c) {
    FN_ENTER(0x15f1450u);
L_15f1450:;
    c->r[12] = 0x15f1458u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x35cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f145c(Cpu *restrict c) {
    FN_ENTER(0x15f145cu);
L_15f145c:;
    c->r[12] = 0x15f1464u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x354u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1468(Cpu *restrict c) {
    FN_ENTER(0x15f1468u);
L_15f1468:;
    c->r[12] = 0x15f1470u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x34cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1474(Cpu *restrict c) {
    FN_ENTER(0x15f1474u);
L_15f1474:;
    c->r[12] = 0x15f147cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x344u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1480(Cpu *restrict c) {
    FN_ENTER(0x15f1480u);
L_15f1480:;
    c->r[12] = 0x15f1488u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x33cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f148c(Cpu *restrict c) {
    FN_ENTER(0x15f148cu);
L_15f148c:;
    c->r[12] = 0x15f1494u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x334u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1498(Cpu *restrict c) {
    FN_ENTER(0x15f1498u);
L_15f1498:;
    c->r[12] = 0x15f14a0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x32cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14a4(Cpu *restrict c) {
    FN_ENTER(0x15f14a4u);
L_15f14a4:;
    c->r[12] = 0x15f14acu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x324u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14b0(Cpu *restrict c) {
    FN_ENTER(0x15f14b0u);
L_15f14b0:;
    c->r[12] = 0x15f14b8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x31cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14bc(Cpu *restrict c) {
    FN_ENTER(0x15f14bcu);
L_15f14bc:;
    c->r[12] = 0x15f14c4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x314u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14c8(Cpu *restrict c) {
    FN_ENTER(0x15f14c8u);
L_15f14c8:;
    c->r[12] = 0x15f14d0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x30cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14d4(Cpu *restrict c) {
    FN_ENTER(0x15f14d4u);
L_15f14d4:;
    c->r[12] = 0x15f14dcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x304u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14e0(Cpu *restrict c) {
    FN_ENTER(0x15f14e0u);
L_15f14e0:;
    c->r[12] = 0x15f14e8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14ec(Cpu *restrict c) {
    FN_ENTER(0x15f14ecu);
L_15f14ec:;
    c->r[12] = 0x15f14f4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f14f8(Cpu *restrict c) {
    FN_ENTER(0x15f14f8u);
L_15f14f8:;
    c->r[12] = 0x15f1500u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1504(Cpu *restrict c) {
    FN_ENTER(0x15f1504u);
L_15f1504:;
    c->r[12] = 0x15f150cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1510(Cpu *restrict c) {
    FN_ENTER(0x15f1510u);
L_15f1510:;
    c->r[12] = 0x15f1518u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f151c(Cpu *restrict c) {
    FN_ENTER(0x15f151cu);
L_15f151c:;
    c->r[12] = 0x15f1524u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1528(Cpu *restrict c) {
    FN_ENTER(0x15f1528u);
L_15f1528:;
    c->r[12] = 0x15f1530u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1534(Cpu *restrict c) {
    FN_ENTER(0x15f1534u);
L_15f1534:;
    c->r[12] = 0x15f153cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1540(Cpu *restrict c) {
    FN_ENTER(0x15f1540u);
L_15f1540:;
    c->r[12] = 0x15f1548u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f154c(Cpu *restrict c) {
    FN_ENTER(0x15f154cu);
L_15f154c:;
    c->r[12] = 0x15f1554u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1558(Cpu *restrict c) {
    FN_ENTER(0x15f1558u);
L_15f1558:;
    c->r[12] = 0x15f1560u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1564(Cpu *restrict c) {
    FN_ENTER(0x15f1564u);
L_15f1564:;
    c->r[12] = 0x15f156cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1570(Cpu *restrict c) {
    FN_ENTER(0x15f1570u);
L_15f1570:;
    c->r[12] = 0x15f1578u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x29cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f157c(Cpu *restrict c) {
    FN_ENTER(0x15f157cu);
L_15f157c:;
    c->r[12] = 0x15f1584u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x294u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1588(Cpu *restrict c) {
    FN_ENTER(0x15f1588u);
L_15f1588:;
    c->r[12] = 0x15f1590u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x28cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1594(Cpu *restrict c) {
    FN_ENTER(0x15f1594u);
L_15f1594:;
    c->r[12] = 0x15f159cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x284u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15a0(Cpu *restrict c) {
    FN_ENTER(0x15f15a0u);
L_15f15a0:;
    c->r[12] = 0x15f15a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x27cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15ac(Cpu *restrict c) {
    FN_ENTER(0x15f15acu);
L_15f15ac:;
    c->r[12] = 0x15f15b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x274u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15b8(Cpu *restrict c) {
    FN_ENTER(0x15f15b8u);
L_15f15b8:;
    c->r[12] = 0x15f15c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x26cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15c4(Cpu *restrict c) {
    FN_ENTER(0x15f15c4u);
L_15f15c4:;
    c->r[12] = 0x15f15ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x264u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15d0(Cpu *restrict c) {
    FN_ENTER(0x15f15d0u);
L_15f15d0:;
    c->r[12] = 0x15f15d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x25cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15dc(Cpu *restrict c) {
    FN_ENTER(0x15f15dcu);
L_15f15dc:;
    c->r[12] = 0x15f15e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x254u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15e8(Cpu *restrict c) {
    FN_ENTER(0x15f15e8u);
L_15f15e8:;
    c->r[12] = 0x15f15f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x24cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f15f4(Cpu *restrict c) {
    FN_ENTER(0x15f15f4u);
L_15f15f4:;
    c->r[12] = 0x15f15fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x244u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1600(Cpu *restrict c) {
    FN_ENTER(0x15f1600u);
L_15f1600:;
    c->r[12] = 0x15f1608u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x23cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f160c(Cpu *restrict c) {
    FN_ENTER(0x15f160cu);
L_15f160c:;
    c->r[12] = 0x15f1614u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x234u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1618(Cpu *restrict c) {
    FN_ENTER(0x15f1618u);
L_15f1618:;
    c->r[12] = 0x15f1620u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x22cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1624(Cpu *restrict c) {
    FN_ENTER(0x15f1624u);
L_15f1624:;
    c->r[12] = 0x15f162cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x224u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1630(Cpu *restrict c) {
    FN_ENTER(0x15f1630u);
L_15f1630:;
    c->r[12] = 0x15f1638u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x21cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f163c(Cpu *restrict c) {
    FN_ENTER(0x15f163cu);
L_15f163c:;
    c->r[12] = 0x15f1644u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x214u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1648(Cpu *restrict c) {
    FN_ENTER(0x15f1648u);
L_15f1648:;
    c->r[12] = 0x15f1650u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x20cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1654(Cpu *restrict c) {
    FN_ENTER(0x15f1654u);
L_15f1654:;
    c->r[12] = 0x15f165cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x204u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1660(Cpu *restrict c) {
    FN_ENTER(0x15f1660u);
L_15f1660:;
    c->r[12] = 0x15f1668u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1fcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f166c(Cpu *restrict c) {
    FN_ENTER(0x15f166cu);
L_15f166c:;
    c->r[12] = 0x15f1674u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1f4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1678(Cpu *restrict c) {
    FN_ENTER(0x15f1678u);
L_15f1678:;
    c->r[12] = 0x15f1680u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1ecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1684(Cpu *restrict c) {
    FN_ENTER(0x15f1684u);
L_15f1684:;
    c->r[12] = 0x15f168cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1e4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1690(Cpu *restrict c) {
    FN_ENTER(0x15f1690u);
L_15f1690:;
    c->r[12] = 0x15f1698u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1dcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f169c(Cpu *restrict c) {
    FN_ENTER(0x15f169cu);
L_15f169c:;
    c->r[12] = 0x15f16a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1d4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16a8(Cpu *restrict c) {
    FN_ENTER(0x15f16a8u);
L_15f16a8:;
    c->r[12] = 0x15f16b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1ccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16b4(Cpu *restrict c) {
    FN_ENTER(0x15f16b4u);
L_15f16b4:;
    c->r[12] = 0x15f16bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1c4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16c0(Cpu *restrict c) {
    FN_ENTER(0x15f16c0u);
L_15f16c0:;
    c->r[12] = 0x15f16c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1bcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16cc(Cpu *restrict c) {
    FN_ENTER(0x15f16ccu);
L_15f16cc:;
    c->r[12] = 0x15f16d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1b4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16d8(Cpu *restrict c) {
    FN_ENTER(0x15f16d8u);
L_15f16d8:;
    c->r[12] = 0x15f16e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1acu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16e4(Cpu *restrict c) {
    FN_ENTER(0x15f16e4u);
L_15f16e4:;
    c->r[12] = 0x15f16ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1a4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16f0(Cpu *restrict c) {
    FN_ENTER(0x15f16f0u);
L_15f16f0:;
    c->r[12] = 0x15f16f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x19cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f16fc(Cpu *restrict c) {
    FN_ENTER(0x15f16fcu);
L_15f16fc:;
    c->r[12] = 0x15f1704u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x194u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1708(Cpu *restrict c) {
    FN_ENTER(0x15f1708u);
L_15f1708:;
    c->r[12] = 0x15f1710u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x18cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1714(Cpu *restrict c) {
    FN_ENTER(0x15f1714u);
L_15f1714:;
    c->r[12] = 0x15f171cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x184u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1720(Cpu *restrict c) {
    FN_ENTER(0x15f1720u);
L_15f1720:;
    c->r[12] = 0x15f1728u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x17cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f172c(Cpu *restrict c) {
    FN_ENTER(0x15f172cu);
L_15f172c:;
    c->r[12] = 0x15f1734u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x174u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1738(Cpu *restrict c) {
    FN_ENTER(0x15f1738u);
L_15f1738:;
    c->r[12] = 0x15f1740u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x16cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1744(Cpu *restrict c) {
    FN_ENTER(0x15f1744u);
L_15f1744:;
    c->r[12] = 0x15f174cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x164u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1750(Cpu *restrict c) {
    FN_ENTER(0x15f1750u);
L_15f1750:;
    c->r[12] = 0x15f1758u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x15cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f175c(Cpu *restrict c) {
    FN_ENTER(0x15f175cu);
L_15f175c:;
    c->r[12] = 0x15f1764u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x154u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1768(Cpu *restrict c) {
    FN_ENTER(0x15f1768u);
L_15f1768:;
    c->r[12] = 0x15f1770u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x14cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1774(Cpu *restrict c) {
    FN_ENTER(0x15f1774u);
L_15f1774:;
    c->r[12] = 0x15f177cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x144u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1780(Cpu *restrict c) {
    FN_ENTER(0x15f1780u);
L_15f1780:;
    c->r[12] = 0x15f1788u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x13cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f178c(Cpu *restrict c) {
    FN_ENTER(0x15f178cu);
L_15f178c:;
    c->r[12] = 0x15f1794u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x134u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1798(Cpu *restrict c) {
    FN_ENTER(0x15f1798u);
L_15f1798:;
    c->r[12] = 0x15f17a0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x12cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17a4(Cpu *restrict c) {
    FN_ENTER(0x15f17a4u);
L_15f17a4:;
    c->r[12] = 0x15f17acu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x124u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17b0(Cpu *restrict c) {
    FN_ENTER(0x15f17b0u);
L_15f17b0:;
    c->r[12] = 0x15f17b8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x11cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17bc(Cpu *restrict c) {
    FN_ENTER(0x15f17bcu);
L_15f17bc:;
    c->r[12] = 0x15f17c4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x114u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17c8(Cpu *restrict c) {
    FN_ENTER(0x15f17c8u);
L_15f17c8:;
    c->r[12] = 0x15f17d0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x10cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17d4(Cpu *restrict c) {
    FN_ENTER(0x15f17d4u);
L_15f17d4:;
    c->r[12] = 0x15f17dcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x104u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17e0(Cpu *restrict c) {
    FN_ENTER(0x15f17e0u);
L_15f17e0:;
    c->r[12] = 0x15f17e8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17ec(Cpu *restrict c) {
    FN_ENTER(0x15f17ecu);
L_15f17ec:;
    c->r[12] = 0x15f17f4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f17f8(Cpu *restrict c) {
    FN_ENTER(0x15f17f8u);
L_15f17f8:;
    c->r[12] = 0x15f1800u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1804(Cpu *restrict c) {
    FN_ENTER(0x15f1804u);
L_15f1804:;
    c->r[12] = 0x15f180cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xe4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1810(Cpu *restrict c) {
    FN_ENTER(0x15f1810u);
L_15f1810:;
    c->r[12] = 0x15f1818u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xdcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f181c(Cpu *restrict c) {
    FN_ENTER(0x15f181cu);
L_15f181c:;
    c->r[12] = 0x15f1824u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1828(Cpu *restrict c) {
    FN_ENTER(0x15f1828u);
L_15f1828:;
    c->r[12] = 0x15f1830u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1834(Cpu *restrict c) {
    FN_ENTER(0x15f1834u);
L_15f1834:;
    c->r[12] = 0x15f183cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1840(Cpu *restrict c) {
    FN_ENTER(0x15f1840u);
L_15f1840:;
    c->r[12] = 0x15f1848u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f184c(Cpu *restrict c) {
    FN_ENTER(0x15f184cu);
L_15f184c:;
    c->r[12] = 0x15f1854u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1858(Cpu *restrict c) {
    FN_ENTER(0x15f1858u);
L_15f1858:;
    c->r[12] = 0x15f1860u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1864(Cpu *restrict c) {
    FN_ENTER(0x15f1864u);
L_15f1864:;
    c->r[12] = 0x15f186cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xa4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1870(Cpu *restrict c) {
    FN_ENTER(0x15f1870u);
L_15f1870:;
    c->r[12] = 0x15f1878u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f187c(Cpu *restrict c) {
    FN_ENTER(0x15f187cu);
L_15f187c:;
    c->r[12] = 0x15f1884u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1888(Cpu *restrict c) {
    FN_ENTER(0x15f1888u);
L_15f1888:;
    c->r[12] = 0x15f1890u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1894(Cpu *restrict c) {
    FN_ENTER(0x15f1894u);
L_15f1894:;
    c->r[12] = 0x15f189cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18a0(Cpu *restrict c) {
    FN_ENTER(0x15f18a0u);
L_15f18a0:;
    c->r[12] = 0x15f18a8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18ac(Cpu *restrict c) {
    FN_ENTER(0x15f18acu);
L_15f18ac:;
    c->r[12] = 0x15f18b4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18b8(Cpu *restrict c) {
    FN_ENTER(0x15f18b8u);
L_15f18b8:;
    c->r[12] = 0x15f18c0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18c4(Cpu *restrict c) {
    FN_ENTER(0x15f18c4u);
L_15f18c4:;
    c->r[12] = 0x15f18ccu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18d0(Cpu *restrict c) {
    FN_ENTER(0x15f18d0u);
L_15f18d0:;
    c->r[12] = 0x15f18d8u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18dc(Cpu *restrict c) {
    FN_ENTER(0x15f18dcu);
L_15f18dc:;
    c->r[12] = 0x15f18e4u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18e8(Cpu *restrict c) {
    FN_ENTER(0x15f18e8u);
L_15f18e8:;
    c->r[12] = 0x15f18f0u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f18f4(Cpu *restrict c) {
    FN_ENTER(0x15f18f4u);
L_15f18f4:;
    c->r[12] = 0x15f18fcu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1900(Cpu *restrict c) {
    FN_ENTER(0x15f1900u);
L_15f1900:;
    c->r[12] = 0x15f1908u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f190c(Cpu *restrict c) {
    FN_ENTER(0x15f190cu);
L_15f190c:;
    c->r[12] = 0x15f1914u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1918(Cpu *restrict c) {
    FN_ENTER(0x15f1918u);
L_15f1918:;
    c->r[12] = 0x15f1920u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1924(Cpu *restrict c) {
    FN_ENTER(0x15f1924u);
L_15f1924:;
    c->r[12] = 0x15f192cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1930(Cpu *restrict c) {
    FN_ENTER(0x15f1930u);
L_15f1930:;
    c->r[12] = 0x15f1938u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f193c(Cpu *restrict c) {
    FN_ENTER(0x15f193cu);
L_15f193c:;
    c->r[12] = 0x15f1944u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1948(Cpu *restrict c) {
    FN_ENTER(0x15f1948u);
L_15f1948:;
    c->r[12] = 0x15f1950u + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1954(Cpu *restrict c) {
    FN_ENTER(0x15f1954u);
L_15f1954:;
    c->r[12] = 0x15f195cu + 0x400000u;
    c->r[12] = c->r[12] + 0x47000u;
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1960(Cpu *restrict c) {
    FN_ENTER(0x15f1960u);
L_15f1960:;
    c->r[12] = 0x15f1968u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xffcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f196c(Cpu *restrict c) {
    FN_ENTER(0x15f196cu);
L_15f196c:;
    c->r[12] = 0x15f1974u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xff4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1978(Cpu *restrict c) {
    FN_ENTER(0x15f1978u);
L_15f1978:;
    c->r[12] = 0x15f1980u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1984(Cpu *restrict c) {
    FN_ENTER(0x15f1984u);
L_15f1984:;
    c->r[12] = 0x15f198cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfe4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1990(Cpu *restrict c) {
    FN_ENTER(0x15f1990u);
L_15f1990:;
    c->r[12] = 0x15f1998u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfdcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f199c(Cpu *restrict c) {
    FN_ENTER(0x15f199cu);
L_15f199c:;
    c->r[12] = 0x15f19a4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19a8(Cpu *restrict c) {
    FN_ENTER(0x15f19a8u);
L_15f19a8:;
    c->r[12] = 0x15f19b0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19b4(Cpu *restrict c) {
    FN_ENTER(0x15f19b4u);
L_15f19b4:;
    c->r[12] = 0x15f19bcu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19c0(Cpu *restrict c) {
    FN_ENTER(0x15f19c0u);
L_15f19c0:;
    c->r[12] = 0x15f19c8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19cc(Cpu *restrict c) {
    FN_ENTER(0x15f19ccu);
L_15f19cc:;
    c->r[12] = 0x15f19d4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19d8(Cpu *restrict c) {
    FN_ENTER(0x15f19d8u);
L_15f19d8:;
    c->r[12] = 0x15f19e0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19e4(Cpu *restrict c) {
    FN_ENTER(0x15f19e4u);
L_15f19e4:;
    c->r[12] = 0x15f19ecu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xfa4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19f0(Cpu *restrict c) {
    FN_ENTER(0x15f19f0u);
L_15f19f0:;
    c->r[12] = 0x15f19f8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f19fc(Cpu *restrict c) {
    FN_ENTER(0x15f19fcu);
L_15f19fc:;
    c->r[12] = 0x15f1a04u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a08(Cpu *restrict c) {
    FN_ENTER(0x15f1a08u);
L_15f1a08:;
    c->r[12] = 0x15f1a10u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a14(Cpu *restrict c) {
    FN_ENTER(0x15f1a14u);
L_15f1a14:;
    c->r[12] = 0x15f1a1cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a20(Cpu *restrict c) {
    FN_ENTER(0x15f1a20u);
L_15f1a20:;
    c->r[12] = 0x15f1a28u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a2c(Cpu *restrict c) {
    FN_ENTER(0x15f1a2cu);
L_15f1a2c:;
    c->r[12] = 0x15f1a34u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a38(Cpu *restrict c) {
    FN_ENTER(0x15f1a38u);
L_15f1a38:;
    c->r[12] = 0x15f1a40u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a44(Cpu *restrict c) {
    FN_ENTER(0x15f1a44u);
L_15f1a44:;
    c->r[12] = 0x15f1a4cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a50(Cpu *restrict c) {
    FN_ENTER(0x15f1a50u);
L_15f1a50:;
    c->r[12] = 0x15f1a58u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a5c(Cpu *restrict c) {
    FN_ENTER(0x15f1a5cu);
L_15f1a5c:;
    c->r[12] = 0x15f1a64u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a68(Cpu *restrict c) {
    FN_ENTER(0x15f1a68u);
L_15f1a68:;
    c->r[12] = 0x15f1a70u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a74(Cpu *restrict c) {
    FN_ENTER(0x15f1a74u);
L_15f1a74:;
    c->r[12] = 0x15f1a7cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a80(Cpu *restrict c) {
    FN_ENTER(0x15f1a80u);
L_15f1a80:;
    c->r[12] = 0x15f1a88u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a8c(Cpu *restrict c) {
    FN_ENTER(0x15f1a8cu);
L_15f1a8c:;
    c->r[12] = 0x15f1a94u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1a98(Cpu *restrict c) {
    FN_ENTER(0x15f1a98u);
L_15f1a98:;
    c->r[12] = 0x15f1aa0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1aa4(Cpu *restrict c) {
    FN_ENTER(0x15f1aa4u);
L_15f1aa4:;
    c->r[12] = 0x15f1aacu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ab0(Cpu *restrict c) {
    FN_ENTER(0x15f1ab0u);
L_15f1ab0:;
    c->r[12] = 0x15f1ab8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1abc(Cpu *restrict c) {
    FN_ENTER(0x15f1abcu);
L_15f1abc:;
    c->r[12] = 0x15f1ac4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ac8(Cpu *restrict c) {
    FN_ENTER(0x15f1ac8u);
L_15f1ac8:;
    c->r[12] = 0x15f1ad0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ad4(Cpu *restrict c) {
    FN_ENTER(0x15f1ad4u);
L_15f1ad4:;
    c->r[12] = 0x15f1adcu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xf04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ae0(Cpu *restrict c) {
    FN_ENTER(0x15f1ae0u);
L_15f1ae0:;
    c->r[12] = 0x15f1ae8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xefcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1aec(Cpu *restrict c) {
    FN_ENTER(0x15f1aecu);
L_15f1aec:;
    c->r[12] = 0x15f1af4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xef4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1af8(Cpu *restrict c) {
    FN_ENTER(0x15f1af8u);
L_15f1af8:;
    c->r[12] = 0x15f1b00u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xeecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b04(Cpu *restrict c) {
    FN_ENTER(0x15f1b04u);
L_15f1b04:;
    c->r[12] = 0x15f1b0cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xee4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b10(Cpu *restrict c) {
    FN_ENTER(0x15f1b10u);
L_15f1b10:;
    c->r[12] = 0x15f1b18u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xedcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b1c(Cpu *restrict c) {
    FN_ENTER(0x15f1b1cu);
L_15f1b1c:;
    c->r[12] = 0x15f1b24u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xed4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b28(Cpu *restrict c) {
    FN_ENTER(0x15f1b28u);
L_15f1b28:;
    c->r[12] = 0x15f1b30u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xeccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b34(Cpu *restrict c) {
    FN_ENTER(0x15f1b34u);
L_15f1b34:;
    c->r[12] = 0x15f1b3cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xec4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b40(Cpu *restrict c) {
    FN_ENTER(0x15f1b40u);
L_15f1b40:;
    c->r[12] = 0x15f1b48u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xebcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b4c(Cpu *restrict c) {
    FN_ENTER(0x15f1b4cu);
L_15f1b4c:;
    c->r[12] = 0x15f1b54u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xeb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b58(Cpu *restrict c) {
    FN_ENTER(0x15f1b58u);
L_15f1b58:;
    c->r[12] = 0x15f1b60u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xeacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b64(Cpu *restrict c) {
    FN_ENTER(0x15f1b64u);
L_15f1b64:;
    c->r[12] = 0x15f1b6cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xea4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b70(Cpu *restrict c) {
    FN_ENTER(0x15f1b70u);
L_15f1b70:;
    c->r[12] = 0x15f1b78u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b7c(Cpu *restrict c) {
    FN_ENTER(0x15f1b7cu);
L_15f1b7c:;
    c->r[12] = 0x15f1b84u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b88(Cpu *restrict c) {
    FN_ENTER(0x15f1b88u);
L_15f1b88:;
    c->r[12] = 0x15f1b90u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1b94(Cpu *restrict c) {
    FN_ENTER(0x15f1b94u);
L_15f1b94:;
    c->r[12] = 0x15f1b9cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ba0(Cpu *restrict c) {
    FN_ENTER(0x15f1ba0u);
L_15f1ba0:;
    c->r[12] = 0x15f1ba8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1bac(Cpu *restrict c) {
    FN_ENTER(0x15f1bacu);
L_15f1bac:;
    c->r[12] = 0x15f1bb4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1bb8(Cpu *restrict c) {
    FN_ENTER(0x15f1bb8u);
L_15f1bb8:;
    c->r[12] = 0x15f1bc0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1bc4(Cpu *restrict c) {
    FN_ENTER(0x15f1bc4u);
L_15f1bc4:;
    c->r[12] = 0x15f1bccu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1bd0(Cpu *restrict c) {
    FN_ENTER(0x15f1bd0u);
L_15f1bd0:;
    c->r[12] = 0x15f1bd8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1bdc(Cpu *restrict c) {
    FN_ENTER(0x15f1bdcu);
L_15f1bdc:;
    c->r[12] = 0x15f1be4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1be8(Cpu *restrict c) {
    FN_ENTER(0x15f1be8u);
L_15f1be8:;
    c->r[12] = 0x15f1bf0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1bf4(Cpu *restrict c) {
    FN_ENTER(0x15f1bf4u);
L_15f1bf4:;
    c->r[12] = 0x15f1bfcu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c00(Cpu *restrict c) {
    FN_ENTER(0x15f1c00u);
L_15f1c00:;
    c->r[12] = 0x15f1c08u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c0c(Cpu *restrict c) {
    FN_ENTER(0x15f1c0cu);
L_15f1c0c:;
    c->r[12] = 0x15f1c14u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c18(Cpu *restrict c) {
    FN_ENTER(0x15f1c18u);
L_15f1c18:;
    c->r[12] = 0x15f1c20u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c24(Cpu *restrict c) {
    FN_ENTER(0x15f1c24u);
L_15f1c24:;
    c->r[12] = 0x15f1c2cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c30(Cpu *restrict c) {
    FN_ENTER(0x15f1c30u);
L_15f1c30:;
    c->r[12] = 0x15f1c38u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c3c(Cpu *restrict c) {
    FN_ENTER(0x15f1c3cu);
L_15f1c3c:;
    c->r[12] = 0x15f1c44u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c48(Cpu *restrict c) {
    FN_ENTER(0x15f1c48u);
L_15f1c48:;
    c->r[12] = 0x15f1c50u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c54(Cpu *restrict c) {
    FN_ENTER(0x15f1c54u);
L_15f1c54:;
    c->r[12] = 0x15f1c5cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xe04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c60(Cpu *restrict c) {
    FN_ENTER(0x15f1c60u);
L_15f1c60:;
    c->r[12] = 0x15f1c68u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c6c(Cpu *restrict c) {
    FN_ENTER(0x15f1c6cu);
L_15f1c6c:;
    c->r[12] = 0x15f1c74u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdf4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c78(Cpu *restrict c) {
    FN_ENTER(0x15f1c78u);
L_15f1c78:;
    c->r[12] = 0x15f1c80u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdecu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c84(Cpu *restrict c) {
    FN_ENTER(0x15f1c84u);
L_15f1c84:;
    c->r[12] = 0x15f1c8cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xde4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c90(Cpu *restrict c) {
    FN_ENTER(0x15f1c90u);
L_15f1c90:;
    c->r[12] = 0x15f1c98u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xddcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1c9c(Cpu *restrict c) {
    FN_ENTER(0x15f1c9cu);
L_15f1c9c:;
    c->r[12] = 0x15f1ca4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdd4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ca8(Cpu *restrict c) {
    FN_ENTER(0x15f1ca8u);
L_15f1ca8:;
    c->r[12] = 0x15f1cb0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdccu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1cb4(Cpu *restrict c) {
    FN_ENTER(0x15f1cb4u);
L_15f1cb4:;
    c->r[12] = 0x15f1cbcu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdc4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1cc0(Cpu *restrict c) {
    FN_ENTER(0x15f1cc0u);
L_15f1cc0:;
    c->r[12] = 0x15f1cc8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdbcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ccc(Cpu *restrict c) {
    FN_ENTER(0x15f1cccu);
L_15f1ccc:;
    c->r[12] = 0x15f1cd4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdb4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1cd8(Cpu *restrict c) {
    FN_ENTER(0x15f1cd8u);
L_15f1cd8:;
    c->r[12] = 0x15f1ce0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xdacu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1ce4(Cpu *restrict c) {
    FN_ENTER(0x15f1ce4u);
L_15f1ce4:;
    c->r[12] = 0x15f1cecu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xda4u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1cf0(Cpu *restrict c) {
    FN_ENTER(0x15f1cf0u);
L_15f1cf0:;
    c->r[12] = 0x15f1cf8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd9cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1cfc(Cpu *restrict c) {
    FN_ENTER(0x15f1cfcu);
L_15f1cfc:;
    c->r[12] = 0x15f1d04u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd94u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d08(Cpu *restrict c) {
    FN_ENTER(0x15f1d08u);
L_15f1d08:;
    c->r[12] = 0x15f1d10u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd8cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d14(Cpu *restrict c) {
    FN_ENTER(0x15f1d14u);
L_15f1d14:;
    c->r[12] = 0x15f1d1cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd84u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d20(Cpu *restrict c) {
    FN_ENTER(0x15f1d20u);
L_15f1d20:;
    c->r[12] = 0x15f1d28u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd7cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d2c(Cpu *restrict c) {
    FN_ENTER(0x15f1d2cu);
L_15f1d2c:;
    c->r[12] = 0x15f1d34u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd74u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d38(Cpu *restrict c) {
    FN_ENTER(0x15f1d38u);
L_15f1d38:;
    c->r[12] = 0x15f1d40u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd6cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d44(Cpu *restrict c) {
    FN_ENTER(0x15f1d44u);
L_15f1d44:;
    c->r[12] = 0x15f1d4cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd64u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d50(Cpu *restrict c) {
    FN_ENTER(0x15f1d50u);
L_15f1d50:;
    c->r[12] = 0x15f1d58u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d5c(Cpu *restrict c) {
    FN_ENTER(0x15f1d5cu);
L_15f1d5c:;
    c->r[12] = 0x15f1d64u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd54u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d68(Cpu *restrict c) {
    FN_ENTER(0x15f1d68u);
L_15f1d68:;
    c->r[12] = 0x15f1d70u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd4cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d74(Cpu *restrict c) {
    FN_ENTER(0x15f1d74u);
L_15f1d74:;
    c->r[12] = 0x15f1d7cu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd44u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d80(Cpu *restrict c) {
    FN_ENTER(0x15f1d80u);
L_15f1d80:;
    c->r[12] = 0x15f1d88u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd3cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d8c(Cpu *restrict c) {
    FN_ENTER(0x15f1d8cu);
L_15f1d8c:;
    c->r[12] = 0x15f1d94u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd34u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1d98(Cpu *restrict c) {
    FN_ENTER(0x15f1d98u);
L_15f1d98:;
    c->r[12] = 0x15f1da0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd2cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1da4(Cpu *restrict c) {
    FN_ENTER(0x15f1da4u);
L_15f1da4:;
    c->r[12] = 0x15f1dacu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd24u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1db0(Cpu *restrict c) {
    FN_ENTER(0x15f1db0u);
L_15f1db0:;
    c->r[12] = 0x15f1db8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd1cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1dbc(Cpu *restrict c) {
    FN_ENTER(0x15f1dbcu);
L_15f1dbc:;
    c->r[12] = 0x15f1dc4u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd14u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1dc8(Cpu *restrict c) {
    FN_ENTER(0x15f1dc8u);
L_15f1dc8:;
    c->r[12] = 0x15f1dd0u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd0cu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1dd4(Cpu *restrict c) {
    FN_ENTER(0x15f1dd4u);
L_15f1dd4:;
    c->r[12] = 0x15f1ddcu + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xd04u; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
void f_15f1de0(Cpu *restrict c) {
    FN_ENTER(0x15f1de0u);
L_15f1de0:;
    c->r[12] = 0x15f1de8u + 0x400000u;
    c->r[12] = c->r[12] + 0x46000u;
    { uint32_t ea = c->r[12] + 0xcfcu; uint32_t v = LD32(ea); c->r[12] = ea; c->pc = v; } __attribute__((musttail)) return rt_dispatch(c);
}
