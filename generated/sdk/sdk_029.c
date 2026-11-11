#include "cpu.h"
#include "neon_rt.h"
void f_283aa78(Cpu *c);
void f_283aa90(Cpu *c);
void f_283ab44(Cpu *c);
void f_283abec(Cpu *c);
void f_283afa0(Cpu *c);
void f_283b2ac(Cpu *c);
void f_283b4e0(Cpu *c);
void f_283b4f8(Cpu *c);
void f_284bbb4(Cpu *c);
void f_284bbc0(Cpu *c);
void f_284bbd8(Cpu *c);
void f_284bbe4(Cpu *c);
void f_284bbfc(Cpu *c);
void f_284bc20(Cpu *c);
void f_284c760(Cpu *c);
void f_284c82c(Cpu *c);
void f_284c838(Cpu *c);
void f_284c844(Cpu *c);
void f_284c850(Cpu *c);
void f_284c85c(Cpu *c);
void f_284c868(Cpu *c);
void f_284c874(Cpu *c);
void f_284c880(Cpu *c);
void f_284c88c(Cpu *c);
void f_284c898(Cpu *c);
void f_284c8a4(Cpu *c);
void f_284c8b0(Cpu *c);
void f_284c8bc(Cpu *c);
void f_284c8c8(Cpu *c);
void f_284c8d4(Cpu *c);
void f_284c8e0(Cpu *c);
void f_284c8ec(Cpu *c);
void f_284c8f8(Cpu *c);
void f_284c904(Cpu *c);
void f_284c910(Cpu *c);
void f_284c91c(Cpu *c);
void f_284c928(Cpu *c);
void f_284c934(Cpu *c);
void f_284c940(Cpu *c);
void f_284c94c(Cpu *c);
void f_284c958(Cpu *c);
void f_284c964(Cpu *c);
void f_284c970(Cpu *c);
void f_284c97c(Cpu *c);
void f_284c988(Cpu *c);
void f_284c994(Cpu *c);
void f_284c9a0(Cpu *c);
void f_284c9ac(Cpu *c);
void f_284c9b8(Cpu *c);
void f_284c9c4(Cpu *c);
void f_284c9d0(Cpu *c);
void f_284c9dc(Cpu *c);
void f_284c9e8(Cpu *c);
void f_284c9f4(Cpu *c);
void f_284ca00(Cpu *c);
void f_284ca0c(Cpu *c);
void f_284ca18(Cpu *c);
void f_284ca24(Cpu *c);
void f_284ca30(Cpu *c);
void f_284ca3c(Cpu *c);
void f_284ca48(Cpu *c);
void f_284ca54(Cpu *c);
void f_284ca60(Cpu *c);
void f_284ca6c(Cpu *c);
void f_284ca78(Cpu *c);
void f_284ca84(Cpu *c);
void f_284ca90(Cpu *c);
void f_284ca9c(Cpu *c);
void f_284caa8(Cpu *c);
void f_284cab4(Cpu *c);
void f_284cac0(Cpu *c);
void f_284cacc(Cpu *c);
void f_284cad8(Cpu *c);
void f_284cae4(Cpu *c);
void f_284caf0(Cpu *c);
void f_284cafc(Cpu *c);
void f_284cb08(Cpu *c);
void f_284cb14(Cpu *c);
void f_284cb20(Cpu *c);
void f_284cb2c(Cpu *c);
void f_284cb38(Cpu *c);
void f_25f9090(Cpu *restrict c) {
    FN_ENTER(0x25f9090u);
L_25f9090:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[1] = 0x663330u;
    { uint32_t ea = c->r[4] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = 0x25f90b4u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9138; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x25f90c0u; f_284bbb4(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x341u;
    c->r[6] = c->r[13];
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f90d8u; f_284bbc0(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25f90e4u; f_284bc20(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f90f0u; f_284bbd8(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9110; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x25f9110u; f_284bbe4(c);
L_25f9110:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_25f91f0; }
    { uint32_t ea = c->r[4] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x334u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9138; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9138u; rt_dispatch(c);
L_25f9138:;
    { uint32_t ea = c->r[4] + 0x330u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x663298u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = 0x25f914cu + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0x25f9154u; f_284c82c(c); }
    { uint32_t ea = c->r[4] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x32cu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9174; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9174u; rt_dispatch(c);
L_25f9174:;
    { uint32_t ea = c->r[4] + 0x328u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x328u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9190; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9190u; rt_dispatch(c);
L_25f9190:;
    c->r[5] = c->r[4] + 0x304u;
    c->r[0] = c->r[5];
    c->r[14] = 0x25f919cu; f_283b4e0(c);
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_25f91e0; }
    { uint32_t ea = c->r[4] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f91bcu; rt_dispatch(c);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x300u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x31cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25f91d8; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f91d8u; rt_dispatch(c);
L_25f91d8:;
    { uint32_t ea = c->r[4] + 0x31cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x320u; ST32(ea, c->r[6]); }
L_25f91e0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x25f91e8u; f_283b4f8(c);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25f91f0:;
    c->r[0] = 0x53e480u;
    c->r[3] = 0x0u;
    c->r[0] = 0x25f9200u + c->r[0];
    c->r[1] = c->r[0];
    c->r[2] = c->r[0];
    c->r[14] = 0x25f9208u; f_283aa90(c);
    rt_udf(c, 0x25f9208u);
}
void f_25f9214(Cpu *restrict c) {
    FN_ENTER(0x25f9214u);
L_25f9214:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x25f922cu; f_284bbb4(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[13];
    c->r[1] = c->r[4] + 0x338u;
    c->r[0] = c->r[6];
    c->r[14] = 0x25f9240u; f_284bbc0(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25f924cu; f_284bc20(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f9258u; f_284bbd8(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9278; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x25f9278u; f_284bbe4(c);
L_25f9278:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_25f92a8; }
    { uint32_t ea = c->r[4] + 0x330u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x330u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f92a0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f92a0u; rt_dispatch(c);
L_25f92a0:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25f92a8:;
    c->r[0] = 0x53e3c8u;
    c->r[3] = 0x0u;
    c->r[0] = 0x25f92b8u + c->r[0];
    c->r[1] = c->r[0];
    c->r[2] = c->r[0];
    c->r[14] = 0x25f92c0u; f_283aa90(c);
    rt_udf(c, 0x25f92c0u);
}
void f_25f92c4(Cpu *restrict c) {
    FN_ENTER(0x25f92c4u);
L_25f92c4:;
    c->r[1] = c->r[0];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x32cu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_25f92e8(Cpu *restrict c) {
    FN_ENTER(0x25f92e8u);
L_25f92e8:;
    c->r[1] = c->r[0];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x328u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x328u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_25f930c(Cpu *restrict c) {
    FN_ENTER(0x25f930cu);
L_25f930c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[5] + 0x304u;
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9324u; f_283b4e0(c);
    { uint32_t ea = c->r[5] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[5] + 0x318u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_25f9368; }
    { uint32_t ea = c->r[5] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9344u; rt_dispatch(c);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0x300u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x31cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25f9360; }
    { uint32_t ea = c->r[5] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9360u; rt_dispatch(c);
L_25f9360:;
    { uint32_t ea = c->r[5] + 0x31cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x320u; ST32(ea, c->r[6]); }
L_25f9368:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_283b4f8(c);
}
void f_25f9374(Cpu *restrict c) {
    FN_ENTER(0x25f9374u);
L_25f9374:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x25f938cu; f_284bbb4(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x341u;
    c->r[6] = c->r[13];
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f93a4u; f_284bbc0(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25f93b0u; f_284bc20(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f93bcu; f_284bbd8(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f93dc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x25f93dcu; f_284bbe4(c);
L_25f93dc:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_25f940c; }
    { uint32_t ea = c->r[4] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x334u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9404; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9404u; rt_dispatch(c);
L_25f9404:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25f940c:;
    c->r[0] = 0x53e264u;
    c->r[3] = 0x0u;
    c->r[0] = 0x25f941cu + c->r[0];
    c->r[1] = c->r[0];
    c->r[2] = c->r[0];
    c->r[14] = 0x25f9424u; f_283aa90(c);
    rt_udf(c, 0x25f9424u);
}
void f_25f9428(Cpu *restrict c) {
    FN_ENTER(0x25f9428u);
L_25f9428:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[1] + 0x328u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9450u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25f9454(Cpu *restrict c) {
    FN_ENTER(0x25f9454u);
L_25f9454:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[1] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f947cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25f9480(Cpu *restrict c) {
    FN_ENTER(0x25f9480u);
L_25f9480:;
    { uint32_t ea = c->r[0] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_25f9488(Cpu *restrict c) {
    FN_ENTER(0x25f9488u);
L_25f9488:;
    return;
}
void f_25f948c(Cpu *restrict c) {
    FN_ENTER(0x25f948cu);
L_25f948c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[14] = 0x25f94acu; f_284c838(c);
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x25f94b8u; f_284c844(c);
    c->r[5] = 0x272u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25f9610; }
    c->r[5] = c->r[13] + 0x8u;
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x25f94d4u; f_284c850(c);
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[5];
    c->r[14] = 0x25f94e0u; f_284c85c(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9500; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0x8u;
    c->r[14] = 0x25f9500u; f_284bbe4(c);
L_25f9500:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25f9604; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0x25f9520u; f_284c868(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9540; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[4];
    c->r[14] = 0x25f9540u; f_284bbe4(c);
L_25f9540:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25f9568; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x25f9568u; f_284c868(c);
L_25f9568:;
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x25f9574u; f_284c874(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] + 0x4u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25f9590; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x25f9590u; f_284c868(c);
L_25f9590:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f95a4; }
    c->r[1] = c->r[4];
    c->r[14] = 0x25f95a4u; f_284bbe4(c);
L_25f95a4:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f95bc; }
    c->r[1] = c->r[13] + 0x8u;
    c->r[14] = 0x25f95bcu; f_284bbe4(c);
L_25f95bc:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f95dc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x25f95dcu; f_284bbe4(c);
L_25f95dc:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9608; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[13] + 0xcu;
    c->r[14] = 0x25f9600u; f_284bbe4(c);
    goto L_25f9608;
L_25f9604:;
    c->r[5] = 0x272u;
L_25f9608:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x25f9610u; f_284c880(c);
L_25f9610:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x25f9618u; f_284c88c(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_25f9624(Cpu *restrict c) {
    FN_ENTER(0x25f9624u);
L_25f9624:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x8u; }
    return;
}
void f_25f9634(Cpu *restrict c) {
    FN_ENTER(0x25f9634u);
L_25f9634:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25f9660; }
    c->r[1] = c->r[5];
    c->r[14] = 0x25f9658u; f_284bbe4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_25f9660:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[4];
    c->r[14] = 0x25f9680u; f_284bbe4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25f968c(Cpu *restrict c) {
    FN_ENTER(0x25f968cu);
L_25f968c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[3] = c->r[2];
    c->r[5] = ~0x15u;
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_CC) { goto L_25f96f4; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[2] + c->r[12];
    c->r[4] = c->r[4] + 0x10u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_HI) { goto L_25f96f4; }
    c->r[3] = 0x14cu;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[3] = 0x25f96dcu + c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[12] >> 2);
    c->r[12] = c->r[1] + c->r[14];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[1] + c->r[4];
    c->r[1] = c->r[12];
    c->r[14] = 0x25f96f4u; f_284c898(c);
L_25f96f4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25f9704(Cpu *restrict c) {
    FN_ENTER(0x25f9704u);
L_25f9704:;
    __attribute__((musttail)) return f_284c8a4(c);
}
void f_25f9708(Cpu *restrict c) {
    FN_ENTER(0x25f9708u);
L_25f9708:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[6] = c->r[3];
    c->r[8] = c->r[0];
    c->r[7] = c->r[2];
    c->r[5] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f9728u; f_284c8b0(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25f9820; }
    c->r[0] = c->r[6];
    c->r[14] = 0x25f973cu; f_284c8bc(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f9748u; f_284c8c8(c);
    c->r[0] = c->r[9] + (c->r[0] << 2);
    c->r[9] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_HI) { goto L_25f9820; }
    c->r[7] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x25f9774u; f_284c8bc(c);
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x25f9784u; f_284c8c8(c);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[4] = c->r[5] + c->r[1];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x25f97a4u; f_284c8d4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x25f97b4u; f_283aa78(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[5] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x25f97c4u; f_284c8e0(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x25f97d4u; f_283aa78(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], (c->r[1] >> 2));
    if (COND_EQ) { goto L_25f9810; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 2);
    c->r[0] = c->r[5] + c->r[0];
    c->r[2] = c->r[5] + c->r[2];
L_25f97f4:;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LS) { goto L_25f981c; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_25f97f4; }
L_25f9810:;
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_25f981c:;
    c->r[4] = 0x0u;
L_25f9820:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_25f9828(Cpu *restrict c) {
    FN_ENTER(0x25f9828u);
L_25f9828:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_25f9838; }
    return;
L_25f9838:;
    __attribute__((musttail)) return f_284c8ec(c);
}
void f_25f983c(Cpu *restrict c) {
    FN_ENTER(0x25f983cu);
L_25f983c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[3] = 0x1510u;
    c->r[4] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x530000u;
    c->r[12] = f_adds(c, c->r[3], 0xc10u);
    c->r[14] = c->r[4] + 0x0u + c->cf;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x6u);
    if (COND_HI) { goto L_25f9928; }
    c->r[4] = (c->r[4] << 2);
    c->r[5] = 0x25f9874u + 0x4u;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->pc = c->r[4] + c->r[5]; switch (c->pc) { case 0x25f9894u: goto L_25f9894; case 0x25f98a0u: goto L_25f98a0; case 0x25f98acu: goto L_25f98ac; case 0x25f98b8u: goto L_25f98b8; case 0x25f98c4u: goto L_25f98c4; case 0x25f98d0u: goto L_25f98d0; case 0x25f98d8u: goto L_25f98d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25f9894:;
    c->r[12] = 0x2120u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xa530000u;
    goto L_25f98d4;
L_25f98a0:;
    c->r[12] = 0x1918u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xa880000u;
    goto L_25f98d4;
L_25f98ac:;
    c->r[12] = 0x1210u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xa880000u;
    goto L_25f98d4;
L_25f98b8:;
    c->r[12] = 0x2120u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xd10000u;
    goto L_25f98d4;
L_25f98c4:;
    c->r[12] = 0x1810u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x6880000u;
    goto L_25f98d4;
L_25f98d0:;
    c->r[12] = c->r[3];
L_25f98d4:;
    c->r[14] = 0x1u;
L_25f98d8:;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    if (COND_NE) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3];
    c->r[14] = 0x25f9920u; f_284c8f8(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25f9928:;
    c->r[0] = 0x53dd48u;
    c->r[2] = 0x0u;
    c->r[0] = 0x25f9938u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25f993cu; f_283afa0(c);
    rt_udf(c, 0x25f993cu);
}
void f_25f9940(Cpu *restrict c) {
    FN_ENTER(0x25f9940u);
L_25f9940:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); c->r[0] = c->r[0] + 0x10u; }
    c->r[1] = 0x100u;
    c->r[14] = 0x25f995cu; f_283ab44(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25f9964(Cpu *restrict c) {
    FN_ENTER(0x25f9964u);
L_25f9964:;
    return;
}
void f_25f9968(Cpu *restrict c) {
    FN_ENTER(0x25f9968u);
L_25f9968:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x25f9980u; f_284bbfc(c);
    c->r[7] = c->r[0];
    c->r[14] = 0x25f9988u; f_283b4e0(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x25f9990u; f_283b4f8(c);
    c->r[0] = c->r[6] + 0x8u;
    c->r[14] = 0x25f9998u; f_284c760(c);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = 0xfu;
    c->pc = c->r[7]; c->r[14] = 0x25f99a8u; rt_dispatch(c);
    c->r[0] = 0x662a30u;
    c->r[2] = c->r[4] + 0x1cu;
    { uint32_t ea = 0x25f99b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x5420f3u;
    c->r[1] = 0x25f99ccu + c->r[1];
    c->pc = c->r[3]; c->r[14] = 0x25f99ccu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x34u;
    c->r[14] = 0x25f99dcu; f_284c904(c);
    c->r[0] = 0x0u;
    c->r[12] = c->r[4] + 0x38u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_25f9a18(Cpu *restrict c) {
    FN_ENTER(0x25f9a18u);
L_25f9a18:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x25f9a30u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25f9a38u; f_284c910(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25f9a54(Cpu *restrict c) {
    FN_ENTER(0x25f9a54u);
L_25f9a54:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x80u;
    c->r[4] = c->r[1];
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = 0x58u;
    c->r[14] = 0x25f9a70u; f_283ab44(c);
    c->r[12] = 0x1510u;
    c->r[2] = 0x1u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x530000u;
    c->r[0] = f_adds(c, c->r[12], 0xc10u);
    c->r[3] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_HI) { goto L_25f9b4c; }
    c->r[2] = (c->r[2] << 2);
    c->r[1] = 0x25f9a9cu + 0x4u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[1]; switch (c->pc) { case 0x25f9abcu: goto L_25f9abc; case 0x25f9ac8u: goto L_25f9ac8; case 0x25f9ad4u: goto L_25f9ad4; case 0x25f9ae0u: goto L_25f9ae0; case 0x25f9aecu: goto L_25f9aec; case 0x25f9af8u: goto L_25f9af8; case 0x25f9b00u: goto L_25f9b00; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25f9abc:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa530000u;
    goto L_25f9afc;
L_25f9ac8:;
    c->r[0] = 0x1918u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9afc;
L_25f9ad4:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9afc;
L_25f9ae0:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    goto L_25f9afc;
L_25f9aec:;
    c->r[0] = 0x1810u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6880000u;
    goto L_25f9afc;
L_25f9af8:;
    c->r[0] = c->r[12];
L_25f9afc:;
    c->r[3] = 0x1u;
L_25f9b00:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[11] - 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[11] - 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[4] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); }
    c->r[4] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9b3cu; f_284c8f8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9b44u; f_284c91c(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25f9b4c:;
    c->r[0] = 0x53db24u;
    c->r[2] = 0x0u;
    c->r[0] = 0x25f9b5cu + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25f9b60u; f_283afa0(c);
    rt_udf(c, 0x25f9b60u);
}
void f_25f9b64(Cpu *restrict c) {
    FN_ENTER(0x25f9b64u);
L_25f9b64:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x80u;
    c->r[4] = c->r[1];
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = 0x58u;
    c->r[14] = 0x25f9b80u; f_283ab44(c);
    c->r[12] = 0x1510u;
    c->r[2] = 0x1u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x530000u;
    c->r[0] = f_adds(c, c->r[12], 0xc10u);
    c->r[3] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_HI) { goto L_25f9c60; }
    c->r[2] = (c->r[2] << 2);
    c->r[1] = 0x25f9bacu + 0x4u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[1]; switch (c->pc) { case 0x25f9bccu: goto L_25f9bcc; case 0x25f9bd8u: goto L_25f9bd8; case 0x25f9be4u: goto L_25f9be4; case 0x25f9bf0u: goto L_25f9bf0; case 0x25f9bfcu: goto L_25f9bfc; case 0x25f9c08u: goto L_25f9c08; case 0x25f9c10u: goto L_25f9c10; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25f9bcc:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa530000u;
    goto L_25f9c0c;
L_25f9bd8:;
    c->r[0] = 0x1918u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9c0c;
L_25f9be4:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9c0c;
L_25f9bf0:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    goto L_25f9c0c;
L_25f9bfc:;
    c->r[0] = 0x1810u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6880000u;
    goto L_25f9c0c;
L_25f9c08:;
    c->r[0] = c->r[12];
L_25f9c0c:;
    c->r[3] = 0x1u;
L_25f9c10:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[11] - 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[11] - 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[4] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); }
    c->r[4] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9c4cu; f_284c8f8(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x25f9c58u; f_284c928(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25f9c60:;
    c->r[0] = 0x53da10u;
    c->r[2] = 0x0u;
    c->r[0] = 0x25f9c70u + c->r[0];
    c->r[1] = c->r[0];
    c->r[14] = 0x25f9c74u; f_283afa0(c);
    rt_udf(c, 0x25f9c74u);
}
void f_25f9c78(Cpu *restrict c) {
    FN_ENTER(0x25f9c78u);
L_25f9c78:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x80u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_CS) { goto L_25f9d8c; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[1] = 0x7bu;
    c->r[5] = 0x1u;
    { uint32_t r = c->r[5] & shc_lsr(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25f9d8c; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = 0x58u;
    c->r[14] = 0x25f9cb4u; f_283ab44(c);
    c->r[1] = 0x1510u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    c->r[0] = f_adds(c, c->r[1], 0xc10u);
    c->r[3] = c->r[5] + 0x0u + c->cf;
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_HI) { goto L_25f9d98; }
    c->r[2] = 0x5a1af8u;
    c->r[2] = 0x25f9cd8u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[6] << 2);
    c->r[6] = 0x25f9ce4u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[6]; switch (c->pc) { case 0x25f9d04u: goto L_25f9d04; case 0x25f9d10u: goto L_25f9d10; case 0x25f9d1cu: goto L_25f9d1c; case 0x25f9d28u: goto L_25f9d28; case 0x25f9d34u: goto L_25f9d34; case 0x25f9d40u: goto L_25f9d40; case 0x25f9d48u: goto L_25f9d48; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25f9d04:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa530000u;
    goto L_25f9d44;
L_25f9d10:;
    c->r[0] = 0x1918u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9d44;
L_25f9d1c:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9d44;
L_25f9d28:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    goto L_25f9d44;
L_25f9d34:;
    c->r[0] = 0x1810u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6880000u;
    goto L_25f9d44;
L_25f9d40:;
    c->r[0] = c->r[1];
L_25f9d44:;
    c->r[3] = 0x1u;
L_25f9d48:;
    c->r[1] = 0x1u;
    c->r[6] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[11] - 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x25f9d7cu; f_284c8f8(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = udiv32(c->r[0], c->r[5]);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25f9d8c:;
    c->r[0] = 0x53d8e8u;
    c->r[0] = 0x25f9d98u + c->r[0];
    goto L_25f9da0;
L_25f9d98:;
    c->r[0] = 0x53d8dcu;
    c->r[0] = 0x25f9da4u + c->r[0];
L_25f9da0:;
    c->r[1] = c->r[0];
    c->r[2] = 0x0u;
    c->r[14] = 0x25f9dacu; f_283afa0(c);
    rt_udf(c, 0x25f9dacu);
}
void f_25f9db8(Cpu *restrict c) {
    FN_ENTER(0x25f9db8u);
L_25f9db8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xb4u;
    c->r[5] = c->r[0];
    c->r[10] = c->r[1];
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    c->r[6] = 0x272u;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LE) { goto L_25fa0d8; }
    c->r[0] = c->r[13] + 0x58u;
    c->r[1] = 0x58u;
    c->r[14] = 0x25f9df0u; f_283ab44(c);
    c->r[4] = 0x1510u;
    c->r[1] = 0x1u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x530000u;
    c->r[0] = f_adds(c, c->r[4], 0xc10u);
    c->r[3] = c->r[1] + 0x0u + c->cf;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_25fa0e4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x25f9e1cu + 0xcu;
    c->r[7] = 0x2120u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xd10000u;
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x25f9e44u: goto L_25f9e44; case 0x25f9e50u: goto L_25f9e50; case 0x25f9e5cu: goto L_25f9e5c; case 0x25f9e68u: goto L_25f9e68; case 0x25f9e70u: goto L_25f9e70; case 0x25f9e7cu: goto L_25f9e7c; case 0x25f9e84u: goto L_25f9e84; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25f9e44:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa530000u;
    goto L_25f9e80;
L_25f9e50:;
    c->r[0] = 0x1918u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9e80;
L_25f9e5c:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9e80;
L_25f9e68:;
    c->r[0] = c->r[7];
    goto L_25f9e80;
L_25f9e70:;
    c->r[0] = 0x1810u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6880000u;
    goto L_25f9e80;
L_25f9e7c:;
    c->r[0] = c->r[4];
L_25f9e80:;
    c->r[3] = 0x1u;
L_25f9e84:;
    c->r[1] = 0x1u;
    c->r[7] = c->r[13] + 0x20u;
    c->r[4] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9ec4u; f_284c8f8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9eccu; f_284c91c(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_HI) { goto L_25fa0d8; }
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x25f9ee0u; f_284c760(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x58u;
    c->r[1] = 0x58u;
    c->r[14] = 0x25f9ef0u; f_283ab44(c);
    c->r[6] = 0x1510u;
    c->r[1] = 0x1u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x530000u;
    c->r[0] = f_adds(c, c->r[6], 0xc10u);
    c->r[3] = c->r[1] + 0x0u + c->cf;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_25fa0f0; }
    c->r[2] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x25f9f28u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x25f9f48u: goto L_25f9f48; case 0x25f9f54u: goto L_25f9f54; case 0x25f9f60u: goto L_25f9f60; case 0x25f9f6cu: goto L_25f9f6c; case 0x25f9f78u: goto L_25f9f78; case 0x25f9f84u: goto L_25f9f84; case 0x25f9f8cu: goto L_25f9f8c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25f9f48:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa530000u;
    goto L_25f9f88;
L_25f9f54:;
    c->r[0] = 0x1918u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9f88;
L_25f9f60:;
    c->r[0] = 0x1210u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa880000u;
    goto L_25f9f88;
L_25f9f6c:;
    c->r[0] = 0x2120u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd10000u;
    goto L_25f9f88;
L_25f9f78:;
    c->r[0] = 0x1810u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6880000u;
    goto L_25f9f88;
L_25f9f84:;
    c->r[0] = c->r[6];
L_25f9f88:;
    c->r[3] = 0x1u;
L_25f9f8c:;
    c->r[1] = 0x1u;
    c->r[6] = 0x0u;
    c->r[4] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x25f9fc8u; f_284c8f8(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x25f9fd4u; f_284c928(c);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x48u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x36u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x40u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fa00cu; f_284c934(c);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xc00u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[7] + (c->r[10] << 2);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    c->r[4] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[14] = 0x25fa054u; f_284c940(c);
    c->r[6] = 0x272u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fa0d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x58u;
    c->r[14] = 0x25fa078u; f_284c94c(c);
    { uint32_t ea = c->r[7] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x25fa08cu; f_284c958(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[7] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25fa098u; f_284c964(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[7] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25fa0a4u; f_284c970(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[10];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = 0x13u;
    c->pc = c->r[7]; c->r[14] = 0x25fa0d4u; rt_dispatch(c);
    c->r[6] = 0x0u;
L_25fa0d8:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fa0e4:;
    c->r[0] = 0x53d590u;
    c->r[0] = 0x25fa0f0u + c->r[0];
    goto L_25fa0f8;
L_25fa0f0:;
    c->r[0] = 0x53d584u;
    c->r[0] = 0x25fa0fcu + c->r[0];
L_25fa0f8:;
    c->r[1] = c->r[0];
    c->r[2] = 0x0u;
    c->r[14] = 0x25fa104u; f_283afa0(c);
    rt_udf(c, 0x25fa104u);
}
void f_25fa10c(Cpu *restrict c) {
    FN_ENTER(0x25fa10cu);
L_25fa10c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x25fa12cu; f_284c760(c);
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0x48u;
    c->r[1] = c->r[11] - 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x25fa13cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x272u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_25fa194; }
    { uint32_t ea = c->r[11] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); }
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[14]); }
    c->r[2] = 0x30u;
    c->r[3] = 0x0u;
    c->pc = c->r[12]; c->r[14] = 0x25fa18cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x272u; }
L_25fa194:;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fa19c(Cpu *restrict c) {
    FN_ENTER(0x25fa19cu);
L_25fa19c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x25fa1b8u; f_284c760(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x48u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0x25fa1d4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fa1e4; }
    c->r[0] = 0x272u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25fa1e4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x25fa1f8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x272u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_25fa204(Cpu *restrict c) {
    FN_ENTER(0x25fa204u);
L_25fa204:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    return;
}
void f_25fa214(Cpu *restrict c) {
    FN_ENTER(0x25fa214u);
L_25fa214:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = __builtin_bswap32(c->r[2]);
    c->r[0] = (c->r[0] >> 16);
    return;
}
void f_25fa22c(Cpu *restrict c) {
    FN_ENTER(0x25fa22cu);
L_25fa22c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[12] + c->r[1]; uint32_t v = LD16(ea); c->r[12] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fa314; }
    c->r[5] = rev16_32(c->r[7]);
    c->r[7] = c->r[0] + c->r[1];
    c->r[4] = 0x0u;
    c->r[14] = c->r[7] + 0x3u;
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
L_25fa258:;
    { uint32_t ea = c->r[14] - 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x6cu);
    if (COND_EQ) { goto L_25fa298; }
    (void)f_subs(c, c->r[6], 0x6bu);
    if (COND_EQ) { goto L_25fa2bc; }
    (void)f_subs(c, c->r[6], 0x44u);
    if (COND_NE) { goto L_25fa300; }
    { uint32_t ea = c->r[14]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x46u);
    if (COND_EQ) { { uint32_t ea = c->r[14] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], 0x4cu); }
    if (COND_NE) { goto L_25fa300; }
    { uint32_t ea = c->r[14] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x54u);
    if (COND_EQ) { goto L_25fa2dc; }
    goto L_25fa300;
L_25fa298:;
    { uint32_t ea = c->r[14]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x61u);
    if (COND_NE) { goto L_25fa300; }
    { uint32_t ea = c->r[14] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x74u);
    if (COND_EQ) { { uint32_t ea = c->r[14] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], 0x6eu); }
    if (COND_NE) { goto L_25fa300; }
    goto L_25fa2dc;
L_25fa2bc:;
    { uint32_t ea = c->r[14]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x61u);
    if (COND_EQ) { { uint32_t ea = c->r[14] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], 0x6eu); }
    if (COND_NE) { goto L_25fa300; }
    { uint32_t ea = c->r[14] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x61u);
    if (COND_NE) { goto L_25fa300; }
L_25fa2dc:;
    { uint32_t ea = c->r[14] + 0x3u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[7] = c->r[12];
    c->r[8] = rev16_32(c->r[6]);
    { uint32_t ea = c->r[7] + c->r[8]; uint32_t v = LD16(ea); c->r[7] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_25fa320; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_25fa31c; }
L_25fa300:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[14] = c->r[14] + 0x6u;
    c->r[6] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CC) { goto L_25fa258; }
L_25fa314:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_25fa31c:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD16(ea); c->r[6] = v; }
L_25fa320:;
    c->r[5] = __builtin_bswap32(c->r[6]);
    c->r[7] = c->r[7] + ROR32(c->r[5], 16);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fa314; }
    c->r[4] = rev16_32(c->r[6]);
    c->r[2] = c->r[0] + c->r[2];
    c->r[5] = rev16_32(c->r[7]);
    c->r[1] = c->r[4] + c->r[1];
    c->r[12] = c->r[2] + 0x8u;
    c->r[14] = c->r[2] + 0x2u;
    c->r[4] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->r[0] = c->r[0] + 0x6u;
L_25fa364:;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[5] = c->r[14];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fa398; }
    c->r[5] = rev16_32(c->r[6]);
    c->r[6] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LS) { c->r[5] = 0x1u; }
    c->r[5] = c->r[5] - 0x1u;
    c->r[6] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[6] = (c->r[6] << 1);
    c->r[5] = c->r[6] + (uint32_t)(uint16_t)(c->r[5]);
    c->r[5] = c->r[12] + (c->r[5] << 1);
L_25fa398:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_25fa3d4; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_25fa3d4; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_25fa3d4; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_25fa3ec; }
L_25fa3d4:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    c->r[5] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_CC) { goto L_25fa364; }
    goto L_25fa314;
L_25fa3ec:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_25fa3f8(Cpu *restrict c) {
    FN_ENTER(0x25fa3f8u);
L_25fa3f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[4] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x100u);
    c->r[3] = rev16_32(c->r[0]);
    if (COND_NE) { goto L_25fa450; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fa4b0; }
    c->r[0] = 0x0u;
    c->r[12] = 0xffffu;
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
L_25fa42c:;
    { uint32_t r = c->r[2] & c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa4bc; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[1] + 0x2u;
    c->r[2] = c->r[2] - 0x1u;
    c->r[4] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CC) { goto L_25fa42c; }
    goto L_25fa4b0;
L_25fa450:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fa4b0; }
    c->r[0] = 0x0u;
    c->r[12] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[14] = 0xffffu;
L_25fa464:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[3] = rev16_32(c->r[3]);
    c->r[4] = __builtin_bswap32(c->r[4]);
    (void)f_subs(c, c->r[3], (c->r[4] >> 16));
    if (COND_HI) { goto L_25fa49c; }
    c->r[4] = (c->r[4] >> 16);
L_25fa480:;
    { uint32_t r = c->r[2] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa4b4; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = c->r[2] - 0x1u;
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_LS) { goto L_25fa480; }
L_25fa49c:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[1] + 0x6u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_CC) { goto L_25fa464; }
L_25fa4b0:;
    c->r[3] = 0x0u;
L_25fa4b4:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25fa4bc:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = rev16_32(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fa4cc(Cpu *restrict c) {
    FN_ENTER(0x25fa4ccu);
L_25fa4cc:;
    c->r[12] = 0x0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[12]); }
    if (COND_EQ) { goto L_25fa500; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[12] = c->r[12] + 0x2u; c->r[14] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    c->r[12] = rev16_32(c->r[14]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
L_25fa500:;
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa514; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_25fa514:;
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa530; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[12] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = rev16_32(c->r[12]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
L_25fa530:;
    { uint32_t r = c->r[3] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa544; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_25fa544:;
    { uint32_t r = c->r[3] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa558; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_25fa558:;
    { uint32_t r = c->r[3] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa56c; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_25fa56c:;
    { uint32_t r = c->r[3] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa580; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_25fa580:;
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_25fa598(Cpu *restrict c) {
    FN_ENTER(0x25fa598u);
L_25fa598:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa5ac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa5ac:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa5c0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa5c0:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa5d4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa5d4:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa5e8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa5e8:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa5fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa5fc:;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa610; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa610:;
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fa624; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa624:;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_25fa63c(Cpu *restrict c) {
    FN_ENTER(0x25fa63cu);
L_25fa63c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t r = c->r[14] | c->r[12]; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fa678; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = (c->r[4] << 3);
    { uint32_t ea = c->r[1] + c->r[4]; ST16(ea, c->r[2]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[14]); }
L_25fa678:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fa688(Cpu *restrict c) {
    FN_ENTER(0x25fa688u);
L_25fa688:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[12] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[6], 0x100u);
    c->r[2] = rev16_32(c->r[5]);
    if (COND_NE) { goto L_25fa734; }
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[12] = c->r[12] + 0x2u; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[10] | c->r[8]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_EQ) { goto L_25fa848; }
    c->r[5] = rev16_32(c->r[5]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fa810; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[6] = 0x0u;
L_25fa6e4:;
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[7] = __builtin_bswap32(c->r[7]);
    (void)f_subs(c, c->r[14], (c->r[7] >> 16));
    if (COND_NE) { goto L_25fa720; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = (c->r[2] << 3);
    { uint32_t ea = c->r[7] + c->r[2]; ST16(ea, c->r[3]); c->r[7] = ea; }
    c->r[2] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x6u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa720:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[12] = c->r[12] + 0x2u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CC) { goto L_25fa6e4; }
    goto L_25fa848;
L_25fa734:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fa848; }
    c->r[4] = c->r[10] | c->r[8];
    c->r[6] = 0x0u;
    c->r[9] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
L_25fa74c:;
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    (void)f_subs(c, c->r[14], (c->r[2] >> 16));
    if (COND_NE) { goto L_25fa7f8; }
    { uint32_t ea = c->r[12] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[5] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[7] = rev16_32(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_HI) { goto L_25fa7f8; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fa7c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fa7d8; }
L_25fa78c:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = (c->r[2] << 3);
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[3]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[10]); }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[4], c->r[5]);
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    if (COND_LS) { goto L_25fa78c; }
    goto L_25fa7f8;
L_25fa7c4:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_LS) { goto L_25fa7c4; }
    goto L_25fa7f8;
L_25fa7d8:;
    c->r[4] = c->r[14];
L_25fa7dc:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[2] = c->r[2] + 0x1u;
    c->r[14] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[14], c->r[5]);
    if (COND_LS) { goto L_25fa7dc; }
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
L_25fa7f8:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[12] = c->r[12] + 0x6u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_CC) { goto L_25fa74c; }
    goto L_25fa848;
L_25fa810:;
    c->r[1] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
L_25fa818:;
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = __builtin_bswap32(c->r[3]);
    (void)f_subs(c, c->r[14], (c->r[3] >> 16));
    if (COND_NE) { goto L_25fa834; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
L_25fa834:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[12] = c->r[12] + 0x2u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25fa818; }
L_25fa848:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fa850(Cpu *restrict c) {
    FN_ENTER(0x25fa850u);
L_25fa850:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    c->r[9] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[14], 0x100u);
    c->r[12] = rev16_32(c->r[0]);
    if (COND_NE) { goto L_25fa918; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fa9cc; }
    c->r[3] = c->r[2] + c->r[3];
    c->r[9] = rev16_32(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[10] = 0x0u;
    c->r[7] = c->r[3] + 0x6u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_25fa8bc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    (void)f_subs(c, c->r[8], (c->r[0] >> 16));
    if (COND_NE) { goto L_25fa904; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25fa8f0u; f_284c97c(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
L_25fa904:;
    c->r[10] = c->r[10] + 0x1u;
    c->r[7] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[10], c->r[9]);
    if (COND_CC) { goto L_25fa8bc; }
    goto L_25fa9cc;
L_25fa918:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fa9cc; }
    c->r[3] = 0x0u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[12]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_25fa92c:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    (void)f_subs(c, c->r[8], (c->r[0] >> 16));
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { goto L_25fa9a8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[10] = rev16_32(c->r[0]);
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_HI) { goto L_25fa9a8; }
L_25fa968:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[10]);
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0x25fa984u; f_284c97c(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[10]);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LS) { goto L_25fa968; }
L_25fa9a8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[9] = c->r[9] + 0x6u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_25fa92c; }
L_25fa9cc:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fa9d4(Cpu *restrict c) {
    FN_ENTER(0x25fa9d4u);
L_25fa9d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x50u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[2];
    c->r[7] = c->r[2] + 0x2u;
    c->r[6] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[4] = c->r[4] + 0x8u; c->r[12] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[7] = c->r[2] + 0x6u;
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25faeb8; }
    c->r[2] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    c->r[12] = __builtin_bswap32(c->r[6]);
    c->r[9] = 0x10u;
    c->r[6] = c->r[8];
    c->r[8] = 0x8u;
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[10] = c->r[3];
    c->r[3] = __builtin_bswap32(c->r[14]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x80u;
    c->r[1] = c->r[7] & ROR32(c->r[12], 16);
    c->r[2] = c->r[2] & ROR32(c->r[12], 16);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x40u;
    c->r[2] = c->r[2] & ROR32(c->r[12], 16);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x20u;
    c->r[2] = c->r[2] & ROR32(c->r[12], 16);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[9] & ROR32(c->r[12], 16);
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8] & ROR32(c->r[12], 16);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    c->r[5] = c->r[2] & ROR32(c->r[12], 16);
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[5]); }
    c->r[5] = 0x1u;
    c->r[1] = c->r[5] & ROR32(c->r[12], 16);
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x80u;
    c->r[1] = c->r[1] & ROR32(c->r[3], 16);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    c->r[1] = c->r[1] & ROR32(c->r[3], 16);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[1] = c->r[1] & ROR32(c->r[3], 16);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] & ROR32(c->r[3], 16);
    c->r[9] = c->r[7] & ROR32(c->r[3], 16);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] & ROR32(c->r[3], 16);
    c->r[8] = c->r[2] & ROR32(c->r[3], 16);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] & ROR32(c->r[3], 16);
    c->r[5] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[1]);
    c->r[1] = c->r[6] + c->r[10];
    c->r[2] = c->r[10] + ROR32(c->r[2], 16);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_25fac7c;
L_25fab2c:;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[3] = c->r[4] + 0x6u;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { c->r[3] = c->r[4] + 0x4u; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[6] = rev16_32(c->r[1]);
    if (COND_NE) { goto L_25fab58; }
    c->r[4] = c->r[3];
    c->r[2] = 0x0u;
    goto L_25fab68;
L_25fab58:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[1] = v; }
    c->r[4] = c->r[3];
    c->r[1] = __builtin_bswap32(c->r[1]);
    c->r[2] = (c->r[1] >> 16);
L_25fab68:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    { uint32_t r = c->r[2] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_25fabe4; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fabd8; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = rev16_32(c->r[12]);
    c->r[7] = (c->r[7] << 3);
    { uint32_t ea = c->r[3] + c->r[7]; ST16(ea, c->r[10]); c->r[3] = ea; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x6u; ST16(ea, c->r[6]); }
L_25fabd8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_25fabe4:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = (uint32_t)(uint16_t)(c->r[14]);
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_25fab2c; }
L_25fac58:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[12]);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_25faeb8; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0xffffu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
L_25fac7c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[4] = c->r[4] + 0x2u; c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    c->r[14] = (c->r[2] >> 16);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[1] = rev16_32(c->r[2]);
    (void)f_subs(c, c->r[3], 0x100u);
    if (COND_NE) { goto L_25face8; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fad50; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x0u;
    c->r[7] = c->r[12];
L_25facbc:;
    { uint32_t r = c->r[7] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fad58; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[6] = c->r[6] + 0x2u;
    c->r[7] = c->r[7] - 0x1u;
    c->r[4] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CC) { goto L_25facbc; }
L_25face0:;
    c->r[10] = 0x0u;
    goto L_25fad60;
L_25face8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fad50; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[12];
L_25facfc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[10] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    (void)f_subs(c, c->r[10], (c->r[2] >> 16));
    if (COND_HI) { goto L_25fad34; }
    c->r[2] = (c->r[2] >> 16);
L_25fad18:;
    { uint32_t r = c->r[7] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fad60; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[7] = c->r[7] - 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[10]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LS) { goto L_25fad18; }
L_25fad34:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[4] = c->r[4] + 0x6u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25facfc; }
    goto L_25face0;
L_25fad50:;
    c->r[10] = 0x0u;
    goto L_25fad64;
L_25fad58:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[10] = rev16_32(c->r[2]);
L_25fad60:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
L_25fad64:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[14]; uint32_t v = LD16(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fac58; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[3] + 0x2u;
    c->r[14] = rev16_32(c->r[2]);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_25fab2c; }
L_25fad8c:;
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x4u; c->r[6] = v; }
    if (COND_EQ) { c->r[3] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_25fadb0; }
    c->r[4] = c->r[3];
    c->r[2] = 0x0u;
    goto L_25fadc0;
L_25fadb0:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[2] = v; }
    c->r[4] = c->r[3];
    c->r[2] = __builtin_bswap32(c->r[2]);
    c->r[2] = (c->r[2] >> 16);
L_25fadc0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fae40; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fae34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = __builtin_bswap32(c->r[6]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = (c->r[3] >> 16);
    c->r[1] = (c->r[1] << 3);
    { uint32_t ea = c->r[6] + c->r[1]; ST16(ea, c->r[10]); c->r[6] = ea; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x6u; ST16(ea, c->r[1]); }
L_25fae34:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_25fae40:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = (uint32_t)(uint16_t)(c->r[14]);
    if (COND_NE) { c->r[4] = c->r[4] + 0x2u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_25fad8c; }
    goto L_25fac58;
L_25faeb8:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25faec0(Cpu *restrict c) {
    FN_ENTER(0x25faec0u);
L_25faec0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x6cu;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4] + 0x2u;
    c->r[1] = c->r[4] + 0x8u;
    c->r[2] = c->r[4] + 0xau;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x6u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xeu;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fb378; }
    c->r[0] = rev16_32(c->r[2]);
    c->r[6] = __builtin_bswap32(c->r[6]);
    c->r[5] = __builtin_bswap32(c->r[5]);
    c->r[1] = 0x1u;
    c->r[8] = 0x8u;
    c->r[4] = 0x10u;
    c->r[14] = 0x40u;
    c->r[10] = 0x80u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] & ROR32(c->r[5], 16);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[2]); }
    c->r[0] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf8u;
    c->r[0] = c->r[0] & ROR32(c->r[6], 16);
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = c->r[1] & ROR32(c->r[5], 16);
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = c->r[1] & ROR32(c->r[5], 16);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = c->r[8] & ROR32(c->r[5], 16);
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = c->r[4] & ROR32(c->r[5], 16);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = 0x20u;
    c->r[1] = c->r[2] & ROR32(c->r[5], 16);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[14] & ROR32(c->r[5], 16);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[10] & ROR32(c->r[5], 16);
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = __builtin_bswap32(c->r[12]);
    c->r[5] = c->r[3] + ROR32(c->r[0], 16);
    c->r[0] = __builtin_bswap32(c->r[9]);
    c->r[0] = c->r[3] + ROR32(c->r[0], 16);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] & ROR32(c->r[6], 16);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] & ROR32(c->r[6], 16);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] & ROR32(c->r[6], 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] & ROR32(c->r[6], 16);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & ROR32(c->r[6], 16);
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[9] = c->r[0] & ROR32(c->r[6], 16);
    c->r[0] = 0x2u;
    c->r[10] = c->r[0] & ROR32(c->r[6], 16);
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] & ROR32(c->r[6], 16);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_25fb04c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fb364; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fb228; }
L_25fb068:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_25fb07c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_25fb07c:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_25fb09c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = __builtin_bswap32(c->r[1]);
    c->r[0] = (c->r[0] >> 16);
L_25fb09c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb0b4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb0b4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb0cc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb0cc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb0e4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb0e4:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb0fc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb0fc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb114; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb114:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb12c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb12c:;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb144; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb144:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb15c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb15c:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb174; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb174:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb18c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb18c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb1a4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb1a4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb1bc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb1bc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb1d4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_25fb1d4:;
    c->r[3] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[2] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[2] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[14] = 0x25fb20cu; f_284c988(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_25fb068; }
    goto L_25fb364;
L_25fb228:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = c->r[2] + 0x4u; }
    if (COND_NE) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[2] = __builtin_bswap32(c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_25fb264; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[1] = __builtin_bswap32(c->r[1]);
    c->r[1] = (c->r[1] >> 16);
L_25fb264:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] >> 16);
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_25fb314; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x2u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_25fb314:;
    c->r[6] = c->r[5];
    c->r[3] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x8u;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[14] = 0x25fb34cu; f_284c988(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_25fb228; }
L_25fb364:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[8]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_25fb04c; }
L_25fb378:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fb380(Cpu *restrict c) {
    FN_ENTER(0x25fb380u);
L_25fb380:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + c->r[3];
    c->r[6] = c->r[2];
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fb4dc; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = rev16_32(c->r[0]);
    c->r[10] = 0x0u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[6] + c->r[2];
    c->r[3] = c->r[2] + 0x6u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
L_25fb3dc:;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[7] = c->r[1] + (c->r[0] >> 16);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb4c4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x200u);
    if (COND_NE) { goto L_25fb4c4; }
    c->r[9] = rev16_32(c->r[1]);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 16);
    c->r[4] = 0x0u;
    c->r[8] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + c->r[0];
L_25fb438:;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = __builtin_bswap32(c->r[2]);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    if (COND_EQ) { goto L_25fb494; }
    c->r[1] = (c->r[1] >> 16);
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_25fb4b4; }
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25fb490u; f_284c994(c);
    goto L_25fb4b4;
L_25fb494:;
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25fb4b4u; f_284c9a0(c);
L_25fb4b4:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[9]);
    if (COND_LT) { goto L_25fb438; }
L_25fb4c4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[10]);
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_CC) { goto L_25fb3dc; }
L_25fb4dc:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fb4e4(Cpu *restrict c) {
    FN_ENTER(0x25fb4e4u);
L_25fb4e4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x10u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4];
    c->r[6] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = c->r[5] + 0x4u; c->r[14] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[7] = __builtin_bswap32(c->r[6]);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[6] = 0x1u;
    c->r[8] = (c->r[7] >> 16);
    { uint32_t sc = ((c->r[7] >> 15) & 1); uint32_t r = c->r[6] & (c->r[7] >> 16); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb544; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[5] = c->r[4] + 0x6u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[4] = __builtin_bswap32(c->r[6]);
    c->r[4] = (c->r[4] >> 16);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
L_25fb544:;
    { uint32_t r = c->r[8] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = __builtin_bswap32(c->r[14]);
    c->r[14] = 0x0u;
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); } }
    { uint32_t r = c->r[8] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb570; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[6] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[6] = __builtin_bswap32(c->r[6]);
    c->r[14] = (c->r[6] >> 16);
L_25fb570:;
    { uint32_t r = c->r[8] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[7] >> 16);
    c->r[4] = (c->r[8] >> 7) & 0x1u;
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    { uint32_t r = c->r[8] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    { uint32_t r = c->r[8] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    { uint32_t r = c->r[8] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    { uint32_t r = c->r[8] & 0x78u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_25fb5a8; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_25fb5b4; }
L_25fb5a8:;
    { uint32_t r = c->r[8] & 0x80u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
L_25fb5b4:;
    c->r[6] = c->r[2] + c->r[3];
    c->r[6] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fb7d8; }
    c->r[8] = rev16_32(c->r[6]);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[7] + c->r[3];
    c->r[10] = c->r[2] + (uint32_t)(uint16_t)(c->r[3]);
    c->r[2] = c->r[10] + 0x4u;
    { uint32_t r = c->r[14] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_25fb730; }
    c->r[9] = 0x0u;
    c->r[12] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
L_25fb5f8:;
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[7] = rev16_32(c->r[2]);
    (void)f_subs(c, c->r[6], 0x100u);
    if (COND_NE) { goto L_25fb648; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb6cc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x0u;
    c->r[4] = c->r[9];
L_25fb620:;
    { uint32_t r = c->r[4] & c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb6dc; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[5] = c->r[5] + 0x2u;
    c->r[4] = c->r[4] - 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_CC) { goto L_25fb620; }
    goto L_25fb6cc;
L_25fb648:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb6cc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[14];
    c->r[4] = 0x0u;
    c->r[5] = c->r[9];
L_25fb660:;
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = rev16_32(c->r[2]);
    c->r[6] = __builtin_bswap32(c->r[3]);
    (void)f_subs(c, c->r[2], (c->r[6] >> 16));
    if (COND_HI) { goto L_25fb698; }
    c->r[14] = (c->r[6] >> 16);
L_25fb67c:;
    { uint32_t r = c->r[5] & c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb6b4; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[5] = c->r[5] - 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_LS) { goto L_25fb67c; }
L_25fb698:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[8] = c->r[8] + 0x6u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25fb660; }
    c->r[2] = 0x0u;
L_25fb6b4:;
    c->r[14] = c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_25fb6ec; }
    goto L_25fb70c;
L_25fb6cc:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_25fb6ec; }
    goto L_25fb70c;
L_25fb6dc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = rev16_32(c->r[2]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb70c; }
L_25fb6ec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (c->r[7] << 3);
    { uint32_t ea = c->r[3] + c->r[7]; ST16(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x6u; ST16(ea, c->r[2]); }
L_25fb70c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[9]);
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[8]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25fb5f8; }
    goto L_25fb7d8;
L_25fb730:;
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[8] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[6] = 0xffffu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = rev16_32(c->r[0]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x100u);
    c->r[2] = 0x0u;
    c->r[12] = (uint32_t)(uint16_t)(c->r[0]);
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[14] = c->r[2] | c->r[1];
L_25fb768:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { goto L_25fb7c8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    c->r[0] = c->r[5];
L_25fb77c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = rev16_32(c->r[1]);
    c->r[3] = __builtin_bswap32(c->r[3]);
    (void)f_subs(c, c->r[1], (c->r[3] >> 16));
    if (COND_HI) { goto L_25fb7b4; }
    c->r[3] = (c->r[3] >> 16);
L_25fb798:;
    { uint32_t r = c->r[0] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb7c8; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] - 0x1u;
    c->r[7] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LS) { goto L_25fb798; }
L_25fb7b4:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[4] = c->r[4] + 0x6u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_CC) { goto L_25fb77c; }
L_25fb7c8:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_CC) { goto L_25fb768; }
L_25fb7d8:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fb7e0(Cpu *restrict c) {
    FN_ENTER(0x25fb7e0u);
L_25fb7e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[1];
    c->r[5] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x6u; c->r[6] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[7]); }
    c->r[7] = __builtin_bswap32(c->r[6]);
    c->r[6] = c->r[5] + (c->r[7] >> 16);
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fbc74; }
    c->r[6] = rev16_32(c->r[6]);
    c->r[4] = __builtin_bswap32(c->r[1]);
    c->r[7] = (c->r[7] >> 16);
    c->r[14] = 0xffffu;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    c->r[6] = 0x80u;
    c->r[3] = c->r[7] + c->r[3];
    c->r[10] = c->r[6] & ROR32(c->r[4], 16);
    c->r[6] = 0x40u;
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[3]);
    c->r[6] = c->r[6] & ROR32(c->r[4], 16);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->r[6] = 0x20u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    c->r[6] = c->r[6] & ROR32(c->r[4], 16);
    { uint32_t sc = ((c->r[4] >> 15) & 1); uint32_t r = c->r[2] & ROR32(c->r[4], 16); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    c->r[6] = 0x10u;
    c->r[6] = c->r[6] & ROR32(c->r[4], 16);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[6] = 0x8u;
    c->r[6] = c->r[6] & ROR32(c->r[4], 16);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[6] = 0x4u;
    c->r[6] = c->r[6] & ROR32(c->r[4], 16);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[6] = 0x2u;
    c->r[6] = c->r[6] & ROR32(c->r[4], 16);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_25fba80; }
    c->r[8] = 0x0u;
L_25fb8b0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = rev16_32(c->r[2]);
    (void)f_subs(c, c->r[4], 0x100u);
    if (COND_NE) { goto L_25fb904; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb968; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    c->r[5] = c->r[8];
L_25fb8dc:;
    { uint32_t r = c->r[5] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb970; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[6] = c->r[6] + 0x2u;
    c->r[5] = c->r[5] - 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25fb8dc; }
    goto L_25fb968;
L_25fb904:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb968; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    c->r[6] = c->r[8];
L_25fb918:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[4] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    (void)f_subs(c, c->r[4], (c->r[2] >> 16));
    if (COND_HI) { goto L_25fb950; }
    c->r[2] = (c->r[2] >> 16);
L_25fb934:;
    { uint32_t r = c->r[6] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fb978; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[6] = c->r[6] - 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LS) { goto L_25fb934; }
L_25fb950:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[7] = c->r[7] + 0x6u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25fb918; }
L_25fb968:;
    c->r[4] = 0x0u;
    goto L_25fb978;
L_25fb970:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[4] = rev16_32(c->r[1]);
L_25fb978:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fb990; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
L_25fb990:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb9b4; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[2] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    c->r[1] = __builtin_bswap32(c->r[2]);
    c->r[1] = (c->r[1] >> 16);
L_25fb9b4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb9cc; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
L_25fb9cc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb9e4; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
L_25fb9e4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fb9fc; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
L_25fb9fc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fba14; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
L_25fba14:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_25fba28; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
L_25fba28:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fba64; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_25fba58; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 3);
    { uint32_t ea = c->r[2] + c->r[3]; ST16(ea, c->r[4]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x4u; ST16(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2] + 0x6u; ST16(ea, c->r[1]); }
L_25fba58:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_25fba64:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_25fb8b0; }
    goto L_25fbc74;
L_25fba80:;
    c->r[1] = rev16_32(c->r[1]);
    c->r[7] = 0x0u;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & 0x78u;
    { uint32_t r = c->r[1] | c->r[10]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
L_25fbaa0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[5] = rev16_32(c->r[1]);
    (void)f_subs(c, c->r[2], 0x100u);
    if (COND_NE) { goto L_25fbaf8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fbb74; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[4] = c->r[7];
L_25fbacc:;
    { uint32_t r = c->r[4] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fbb8c; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[6] = c->r[6] + 0x2u;
    c->r[4] = c->r[4] - 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_25fbacc; }
    c->r[1] = 0x0u;
    goto L_25fbb94;
L_25fbaf8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fbb74; }
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[6] = 0x0u;
    c->r[4] = c->r[7];
L_25fbb10:;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = rev16_32(c->r[1]);
    c->r[2] = __builtin_bswap32(c->r[2]);
    (void)f_subs(c, c->r[1], (c->r[2] >> 16));
    if (COND_HI) { goto L_25fbb48; }
    c->r[10] = (c->r[2] >> 16);
L_25fbb2c:;
    { uint32_t r = c->r[4] & c->r[14]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25fbb7c; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[4] = c->r[4] - 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LS) { goto L_25fbb2c; }
L_25fbb48:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[9] = c->r[9] + 0x6u;
    c->r[10] = c->r[8];
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_25fbb10; }
    c->r[1] = 0x0u;
    c->r[9] = c->r[3];
    goto L_25fbb94;
L_25fbb74:;
    c->r[1] = 0x0u;
    goto L_25fbb94;
L_25fbb7c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[3];
    c->r[10] = c->r[8];
    goto L_25fbb94;
L_25fbb8c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = rev16_32(c->r[1]);
L_25fbb94:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[2] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[5] = c->r[4] + 0x4u; }
    c->r[4] = __builtin_bswap32(c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); } }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_25fbbd8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[2] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    c->r[2] = __builtin_bswap32(c->r[2]);
    c->r[6] = (c->r[2] >> 16);
L_25fbbd8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = (c->r[4] >> 16);
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_25fbc24; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
L_25fbc24:;
    { uint32_t r = c->r[6] | c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_25fbc5c; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_25fbc50; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 3);
    { uint32_t ea = c->r[2] + c->r[3]; ST16(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x4u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x6u; ST16(ea, c->r[4]); }
L_25fbc50:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_25fbc5c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_25fbaa0; }
L_25fbc74:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fbc7c(Cpu *restrict c) {
    FN_ENTER(0x25fbc7cu);
L_25fbc7c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + c->r[3];
    c->r[6] = c->r[2];
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fbdd8; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = rev16_32(c->r[0]);
    c->r[10] = 0x0u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[6] + c->r[2];
    c->r[3] = c->r[2] + 0x6u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
L_25fbcd8:;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[7] = c->r[1] + (c->r[0] >> 16);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25fbdc0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x100u);
    if (COND_NE) { goto L_25fbdc0; }
    c->r[9] = rev16_32(c->r[1]);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 16);
    c->r[4] = 0x0u;
    c->r[8] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + c->r[0];
L_25fbd34:;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = __builtin_bswap32(c->r[2]);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    if (COND_EQ) { goto L_25fbd90; }
    c->r[1] = (c->r[1] >> 16);
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_25fbdb0; }
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25fbd8cu; f_284c9ac(c);
    goto L_25fbdb0;
L_25fbd90:;
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25fbdb0u; f_284c9b8(c);
L_25fbdb0:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[9]);
    if (COND_LT) { goto L_25fbd34; }
L_25fbdc0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[10]);
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_CC) { goto L_25fbcd8; }
L_25fbdd8:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fbde0(Cpu *restrict c) {
    FN_ENTER(0x25fbde0u);
L_25fbde0:;
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { return; }
    if (COND_NE) { goto L_25fbe10; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { c->r[0] = 0x0u; }
    return;
L_25fbe10:;
    c->r[0] = 0x0u;
    return;
}
void f_25fbe18(Cpu *restrict c) {
    FN_ENTER(0x25fbe18u);
L_25fbe18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[5] = c->r[1];
    c->r[8] = c->r[0];
    c->r[7] = c->r[2];
    c->r[2] = 0x53fc7cu;
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[3] = 0x25fbe48u + c->r[2];
    c->r[6] = rev16_32(c->r[1]);
    c->r[9] = rev16_32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x25fbe5cu; f_284c9c4(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_25fbe90; }
    c->r[0] = 0x53fc45u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[3] = 0x25fbe84u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x25fbe88u; f_284c9c4(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x0u;
L_25fbe90:;
    c->r[6] = rev16_32(c->r[10]);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fbeb8; }
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    c->r[14] = 0x25fbeb8u; f_284c9d0(c);
L_25fbeb8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fbedc; }
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x25fbedcu; f_284c9dc(c);
L_25fbedc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_25fbf04; }
    c->r[2] = 0x6604f4u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25fbef8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    c->r[14] = 0x25fbf04u; f_284c9e8(c);
L_25fbf04:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fbf1c(Cpu *restrict c) {
    FN_ENTER(0x25fbf1cu);
L_25fbf1c:;
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    __attribute__((musttail)) return f_284c9f4(c);
}
void f_25fbf2c(Cpu *restrict c) {
    FN_ENTER(0x25fbf2cu);
L_25fbf2c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_25fbf60;
L_25fbf48:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7] + 0x8u;
    c->r[2] = c->r[5];
    c->r[14] = 0x25fbf58u; f_284c9e8(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    c->r[6] = c->r[4];
L_25fbf60:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x10u;
    c->r[0] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    goto L_25fbf8c;
L_25fbf78:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x25fbf88u; f_284c9e8(c);
    c->r[6] = c->r[7] + 0x8u;
L_25fbf8c:;
    c->r[4] = c->r[6];
    goto L_25fbf98;
L_25fbf94:;
    c->r[4] = c->r[7];
L_25fbf98:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = ~0x7u;
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 3);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_LS) { goto L_25fc7fc; }
    (void)f_subs(c, c->r[1], 0xf7u);
    if (COND_LE) { goto L_25fc890; }
    c->r[2] = c->r[0] + (c->r[0] >> 31);
    c->r[2] = c->r[3] & (c->r[2] << 2);
    c->r[6] = c->r[4] + c->r[2];
    c->r[2] = 0x1f39u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_25fc1e8; }
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 31);
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] + (c->r[1] >> 30);
    c->r[0] = c->r[3] & (c->r[0] << 1);
    c->r[8] = c->r[4] + c->r[0];
    c->r[7] = c->r[6] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[3] = c->r[7];
    c->r[14] = 0x25fbffcu; f_284ca00(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x25fc010u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc410; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[9]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fc08cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc344; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[2] = c->r[6];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[10]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x25fc0f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc404; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fc180u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc40c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[10] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    goto L_25fc410;
L_25fc1e8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fc1f8u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc20cu; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fc27c; }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    if (COND_NE) { goto L_25fc350; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = 0x1u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[1]); }
    goto L_25fc410;
L_25fc27c:;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc410; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[7]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fc2ecu; rt_dispatch(c);
    c->r[10] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc410; }
    c->r[2] = c->r[4];
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[12]); }
    goto L_25fc3fc;
L_25fc344:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[10] = c->r[10] + 0x1u;
    goto L_25fc410;
L_25fc350:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fc39cu; rt_dispatch(c);
    c->r[10] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc410; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
L_25fc3fc:;
    c->r[10] = 0x2u;
    goto L_25fc410;
L_25fc404:;
    c->r[10] = c->r[10] + 0x2u;
    goto L_25fc410;
L_25fc40c:;
    c->r[10] = c->r[10] + 0x3u;
L_25fc410:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc420u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fc7e0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
L_25fc42c:;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_25fc454; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc444u; rt_dispatch(c);
    c->r[7] = c->r[7] - 0x8u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc42c; }
    goto L_25fc5d0;
L_25fc454:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc468u; rt_dispatch(c);
    c->r[7] = c->r[4] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fc514; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_25fcc58; }
    c->r[6] = c->r[4] + 0x10u;
L_25fc480:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] - 0x8u;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fc490u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_25fc4ac; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_25fc480; }
    goto L_25fcc58;
L_25fc4ac:;
    c->r[0] = c->r[6];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[10]); }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[9]); }
L_25fc514:;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_25fcc58; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_25fc584;
L_25fc524:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
L_25fc584:;
    c->r[7] = c->r[7] - 0x8u;
L_25fc588:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + 0x8u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x25fc59cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc588; }
    c->r[8] = c->r[7] + 0x8u;
L_25fc5a8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] - 0x8u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc5bcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fc5a8; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_CC) { goto L_25fc524; }
    goto L_25fbf94;
L_25fc5d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[4];
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD16(ea); c->r[3] = ea; c->r[9] = v; }
    c->r[8] = c->r[7];
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD16(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
L_25fc62c:;
    c->r[7] = c->r[4] + 0x8u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_CC) { goto L_25fc6b8; }
    goto L_25fc704;
L_25fc63c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[12] = c->r[10];
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_EQ) { c->r[6] = c->r[8]; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[7]); }
    c->r[10] = c->r[12];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
L_25fc6b8:;
    c->r[9] = c->r[7] - 0x8u;
L_25fc6bc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[9] + 0x8u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x25fc6d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fc6bc; }
    c->r[7] = c->r[9] + 0x8u;
L_25fc6dc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[8] - 0x8u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x25fc6f0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc6dc; }
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_LS) { goto L_25fc63c; }
    c->r[7] = c->r[9];
L_25fc704:;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_25fc788; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x25fc71cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fc788; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    c->r[14] = c->r[10];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    c->r[10] = c->r[14];
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
L_25fc788:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_25fc7c8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x25fc7a0u; f_284ca0c(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[7] + 0x8u;
    c->r[8] = c->r[0];
    c->r[2] = c->r[5];
    c->r[0] = c->r[6];
    c->r[14] = 0x25fc7b8u; f_284ca0c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fc7e8; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_25fbf8c; }
L_25fc7c8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] - c->r[4];
    c->r[0] = c->r[0] - c->r[7];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { goto L_25fbf78; }
    goto L_25fbf48;
L_25fc7e0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_25fc62c;
L_25fc7e8:;
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    if (COND_NE) { goto L_25fbf60; }
    goto L_25fcc58;
L_25fc7fc:;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x25fc808u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x25fc824u: goto L_25fc824; case 0x25fc8a8u: goto L_25fc8a8; case 0x25fc940u: goto L_25fc940; case 0x25fc960u: goto L_25fc960; case 0x25fcc58u: goto L_25fcc58; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25fc824:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fc834u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
L_25fc84c:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[8]); }
L_25fc880:;
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[12]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fc890:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_284ca18(c);
L_25fc8a8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[4] + 0x8u;
    c->r[1] = c->r[4];
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc8bcu; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc8d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fcaf8; }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    if (COND_NE) { goto L_25fcbbc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fc940:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4] + 0x8u;
    c->r[2] = c->r[4] + 0x10u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x25fc958u; f_284ca00(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fc960:;
    c->r[7] = c->r[4] + 0x10u;
    c->r[6] = c->r[4] + 0x18u;
    c->r[1] = c->r[4] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[7];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[14] = 0x25fc984u; f_284ca00(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fc994u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fca08u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fca70u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fcadcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_25fc84c;
L_25fcaf8:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[7]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fcb64u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    c->r[2] = c->r[4];
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[12]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fcbbc:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fcc08u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcc58; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[8]); }
    goto L_25fc880;
L_25fcc58:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fcc60(Cpu *restrict c) {
    FN_ENTER(0x25fcc60u);
L_25fcc60:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[10] = c->r[3];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fcc90u; rt_dispatch(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fcca4u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fcd10; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    if (COND_NE) { goto L_25fcde8; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    goto L_25fcea4;
L_25fcd10:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcea4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fcd84u; rt_dispatch(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcea4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    goto L_25fcea0;
L_25fcde8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fce34u; rt_dispatch(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcea4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[14] = c->r[10];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[9]); }
    c->r[10] = c->r[14];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
L_25fcea0:;
    c->r[7] = 0x2u;
L_25fcea4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fceb4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcffc; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[6];
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[10]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fcf28u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcfe8; }
    c->r[2] = c->r[4];
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fcf8cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fcff4; }
    c->r[2] = c->r[5];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x3u;
    goto L_25fcffc;
L_25fcfe8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_25fcffc;
L_25fcff4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x2u;
L_25fcffc:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fd008(Cpu *restrict c) {
    FN_ENTER(0x25fd008u);
L_25fd008:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[8] + 0x8u;
    c->r[1] = c->r[8];
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fd034u; rt_dispatch(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[8] + 0x10u;
    c->r[5] = c->r[0];
    c->r[1] = c->r[6];
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fd04cu; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fd0b4; }
    { uint32_t ea = c->r[8] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    if (COND_NE) { goto L_25fd178; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x6u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[1]); }
    goto L_25fd21c;
L_25fd0b4:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd21c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[14]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fd11cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd21c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    goto L_25fd21c;
L_25fd178:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fd1c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd21c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
L_25fd21c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8] + 0x18u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_25fd2f0; }
    c->r[10] = 0x0u;
    c->r[5] = c->r[13] + 0x8u;
L_25fd234:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[7] = c->r[0];
    c->pc = c->r[2]; c->r[14] = 0x25fd244u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd2dc; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[6] = c->r[10];
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_25fd270:;
    c->r[4] = c->r[8] + c->r[6];
    (void)f_adds(c, c->r[6], 0x10u);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x16u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x1eu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fd2b8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0x8u;
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x25fd2acu; rt_dispatch(c);
    c->r[6] = c->r[6] - 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fd270; }
L_25fd2b8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[0]); }
    c->r[1] = (c->r[1] >> 16);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_25fd2dc:;
    c->r[0] = c->r[7] + 0x8u;
    c->r[10] = c->r[10] + 0x8u;
    c->r[4] = c->r[7];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_25fd234; }
L_25fd2f0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fd2f8(Cpu *restrict c) {
    FN_ENTER(0x25fd2f8u);
L_25fd2f8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] - c->r[5];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_25fd450; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x25fd32cu + 0x8u;
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x25fd34cu: goto L_25fd34c; case 0x25fd3b8u: goto L_25fd3b8; case 0x25fd4e8u: goto L_25fd4e8; case 0x25fd508u: goto L_25fd508; case 0x25fdaf4u: goto L_25fdaf4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_25fd34c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->r[4] = c->r[0] - 0x8u;
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x25fd364u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    c->r[2] = c->r[5];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[12]); }
    goto L_25fdaf4;
L_25fd3b8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[5] + 0x8u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x25fd3ccu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->r[9] = c->r[0] - 0x8u;
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x25fd3e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fd6f4; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    if (COND_NE) { goto L_25fd898; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[1]); }
    goto L_25fdaf4;
L_25fd450:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[5] + 0x8u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x25fd464u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[5] + 0x10u;
    c->r[6] = c->r[0];
    c->r[1] = c->r[8];
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x25fd47cu; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25fd7bc; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 16);
    if (COND_NE) { goto L_25fd938; }
    c->r[0] = c->r[7];
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[1]); }
    goto L_25fd9e0;
L_25fd4e8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x8u;
    c->r[2] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[3] = c->r[0] - 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x25fd504u; f_284ca00(c);
    goto L_25fdaf4;
L_25fd508:;
    c->r[7] = c->r[5] + 0x8u;
    c->r[8] = c->r[5] + 0x10u;
    c->r[9] = c->r[5] + 0x18u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[1] = c->r[7];
    c->r[2] = c->r[8];
    c->r[3] = c->r[9];
    c->r[14] = 0x25fd52cu; f_284ca00(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->r[6] = c->r[0] - 0x8u;
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fd544u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[2] = c->r[9];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x25fd5c0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x25fd62cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[5] = c->r[4];
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x25fd6a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    c->r[2] = c->r[5];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[8]); }
    goto L_25fd7b0;
L_25fd6f4:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fd768u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    c->r[2] = c->r[5];
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[8]); }
L_25fd7b0:;
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[12]); }
    goto L_25fdaf4;
L_25fd7bc:;
    c->r[9] = c->r[4];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd9e0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fd830u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd9e0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
    goto L_25fd9e0;
L_25fd898:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fd8e4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdaf4; }
    c->r[2] = c->r[7];
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[12]); }
    goto L_25fdaf4;
L_25fd938:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x25fd988u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fd9e0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
L_25fd9e0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0x18u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_25fdaec; }
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x0u;
    c->r[10] = 0x0u;
    c->r[6] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
L_25fda08:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->r[4] = c->r[0];
    c->pc = c->r[2]; c->r[14] = 0x25fda18u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_25fdad8; }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[5] = c->r[10];
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_25fda44:;
    c->r[7] = c->r[8] + c->r[5];
    (void)f_adds(c, c->r[5], 0x10u);
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x16u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x1eu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_25fda8c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7] + 0x8u;
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x25fda80u; rt_dispatch(c);
    c->r[5] = c->r[5] - 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25fda44; }
L_25fda8c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x10u; ST16(ea, c->r[0]); }
    c->r[1] = (c->r[1] >> 16);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[7] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x12u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x8u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_25fdaf0; }
L_25fdad8:;
    c->r[0] = c->r[4] + 0x8u;
    c->r[10] = c->r[10] + 0x8u;
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_25fda08; }
L_25fdaec:;
    c->r[1] = 0x1u;
L_25fdaf0:;
    c->r[10] = c->r[0] | c->r[1];
L_25fdaf4:;
    c->r[0] = c->r[10] & 0x1u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fdb00(Cpu *restrict c) {
    FN_ENTER(0x25fdb00u);
L_25fdb00:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[1] = 0xb4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x25fdb14u; f_283abec(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fdb1c(Cpu *restrict c) {
    FN_ENTER(0x25fdb1cu);
L_25fdb1c:;
    return;
}
void f_25fdb20(Cpu *restrict c) {
    FN_ENTER(0x25fdb20u);
L_25fdb20:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[0] = 0x80u;
    c->r[3] = 0x64u;
    c->r[4] = c->r[2];
    c->r[2] = 0x60u;
    c->r[5] = c->r[1];
    c->r[1] = 0x5cu;
    c->r[0] = 0x25fdb50u + c->r[0];
    c->r[1] = 0x25fdb54u + c->r[1];
    c->r[2] = 0x25fdb58u + c->r[2];
    c->r[3] = 0x25fdb5cu + c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x60u;
    c->r[0] = 0x25fdb68u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x34u;
    c->r[0] = 0x25fdb74u + c->r[0];
    c->r[14] = 0x25fdb74u; f_284ca24(c);
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_284ca30(c);
}
void f_25fdba8(Cpu *restrict c) {
    FN_ENTER(0x25fdba8u);
L_25fdba8:;
    c->r[0] = 0x0u;
    return;
}
void f_25fdbd8(Cpu *restrict c) {
    FN_ENTER(0x25fdbd8u);
L_25fdbd8:;
    __attribute__((musttail)) return f_284ca3c(c);
}
void f_25fdbdc(Cpu *restrict c) {
    FN_ENTER(0x25fdbdcu);
L_25fdbdc:;
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_25fdbe4(Cpu *restrict c) {
    FN_ENTER(0x25fdbe4u);
L_25fdbe4:;
    __attribute__((musttail)) return f_284ca48(c);
}
void f_25fdbe8(Cpu *restrict c) {
    FN_ENTER(0x25fdbe8u);
L_25fdbe8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x25fdc08u; f_284ca54(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25fdc10(Cpu *restrict c) {
    FN_ENTER(0x25fdc10u);
L_25fdc10:;
    __attribute__((musttail)) return f_284ca60(c);
}
void f_25fdc14(Cpu *restrict c) {
    FN_ENTER(0x25fdc14u);
L_25fdc14:;
    __attribute__((musttail)) return f_284ca6c(c);
}
void f_25fdc18(Cpu *restrict c) {
    FN_ENTER(0x25fdc18u);
L_25fdc18:;
    c->r[2] = 0x59dbc8u;
    c->r[2] = 0x25fdc24u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_284ca78(c);
}
void f_25fdc2c(Cpu *restrict c) {
    FN_ENTER(0x25fdc2cu);
L_25fdc2c:;
    __attribute__((musttail)) return f_284ca84(c);
}
void f_25fdc30(Cpu *restrict c) {
    FN_ENTER(0x25fdc30u);
L_25fdc30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25fdc5cu; f_284ca90(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25fdc64(Cpu *restrict c) {
    FN_ENTER(0x25fdc64u);
L_25fdc64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[1];
    c->r[1] = c->r[3];
    c->r[3] = c->r[12];
    c->r[14] = 0x25fdc88u; f_284ca9c(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25fdc90(Cpu *restrict c) {
    FN_ENTER(0x25fdc90u);
L_25fdc90:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x8u;
    c->r[1] = 0x726eu;
    c->r[3] = c->r[13] + 0x4u;
    c->r[2] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6b650000u;
    c->r[14] = 0x25fdcb0u; f_284caa8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25fdcc0(Cpu *restrict c) {
    FN_ENTER(0x25fdcc0u);
L_25fdcc0:;
    c->r[3] = 0x0u;
    __attribute__((musttail)) return f_284cab4(c);
}
void f_25fdcc8(Cpu *restrict c) {
    FN_ENTER(0x25fdcc8u);
L_25fdcc8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x940u;
    c->r[6] = c->r[1];
    c->r[1] = 0x4f53u;
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    c->r[3] = c->r[13];
    c->r[2] = 0x2u;
    c->r[4] = c->r[0];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x47500000u;
    c->r[14] = 0x25fdcf8u; f_284caa8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fdd8c; }
    c->r[0] = 0xcu;
    c->r[1] = 0x4u;
    c->r[2] = c->r[9];
    c->pc = c->r[6]; c->r[14] = 0x25fdd14u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[8];
    c->r[14] = 0x25fdd2cu; f_284cac0(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[0] << 3);
    c->r[1] = 0x4u;
    c->r[2] = c->r[9];
    c->pc = c->r[6]; c->r[14] = 0x25fdd40u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[3] = c->r[8];
    c->r[14] = 0x25fdd58u; f_284cac0(c);
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0x25fdd64u; f_284ca48(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[1] = c->r[5];
    c->v.s[2] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    ST32(c->r[7] + 8u, c->v.s[0]);
    c->r[14] = 0x25fdd88u; f_284cacc(c);
    goto L_25fdd90;
L_25fdd8c:;
    c->r[7] = 0x0u;
L_25fdd90:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_25fdd9c(Cpu *restrict c) {
    FN_ENTER(0x25fdd9cu);
L_25fdd9c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fddc8; }
    c->r[1] = c->r[4];
    c->r[6] = c->r[2];
    c->pc = c->r[6]; c->r[14] = 0x25fddc4u; rt_dispatch(c);
    c->r[2] = c->r[6];
L_25fddc8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_25fddd8(Cpu *restrict c) {
    FN_ENTER(0x25fddd8u);
L_25fddd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[1];
    c->r[14] = 0x25fdde8u; f_284cad8(c);
    c->v.s[2] = c->r[0];
    c->v.s[4] = LD32(c->r[4] + 8u);
    c->v.s[0] = LD32(c->r[11] + 8u);
    c->v.s[6] = 0x3f000000u;
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64(floor((double)c->v.f[6]));
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fde14(Cpu *restrict c) {
    FN_ENTER(0x25fde14u);
L_25fde14:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[9] = c->r[1];
    c->r[6] = c->r[3];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_25fded8; }
    c->r[1] = c->r[2];
    c->r[0] = c->r[7];
    c->r[2] = 0x0u;
    c->r[8] = 0x0u;
    c->r[14] = 0x25fde48u; f_284cae4(c);
    c->r[10] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x25fde5cu; f_284cae4(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_25fdfdc; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    c->r[14] = 0xffffu;
    c->r[1] = c->r[6];
L_25fde7c:;
    c->r[7] = c->r[1] - 0x1u;
L_25fde80:;
    c->r[1] = c->r[5] + c->r[7];
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[3] = c->r[2] + (c->r[1] << 3);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_HI) { goto L_25fdec4; }
    if (COND_CC) { goto L_25fdeb4; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_NE) { goto L_25fdee4; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_EQ) { goto L_25fdee4; }
L_25fdeb4:;
    c->r[5] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { goto L_25fde80; }
    goto L_25fdecc;
L_25fdec4:;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LT) { goto L_25fde7c; }
L_25fdecc:;
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    goto L_25fdeec;
L_25fded8:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25fdee4:;
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
L_25fdeec:;
    c->r[12] = c->r[1] - c->r[7];
    c->r[5] = 0x0u;
    c->r[1] = c->r[6];
L_25fdef8:;
    c->r[7] = c->r[1] - 0x1u;
L_25fdefc:;
    c->r[1] = c->r[5] + c->r[7];
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[3] = c->r[2] + (c->r[1] << 3);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_HI) { goto L_25fdf40; }
    if (COND_CC) { goto L_25fdf30; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_25fdf50; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_EQ) { goto L_25fdf50; }
L_25fdf30:;
    c->r[5] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { goto L_25fdefc; }
    goto L_25fdf48;
L_25fdf40:;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LT) { goto L_25fdef8; }
L_25fdf48:;
    c->r[1] = 0x0u;
    goto L_25fdf54;
L_25fdf50:;
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
L_25fdf54:;
    c->r[8] = c->r[1] + c->r[12];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_25fdfd0; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x0u;
L_25fdf68:;
    c->r[3] = c->r[6] - 0x1u;
L_25fdf6c:;
    c->r[1] = c->r[7] + c->r[3];
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[6] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = c->r[2] + (c->r[6] << 3);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_HI) { goto L_25fdfc0; }
    if (COND_NE) { goto L_25fdf98; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_HI) { goto L_25fdfc0; }
L_25fdf98:;
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_CC) { goto L_25fdfb0; }
    if (COND_NE) { goto L_25fdfd8; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_25fdfd8; }
L_25fdfb0:;
    c->r[7] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { goto L_25fdf6c; }
    goto L_25fdfd0;
L_25fdfc0:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LT) { goto L_25fdf68; }
    goto L_25fdfdc;
L_25fdfd0:;
    c->r[1] = 0x0u;
    goto L_25fdfdc;
L_25fdfd8:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
L_25fdfdc:;
    c->r[0] = c->r[1] + c->r[8];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25fdfec(Cpu *restrict c) {
    FN_ENTER(0x25fdfecu);
L_25fdfec:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->v.s[16] = 0x0u;
    c->r[5] = c->r[1];
    c->r[8] = c->r[3];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fe090; }
    c->r[1] = c->r[2];
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x25fe01cu; f_284cae4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_25fe090; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0xffffu;
L_25fe030:;
    c->r[4] = c->r[3] - 0x1u;
L_25fe034:;
    c->r[2] = c->r[6] + c->r[4];
    c->r[2] = c->r[2] + (c->r[2] >> 31);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[7] = c->r[1] + (c->r[3] << 3);
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_HI) { goto L_25fe078; }
    if (COND_CC) { goto L_25fe068; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_25fe084; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_EQ) { goto L_25fe084; }
L_25fe068:;
    c->r[6] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_LT) { goto L_25fe034; }
    goto L_25fe090;
L_25fe078:;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { goto L_25fe030; }
    goto L_25fe090;
L_25fe084:;
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[16] = (float)(int32_t)c->v.s[0];
L_25fe090:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.s[2] = c->r[8];
    c->v.s[4] = 0x3f000000u;
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64(floor((double)c->v.f[4]));
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_25fe0bc(Cpu *restrict c) {
    FN_ENTER(0x25fe0bcu);
L_25fe0bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[1];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fe154; }
    c->r[1] = c->r[2];
    c->r[2] = 0x0u;
    c->r[14] = 0x25fe0e0u; f_284cae4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_25fe154; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = 0x0u;
    c->r[12] = 0xffffu;
L_25fe0f8:;
    c->r[4] = c->r[3] - 0x1u;
L_25fe0fc:;
    c->r[1] = c->r[5] + c->r[4];
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[2] = c->r[14] + (c->r[3] << 3);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_25fe140; }
    if (COND_CC) { goto L_25fe130; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_25fe150; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_EQ) { goto L_25fe150; }
L_25fe130:;
    c->r[5] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_LT) { goto L_25fe0fc; }
    goto L_25fe15c;
L_25fe140:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_LT) { goto L_25fe0f8; }
    goto L_25fe154;
L_25fe150:;
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
L_25fe154:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25fe15c:;
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fe168(Cpu *restrict c) {
    FN_ENTER(0x25fe168u);
L_25fe168:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[1];
    c->r[8] = c->r[3];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fe208; }
    c->r[1] = c->r[2];
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x25fe190u; f_284cae4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_25fe224; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->r[12] = 0xffffu;
L_25fe1ac:;
    c->r[7] = c->r[2] - 0x1u;
L_25fe1b0:;
    c->r[2] = c->r[4] + c->r[7];
    c->r[2] = c->r[2] + (c->r[2] >> 31);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[6] = c->r[1] + (c->r[2] << 3);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_HI) { goto L_25fe1f4; }
    if (COND_CC) { goto L_25fe1e4; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_25fe210; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_EQ) { goto L_25fe210; }
L_25fe1e4:;
    c->r[4] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_LT) { goto L_25fe1b0; }
    goto L_25fe21c;
L_25fe1f4:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[3] = 0x0u;
    if (COND_LT) { goto L_25fe1ac; }
    goto L_25fe224;
L_25fe208:;
    c->v.s[0] = 0x0u;
    goto L_25fe234;
L_25fe210:;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    goto L_25fe224;
L_25fe21c:;
    c->r[7] = 0x0u;
    c->r[3] = 0x0u;
L_25fe224:;
    c->r[0] = c->r[7] - c->r[3];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
L_25fe234:;
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->v.s[4] = c->r[8];
    c->v.s[6] = 0x3f000000u;
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64(floor((double)c->v.f[6]));
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_25fe25c(Cpu *restrict c) {
    FN_ENTER(0x25fe25cu);
L_25fe25c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_25fe2f8; }
    c->r[1] = c->r[2];
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x25fe280u; f_284cae4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_25fe314; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->r[12] = 0xffffu;
L_25fe29c:;
    c->r[5] = c->r[2] - 0x1u;
L_25fe2a0:;
    c->r[2] = c->r[4] + c->r[5];
    c->r[2] = c->r[2] + (c->r[2] >> 31);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[3] = c->r[1] + (c->r[2] << 3);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_HI) { goto L_25fe2e4; }
    if (COND_CC) { goto L_25fe2d4; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_25fe300; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[12]);
    if (COND_EQ) { goto L_25fe300; }
L_25fe2d4:;
    c->r[4] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_LT) { goto L_25fe2a0; }
    goto L_25fe30c;
L_25fe2e4:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[5] = 0x0u;
    if (COND_LT) { goto L_25fe29c; }
    goto L_25fe314;
L_25fe2f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_25fe300:;
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    goto L_25fe314;
L_25fe30c:;
    c->r[6] = 0x0u;
    c->r[5] = 0x0u;
L_25fe314:;
    c->r[0] = c->r[6] - c->r[5];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_25fe320(Cpu *restrict c) {
    FN_ENTER(0x25fe320u);
L_25fe320:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_25fe3cc; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x0u;
L_25fe350:;
    c->r[4] = c->r[14] - 0x1u;
L_25fe354:;
    c->r[7] = c->r[5] + c->r[4];
    c->r[7] = c->r[7] + (c->r[7] >> 31);
    c->r[14] = (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[6] = c->r[3] + (c->r[14] << 3);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_HI) { goto L_25fe3a8; }
    if (COND_NE) { goto L_25fe380; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_HI) { goto L_25fe3a8; }
L_25fe380:;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_CC) { goto L_25fe398; }
    if (COND_NE) { goto L_25fe3b8; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_CS) { goto L_25fe3b8; }
L_25fe398:;
    c->r[5] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[4]);
    if (COND_LT) { goto L_25fe354; }
    goto L_25fe3d0;
L_25fe3a8:;
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_LT) { goto L_25fe350; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_25fe3b8:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_25fe3cc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_25fe3d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_25fe3d8(Cpu *restrict c) {
    FN_ENTER(0x25fe3d8u);
L_25fe3d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x25fe3e8u; f_284caf0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0xau;
    c->r[14] = 0x25fe400u; f_284cafc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe41c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284cafc(c);
L_25fe41c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25fe424(Cpu *restrict c) {
    FN_ENTER(0x25fe424u);
L_25fe424:;
    __attribute__((musttail)) return f_284cb08(c);
}
void f_25fe428(Cpu *restrict c) {
    FN_ENTER(0x25fe428u);
L_25fe428:;
    __attribute__((musttail)) return f_284cb14(c);
}
void f_25fe42c(Cpu *restrict c) {
    FN_ENTER(0x25fe42cu);
L_25fe42c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[14] = 0x25fe438u; f_284cb20(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_25fe444(Cpu *restrict c) {
    FN_ENTER(0x25fe444u);
L_25fe444:;
    __attribute__((musttail)) return f_284cb2c(c);
}
void f_25fe448(Cpu *restrict c) {
    FN_ENTER(0x25fe448u);
L_25fe448:;
    c->r[2] = ~0x1000000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[2] = 0x1000000u; }
    c->r[1] = c->r[2];
    __attribute__((musttail)) return f_284ca78(c);
}
void f_25fe45c(Cpu *restrict c) {
    FN_ENTER(0x25fe45cu);
L_25fe45c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_CC) { goto L_25fe4d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = 0x9a7fu;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x18020000u;
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_NE) { goto L_25fe490; }
L_25fe484:;
    c->r[14] = c->r[0] + 0x8u;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25fe490:;
    c->r[4] = 0x9bd9u;
    c->r[3] = 0x1806u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x1a870000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x49620000u;
    (void)f_subs(c, c->r[2], c->r[4]);
    c->r[4] = 0x218u;
    c->r[2] = __builtin_bswap32(c->r[2]);
    if (COND_EQ) { c->r[3] = 0x8502u; }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x7f9a0000u;
    if (COND_EQ) { c->r[3] = (c->r[3] & 0xFFFFu) | 0xa6010000u; }
    c->r[2] = c->r[3] ^ c->r[2];
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_NE) { goto L_25fe4d8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    c->r[2] = c->r[2] ^ c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_25fe4e0; }
L_25fe4d8:;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_25fe4e0:;
    c->r[2] = c->r[2] + 0x3u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[1], (c->r[2] >> 2));
    if (COND_EQ) { goto L_25fe484; }
    c->r[1] = 0x2u;
    c->r[2] = c->r[1] + (c->r[2] >> 2);
L_25fe4fc:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = __builtin_bswap32(c->r[4]);
    c->r[4] = c->r[4] ^ c->r[3];
    c->r[4] = __builtin_bswap32(c->r[4]);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_25fe4fc; }
    goto L_25fe484;
}
void f_25fe520(Cpu *restrict c) {
    FN_ENTER(0x25fe520u);
L_25fe520:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_25fe530; }
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    return;
L_25fe530:;
    c->r[0] = ~c->r[0];
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[0] = ~c->r[0];
    return;
}
void f_25fe540(Cpu *restrict c) {
    FN_ENTER(0x25fe540u);
L_25fe540:;
    c->r[2] = sdiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = c->r[0] + c->r[1]; }
    return;
}
void f_25fe554(Cpu *restrict c) {
    FN_ENTER(0x25fe554u);
L_25fe554:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_25fe5b0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x25fe578u; f_283b2ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25fe5b0; }
    c->r[6] = c->r[0] + 0x1u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x25fe590u; f_284cb38(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_25fe5b0; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x25fe5acu; f_283aa78(c);
    c->r[4] = c->r[7];
L_25fe5b0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
