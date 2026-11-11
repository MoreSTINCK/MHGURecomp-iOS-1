#include "cpu.h"
#include "neon_rt.h"
void f_3e1c04(Cpu *c);
void f_3e2838(Cpu *c);
void f_3e2f64(Cpu *c);
void f_3e4904(Cpu *c);
void f_41fa6c(Cpu *c);
void f_427b3c(Cpu *c);
void f_9c9198(Cpu *c);
void f_a385e8(Cpu *c);
void f_a38634(Cpu *c);
void f_a38750(Cpu *c);
void f_a389e0(Cpu *c);
void f_d21388(Cpu *c);
void f_d213cc(Cpu *c);
void f_d21530(Cpu *c);
void f_d215b4(Cpu *c);
void f_d21638(Cpu *c);
void f_d219cc(Cpu *c);
void f_d21a04(Cpu *c);
void f_d21a1c(Cpu *c);
void f_d21a64(Cpu *c);
void f_d21aac(Cpu *c);
void f_d252ac(Cpu *c);
void f_d2bf40(Cpu *c);
void f_da84f0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15eff38(Cpu *c);
void f_15effa4(Cpu *c);
void f_3db20c(Cpu *restrict c) {
    FN_ENTER(0x3db20cu);
L_3db20c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x15cu;
    c->r[13] = c->r[13] - 0x2800u;
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[11] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = c->r[11] + 0x3cu;
    c->r[0] = c->r[9];
    c->r[14] = 0x3db22cu; f_a38750(c);
    c->r[5] = c->r[13] + 0x2800u;
    c->r[2] = c->r[0];
    c->r[1] = c->r[4];
    c->r[3] = 0x1u;
    c->r[7] = 0x1u;
    c->r[6] = c->r[5] + 0x138u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3db24cu; f_a385e8(c);
    c->r[5] = c->r[13] + 0x2000u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[5] + 0x910u;
    c->r[14] = 0x3db25cu; f_d219cc(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x3db264u; f_a38750(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x3db270u; f_a38750(c);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1b68; }
    c->r[0] = 0xa2e8u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[11] + c->r[0];
    c->r[5] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2e4u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2ecu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2d8u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa168u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa164u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa160u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xa158u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa170u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2f4u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2f0u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2c4u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2acu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xa294u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa27cu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa264u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa24cu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xa234u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa21cu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa204u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa1ecu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xa1d4u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa1bcu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa1a4u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa18cu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa174u;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa15cu;
    c->r[0] = c->r[11] + c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1eu;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x18u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0xbu;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0xd6u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x20u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    goto L_3dbbd4;
L_3db408:;
    c->r[7] = sh_lsl(c->r[7], c->r[2]);
    c->r[3] = c->r[3] | c->r[7];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[1] + 0xc3u; ST8(ea, c->r[10]); }
    c->r[14] = 0x3db420u; f_3e1c04(c);
    c->r[0] = 0x165df98u;
    { uint32_t ea = 0x3db42cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db430u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3db4a0; }
    c->r[0] = 0x165df80u;
    { uint32_t ea = 0x3db444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db448u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3db4a0; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3db48c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3db48c:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x10u;
    c->r[3] = 0x4u;
    c->r[2] = c->r[4] + 0x10cu;
    c->pc = c->r[7]; c->r[14] = 0x3db4a0u; rt_dispatch(c);
L_3db4a0:;
    c->r[0] = 0xbu;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3db4f4; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db4c8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db4dcu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3db4f4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3db50c;
L_3db4f4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3db50cu; rt_dispatch(c);
L_3db50c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[14] = 0x3db51cu; f_d215b4(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3db56c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db540u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db554u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3db56c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3db584;
L_3db56c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3db584u; rt_dispatch(c);
L_3db584:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[0];
    c->r[0] = 0x165de24u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x3db5a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3db5acu; f_a38750(c);
    c->r[7] = c->r[13] + 0x2800u;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[5] = c->r[7] + 0x10cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3db5d8u; f_d2bf40(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3db5e8u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xa8u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3db5f4u; f_d21388(c);
    c->r[0] = 0xdu;
    { uint32_t ea = c->r[5] + 0x4bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3db644; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db618u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db62cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3db644; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3db660;
L_3db644:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x2900u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0x57u;
    c->pc = c->r[3]; c->r[14] = 0x3db660u; rt_dispatch(c);
L_3db660:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xa8u;
    c->r[8] = 0x0u;
    c->r[14] = 0x3db670u; f_d215b4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3db6cc; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db694u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db6a8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3db6cc; }
    c->r[0] = 0x1u;
    c->r[9] = c->r[11];
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4bu; ST8(ea, c->r[0]); }
    goto L_3db73c;
L_3db6cc:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x2900u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0x57u;
    c->pc = c->r[3]; c->r[14] = 0x3db6e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[11];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0x4bu; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3db73c; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db710u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3db724u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3db73c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3db758;
L_3db73c:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x2900u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0x57u;
    c->pc = c->r[3]; c->r[14] = 0x3db758u; rt_dispatch(c);
L_3db758:;
    c->r[0] = 0x165dc58u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = 0x3db76cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db770u; f_da84f0(c);
    c->r[1] = 0x0u;
    c->r[14] = 0x3db778u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3db7ec; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3db7ec; }
    c->r[0] = 0x165dc2cu;
    { uint32_t ea = 0x3db798u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db79cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3db7ec; }
    c->r[0] = 0x165dc08u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3db7bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db7c8u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3db7ecu; f_d2bf40(c);
L_3db7ec:;
    c->r[0] = 0x165dbccu;
    { uint32_t ea = 0x3db7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db7fcu; f_da84f0(c);
    c->r[1] = 0x1u;
    c->r[14] = 0x3db804u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_3db878; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3db878; }
    c->r[0] = 0x165dba0u;
    { uint32_t ea = 0x3db824u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db828u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_3db878; }
    c->r[0] = 0x165db7cu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3db848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db854u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3db878u; f_d2bf40(c);
L_3db878:;
    c->r[0] = 0x165db40u;
    { uint32_t ea = 0x3db884u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db888u; f_da84f0(c);
    c->r[1] = 0x2u;
    c->r[14] = 0x3db890u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_3db904; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3db904; }
    c->r[0] = 0x165db14u;
    { uint32_t ea = 0x3db8b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db8b4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3db904; }
    c->r[0] = 0x165daf0u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3db8d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db8e0u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3db904u; f_d2bf40(c);
L_3db904:;
    c->r[0] = 0x165dab4u;
    { uint32_t ea = 0x3db910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db914u; f_da84f0(c);
    c->r[1] = 0x3u;
    c->r[14] = 0x3db91cu; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3dec30; }
    c->r[0] = 0x165da88u;
    { uint32_t ea = 0x3db93cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db940u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    c->r[0] = 0x165da64u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3db960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3debfc;
L_3db960:;
    c->r[0] = 0x165da58u;
    { uint32_t ea = 0x3db96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db970u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbb24; }
    c->r[0] = 0x165da40u;
    { uint32_t ea = 0x3db984u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db988u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dbb24; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3db9c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3db9c4:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x5u;
    goto L_3dbb1c;
L_3db9d0:;
    c->r[0] = 0x165d9e8u;
    { uint32_t ea = 0x3db9dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db9e0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbb24; }
    c->r[0] = 0x165d9d0u;
    { uint32_t ea = 0x3db9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db9f8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dbb24; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dba34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dba34:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x7u;
    goto L_3dbb1c;
L_3dba40:;
    c->r[0] = 0x165d978u;
    { uint32_t ea = 0x3dba4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dba50u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbb24; }
    c->r[0] = 0x165d960u;
    { uint32_t ea = 0x3dba64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dba68u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dbb24; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dbaa4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dbaa4:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x9u;
    goto L_3dbb1c;
L_3dbab0:;
    c->r[0] = 0x165d908u;
    { uint32_t ea = 0x3dbabcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbac0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbb24; }
    c->r[0] = 0x165d8f0u;
    { uint32_t ea = 0x3dbad4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbad8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dbb24; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dbb14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dbb14:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0xdu;
L_3dbb1c:;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3dbb24u; rt_dispatch(c);
L_3dbb24:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_3dfaf8;
L_3dbb40:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x168u;
    c->r[1] = c->r[7];
    c->r[14] = 0x3dbb54u; f_15eff38(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    goto L_3de368;
L_3dbb88:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x168u;
    c->r[1] = c->r[5];
    c->r[14] = 0x3dbb9cu; f_15eff38(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_3dd248;
L_3dbbd4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[8]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x3dbbf0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[8]); }
    c->r[2] = 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[7]); } }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x3dbc1cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[7]); } }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1cu);
    if (COND_HI) { goto L_3e1b48; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x3dbc40u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x3dbcb8u: goto L_3dbcb8; case 0x3dbd4cu: goto L_3dbd4c; case 0x3dbe70u: goto L_3dbe70; case 0x3dc03cu: goto L_3dc03c; case 0x3dc06cu: goto L_3dc06c; case 0x3dc180u: goto L_3dc180; case 0x3dc224u: goto L_3dc224; case 0x3dc3ecu: goto L_3dc3ec; case 0x3dc4f0u: goto L_3dc4f0; case 0x3dc598u: goto L_3dc598; case 0x3dc714u: goto L_3dc714; case 0x3dc894u: goto L_3dc894; case 0x3dc97cu: goto L_3dc97c; case 0x3dca30u: goto L_3dca30; case 0x3dcbc8u: goto L_3dcbc8; case 0x3dcde8u: goto L_3dcde8; case 0x3dd07cu: goto L_3dd07c; case 0x3dd3a4u: goto L_3dd3a4; case 0x3dd5dcu: goto L_3dd5dc; case 0x3dd700u: goto L_3dd700; case 0x3dd7c8u: goto L_3dd7c8; case 0x3dd884u: goto L_3dd884; case 0x3dd958u: goto L_3dd958; case 0x3dda18u: goto L_3dda18; case 0x3ddb8cu: goto L_3ddb8c; case 0x3ddc44u: goto L_3ddc44; case 0x3ddd0cu: goto L_3ddd0c; case 0x3ddde8u: goto L_3ddde8; case 0x3ddefcu: goto L_3ddefc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_3dbcb8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[11] + 0x58u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    c->r[1] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 3); ST32(ea, c->r[2]); c->r[3] = ea; }
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[0] = r; }
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0xc8u;
    c->r[14] = 0x3dbd08u; f_15efdc4(c);
    c->r[0] = 0x165d6b0u;
    { uint32_t ea = 0x3dbd14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbd18u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e1b48; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    goto L_3e1b48;
L_3dbd4c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_3e1b48; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x165d64cu;
    { uint32_t ea = 0x3dbd78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbd7cu; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_HI) { goto L_3dbdec; }
    c->r[0] = 0x165d018u;
    c->r[1] = 0x1f3au;
    { uint32_t ea = 0x3dbd9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 1);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dbdec; }
    c->r[0] = 0x165cfc0u;
    c->r[1] = 0x6du;
    { uint32_t ea = 0x3dbdbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbdc0u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbdec; }
    c->r[1] = 0x165cfdcu;
    c->r[2] = (c->r[6] << 3) - c->r[6];
    { uint32_t ea = 0x3dbdd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 10);
    c->r[2] = 0x1f44u;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x3dbdecu; f_41fa6c(c);
L_3dbdec:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3dbe00u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3dbe0cu; f_d21388(c);
    c->r[0] = 0x165d5acu;
    { uint32_t ea = 0x3dbe18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbe1cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3def78; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dbe44u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dbe58u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3def78; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3def90;
L_3dbe70:;
    c->r[0] = 0x165d548u;
    { uint32_t ea = 0x3dbe7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbe80u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_HI) { goto L_3dbef0; }
    c->r[0] = 0x165cf14u;
    c->r[1] = 0x1f3au;
    { uint32_t ea = 0x3dbea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dbef0; }
    c->r[0] = 0x165cebcu;
    c->r[1] = 0x6du;
    { uint32_t ea = 0x3dbec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dbec4u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbef0; }
    c->r[1] = 0x165ced8u;
    c->r[2] = (c->r[4] << 3) - c->r[4];
    { uint32_t ea = 0x3dbedcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 10);
    c->r[2] = 0x1f44u;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x3dbef0u; f_41fa6c(c);
L_3dbef0:;
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = 0x2828u;
    c->r[14] = 0x3dbefcu; f_15efdc4(c);
    c->r[7] = c->r[13] + 0x2000u;
    c->r[4] = c->r[7] + 0x910u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3dbf0cu; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x3dbf18u; f_d21a64(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dbf40u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_3de188; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3de208; }
    c->r[10] = c->r[13] + 0x2000u;
    c->r[0] = c->r[10] + 0x910u;
    c->r[14] = 0x3dbf6cu; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x1u;
    c->r[7] = c->r[5];
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dbf98u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[4]); }
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x29u; ST8(ea, c->r[5]); } }
    { uint32_t ea = c->r[13] + 0xe8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dbfc8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[7];
    c->r[2] = 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dc000u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[10] = c->r[13] + 0xe0u;
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xeau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3dc02cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    goto L_3de1ac;
L_3dc03c:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[4] = c->r[6] + 0x910u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3dc04cu; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x3dc058u; f_d21a64(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[11];
    c->r[1] = c->r[6];
    c->r[14] = 0x3dc068u; f_3e4904(c);
    goto L_3e1b48;
L_3dc06c:;
    c->r[7] = c->r[13] + 0x2000u;
    c->r[0] = c->r[7] + 0x910u;
    c->r[14] = 0x3dc078u; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc0a4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[2] = 0x8u;
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x29u; ST8(ea, c->r[5]); } }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3dc0c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x8u);
    c->r[5] = c->r[6];
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    c->r[0] = 0x165d2e0u;
    { uint32_t ea = 0x3dc0e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc0e8u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x41ccu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3dc104u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3dc110u; f_d21388(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3de48c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3de4ec; }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df0c0; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dc150u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dc164u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df0c0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6u;
    goto L_3de4dc;
L_3dc180:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc1a4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165d204u;
    { uint32_t ea = 0x3dc1c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc1c4u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dddbc; }
    c->r[0] = 0x165d1ecu;
    { uint32_t ea = 0x3dc1d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc1dcu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dddbc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dc218; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dc218:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x3u;
    goto L_3dddac;
L_3dc224:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dc230u; f_d21a64(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x1u;
    c->r[6] = c->r[5];
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc258u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[4]); }
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x29u; ST8(ea, c->r[5]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dc288u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x29u; ST8(ea, c->r[4]); } }
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[11] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LT) { goto L_3e0d50; }
    c->r[2] = 0x2828u;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | sh_lsl(c->r[7], c->r[3]);
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + 0xc1u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[1]); }
    c->r[0] = 0x165d0e0u;
    { uint32_t ea = 0x3dc2e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc2e8u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d50; }
    c->r[0] = 0x165d0c8u;
    { uint32_t ea = 0x3dc2fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc300u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d50; }
    c->r[0] = 0x165d090u;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[1] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dc334u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc338u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dc348u; f_3e2f64(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc354u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3dc35cu; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e0d50; }
    c->r[0] = c->r[11];
    c->r[14] = 0x3dc36cu; f_3e1c04(c);
    c->r[0] = 0x165d04cu;
    { uint32_t ea = 0x3dc378u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc37cu; f_da84f0(c);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_3e0bb8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d50; }
    c->r[0] = 0x165d02cu;
    { uint32_t ea = 0x3dc398u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc39cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d50; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dc3d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dc3d8:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x10u;
    goto L_3e0db8;
L_3dc3ec:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dc3f8u; f_d21a64(c);
    c->r[0] = 0x165cfbcu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dc408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc40cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dc470; }
    c->r[0] = 0x165cfa4u;
    { uint32_t ea = 0x3dc420u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc424u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dc470; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dc460; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dc460:;
    c->r[1] = 0x4u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[7]; c->r[14] = 0x3dc470u; rt_dispatch(c);
L_3dc470:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[11]; c->r[4] = r; }
    c->r[0] = 0x165cf40u;
    { uint32_t ea = 0x3dc484u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc488u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[4] + 0xc1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] & ~sh_lsl(c->r[7], c->r[0]);
    { uint32_t ea = c->r[4] + 0xc1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc4a8u; f_da84f0(c);
    { uint32_t ea = c->r[4] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] & ~sh_lsl(c->r[7], c->r[0]);
    c->r[7] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[4] + 0xc2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[7] + 0x10cu;
    c->r[14] = 0x3dc4c8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[1]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_3e0058;
L_3dc4f0:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc514u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165ce94u;
    { uint32_t ea = 0x3dc530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc534u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dddbc; }
    c->r[0] = 0x165ce7cu;
    { uint32_t ea = 0x3dc548u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc54cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dddbc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dc588; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dc588:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x5u;
    goto L_3dddac;
L_3dc598:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dc5a4u; f_d21a64(c);
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc5c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3e1b48; }
    c->r[0] = 0x165cdc8u;
    { uint32_t ea = 0x3dc5fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc600u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0c84; }
    c->r[0] = 0x165cdb0u;
    { uint32_t ea = 0x3dc614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc618u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0c84; }
    c->r[0] = 0x165cd78u;
    c->r[10] = c->r[13] + 0x2800u;
    c->r[1] = c->r[10] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dc64cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc650u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dc660u; f_3e2f64(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
    c->r[14] = 0x3dc674u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3dc67cu; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e0c84; }
    c->r[0] = 0x165cd34u;
    { uint32_t ea = 0x3dc690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc694u; f_da84f0(c);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_3e0c18; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0c84; }
    c->r[0] = 0x165cd14u;
    { uint32_t ea = 0x3dc6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc6b4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0c84; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dc6f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dc6f0:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x11u;
    goto L_3e0c74;
L_3dc714:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dc720u; f_d21a64(c);
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc744u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3e1b48; }
    c->r[0] = 0x165cc4cu;
    { uint32_t ea = 0x3dc778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc77cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d34; }
    c->r[0] = 0x165cc34u;
    { uint32_t ea = 0x3dc790u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc794u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d34; }
    c->r[0] = 0x165cbfcu;
    c->r[10] = c->r[13] + 0x2800u;
    c->r[1] = c->r[10] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dc7c8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc7ccu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dc7dcu; f_3e2f64(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
    c->r[14] = 0x3dc7f0u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3dc7f8u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e0d34; }
    c->r[0] = 0x165cbb8u;
    { uint32_t ea = 0x3dc80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc810u; f_da84f0(c);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_3e0cc8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d34; }
    c->r[0] = 0x165cb98u;
    { uint32_t ea = 0x3dc82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc830u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d34; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dc86c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dc86c:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x13u;
    goto L_3e0d24;
L_3dc894:;
    c->r[7] = c->r[13] + 0x2000u;
    c->r[6] = c->r[7] + 0x910u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3dc8a4u; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x3dc8b0u; f_d21a64(c);
    c->r[10] = c->r[0];
    c->r[0] = 0x165cb04u;
    { uint32_t ea = 0x3dc8c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc8c4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3dc8e8u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3dc8f4u; f_d21388(c);
    c->r[0] = 0x2828u;
    c->r[7] = c->r[7] - c->r[10];
    { uint32_t r = c->r[5] * c->r[0] + c->r[11]; c->r[0] = r; }
    (void)f_subs(c, c->r[7], 0x800u);
    if (COND_GE) { c->r[7] = 0x800u; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3de5bc; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3de628; }
    c->r[0] = 0x1cu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df0e8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dc940u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dc954u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df0e8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6u;
    goto L_3de60c;
L_3dc97c:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dc9a0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165ca08u;
    { uint32_t ea = 0x3dc9bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc9c0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dddbc; }
    c->r[0] = 0x165c9f0u;
    { uint32_t ea = 0x3dc9d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dc9d8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dddbc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dca14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dca14:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0xdu;
    goto L_3dddac;
L_3dca30:;
    c->r[0] = 0x165c988u;
    { uint32_t ea = 0x3dca3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dca40u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dfd64; }
    c->r[0] = 0x165c970u;
    { uint32_t ea = 0x3dca54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dca58u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dfd64; }
    c->r[0] = 0x165c940u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dca84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dca88u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3df3e4; }
    c->r[0] = 0x165c928u;
    { uint32_t ea = 0x3dca9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcaa0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3df3e4; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3df3e8; }
    c->r[0] = 0x165c8e4u;
    { uint32_t ea = 0x3dcae0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcae4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dcaf8u; f_3e2f64(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_3de004; }
    c->r[2] = 0x0u;
L_3dcb0c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_3dcb9c; }
    c->r[0] = c->r[11];
    c->r[14] = 0x3dcb20u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3dcb9c; }
    c->r[0] = 0x165c890u;
    { uint32_t ea = 0x3dcb34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcb38u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dcb9c; }
    c->r[0] = 0x165c878u;
    { uint32_t ea = 0x3dcb4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcb50u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dcb9c; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dcb8c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dcb8c:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0xfu;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3dcb9cu; rt_dispatch(c);
L_3dcb9c:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], 0x4u);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_3dcb0c; }
    goto L_3de0a8;
L_3dcbc8:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dcbd4u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x1u;
    c->r[6] = c->r[5];
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dcc00u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[4]); }
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x29u; ST8(ea, c->r[5]); } }
    { uint32_t ea = c->r[13] + 0xe8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dcc30u; rt_dispatch(c);
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = 0x4u;
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3dcc58u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x4u);
    c->r[4] = c->r[13] + 0x2000u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[4] + 0x910u;
    c->r[14] = 0x3dcc70u; f_d21a1c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST16(ea, c->r[4]); }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3dcc90u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[11] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LT) { goto L_3e1b48; }
    c->r[1] = 0x2828u;
    c->r[2] = 0x1u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0xb8u; ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[2] = sh_lsl(c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xbu; ST8(ea, c->r[6]); }
    c->r[0] = 0x0u;
    c->r[6] = c->r[1] + 0x1eu;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); c->r[0] = c->r[0] + 0x2u; }
    c->r[3] = (c->r[2] >> 24);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    c->r[0] = (c->r[2] >> 8);
    c->r[2] = 0x2807u;
    { uint32_t ea = c->r[1] + 0x19u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST16(ea, c->r[4]); }
    c->r[1] = 0x2808u;
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[0] = c->r[6] + c->r[4];
    c->r[1] = c->r[1] - c->r[4];
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3dcd40u; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x3dcd50u; f_15efe30(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x3dcd58u; f_3e1c04(c);
    c->r[0] = 0x165c660u;
    { uint32_t ea = 0x3dcd64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcd68u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e1b48; }
    c->r[0] = 0x165c648u;
    { uint32_t ea = 0x3dcd7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcd80u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e1b48; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dcdbc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dcdbc:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0xeu;
    c->r[3] = 0x4u;
    c->r[2] = c->r[4] + 0x10cu;
    c->pc = c->r[7]; c->r[14] = 0x3dcdd0u; rt_dispatch(c);
    goto L_3e0058;
L_3dcde8:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[4] = c->r[6] + 0x910u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3dcdf8u; f_d21a64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x3dce00u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dce0cu; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dce18u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dce24u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3e1b48; }
    c->r[0] = 0x165c578u;
    { uint32_t ea = 0x3dce4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dce50u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e04fc; }
    c->r[0] = 0x165c560u;
    { uint32_t ea = 0x3dce64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dce68u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e04fc; }
    c->r[0] = 0x165c528u;
    c->r[6] = c->r[13] + 0x2800u;
    c->r[1] = c->r[6] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dce9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcea0u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dceb0u; f_3e2f64(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_3dcf90; }
L_3dcec0:;
    c->r[0] = 0x165c4f8u;
    { uint32_t ea = 0x3dceccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dced0u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3dced8u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3dcf78; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_3dcf78; }
    c->r[0] = 0x165c4bcu;
    { uint32_t ea = 0x3dcf08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcf0cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dcf78; }
    c->r[0] = 0x165c4a4u;
    { uint32_t ea = 0x3dcf20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcf24u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dcf78; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dcf60; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dcf60:;
    c->r[2] = c->r[13] + 0xa8u;
    c->r[1] = 0xfu;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3dcf70u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3dcf78:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_3dcec0; }
    goto L_3e04fc;
L_3dcf90:;
    c->r[0] = 0x165c428u;
    { uint32_t ea = 0x3dcf9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcfa0u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3dcfa8u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3dd048; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_3dd048; }
    c->r[0] = 0x165c3ecu;
    { uint32_t ea = 0x3dcfd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcfdcu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dd048; }
    c->r[0] = 0x165c3d4u;
    { uint32_t ea = 0x3dcff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dcff4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dd048; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dd030; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dd030:;
    c->r[2] = c->r[13] + 0xa8u;
    c->r[1] = 0x16u;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3dd040u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3dd048:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_3dcf90; }
    goto L_3e04fc;
L_3dd07c:;
    c->r[7] = c->r[13] + 0x2000u;
    c->r[4] = c->r[7] + 0x910u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3dd08cu; f_d21a64(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x3dd098u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dd0a4u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dd0b0u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dd0bcu; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dd0c8u; f_d21a64(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LT) { goto L_3e197c; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x8u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xau;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbu;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xcu;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xdu;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xeu;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_3dd228; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfu;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_3dbb88; }
L_3dd228:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = 0xa158u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xa160u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[8]); }
L_3dd248:;
    c->r[0] = 0x2828u;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[6];
    { uint32_t r = c->r[6] * c->r[0] + c->r[7]; c->r[8] = r; }
    c->r[0] = 0x165c158u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[8] + 0xbcu;
    { uint32_t ea = 0x3dd26cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd270u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd280u; f_da84f0(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = 0x0u;
    if (COND_EQ) { goto L_3e1588; }
    c->r[0] = 0x165c128u;
    { uint32_t ea = 0x3dd29cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd2a0u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[7] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e1588; }
    c->r[0] = 0x165c0e0u;
    c->r[10] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[10] + 0x10cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dd2e4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd2e8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dd2fcu; f_3e2f64(c);
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[9] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd314u; f_da84f0(c);
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_NE) { goto L_3e00d0; }
    c->r[14] = c->r[13] + 0x2800u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = c->r[14] + 0x10cu;
    if (COND_EQ) { goto L_3e0148; }
    c->r[0] = 0x165c08cu;
    { uint32_t ea = 0x3dd338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd33cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0148; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dd380; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dd380:;
    c->r[5] = c->r[13] + 0x2800u;
    c->r[1] = 0x14u;
    goto L_3e013c;
L_3dd3a4:;
    c->r[4] = c->r[13] + 0x2000u;
    c->r[0] = c->r[4] + 0x910u;
    c->r[14] = 0x3dd3b0u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3dd3ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x4u);
    c->r[6] = c->r[13] + 0x2000u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dd3e4u; f_d21a1c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST16(ea, c->r[4]); }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3dd404u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3e0058; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[7] = r; }
    { uint32_t ea = c->r[7] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e0058; }
    c->r[0] = 0x165bf7cu;
    { uint32_t ea = 0x3dd448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd44cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dd52c; }
    c->r[0] = 0x165bf64u;
    { uint32_t ea = 0x3dd460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd464u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dd52c; }
    c->r[0] = 0x165bf2cu;
    c->r[10] = c->r[13] + 0x2800u;
    c->r[1] = c->r[10] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dd498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd49cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dd4acu; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dd52c; }
    c->r[0] = 0x165bf04u;
    { uint32_t ea = 0x3dd4c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd4c4u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dd52c; }
    c->r[0] = 0x165beecu;
    { uint32_t ea = 0x3dd4d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd4dcu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dd52c; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dd518; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3dd518:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x1bu;
    c->r[3] = 0x4u;
    c->r[2] = c->r[4] + 0x10cu;
    c->pc = c->r[5]; c->r[14] = 0x3dd52cu; rt_dispatch(c);
L_3dd52c:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[5] = r; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0xc6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa8u;
    c->r[14] = 0x3dd55cu; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5] + 0xd6u;
    { uint32_t ea = c->r[5] + 0xc8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[5] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); c->r[0] = c->r[0] + 0x2u; }
    c->r[2] = (c->r[1] >> 24);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 16);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 8);
    c->r[1] = 0x2808u;
    c->r[2] = 0x2807u;
    { uint32_t ea = c->r[5] + 0xd1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[1] = c->r[1] - c->r[4];
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[0] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[5] + 0xd4u; ST16(ea, c->r[4]); }
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3dd5b4u; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x3dd5c4u; f_15efe30(c);
    goto L_3dd6e8;
L_3dd5dc:;
    c->r[4] = c->r[13] + 0x2000u;
    c->r[0] = c->r[4] + 0x910u;
    c->r[14] = 0x3dd5e8u; f_d21a64(c);
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dd60cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2828u;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD8(ea); c->r[6] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[8]); } }
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[7] = r; }
    c->r[0] = 0x165bd94u;
    { uint32_t ea = 0x3dd630u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd634u; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[7] + 0xc1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] | sh_lsl(c->r[8], c->r[0]);
    { uint32_t ea = c->r[7] + 0xc1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd650u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[6]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x3dd664u; f_3e1c04(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd66cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = 0x0u;
    if (COND_EQ) { goto L_3dd6d0; }
    c->r[0] = 0x165bd40u;
    { uint32_t ea = 0x3dd684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd688u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dd6d0; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dd6c0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dd6c0:;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[7]; c->r[14] = 0x3dd6d0u; rt_dispatch(c);
L_3dd6d0:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_3dd6e8:;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[5] = c->r[14] + 0x10cu;
    goto L_3e0058;
L_3dd700:;
    c->r[8] = c->r[13] + 0x2000u;
    c->r[0] = c->r[8] + 0x910u;
    c->r[14] = 0x3dd70cu; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x165bca8u;
    { uint32_t ea = 0x3dd71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd720u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x41ccu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x3dd73cu; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[8];
    c->r[14] = 0x3dd748u; f_d21388(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3de760; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3de6c8; }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df110; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dd788u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dd79cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df110; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6u;
L_3dd7b4:;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    goto L_3df17c;
L_3dd7c8:;
    c->r[7] = c->r[13] + 0x2000u;
    c->r[0] = c->r[7] + 0x910u;
    c->r[14] = 0x3dd7d4u; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x165bbe0u;
    { uint32_t ea = 0x3dd7e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd7e8u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x41ccu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x3dd804u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[7];
    c->r[14] = 0x3dd810u; f_d21388(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dec44; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3deca4; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df1a4; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dd850u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dd864u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df1a4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6u;
    goto L_3dec94;
L_3dd884:;
    c->r[4] = c->r[13] + 0x2000u;
    c->r[0] = c->r[4] + 0x910u;
    c->r[14] = 0x3dd890u; f_d21a64(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[5] = r; }
    c->r[0] = 0x165bb1cu;
    { uint32_t ea = 0x3dd8a8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd8acu; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[5] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] | sh_lsl(c->r[2], c->r[0]);
    { uint32_t ea = c->r[5] + 0xc2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd8ccu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dd934; }
    c->r[0] = 0x165bae4u;
    { uint32_t ea = 0x3dd8e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd8e4u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dd934; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dd91c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dd91c:;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[7]; c->r[14] = 0x3dd92cu; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3dd934:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_3e0d50;
L_3dd958:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dd97cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165ba2cu;
    { uint32_t ea = 0x3dd998u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd99cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dddbc; }
    c->r[0] = 0x165ba14u;
    { uint32_t ea = 0x3dd9b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dd9b4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dddbc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dd9f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3dd9f0:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x7u;
    goto L_3dddac;
L_3dda18:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3dda24u; f_d21a64(c);
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dda48u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    c->r[2] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[11] + (c->r[2] << 3);
    { uint32_t ea = c->r[2] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LT) { goto L_3e0d50; }
    c->r[2] = 0x2828u;
    c->r[3] = 0x1u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[11]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0xc2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1] + 0xc2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x165b930u;
    { uint32_t ea = 0x3dda94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dda98u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d50; }
    c->r[0] = 0x165b918u;
    { uint32_t ea = 0x3ddaacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddab0u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d50; }
    c->r[0] = 0x165b8e0u;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[1] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3ddae4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddae8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3ddaf8u; f_3e2f64(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddb04u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3ddb0cu; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e0d50; }
    c->r[0] = 0x165b8a4u;
    { uint32_t ea = 0x3ddb20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddb24u; f_da84f0(c);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_3e0d5c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d50; }
    c->r[0] = 0x165b884u;
    { uint32_t ea = 0x3ddb40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddb44u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d50; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3ddb80; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3ddb80:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x12u;
    goto L_3e0db8;
L_3ddb8c:;
    c->r[7] = c->r[13] + 0x2000u;
    c->r[0] = c->r[7] + 0x910u;
    c->r[14] = 0x3ddb98u; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x165b81cu;
    { uint32_t ea = 0x3ddba8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddbacu; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x41ccu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[7];
    c->r[14] = 0x3ddbc8u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[7];
    c->r[14] = 0x3ddbd4u; f_d21388(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3ded44; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3deda8; }
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df1c8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3ddc14u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3ddc28u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df1c8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6u;
    goto L_3ded94;
L_3ddc44:;
    c->r[6] = c->r[13] + 0x2000u;
    c->r[0] = c->r[6] + 0x910u;
    c->r[14] = 0x3ddc50u; f_d21a64(c);
    c->r[0] = 0x165b764u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3ddc60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddc64u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3ddcd0; }
    c->r[0] = 0x165b74cu;
    { uint32_t ea = 0x3ddc78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddc7cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3ddcd0; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3ddcb8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3ddcb8:;
    c->r[1] = 0x8u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[7]; c->r[14] = 0x3ddcc8u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3ddcd0:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[11]; c->r[4] = r; }
    c->r[0] = 0x165b6e0u;
    { uint32_t ea = 0x3ddce4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddce8u; f_da84f0(c);
    c->r[2] = 0x41ccu;
    { uint32_t ea = c->r[4] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[1] & ~sh_lsl(c->r[2], c->r[0]);
    { uint32_t ea = c->r[4] + 0xc2u; ST8(ea, c->r[0]); }
    goto L_3dddbc;
L_3ddd0c:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3ddd30u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[4]); } }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165b678u;
    { uint32_t ea = 0x3ddd4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddd50u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dddbc; }
    c->r[0] = 0x165b660u;
    { uint32_t ea = 0x3ddd64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddd68u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dddbc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3ddda4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3ddda4:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x9u;
L_3dddac:;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3dddb4u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3dddbc:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
L_3dddc4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_3e1b48;
L_3ddde8:;
    c->r[10] = c->r[13] + 0x2000u;
    c->r[7] = 0x0u;
    c->r[4] = c->r[10] + 0x910u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dde00u; f_d21a64(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x3dde08u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3dde14u; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x3dde20u; f_d21a64(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_3df674; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { c->r[7] = c->r[4] + c->r[6]; }
    if (COND_GE) { (void)f_subs(c, c->r[1], c->r[7]); }
    if (COND_GE) { goto L_3df648; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x3dde60u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    c->r[0] = 0x22u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165b544u;
    { uint32_t ea = 0x3dde80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dde84u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    if (COND_EQ) { goto L_3df78c; }
    c->r[0] = 0x165b528u;
    { uint32_t ea = 0x3dde9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddea0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3df78c; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3ddedc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3ddedc:;
    c->r[2] = c->r[13] + 0xa8u;
    c->r[1] = 0xdu;
    goto L_3df780;
L_3ddefc:;
    c->r[4] = c->r[13] + 0x2000u;
    c->r[0] = c->r[4] + 0x910u;
    c->r[14] = 0x3ddf08u; f_d21a64(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3e1b48; }
    c->r[0] = 0x165b498u;
    { uint32_t ea = 0x3ddf2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddf30u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e04fc; }
    c->r[0] = 0x165b480u;
    { uint32_t ea = 0x3ddf44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddf48u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e04fc; }
    c->r[0] = 0x165b448u;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[1] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3ddf7cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddf80u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3ddf90u; f_3e2f64(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddf9cu; f_da84f0(c);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_3e048c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e04fc; }
    c->r[0] = 0x165b40cu;
    { uint32_t ea = 0x3ddfb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3ddfbcu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e04fc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3ddff8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3ddff8:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x15u;
    goto L_3e04e8;
L_3de004:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_3de094; }
    c->r[0] = c->r[11];
    c->r[14] = 0x3de018u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3de094; }
    c->r[0] = 0x165b398u;
    { uint32_t ea = 0x3de02cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de030u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3de094; }
    c->r[0] = 0x165b380u;
    { uint32_t ea = 0x3de044u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de048u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3de094; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3de084; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3de084:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x16u;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3de094u; rt_dispatch(c);
L_3de094:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], 0x4u);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_3de004; }
L_3de0a8:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_3dfaf8; }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0xau;
    c->r[0] = ROR32(c->r[0], 2);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_3dbb24; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x3de0e8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x3db960u: goto L_3db960; case 0x3db9d0u: goto L_3db9d0; case 0x3dba40u: goto L_3dba40; case 0x3dbab0u: goto L_3dbab0; case 0x3de100u: goto L_3de100; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_3de100:;
    c->r[0] = 0x165b2b8u;
    { uint32_t ea = 0x3de10cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de110u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dbb24; }
    c->r[0] = 0x165b2a0u;
    { uint32_t ea = 0x3de124u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de128u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dbb24; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3de164; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3de164:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x3u;
    goto L_3dbb1c;
L_3de188:;
    c->r[7] = c->r[13] + 0x2000u;
    c->r[4] = c->r[7] + 0x910u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3de198u; f_d21a64(c);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3de1a4u; f_d21aac(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_3de1ac:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3de1c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x4u);
    c->r[7] = c->r[13] + 0x2000u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[7] + 0x910u;
    c->r[14] = 0x3de1dcu; f_d21a1c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST16(ea, c->r[4]); }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3de1fcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
L_3de208:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x8u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xau;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xcu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xdu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xeu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3de34c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_3dbb40; }
L_3de34c:;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = 0xa158u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0xa160u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
L_3de368:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[11] + (c->r[1] << 3);
    c->r[11] = 0x3u;
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST32(ea, c->r[11]); }
    c->r[1] = 0x2828u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[6] + 0xb8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_3deed4; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[7] = 0x1u;
    if (COND_NE) { goto L_3e1b48; }
    c->r[1] = 0x2828u;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xc3u;
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xeau; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc2u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xe0u;
    c->r[1] = c->r[1] + 0xbu;
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x2u; c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc4u; ST8(ea, c->r[7]); }
    c->r[2] = c->r[2] | (c->r[7] << 8);
    c->r[7] = c->r[3] | (c->r[1] << 8);
    c->r[2] = c->r[2] | (c->r[7] << 16);
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); c->r[6] = c->r[6] + 0x2u; }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[3]); }
    c->r[6] = c->r[0] + 0xd6u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x2u; }
    c->r[3] = (c->r[2] >> 24);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = (c->r[2] >> 8);
    c->r[2] = 0x2807u;
    { uint32_t ea = c->r[0] + 0xd1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x2808u;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[1] = c->r[1] - c->r[4];
    (void)f_subs(c, c->r[4], c->r[2]);
    { uint32_t ea = c->r[0] + 0xd4u; ST16(ea, c->r[4]); }
    c->r[0] = c->r[6] + c->r[4];
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3de46cu; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x3de47cu; f_15efe30(c);
    goto L_3e1b48;
L_3de48c:;
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df1ec; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de4b0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de4c4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df1ec; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
L_3de4dc:;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_3df24c;
L_3de4ec:;
    c->r[1] = c->r[11];
    c->r[0] = 0x2828u;
    c->r[11] = c->r[9];
    { uint32_t r = c->r[7] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[9] + 0xbcu; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_3df4e4; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[8] = v; }
    c->r[0] = 0x165aea8u;
    { uint32_t ea = 0x3de51cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de520u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de530u; f_da84f0(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3df968; }
    c->r[0] = 0x165ae7cu;
    { uint32_t ea = 0x3de548u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de54cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3df968; }
    c->r[0] = c->r[4] + (c->r[4] << 1);
    c->r[14] = c->r[13] + 0x2800u;
    c->r[5] = c->r[14] + 0x10cu;
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3df970; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1u;
    c->r[2] = (c->r[0] >> 1) & 0x1u;
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = (c->r[0] >> 2) & 0x1u;
    c->r[0] = (c->r[0] >> 3) & 0x1u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_GT) { goto L_3df978; }
    goto L_3e0064;
L_3de5bc:;
    c->r[0] = 0x1cu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df268; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de5e0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de5f4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df268; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
L_3de60c:;
    c->r[14] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    c->r[5] = c->r[14] + 0x10cu;
L_3de618:;
    c->r[10] = c->r[13] + 0xe0u;
    goto L_3e1a38;
L_3de628:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[8] + 0xbcu; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_3df53c; }
    c->r[14] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[5] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0570; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_3e0dcc; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LE) { goto L_3e199c; }
    c->r[0] = 0x1bu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0f48; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de698u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de6acu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0f48; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e0f60;
L_3de6c8:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_3de760; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e05c4; }
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[1] + c->r[11]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3de760; }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e06c8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de72cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de740u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e06c8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x15u;
    goto L_3dd7b4;
L_3de760:;
    c->r[0] = 0x165ac58u;
    { uint32_t ea = 0x3de76cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de770u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3de7d8; }
    c->r[0] = 0x165ac40u;
    { uint32_t ea = 0x3de784u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3de788u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3de7d8; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3de7c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3de7c4:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x11u;
    c->r[3] = 0x4u;
    c->r[2] = c->r[4] + 0x10cu;
    c->pc = c->r[7]; c->r[14] = 0x3de7d8u; rt_dispatch(c);
L_3de7d8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xffu;
    c->r[1] = c->r[2] ^ sh_lsl(c->r[1], c->r[0]);
    c->r[2] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[2] + c->r[11]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xc1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[3] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] + 0xc1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xc2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] + 0xc2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[1]); }
    c->r[0] = 0xfu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3de86c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de838u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de84cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3de86c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3de884;
L_3de86c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3de884u; rt_dispatch(c);
L_3de884:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[8] = r; }
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[8] + 0xbcu; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[14] = 0x3de898u; f_d215b4(c);
    c->r[0] = 0x165ab18u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3de8acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x3de8b8u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3de8dcu; f_d2bf40(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3de8ecu; f_a389e0(c);
    c->r[0] = c->r[13] + 0xa8u;
    c->r[1] = c->r[7];
    c->r[14] = 0x3de8f8u; f_d21388(c);
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3de950; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de91cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de930u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3de950; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3de968;
L_3de950:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3de968u; rt_dispatch(c);
L_3de968:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xa8u;
    c->r[14] = 0x3de974u; f_d215b4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3de9dc; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de998u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3de9acu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3de9dc; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3de9f4;
L_3de9dc:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3de9f4u; rt_dispatch(c);
L_3de9f4:;
    c->r[0] = 0x165a9bcu;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x3dea08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dea0cu; f_da84f0(c);
    c->r[1] = 0x0u;
    c->r[14] = 0x3dea14u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3dea8c; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3dea8c; }
    c->r[0] = 0x165a98cu;
    { uint32_t ea = 0x3dea38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dea3cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dea8c; }
    c->r[0] = 0x165a968u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dea5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dea68u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3dea8cu; f_d2bf40(c);
L_3dea8c:;
    c->r[0] = 0x165a92cu;
    { uint32_t ea = 0x3dea98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dea9cu; f_da84f0(c);
    c->r[1] = 0x1u;
    c->r[14] = 0x3deaa4u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_3deb18; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3deb18; }
    c->r[0] = 0x165a900u;
    { uint32_t ea = 0x3deac4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3deac8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_3deb18; }
    c->r[0] = 0x165a8dcu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3deae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3deaf4u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3deb18u; f_d2bf40(c);
L_3deb18:;
    c->r[0] = 0x165a8a0u;
    { uint32_t ea = 0x3deb24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3deb28u; f_da84f0(c);
    c->r[1] = 0x2u;
    c->r[14] = 0x3deb30u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_3deba4; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3deba4; }
    c->r[0] = 0x165a874u;
    { uint32_t ea = 0x3deb50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3deb54u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3deba4; }
    c->r[0] = 0x165a850u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3deb74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3deb80u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3deba4u; f_d2bf40(c);
L_3deba4:;
    c->r[0] = 0x165a814u;
    { uint32_t ea = 0x3debb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3debb4u; f_da84f0(c);
    c->r[1] = 0x3u;
    c->r[14] = 0x3debbcu; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3dec30; }
    c->r[0] = 0x165a7e8u;
    { uint32_t ea = 0x3debdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3debe0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    c->r[0] = 0x165a7c4u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dec00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_3debfc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dec0cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3dec30u; f_d2bf40(c);
L_3dec30:;
    c->r[0] = c->r[13] + 0xa8u;
    c->r[14] = 0x3dec38u; f_d213cc(c);
    goto L_3e1b40;
L_3dec44:;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df2dc; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dec68u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dec7cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df2dc; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
L_3dec94:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    goto L_3df344;
L_3deca4:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_3df5a0; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0618; }
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[1] + c->r[11]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0e1c; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e06ec; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3ded0cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3ded20u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e06ec; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x19u;
    goto L_3e0668;
L_3ded44:;
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df360; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3ded68u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3ded7cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df360; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
L_3ded94:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    goto L_3df3c8;
L_3deda8:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_3df5f4; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0674; }
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[1] + c->r[11]; c->r[4] = r; }
    { uint32_t ea = c->r[4] + 0xc2u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0eec; }
    c->r[0] = 0x165a5ccu;
    { uint32_t ea = 0x3dedf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dedfcu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dee64; }
    c->r[0] = 0x165a5b4u;
    { uint32_t ea = 0x3dee10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dee14u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3dee64; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3dee50; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_3dee50:;
    c->r[8] = c->r[13] + 0x2800u;
    c->r[1] = 0x13u;
    c->r[3] = 0x4u;
    c->r[2] = c->r[8] + 0x10cu;
    c->pc = c->r[6]; c->r[14] = 0x3dee64u; rt_dispatch(c);
L_3dee64:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[0] & ~sh_lsl(c->r[2], c->r[1]);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x17u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e071c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dee9cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3deeb0u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e071c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e0734;
L_3deed4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xc6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xc4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa8u;
    c->r[14] = 0x3deef4u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[0] = f_subs(c, c->r[2], c->r[0]);
    c->r[1] = c->r[3] - c->r[1] - 1u + c->cf;
    { uint32_t ea = c->r[6] + 0xc8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[6] + 0xd0u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); c->r[0] = c->r[0] + 0x2u; }
    c->r[2] = (c->r[1] >> 24);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 16);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 8);
    c->r[1] = 0x2808u;
    c->r[2] = 0x2807u;
    { uint32_t ea = c->r[6] + 0xd1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0xd4u; ST16(ea, c->r[4]); }
    c->r[6] = c->r[6] + 0xd6u;
    c->r[1] = c->r[1] - c->r[4];
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[0] = c->r[6] + c->r[4];
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3def5cu; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x3def6cu; f_15efe30(c);
    goto L_3e005c;
L_3def78:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3def90u; rt_dispatch(c);
L_3def90:;
    c->r[0] = 0x165a428u;
    { uint32_t ea = 0x3def9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3defa0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[4] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3defc0u; f_d215b4(c);
    c->r[0] = 0x165c22cu;
    { uint32_t ea = 0x3defccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3defd4u; f_d215b4(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[6] = r; }
    { uint32_t ea = c->r[6] + 0xb8u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df030; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df000u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df014u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df030; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3df048;
L_3df030:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df048u; rt_dispatch(c);
L_3df048:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3df8dc; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e0010; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[4] = r; }
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3df070u; f_d215b4(c);
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dfdb0; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df094u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df0a8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3dfdb0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3dfdcc;
L_3df0c0:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df0d8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    goto L_3df20c;
L_3df0e8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df100u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    goto L_3df288;
L_3df110:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df128u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
L_3df130:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3df17c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df150u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df164u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df17c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3df194;
L_3df17c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df194u; rt_dispatch(c);
L_3df194:;
    c->r[0] = 0x165a220u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3df1a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3e1b0c;
L_3df1a4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df1bcu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    goto L_3df2fc;
L_3df1c8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df1e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    goto L_3df380;
L_3df1ec:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df204u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
L_3df20c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3df24c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df22cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df240u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_3e1ad0; }
L_3df24c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df264u; rt_dispatch(c);
    goto L_3e1afc;
L_3df268:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df280u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
L_3df288:;
    c->r[14] = c->r[13] + 0x2800u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    c->r[5] = c->r[14] + 0x10cu;
    c->r[10] = c->r[13] + 0xe0u;
    if (COND_NE) { goto L_3e1a38; }
L_3df2a0:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df2b0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df2c4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1a38; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e1a50;
L_3df2dc:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df2f4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
L_3df2fc:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3df344; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df31cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df330u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df344; }
    c->r[0] = 0x1u;
    goto L_3e0b3c;
L_3df344:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df35cu; rt_dispatch(c);
    goto L_3e0b60;
L_3df360:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df378u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
L_3df380:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3df3c8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df3a0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df3b4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df3c8; }
    c->r[0] = 0x1u;
    goto L_3e11b0;
L_3df3c8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df3e0u; rt_dispatch(c);
    goto L_3e11d8;
L_3df3e4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
L_3df3e8:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x3df3f4u; f_3e2838(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x1659fc0u;
    { uint32_t ea = 0x3df404u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3df408u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_3dfaf8; }
    c->r[0] = 0x1659fa0u;
    { uint32_t ea = 0x3df424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3df428u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[13] + 0x2800u;
    c->r[0] = 0x2828u;
    c->r[2] = 0x1u;
    c->r[3] = 0xffu;
    c->r[1] = c->r[7] + 0x10cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[2] = c->r[3] ^ sh_lsl(c->r[2], c->r[1]);
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & c->r[2];
    { uint32_t ea = c->r[0] + 0xc1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xc2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[3] & c->r[2];
    { uint32_t ea = c->r[0] + 0xc2u; ST8(ea, c->r[2]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3df484u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x3df490u; f_d21388(c);
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df9f0; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df4b4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df4c8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df9f0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3dfa08;
L_3df4e4:;
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df838; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df508u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df51cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df838; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    goto L_3e00b8;
L_3df53c:;
    c->r[0] = 0x1cu;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[14] + 0x10cu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df85c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df56cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df580u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df85c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    goto L_3de618;
L_3df5a0:;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df894; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df5c4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df5d8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df894; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    goto L_3e0668;
L_3df5f4:;
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df8b8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df618u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df62cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df8b8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    goto L_3e0f3c;
L_3df648:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x3df668u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[0]); } }
L_3df674:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GE) { goto L_3df710; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2828u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[0] = r; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[0] + 0xbcu;
    c->r[0] = c->r[4];
    c->r[14] = 0x3df6acu; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x3df6b8u; f_d21388(c);
    c->r[0] = 0x1au;
    { uint32_t ea = c->r[5] + 0x4bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df79c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df6dcu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df6f0u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3df79c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3df7b8;
L_3df710:;
    c->r[0] = 0x1659ca8u;
    { uint32_t ea = 0x3df71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3df720u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    if (COND_EQ) { goto L_3df78c; }
    c->r[0] = 0x1659c8cu;
    { uint32_t ea = 0x3df738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3df73cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3df78c; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3df778; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3df778:;
    c->r[2] = c->r[13] + 0xd8u;
    c->r[1] = 0xcu;
L_3df780:;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3df788u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
L_3df78c:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
    c->r[7] = 0x1u;
    goto L_3dddc4;
L_3df79c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x2900u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0x57u;
    c->pc = c->r[3]; c->r[14] = 0x3df7b8u; rt_dispatch(c);
L_3df7b8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0xe0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3df7c8u; f_d215b4(c);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3df7d8u; f_d215b4(c);
    c->r[0] = 0x1659bdcu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x3df7e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3df7f4u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3df818u; f_d2bf40(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1au;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    goto L_3e0054;
L_3df838:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df850u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    goto L_3e1a88;
L_3df85c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df874u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    if (COND_NE) { goto L_3e1a38; }
    goto L_3df2a0;
L_3df894:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df8acu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    goto L_3e0af4;
L_3df8b8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3df8d0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    goto L_3e1168;
L_3df8dc:;
    c->r[0] = 0x2828u;
    c->r[4] = c->r[13] + 0xe0u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[6] = r; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x3df8f4u; f_d215b4(c);
    c->r[0] = c->r[13] + 0xa8u;
    c->r[14] = 0x3df8fcu; f_9c9198(c);
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], c->r[0]);
    c->r[0] = c->r[4];
    c->r[3] = c->r[3] - c->r[1] - 1u + c->cf;
    c->r[14] = 0x3df918u; f_d21638(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3df954; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df934u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df948u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_3dff6c; }
L_3df954:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0xd0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_3dff90;
L_3df968:;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[5] = c->r[14] + 0x10cu;
L_3df970:;
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_LE) { goto L_3e0064; }
L_3df978:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->r[14] = 0x3df984u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = 0x0u;
    if (COND_EQ) { goto L_3e14a4; }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0b94; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df9b4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3df9c8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0b94; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x5u;
    goto L_3e00b8;
L_3df9f0:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dfa08u; rt_dispatch(c);
L_3dfa08:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3dfa1cu; f_d215b4(c);
    c->r[14] = c->r[13] + 0x2800u;
    c->r[0] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dfa98; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfa48u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfa5cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3dfa98; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3dfab0;
L_3dfa98:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dfab0u; rt_dispatch(c);
L_3dfab0:;
    c->r[0] = 0x1659904u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dfac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dfaccu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3dfaf0u; f_d2bf40(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3dfaf8u; f_d213cc(c);
L_3dfaf8:;
    c->r[14] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[14] + 0x10cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x7u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x9u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xau;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xbu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xcu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xdu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_3dfc54; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_3dfc64; }
L_3dfc54:;
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[1] = 0xa160u;
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
L_3dfc64:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3dfc78u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3dfc84u; f_d21388(c);
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dfcd4; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfca8u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfcbcu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3dfcd4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3dfcec;
L_3dfcd4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dfcecu; rt_dispatch(c);
L_3dfcec:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0xe0u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3dfd08u; f_d215b4(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x3dfd14u; f_d215b4(c);
    c->r[0] = 0x16596a0u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3dfd24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dfd30u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3dfd54u; f_d2bf40(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x3dfd5cu; f_d213cc(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3dfd64:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] + (c->r[0] << 1);
    c->r[1] = c->r[11] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x60u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[2]); }
    goto L_3e0528;
L_3dfdb0:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dfdc8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
L_3dfdcc:;
    c->r[1] = 0x2828u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t r = c->r[7] * c->r[1] + c->r[11]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0xc1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3dfe20; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfdf4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfe08u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3dfe20; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3dfe3c;
L_3dfe20:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dfe38u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
L_3dfe3c:;
    c->r[1] = 0x2828u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t r = c->r[7] * c->r[1] + c->r[11]; c->r[6] = r; }
    { uint32_t ea = c->r[6] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3dfe9c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfe64u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfe78u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3dfe9c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[4] = c->r[0] + 0xc3u;
    goto L_3dff0c;
L_3dfe9c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3dfeb4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[6] + 0xc3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dff0c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfed4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dfee8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3dff0c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[4] = c->r[0] + 0xd0u;
    goto L_3dff80;
L_3dff0c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x3dff24u; rt_dispatch(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[0] = r; }
    c->r[4] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dff80; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dff4cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dff60u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3dff80; }
L_3dff6c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3dff98;
L_3dff80:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
L_3dff90:;
    c->r[2] = 0x4u;
    c->pc = c->r[3]; c->r[14] = 0x3dff98u; rt_dispatch(c);
L_3dff98:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[11]; c->r[7] = r; }
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[7] + 0xd4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x3dffacu; f_d21530(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xd4u; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dfff8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dffccu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dffe0u; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3dfff8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e0010;
L_3dfff8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + 0xd6u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x3e0010u; rt_dispatch(c);
L_3e0010:;
    c->r[0] = 0x16593a4u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e0020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e002cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e0050u; f_d2bf40(c);
    c->r[0] = c->r[13] + 0xe0u;
L_3e0054:;
    c->r[14] = 0x3e0058u; f_d213cc(c);
L_3e0058:;
    c->r[10] = c->r[13] + 0xe0u;
L_3e005c:;
    c->r[7] = 0x1u;
    goto L_3e1b48;
L_3e0064:;
    c->r[0] = 0xcu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e054c; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e008cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e00a0u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e054c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
L_3e00b8:;
    c->r[9] = c->r[11];
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_3e1ae0;
L_3e00d0:;
    c->r[14] = c->r[13] + 0x2800u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = c->r[14] + 0x10cu;
    if (COND_EQ) { goto L_3e0148; }
    c->r[0] = 0x16592d8u;
    { uint32_t ea = 0x3e00ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e00f0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0148; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0134; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e0134:;
    c->r[5] = c->r[13] + 0x2800u;
    c->r[1] = 0x1bu;
L_3e013c:;
    c->r[2] = c->r[5] + 0x10cu;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3e0148u; rt_dispatch(c);
L_3e0148:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2828u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[10] = c->r[1] + 0xc2u;
L_3e0164:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_3e037c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0224; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[0] + (c->r[0] << 1);
    c->r[2] = c->r[13] + 0xa8u;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 3);
    { uint32_t ea = c->r[3] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { c->r[0] = sh_lsl(c->r[1], c->r[0]); }
    if (COND_EQ) { c->r[1] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { c->r[9] = c->r[1] | c->r[0]; }
    c->r[0] = 0x1659210u;
    { uint32_t ea = 0x3e01b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e01b8u; f_da84f0(c);
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_NE) { goto L_3e02a0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e037c; }
    c->r[0] = 0x16591f0u;
    { uint32_t ea = 0x3e01d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e01d8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e037c; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0218; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3e0218:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x14u;
    goto L_3e036c;
L_3e0224:;
    c->r[0] = 0x1659194u;
    { uint32_t ea = 0x3e0230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0234u; f_da84f0(c);
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_NE) { goto L_3e030c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e037c; }
    c->r[0] = 0x1659174u;
    { uint32_t ea = 0x3e0250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0254u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e037c; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0294; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3e0294:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x11u;
    goto L_3e036c;
L_3e02a0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e037c; }
    c->r[0] = 0x1659110u;
    { uint32_t ea = 0x3e02b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e02b8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e037c; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e02f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3e02f8:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x1bu;
    goto L_3e036c;
L_3e030c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e037c; }
    c->r[0] = 0x16590a4u;
    { uint32_t ea = 0x3e0320u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0324u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e037c; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0364; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3e0364:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x18u;
L_3e036c:;
    c->r[3] = 0x4u;
    c->pc = c->r[5]; c->r[14] = 0x3e0374u; rt_dispatch(c);
    c->r[14] = c->r[13] + 0x2800u;
    c->r[4] = c->r[14] + 0x10cu;
L_3e037c:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_3e0164; }
    c->r[0] = 0x1659028u;
    { uint32_t ea = 0x3e039cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e03a0u; f_da84f0(c);
    c->r[4] = 0x41ccu;
    c->r[1] = c->r[13] + 0xa8u;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e03b8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[7] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_3e0538; }
    c->r[0] = 0x1658fe0u;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = 0x3e03e4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e03e8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e03f4u; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[1], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = 0x41ccu;
    if (COND_EQ) { goto L_3e151c; }
    c->r[4] = 0x41ccu;
    c->r[2] = (uint32_t)(uint8_t)(c->r[9]);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[2] | sh_lsl(c->r[1], c->r[0]);
    c->r[0] = 0x1658f9cu;
    { uint32_t ea = 0x3e0428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e042cu; f_da84f0(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e1584; }
    c->r[0] = 0x1658f80u;
    { uint32_t ea = 0x3e0444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0448u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[7] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e1588; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0484; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
L_3e0484:;
    c->r[1] = 0xau;
    goto L_3e1578;
L_3e048c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e04fc; }
    c->r[0] = 0x1658f24u;
    { uint32_t ea = 0x3e04a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e04a4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e04fc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e04e0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e04e0:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x1cu;
L_3e04e8:;
    c->r[2] = c->r[4] + 0x10cu;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3e04f4u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3e04fc:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x2828u;
    c->r[5] = c->r[4] + 0x10cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[11]; c->r[0] = r; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xc6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[1]); }
L_3e0528:;
    c->r[0] = c->r[0] + 0xc8u;
    c->r[1] = 0x2816u;
    c->r[14] = 0x3e0534u; f_15efdc4(c);
    goto L_3e1b48;
L_3e0538:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x41ccu;
    goto L_3e1584;
L_3e054c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0564u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    goto L_3e1a88;
L_3e0570:;
    c->r[0] = 0x1cu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0a88; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0594u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e05a8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0a88; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3u;
    goto L_3e19ec;
L_3e05c4:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0ab0; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e05e8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e05fcu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0ab0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13u;
    goto L_3dd7b4;
L_3e0618:;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0ad4; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e063cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0650u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0ad4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x17u;
L_3e0668:;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    goto L_3e0b44;
L_3e0674:;
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0b70; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0698u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e06acu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0b70; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1bu;
    goto L_3e0f3c;
L_3e06c8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e06e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x15u;
    goto L_3df130;
L_3e06ec:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0704u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x19u;
    goto L_3e0af4;
L_3e071c:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0734u; rt_dispatch(c);
L_3e0734:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e0740u; f_d215b4(c);
    c->r[0] = 0x1658c70u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x3e0754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e0760u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e0784u; f_d2bf40(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3e0794u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xa8u;
    c->r[1] = c->r[4];
    c->r[14] = 0x3e07a0u; f_d21388(c);
    c->r[0] = 0x19u;
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e07f0; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e07c4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e07d8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e07f0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3e0808;
L_3e07f0:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0808u; rt_dispatch(c);
L_3e0808:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xa8u;
    c->r[8] = 0x0u;
    c->r[14] = 0x3e0818u; f_d215b4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0868; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e083cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0850u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0868; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3e0880;
L_3e0868:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0880u; rt_dispatch(c);
L_3e0880:;
    c->r[0] = 0x1658b34u;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = 0x3e0890u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0894u; f_da84f0(c);
    c->r[1] = 0x0u;
    c->r[14] = 0x3e089cu; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e0914; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e0914; }
    c->r[0] = 0x1658b04u;
    { uint32_t ea = 0x3e08c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e08c4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0914; }
    c->r[0] = 0x1658ae0u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e08e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e08f0u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e0914u; f_d2bf40(c);
L_3e0914:;
    c->r[0] = 0x1658aa4u;
    { uint32_t ea = 0x3e0920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0924u; f_da84f0(c);
    c->r[1] = 0x1u;
    c->r[14] = 0x3e092cu; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_3e09a0; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e09a0; }
    c->r[0] = 0x1658a78u;
    { uint32_t ea = 0x3e094cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0950u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_3e09a0; }
    c->r[0] = 0x1658a54u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e0970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e097cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e09a0u; f_d2bf40(c);
L_3e09a0:;
    c->r[0] = 0x1658a18u;
    { uint32_t ea = 0x3e09acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e09b0u; f_da84f0(c);
    c->r[1] = 0x2u;
    c->r[14] = 0x3e09b8u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_3e0a2c; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e0a2c; }
    c->r[0] = 0x16589ecu;
    { uint32_t ea = 0x3e09d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e09dcu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e0a2c; }
    c->r[0] = 0x16589c8u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e09fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0a08u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e0a2cu; f_d2bf40(c);
L_3e0a2c:;
    c->r[0] = 0x165898cu;
    { uint32_t ea = 0x3e0a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0a3cu; f_da84f0(c);
    c->r[1] = 0x3u;
    c->r[14] = 0x3e0a44u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3dec30; }
    c->r[0] = 0x1658960u;
    { uint32_t ea = 0x3e0a64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0a68u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    c->r[0] = 0x165893cu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e0a88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3debfc;
L_3e0a88:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0aa0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    goto L_3e1a24;
L_3e0ab0:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0ac8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    goto L_3df130;
L_3e0ad4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0aecu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x17u;
L_3e0af4:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3e0b44; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0b14u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0b28u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0b44; }
    c->r[0] = 0x1u;
    c->r[7] = 0x1u;
L_3e0b3c:;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e0b60;
L_3e0b44:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0b5cu; rt_dispatch(c);
    c->r[7] = 0x1u;
L_3e0b60:;
    c->r[0] = 0x1658854u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e0b70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3e1b0c;
L_3e0b70:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0b88u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1bu;
    goto L_3e1168;
L_3e0b94:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0bacu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    goto L_3e1a88;
L_3e0bb8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d50; }
    c->r[0] = 0x16587f8u;
    { uint32_t ea = 0x3e0bccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0bd0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d50; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0c0c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e0c0c:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x17u;
    goto L_3e0db8;
L_3e0c18:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0c84; }
    c->r[0] = 0x1658798u;
    { uint32_t ea = 0x3e0c2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0c30u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0c84; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0c6c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e0c6c:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x18u;
L_3e0c74:;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3e0c7cu; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3e0c84:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xffu;
    c->r[1] = c->r[2] ^ sh_lsl(c->r[1], c->r[0]);
    c->r[2] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[2] + c->r[11]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0xc1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[3] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] + 0xc1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xc2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] + 0xc2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[1]); }
    goto L_3e0d50;
L_3e0cc8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d34; }
    c->r[0] = 0x16586e8u;
    { uint32_t ea = 0x3e0cdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0ce0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d34; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0d1c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e0d1c:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x1au;
L_3e0d24:;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3e0d2cu; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
L_3e0d34:;
    c->r[0] = 0x2828u;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x1u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & ~sh_lsl(c->r[3], c->r[2]);
    { uint32_t ea = c->r[0] + 0xc2u; ST8(ea, c->r[1]); }
L_3e0d50:;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[5] = c->r[14] + 0x10cu;
    goto L_3e1b48;
L_3e0d5c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0d50; }
    c->r[0] = 0x1658654u;
    { uint32_t ea = 0x3e0d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0d74u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0d50; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0db0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e0db0:;
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x19u;
L_3e0db8:;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3e0dc0u; rt_dispatch(c);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[7] = 0x1u;
    goto L_3e0d50;
L_3e0dcc:;
    c->r[0] = 0x1bu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1014; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0df0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0e04u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1014; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e102c;
L_3e0e1c:;
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1658594u;
    { uint32_t ea = 0x3e0e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0e34u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e0e9c; }
    c->r[0] = 0x165857cu;
    { uint32_t ea = 0x3e0e48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e0e4cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e0e9c; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e0e88; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
L_3e0e88:;
    c->r[4] = c->r[13] + 0x2800u;
    c->r[1] = 0x12u;
    c->r[3] = 0x4u;
    c->r[2] = c->r[4] + 0x10cu;
    c->pc = c->r[6]; c->r[14] = 0x3e0e9cu; rt_dispatch(c);
L_3e0e9c:;
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1070; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0ec0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0ed4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1070; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e1088;
L_3e0eec:;
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1148; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0f10u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0f24u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1148; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1du;
L_3e0f3c:;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    goto L_3e11bc;
L_3e0f48:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e0f60u; rt_dispatch(c);
L_3e0f60:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0xe0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e0f70u; f_d215b4(c);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e0f80u; f_d215b4(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[14] = 0x3e0f8cu; f_d215b4(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e0f98u; f_d215b4(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e0fe8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0fbcu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e0fd0u; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e0fe8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e1000;
L_3e0fe8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x3e1000u; rt_dispatch(c);
L_3e1000:;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[5] = c->r[14] + 0x10cu;
    goto L_3e1064;
L_3e1014:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e102cu; rt_dispatch(c);
L_3e102c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0xe0u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e1040u; f_d215b4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x3e104cu; f_d215b4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x3e1058u; f_d215b4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x3e1064u; f_d215b4(c);
L_3e1064:;
    c->r[8] = 0x0u;
    goto L_3e1a50;
L_3e1070:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1088u; rt_dispatch(c);
L_3e1088:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e1094u; f_d215b4(c);
    c->r[0] = 0x165831cu;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x3e10a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e10b4u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e10d8u; f_d2bf40(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3e10e8u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xa8u;
    c->r[1] = c->r[4];
    c->r[14] = 0x3e10f4u; f_d21388(c);
    c->r[0] = 0x15u;
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e11f0; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1118u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e112cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e11f0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3e1208;
L_3e1148:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1160u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1du;
L_3e1168:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3e11bc; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1188u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e119cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e11bc; }
    c->r[0] = 0x1u;
    c->r[7] = 0x1u;
L_3e11b0:;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e11d8;
L_3e11bc:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e11d4u; rt_dispatch(c);
    c->r[7] = 0x1u;
L_3e11d8:;
    c->r[0] = 0x16581dcu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e11e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3e1b0c;
L_3e11f0:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1208u; rt_dispatch(c);
L_3e1208:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xa8u;
    c->r[8] = 0x0u;
    c->r[14] = 0x3e1218u; f_d215b4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1284; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e123cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1250u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1284; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd1u; ST8(ea, c->r[0]); }
    goto L_3e129c;
L_3e1284:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3e129cu; rt_dispatch(c);
L_3e129c:;
    c->r[0] = 0x1658118u;
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = 0x3e12acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e12b0u; f_da84f0(c);
    c->r[1] = 0x0u;
    c->r[14] = 0x3e12b8u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e1330; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e1330; }
    c->r[0] = 0x16580e8u;
    { uint32_t ea = 0x3e12dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e12e0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e1330; }
    c->r[0] = 0x16580c4u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e1300u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e130cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e1330u; f_d2bf40(c);
L_3e1330:;
    c->r[0] = 0x1658088u;
    { uint32_t ea = 0x3e133cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1340u; f_da84f0(c);
    c->r[1] = 0x1u;
    c->r[14] = 0x3e1348u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_3e13bc; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e13bc; }
    c->r[0] = 0x165805cu;
    { uint32_t ea = 0x3e1368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e136cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_3e13bc; }
    c->r[0] = 0x1658038u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e138cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1398u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e13bcu; f_d2bf40(c);
L_3e13bc:;
    c->r[0] = 0x1657ffcu;
    { uint32_t ea = 0x3e13c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e13ccu; f_da84f0(c);
    c->r[1] = 0x2u;
    c->r[14] = 0x3e13d4u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_3e1448; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e1448; }
    c->r[0] = 0x1657fd0u;
    { uint32_t ea = 0x3e13f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e13f8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e1448; }
    c->r[0] = 0x1657facu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e1418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1424u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e1448u; f_d2bf40(c);
L_3e1448:;
    c->r[0] = 0x1657f70u;
    { uint32_t ea = 0x3e1454u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1458u; f_da84f0(c);
    c->r[1] = 0x3u;
    c->r[14] = 0x3e1460u; f_d252ac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3dec30; }
    c->r[0] = 0x1657f44u;
    { uint32_t ea = 0x3e1480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1484u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_3dec30; }
    c->r[0] = 0x1657f20u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e14a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3debfc;
L_3e14a4:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2828u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[7] * c->r[1] + c->r[0]; c->r[6] = r; }
    c->r[7] = 0x1u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + 0xc1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[7], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3db408; }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1a68; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e14ecu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1500u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1a68; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0xdu;
    goto L_3e00b8;
L_3e151c:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e1584; }
    c->r[0] = 0x1657e90u;
    { uint32_t ea = 0x3e1534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1538u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[7] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e1584; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e1574; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
L_3e1574:;
    c->r[1] = 0xbu;
L_3e1578:;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[4]; c->r[14] = 0x3e1584u; rt_dispatch(c);
L_3e1584:;
    c->r[1] = 0x0u;
L_3e1588:;
    c->r[4] = 0x2u;
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[8] + 0xb8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] + 0xc6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0xc4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[14] = 0x3e15a8u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xc8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x1657e04u;
    { uint32_t ea = 0x3e15c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e15c4u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = (uint32_t)(uint8_t)(c->r[9]);
    c->r[1] = 0x1u;
    { uint32_t r = c->r[8] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e1868; }
    c->r[5] = 0x2828u;
    c->r[6] = c->r[7] + 0xb8u;
    { uint32_t r = c->r[11] * c->r[5]; c->r[0] = r; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[4]); c->r[7] = ea; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e1608u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[7] + 0x18u;
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[5] + c->r[6]; c->r[11] = r; }
    c->r[5] = c->r[7] + 0x1eu;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD8(ea); c->r[11] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = c->r[11];
    { uint32_t ea = c->r[7] + 0x19u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[0] | (c->r[1] << 8);
    c->r[1] = c->r[2] | (c->r[3] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    c->r[0] = 0x2808u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[4] = v; }
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = 0x2807u;
    { uint32_t ea = c->r[7] + 0x1cu; ST16(ea, c->r[4]); }
    (void)f_subs(c, c->r[4], c->r[0]);
    c->r[0] = c->r[5] + c->r[4];
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3e167cu; f_15efdac(c);
    c->r[1] = c->r[11] + 0x6u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[14] = 0x3e1690u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e16a4u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x3e16b0u; f_d21388(c);
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1704; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e16d4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e16e8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1704; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e171c;
L_3e1704:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xd8u;
    c->pc = c->r[3]; c->r[14] = 0x3e171cu; rt_dispatch(c);
L_3e171c:;
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[10];
    c->r[7] = c->r[7] + 0x1cu;
    c->r[14] = 0x3e172cu; f_d215b4(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1774; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1748u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e175cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1774; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e178c;
L_3e1774:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x3e178cu; rt_dispatch(c);
L_3e178c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e1798u; f_d21530(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e17e4; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e17b8u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e17ccu; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e17e4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e17fc;
L_3e17e4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x3e17fcu; rt_dispatch(c);
L_3e17fc:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1657bb0u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x3e1814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1820u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3e1844u; f_d2bf40(c);
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e184cu; f_d213cc(c);
    goto L_3e1884;
L_3e1868:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[0] + 0xd6u;
    c->r[6] = c->r[0] + 0xd4u;
    c->r[11] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
L_3e1884:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = c->r[13] + 0x2800u;
    c->r[9] = 0x0u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[5] = c->r[14] + 0x10cu;
L_3e1898:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_EQ) { goto L_3e1968; }
    c->r[0] = 0x1657b14u;
    { uint32_t ea = 0x3e18b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e18b4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t r = c->r[8] & shc_lsl(c, c->r[0], c->r[9]); c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_3e1968; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] - 0x1eu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x1au; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x16u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e18f4u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0xeu; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[7] = c->r[2] | (c->r[3] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 8);
    { uint32_t ea = c->r[4] - 0x5u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[4] - 0x6u;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    c->r[0] = 0x2808u;
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[1] = c->r[0] - c->r[7];
    c->r[0] = 0x2807u;
    { uint32_t ea = c->r[4] - 0x2u; ST16(ea, c->r[7]); }
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[0] = c->r[4] + c->r[7];
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3e1954u; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[10] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e1968u; f_15efe30(c);
L_3e1968:;
    c->r[0] = 0x2828u;
    c->r[9] = c->r[9] + 0x1u;
    c->r[4] = c->r[4] + c->r[0];
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_NE) { goto L_3e1898; }
L_3e197c:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[7] = 0x1u;
    c->r[8] = 0x0u;
    goto L_3e1b48;
L_3e199c:;
    c->r[0] = 0x1cu;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e1a04; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e19c0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e19d4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1a04; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    c->r[0] = 0x23u;
L_3e19ec:;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[0]); }
    c->r[10] = c->r[13] + 0xe0u;
    c->r[8] = 0x0u;
    goto L_3e1a38;
L_3e1a04:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1a1cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x23u;
L_3e1a24:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[10] = c->r[13] + 0xe0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_3df2a0; }
L_3e1a38:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1a50u; rt_dispatch(c);
L_3e1a50:;
    c->r[0] = 0x1657960u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = 0x3e1a64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_3e1b0c;
L_3e1a68:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1a80u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x109u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xdu;
L_3e1a88:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = c->r[11];
    c->r[10] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_3e1ae0; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1aacu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e1ac0u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3e1ae0; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[11] = v; }
L_3e1ad0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x109u; ST8(ea, c->r[0]); }
    goto L_3e1afc;
L_3e1ae0:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa8u;
    c->pc = c->r[3]; c->r[14] = 0x3e1af8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[11] = v; }
L_3e1afc:;
    c->r[0] = 0x16578b4u;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = 0x3e1b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e1b0c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1b1cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e1b40u; f_d2bf40(c);
L_3e1b40:;
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0x3e1b48u; f_d213cc(c);
L_3e1b48:;
    c->r[6] = c->r[13] + 0x2800u;
    c->r[0] = c->r[6] + 0x138u;
    c->r[14] = 0x3e1b54u; f_a38750(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x3e1b60u; f_a38750(c);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_3dbbd4; }
L_3e1b68:;
    c->r[0] = c->r[9];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3e1b78u; f_a389e0(c);
    c->r[4] = c->r[13] + 0x2000u;
    c->r[0] = c->r[4] + 0x910u;
    c->r[14] = 0x3e1b84u; f_d21a04(c);
    c->r[4] = c->r[13] + 0x2800u;
    c->r[0] = c->r[4] + 0x138u;
    c->r[14] = 0x3e1b90u; f_a38634(c);
    c->r[13] = c->r[13] + 0x15cu;
    c->r[13] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
