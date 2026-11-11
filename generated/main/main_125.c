#include "cpu.h"
#include "neon_rt.h"
void f_9b18f0(Cpu *c);
void f_9b2328(Cpu *c);
void f_9b2dd4(Cpu *c);
void f_9b364c(Cpu *c);
void f_9b41d8(Cpu *c);
void f_9b5270(Cpu *c);
void f_9b5388(Cpu *c);
void f_9b560c(Cpu *c);
void f_9b56d8(Cpu *c);
void f_9b5f20(Cpu *c);
void f_9b6054(Cpu *c);
void f_9b6188(Cpu *c);
void f_9b62bc(Cpu *c);
void f_9b660c(Cpu *c);
void f_9b66c8(Cpu *c);
void f_9b688c(Cpu *c);
void f_9b6a14(Cpu *c);
void f_9bb9e4(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_9afafc(Cpu *restrict c) {
    FN_ENTER(0x9afafcu);
L_9afafc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x120u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9afb34; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] & 0x1u;
    { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_9afb44; }
L_9afb34:;
    c->r[0] = c->r[2] ^ c->r[7];
    c->r[3] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9afb4c; }
L_9afb44:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9afb4c:;
    c->r[0] = ~0x0u;
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[0], 0x7fu);
    if (COND_HI) { goto L_9afb44; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = 0x9afb68u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[3]; switch (c->pc) { case 0x9afb44u: goto L_9afb44; case 0x9afd6cu: goto L_9afd6c; case 0x9afd8cu: goto L_9afd8c; case 0x9afdc0u: goto L_9afdc0; case 0x9afe18u: goto L_9afe18; case 0x9afe44u: goto L_9afe44; case 0x9afe5cu: goto L_9afe5c; case 0x9afe78u: goto L_9afe78; case 0x9afe98u: goto L_9afe98; case 0x9afeb8u: goto L_9afeb8; case 0x9aff14u: goto L_9aff14; case 0x9affa0u: goto L_9affa0; case 0x9affc4u: goto L_9affc4; case 0x9b0150u: goto L_9b0150; case 0x9b015cu: goto L_9b015c; case 0x9b017cu: goto L_9b017c; case 0x9b0194u: goto L_9b0194; case 0x9b01b0u: goto L_9b01b0; case 0x9b01c8u: goto L_9b01c8; case 0x9b01e4u: goto L_9b01e4; case 0x9b0230u: goto L_9b0230; case 0x9b024cu: goto L_9b024c; case 0x9b0288u: goto L_9b0288; case 0x9b02a0u: goto L_9b02a0; case 0x9b02bcu: goto L_9b02bc; case 0x9b02e4u: goto L_9b02e4; case 0x9b0320u: goto L_9b0320; case 0x9b0358u: goto L_9b0358; case 0x9b0378u: goto L_9b0378; case 0x9b03b0u: goto L_9b03b0; case 0x9b03d0u: goto L_9b03d0; case 0x9b03ecu: goto L_9b03ec; case 0x9b0414u: goto L_9b0414; case 0x9b0434u: goto L_9b0434; case 0x9b0454u: goto L_9b0454; case 0x9b0484u: goto L_9b0484; case 0x9b04b8u: goto L_9b04b8; case 0x9b04d8u: goto L_9b04d8; case 0x9b04f8u: goto L_9b04f8; case 0x9b0530u: goto L_9b0530; case 0x9b054cu: goto L_9b054c; case 0x9b056cu: goto L_9b056c; case 0x9b058cu: goto L_9b058c; case 0x9b05a8u: goto L_9b05a8; case 0x9b05d8u: goto L_9b05d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9afd6c:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9afd78u; f_9b364c(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9afd84u; f_9b2dd4(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9afd8c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9affe8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_9b0720;
L_9afdc0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aff64; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 5); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    goto L_9b00f8;
L_9afe18:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b009c; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 5);
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    goto L_9b0854;
L_9afe44:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b065c; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_9b0c0c;
L_9afe5c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0690; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_9b0c48;
L_9afe78:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0060; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_9affe0;
L_9afe98:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0024; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_9affbc;
L_9afeb8:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b06c4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_9b0cc8;
L_9aff14:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9aff64; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 5); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    goto L_9b00f8;
L_9aff64:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b00d8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9aff90; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9aff90:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9aff9cu; rt_dispatch(c);
    goto L_9b00f8;
L_9affa0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0024; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9affbc:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    goto L_9b0dcc;
L_9affc4:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0060; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9affe0:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    goto L_9b07a0;
L_9affe8:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b0700; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0014; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0014:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0020u; rt_dispatch(c);
    goto L_9b0720;
L_9b0024:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b075c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0050; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0050:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b005cu; rt_dispatch(c);
    goto L_9b0dcc;
L_9b0060:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b0780; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b008c; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b008c:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0098u; rt_dispatch(c);
    goto L_9b07a0;
L_9b009c:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b0834; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b00c8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b00c8:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b00d4u; rt_dispatch(c);
    goto L_9b0854;
L_9b00d8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b00e8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b00e8:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b00f8u; rt_dispatch(c);
L_9b00f8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 5); ST32(ea, c->r[2]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0150:;
    c->r[0] = c->r[1];
    c->r[14] = 0x9b0158u; f_9b18f0(c);
    goto L_9b0c08;
L_9b015c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b07c4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    goto L_9b0d48;
L_9b017c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b07c4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_9b0d48;
L_9b0194:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0888; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    goto L_9b0ef0;
L_9b01b0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b08b8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_9b0f74;
L_9b01c8:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b08e8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_9b0fe0;
L_9b01e4:;
    c->r[0] = c->r[1];
    c->r[14] = 0x9b01ecu; f_9b2328(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9b141c; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[3] = c->r[7] & 0x1u;
    if (COND_NE) { goto L_9b0e88; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0224; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0224:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_9b0230:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0918; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->v.d[0] = LD64(c->r[0]);
    goto L_9b105c;
L_9b024c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0948; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b151c; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[2], 0xeu);
    if (COND_NE) { goto L_9b1534; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xda0aeeu;
    c->r[5] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0x9b0288u + c->r[1]; }
    goto L_9b1544;
L_9b0288:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b07f8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9b047c;
L_9b02a0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0978; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_9b1124;
L_9b02bc:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b09ac; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[0], 0x17u);
    if (COND_NE) { goto L_9b0ea8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[2] << 3) - c->r[2];
    c->r[0] = c->r[0] + (c->r[1] << 3);
    goto L_9b0eb4;
L_9b02e4:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b09e8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b1528; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[2], 0xeu);
    if (COND_NE) { goto L_9b16f4; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xda0a56u;
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = 0x9b0320u + c->r[1]; }
    goto L_9b1704;
L_9b0320:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9b03b8; }
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0dac; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0350; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0350:;
    c->pc = c->r[2]; c->r[14] = 0x9b0354u; rt_dispatch(c);
    goto L_9b0dc4;
L_9b0358:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0a18; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); }
    goto L_9b11e4;
L_9b0378:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9b03f4; }
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0df8; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b03a8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b03a8:;
    c->pc = c->r[2]; c->r[14] = 0x9b03acu; rt_dispatch(c);
    goto L_9b0e10;
L_9b03b0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0a48; }
L_9b03b8:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[1] = LD32(c->r[0] + 4u);
    goto L_9b0dc4;
L_9b03d0:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0a78; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); c->v.s[3] = LD32(ea + 12u); }
    goto L_9b123c;
L_9b03ec:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0aa8; }
L_9b03f4:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[1] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[3] = LD32(c->r[0] + 12u);
    goto L_9b0e10;
L_9b0414:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9b0420u; f_9b5388(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9b042cu; f_9b5270(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0434:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9b0440u; f_9b56d8(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9b044cu; f_9b560c(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0454:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b07f8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[0] = c->r[0] | c->r[2];
L_9b047c:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_9b0d88;
L_9b0484:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0ad8; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[0] + (c->r[1] << 6);
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    goto L_9b12a4;
L_9b04b8:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9b04c4u; f_9b6054(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9b04d0u; f_9b5f20(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b04d8:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9b04e4u; f_9b62bc(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9b04f0u; f_9b6188(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b04f8:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0b14; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    goto L_9b1304;
L_9b0530:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0b50; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_9b1374;
L_9b054c:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9b0558u; f_9b66c8(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9b0564u; f_9b660c(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b056c:;
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x9b0578u; f_9b6a14(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x9b0584u; f_9b688c(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b058c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0b84; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
    goto L_9b140c;
L_9b05a8:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0bb4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_9b1244;
L_9b05d8:;
    c->r[3] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x80u);
    if (COND_CC) { goto L_9b05f8; }
    c->r[0] = 0x1090768u;
    { uint32_t ea = 0x9b05f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] - 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
L_9b05f8:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], 0x7fu);
    if (COND_LS) { goto L_9afb44; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9afb44; }
    c->r[3] = 0x1090744u;
    { uint32_t ea = 0x9b0618u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] - 0x200u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9afb44; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x9b0638u; rt_dispatch(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0x9b0654u; rt_dispatch(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b065c:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0bf0; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0688; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0688:;
    c->pc = c->r[2]; c->r[14] = 0x9b068cu; rt_dispatch(c);
    goto L_9b0c08;
L_9b0690:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0c2c; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b06bc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b06bc:;
    c->pc = c->r[2]; c->r[14] = 0x9b06c0u; rt_dispatch(c);
    goto L_9b0c44;
L_9b06c4:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b0ca8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b06f0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b06f0:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b06fcu; rt_dispatch(c);
    goto L_9b0cc8;
L_9b0700:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0710; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0710:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0720u; rt_dispatch(c);
L_9b0720:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[2]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b075c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b076c; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b076c:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b077cu; rt_dispatch(c);
    goto L_9b0dcc;
L_9b0780:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0790; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0790:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b07a0u; rt_dispatch(c);
L_9b07a0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); ST32(ea, c->r[2]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_9b0c60;
L_9b07c4:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0d2c; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b07f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b07f0:;
    c->pc = c->r[2]; c->r[14] = 0x9b07f4u; rt_dispatch(c);
    goto L_9b0d44;
L_9b07f8:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b0d68; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0824; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0824:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0830u; rt_dispatch(c);
    goto L_9b0d88;
L_9b0834:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0844; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0844:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0854u; rt_dispatch(c);
L_9b0854:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 5);
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0888:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0ed4; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b08b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b08b0:;
    c->pc = c->r[2]; c->r[14] = 0x9b08b4u; rt_dispatch(c);
    goto L_9b0eec;
L_9b08b8:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0f5c; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b08e0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b08e0:;
    c->pc = c->r[2]; c->r[14] = 0x9b08e4u; rt_dispatch(c);
    goto L_9b0f74;
L_9b08e8:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0fc8; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0910; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0910:;
    c->pc = c->r[2]; c->r[14] = 0x9b0914u; rt_dispatch(c);
    goto L_9b0fe0;
L_9b0918:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b1044; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0940; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0940:;
    c->pc = c->r[2]; c->r[14] = 0x9b0944u; rt_dispatch(c);
    goto L_9b105c;
L_9b0948:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b10b8; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0970; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0970:;
    c->pc = c->r[2]; c->r[14] = 0x9b0974u; rt_dispatch(c);
    goto L_9b10d0;
L_9b0978:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b10f0; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_EQ) { goto L_9b09a0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b09a0:;
    c->r[0] = c->r[13] + 0x10u;
    c->pc = c->r[6]; c->r[14] = 0x9b09a8u; rt_dispatch(c);
    goto L_9b1118;
L_9b09ac:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b1170; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b09d8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b09d8:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b09e4u; rt_dispatch(c);
    goto L_9b1190;
L_9b09e8:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b11a4; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0a10; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0a10:;
    c->pc = c->r[2]; c->r[14] = 0x9b0a14u; rt_dispatch(c);
    goto L_9b11bc;
L_9b0a18:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b11cc; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0a40; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0a40:;
    c->pc = c->r[2]; c->r[14] = 0x9b0a44u; rt_dispatch(c);
    goto L_9b11e4;
L_9b0a48:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0dac; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0a70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0a70:;
    c->pc = c->r[2]; c->r[14] = 0x9b0a74u; rt_dispatch(c);
    goto L_9b0dc4;
L_9b0a78:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b1224; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0aa0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0aa0:;
    c->pc = c->r[2]; c->r[14] = 0x9b0aa4u; rt_dispatch(c);
    goto L_9b123c;
L_9b0aa8:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0df8; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0ad0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0ad0:;
    c->pc = c->r[2]; c->r[14] = 0x9b0ad4u; rt_dispatch(c);
    goto L_9b0e10;
L_9b0ad8:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b1284; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0b04; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0b04:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0b10u; rt_dispatch(c);
    goto L_9b12a4;
L_9b0b14:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b12e4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0b40; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0b40:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0b4cu; rt_dispatch(c);
    goto L_9b1304;
L_9b0b50:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1344; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_EQ) { goto L_9b0b78; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0b78:;
    c->r[0] = c->r[13] + 0x10u;
    c->pc = c->r[6]; c->r[14] = 0x9b0b80u; rt_dispatch(c);
    goto L_9b136c;
L_9b0b84:;
    c->r[6] = c->r[1] + 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b13f4; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0bac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0bac:;
    c->pc = c->r[2]; c->r[14] = 0x9b0bb0u; rt_dispatch(c);
    goto L_9b140c;
L_9b0bb4:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[3] & 0x1u;
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_NE) { goto L_9b1494; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0be0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0be0:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0becu; rt_dispatch(c);
    goto L_9b1244;
L_9b0bf0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0c00; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0c00:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0c08u; rt_dispatch(c);
L_9b0c08:;
    c->r[1] = c->r[0];
L_9b0c0c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0f14; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0c2c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0c3c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0c3c:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0c44u; rt_dispatch(c);
L_9b0c44:;
    c->r[2] = c->r[0];
L_9b0c48:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0c6c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 3); ST32(ea, c->r[2]); c->r[0] = ea; }
L_9b0c60:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0c6c:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[7] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0e60; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9b0c98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
L_9b0c98:;
    c->r[3] = c->r[1];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
L_9b0ca8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0cb8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0cb8:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0cc8u; rt_dispatch(c);
L_9b0cc8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[2]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0d2c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0d3c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0d3c:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0d44u; rt_dispatch(c);
L_9b0d44:;
    c->r[1] = c->r[0];
L_9b0d48:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0f14; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0d68:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b0d78; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b0d78:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b0d88u; rt_dispatch(c);
L_9b0d88:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0dac:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0dbc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0dbc:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0dc4u; rt_dispatch(c);
L_9b0dc4:;
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[1]);
L_9b0dcc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); ST32(ea, c->r[2]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0df8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0e08; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0e08:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0e10u; rt_dispatch(c);
L_9b0e10:;
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[1]);
    ST32(c->r[13] + 24u, c->v.s[2]);
    ST32(c->r[13] + 28u, c->v.s[3]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[3]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0e60:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9b0e70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
L_9b0e70:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[1];
    c->pc = c->r[12]; c->r[14] = 0x9b0e80u; rt_dispatch(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0e88:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0e98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0e98:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_9b0ea8:;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2];
    c->r[14] = 0x9b0eb4u; f_9bb9e4(c);
L_9b0eb4:;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    goto L_9b1190;
L_9b0ed4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0ee4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0ee4:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0eecu; rt_dispatch(c);
L_9b0eec:;
    c->r[1] = c->r[0];
L_9b0ef0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0f14; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 1);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0f14:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[7] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b0f44; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9b1038; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_9b1038;
L_9b0f44:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9b0f54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b0f54:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9b14f0;
L_9b0f5c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0f6c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0f6c:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0f74u; rt_dispatch(c);
L_9b0f74:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b0f94; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b0f94:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[2] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b14b8; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b0fc0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b0fc0:;
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    goto L_9b1034;
L_9b0fc8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b0fd8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b0fd8:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b0fe0u; rt_dispatch(c);
L_9b0fe0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1004; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1004:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[2] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b14d4; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b1030; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b1030:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
L_9b1034:;
    c->r[0] = c->r[7];
L_9b1038:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_9b1044:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b1054; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b1054:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b105cu; rt_dispatch(c);
L_9b105c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1080; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    ST64(c->r[0], c->v.d[0]);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1080:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[3] = c->r[7] & 0x1u;
    if (COND_NE) { goto L_9b14fc; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b10ac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b10ac:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_9b10b8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b10c8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b10c8:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b10d0u; rt_dispatch(c);
L_9b10d0:;
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_9b154c; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[13] + 0x10u;
    goto L_9b15b8;
L_9b10f0:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_EQ) { goto L_9b1108; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b1108:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b1118u; rt_dispatch(c);
L_9b1118:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b1124:;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b13a4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 4); ST32(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1170:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b1180; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b1180:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b1190u; rt_dispatch(c);
L_9b1190:;
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x9b119cu; f_9b41d8(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b11a4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b11b4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b11b4:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b11bcu; rt_dispatch(c);
L_9b11bc:;
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_9b1704; }
    goto L_9b1754;
L_9b11cc:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b11dc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b11dc:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b11e4u; rt_dispatch(c);
L_9b11e4:;
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->v.s[0]); ST32(ea + 4u, c->v.s[1]); ST32(ea + 8u, c->v.s[2]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1224:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b1234; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b1234:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b123cu; rt_dispatch(c);
L_9b123c:;
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->v.s[0]); ST32(ea + 4u, c->v.s[1]); ST32(ea + 8u, c->v.s[2]); ST32(ea + 12u, c->v.s[3]); }
L_9b1244:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1284:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b1294; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b1294:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b12a4u; rt_dispatch(c);
L_9b12a4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 6);
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b12e4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b12f4; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b12f4:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b1304u; rt_dispatch(c);
L_9b1304:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1344:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_EQ) { goto L_9b135c; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b135c:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b136cu; rt_dispatch(c);
L_9b136c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_9b1374:;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b13a4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b13a4:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = c->r[7] & 0x1u;
    if (COND_NE) { goto L_9b13d8; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b13d0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b13d0:;
    c->r[1] = c->r[13] + 0x110u;
    goto L_9b1464;
L_9b13d8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b13e8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b13e8:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x110u;
    goto L_9b1488;
L_9b13f4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b1404; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b1404:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b140cu; rt_dispatch(c);
L_9b140c:;
    ST32(c->r[13] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1434; }
L_9b141c:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    ST32(c->r[0], c->v.s[0]);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1434:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = c->r[7] & 0x1u;
    if (COND_NE) { goto L_9b1470; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b1460; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b1460:;
    c->r[1] = c->r[13] + 0x10u;
L_9b1464:;
    c->pc = c->r[3]; c->r[14] = 0x9b1468u; rt_dispatch(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1470:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b1480; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b1480:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x10u;
L_9b1488:;
    c->pc = c->r[3]; c->r[14] = 0x9b148cu; rt_dispatch(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b1494:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9b14a4; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_9b14a4:;
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[3];
    c->pc = c->r[6]; c->r[14] = 0x9b14b4u; rt_dispatch(c);
    goto L_9b1244;
L_9b14b8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b14c8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b14c8:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    goto L_9b14ec;
L_9b14d4:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b14e4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b14e4:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
L_9b14ec:;
    c->r[0] = c->r[7];
L_9b14f0:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_9b14fc:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_9b150c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_9b150c:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_9b151c:;
    c->r[0] = 0xd9f84eu;
    c->r[5] = 0x9b1528u + c->r[0];
    goto L_9b1544;
L_9b1528:;
    c->r[0] = 0xd9f842u;
    c->r[6] = 0x9b1534u + c->r[0];
    goto L_9b1704;
L_9b1534:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0xd9f82eu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[5] = 0x9b1548u + c->r[0]; }
L_9b1544:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_9b154c:;
    c->r[0] = c->r[5];
    c->r[7] = c->r[13] + 0x10u;
    c->r[14] = 0x9b1558u; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_9b15b0; }
    c->r[0] = 0x1087614u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9b1574u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x9b1584u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x9b15a4u; f_15efd94(c);
    goto L_9b15b8;
L_9b15b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_9b15b8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b164c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_9b16a4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_9b1628; }
L_9b15e4:;
    c->r[0] = ldrex32(c, c->r[1]);
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = strex32(c, c->r[1], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9b15e4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9b161c; }
    c->r[0] = 0x1087578u;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x9b1610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b161cu; rt_dispatch(c);
L_9b161c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9b1628:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_9b16a0; }
L_9b1634:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9b1634; }
    goto L_9b16a0;
L_9b164c:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[2] = c->r[6] & 0x1u;
    if (COND_NE) { goto L_9b1684; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b1678; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b1678:;
    c->r[1] = c->r[13] + 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x9b1680u; rt_dispatch(c);
    goto L_9b16a0;
L_9b1684:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b1694; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b1694:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x9b16a0u; rt_dispatch(c);
L_9b16a0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
L_9b16a4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9afb44; }
L_9b16ac:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_9b16ac; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9b16e4; }
    c->r[0] = 0x10874b4u;
    { uint32_t ea = 0x9b16d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x9b16e4u; rt_dispatch(c);
L_9b16e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_9b16f4:;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0xd9f66eu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = 0x9b1708u + c->r[0]; }
L_9b1704:;
    c->r[0] = c->r[6];
    c->r[14] = 0x9b170cu; f_15efd88(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_9b1754; }
    c->r[0] = 0x1087460u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x9b1728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x9b1738u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x1u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[5] + 0x8u;
    c->r[14] = 0x9b1750u; f_15efd94(c);
    goto L_9b1758;
L_9b1754:;
    c->r[5] = 0x0u;
L_9b1758:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_9b1790; }
    c->r[0] = 0xd9f5fau;
    c->r[1] = c->r[5] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = 0x9b177cu + c->r[0]; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    c->r[14] = 0x9b1784u; f_15efd94(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9b180c; }
    goto L_9afb44;
L_9b1790:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = c->r[7] & 0x1u;
    if (COND_NE) { goto L_9b17dc; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b17bc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b17bc:;
    c->r[2] = 0xd9f5a6u;
    c->r[1] = c->r[5] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[1] = 0x9b17d0u + c->r[2]; }
    c->pc = c->r[3]; c->r[14] = 0x9b17d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9b180c; }
    goto L_9afb44;
L_9b17dc:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9b17ec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_9b17ec:;
    c->r[2] = 0xd9f576u;
    c->r[1] = c->r[5] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[1] = 0x9b1800u + c->r[2]; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[3]; c->r[14] = 0x9b1804u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9afb44; }
L_9b180c:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_9b180c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9afb44; }
    c->r[0] = 0x1087354u;
    { uint32_t ea = 0x9b1834u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
