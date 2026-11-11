#include "cpu.h"
#include "neon_rt.h"
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_431d2c(Cpu *c);
void f_43210c(Cpu *c);
void f_556c34(Cpu *c);
void f_560130(Cpu *c);
void f_560afc(Cpu *c);
void f_562568(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af630(Cpu *c);
void f_9bb638(Cpu *c);
void f_a261fc(Cpu *c);
void f_a87660(Cpu *c);
void f_15efd7c(Cpu *c);
void f_55fd6c(Cpu *restrict c) {
    FN_ENTER(0x55fd6cu);
L_55fd6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14dc9e4u;
    { uint32_t ea = 0x55fd7cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x55fd80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18cu;
    c->pc = c->r[4]; c->r[14] = 0x55fd98u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x55fda0u; f_22b8f0(c);
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0x186u;
    c->r[14] = 0x55fdacu; f_15efd7c(c);
    c->r[0] = 0x14dc9acu;
    { uint32_t ea = 0x55fdb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_55fdcc(Cpu *restrict c) {
    FN_ENTER(0x55fdccu);
L_55fdcc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x55fdd8u; f_22b908(c);
    c->r[0] = 0x14dc97cu;
    { uint32_t ea = 0x55fde4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x55fde4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_55fdfc(Cpu *restrict c) {
    FN_ENTER(0x55fdfcu);
L_55fdfc:;
    __attribute__((musttail)) return f_556c34(c);
}
void f_55fe00(Cpu *restrict c) {
    FN_ENTER(0x55fe00u);
L_55fe00:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_55fe04(Cpu *restrict c) {
    FN_ENTER(0x55fe04u);
L_55fe04:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_55fe08(Cpu *restrict c) {
    FN_ENTER(0x55fe08u);
L_55fe08:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_55fe0c(Cpu *restrict c) {
    FN_ENTER(0x55fe0cu);
L_55fe0c:;
    c->r[0] = 0x14dc938u;
    { uint32_t ea = 0x55fe18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_55fe1c(Cpu *restrict c) {
    FN_ENTER(0x55fe1cu);
L_55fe1c:;
    c->r[0] = 0x14dc930u;
    { uint32_t ea = 0x55fe28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_55fe2c(Cpu *restrict c) {
    FN_ENTER(0x55fe2cu);
L_55fe2c:;
    c->r[0] = 0x14dc928u;
    { uint32_t ea = 0x55fe38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_55fe3c(Cpu *restrict c) {
    FN_ENTER(0x55fe3cu);
L_55fe3c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x152a4d0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    c->r[3] = 0x1d4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0x55fe6cu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14d8cacu;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0x14dc890u;
    { uint32_t ea = 0x55feb8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11f6996u;
    { uint32_t ea = 0x55fec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x55fec4u + c->r[1];
    c->r[14] = 0x55fec4u; f_9aedcc(c);
    c->r[1] = 0x14dc888u;
    c->r[3] = 0x18cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x55fee0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x14dc868u;
    { uint32_t ea = 0x55fef0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14d901cu;
    { uint32_t ea = 0x55fef8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11f6955u;
    c->r[1] = 0x55ff00u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x55ff04u; f_9aedcc(c);
    c->r[0] = 0x14dc844u;
    c->r[1] = 0x12013bau;
    c->r[2] = c->r[4];
    c->r[3] = 0x18cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x55ff28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x55ff2cu + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14dc824u;
    { uint32_t ea = 0x55ff3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x55ff3cu; f_9aedcc(c);
    c->r[1] = 0x14dc828u;
    { uint32_t ea = 0x55ff48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_55ff84(Cpu *restrict c) {
    FN_ENTER(0x55ff84u);
L_55ff84:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14dc7e0u;
    { uint32_t ea = 0x55ff94u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x55ff98u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3cu;
    c->pc = c->r[4]; c->r[14] = 0x55ffb0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x14dc7b8u;
    { uint32_t ea = 0x55ffc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x38u;
    c->r[14] = 0x55ffd0u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_55ffe0(Cpu *restrict c) {
    FN_ENTER(0x55ffe0u);
L_55ffe0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14dc780u;
    { uint32_t ea = 0x55fff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x55fff4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_56000c(Cpu *restrict c) {
    FN_ENTER(0x56000cu);
L_56000c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x14dc74cu;
    c->r[4] = 0x0u;
    c->r[5] = c->r[8];
    c->r[6] = c->r[8] + 0x4u;
    { uint32_t ea = 0x56002cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = 0x14d8b4cu;
    { uint32_t ea = 0x56003cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_560038:;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_560078; }
L_560044:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_560044; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_560074; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x560074u; rt_dispatch(c);
L_560074:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
L_560078:;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_560038; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_560090(Cpu *restrict c) {
    FN_ENTER(0x560090u);
L_560090:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x14dc6c8u;
    c->r[4] = 0x0u;
    c->r[5] = c->r[8];
    c->r[6] = c->r[8] + 0x4u;
    { uint32_t ea = 0x5600b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = 0x14d8ac8u;
    { uint32_t ea = 0x5600c0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5600bc:;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5600fc; }
L_5600c8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5600c8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5600f8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5600f8u; rt_dispatch(c);
L_5600f8:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
L_5600fc:;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_5600bc; }
    c->r[0] = 0x14dc664u;
    { uint32_t ea = 0x560110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x560110u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_560130(Cpu *restrict c) {
    FN_ENTER(0x560130u);
L_560130:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560168u; f_9bb638(c);
    c->r[1] = 0x120116eu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x560180u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5601e0u; f_9bb638(c);
    c->r[1] = 0x1201107u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5601f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560258u; f_9bb638(c);
    c->r[1] = 0x120109cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x56026cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5602ccu; f_9bb638(c);
    c->r[1] = 0x1201035u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5602e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560344u; f_9bb638(c);
    c->r[1] = 0x1200fcau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560358u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5603b8u; f_9bb638(c);
    c->r[1] = 0x1200f63u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5603ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560430u; f_9bb638(c);
    c->r[1] = 0x1200ef8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560444u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5604a4u; f_9bb638(c);
    c->r[1] = 0x1200e91u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5604b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x56051cu; f_9bb638(c);
    c->r[1] = 0x1200e26u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560530u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x24u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560590u; f_9bb638(c);
    c->r[1] = 0x1200dbfu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5605a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560608u; f_9bb638(c);
    c->r[1] = 0x1200d54u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x56061cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x2cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x56067cu; f_9bb638(c);
    c->r[1] = 0x1200ceeu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560690u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x30u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5606f4u; f_9bb638(c);
    c->r[1] = 0x1200c84u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560708u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x34u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560768u; f_9bb638(c);
    c->r[1] = 0x1200c26u;
    c->r[1] = 0x560774u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x38u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5607f4(Cpu *restrict c) {
    FN_ENTER(0x5607f4u);
L_5607f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14dbf78u;
    { uint32_t ea = 0x560804u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x560808u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3cu;
    c->pc = c->r[4]; c->r[14] = 0x560820u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[1] = 0x38u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x560830u; f_15efd7c(c);
    c->r[0] = 0x14dbf44u;
    { uint32_t ea = 0x56083cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_560850(Cpu *restrict c) {
    FN_ENTER(0x560850u);
L_560850:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x14dbf08u;
    c->r[4] = 0x0u;
    c->r[5] = c->r[8];
    c->r[6] = c->r[8] + 0x4u;
    { uint32_t ea = 0x560870u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x3cu; }
    c->r[0] = 0x14d8308u;
    { uint32_t ea = 0x560880u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_56087c:;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5608bc; }
L_560888:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_560888; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5608b8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5608b8u; rt_dispatch(c);
L_5608b8:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
L_5608bc:;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_56087c; }
    c->r[0] = 0x14dbeacu;
    { uint32_t ea = 0x5608d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5608d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5608f0(Cpu *restrict c) {
    FN_ENTER(0x5608f0u);
L_5608f0:;
    __attribute__((musttail)) return f_560130(c);
}
void f_5608f4(Cpu *restrict c) {
    FN_ENTER(0x5608f4u);
L_5608f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5608f8(Cpu *restrict c) {
    FN_ENTER(0x5608f8u);
L_5608f8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5608fc(Cpu *restrict c) {
    FN_ENTER(0x5608fcu);
L_5608fc:;
    c->r[0] = 0x14dbe6cu;
    { uint32_t ea = 0x560908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_56090c(Cpu *restrict c) {
    FN_ENTER(0x56090cu);
L_56090c:;
    c->r[0] = 0x14dbe64u;
    { uint32_t ea = 0x560918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_56091c(Cpu *restrict c) {
    FN_ENTER(0x56091cu);
L_56091c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14dbe30u;
    c->r[5] = 0x0u;
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x560944u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14d8218u;
    { uint32_t ea = 0x56094cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11f5ecbu;
    c->r[1] = 0x560954u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x560958u; f_9aedcc(c);
    c->r[0] = 0x14dbe08u;
    c->r[1] = 0x1200a28u;
    c->r[2] = c->r[4];
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x56097cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x560980u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14dbdecu;
    { uint32_t ea = 0x560990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x560990u; f_9aedcc(c);
    c->r[1] = 0x14dbdecu;
    { uint32_t ea = 0x56099cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5609c4(Cpu *restrict c) {
    FN_ENTER(0x5609c4u);
L_5609c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14dbdb8u;
    { uint32_t ea = 0x5609d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5609d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x5609f0u; rt_dispatch(c);
    c->r[14] = 0x5609f4u; f_22b8f0(c);
    c->r[1] = 0x14dbd8cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x560a04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_560a28(Cpu *restrict c) {
    FN_ENTER(0x560a28u);
L_560a28:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14dbd4cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x560a40u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x560a44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_560a64(Cpu *restrict c) {
    FN_ENTER(0x560a64u);
L_560a64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14dbd14u;
    { uint32_t ea = 0x560a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x560a78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_560a90(Cpu *restrict c) {
    FN_ENTER(0x560a90u);
L_560a90:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x560a98u; f_22b8f0(c);
    c->r[1] = 0x14dbce8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x560aa8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_560ac8(Cpu *restrict c) {
    FN_ENTER(0x560ac8u);
L_560ac8:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_560acc(Cpu *restrict c) {
    FN_ENTER(0x560accu);
L_560acc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x560ad8u; f_22b908(c);
    c->r[0] = 0x14dbca8u;
    { uint32_t ea = 0x560ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x560ae4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_560afc(Cpu *restrict c) {
    FN_ENTER(0x560afcu);
L_560afc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560b34u; f_9bb638(c);
    c->r[1] = 0x11f01cau;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x560b4cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560bacu; f_9bb638(c);
    c->r[1] = 0x11f015du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560bc0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x5u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560c24u; f_9bb638(c);
    c->r[1] = 0x1200788u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560c38u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x6u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560c98u; f_9bb638(c);
    c->r[1] = 0x120071eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560cacu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x7u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560d10u; f_9bb638(c);
    c->r[1] = 0x11f6ac3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560d24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560d84u; f_9bb638(c);
    c->r[1] = 0x11f6a74u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560d98u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560dfcu; f_9bb638(c);
    c->r[1] = 0x11f6a21u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560e10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560e70u; f_9bb638(c);
    c->r[1] = 0x11f69c9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560e84u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xbu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560ee8u; f_9bb638(c);
    c->r[1] = 0x11f696du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560efcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560f5cu; f_9bb638(c);
    c->r[1] = 0x11f6915u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560f70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xdu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x560fd4u; f_9bb638(c);
    c->r[1] = 0x11f68b9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x560fe8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x561048u; f_9bb638(c);
    c->r[1] = 0x11f6861u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x56105cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xfu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5610c0u; f_9bb638(c);
    c->r[1] = 0x11f6805u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5610d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x561134u; f_9bb638(c);
    c->r[1] = 0x11f67adu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x561148u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x11u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5611acu; f_9bb638(c);
    c->r[1] = 0x11f6753u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5611c0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x12u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x561220u; f_9bb638(c);
    c->r[1] = 0x11f66feu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x561234u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x13u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x561298u; f_9bb638(c);
    c->r[1] = 0x11f66a5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5612acu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x56130cu; f_9bb638(c);
    c->r[1] = 0x11f6650u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x561320u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x15u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x561384u; f_9bb638(c);
    c->r[1] = 0x11f65f7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x561398u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x16u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5613f8u; f_9bb638(c);
    c->r[1] = 0x11ff618u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x56140cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x17u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x561470u; f_9bb638(c);
    c->r[1] = 0x11ff5bfu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x561484u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5614e4u; f_9bb638(c);
    c->r[1] = 0x11ff56au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5614f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x19u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x56155cu; f_9bb638(c);
    c->r[1] = 0x11ff511u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x561570u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1au;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5615d0u; f_9bb638(c);
    c->r[1] = 0x11ff4c4u;
    c->r[1] = 0x5615dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1bu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_561684(Cpu *restrict c) {
    FN_ENTER(0x561684u);
L_561684:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5616b8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5616a8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5616c8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5616b8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5616c8:;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5616f4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5616e4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561704; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5616f4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561704:;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561730; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561720u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561740; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561730:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561740:;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_56176c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x56175cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_56177c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_56176c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_56177c:;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5617a8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561798u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5617b8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5617a8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5617b8:;
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5617e4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5617d4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5617f4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5617e4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5617f4:;
    { uint32_t ea = c->r[4] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561820; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561810u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561830; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561820:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561830:;
    { uint32_t ea = c->r[4] + 0xau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_56185c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x56184cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_56186c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_56185c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_56186c:;
    { uint32_t ea = c->r[4] + 0xbu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561898; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561888u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5618a8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561898:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5618a8:;
    { uint32_t ea = c->r[4] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5618d4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5618c4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5618e4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5618d4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5618e4:;
    { uint32_t ea = c->r[4] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561910; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561900u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561920; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561910:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561920:;
    { uint32_t ea = c->r[4] + 0xeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_56194c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x56193cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_56195c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_56194c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_56195c:;
    { uint32_t ea = c->r[4] + 0xfu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561988; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561978u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561998; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561988:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561998:;
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5619c4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5619b4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5619d4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5619c4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5619d4:;
    { uint32_t ea = c->r[4] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561a00; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5619f0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561a10; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561a00:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561a10:;
    { uint32_t ea = c->r[4] + 0x12u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561a3c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561a2cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561a4c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561a3c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561a4c:;
    { uint32_t ea = c->r[4] + 0x13u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561a78; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561a68u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561a88; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561a78:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561a88:;
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561ab4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561aa4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561ac4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561ab4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561ac4:;
    { uint32_t ea = c->r[4] + 0x15u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561af0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561ae0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561b00; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561af0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561b00:;
    { uint32_t ea = c->r[4] + 0x16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561b2c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561b1cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561b3c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561b2c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561b3c:;
    { uint32_t ea = c->r[4] + 0x17u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561b68; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561b58u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561b78; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561b68:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561b78:;
    { uint32_t ea = c->r[4] + 0x18u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561ba4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561b94u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561bb4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561ba4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561bb4:;
    { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561be0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561bd0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561bf0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561be0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561bf0:;
    { uint32_t ea = c->r[4] + 0x1au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561c1c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x561c0cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_561c2c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561c1c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_561c2c:;
    { uint32_t ea = c->r[4] + 0x1bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_561c34(Cpu *restrict c) {
    FN_ENTER(0x561c34u);
L_561c34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561c68; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561c64u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561c68:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561ca0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561c9cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561ca0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561cd8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561cd4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561cd8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561d10; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561d0cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561d10:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561d48; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561d44u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561d48:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561d80; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561d7cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561d80:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561db8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561db4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561db8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xbu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561df0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561decu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561df0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561e28; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561e24u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561e28:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xdu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561e60; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561e5cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561e60:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561e98; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561e94u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561e98:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561ed0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561eccu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561ed0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561f08; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561f04u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561f08:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x11u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561f40; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561f3cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561f40:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561f78; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561f74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561f78:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x13u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561fb0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561facu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561fb0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_561fe8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x561fe4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_561fe8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x15u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562020; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x56201cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562020:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x16u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562058; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x562054u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562058:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x17u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562090; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x56208cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562090:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5620c8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5620c4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5620c8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x19u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562100; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5620fcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562100:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562138; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x562134u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562138:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1bu; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562170; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x56216cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562170:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_562188(Cpu *restrict c) {
    FN_ENTER(0x562188u);
L_562188:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14da5fcu;
    { uint32_t ea = 0x562198u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x56219cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x5621b4u; rt_dispatch(c);
    c->r[14] = 0x5621b8u; f_22b8f0(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14da5b8u;
    { uint32_t ea = 0x5621e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5621f0(Cpu *restrict c) {
    FN_ENTER(0x5621f0u);
L_5621f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5621fcu; f_22b908(c);
    c->r[0] = 0x14da58cu;
    { uint32_t ea = 0x562208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x562208u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_562220(Cpu *restrict c) {
    FN_ENTER(0x562220u);
L_562220:;
    __attribute__((musttail)) return f_560afc(c);
}
void f_562224(Cpu *restrict c) {
    FN_ENTER(0x562224u);
L_562224:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_562228(Cpu *restrict c) {
    FN_ENTER(0x562228u);
L_562228:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_56222c(Cpu *restrict c) {
    FN_ENTER(0x56222cu);
L_56222c:;
    c->r[0] = 0x14da554u;
    { uint32_t ea = 0x562238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_56223c(Cpu *restrict c) {
    FN_ENTER(0x56223cu);
L_56223c:;
    c->r[0] = 0x14da54cu;
    { uint32_t ea = 0x562248u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_56224c(Cpu *restrict c) {
    FN_ENTER(0x56224cu);
L_56224c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14da518u;
    c->r[5] = 0x0u;
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x562274u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14d6c98u;
    { uint32_t ea = 0x56227cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11ff132u;
    c->r[1] = 0x562284u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x562288u; f_9aedcc(c);
    c->r[0] = 0x14da4f0u;
    c->r[1] = 0x11ff122u;
    c->r[2] = c->r[4];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5622acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5622b0u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14da4d4u;
    { uint32_t ea = 0x5622c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5622c0u; f_9aedcc(c);
    c->r[1] = 0x14da4d4u;
    { uint32_t ea = 0x5622ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5622f4(Cpu *restrict c) {
    FN_ENTER(0x5622f4u);
L_5622f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14da4a0u;
    { uint32_t ea = 0x562304u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x562308u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x28u;
    c->pc = c->r[4]; c->r[14] = 0x562320u; rt_dispatch(c);
    c->r[14] = 0x562324u; f_22b8f0(c);
    c->r[1] = 0x14da478u;
    { uint32_t ea = 0x562330u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_562378(Cpu *restrict c) {
    FN_ENTER(0x562378u);
L_562378:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14da414u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x562390u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x562394u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5623b4(Cpu *restrict c) {
    FN_ENTER(0x5623b4u);
L_5623b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14da3dcu;
    { uint32_t ea = 0x5623c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5623c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5623e0(Cpu *restrict c) {
    FN_ENTER(0x5623e0u);
L_5623e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x5623e8u; f_22b8f0(c);
    c->r[1] = 0x14da3b4u;
    { uint32_t ea = 0x5623f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_562438(Cpu *restrict c) {
    FN_ENTER(0x562438u);
L_562438:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14da35cu;
    { uint32_t ea = 0x56244cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562468; }
    c->r[14] = 0x562460u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_562468:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562480; }
    c->r[14] = 0x562478u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_562480:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562498; }
    c->r[14] = 0x562490u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_562498:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5624b0; }
    c->r[14] = 0x5624a8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_5624b0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_22b908(c);
}
void f_5624c0(Cpu *restrict c) {
    FN_ENTER(0x5624c0u);
L_5624c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14da2d4u;
    { uint32_t ea = 0x5624d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5624f0; }
    c->r[14] = 0x5624e8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_5624f0:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562508; }
    c->r[14] = 0x562500u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_562508:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562520; }
    c->r[14] = 0x562518u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_562520:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562538; }
    c->r[14] = 0x562530u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_562538:;
    c->r[0] = c->r[4];
    c->r[14] = 0x562540u; f_22b908(c);
    c->r[0] = 0x14da258u;
    { uint32_t ea = 0x56254cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x56254cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_562568(Cpu *restrict c) {
    FN_ENTER(0x562568u);
L_562568:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5625a0u; f_9bb638(c);
    c->r[1] = 0x11ef0cau;
    c->r[9] = c->r[13] + 0x10u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x5625b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x562620u; f_9bb638(c);
    c->r[1] = 0x11fedb9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x562634u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x6u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x56269cu; f_9bb638(c);
    c->r[1] = 0x11fed4du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5626b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x562714u; f_9bb638(c);
    c->r[1] = 0x11fece5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x562728u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x562790u; f_9bb638(c);
    c->r[1] = 0x11fec79u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5627a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x562808u; f_9bb638(c);
    c->r[1] = 0x11fec11u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x56281cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x562884u; f_9bb638(c);
    c->r[1] = 0x11feba5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x562898u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5628fcu; f_9bb638(c);
    c->r[1] = 0x11feb3du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x562910u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x12u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0x562978u; f_9bb638(c);
    c->r[1] = 0x11fead1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x56298cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x18u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0x11fea85u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0x5629e8u + c->r[0];
    c->r[0] = 0x11fb01du;
    c->r[3] = 0x5629f0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x5629f4u; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x5629fcu; f_9bb638(c);
    c->r[12] = c->r[9];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1cu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0x11fea29u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0x562a54u + c->r[0];
    c->r[0] = 0x11fafb1u;
    c->r[3] = 0x562a5cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x562a60u; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x562a68u; f_9bb638(c);
    c->r[2] = c->r[9];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x20u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0x11fe9d1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0x562abcu + c->r[0];
    c->r[0] = 0x11faf49u;
    c->r[3] = 0x562ac4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x562ac8u; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x562ad0u; f_9bb638(c);
    c->r[12] = c->r[9];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x24u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0x11fe975u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0x562b28u + c->r[0];
    c->r[0] = 0x11faeddu;
    c->r[3] = 0x562b30u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x562b34u; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x562b3cu; f_9bb638(c);
    { uint32_t ea = c->r[9]; c->r[9] = c->r[9] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_562bbc(Cpu *restrict c) {
    FN_ENTER(0x562bbcu);
L_562bbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562bf0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x562be0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_562c00; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562bf0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_562c00:;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c14u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c28u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c3cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c50u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c64u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c78u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562c8cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x562ca0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x562cacu; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x562cb8u; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x562cc4u; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x562cd0u; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_562cd8(Cpu *restrict c) {
    FN_ENTER(0x562cd8u);
L_562cd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_562d0c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x562d08u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_562d0c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562d34u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562d48u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562d5cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562d70u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562d84u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562d98u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562dacu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x562dc0u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x562dccu; f_431d2c(c);
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x562dd8u; f_431d2c(c);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x562de4u; f_431d2c(c);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_431d2c(c);
}
void f_562df4(Cpu *restrict c) {
    FN_ENTER(0x562df4u);
L_562df4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14d99a8u;
    { uint32_t ea = 0x562e04u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x562e08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x28u;
    c->pc = c->r[4]; c->r[14] = 0x562e20u; rt_dispatch(c);
    c->r[14] = 0x562e24u; f_22b8f0(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    c->r[1] = 0x14d9948u;
    { uint32_t ea = 0x562e68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_562e78(Cpu *restrict c) {
    FN_ENTER(0x562e78u);
L_562e78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14d991cu;
    { uint32_t ea = 0x562e8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562ea8; }
    c->r[14] = 0x562ea0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_562ea8:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562ec0; }
    c->r[14] = 0x562eb8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_562ec0:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562ed8; }
    c->r[14] = 0x562ed0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_562ed8:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_562ef0; }
    c->r[14] = 0x562ee8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_562ef0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x562ef8u; f_22b908(c);
    c->r[0] = 0x14d98a8u;
    { uint32_t ea = 0x562f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x562f04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_562f20(Cpu *restrict c) {
    FN_ENTER(0x562f20u);
L_562f20:;
    __attribute__((musttail)) return f_562568(c);
}
void f_562f24(Cpu *restrict c) {
    FN_ENTER(0x562f24u);
L_562f24:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_562f28(Cpu *restrict c) {
    FN_ENTER(0x562f28u);
L_562f28:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_562f2c(Cpu *restrict c) {
    FN_ENTER(0x562f2cu);
L_562f2c:;
    c->r[0] = 0x14d986cu;
    { uint32_t ea = 0x562f38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_562f3c(Cpu *restrict c) {
    FN_ENTER(0x562f3cu);
L_562f3c:;
    c->r[0] = 0x14d9864u;
    { uint32_t ea = 0x562f48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_562f4c(Cpu *restrict c) {
    FN_ENTER(0x562f4cu);
L_562f4c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x15274c8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    c->r[3] = 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0x562f7cu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0x14d97e0u;
    { uint32_t ea = 0x562fc4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14d5f48u;
    { uint32_t ea = 0x562fccu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11fe40bu;
    c->r[1] = 0x562fd4u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x562fd8u; f_9aedcc(c);
    c->r[0] = 0x14d97b8u;
    c->r[1] = 0x11fe4adu;
    c->r[2] = c->r[4];
    c->r[3] = 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x562ffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x563000u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14d979cu;
    { uint32_t ea = 0x563010u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x563010u; f_9aedcc(c);
    c->r[1] = 0x14d979cu;
    { uint32_t ea = 0x56301cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_563048(Cpu *restrict c) {
    FN_ENTER(0x563048u);
L_563048:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14d9764u;
    { uint32_t ea = 0x563058u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x56305cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xe4u;
    c->pc = c->r[4]; c->r[14] = 0x563074u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x56307cu; f_22b8f0(c);
    c->r[0] = 0x14d9738u;
    { uint32_t ea = 0x563088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0xe0u;
    c->r[14] = 0x563098u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5630a8(Cpu *restrict c) {
    FN_ENTER(0x5630a8u);
L_5630a8:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_5630ac(Cpu *restrict c) {
    FN_ENTER(0x5630acu);
L_5630ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5630b8u; f_22b908(c);
    c->r[0] = 0x14d96f8u;
    { uint32_t ea = 0x5630c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5630c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
