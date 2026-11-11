#include "cpu.h"
#include "neon_rt.h"
void f_3cddbc(Cpu *c);
void f_3cdf90(Cpu *c);
void f_4315f0(Cpu *c);
void f_74edec(Cpu *c);
void f_7ce408(Cpu *c);
void f_85d9e8(Cpu *c);
void f_85ead0(Cpu *c);
void f_85f118(Cpu *c);
void f_9aa47c(Cpu *c);
void f_15efd7c(Cpu *c);
void f_3ce700(Cpu *restrict c) {
    FN_ENTER(0x3ce700u);
L_3ce700:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0x264u;
    c->r[5] = c->r[4] + 0x280u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x270u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x27cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x3ce740u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_3ce7cc; }
    c->r[0] = 0x166a3fcu;
    { uint32_t ea = 0x3ce760u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ce760u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x3ce774u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3ce818; }
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3ce7d8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3ce794:;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[3]); c->r[6] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3ce794; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LS) { goto L_3ce7dc; }
    goto L_3ce7ec;
L_3ce7cc:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3ce818; }
    goto L_3ce820;
L_3ce7d8:;
    c->r[2] = 0x0u;
L_3ce7dc:;
    c->r[1] = 0x10u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x3ce7ecu; f_15efd7c(c);
L_3ce7ec:;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3ce814; }
    c->r[0] = 0x166a358u;
    { uint32_t ea = 0x3ce804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ce804u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x3ce814u; rt_dispatch(c);
L_3ce814:;
    { uint32_t ea = c->r[4] + 0x2a4u; ST32(ea, c->r[7]); }
L_3ce818:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x2a8u; ST32(ea, c->r[0]); }
L_3ce820:;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x3ce848u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_3ce8cc; }
    c->r[0] = 0x166a2fcu;
    { uint32_t ea = 0x3ce860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ce860u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x3ce874u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3ce918; }
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3ce8d8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3ce894:;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3ce894; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LS) { goto L_3ce8dc; }
    goto L_3ce8ec;
L_3ce8cc:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3ce918; }
    goto L_3ce920;
L_3ce8d8:;
    c->r[2] = 0x0u;
L_3ce8dc:;
    c->r[1] = 0x10u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x3ce8ecu; f_15efd7c(c);
L_3ce8ec:;
    { uint32_t ea = c->r[4] + 0x2a4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3ce914; }
    c->r[0] = 0x166a258u;
    { uint32_t ea = 0x3ce904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ce904u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x3ce914u; rt_dispatch(c);
L_3ce914:;
    { uint32_t ea = c->r[4] + 0x2a4u; ST32(ea, c->r[7]); }
L_3ce918:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x2a8u; ST32(ea, c->r[0]); }
L_3ce920:;
    c->r[0] = c->r[4] + 0x2acu;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x3ce934u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_3ce9b8; }
    c->r[0] = 0x166a210u;
    { uint32_t ea = 0x3ce94cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ce94cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x3ce960u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3cea04; }
    { uint32_t ea = c->r[4] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3ce9c4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3ce980:;
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3ce980; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LS) { goto L_3ce9c8; }
    goto L_3ce9d8;
L_3ce9b8:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3cea04; }
    goto L_3cea0c;
L_3ce9c4:;
    c->r[2] = 0x0u;
L_3ce9c8:;
    c->r[1] = 0x10u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x3ce9d8u; f_15efd7c(c);
L_3ce9d8:;
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3cea00; }
    c->r[0] = 0x166a16cu;
    { uint32_t ea = 0x3ce9f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ce9f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x3cea00u; rt_dispatch(c);
L_3cea00:;
    { uint32_t ea = c->r[4] + 0x2d0u; ST32(ea, c->r[7]); }
L_3cea04:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x2d4u; ST32(ea, c->r[0]); }
L_3cea0c:;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[4] + 0x2e4u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_3ceb48; }
    c->r[0] = 0x2u;
    c->r[5] = c->r[4] + 0x2e8u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x3cea38u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[4] + 0x30cu;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_3ceac8; }
    c->r[0] = 0x166a100u;
    { uint32_t ea = 0x3cea5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3cea5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x3cea70u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3ceb14; }
    { uint32_t ea = c->r[4] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3cead4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3cea90:;
    { uint32_t ea = c->r[4] + 0x30cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x310u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3cea90; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LS) { goto L_3cead8; }
    goto L_3ceae8;
L_3ceac8:;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_3ceb14; }
    goto L_3ceb1c;
L_3cead4:;
    c->r[2] = 0x0u;
L_3cead8:;
    c->r[1] = 0x20u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x3ceae8u; f_15efd7c(c);
L_3ceae8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3ceb10; }
    c->r[0] = 0x166a05cu;
    { uint32_t ea = 0x3ceb00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ceb00u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x3ceb10u; rt_dispatch(c);
L_3ceb10:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[7]); }
L_3ceb14:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x310u; ST32(ea, c->r[0]); }
L_3ceb1c:;
    { uint32_t ea = c->r[4] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x443c0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43030000u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[0] + 0x60u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[3]); }
L_3ceb48:;
    c->r[0] = c->r[4] + 0x31cu;
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[8]); }
    c->r[14] = 0x3ceb60u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_3cebe4; }
    c->r[0] = 0x1669fe4u;
    { uint32_t ea = 0x3ceb78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ceb78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[3]; c->r[14] = 0x3ceb8cu; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3cec30; }
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3cebf0; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3cebac:;
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3cebac; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_LS) { goto L_3cebf4; }
    goto L_3cec04;
L_3cebe4:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3cec30; }
    goto L_3cec38;
L_3cebf0:;
    c->r[2] = 0x0u;
L_3cebf4:;
    c->r[1] = 0x18u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x3cec04u; f_15efd7c(c);
L_3cec04:;
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3cec2c; }
    c->r[0] = 0x1669f40u;
    { uint32_t ea = 0x3cec1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3cec1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x3cec2cu; rt_dispatch(c);
L_3cec2c:;
    { uint32_t ea = c->r[4] + 0x340u; ST32(ea, c->r[7]); }
L_3cec30:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x344u; ST32(ea, c->r[0]); }
L_3cec38:;
    c->r[0] = c->r[4] + 0x348u;
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x3cec4cu; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x370u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_3cecd0; }
    c->r[0] = 0x1669ef8u;
    { uint32_t ea = 0x3cec64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3cec64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[3]; c->r[14] = 0x3cec78u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3ced1c; }
    { uint32_t ea = c->r[4] + 0x370u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3cecdc; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3cec98:;
    { uint32_t ea = c->r[4] + 0x36cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x370u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3cec98; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_LS) { goto L_3cece0; }
    goto L_3cecf0;
L_3cecd0:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3ced1c; }
    goto L_3ced24;
L_3cecdc:;
    c->r[2] = 0x0u;
L_3cece0:;
    c->r[1] = 0x18u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x3cecf0u; f_15efd7c(c);
L_3cecf0:;
    { uint32_t ea = c->r[4] + 0x36cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3ced18; }
    c->r[0] = 0x1669e54u;
    { uint32_t ea = 0x3ced08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ced08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x3ced18u; rt_dispatch(c);
L_3ced18:;
    { uint32_t ea = c->r[4] + 0x36cu; ST32(ea, c->r[7]); }
L_3ced1c:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x370u; ST32(ea, c->r[0]); }
L_3ced24:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_3cddbc(c);
}
void f_3ced60(Cpu *restrict c) {
    FN_ENTER(0x3ced60u);
L_3ced60:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3cedc4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    (void)f_subs(c, c->r[5], 0xbu);
    if (COND_EQ) { goto L_3cede0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_NE) { goto L_3cede0; }
    (void)f_subs(c, c->r[5], 0xau);
    if (COND_NE) { goto L_3ceda8; }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_3ceda8:;
    c->r[0] = 0x1669fc4u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x3cedb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3cedbcu; f_4315f0(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
L_3cedc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
L_3cede0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3cede8(Cpu *restrict c) {
    FN_ENTER(0x3cede8u);
L_3cede8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_EQ) { goto L_3cee30; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3cee10u; f_3cdf90(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_EQ) { goto L_3cee30; }
    c->r[14] = 0x3cee20u; f_85f118(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0xau;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_3cee64; }
L_3cee30:;
    c->r[14] = 0x3cee34u; f_85ead0(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3cee64; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_3cee64; }
    c->r[14] = 0x3cee50u; f_85d9e8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3cee64; }
    c->r[0] = c->r[5];
    c->r[1] = 0xffu;
    c->r[14] = 0x3cee64u; f_7ce408(c);
L_3cee64:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xb0cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x243u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
