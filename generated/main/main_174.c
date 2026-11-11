#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_9aa47c(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_b9f2f4(Cpu *c);
void f_b9ff38(Cpu *c);
void f_ba56a0(Cpu *c);
void f_d0804c(Cpu *c);
void f_d09098(Cpu *c);
void f_d091ec(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15f0094(Cpu *c);
void f_ba3afc(Cpu *restrict c) {
    FN_ENTER(0xba3afcu);
L_ba3afc:;
    { uint32_t ea = c->r[0] + 0x235u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_ba3b04(Cpu *restrict c) {
    FN_ENTER(0xba3b04u);
L_ba3b04:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x235u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ba3d28; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x235u; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_ba3b54; }
    c->r[1] = 0xe95278u;
    { uint32_t ea = c->r[4] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xba3b38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xb0u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    if (COND_EQ) { goto L_ba3be8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = (c->r[6] >> 2); }
    if (COND_EQ) { c->r[7] = (c->r[7] >> 2); }
    goto L_ba3bf0;
L_ba3b54:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3b74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3b6cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_ba3b74:;
    { uint32_t ea = c->r[4] + 0x236u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba3d28; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3ba0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3b98u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
L_ba3ba0:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3bc0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3bb8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
L_ba3bc0:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3d28; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3bd8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_ba3be8:;
    c->r[6] = (c->r[6] >> 1);
    c->r[7] = (c->r[7] >> 1);
L_ba3bf0:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba3c00u; f_d0804c(c);
    c->r[10] = 0x1u;
    c->r[1] = 0x0u;
    c->r[5] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba3c3cu; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba3ca4; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xba3c58u; f_d0804c(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba3c6cu; rt_dispatch(c);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[0] = 0x5u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[8]); }
    c->r[0] = 0xbd12e6u;
    c->r[2] = 0xba3c9cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xba3ca0u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[9]); }
L_ba3ca4:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba3d1c; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba3cc0u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba3cd4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x5u;
    c->r[3] = 0xfu;
    c->r[12] = 0x82u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd264au;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xba3d14u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba3d18u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
L_ba3d1c:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3d30; }
L_ba3d28:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_ba3d30:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba3d40u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba3d54u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd26a9u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xba3d90u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba3d94u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ba3db0(Cpu *restrict c) {
    FN_ENTER(0xba3db0u);
L_ba3db0:;
    { uint32_t ea = c->r[0] + 0x236u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_ba3db8(Cpu *restrict c) {
    FN_ENTER(0xba3db8u);
L_ba3db8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x236u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_ba4000; }
    { uint32_t ea = c->r[4] + 0x236u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3df8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3df0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_ba3df8:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_ba3e2c; }
    c->r[1] = 0xe94fa0u;
    { uint32_t ea = c->r[4] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xba3e10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xb0u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    if (COND_EQ) { goto L_ba3ec0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = (c->r[6] >> 2); }
    if (COND_EQ) { c->r[7] = (c->r[7] >> 2); }
    goto L_ba3ec8;
L_ba3e2c:;
    { uint32_t ea = c->r[4] + 0x235u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba3e98; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3e58; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3e50u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
L_ba3e58:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3e78; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3e70u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
L_ba3e78:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba3e98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3e90u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_ba3e98:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4000; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba3eb0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_ba3ec0:;
    c->r[6] = (c->r[6] >> 1);
    c->r[7] = (c->r[7] >> 1);
L_ba3ec8:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba3ed8u; f_d0804c(c);
    c->r[10] = 0x1u;
    c->r[1] = 0x0u;
    c->r[5] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba3f14u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba3f7c; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xba3f30u; f_d0804c(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba3f44u; rt_dispatch(c);
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[0] = 0x5u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[8]); }
    c->r[0] = 0xbd100eu;
    c->r[2] = 0xba3f74u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xba3f78u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[9]); }
L_ba3f7c:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba3ff4; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba3f98u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba3facu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x5u;
    c->r[3] = 0xfu;
    c->r[12] = 0x82u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd2372u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xba3fecu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba3ff0u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
L_ba3ff4:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4008; }
L_ba4000:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_ba4008:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba4018u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba402cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd23d1u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xba4068u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba406cu; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ba4088(Cpu *restrict c) {
    FN_ENTER(0xba4088u);
L_ba4088:;
    { uint32_t ea = c->r[0] + 0x237u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_ba4090(Cpu *restrict c) {
    FN_ENTER(0xba4090u);
L_ba4090:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x237u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ba41f0; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x237u; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_ba41b0; }
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba40c8u; f_d0804c(c);
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xf000u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[9] = 0x2u;
    c->r[10] = 0x7u;
    c->r[7] = 0x1u;
    c->r[6] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb00000u;
    if (COND_NE) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[1];
    c->r[14] = 0xba4114u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xba4124u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4138u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbd22fbu;
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xba414cu + c->r[0];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xba4168u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba41f0; }
    c->r[5] = 0x0u;
L_ba417c:;
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + (c->r[5] << 6);
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4198; }
    c->r[14] = 0xba4194u; f_a87660(c);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[6]); }
L_ba4198:;
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_ba417c; }
    goto L_ba41f0;
L_ba41b0:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba41d0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba41c8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ba41d0:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba41f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba41e8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_ba41f0:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ba41fc(Cpu *restrict c) {
    FN_ENTER(0xba41fcu);
L_ba41fc:;
    { uint32_t ea = c->r[0] + 0x239u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_ba4204(Cpu *restrict c) {
    FN_ENTER(0xba4204u);
L_ba4204:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x239u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_ba4524; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x239u; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_ba4484; }
    c->r[0] = 0xe94b7cu;
    { uint32_t ea = 0xba4234u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba4298; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba4254u; f_d0804c(c);
    c->r[5] = 0x1u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[6] >> 1);
    c->r[2] = (c->r[7] >> 1);
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba4294u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_ba4298:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba4314; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba42b4u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba42c8u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] >> 1);
    c->r[0] = 0x1u;
    c->r[2] = 0x5u;
    c->r[3] = 0xfu;
    c->r[12] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd20c0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[3] = (c->r[6] >> 1);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xba430cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba4310u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
L_ba4314:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba438c; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[6] = 0x10u;
    c->r[14] = 0xba4330u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4344u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x100u;
    c->r[0] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbcef01u;
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[2] = 0xba4384u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba4388u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
L_ba438c:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba4404; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[6] = 0x10u;
    c->r[14] = 0xba43a8u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba43bcu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x300u;
    c->r[0] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd1fdcu;
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[2] = 0xba43fcu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba4400u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
L_ba4404:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba4524; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[6] = 0x10u;
    c->r[14] = 0xba4420u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4434u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x100u;
    c->r[0] = 0x2u;
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd1f78u;
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[2] = 0xba4474u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba4478u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_ba4484:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba44a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba449cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_ba44a4:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba44c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba44bcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
L_ba44c4:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba44e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba44dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
L_ba44e4:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4504; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba44fcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
L_ba4504:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4524; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba451cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
L_ba4524:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_ba4540(Cpu *restrict c) {
    FN_ENTER(0xba4540u);
L_ba4540:;
    { uint32_t ea = c->r[0] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba4548(Cpu *restrict c) {
    FN_ENTER(0xba4548u);
L_ba4548:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_ba4834; }
    c->r[0] = 0xe9483cu;
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = 0xba4574u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_ba4590; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[10] = (c->r[10] >> 2); }
    if (COND_EQ) { c->r[7] = (c->r[7] >> 2); }
    goto L_ba4598;
L_ba4590:;
    c->r[10] = (c->r[10] >> 1);
    c->r[7] = (c->r[7] >> 1);
L_ba4598:;
    { uint32_t ea = c->r[4] + 0x235u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4618; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba45c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba45bcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_ba45c4:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[5] = 0x10u;
    c->r[14] = 0xba45d4u; f_d0804c(c);
    c->r[6] = 0x1u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->r[2] = c->r[7];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xba4614u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_ba4618:;
    { uint32_t ea = c->r[4] + 0x236u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4698; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4644; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba463cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_ba4644:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[5] = 0x10u;
    c->r[14] = 0xba4654u; f_d0804c(c);
    c->r[6] = 0x1u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->r[2] = c->r[7];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xba4694u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_ba4698:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba46b8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba46b0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
L_ba46b8:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba46d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba46d0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_ba46d8:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba46f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba46f0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
L_ba46f8:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba4710; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4834; }
L_ba4710:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xba471cu; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4730u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[11] = 0x5u;
    c->r[8] = 0xfu;
    c->r[6] = 0x1u;
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[9] = 0x2u;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[11]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd0812u;
    c->r[2] = 0xba4770u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba4774u; f_d091ec(c);
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    c->r[14] = 0xba4784u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4798u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x82u;
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    c->r[8] = 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd1b8eu;
    c->r[2] = 0xba47d0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba47d4u; f_d091ec(c);
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xba47e4u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba47f8u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd1c0du;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[2] = 0xba482cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xba4830u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
L_ba4834:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ba484c(Cpu *restrict c) {
    FN_ENTER(0xba484cu);
L_ba484c:;
    { uint32_t ea = c->r[0] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba4854(Cpu *restrict c) {
    FN_ENTER(0xba4854u);
L_ba4854:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_ba4978; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4890; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba4888u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ba4890:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba48b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba48a8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_ba48b0:;
    { uint32_t ea = c->r[4] + 0x250u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x237u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4978; }
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba48d4u; f_d0804c(c);
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xf000u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[9] = 0x2u;
    c->r[10] = 0x7u;
    c->r[6] = 0x1u;
    c->r[7] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb00000u;
    if (COND_NE) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[1];
    c->r[14] = 0xba4920u; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xba4930u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4944u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbd1aefu;
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xba4958u + c->r[0];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xba4974u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
L_ba4978:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ba4984(Cpu *restrict c) {
    FN_ENTER(0xba4984u);
L_ba4984:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba498c(Cpu *restrict c) {
    FN_ENTER(0xba498cu);
L_ba498c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba49b0; }
    c->r[14] = 0xba49a8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_ba49b0:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_ba4a08; }
    c->r[0] = c->r[5];
    c->r[14] = 0xba49c4u; f_a87648(c);
    { uint32_t ea = c->r[4] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba49e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba49dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x350u; ST32(ea, c->r[0]); }
L_ba49e4:;
    { uint32_t ea = c->r[4] + 0x354u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba49fcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x354u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_ba4a08:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b9ff38(c);
}
void f_ba4a14(Cpu *restrict c) {
    FN_ENTER(0xba4a14u);
L_ba4a14:;
    { uint32_t ea = c->r[0] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba4a1c(Cpu *restrict c) {
    FN_ENTER(0xba4a1cu);
L_ba4a1c:;
    { uint32_t ea = c->r[0] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x358u; ST32(ea, c->r[1]); }
    __attribute__((musttail)) return f_b9ff38(c);
}
void f_ba4a30(Cpu *restrict c) {
    FN_ENTER(0xba4a30u);
L_ba4a30:;
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba4a38(Cpu *restrict c) {
    FN_ENTER(0xba4a38u);
L_ba4a38:;
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x35cu; ST32(ea, c->r[1]); }
    __attribute__((musttail)) return f_b9ff38(c);
}
void f_ba4a4c(Cpu *restrict c) {
    FN_ENTER(0xba4a4cu);
L_ba4a4c:;
    { uint32_t ea = c->r[0] + 0x340u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba4a54(Cpu *restrict c) {
    FN_ENTER(0xba4a54u);
L_ba4a54:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_ba4b74; }
    { uint32_t ea = c->r[4] + 0x340u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x237u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4b74; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4a9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba4a94u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ba4a9c:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4abc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba4ab4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_ba4abc:;
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[8] = 0x10u;
    c->r[14] = 0xba4ad0u; f_d0804c(c);
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xf000u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[9] = 0x2u;
    c->r[10] = 0x7u;
    c->r[6] = 0x1u;
    c->r[7] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb00000u;
    if (COND_NE) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[1];
    c->r[14] = 0xba4b1cu; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xba4b2cu; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xba4b40u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbd18f3u;
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xba4b54u + c->r[0];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xba4b70u; f_d091ec(c);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
L_ba4b74:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ba4b80(Cpu *restrict c) {
    FN_ENTER(0xba4b80u);
L_ba4b80:;
    { uint32_t ea = c->r[0] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_ba4b88(Cpu *restrict c) {
    FN_ENTER(0xba4b88u);
L_ba4b88:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_ba4e10; }
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4c00; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ba4be4; }
    c->r[7] = (c->r[1] << 6);
    c->r[6] = c->r[0] - 0x4u;
    c->r[5] = 0x0u;
L_ba4bc8:;
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba4bdc; }
    c->r[14] = 0xba4bd8u; f_a87660(c);
    { uint32_t ea = c->r[6] + c->r[7]; ST32(ea, c->r[5]); }
L_ba4bdc:;
    c->r[7] = f_subs(c, c->r[7], 0x40u);
    if (COND_NE) { goto L_ba4bc8; }
L_ba4be4:;
    c->r[0] = 0xe9ddd8u;
    { uint32_t ea = 0xba4bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xba4bf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xba4c00u; rt_dispatch(c);
L_ba4c00:;
    c->r[0] = 0xe9ddbcu;
    { uint32_t ea = 0xba4c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xba4c10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x348u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xba4c20u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xba4c28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xba4c38u; rt_dispatch(c);
    c->r[5] = 0x40u;
    { uint64_t r = (uint64_t)c->r[9] * c->r[5]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[7] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[0] = c->r[6];
    if (COND_CC) { c->r[7] = ~0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[7] = ~0x0u; }
    c->r[14] = 0xba4c64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xba4c78u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[9]); c->r[0] = c->r[0] + 8u; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_ba4d3c; }
    c->r[1] = ~0x3fu;
    c->r[2] = c->r[1] + (c->r[9] << 6);
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] + (c->r[2] >> 6);
    { uint32_t r = c->r[1] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_ba4ccc; }
    c->r[3] = 0x0u - c->r[1];
    c->r[7] = 0x0u;
    c->r[1] = c->r[0];
L_ba4ca8:;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x40u;
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_ba4ca8; }
    goto L_ba4cd0;
L_ba4ccc:;
    c->r[1] = c->r[0];
L_ba4cd0:;
    (void)f_subs(c, c->r[2], 0xc0u);
    if (COND_CC) { goto L_ba4d3c; }
    c->r[2] = c->r[0] + (c->r[9] << 6);
    c->r[3] = 0x0u;
L_ba4ce0:;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x88u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x84u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x80u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xfcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xbcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xccu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x100u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_ba4ce0; }
L_ba4d3c:;
    { uint32_t ea = c->r[4] + 0x344u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe9dc7cu;
    { uint32_t ea = 0xba4d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xba4d50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[9] + (c->r[9] << 1);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[5] << 5);
    c->pc = c->r[3]; c->r[14] = 0xba4d68u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x348u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xba4d74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[5] << 2);
    c->pc = c->r[3]; c->r[14] = 0xba4d88u; rt_dispatch(c);
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[4] + 0x34cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x33cu; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_ba4e10; }
    c->r[1] = c->r[9] - 0x1u;
    c->r[2] = 0xau;
    c->r[3] = 0x3u;
    goto L_ba4db8;
L_ba4da8:;
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x4u;
    c->r[1] = c->r[1] - 0x1u;
    c->r[2] = c->r[2] + 0xcu;
L_ba4db8:;
    c->r[0] = c->r[0] + c->r[2];
    c->r[7] = c->r[3] - 0x3u;
    c->r[6] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0] - 0xau; ST16(ea, c->r[7]); }
    c->r[7] = c->r[3] - 0x2u;
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0] - 0x8u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0] - 0x6u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0] - 0x4u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0] - 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); }
    if (COND_NE) { goto L_ba4da8; }
L_ba4e10:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ba4e20(Cpu *restrict c) {
    FN_ENTER(0xba4e20u);
L_ba4e20:;
    { uint32_t ea = c->r[1] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1e4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    return;
}
void f_ba4e30(Cpu *restrict c) {
    FN_ENTER(0xba4e30u);
L_ba4e30:;
    { uint32_t ea = c->r[1] + 0x1f0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1f4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    return;
}
void f_ba4e40(Cpu *restrict c) {
    FN_ENTER(0xba4e40u);
L_ba4e40:;
    { uint32_t ea = c->r[1] + 0x1e8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1ecu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    return;
}
void f_ba4e50(Cpu *restrict c) {
    FN_ENTER(0xba4e50u);
L_ba4e50:;
    { uint32_t ea = c->r[1] + 0x1f8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1fcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    return;
}
void f_ba4e60(Cpu *restrict c) {
    FN_ENTER(0xba4e60u);
L_ba4e60:;
    c->v.s[0] = LD32(c->r[0] + 544u);
    return;
}
void f_ba4e68(Cpu *restrict c) {
    FN_ENTER(0xba4e68u);
L_ba4e68:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x120u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[6] = 0x0u;
    c->r[8] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[8]); }
    c->v.s[16] = LD32(c->r[4] + 232u);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xba4ee4u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xba4ef0u; f_15efdf4(c);
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    c->r[5] = c->r[4] + 0x90u;
    c->r[1] = c->r[13] + 0x50u;
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    ST32(c->r[13] + 96u, c->v.s[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba4f44u; f_21ebe8(c);
    c->v.s[16] = LD32(c->r[4] + 224u);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xba4f50u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xba4f5cu; f_15efdf4(c);
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    c->r[1] = c->r[13] + 0x50u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 100u, c->v.s[0]);
    ST32(c->r[13] + 104u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 116u, c->v.s[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba4facu; f_21ebe8(c);
    c->v.s[16] = LD32(c->r[4] + 228u);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xba4fb8u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xba4fc4u; f_15efdf4(c);
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    c->r[1] = c->r[13] + 0x50u;
    c->r[0] = c->r[5];
    ST32(c->r[13] + 80u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 88u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 112u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba5014u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba506cu; f_21ebe8(c);
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_ba5220; }
    c->v.s[0] = LD32(c->r[5] + 208u);
    c->v.s[10] = LD32(c->r[5] + 192u);
    c->v.s[2] = LD32(c->r[5] + 212u);
    c->v.s[6] = LD32(c->r[5] + 196u);
    c->v.s[4] = LD32(c->r[5] + 216u);
    c->v.s[8] = LD32(c->r[5] + 200u);
    c->v.s[16] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[13] + 0x50u;
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] * c->v.f[16];
    ST32(c->r[13] + 132u, c->v.s[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xba5194u; f_21ebe8(c);
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[2] = LD32(c->r[0] + 208u);
    c->v.s[10] = LD32(c->r[0] + 192u);
    c->v.s[4] = LD32(c->r[0] + 212u);
    c->v.s[6] = LD32(c->r[0] + 196u);
    c->v.s[0] = LD32(c->r[0] + 216u);
    c->v.s[8] = LD32(c->r[0] + 200u);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[8] = c->v.f[8] + c->v.f[0];
    c->v.f[6] = c->v.f[6] + c->v.f[4];
    c->v.f[10] = c->v.f[10] + c->v.f[2];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[8] * c->v.f[16]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[6] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[16]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[5]); }
    goto L_ba5268;
L_ba5220:;
    c->v.s[4] = LD32(c->r[4] + 304u);
    c->v.s[6] = LD32(c->r[4] + 308u);
    c->v.s[8] = LD32(c->r[4] + 312u);
    c->v.s[2] = LD32(c->r[4] + 240u);
    c->v.s[0] = LD32(c->r[4] + 248u);
    c->v.s[10] = 0x447a0000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[6] = c->r[0];
    c->r[0] = c->r[1];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
L_ba5268:;
    c->r[5] = 0x0u;
    ST32(c->r[13] + 144u, c->v.s[2]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[4] + 0x100u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0xba52d8u; f_ba56a0(c);
    c->v.s[16] = LD32(c->r[4] + 28u);
    c->v.s[0] = LD32(c->r[4] + 480u);
    c->v.s[2] = LD32(c->r[4] + 496u);
    c->v.s[4] = LD32(c->r[4] + 500u);
    c->v.s[6] = LD32(c->r[4] + 508u);
    c->v.s[8] = LD32(c->r[4] + 504u);
    c->v.s[18] = 0x3f800000u;
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    ST32(c->r[4] + 480u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[4] + 484u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[4]);
    ST32(c->r[4] + 484u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 488u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    ST32(c->r[4] + 488u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 492u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[6]);
    ST32(c->r[4] + 492u, c->v.s[2]);
    c->r[14] = 0xba5328u; f_15f0094(c);
    ST32(c->r[4] + 480u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[0] = LD32(c->r[4] + 484u);
    c->r[14] = 0xba5338u; f_15f0094(c);
    ST32(c->r[4] + 484u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[0] = LD32(c->r[4] + 488u);
    c->r[14] = 0xba5348u; f_15f0094(c);
    ST32(c->r[4] + 488u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[0] = LD32(c->r[4] + 492u);
    c->r[14] = 0xba5358u; f_15f0094(c);
    ST32(c->r[4] + 492u, c->v.s[0]);
    c->v.s[20] = 0x40c90fdbu;
    c->v.s[2] = LD32(c->r[4] + 320u);
    c->v.s[0] = LD32(c->r[4] + 336u);
    c->v.s[4] = LD32(c->r[4] + 324u);
    c->v.s[6] = LD32(c->r[4] + 328u);
    c->v.s[8] = LD32(c->r[4] + 332u);
    c->v.s[1] = c->v.s[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    ST32(c->r[4] + 336u, c->v.s[0]);
    c->v.s[2] = LD32(c->r[4] + 340u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[4]);
    ST32(c->r[4] + 340u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 344u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[6]);
    ST32(c->r[4] + 344u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[4] + 348u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[8]);
    ST32(c->r[4] + 348u, c->v.s[2]);
    c->r[14] = 0xba53a8u; f_15f0094(c);
    ST32(c->r[4] + 336u, c->v.s[0]);
    c->v.s[1] = c->v.s[20];
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->r[14] = 0xba53b8u; f_15f0094(c);
    ST32(c->r[4] + 340u, c->v.s[0]);
    c->v.s[1] = c->v.s[20];
    c->v.s[0] = LD32(c->r[4] + 344u);
    c->r[14] = 0xba53c8u; f_15f0094(c);
    ST32(c->r[4] + 344u, c->v.s[0]);
    c->v.s[1] = c->v.s[20];
    c->v.s[0] = LD32(c->r[4] + 348u);
    c->r[14] = 0xba53d8u; f_15f0094(c);
    ST32(c->r[4] + 348u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[2] = LD32(c->r[4] + 368u);
    c->v.s[0] = LD32(c->r[4] + 376u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xba53f0u; f_15f0094(c);
    ST32(c->r[4] + 376u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[2] = LD32(c->r[4] + 372u);
    c->v.s[0] = LD32(c->r[4] + 380u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xba5408u; f_15f0094(c);
    ST32(c->r[4] + 380u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[2] = LD32(c->r[4] + 392u);
    c->v.s[0] = LD32(c->r[4] + 400u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xba5420u; f_15f0094(c);
    ST32(c->r[4] + 400u, c->v.s[0]);
    c->v.s[1] = c->v.s[18];
    c->v.s[2] = LD32(c->r[4] + 396u);
    c->v.s[0] = LD32(c->r[4] + 404u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xba5438u; f_15f0094(c);
    ST32(c->r[4] + 404u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba5470; }
    c->r[6] = 0x0u;
L_ba544c:;
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[0] + c->r[5];
    c->r[14] = 0xba545cu; f_b9f2f4(c);
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_ba544c; }
L_ba5470:;
    { uint32_t ea = c->r[4] + 0x234u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba5578; }
    c->r[0] = 0xe93dccu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = 0xba5490u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = ((c->r[2] >> 15) & 1); uint32_t r = c->r[1] & (c->r[2] >> 16); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    c->r[2] = (c->r[2] >> 16);
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x3b4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x564u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x714u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8c4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xa74u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_ba5518; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ba5578; }
    { uint32_t ea = c->r[0] + 0xc24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ba5578; }
L_ba5518:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->pc = c->r[2]; c->r[14] = 0xba5528u; rt_dispatch(c);
    c->v.s[2] = LD32(c->r[13] + 276u);
    c->v.s[6] = LD32(c->r[13] + 244u);
    c->v.s[4] = LD32(c->r[13] + 240u);
    c->v.s[10] = LD32(c->r[13] + 272u);
    c->v.s[0] = LD32(c->r[13] + 280u);
    c->v.s[8] = LD32(c->r[13] + 248u);
    c->v.s[12] = LD32(c->r[4] + 260u);
    c->v.s[14] = LD32(c->r[4] + 276u);
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[4] = 0x3f000000u;
    c->v.f[6] = c->v.f[12] + c->v.f[14];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[0] = 0x0u; }
    if (COND_GT) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[0]); }
L_ba5578:;
    { uint32_t ea = c->r[4] + 0x240u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba5648; }
    { uint32_t ea = c->r[4] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba55e4; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[5] = 0x10u;
    c->r[14] = 0xba55a0u; f_d0804c(c);
    c->r[2] = 0x1u;
    c->r[1] = 0x2u;
    c->r[6] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x80u;
    c->r[2] = 0x80u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xba55dcu; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x384u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x37cu; ST8(ea, c->r[6]); }
L_ba55e4:;
    { uint32_t ea = c->r[4] + 0x388u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ba5688; }
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[5] = 0x10u;
    c->r[14] = 0xba5600u; f_d0804c(c);
    c->r[2] = 0x1u;
    c->r[1] = 0x2u;
    c->r[6] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x80u;
    c->r[2] = 0x80u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xba563cu; f_d09098(c);
    { uint32_t ea = c->r[4] + 0x388u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x37cu; ST8(ea, c->r[6]); }
    goto L_ba5688;
L_ba5648:;
    { uint32_t ea = c->r[4] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba5668; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba5660u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x384u; ST32(ea, c->r[0]); }
L_ba5668:;
    { uint32_t ea = c->r[4] + 0x388u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ba5688; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xba5680u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x388u; ST32(ea, c->r[0]); }
L_ba5688:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ba56a0(Cpu *restrict c) {
    FN_ENTER(0xba56a0u);
L_ba56a0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x80u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[12] = LD32(c->r[0] + 64u);
    c->v.s[7] = LD32(c->r[0] + 68u);
    c->v.s[9] = LD32(c->r[0] + 72u);
    c->r[14] = 0x0u;
    c->r[12] = c->r[13];
    c->r[7] = c->r[12] + 0x20u;
    c->r[6] = c->r[7];
    c->v.s[0] = c->v.s[12] ^ 0x80000000u;
    c->v.s[2] = c->v.s[7] ^ 0x80000000u;
    c->v.s[4] = c->v.s[9] ^ 0x80000000u;
    ST32(c->r[13], c->v.s[0]);
    ST32(c->r[13] + 4u, c->v.s[2]);
    ST32(c->r[13] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 32u, c->v.s[12]);
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 48u, c->v.s[12]);
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[7]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[7]);
    ST32(c->r[13] + 88u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 96u, c->v.s[12]);
    ST32(c->r[13] + 100u, c->v.s[7]);
    ST32(c->r[13] + 104u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[14]); }
    ST32(c->r[13] + 112u, c->v.s[12]);
    ST32(c->r[13] + 116u, c->v.s[7]);
    ST32(c->r[13] + 120u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[14]); }
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[5] = LD32(c->r[0] + 16u);
    c->v.s[3] = LD32(c->r[0] + 32u);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[1] = LD32(c->r[0] + 20u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.s[6] = LD32(c->r[0] + 36u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[14] = LD32(c->r[0] + 52u);
    c->v.f[11] = -(float)(c->v.f[12] * c->v.f[8]);
    c->v.f[11] = c->v.f[11] - (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[11] = c->v.f[11] - (float)(c->v.f[3] * c->v.f[9]);
    c->v.f[13] = -(float)(c->v.f[12] * c->v.f[2]);
    c->v.f[15] = -(float)(c->v.f[12] * c->v.f[0]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[1] * c->v.f[7]);
    c->v.f[15] = c->v.f[15] - (float)(c->v.f[10] * c->v.f[7]);
    c->v.s[12] = LD32(c->r[0] + 48u);
    c->v.s[7] = LD32(c->r[0] + 56u);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[6] * c->v.f[9]);
    c->v.f[15] = c->v.f[15] - (float)(c->v.f[4] * c->v.f[9]);
    c->v.f[11] = c->v.f[12] + c->v.f[11];
    c->v.f[9] = c->v.f[14] + c->v.f[13];
    ST32(c->r[13], c->v.s[11]);
    c->v.f[11] = c->v.f[7] + c->v.f[15];
    ST32(c->r[13] + 4u, c->v.s[9]);
    ST32(c->r[13] + 8u, c->v.s[11]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    c->v.s[11] = LD32(c->r[13] + 20u);
    c->v.s[9] = LD32(c->r[13] + 16u);
    c->v.s[13] = LD32(c->r[13] + 24u);
    c->v.f[15] = c->v.f[5] * c->v.f[11];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[9]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[3] * c->v.f[13]);
    c->v.f[16] = c->v.f[11] * c->v.f[1];
    c->v.f[11] = c->v.f[11] * c->v.f[10];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[13] * c->v.f[6]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[13] * c->v.f[4]);
    c->v.f[9] = c->v.f[12] + c->v.f[15];
    c->v.f[13] = c->v.f[14] + c->v.f[16];
    ST32(c->r[13] + 16u, c->v.s[9]);
    c->v.f[9] = c->v.f[7] + c->v.f[11];
    ST32(c->r[13] + 20u, c->v.s[13]);
    ST32(c->r[13] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[14]); }
    c->v.s[11] = LD32(c->r[13] + 36u);
    c->v.s[9] = LD32(c->r[13] + 32u);
    c->v.s[13] = LD32(c->r[13] + 40u);
    c->v.f[15] = c->v.f[5] * c->v.f[11];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[9]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[3] * c->v.f[13]);
    c->v.f[16] = c->v.f[11] * c->v.f[1];
    c->v.f[11] = c->v.f[11] * c->v.f[10];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[13] * c->v.f[6]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[13] * c->v.f[4]);
    c->v.f[9] = c->v.f[12] + c->v.f[15];
    c->v.f[13] = c->v.f[14] + c->v.f[16];
    ST32(c->r[13] + 32u, c->v.s[9]);
    c->v.f[9] = c->v.f[7] + c->v.f[11];
    ST32(c->r[13] + 36u, c->v.s[13]);
    ST32(c->r[13] + 40u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    c->v.s[11] = LD32(c->r[13] + 52u);
    c->v.s[9] = LD32(c->r[13] + 48u);
    c->v.s[13] = LD32(c->r[13] + 56u);
    c->v.f[5] = c->v.f[5] * c->v.f[11];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[9]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[13]);
    c->v.f[1] = c->v.f[11] * c->v.f[1];
    c->v.f[8] = c->v.f[11] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[13] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[13] * c->v.f[6]);
    c->v.f[0] = c->v.f[12] + c->v.f[5];
    c->v.f[2] = c->v.f[14] + c->v.f[1];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.f[0] = c->v.f[7] + c->v.f[8];
    ST32(c->r[13] + 52u, c->v.s[2]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[14]); }
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[5] = LD32(c->r[0] + 16u);
    c->v.s[12] = LD32(c->r[13] + 68u);
    c->v.s[9] = LD32(c->r[13] + 64u);
    c->v.s[11] = LD32(c->r[13] + 72u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[14] = LD32(c->r[0] + 20u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[0] + 36u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[3] = LD32(c->r[0] + 48u);
    c->v.s[1] = LD32(c->r[0] + 52u);
    c->v.f[13] = c->v.f[5] * c->v.f[12];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[6] * c->v.f[9]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[7] * c->v.f[11]);
    c->v.f[15] = c->v.f[12] * c->v.f[14];
    c->v.f[16] = c->v.f[12] * c->v.f[10];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.s[12] = LD32(c->r[0] + 56u);
    c->r[0] = c->r[12] + 0x10u;
    c->r[2] = c->r[0];
    c->r[3] = c->r[0];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[9] = c->v.f[3] + c->v.f[13];
    c->v.f[11] = c->v.f[1] + c->v.f[15];
    ST32(c->r[13] + 64u, c->v.s[9]);
    c->v.f[9] = c->v.f[12] + c->v.f[16];
    ST32(c->r[13] + 68u, c->v.s[11]);
    ST32(c->r[13] + 72u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    c->v.s[11] = LD32(c->r[13] + 84u);
    c->v.s[9] = LD32(c->r[13] + 80u);
    c->v.s[13] = LD32(c->r[13] + 88u);
    c->v.f[15] = c->v.f[5] * c->v.f[11];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[6] * c->v.f[9]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[7] * c->v.f[13]);
    c->v.f[16] = c->v.f[11] * c->v.f[14];
    c->v.f[11] = c->v.f[11] * c->v.f[10];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[13] * c->v.f[8]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[13] * c->v.f[4]);
    c->v.f[9] = c->v.f[3] + c->v.f[15];
    c->v.f[13] = c->v.f[1] + c->v.f[16];
    ST32(c->r[13] + 80u, c->v.s[9]);
    c->v.f[9] = c->v.f[12] + c->v.f[11];
    ST32(c->r[13] + 84u, c->v.s[13]);
    ST32(c->r[13] + 88u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[14]); }
    c->v.s[11] = LD32(c->r[13] + 100u);
    c->v.s[9] = LD32(c->r[13] + 96u);
    c->v.s[13] = LD32(c->r[13] + 104u);
    c->v.f[15] = c->v.f[5] * c->v.f[11];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[6] * c->v.f[9]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[7] * c->v.f[13]);
    c->v.f[16] = c->v.f[11] * c->v.f[14];
    c->v.f[11] = c->v.f[11] * c->v.f[10];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[13] * c->v.f[8]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[13] * c->v.f[4]);
    c->v.f[9] = c->v.f[3] + c->v.f[15];
    c->v.f[13] = c->v.f[1] + c->v.f[16];
    ST32(c->r[13] + 96u, c->v.s[9]);
    c->v.f[9] = c->v.f[12] + c->v.f[11];
    ST32(c->r[13] + 100u, c->v.s[13]);
    ST32(c->r[13] + 104u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[14]); }
    c->v.s[11] = LD32(c->r[13] + 116u);
    c->v.s[9] = LD32(c->r[13] + 112u);
    c->v.s[13] = LD32(c->r[13] + 120u);
    c->v.f[5] = c->v.f[5] * c->v.f[11];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[6] * c->v.f[9]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[7] * c->v.f[13]);
    c->v.f[14] = c->v.f[11] * c->v.f[14];
    c->v.f[6] = c->v.f[11] * c->v.f[10];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[9] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[13] * c->v.f[4]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[13] * c->v.f[8]);
    c->v.f[0] = c->v.f[3] + c->v.f[5];
    c->v.f[2] = c->v.f[1] + c->v.f[14];
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.f[0] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 116u, c->v.s[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[14]); }
    c->v.s[0] = LD32(c->r[13] + 24u);
    c->v.s[6] = LD32(c->r[13] + 8u);
    c->v.s[4] = LD32(c->r[13] + 4u);
    c->v.s[10] = LD32(c->r[13] + 20u);
    c->v.s[2] = LD32(c->r[13]);
    c->v.s[8] = LD32(c->r[13] + 16u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[10]);
    if (COND_MI) { c->r[2] = c->r[12]; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    if (COND_MI) { c->r[2] = c->r[12]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    if (COND_MI) { c->r[3] = c->r[12]; }
    c->v.s[0] = c->r[5];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[10]);
    if (COND_GT) { c->r[3] = c->r[12]; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    c->r[5] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    if (COND_GT) { c->r[5] = c->r[12]; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[12]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[3];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[14]); }
    c->r[3] = c->r[1] + 0x10u;
    c->v.s[6] = LD32(c->r[13] + 40u);
    c->v.s[4] = LD32(c->r[13] + 36u);
    c->v.s[2] = LD32(c->r[13] + 32u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[7];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->v.s[0] = c->r[4];
    if (COND_MI) { c->r[6] = c->r[1]; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[6];
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[4] = c->r[1]; }
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    c->v.s[6] = c->r[5];
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    c->v.s[4] = c->r[0];
    c->r[0] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    if (COND_GT) { c->r[6] = c->r[3]; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    if (COND_GT) { c->r[5] = c->r[3]; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[3]; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.s[8] = c->r[6];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = c->r[12] + 0x30u;
    c->v.s[6] = LD32(c->r[13] + 56u);
    c->v.s[4] = LD32(c->r[13] + 52u);
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->r[7] = c->r[0];
    c->r[6] = c->r[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->v.s[0] = c->r[4];
    if (COND_MI) { c->r[7] = c->r[1]; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[7];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    c->v.s[6] = c->r[5];
    if (COND_MI) { c->r[4] = c->r[1]; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    c->v.s[4] = c->r[8];
    if (COND_GT) { c->r[6] = c->r[3]; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    if (COND_GT) { c->r[5] = c->r[3]; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[1] + 0x14u;
    c->v.s[8] = c->r[6];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = c->r[12] + 0x40u;
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->v.s[4] = LD32(c->r[13] + 68u);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->r[7] = c->r[0];
    c->r[6] = c->r[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->v.s[0] = c->r[4];
    if (COND_MI) { c->r[7] = c->r[1]; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[7];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    c->v.s[6] = c->r[5];
    if (COND_MI) { c->r[4] = c->r[1]; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    c->v.s[4] = c->r[8];
    if (COND_GT) { c->r[6] = c->r[3]; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    if (COND_GT) { c->r[5] = c->r[3]; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[1] + 0x14u;
    c->v.s[8] = c->r[6];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = c->r[12] + 0x50u;
    c->v.s[6] = LD32(c->r[13] + 88u);
    c->v.s[4] = LD32(c->r[13] + 84u);
    c->v.s[2] = LD32(c->r[13] + 80u);
    c->r[7] = c->r[0];
    c->r[6] = c->r[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->v.s[0] = c->r[4];
    if (COND_MI) { c->r[7] = c->r[1]; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[7];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    c->v.s[6] = c->r[5];
    if (COND_MI) { c->r[4] = c->r[1]; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    c->v.s[4] = c->r[8];
    if (COND_GT) { c->r[6] = c->r[3]; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    if (COND_GT) { c->r[5] = c->r[3]; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[1] + 0x14u;
    c->v.s[8] = c->r[6];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = c->r[12] + 0x60u;
    c->v.s[6] = LD32(c->r[13] + 104u);
    c->v.s[4] = LD32(c->r[13] + 100u);
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->r[7] = c->r[0];
    c->r[6] = c->r[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[2];
    c->r[2] = c->r[0];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->v.s[0] = c->r[4];
    if (COND_MI) { c->r[7] = c->r[1]; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.s[0] = c->r[7];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    c->v.s[6] = c->r[5];
    if (COND_MI) { c->r[4] = c->r[1]; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[10] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[4]);
    c->v.s[4] = c->r[8];
    if (COND_GT) { c->r[6] = c->r[3]; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    c->r[7] = c->r[12] + 0x70u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    if (COND_GT) { c->r[5] = c->r[3]; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[7];
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = c->r[7];
    c->v.s[6] = LD32(c->r[13] + 120u);
    c->v.s[4] = LD32(c->r[13] + 116u);
    c->v.s[2] = LD32(c->r[13] + 112u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[9];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    c->v.s[0] = c->r[10];
    if (COND_MI) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[0] = c->r[6];
    if (COND_MI) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[4] = c->r[1]; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    c->v.s[0] = c->r[5];
    c->v.s[6] = c->r[8];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[14]); }
    if (COND_GT) { c->r[0] = c->r[3]; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    if (COND_GT) { c->r[2] = c->r[3]; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[7] = c->r[3]; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[14]); }
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
