#include "cpu.h"
#include "neon_rt.h"
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_5630dc(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_15efd7c(Cpu *c);
void f_567d3c(Cpu *restrict c) {
    FN_ENTER(0x567d3cu);
L_567d3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14d4a78u;
    { uint32_t ea = 0x567d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x567d50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xe4u;
    c->pc = c->r[4]; c->r[14] = 0x567d68u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x567d70u; f_22b8f0(c);
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0xe0u;
    c->r[14] = 0x567d7cu; f_15efd7c(c);
    c->r[0] = 0x14d4a40u;
    { uint32_t ea = 0x567d88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_567d9c(Cpu *restrict c) {
    FN_ENTER(0x567d9cu);
L_567d9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x567da8u; f_22b908(c);
    c->r[0] = 0x14d4a10u;
    { uint32_t ea = 0x567db4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x567db4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_567dcc(Cpu *restrict c) {
    FN_ENTER(0x567dccu);
L_567dcc:;
    __attribute__((musttail)) return f_5630dc(c);
}
void f_567dd0(Cpu *restrict c) {
    FN_ENTER(0x567dd0u);
L_567dd0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_567dd4(Cpu *restrict c) {
    FN_ENTER(0x567dd4u);
L_567dd4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_567dd8(Cpu *restrict c) {
    FN_ENTER(0x567dd8u);
L_567dd8:;
    c->r[0] = 0x14d49d8u;
    { uint32_t ea = 0x567de4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_567de8(Cpu *restrict c) {
    FN_ENTER(0x567de8u);
L_567de8:;
    c->r[0] = 0x14d49d0u;
    { uint32_t ea = 0x567df4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_567df8(Cpu *restrict c) {
    FN_ENTER(0x567df8u);
L_567df8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14d499cu;
    c->r[5] = 0x0u;
    c->r[3] = 0xe4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x567e20u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14d10ecu;
    { uint32_t ea = 0x567e28u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11eea33u;
    c->r[1] = 0x567e30u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x567e34u; f_9aedcc(c);
    c->r[0] = 0x14d4974u;
    c->r[1] = 0x11f9662u;
    c->r[2] = c->r[4];
    c->r[3] = 0xe4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x567e58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x567e5cu + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14d4958u;
    { uint32_t ea = 0x567e6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x567e6cu; f_9aedcc(c);
    c->r[1] = 0x14d4958u;
    { uint32_t ea = 0x567e78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_567ea0(Cpu *restrict c) {
    FN_ENTER(0x567ea0u);
L_567ea0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14d4924u;
    { uint32_t ea = 0x567eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x567eb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15cu;
    c->pc = c->r[4]; c->r[14] = 0x567eccu; rt_dispatch(c);
    c->r[14] = 0x567ed0u; f_22b8f0(c);
    c->r[1] = 0x14d48f4u;
    c->r[2] = 0xffu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x567ee4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_567f0c:;
    c->r[4] = c->r[0] + c->r[3];
    c->r[3] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x140u);
    { uint32_t ea = c->r[4] + 0x1au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x20u; ST16(ea, c->r[1]); }
    if (COND_NE) { goto L_567f0c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_567f40(Cpu *restrict c) {
    FN_ENTER(0x567f40u);
L_567f40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x567f48u; f_22b8f0(c);
    c->r[1] = 0x14d4878u;
    c->r[12] = 0x0u;
    c->r[2] = 0xffu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x567f60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_567f84:;
    c->r[1] = c->r[0] + c->r[3];
    c->r[3] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x140u);
    { uint32_t ea = c->r[1] + 0x1au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x1eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST16(ea, c->r[12]); }
    if (COND_NE) { goto L_567f84; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_567fb4(Cpu *restrict c) {
    FN_ENTER(0x567fb4u);
L_567fb4:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_567fb8(Cpu *restrict c) {
    FN_ENTER(0x567fb8u);
L_567fb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x567fc4u; f_22b908(c);
    c->r[0] = 0x14d4804u;
    { uint32_t ea = 0x567fd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x567fd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
