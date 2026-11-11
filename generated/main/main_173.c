#include "cpu.h"
#include "neon_rt.h"
void f_9af630(Cpu *c);
void f_9af6e4(Cpu *c);
void f_9bb638(Cpu *c);
void f_a87a24(Cpu *c);
void f_ba0198(Cpu *restrict c) {
    FN_ENTER(0xba0198u);
L_ba0198:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[9] = c->r[1];
    c->r[8] = c->r[0];
    c->r[14] = 0xba01acu; f_a87a24(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba01b4u; f_9bb638(c);
    c->r[1] = 0xbd5b09u;
    c->r[6] = 0x0u;
    c->r[1] = 0xba01c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    c->r[4] = c->r[1] - 0x3u;
    c->r[1] = 0xea27f4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = 0xba01e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea27e0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xba01f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba0230u; f_9bb638(c);
    c->r[1] = 0xbd5aa4u;
    c->r[1] = 0xba023cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[8]); }
    c->r[1] = 0xea2794u;
    { uint32_t ea = 0xba0248u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea2780u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xba0260u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba0298u; f_9bb638(c);
    c->r[1] = 0xbd5a4bu;
    c->r[11] = 0x0u;
    c->r[1] = 0xba02a8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xea2728u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = 0xba02bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea2714u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba02d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0328u; f_9bb638(c);
    c->r[1] = 0xbd59c1u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = c->r[2];
    c->r[1] = 0xba0340u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x238u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba03a4u; f_9bb638(c);
    c->r[1] = 0xbd5957u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba03b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2a0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0418u; f_9bb638(c);
    c->r[1] = 0xbd58f8u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba042cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2e8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba0470u; f_9bb638(c);
    c->r[1] = 0xbd58b9u;
    c->r[7] = 0x0u;
    c->r[1] = 0xba0480u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea2558u;
    { uint32_t ea = 0xba0494u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea2544u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xba04acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba04e4u; f_9bb638(c);
    c->r[1] = 0xbd2867u;
    c->r[11] = 0x0u;
    c->r[1] = 0xba04f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea24e8u;
    { uint32_t ea = 0xba050cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea24d4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xba0524u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0578u; f_9bb638(c);
    c->r[1] = 0xbd57c2u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba058cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x248u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba05ecu; f_9bb638(c);
    c->r[1] = 0xbd41f2u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0600u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x24cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba0644u; f_9bb638(c);
    c->r[1] = 0xbd5706u;
    c->r[11] = 0x0u;
    c->r[1] = 0xba0654u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea2390u;
    { uint32_t ea = 0xba066cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea237cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba0684u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba06d8u; f_9bb638(c);
    c->r[1] = 0xbd567du;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba06ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x234u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0750u; f_9bb638(c);
    c->r[1] = 0xbd5612u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0760u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x230u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba07c4u; f_9bb638(c);
    c->r[1] = 0xbd559du;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba07dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x228u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0840u; f_9bb638(c);
    c->r[1] = 0xbd553bu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0854u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[8] + 0x22cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba08b0u; f_9bb638(c);
    c->r[1] = 0xbd54ddu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x3u;
    c->r[1] = 0xba08c8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0x241u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0930u; f_9bb638(c);
    c->r[1] = 0xbd5478u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0940u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x23bu;
    c->r[10] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[8] + c->r[1];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba09a8u; f_9bb638(c);
    c->r[1] = 0xbc7edeu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x14u;
    c->r[1] = 0xba09c0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0xd0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0a24u; f_9bb638(c);
    c->r[1] = 0xbc2936u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0a34u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0xe0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0a98u; f_9bb638(c);
    c->r[1] = 0xbd1a02u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0aacu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0xf0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xea1ef0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[1] = c->r[8];
    { uint32_t ea = 0xba0b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xea1ee4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba0b24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbd1535u;
    c->r[2] = 0xba0b30u + c->r[0];
    c->r[0] = 0xbbced5u;
    c->r[3] = 0xba0b38u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba0b3cu; f_9af6e4(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba0b44u; f_9bb638(c);
    { uint32_t ea = c->r[10]; c->r[10] = c->r[10] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba0b80u; f_9bb638(c);
    c->r[1] = 0xbd523du;
    c->r[1] = 0xba0b8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea1e68u;
    { uint32_t ea = 0xba0ba4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea1e54u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba0bbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba0bf4u; f_9bb638(c);
    c->r[1] = 0xbd51cfu;
    c->r[11] = 0x0u;
    c->r[1] = 0xba0c04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea1df8u;
    { uint32_t ea = 0xba0c1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea1de4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba0c34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0c88u; f_9bb638(c);
    c->r[1] = 0xbd513du;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x15u;
    c->r[1] = 0xba0ca0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x120u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0d04u; f_9bb638(c);
    c->r[1] = 0xbd50d2u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0d14u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x130u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0d78u; f_9bb638(c);
    c->r[1] = 0xbd5062u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x15u;
    c->r[1] = 0xba0d90u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x140u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0df4u; f_9bb638(c);
    c->r[1] = 0xbd4ff9u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0e04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x160u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0e68u; f_9bb638(c);
    c->r[1] = 0xbd4f8cu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0e7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x360u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0ee0u; f_9bb638(c);
    c->r[1] = 0xbd4f20u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0ef4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x378u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0f54u; f_9bb638(c);
    c->r[1] = 0xbd4eb8u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0f68u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x364u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba0fccu; f_9bb638(c);
    c->r[1] = 0xbd4e47u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba0fe0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0x23au;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1044u; f_9bb638(c);
    c->r[1] = 0xbd4de0u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1058u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x23cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba10bcu; f_9bb638(c);
    c->r[1] = 0xbd4d79u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba10d0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1b0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1130u; f_9bb638(c);
    c->r[1] = 0xbd4d17u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1144u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x180u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba11a8u; f_9bb638(c);
    c->r[1] = 0xbd4b49u;
    goto L_ba1310;
L_ba1310:;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1320u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x22u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x170u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1380u; f_9bb638(c);
    c->r[1] = 0xbd4adeu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba1398u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x184u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba13fcu; f_9bb638(c);
    c->r[1] = 0xbd4a77u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba140cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x198u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1470u; f_9bb638(c);
    c->r[1] = 0xbd4a0eu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1484u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x22u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x188u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba14e8u; f_9bb638(c);
    c->r[1] = 0xbd49a0u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba1500u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x19cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1560u; f_9bb638(c);
    c->r[1] = 0xbd493eu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1570u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x274u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba15d8u; f_9bb638(c);
    c->r[1] = 0xbd48d0u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba15f0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x278u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1650u; f_9bb638(c);
    c->r[1] = 0xbd4870u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1660u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x298u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba16c8u; f_9bb638(c);
    c->r[1] = 0xbd4801u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba16e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x29cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1740u; f_9bb638(c);
    c->r[1] = 0xbd47a2u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1750u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x27cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba17b8u; f_9bb638(c);
    c->r[1] = 0xbd4733u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba17d0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x280u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1830u; f_9bb638(c);
    c->r[1] = 0xbd46d4u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1840u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x284u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba18a8u; f_9bb638(c);
    c->r[1] = 0xbd4666u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba18c0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x288u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1920u; f_9bb638(c);
    c->r[1] = 0xbd460au;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1930u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x28cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1998u; f_9bb638(c);
    c->r[1] = 0xbd459bu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba19b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x290u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1a10u; f_9bb638(c);
    c->r[1] = 0xbd453du;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1a20u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x294u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1a88u; f_9bb638(c);
    c->r[1] = 0xbd44d1u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xfu;
    c->r[1] = 0xba1aa0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x258u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1b00u; f_9bb638(c);
    c->r[1] = 0xbd4470u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1b10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x264u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1b78u; f_9bb638(c);
    c->r[1] = 0xbd43fdu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba1b90u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x25cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1bf0u; f_9bb638(c);
    c->r[1] = 0xbd439cu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1c00u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x260u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1c68u; f_9bb638(c);
    c->r[1] = 0xbd432du;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1c7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x268u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1cdcu; f_9bb638(c);
    c->r[1] = 0xbd42c6u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1cf0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x26cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1d54u; f_9bb638(c);
    c->r[1] = 0xbd4259u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1d68u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x270u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1dc8u; f_9bb638(c);
    c->r[1] = 0xbd41f5u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1ddcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x254u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1e40u; f_9bb638(c);
    c->r[1] = 0xbd418eu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1e54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x328u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1eb4u; f_9bb638(c);
    c->r[1] = 0xbd01dcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x6u;
    c->r[1] = 0xba1eccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x32cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1f30u; f_9bb638(c);
    c->r[1] = 0xbd0084u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1f40u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x330u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba1fa4u; f_9bb638(c);
    c->r[1] = 0xbd403au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba1fb8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x334u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba201cu; f_9bb638(c);
    c->r[1] = 0xbd3fdau;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2030u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2b0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2090u; f_9bb638(c);
    c->r[1] = 0xbd3f7au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba20a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2c0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2108u; f_9bb638(c);
    c->r[1] = 0xbd3f10u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba2120u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2d4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2180u; f_9bb638(c);
    c->r[1] = 0xbd3eb4u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2190u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x2d0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba21f8u; f_9bb638(c);
    c->r[1] = 0xbd3e48u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba2210u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2d8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2270u; f_9bb638(c);
    c->r[1] = 0xbd3defu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2280u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x2dcu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba22e8u; f_9bb638(c);
    c->r[1] = 0xbd3d84u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba2300u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2e0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2360u; f_9bb638(c);
    c->r[1] = 0xbd3d2bu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2370u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x2e4u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba23d8u; f_9bb638(c);
    c->r[1] = 0xbd3cc4u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba23ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x2f0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba244cu; f_9bb638(c);
    c->r[1] = 0xbd3c64u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2460u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x300u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba24c4u; f_9bb638(c);
    c->r[1] = 0xbd3bfau;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba24dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x314u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba253cu; f_9bb638(c);
    c->r[1] = 0xbd3b9eu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba254cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x310u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba25b4u; f_9bb638(c);
    c->r[1] = 0xbd3b32u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba25ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x318u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba262cu; f_9bb638(c);
    c->r[1] = 0xbd3ad9u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba263cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x31cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba26a4u; f_9bb638(c);
    c->r[1] = 0xbd3a6eu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba26bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x320u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba271cu; f_9bb638(c);
    c->r[1] = 0xbd3a15u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba272cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x324u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba2774u; f_9bb638(c);
    c->r[1] = 0xbd39d2u;
    c->r[11] = 0x0u;
    c->r[1] = 0xba2784u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea0280u;
    { uint32_t ea = 0xba279cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea026cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba27b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2808u; f_9bb638(c);
    c->r[1] = 0xbd3950u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba281cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1a0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2880u; f_9bb638(c);
    c->r[1] = 0xbd38e2u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba2898u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1b4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba28f8u; f_9bb638(c);
    c->r[1] = 0xbd3880u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2908u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x1bcu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2970u; f_9bb638(c);
    c->r[1] = 0xbd3811u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2984u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1b8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba29c8u; f_9bb638(c);
    c->r[1] = 0xbd37d4u;
    c->r[1] = 0xba29d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xea0038u;
    { uint32_t ea = 0xba29ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xea0024u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba2a04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2a5cu; f_9bb638(c);
    c->r[1] = 0xbd373fu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x6u;
    c->r[1] = 0xba2a74u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1c0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2ad4u; f_9bb638(c);
    c->r[1] = 0xbd36dbu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2ae4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x1c4u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2b4cu; f_9bb638(c);
    c->r[1] = 0xbd366du;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0x22u;
    c->r[1] = 0xba2b64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x22u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1d0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2bc4u; f_9bb638(c);
    c->r[1] = 0xbd360au;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2bd4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x1d8u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2c3cu; f_9bb638(c);
    c->r[1] = 0xbd3597u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba2c54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x1c8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2cb4u; f_9bb638(c);
    c->r[1] = 0xbd3530u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2cc8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[8] + 0x1ccu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba2d08u; f_9bb638(c);
    c->r[1] = 0xbd34ebu;
    c->r[6] = 0x0u;
    c->r[1] = 0xba2d18u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    c->r[7] = c->r[1] + 0x3au;
    c->r[1] = 0xe9fcf8u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = 0xba2d34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe9fce4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xba2d4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba2d84u; f_9bb638(c);
    c->r[1] = 0xbd3480u;
    c->r[1] = 0xba2d90u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->r[1] = 0xe9fc98u;
    { uint32_t ea = 0xba2d9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe9fc84u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xba2db4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba2decu; f_9bb638(c);
    c->r[1] = 0xbd3426u;
    c->r[6] = 0x0u;
    c->r[1] = 0xba2dfcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->r[1] = 0xe9fc34u;
    { uint32_t ea = 0xba2e08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe9fc20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xba2e20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba2e58u; f_9bb638(c);
    c->r[1] = 0xbd33ceu;
    c->r[11] = 0x0u;
    c->r[1] = 0xba2e68u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->r[1] = 0xe9fbd0u;
    { uint32_t ea = 0xba2e74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe9fbbcu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xba2e8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2ee0u; f_9bb638(c);
    c->r[1] = 0xbd335bu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2ef4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x210u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2f54u; f_9bb638(c);
    c->r[1] = 0xbd32eeu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = 0xcu;
    c->r[1] = 0xba2f6cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x20cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba2fd0u; f_9bb638(c);
    c->r[1] = 0xbd328cu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba2fe0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = c->r[13] + 0x28u;
    c->r[1] = c->r[8] + 0x208u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xba3028u; f_9bb638(c);
    c->r[1] = 0xbd3249u;
    c->r[1] = 0xba3034u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800000u;
    c->r[1] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = 0xe9f9fcu;
    { uint32_t ea = 0xba3050u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xe9f9e8u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xba3068u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba30c0u; f_9bb638(c);
    c->r[1] = 0xbd31beu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba30d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x240u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[14] = 0xba3134u; f_9bb638(c);
    c->r[1] = 0xbd315bu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba3148u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x224u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x34u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd3116u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba31a4u + c->r[0];
    c->r[0] = 0xbba861u;
    c->r[3] = 0xba31acu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba31b0u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba31b8u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x38u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd30bau;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba320cu + c->r[0];
    c->r[0] = 0xbba7f9u;
    c->r[3] = 0xba3214u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba3218u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba3220u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x3cu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd305bu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba3278u + c->r[0];
    c->r[0] = 0xbba78du;
    c->r[3] = 0xba3280u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba3284u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba328cu; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x40u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd2ffcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba32e0u + c->r[0];
    c->r[0] = 0xbba725u;
    c->r[3] = 0xba32e8u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba32ecu; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba32f4u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x44u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd2fa2u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba334cu + c->r[0];
    c->r[0] = 0xbba6b9u;
    c->r[3] = 0xba3354u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba3358u; f_9af630(c);
    goto L_ba33a8;
L_ba33a8:;
    c->r[0] = c->r[9];
    c->r[14] = 0xba33b0u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x48u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd2f03u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba3404u + c->r[0];
    c->r[0] = 0xbba601u;
    c->r[3] = 0xba340cu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba3410u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba3418u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x4cu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd2ea7u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba3470u + c->r[0];
    c->r[0] = 0xbba595u;
    c->r[3] = 0xba3478u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba347cu; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba3484u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x50u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    c->r[0] = 0xbd2e50u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    c->r[2] = 0xba34d8u + c->r[0];
    c->r[0] = 0xbba52du;
    c->r[3] = 0xba34e0u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xba34e4u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba34ecu; f_9bb638(c);
    { uint32_t ea = c->r[10]; c->r[10] = c->r[10] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba3548u; f_9bb638(c);
    c->r[1] = 0xbd2de0u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba355cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[11] = c->r[1] - 0x10000u;
    c->r[1] = c->r[8] + 0x384u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba35c8u; f_9bb638(c);
    c->r[1] = 0xbd2d71u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba35dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x388u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba363cu; f_9bb638(c);
    c->r[1] = 0xbd191au;
    c->r[11] = 0x2u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x30000u;
    c->r[1] = 0xba3658u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] + 0x5cu;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba36b8u; f_9bb638(c);
    c->r[1] = 0xbd11deu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba36ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba372cu; f_9bb638(c);
    c->r[1] = 0xbd2c1eu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba3740u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x8cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba379cu; f_9bb638(c);
    c->r[1] = 0xbd2bbbu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba37b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x64u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba3810u; f_9bb638(c);
    c->r[1] = 0xbd2b53u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba3824u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x68u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba3880u; f_9bb638(c);
    c->r[1] = 0xbd2af5u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba3894u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x6cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba38f4u; f_9bb638(c);
    c->r[1] = 0xbd2a8du;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba3908u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x74u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[14] = 0xba3964u; f_9bb638(c);
    c->r[1] = 0xbd2a2du;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xba3978u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[8] + 0x78u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[11] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x80u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[0] = 0xbd29e8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[2] = 0xba39d4u + c->r[0];
    c->r[0] = 0xbba031u;
    c->r[3] = 0xba39dcu + c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0xba39e0u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xba39e8u; f_9bb638(c);
    { uint32_t ea = c->r[11]; c->r[11] = c->r[11] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[11]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
