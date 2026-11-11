#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_229d48(Cpu *c);
void f_9bb638(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_bd51fc(Cpu *c);
void f_bd6268(Cpu *c);
void f_bd6804(Cpu *c);
void f_bd73d8(Cpu *c);
void f_bd7b64(Cpu *c);
void f_bf4818(Cpu *c);
void f_bf4e74(Cpu *c);
void f_bf5058(Cpu *c);
void f_bf5104(Cpu *c);
void f_bf52e4(Cpu *c);
void f_bf5358(Cpu *c);
void f_bf5630(Cpu *c);
void f_bf5adc(Cpu *c);
void f_bf5da8(Cpu *c);
void f_bf5f24(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_bd30c4(Cpu *restrict c) {
    FN_ENTER(0xbd30c4u);
L_bd30c4:;
    c->r[2] = 0x260u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[0] + 0x1a0u;
    return;
}
void f_bd30d4(Cpu *restrict c) {
    FN_ENTER(0xbd30d4u);
L_bd30d4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[1] + 0x1acu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[0];
    c->r[8] = c->r[2];
    c->r[0] = 0x260u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[6]; c->r[7] = r; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = c->r[7];
    if (COND_LT) { c->r[4] = ~0x0u; }
    { uint32_t ea = c->r[7] + 0x34cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x3c4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbd310cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd3140; }
    { uint32_t ea = c->r[7] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd3134; }
    c->r[0] = 0x260u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[0] + 0x350u;
    goto L_bd3138;
L_bd3134:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd3138:;
    c->r[2] = c->r[4];
    c->r[14] = 0xbd3140u; f_bf5104(c);
L_bd3140:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd317c; }
    { uint32_t ea = c->r[0] + 0x5acu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3188; }
    { uint32_t ea = c->r[0] + 0x80cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3190; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    goto L_bd3194;
L_bd317c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_bd3188:;
    c->r[2] = 0x1u;
    goto L_bd3194;
L_bd3190:;
    c->r[2] = 0x2u;
L_bd3194:;
    c->r[3] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bd31a0(Cpu *restrict c) {
    FN_ENTER(0xbd31a0u);
L_bd31a0:;
    c->r[0] = 0x4u;
    return;
}
void f_bd31a8(Cpu *restrict c) {
    FN_ENTER(0xbd31a8u);
L_bd31a8:;
    return;
}
void f_bd31ac(Cpu *restrict c) {
    FN_ENTER(0xbd31acu);
L_bd31ac:;
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bd31b4(Cpu *restrict c) {
    FN_ENTER(0xbd31b4u);
L_bd31b4:;
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xd20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xd24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0xd28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_bd3238(Cpu *restrict c) {
    FN_ENTER(0xbd3238u);
L_bd3238:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    return;
}
void f_bd32bc(Cpu *restrict c) {
    FN_ENTER(0xbd32bcu);
L_bd32bc:;
    { uint32_t ea = c->r[0] + 0xd40u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bd32c4(Cpu *restrict c) {
    FN_ENTER(0xbd32c4u);
L_bd32c4:;
    { uint32_t ea = c->r[0] + 0xd40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xd55u; ST8(ea, c->r[1]); }
    return;
}
void f_bd32d4(Cpu *restrict c) {
    FN_ENTER(0xbd32d4u);
L_bd32d4:;
    { uint32_t ea = c->r[0] + 0xd48u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bd32dc(Cpu *restrict c) {
    FN_ENTER(0xbd32dcu);
L_bd32dc:;
    { uint32_t ea = c->r[0] + 0xd48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xd57u; ST8(ea, c->r[1]); }
    return;
}
void f_bd32ec(Cpu *restrict c) {
    FN_ENTER(0xbd32ecu);
L_bd32ec:;
    { uint32_t ea = c->r[0] + 0xd44u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bd32f4(Cpu *restrict c) {
    FN_ENTER(0xbd32f4u);
L_bd32f4:;
    { uint32_t ea = c->r[0] + 0xd44u; ST32(ea, c->r[1]); }
    return;
}
void f_bd32fc(Cpu *restrict c) {
    FN_ENTER(0xbd32fcu);
L_bd32fc:;
    { uint32_t ea = c->r[0] + 0xd4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bd3304(Cpu *restrict c) {
    FN_ENTER(0xbd3304u);
L_bd3304:;
    { uint32_t ea = c->r[0] + 0xd4cu; ST32(ea, c->r[1]); }
    return;
}
void f_bd330c(Cpu *restrict c) {
    FN_ENTER(0xbd330cu);
L_bd330c:;
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
    c->r[14] = 0xbd3344u; f_9bb638(c);
    c->r[1] = 0xba3b85u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xbd335cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xc34u;
    c->r[1] = c->r[10] + c->r[1];
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
    c->r[14] = 0xbd33c0u; f_9bb638(c);
    c->r[1] = 0xba3b1bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xbd33d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xc3cu;
    c->r[1] = c->r[10] + c->r[1];
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
    c->r[14] = 0xbd343cu; f_9bb638(c);
    c->r[1] = 0xba3ab7u;
    c->r[1] = 0xbd3448u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0xc38u;
    c->r[1] = c->r[10] + c->r[1];
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
void f_bd34a0(Cpu *restrict c) {
    FN_ENTER(0xbd34a0u);
L_bd34a0:;
    __attribute__((musttail)) return f_bf4818(c);
}
void f_bd34a4(Cpu *restrict c) {
    FN_ENTER(0xbd34a4u);
L_bd34a4:;
    c->r[0] = 0x0u;
    return;
}
void f_bd34ac(Cpu *restrict c) {
    FN_ENTER(0xbd34acu);
L_bd34ac:;
    return;
}
void f_bd34b0(Cpu *restrict c) {
    FN_ENTER(0xbd34b0u);
L_bd34b0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[1];
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_bd350c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[1]; c->r[14] = 0xbd34d4u; rt_dispatch(c);
    c->r[1] = 0xe6f944u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xbd34e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_bd34fc; }
    goto L_bd350c;
L_bd34f0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_bd350c; }
L_bd34fc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd34f0; }
    goto L_bd3930;
L_bd350c:;
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd3524; }
    c->r[14] = 0xbd351cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0xc0u; ST32(ea, c->r[0]); }
L_bd3524:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_bd3930; }
    c->r[0] = c->r[9];
    c->r[14] = 0xbd3534u; f_a87648(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[10] + 0xc0u; ST32(ea, c->r[9]); }
    c->r[14] = 0xbd3544u; f_bf52e4(c);
    c->r[4] = 0x0u;
    c->r[5] = ~0x0u;
    c->r[6] = 0x0u;
L_bd3550:;
    c->r[7] = c->r[10] + c->r[6];
    { uint32_t ea = c->r[7] + 0x34cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x3c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbd3568u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd3594; }
    { uint32_t ea = c->r[7] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd3588; }
    c->r[0] = c->r[7] + 0x350u;
    goto L_bd358c;
L_bd3588:;
    { uint32_t ea = c->r[7] + 0x3c4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd358c:;
    c->r[2] = ~0x0u;
    c->r[14] = 0xbd3594u; f_bf5104(c);
L_bd3594:;
    { uint32_t ea = c->r[7] + 0x3c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd35d0; }
    { uint32_t ea = c->r[0] + 0x5acu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd35d8; }
    { uint32_t ea = c->r[0] + 0x80cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd35e0; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    goto L_bd35e4;
L_bd35d0:;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[4]); }
    goto L_bd35ec;
L_bd35d8:;
    c->r[2] = 0x1u;
    goto L_bd35e4;
L_bd35e0:;
    c->r[2] = 0x2u;
L_bd35e4:;
    c->r[3] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
L_bd35ec:;
    c->r[6] = c->r[6] + 0x260u;
    (void)f_subs(c, c->r[6], 0x980u);
    if (COND_NE) { goto L_bd3550; }
    { uint32_t ea = c->r[9] + 0x22cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_bd3708; }
    c->r[7] = c->r[10] + 0x3f4u;
    c->r[8] = 0x0u;
    c->r[5] = 0x0u;
    c->r[4] = 0x0u;
L_bd3618:;
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { c->r[6] = ~0x0u; }
    { uint32_t ea = c->r[7] - 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbd363cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd3668; }
    { uint32_t ea = c->r[7] - 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd365c; }
    c->r[0] = c->r[7] - 0xa4u;
    goto L_bd3660;
L_bd365c:;
    { uint32_t ea = c->r[7] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd3660:;
    c->r[2] = c->r[6];
    c->r[14] = 0xbd3668u; f_bf5104(c);
L_bd3668:;
    { uint32_t ea = c->r[7] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd36a4; }
    { uint32_t ea = c->r[0] + 0x5acu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd36ac; }
    { uint32_t ea = c->r[0] + 0x80cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd36b4; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    goto L_bd36b8;
L_bd36a4:;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[8]); }
    goto L_bd36c0;
L_bd36ac:;
    c->r[2] = 0x1u;
    goto L_bd36b8;
L_bd36b4:;
    c->r[2] = 0x2u;
L_bd36b8:;
    c->r[3] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
L_bd36c0:;
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[0] + c->r[5];
    c->r[5] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0xacu; ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] + 0x260u;
    { uint32_t ea = c->r[9] + 0x22cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_LT) { goto L_bd3618; }
L_bd3708:;
    { uint32_t ea = c->r[0] + 0x32cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0xd5au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x230u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x234u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x238u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x23cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x240u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb20u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x244u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x250u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x254u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x258u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x25cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb3cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2b8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd58u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2b0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xd40u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xd55u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd59u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2b9u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xd48u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xd57u; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x25du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb3du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb40u; ST32(ea, c->r[1]); }
    c->r[1] = 0xb44u;
    c->v.s[2] = LD32(c->r[0] + 612u);
    c->r[1] = c->r[10] + c->r[1];
    c->v.f[0] = vmaxnm_f(c->v.f[2], c->v.f[0]);
    ST32(c->r[1], c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x268u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb48u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x26cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x270u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x274u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x27cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xb49u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0xd54u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xb80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x284u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xb84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x278u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xb88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x288u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xb8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xd10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x290u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xd14u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x294u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xb90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xba0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xba4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xba8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0xbacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2c4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbc8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2e8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2ecu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbdcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2f0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2f4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2f8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2fcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbecu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x300u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x304u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x308u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xbf8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xbfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x328u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x31cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x320u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x324u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0xc1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x310u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc00u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x314u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc04u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xc08u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xc0cu; ST32(ea, c->r[1]); }
L_bd3930:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_bd393c(Cpu *restrict c) {
    FN_ENTER(0xbd393cu);
L_bd393c:;
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_bd3944(Cpu *restrict c) {
    FN_ENTER(0xbd3944u);
L_bd3944:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbd3950u; f_bf5358(c);
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x5acu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_bd39a4; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x5b0u;
    c->r[14] = 0xbd3970u; f_bf5358(c);
    { uint32_t ea = c->r[4] + 0x80cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x810u;
    c->r[14] = 0xbd3988u; f_bf5358(c);
    { uint32_t ea = c->r[4] + 0xa6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bd39a4; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xa70u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_bf5358(c);
L_bd39a4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bd39a8(Cpu *restrict c) {
    FN_ENTER(0xbd39a8u);
L_bd39a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbd39c4u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xbd39d8u; rt_dispatch(c);
    c->r[0] = 0xbc20u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xccbe0000u;
    { uint32_t ea = c->r[5] + 0xb74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bd39e8(Cpu *restrict c) {
    FN_ENTER(0xbd39e8u);
L_bd39e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xbd39f8u; f_bf4e74(c);
    { uint32_t ea = c->r[5] + 0xd40u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xd48u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_bd3a04(Cpu *restrict c) {
    FN_ENTER(0xbd3a04u);
L_bd3a04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xbd3a10u; f_bf5058(c);
    c->r[0] = c->r[4] + 0x5b0u;
    c->r[14] = 0xbd3a18u; f_bf5058(c);
    c->r[0] = c->r[4] + 0x810u;
    c->r[14] = 0xbd3a20u; f_bf5058(c);
    c->r[0] = c->r[4] + 0xa70u;
    c->r[14] = 0xbd3a28u; f_bf5058(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xd55u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_bd3a34(Cpu *restrict c) {
    FN_ENTER(0xbd3a34u);
L_bd3a34:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xbd3a4cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_bd3a8c; }
    { uint32_t ea = c->r[4] + 0x5acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_adds(c, c->r[0], 0x1u);
    c->r[0] = 0x1u;
    if (COND_EQ) { goto L_bd3a9c; }
    { uint32_t ea = c->r[4] + 0x80cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bd3a98; }
    { uint32_t ea = c->r[4] + 0xa6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x4u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[0] = 0x3u; }
    goto L_bd3a9c;
L_bd3a8c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); }
    goto L_bd3b6c;
L_bd3a98:;
    c->r[0] = 0x2u;
L_bd3a9c:;
    c->r[1] = c->r[0] - 0x1u;
    c->r[7] = c->r[4] + 0x34cu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    goto L_bd3ab8;
L_bd3ab0:;
    { uint32_t ea = c->r[7] + 0x260u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    c->r[6] = c->r[6] + 0x1u;
L_bd3ab8:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { c->r[5] = ~0x0u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbd3ad4u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd3b00; }
    { uint32_t ea = c->r[7] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd3af4; }
    c->r[0] = c->r[7] + 0x4u;
    goto L_bd3af8;
L_bd3af4:;
    { uint32_t ea = c->r[7] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd3af8:;
    c->r[2] = c->r[5];
    c->r[14] = 0xbd3b00u; f_bf5104(c);
L_bd3b00:;
    { uint32_t ea = c->r[7] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3b3c; }
    { uint32_t ea = c->r[0] + 0x5acu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3b44; }
    { uint32_t ea = c->r[0] + 0x80cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3b4c; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    goto L_bd3b50;
L_bd3b3c:;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[8]); }
    goto L_bd3b58;
L_bd3b44:;
    c->r[2] = 0x1u;
    goto L_bd3b50;
L_bd3b4c:;
    c->r[2] = 0x2u;
L_bd3b50:;
    c->r[3] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
L_bd3b58:;
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_bd3ab0; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_GT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_bd3b6c:;
    c->r[1] = 0x260u;
    c->r[5] = 0x4u - c->r[0];
    c->r[6] = ~0x0u;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[4]; c->r[1] = r; }
    c->r[4] = c->r[1] + 0x34cu;
L_bd3b84:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xbd3b98u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd3bc4; }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd3bb8; }
    c->r[0] = c->r[4] + 0x4u;
    goto L_bd3bbc;
L_bd3bb8:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd3bbc:;
    c->r[2] = ~0x0u;
    c->r[14] = 0xbd3bc4u; f_bf5104(c);
L_bd3bc4:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3c00; }
    { uint32_t ea = c->r[0] + 0x5acu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3c08; }
    { uint32_t ea = c->r[0] + 0x80cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd3c10; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    goto L_bd3c14;
L_bd3c00:;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[7]); }
    goto L_bd3c1c;
L_bd3c08:;
    c->r[2] = 0x1u;
    goto L_bd3c14;
L_bd3c10:;
    c->r[2] = 0x2u;
L_bd3c14:;
    c->r[3] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
L_bd3c1c:;
    c->r[4] = c->r[4] + 0x260u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_bd3b84; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_bd3c2c(Cpu *restrict c) {
    FN_ENTER(0xbd3c2cu);
L_bd3c2c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xd2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0xd55u; ST8(ea, c->r[1]); }
    return;
}
void f_bd3c58(Cpu *restrict c) {
    FN_ENTER(0xbd3c58u);
L_bd3c58:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xd3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0xd57u; ST8(ea, c->r[1]); }
    return;
}
void f_bd3c84(Cpu *restrict c) {
    FN_ENTER(0xbd3c84u);
L_bd3c84:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x168u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6] + 0x61u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd51e8; }
    c->v.s[0] = 0x34000000u;
    c->v.s[2] = LD32(c->r[6] + 68u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_bd51e8; }
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] - 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_bd51e8; }
    { uint32_t ea = c->r[6] + 0x5acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_NE) { goto L_bd3d04; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x80cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_EQ) { goto L_bd51e8; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_bd3d30; }
    goto L_bd51e8;
L_bd3d04:;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x80cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_EQ) { goto L_bd51e8; }
    { uint32_t ea = c->r[6] + 0xa6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[7]); }
    if (COND_EQ) { goto L_bd51e8; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[7]); }
    if (COND_EQ) { goto L_bd51e8; }
L_bd3d30:;
    c->r[7] = 0x0u;
    c->r[10] = c->r[6] + 0x1a0u;
    { uint32_t ea = c->r[6] + 0xc4u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[6] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x188u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xbd3d58u; f_bd51fc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bd51e8; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x260u;
    c->v.s[0] = LD32(c->r[6] + 480u);
    c->v.s[2] = LD32(c->r[6] + 484u);
    c->v.s[4] = LD32(c->r[6] + 488u);
    c->r[3] = c->r[6] + 0x1e0u;
    c->r[2] = c->r[13] + 0xa0u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    c->r[1] = c->r[13] + 0xe0u;
    c->v.s[6] = LD32(c->r[0] + 480u);
    c->v.s[8] = LD32(c->r[0] + 484u);
    c->v.s[10] = LD32(c->r[0] + 488u);
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] - c->v.f[4];
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    c->r[14] = 0xbd3dd8u; f_bf5da8(c);
    { uint32_t ea = c->r[6] + 0xd58u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0xd59u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bd3e04; }
    { uint32_t ea = c->r[6] + 0xd44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { c->r[3] = 0x1u; }
L_bd3e04:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[2] + 0xd20u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[8] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[9] = c->r[2];
    c->r[12] = c->r[2];
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x35u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_bd3e74; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x260u;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1e4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xd28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xd2cu; ST32(ea, c->r[7]); }
L_bd3e74:;
    { uint32_t ea = c->r[6] + 0xbb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd3f28; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    if (COND_NE) { goto L_bd3f34; }
    c->r[2] = 0x260u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[6]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1e4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1e8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1ecu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[2]); }
    goto L_bd4148;
L_bd3f28:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd464c;
L_bd3f34:;
    c->r[0] = 0x260u;
    c->v.s[16] = 0x3f800000u;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x3c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 100u);
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.s[6] = LD32(c->r[0] + 96u);
    c->v.s[4] = LD32(c->r[0] + 108u);
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[8] = c->v.f[2] + c->v.f[2];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[3] = c->v.f[6] * c->v.f[10];
    c->v.f[5] = c->v.f[6] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[4];
    c->v.f[10] = c->v.f[10] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[2];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[16] - c->v.f[14];
    ST32(c->r[13] + 224u, c->v.s[14]);
    c->v.f[14] = c->v.f[6] + c->v.f[6];
    ST32(c->r[13] + 228u, c->v.s[7]);
    ST32(c->r[13] + 232u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 240u, c->v.s[1]);
    c->v.f[6] = c->v.f[6] * c->v.f[14];
    c->v.f[4] = c->v.f[14] * c->v.f[4];
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[8] = c->v.f[0] + c->v.f[4];
    c->v.f[6] = c->v.f[6] + c->v.f[12];
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[2] = c->v.f[16] - c->v.f[2];
    ST32(c->r[13] + 244u, c->v.s[2]);
    c->v.f[2] = c->v.f[5] + c->v.f[10];
    ST32(c->r[13] + 248u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 256u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] - c->v.f[6];
    ST32(c->r[13] + 260u, c->v.s[0]);
    ST32(c->r[13] + 264u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_bd4110; }
    c->r[8] = c->r[13] + 0xe0u;
    c->r[9] = c->r[13] + 0xa0u;
L_bd4024:;
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[10] = c->r[0] + (c->r[1] << 5);
    c->r[1] = c->r[9];
    c->v.s[2] = LD32(c->r[10] + 100u);
    c->v.s[4] = LD32(c->r[10] + 104u);
    c->v.s[0] = LD32(c->r[10] + 96u);
    c->v.s[6] = LD32(c->r[10] + 108u);
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[16] - c->v.f[14];
    ST32(c->r[13] + 160u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 164u, c->v.s[7]);
    ST32(c->r[13] + 168u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 176u, c->v.s[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[16] - c->v.f[4];
    c->v.f[0] = c->v.f[16] - c->v.f[0];
    ST32(c->r[13] + 180u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    ST32(c->r[13] + 184u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 192u, c->v.s[4]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[2]); }
    c->r[14] = 0xbd40f8u; f_21ebe8(c);
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x3f800000u;
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_bd4024; }
L_bd4110:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbd4120u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0xbd412cu; f_21ebe8(c);
    { uint32_t ea = c->r[6] + 0xbb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
L_bd4148:;
    c->r[2] = 0x0u;
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[6] + 0xd20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xd24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xd28u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0xd2cu; ST32(ea, c->r[2]); c->r[8] = ea; }
    if (COND_NE) { goto L_bd4174; }
    c->v.s[0] = c->r[3];
    c->v.s[2] = c->r[1];
    goto L_bd43d4;
L_bd4174:;
    { uint32_t ea = c->r[6] + 0xc20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_bd41f4; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_bd41f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbd41acu; rt_dispatch(c);
    c->r[2] = 0xc14u;
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->r[1] = 0xc18u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 32u);
    c->r[3] = c->r[0] + 0x20u;
    c->r[12] = c->r[0] + 0x10u;
    c->r[2] = c->r[6] + c->r[2];
    c->r[1] = c->r[6] + c->r[1];
    c->v.s[18] = LD32(c->r[2]);
    c->r[2] = c->r[6] + 0xc10u;
    c->v.s[16] = LD32(c->r[1]);
    c->r[1] = c->r[7] + (c->r[7] << 2);
    c->v.s[20] = LD32(c->r[2]);
    c->r[1] = c->r[9] + (c->r[1] << 5);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[1] + 0x80u;
    goto L_bd4240;
L_bd41f4:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd41f8:;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x40u; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbd420cu; rt_dispatch(c);
    c->r[2] = 0xc14u;
    c->r[1] = 0xc18u;
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 32u);
    c->r[3] = c->r[0] + 0x20u;
    c->r[12] = c->r[0] + 0x10u;
    c->r[2] = c->r[6] + c->r[2];
    c->r[1] = c->r[6] + c->r[1];
    c->v.s[18] = LD32(c->r[2]);
    c->r[2] = c->r[6] + 0xc10u;
    c->v.s[16] = LD32(c->r[1]);
    c->v.s[20] = LD32(c->r[2]);
L_bd4240:;
    c->v.f[22] = c->v.f[2] * c->v.f[18];
    c->v.f[2] = c->v.f[4] * c->v.f[16];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[0] * c->v.f[20]);
    ST32(c->r[13] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[26] = LD32(c->r[7]);
    c->v.s[28] = LD32(c->r[7] + 4u);
    c->v.s[30] = LD32(c->r[7] + 8u);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[17] = LD32(c->r[3] + 4u);
    c->v.s[19] = LD32(c->r[3] + 8u);
    c->v.s[21] = LD32(c->r[9]);
    c->v.s[25] = LD32(c->r[10]);
    c->v.s[27] = LD32(c->r[0] + 4u);
    c->v.s[29] = LD32(c->r[0] + 8u);
    c->v.s[31] = LD32(c->r[12] + 4u);
    c->v.s[24] = LD32(c->r[12] + 8u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[23] = LD32(c->r[7]);
    c->r[0] = c->r[1];
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xbd42a0u; rt_dispatch(c);
    c->v.f[0] = c->v.f[18] * c->v.f[31];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[27]);
    c->v.s[4] = LD32(c->r[13] + 24u);
    c->v.f[2] = c->v.f[18] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[29]);
    c->v.s[6] = LD32(c->r[0] + 24u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[20] = LD32(c->r[0] + 8u);
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 32u);
    c->v.s[1] = LD32(c->r[0] + 36u);
    c->r[2] = 0xc08u;
    c->r[1] = 0xc04u;
    c->r[2] = c->r[6] + c->r[2];
    c->r[1] = c->r[6] + c->r[1];
    c->v.s[24] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[19]);
    c->v.f[4] = c->v.f[4] + c->v.f[22];
    c->v.s[22] = LD32(c->r[0] + 40u);
    c->v.f[18] = c->v.f[0] + c->v.f[28];
    c->v.s[0] = LD32(c->r[0] + 16u);
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[28] = c->v.f[2] + c->v.f[30];
    c->v.f[16] = c->v.f[4] + c->v.f[26];
    c->v.s[26] = LD32(c->r[1]);
    c->r[1] = c->r[6] + 0xc00u;
    c->v.s[17] = LD32(c->r[1]);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[4] = c->v.f[25] - c->v.f[18];
    c->v.f[21] = c->v.f[21] - c->v.f[28];
    c->v.f[2] = c->v.f[23] - c->v.f[16];
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[30] = c->v.f[4] * c->v.f[8];
    c->v.f[19] = c->v.f[4] * c->v.f[10];
    c->v.f[23] = c->v.f[4] * c->v.f[1];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[21] * c->v.f[6]);
    c->pc = c->r[2]; c->r[14] = 0xbd434cu; rt_dispatch(c);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[21] * c->v.f[20]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[21] * c->v.f[22]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.f[12] = c->v.f[30] * c->v.f[26];
    c->v.s[10] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 24u);
    c->v.s[1] = LD32(c->r[0] + 32u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->r[12] = c->r[10];
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[14] = c->v.f[19] * c->v.f[17];
    c->v.f[7] = c->v.f[23] * c->v.f[24];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[4] = c->v.f[12] * c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[3]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[7] * c->v.f[5]);
    c->v.f[2] = c->v.f[16] + c->v.f[10];
    c->v.f[6] = c->v.f[18] + c->v.f[6];
    c->v.f[0] = c->v.f[28] + c->v.f[4];
    ST32(c->r[7], c->v.s[2]);
    ST32(c->r[12], c->v.s[6]);
    ST32(c->r[9], c->v.s[0]);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
L_bd43d4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bd4514; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xbc8u;
    c->r[2] = c->r[6] + 0xbd0u;
    c->r[7] = 0xbc4u;
    c->v.s[16] = 0x0u;
    c->r[1] = 0xbd4u;
    c->r[12] = 0xbe4u;
    c->r[14] = c->r[6] + c->r[0];
    c->r[0] = c->r[6] + 0xbc0u;
    c->v.s[4] = LD32(c->r[2]);
    c->r[2] = c->r[6] + c->r[7];
    c->r[7] = 0xbd8u;
    c->r[1] = c->r[6] + c->r[1];
    c->v.s[14] = LD32(c->r[0]);
    c->r[7] = c->r[6] + c->r[7];
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[3] = LD32(c->r[2]);
    c->r[1] = c->r[6] + c->r[12];
    c->v.s[1] = LD32(c->r[14]);
    c->v.s[10] = LD32(c->r[7]);
    c->r[7] = c->r[6] + 0xbe0u;
    c->v.s[6] = LD32(c->r[3] + 64u);
    c->v.s[8] = LD32(c->r[3] + 72u);
    c->r[3] = 0xbe8u;
    c->r[3] = c->r[6] + c->r[3];
    c->v.f[4] = c->v.f[4] * c->v.f[16];
    c->v.s[5] = LD32(c->r[3]);
    c->v.f[18] = c->v.f[12] * c->v.f[16];
    c->v.s[12] = LD32(c->r[1]);
    c->v.f[10] = c->v.f[10] * c->v.f[16];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.s[6] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[0] - c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[3]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[1]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[2] = c->v.f[10] * c->v.f[10];
    c->v.f[4] = c->v.f[0] + c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd44b0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd44b0u; f_15efddc(c);
L_bd44b0:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    vfp_cmp_f(c, c->v.f[16], c->v.f[18]);
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xbf0u;
    c->r[1] = 0xbf8u;
    c->v.s[8] = LD32(c->r[0]);
    c->r[0] = c->r[6] + c->r[1];
    c->r[1] = 0xbf4u;
    c->r[1] = c->r[6] + c->r[1];
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[12]);
    c->v.s[6] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    c->v.f[6] = c->v.f[8] + c->v.f[6];
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[2], c->v.s[6]);
    ST32(c->r[12], c->v.s[0]);
    c->v.s[0] = LD32(c->r[9]);
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[9], c->v.s[0]);
    { uint32_t ea = c->r[6] + 0xbb0u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd4514:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bd45a0; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xacu; ST32(ea, c->r[0]); }
    goto L_bd4644;
L_bd45a0:;
    c->r[2] = c->r[6] + 0xbc0u;
    c->r[0] = c->r[13] + 0xa0u;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[14] = 0xbd45b0u; f_229d48(c);
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x260u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_bd4644:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd58u; uint32_t v = LD8(ea); c->r[1] = v; }
L_bd464c:;
    c->r[0] = c->r[0] ^ 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd46b4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd46b4; }
    { uint32_t ea = c->r[6] + 0xd40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd46b4; }
    { uint32_t ea = c->r[6] + 0xd44u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x498u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bd46b4; }
    { uint32_t ea = c->r[1] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 5);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd46b4; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[6] + 0xd20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xd28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xd2cu; ST32(ea, c->r[7]); }
L_bd46b4:;
    { uint32_t ea = c->r[6] + 0xd55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd46dc; }
    { uint32_t ea = c->r[6] + 0xd20u; ST32(ea, c->r[8]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xd24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xd28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd2cu; ST32(ea, c->r[1]); }
L_bd46dc:;
    c->r[1] = 0xd34u;
    c->r[8] = c->r[6] + 0xd30u;
    { uint32_t ea = c->r[6] + 0xd59u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[9] = c->r[6] + c->r[1];
    c->r[1] = 0xd38u;
    c->v.s[4] = LD32(c->r[8]);
    c->r[7] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[6] + 0xd57u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[9]);
    c->v.s[0] = LD32(c->r[7]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_bd4718; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x1u;
    if (COND_EQ) { goto L_bd4a28; }
L_bd4718:;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_bd4780; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd4848; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xd3cu; ST32(ea, c->r[0]); }
    c->v.s[6] = LD32(c->r[6] + 480u);
    c->v.s[8] = LD32(c->r[6] + 484u);
    c->v.s[10] = LD32(c->r[6] + 488u);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[0] = c->v.f[0] - c->v.f[10];
    ST32(c->r[13] + 224u, c->v.s[4]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[12]);
    c->v.s[4] = LD32(c->r[2]);
    goto L_bd4818;
L_bd4780:;
    { uint32_t ea = c->r[6] + 0xd48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd4cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_bd47dc; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd47dc; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[2];
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[6] + 0xd30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xd34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xd38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xd3cu; ST32(ea, c->r[3]); }
L_bd47dc:;
    c->v.s[6] = LD32(c->r[6] + 480u);
    c->v.s[8] = LD32(c->r[6] + 484u);
    c->v.s[10] = LD32(c->r[6] + 488u);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[0] = c->v.f[0] - c->v.f[10];
    ST32(c->r[13] + 224u, c->v.s[4]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[12]);
    c->v.s[4] = LD32(c->r[7]);
L_bd4818:;
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0xa0u;
    c->r[2] = c->r[13] + 0xe0u;
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] - c->v.f[10];
    ST32(c->r[13] + 164u, c->v.s[2]);
    ST32(c->r[13] + 168u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    c->r[14] = 0xbd4848u; f_bf5f24(c);
L_bd4848:;
    { uint32_t ea = c->r[6] + 0xb90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bd49a8; }
    c->r[9] = c->r[6] + 0xba0u;
    c->r[0] = 0xba4u;
    c->v.s[0] = LD32(c->r[9]);
    c->r[8] = c->r[6] + c->r[0];
    c->r[14] = 0xbd4868u; f_15efde8(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = LD32(c->r[8]);
    c->r[14] = 0xbd4874u; f_15efde8(c);
    c->r[0] = 0xba8u;
    c->v.s[18] = c->v.s[0];
    c->r[7] = c->r[6] + c->r[0];
    c->v.s[0] = LD32(c->r[7]);
    c->r[14] = 0xbd4888u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = LD32(c->r[9]);
    c->r[14] = 0xbd4894u; f_15efdf4(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = LD32(c->r[8]);
    c->r[14] = 0xbd48a0u; f_15efdf4(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = LD32(c->r[7]);
    c->r[14] = 0xbd48acu; f_15efdf4(c);
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[24];
    c->v.s[6] = c->v.s[18] ^ 0x80000000u;
    c->v.f[8] = c->v.f[22] * c->v.f[0];
    c->r[7] = 0x0u;
    c->r[0] = 0x3f800000u;
    c->r[8] = c->r[13] + 0xa0u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    ST32(c->r[13] + 224u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[6]);
    c->v.f[6] = c->v.f[18] * c->v.f[20];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[20]);
    ST32(c->r[13] + 240u, c->v.s[4]);
    c->v.f[4] = c->v.f[16] * c->v.f[24];
    ST32(c->r[13] + 244u, c->v.s[8]);
    ST32(c->r[13] + 248u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[22];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 256u, c->v.s[2]);
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    ST32(c->r[13] + 260u, c->v.s[4]);
    ST32(c->r[13] + 264u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[6] + 0x34cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xbd4948u; f_bf5630(c);
    c->r[9] = c->r[13] + 0x60u;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[8];
    c->r[0] = c->r[9];
    c->r[14] = 0xbd495cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_bd4bfc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xbd497cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbd4998u: goto L_bd4998; case 0xbd4b90u: goto L_bd4b90; case 0xbd4ba0u: goto L_bd4ba0; case 0xbd4bb0u: goto L_bd4bb0; case 0xbd4bc0u: goto L_bd4bc0; case 0xbd4bd0u: goto L_bd4bd0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd4998:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4be8;
L_bd49a8:;
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4d3c;
L_bd4a28:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    c->r[1] = 0x260u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[6] + 480u);
    c->v.s[2] = LD32(c->r[6] + 484u);
    c->v.s[4] = LD32(c->r[6] + 488u);
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    c->r[1] = c->r[13] + 0xe0u;
    c->v.s[6] = LD32(c->r[0] + 480u);
    c->v.s[8] = LD32(c->r[0] + 484u);
    c->v.s[10] = LD32(c->r[0] + 488u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] - c->v.f[4];
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    c->r[14] = 0xbd4aa4u; f_bf5da8(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.s[0] = LD32(c->r[6] + 480u);
    c->v.s[2] = LD32(c->r[6] + 484u);
    c->v.s[4] = LD32(c->r[6] + 488u);
    c->v.s[10] = LD32(c->r[13] + 160u);
    c->v.s[12] = LD32(c->r[13] + 164u);
    c->v.s[14] = LD32(c->r[13] + 168u);
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[10]);
    c->v.s[1] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[1] - c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[14];
    c->v.f[20] = c->v.f[12] * c->v.f[4];
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[2] * c->v.f[14]);
    c->v.f[18] = c->v.f[2] * c->v.f[10];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[2] = c->v.f[16] * c->v.f[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd4b24; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd4b1cu; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd4b24:;
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[6] = LD32(c->r[6] + 480u);
    c->v.s[8] = LD32(c->r[6] + 484u);
    c->v.s[10] = LD32(c->r[6] + 488u);
    c->v.s[12] = LD32(c->r[1]);
    c->v.s[14] = 0x42c80000u;
    c->v.s[1] = 0x3f000000u;
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = LD32(c->r[10]);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    c->v.f[6] = c->v.f[8] + c->v.f[12];
    c->v.f[2] = c->v.f[10] + c->v.f[2];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[8], c->v.s[4]);
    ST32(c->r[9], c->v.s[6]);
    ST32(c->r[7], c->v.s[2]);
    { uint32_t ea = c->r[6] + 0xd3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_bd4848;
L_bd4b90:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4be8;
L_bd4ba0:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4be8;
L_bd4bb0:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4bdc;
L_bd4bc0:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4bdc;
L_bd4bd0:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd4bdc:;
    c->r[0] = c->r[0] ^ 0x80000000u;
    c->r[1] = c->r[1] ^ 0x80000000u;
    c->r[2] = c->r[2] ^ 0x80000000u;
L_bd4be8:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
L_bd4bfc:;
    { uint32_t ea = c->r[6] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_bd4cac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xbd4c14u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbd4c30u: goto L_bd4c30; case 0xbd4c40u: goto L_bd4c40; case 0xbd4c50u: goto L_bd4c50; case 0xbd4c60u: goto L_bd4c60; case 0xbd4c70u: goto L_bd4c70; case 0xbd4c80u: goto L_bd4c80; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd4c30:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4c98;
L_bd4c40:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4c98;
L_bd4c50:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4c98;
L_bd4c60:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4c8c;
L_bd4c70:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd4c8c;
L_bd4c80:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd4c8c:;
    c->r[0] = c->r[0] ^ 0x80000000u;
    c->r[1] = c->r[1] ^ 0x80000000u;
    c->r[2] = c->r[2] ^ 0x80000000u;
L_bd4c98:;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_bd4cac:;
    c->r[3] = c->r[9] + 0x30u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x50u;
    c->r[0] = c->r[9];
    c->r[14] = 0xbd4cc0u; f_bf5f24(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd4d3c:;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xd56u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd4ddc; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x260u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x3c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xacu; ST32(ea, c->r[0]); }
L_bd4ddc:;
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x260u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x204u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x210u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x214u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x218u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x21cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x220u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x224u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x228u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x22cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xb3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd4ec4; }
    { uint32_t ea = c->r[6] + 0xb88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd4ec4; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0xe0u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xbd4e98u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_bd4eb4; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_bd4ec4; }
    c->r[0] = 0x4u;
    goto L_bd4eb8;
L_bd4eb4:;
    c->r[0] = 0x5u;
L_bd4eb8:;
    { uint32_t ea = c->r[6] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[6] + 0xc4u; ST32(ea, c->r[0]); }
L_bd4ec4:;
    { uint32_t ea = c->r[6] + 0xd20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[13] + 336u);
    c->v.s[2] = LD32(c->r[13] + 340u);
    c->v.s[4] = LD32(c->r[13] + 344u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->v.s[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xd24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    c->v.s[8] = c->r[2];
    c->r[2] = 0xe64cbcu;
    { uint32_t ea = c->r[6] + 0xd28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 80u, c->v.s[0]);
    { uint32_t ea = 0xbd4f14u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[6] = c->r[3];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[6] - c->v.f[4];
    ST32(c->r[13] + 84u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x180u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0xb20u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_bd5064; }
    c->r[1] = 0xb2cu;
    c->r[2] = 0xb24u;
    c->v.s[6] = LD32(c->r[6] + 832u);
    c->r[3] = 0xb28u;
    c->r[7] = 0xb34u;
    c->r[14] = c->r[6] + c->r[1];
    c->r[1] = 0xb38u;
    c->r[8] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[6] + c->r[3];
    c->r[7] = c->r[6] + c->r[7];
    c->r[1] = c->r[6] + c->r[1];
    c->v.s[4] = LD32(c->r[14]);
    c->v.s[1] = LD32(c->r[3]);
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[8]);
    c->r[3] = c->r[13] + 0x60u;
    c->v.s[3] = LD32(c->r[1]);
    c->r[1] = c->r[6] + 0xb30u;
    c->v.s[8] = LD32(c->r[1]);
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[2] + 0x84u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0xb80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xe0u;
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[5] = c->v.f[6] * c->v.f[8];
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = c->r[13] + 0x50u;
    if (COND_EQ) { c->r[0] = c->r[6] + 0xb0u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->pc = c->r[12]; c->r[14] = 0xbd505cu; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x180u; ST8(ea, c->r[0]); }
    goto L_bd507c;
L_bd5064:;
    c->r[0] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[0] + 0x30u;
    c->r[0] = c->r[13] + 0xe0u;
    c->r[14] = 0xbd507cu; f_bf5da8(c);
L_bd507c:;
    { uint32_t ea = c->r[6] + 0xd55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd50a8; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xd28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xd2cu; ST32(ea, c->r[0]); }
L_bd50a8:;
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_bd50f4; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_bd5120; }
    c->r[1] = c->r[6] + 0x8c0u;
    c->r[0] = c->r[13] + 0x50u;
    c->r[2] = c->r[6] + 0x400u;
    c->r[3] = c->r[6] + 0x660u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xbd50f0u; f_bd6804(c);
    goto L_bd51c4;
L_bd50f4:;
    c->r[0] = c->r[13] + 0x50u;
    c->r[2] = c->r[6] + 0x400u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xbd511cu; f_bd6268(c);
    goto L_bd51c4;
L_bd5120:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_bd51c4; }
    c->r[0] = c->r[6] + 0x1b0u;
    c->r[1] = 0x0u;
L_bd5130:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x260u;
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_bd5130; }
L_bd51c4:;
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    c->r[14] = 0xbd51d8u; f_bd73d8(c);
    c->r[0] = c->r[6] + 0x350u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0xbd51e8u; f_bd7b64(c);
L_bd51e8:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bd51fc(Cpu *restrict c) {
    FN_ENTER(0xbd51fcu);
L_bd51fc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x158u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_bd6184; }
    c->r[0] = c->r[1] + 0x3bcu;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->v.s[24] = 0x34000000u;
    c->v.s[22] = 0x3f800000u;
    c->r[8] = c->r[3] - 0x1u;
    c->r[4] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x3cu;
    c->r[0] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe6495cu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xbd5280u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_bd5280:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1acu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bd6248; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 5);
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[10] + 0x220u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_bd6224; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[8], c->r[7]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[2] + c->r[4]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    if (COND_LT) { goto L_bd5a54; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0xd5au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd5398; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bd53b4; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->v.s[26] = LD32(c->r[7] + 112u);
    c->v.s[28] = LD32(c->r[7] + 116u);
    c->v.s[30] = LD32(c->r[7] + 120u);
    goto L_bd5450;
L_bd5398:;
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_bd58f0; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    c->r[0] = c->r[0] + 0x10u;
    goto L_bd5900;
L_bd53b4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbd53c4u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[26] = c->v.s[22];
    c->v.s[28] = c->v.s[22];
    c->v.s[30] = c->v.s[22];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
L_bd5450:;
    c->v.s[2] = LD32(c->r[7] + 100u);
    c->v.s[4] = LD32(c->r[7] + 104u);
    c->v.s[0] = LD32(c->r[7] + 96u);
    c->v.s[6] = LD32(c->r[7] + 108u);
    c->r[0] = 0x0u;
    c->r[9] = 0x0u;
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[22] - c->v.f[14];
    ST32(c->r[13] + 48u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 52u, c->v.s[7]);
    ST32(c->r[13] + 56u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 64u, c->v.s[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[22] - c->v.f[4];
    c->v.f[0] = c->v.f[22] - c->v.f[0];
    ST32(c->r[13] + 68u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    ST32(c->r[13] + 72u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 80u, c->v.s[4]);
    ST32(c->r[13] + 84u, c->v.s[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    c->v.s[0] = c->r[6];
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[3];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.s[2] = c->r[2];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5550; }
    c->r[14] = 0xbd554cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bd5550:;
    c->v.s[0] = LD32(c->r[13] + 132u);
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[6] = LD32(c->r[13] + 140u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd558c; }
    c->r[14] = 0xbd5588u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_bd558c:;
    c->v.s[0] = LD32(c->r[13] + 148u);
    c->v.s[2] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 156u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[20] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd55c4; }
    c->r[14] = 0xbd55c0u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_bd55c4:;
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.s[6] = LD32(c->r[13] + 124u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd55fc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd55fcu; f_15efddc(c);
L_bd55fc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd5620; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd5654;
L_bd5620:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 116u);
    c->v.s[6] = LD32(c->r[13] + 120u);
    c->v.s[8] = LD32(c->r[13] + 124u);
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd5654:;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[6] = LD32(c->r[13] + 140u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd569c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd569cu; f_15efddc(c);
L_bd569c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd56bc; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd56f0;
L_bd56bc:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.s[8] = LD32(c->r[13] + 140u);
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd56f0:;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 156u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5738; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd5738u; f_15efddc(c);
L_bd5738:;
    c->v.f[2] = c->v.f[30] * c->v.f[20];
    c->v.f[4] = c->v.f[28] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[16];
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd5764; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd5798;
L_bd5764:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[8] = LD32(c->r[13] + 144u);
    c->v.s[10] = LD32(c->r[13] + 148u);
    c->v.s[12] = LD32(c->r[13] + 152u);
    c->v.s[14] = LD32(c->r[13] + 156u);
    c->v.f[12] = c->v.f[0] * c->v.f[12];
    c->v.f[10] = c->v.f[0] * c->v.f[10];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->r[0] = c->v.s[12];
    c->r[1] = c->v.s[10];
    c->r[2] = c->v.s[8];
    c->r[3] = c->v.s[0];
L_bd5798:;
    c->v.s[0] = LD32(c->r[13] + 96u);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x110u;
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 100u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 104u);
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 104u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13] + 60u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[13] + 72u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[13] + 76u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 88u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 92u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 92u, c->v.s[0]);
    c->r[14] = 0xbd586cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_bd5a54;
L_bd58f0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbd5900u; rt_dispatch(c);
L_bd5900:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[7] + 100u);
    c->v.s[4] = LD32(c->r[7] + 104u);
    c->v.s[0] = LD32(c->r[7] + 96u);
    c->v.s[6] = LD32(c->r[7] + 108u);
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[4];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[22] - c->v.f[14];
    ST32(c->r[7] + 16u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] + c->v.f[0];
    ST32(c->r[7] + 20u, c->v.s[7]);
    ST32(c->r[7] + 24u, c->v.s[9]);
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 32u, c->v.s[1]);
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[4] = c->v.f[22] - c->v.f[4];
    c->v.f[0] = c->v.f[22] - c->v.f[0];
    ST32(c->r[7] + 36u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    ST32(c->r[7] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 48u, c->v.s[4]);
    ST32(c->r[7] + 52u, c->v.s[2]);
    ST32(c->r[7] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[7] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x10u;
    c->r[14] = 0xbd5a54u; f_21ebe8(c);
L_bd5a54:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_bd5b1c; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbd5a6cu + 0x8u;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbd5a8cu: goto L_bd5a8c; case 0xbd5aa0u: goto L_bd5aa0; case 0xbd5ab4u: goto L_bd5ab4; case 0xbd5ac8u: goto L_bd5ac8; case 0xbd5adcu: goto L_bd5adc; case 0xbd5af0u: goto L_bd5af0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd5a8c:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5b0c;
L_bd5aa0:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5b0c;
L_bd5ab4:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5b0c;
L_bd5ac8:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5b00;
L_bd5adc:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5b00;
L_bd5af0:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd5b00:;
    c->r[0] = c->r[0] ^ 0x80000000u;
    c->r[1] = c->r[1] ^ 0x80000000u;
    c->r[2] = c->r[2] ^ 0x80000000u;
L_bd5b0c:;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[9]); }
L_bd5b1c:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_bd5be4; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbd5b34u + 0x8u;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xbd5b54u: goto L_bd5b54; case 0xbd5b68u: goto L_bd5b68; case 0xbd5b7cu: goto L_bd5b7c; case 0xbd5b90u: goto L_bd5b90; case 0xbd5ba4u: goto L_bd5ba4; case 0xbd5bb8u: goto L_bd5bb8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd5b54:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5bd4;
L_bd5b68:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5bd4;
L_bd5b7c:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5bd4;
L_bd5b90:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5bc8;
L_bd5ba4:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd5bc8;
L_bd5bb8:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd5bc8:;
    c->r[0] = c->r[0] ^ 0x80000000u;
    c->r[1] = c->r[1] ^ 0x80000000u;
    c->r[2] = c->r[2] ^ 0x80000000u;
L_bd5bd4:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[9]); }
L_bd5be4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd5ebc; }
    c->v.s[0] = LD32(c->r[13] + 196u);
    c->v.s[2] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5c24; }
    c->r[14] = 0xbd5c20u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5c24:;
    ST32(c->r[10] + 416u, c->v.s[2]);
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 20u);
    c->v.s[2] = LD32(c->r[0] + 16u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    c->v.s[6] = LD32(c->r[0] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5c64; }
    c->r[14] = 0xbd5c60u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5c64:;
    ST32(c->r[10] + 400u, c->v.s[2]);
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.s[2] = LD32(c->r[0] + 32u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = LD32(c->r[0] + 44u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5ca4; }
    c->r[14] = 0xbd5ca0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5ca4:;
    ST32(c->r[10] + 404u, c->v.s[2]);
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 52u);
    c->v.s[2] = LD32(c->r[0] + 48u);
    c->v.s[4] = LD32(c->r[0] + 56u);
    c->v.s[6] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5ce4; }
    c->r[14] = 0xbd5ce0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5ce4:;
    ST32(c->r[10] + 408u, c->v.s[2]);
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[2]); }
    c->v.s[0] = c->r[2];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[3]); }
    c->v.s[2] = c->r[3];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[7]); }
    c->v.s[2] = c->r[7];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    if (COND_VC) { goto L_bd5da4; }
    c->r[14] = 0xbd5da0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5da4:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.s[8] = LD32(c->r[13] + 220u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    ST32(c->r[13] + 208u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[13] + 212u, c->v.s[4]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[13] + 228u);
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.s[6] = LD32(c->r[13] + 236u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5e14; }
    c->r[14] = 0xbd5e10u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5e14:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.s[8] = LD32(c->r[13] + 236u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    ST32(c->r[13] + 224u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[0]);
    ST32(c->r[13] + 236u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[13] + 244u);
    c->v.s[2] = LD32(c->r[13] + 240u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 252u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd5e80; }
    c->r[14] = 0xbd5e7cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd5e80:;
    c->v.f[2] = c->v.f[22] / c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[4] = LD32(c->r[13] + 244u);
    c->v.s[6] = LD32(c->r[13] + 248u);
    c->v.s[8] = LD32(c->r[13] + 252u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    ST32(c->r[13] + 240u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[13] + 244u, c->v.s[4]);
    ST32(c->r[13] + 248u, c->v.s[0]);
    c->r[0] = c->v.s[2];
    goto L_bd5f68;
L_bd5ebc:;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[10] + 0x1a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x19cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd5f68:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_bd5fd0; }
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[10] - 544u);
    c->v.s[2] = LD32(c->r[10] - 540u);
    c->v.s[4] = LD32(c->r[10] - 536u);
    c->v.s[6] = LD32(c->r[10] - 592u);
    c->v.s[8] = LD32(c->r[10] - 588u);
    c->v.s[10] = LD32(c->r[10] - 584u);
    c->v.s[12] = LD32(c->r[0] + 64u);
    c->v.s[14] = LD32(c->r[0] + 68u);
    c->v.s[1] = LD32(c->r[0] + 72u);
    c->v.f[14] = c->v.f[14] - c->v.f[2];
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    c->v.f[1] = c->v.f[1] - c->v.f[4];
    c->v.f[14] = c->v.f[14] * c->v.f[8];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[14]);
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
    goto L_bd5fe0;
L_bd5fd0:;
    { uint32_t ea = c->r[10] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd5fe0:;
    c->r[6] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[5] = 0x3f800000u;
    c->r[0] = c->r[10] + 0x10u;
    c->r[1] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0xb0u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xbd600cu; f_bf5f24(c);
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    c->v.s[1] = c->r[2];
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    c->v.s[14] = c->r[3];
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[7]); }
    c->v.s[2] = c->r[7];
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[10] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->v.s[10] = LD32(c->r[10] + 68u);
    c->v.s[8] = LD32(c->r[10] + 64u);
    c->v.s[12] = LD32(c->r[10] + 72u);
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.s[4] = c->r[7];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[10] = c->r[1];
    c->v.s[14] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xd0u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[12]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 164u, c->v.s[2]);
    ST32(c->r[13] + 168u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[5]); }
    c->r[14] = 0xbd60e8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x260u;
    { uint32_t ea = c->r[10] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x174u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { goto L_bd5280; }
    goto L_bd6188;
L_bd6184:;
    c->r[8] = c->r[3] - 0x1u;
L_bd6188:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x34000000u;
    c->r[4] = ~0x0u;
    c->r[5] = c->r[0] + 0x1a4u;
L_bd6198:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_GE) { goto L_bd622c; }
    c->v.s[0] = LD32(c->r[5] - 356u);
    c->v.s[8] = LD32(c->r[5] + 252u);
    c->v.s[6] = LD32(c->r[5] - 352u);
    c->v.s[10] = LD32(c->r[5] + 256u);
    c->v.s[2] = LD32(c->r[5] - 348u);
    c->v.s[12] = LD32(c->r[5] + 260u);
    c->v.s[4] = LD32(c->r[5] - 344u);
    c->v.s[14] = LD32(c->r[5] + 264u);
    c->v.f[6] = c->v.f[10] - c->v.f[6];
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[2] = c->v.f[12] - c->v.f[2];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[0] = c->v.f[6] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd61fc; }
    c->r[14] = 0xbd61f8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd61fc:;
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->r[0] = c->r[5] + 0x260u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    ST32(c->r[5] + 160u, c->v.s[0]);
    c->r[5] = c->r[0];
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bd6198; }
L_bd6224:;
    c->r[0] = 0x0u;
    goto L_bd6250;
L_bd622c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x260u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x244u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    goto L_bd6250;
L_bd6248:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x220u; ST32(ea, c->r[0]); }
L_bd6250:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bd6268(Cpu *restrict c) {
    FN_ENTER(0xbd6268u);
L_bd6268:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x58u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[2];
    c->r[6] = c->r[1];
    c->r[10] = c->r[0];
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd62c0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd62c0u; f_15efddc(c);
L_bd62c0:;
    c->v.s[24] = LD32(c->r[4] + 580u);
    c->v.s[22] = LD32(c->r[6] + 580u);
    c->v.f[2] = c->v.f[22] + c->v.f[24];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bd62ec; }
    { uint32_t ea = c->r[10] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[10] + 0xc4u; ST32(ea, c->r[0]); }
    c->v.s[22] = LD32(c->r[6] + 580u);
    c->v.s[24] = LD32(c->r[4] + 580u);
L_bd62ec:;
    c->v.f[26] = c->v.f[0] * c->v.f[0];
    c->v.f[28] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[17] = c->v.f[24] * c->v.f[24];
    c->v.s[20] = 0x3f800000u;
    c->v.s[30] = 0xbf800000u;
    c->v.f[2] = c->v.f[26] + c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.f[2] = c->v.f[2] - c->v.f[17];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[20]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[21]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[0] = c->v.s[20];
    { float t0 = nftz(vmax_f(nftz(c->v.f[32]), nftz(c->v.f[30]))); float t1 = nftz(vmax_f(nftz(c->v.f[33]), nftz(c->v.f[31]))); c->v.f[18] = t0; c->v.f[19] = t1; }
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd633c; }
    c->r[14] = 0xbd6338u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bd633c:;
    c->v.f[0] = c->v.f[24] + c->v.f[24];
    c->v.f[2] = c->v.f[17] + c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.f[2] = c->v.f[2] - c->v.f[26];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = c->v.s[20];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[20]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[21]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[32]), nftz(c->v.f[30]))); float t1 = nftz(vmax_f(nftz(c->v.f[33]), nftz(c->v.f[31]))); c->v.f[22] = t0; c->v.f[23] = t1; }
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6378; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd6378u; f_15efddc(c);
L_bd6378:;
    { uint32_t ea = c->r[4] + 0x254u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x110u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd639c; }
    c->v.s[2] = c->v.s[16] ^ 0x80000000u;
    c->r[0] = 0x0u;
    ST32(c->r[1], c->v.s[18]);
    ST32(c->r[1] + 4u, c->v.s[2]);
    goto L_bd63ac;
L_bd639c:;
    ST32(c->r[1], c->v.s[18]);
    ST32(c->r[1] + 4u, c->v.s[16]);
    c->r[0] = 0x0u;
    c->v.s[16] = c->v.s[16] ^ 0x80000000u;
L_bd63ac:;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    ST32(c->r[6] + 288u, c->v.s[16]);
    ST32(c->r[6] + 292u, c->v.s[18]);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = c->v.s[22] ^ 0x80000000u;
    c->r[7] = c->r[4] + 0x110u;
    { uint32_t ea = c->r[6] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x254u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bd6414; }
    ST32(c->r[7], c->v.s[2]);
    ST32(c->r[7] + 4u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    goto L_bd6420;
L_bd6414:;
    c->v.s[4] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[7], c->v.s[2]);
    ST32(c->r[7] + 4u, c->v.s[4]);
L_bd6420:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[3] = 0x3f800000u;
    ST32(c->r[4] + 288u, c->v.s[0]);
    ST32(c->r[4] + 292u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x244u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[3]); }
    c->r[14] = 0xbd647cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[6] + 0x50u;
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xb3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd653c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[6] + 588u);
    c->v.s[1] = LD32(c->r[6] + 592u);
    { uint32_t ea = c->r[10] + 0xb84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0xb90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_bd65d0; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    goto L_bd65dc;
L_bd653c:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[8];
    c->r[14] = 0xbd654cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    goto L_bd67ec;
L_bd65d0:;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[6] + 0x10u;
L_bd65dc:;
    if (COND_EQ) { c->r[3] = c->r[6] + 0x230u; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->pc = c->r[5]; c->r[14] = 0xbd65ecu; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x249u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[8];
    c->r[14] = 0xbd6600u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[0]); c->r[7] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x204u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->v.s[16] = LD32(c->r[7] + 508u);
    c->v.s[18] = LD32(c->r[7] + 512u);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bd66a8; }
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { c->v.s[16] = 0x0u; }
    goto L_bd66b8;
L_bd66a8:;
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_bd66b8; }
    c->v.s[18] = 0x0u;
L_bd66b8:;
    { uint32_t ea = c->r[6] + 0x249u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_bd66d0; }
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_bd67b8; }
L_bd66d0:;
    c->v.s[8] = LD32(c->r[9] + 4u);
    c->v.s[14] = LD32(c->r[6] + 132u);
    c->v.s[6] = LD32(c->r[9]);
    c->v.s[12] = LD32(c->r[6] + 128u);
    c->v.s[10] = LD32(c->r[9] + 8u);
    c->v.s[1] = LD32(c->r[6] + 136u);
    c->v.s[2] = c->r[1];
    c->v.s[0] = c->r[0];
    c->v.s[4] = c->r[2];
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    c->v.f[22] = c->v.f[8] - c->v.f[2];
    c->v.f[2] = c->v.f[1] + c->v.f[10];
    c->v.f[26] = c->v.f[6] - c->v.f[0];
    c->v.f[24] = c->v.f[2] - c->v.f[4];
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6730; }
    c->r[14] = 0xbd672cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd6730:;
    c->v.f[0] = c->v.f[20] / c->v.f[2];
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[26] * c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[22];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    ST32(c->r[13] + 16u, c->v.s[2]);
    ST32(c->r[13] + 20u, c->v.s[4]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[6] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->v.s[6] = c->r[1];
    { uint32_t ea = c->r[6] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = 0x34000000u;
    c->v.f[2] = fabsf(c->v.f[4]);
    c->v.f[2] = c->v.f[20] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_bd67ec; }
    c->r[3] = c->r[7] + 0x30u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[13] + 0x10u;
    c->r[0] = c->r[7];
    c->r[14] = 0xbd67b8u; f_bf5adc(c);
L_bd67b8:;
    { uint32_t ea = c->r[10] + 0xb84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[18];
    c->r[3] = 0x0u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[8];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[3] = c->r[4] + 0x230u; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[6]; c->r[14] = 0xbd67e8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x249u; ST8(ea, c->r[0]); }
L_bd67ec:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bd6804(Cpu *restrict c) {
    FN_ENTER(0xbd6804u);
L_bd6804:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x108u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    c->r[9] = c->r[0];
    c->v.s[0] = LD32(c->r[10] + 4u);
    c->v.s[2] = LD32(c->r[10]);
    c->v.s[4] = LD32(c->r[10] + 8u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6860; }
    c->r[14] = 0xbd685cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_bd6860:;
    c->v.s[0] = LD32(c->r[6] + 580u);
    c->v.s[2] = LD32(c->r[7] + 580u);
    c->v.s[4] = LD32(c->r[4] + 580u);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_bd6894; }
    { uint32_t ea = c->r[9] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9] + 0xc4u; ST32(ea, c->r[0]); }
L_bd6894:;
    c->v.s[2] = LD32(c->r[10] + 4u);
    c->v.s[8] = LD32(c->r[8] + 52u);
    c->v.s[0] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[8] + 48u);
    c->v.s[4] = LD32(c->r[10] + 8u);
    c->v.s[10] = LD32(c->r[8] + 56u);
    c->v.s[14] = LD32(c->r[5] + 68u);
    c->v.s[12] = LD32(c->r[5] + 64u);
    c->v.s[1] = LD32(c->r[5] + 72u);
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    c->v.f[2] = c->v.f[14] - c->v.f[2];
    c->v.f[6] = c->v.f[12] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[1] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd68f4; }
    c->r[14] = 0xbd68f0u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_bd68f4:;
    c->v.s[0] = LD32(c->r[4] + 580u);
    c->v.s[2] = LD32(c->r[6] + 580u);
    c->v.f[22] = c->v.f[18] * c->v.f[18];
    c->v.s[4] = LD32(c->r[7] + 580u);
    c->v.f[30] = c->v.f[18] + c->v.f[18];
    c->v.s[26] = 0x3f800000u;
    c->v.s[24] = 0xbf800000u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = c->v.s[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[4] = c->v.f[30] * c->v.f[4];
    c->v.f[0] = c->v.f[2] / c->v.f[4];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[26]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[27]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[0] = c->v.s[26];
    { float t0 = nftz(vmax_f(nftz(c->v.f[32]), nftz(c->v.f[24]))); float t1 = nftz(vmax_f(nftz(c->v.f[33]), nftz(c->v.f[25]))); c->v.f[28] = t0; c->v.f[29] = t1; }
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[20] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6950; }
    c->r[14] = 0xbd694cu; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_bd6950:;
    c->v.s[0] = LD32(c->r[6] + 580u);
    c->v.s[2] = LD32(c->r[7] + 580u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = LD32(c->r[4] + 580u);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[26]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[27]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[0] = c->v.s[26];
    { float t0 = nftz(vmax_f(nftz(c->v.f[32]), nftz(c->v.f[24]))); float t1 = nftz(vmax_f(nftz(c->v.f[33]), nftz(c->v.f[25]))); c->v.f[30] = t0; c->v.f[31] = t1; }
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[22] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6998; }
    c->r[14] = 0xbd6994u; f_15efddc(c);
    c->v.s[22] = c->v.s[0];
L_bd6998:;
    c->v.s[0] = c->v.s[20];
    c->v.s[1] = c->v.s[28];
    c->r[14] = 0xbd69a4u; f_15efd70(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->v.s[1] = c->v.s[30];
    c->r[14] = 0xbd69b4u; f_15efd70(c);
    { uint32_t ea = c->r[6] + 0x254u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x254u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_bd69e4; }
    c->v.s[2] = c->v.s[20] ^ 0x80000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[6] = c->v.s[0] ^ 0x80000000u;
    c->v.s[4] = COND_EQ ? c->v.s[20] : c->v.s[2];
    c->v.s[28] = COND_EQ ? c->v.s[0] : c->v.s[6];
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->v.s[20] = COND_EQ ? c->v.s[4] : c->v.s[2];
    goto L_bd69f0;
L_bd69e4:;
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[28] = COND_EQ ? c->v.s[0] : c->v.s[2];
L_bd69f0:;
    c->v.s[0] = LD32(c->r[7] + 64u);
    c->v.s[8] = LD32(c->r[5] + 64u);
    c->v.s[2] = LD32(c->r[7] + 68u);
    c->v.s[10] = LD32(c->r[5] + 68u);
    c->v.s[4] = LD32(c->r[7] + 72u);
    c->v.s[6] = LD32(c->r[7] + 76u);
    c->v.s[12] = LD32(c->r[5] + 72u);
    c->v.s[14] = LD32(c->r[5] + 76u);
    c->r[0] = 0xd0cu;
    c->r[1] = 0xd08u;
    c->r[2] = 0xd04u;
    c->r[3] = c->r[9] + 0xd00u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[1] = c->r[9] + c->r[1];
    c->r[2] = c->r[9] + c->r[2];
    c->v.s[19] = LD32(c->r[3]);
    c->v.s[22] = LD32(c->r[2]);
    c->v.s[30] = LD32(c->r[1]);
    c->v.s[17] = LD32(c->r[0]);
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x80u;
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    ST32(c->r[13] + 128u, c->v.s[0]);
    ST32(c->r[13] + 132u, c->v.s[2]);
    c->v.f[0] = c->v.f[12] - c->v.f[4];
    c->v.f[2] = c->v.f[14] - c->v.f[6];
    ST32(c->r[13] + 136u, c->v.s[0]);
    ST32(c->r[13] + 140u, c->v.s[2]);
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xe68194u;
    { uint32_t ea = 0xbd6a90u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0xc0u;
    c->r[14] = 0xbd6a94u; f_bf5adc(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[17]);
    c->v.f[10] = c->v.f[17] - c->v.f[30];
    c->v.s[4] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[14] = LD32(c->r[13] + 196u);
    c->v.s[2] = LD32(c->r[7] + 16u);
    c->v.s[12] = LD32(c->r[13] + 192u);
    c->v.s[5] = LD32(c->r[13] + 208u);
    c->v.s[6] = LD32(c->r[7] + 24u);
    c->v.s[3] = LD32(c->r[13] + 200u);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GE ? c->v.s[17] : c->v.s[18];
    c->v.f[1] = c->v.f[4] * c->v.f[14];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[12]);
    vfp_cmp_f(c, c->v.f[30], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GE ? c->v.s[30] : c->v.s[0];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[3]);
    c->v.f[0] = c->v.f[0] - c->v.f[30];
    c->v.f[30] = c->v.f[0] / c->v.f[10];
    c->v.f[0] = c->v.f[4] * c->v.f[8];
    c->v.s[8] = LD32(c->r[13] + 216u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[4] = c->v.f[26] - c->v.f[30];
    c->v.f[18] = c->v.f[19] * c->v.f[4];
    c->r[14] = 0xbd6b00u; f_15efd70(c);
    c->v.f[4] = c->v.f[28] - c->v.f[20];
    c->v.s[2] = c->v.s[26];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_bd6b48; }
    if (COND_VS) { goto L_bd6b48; }
    goto L_bd6b1c;
L_bd6b1c:;
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[2] = c->v.f[0] / c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd6b38; }
    c->v.s[2] = 0x0u;
    goto L_bd6b48;
L_bd6b38:;
    c->v.s[0] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[2] = c->v.s[0]; }
L_bd6b48:;
    c->v.s[0] = LD32(c->r[6] + 580u);
    c->v.s[4] = LD32(c->r[7] + 580u);
    c->v.s[6] = LD32(c->r[4] + 580u);
    c->v.s[8] = LD32(c->r[5] + 580u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[22] * c->v.f[30]);
    c->r[0] = c->r[9] + 0xd10u;
    c->v.s[22] = 0x0u;
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    c->v.s[4] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[9] + 0xd14u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd6b90; }
    c->v.s[0] = c->v.s[18];
    goto L_bd6bac;
L_bd6b90:;
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[22]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[23]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[0] = 0x3f800000u;
    { float t0 = nftz(vmin_f(nftz(c->v.f[32]), nftz(c->v.f[26]))); float t1 = nftz(vmin_f(nftz(c->v.f[33]), nftz(c->v.f[27]))); c->v.f[4] = t0; c->v.f[5] = t1; }
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[4]);
L_bd6bac:;
    c->v.s[16] = 0x3f800000u;
    c->v.f[2] = c->v.f[16] - c->v.f[0];
    c->v.f[18] = c->v.f[20] * c->v.f[2];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[28] * c->v.f[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xbd6bc4u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xbd6bd0u; f_15efdf4(c);
    c->v.s[2] = c->v.s[20] ^ 0x80000000u;
    c->r[5] = 0x0u;
    c->r[0] = 0x3f800000u;
    ST32(c->r[7] + 272u, c->v.s[0]);
    ST32(c->r[7] + 276u, c->v.s[20]);
    c->r[1] = c->r[7] + 0x110u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[7] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x11cu; ST32(ea, c->r[5]); }
    ST32(c->r[7] + 288u, c->v.s[2]);
    ST32(c->r[7] + 292u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x128u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x12cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x130u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x134u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x13cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x140u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x144u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x148u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[14] = 0xbd6c2cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x50u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x54u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7] + 0x58u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x80u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x8cu; ST32(ea, c->r[10]); }
    c->r[10] = c->r[7] + 0x50u;
    { uint32_t ea = c->r[9] + 0xb3cu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_bd6d18; }
    { uint32_t ea = c->r[9] + 0xb90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[7] + 588u);
    c->v.s[1] = LD32(c->r[7] + 592u);
    c->r[1] = c->r[10];
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[9] + 0xb84u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[2] = c->r[7] + 0x10u; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[5] = c->r[7] + 0x230u; }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[12]; c->r[14] = 0xbd6cf8u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x249u; ST8(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[7] + 128u);
    c->v.s[2] = LD32(c->r[7] + 132u);
    c->v.s[4] = LD32(c->r[7] + 136u);
    c->v.s[8] = LD32(c->r[7] + 84u);
    c->v.s[6] = LD32(c->r[7] + 88u);
    c->v.s[10] = LD32(c->r[7] + 80u);
    goto L_bd6d30;
L_bd6d18:;
    c->v.s[10] = c->r[12];
    c->v.s[8] = c->r[14];
    c->v.s[6] = c->r[8];
    c->v.s[0] = c->r[3];
    c->v.s[2] = c->r[0];
    c->v.s[4] = c->r[1];
L_bd6d30:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[7] + 580u);
    c->r[2] = c->r[13] + 0x70u;
    c->r[3] = c->r[13] + 0x60u;
    c->v.s[14] = LD32(c->r[0]);
    c->v.s[1] = LD32(c->r[0] + 4u);
    c->v.s[3] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[6]);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->v.s[5] = LD32(c->r[1] + 48u);
    c->v.s[7] = LD32(c->r[1] + 52u);
    c->v.s[9] = LD32(c->r[1] + 56u);
    c->v.f[10] = c->v.f[5] + c->v.f[14];
    c->v.f[8] = c->v.f[7] + c->v.f[1];
    c->v.f[6] = c->v.f[9] + c->v.f[3];
    c->v.f[10] = c->v.f[10] - c->v.f[0];
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    ST32(c->r[13] + 112u, c->v.s[10]);
    ST32(c->r[13] + 116u, c->v.s[8]);
    ST32(c->r[13] + 120u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[14] = 0xbd6dd8u; f_bf5adc(c);
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6e08; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd6e08u; f_15efddc(c);
L_bd6e08:;
    c->v.s[2] = LD32(c->r[6] + 580u);
    c->v.s[4] = LD32(c->r[4] + 580u);
    c->v.f[6] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[8] = c->v.f[2] * c->v.f[2];
    c->v.f[10] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[4] + c->v.f[4];
    c->v.f[12] = c->v.f[6] + c->v.f[8];
    c->v.f[8] = c->v.f[10] + c->v.f[8];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[10] = c->v.f[12] - c->v.f[10];
    c->v.f[4] = c->v.f[8] - c->v.f[6];
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[16]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[17]))); c->v.f[32] = t0; c->v.f[33] = t1; }
    c->v.s[0] = c->v.s[16];
    { float t0 = nftz(vmin_f(nftz(c->v.f[2]), nftz(c->v.f[16]))); float t1 = nftz(vmin_f(nftz(c->v.f[3]), nftz(c->v.f[17]))); c->v.f[34] = t0; c->v.f[35] = t1; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[32]), nftz(c->v.f[24]))); float t1 = nftz(vmax_f(nftz(c->v.f[33]), nftz(c->v.f[25]))); c->v.f[26] = t0; c->v.f[27] = t1; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[34]), nftz(c->v.f[24]))); float t1 = nftz(vmax_f(nftz(c->v.f[35]), nftz(c->v.f[25]))); c->v.f[20] = t0; c->v.f[21] = t1; }
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6e74; }
    c->r[14] = 0xbd6e70u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_bd6e74:;
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd6e90; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xbd6e90u; f_15efddc(c);
L_bd6e90:;
    { uint32_t ea = c->r[4] + 0x254u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x110u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd6f08; }
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    ST32(c->r[6] + 272u, c->v.s[26]);
    c->r[0] = 0x0u;
    c->r[2] = 0x3f800000u;
    ST32(c->r[6] + 276u, c->v.s[2]);
    c->v.s[2] = c->v.s[20] ^ 0x80000000u;
    { uint32_t ea = c->r[6] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x11cu; ST32(ea, c->r[0]); }
    ST32(c->r[6] + 288u, c->v.s[18]);
    ST32(c->r[6] + 292u, c->v.s[26]);
    { uint32_t ea = c->r[6] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14cu; ST32(ea, c->r[2]); }
    ST32(c->r[4] + 272u, c->v.s[2]);
    ST32(c->r[4] + 276u, c->v.s[0]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    goto L_bd6f64;
L_bd6f08:;
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    c->r[0] = 0x0u;
    ST32(c->r[6] + 272u, c->v.s[26]);
    ST32(c->r[6] + 276u, c->v.s[18]);
    c->v.s[4] = c->v.s[0] ^ 0x80000000u;
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[6] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x11cu; ST32(ea, c->r[0]); }
    ST32(c->r[6] + 288u, c->v.s[2]);
    c->v.s[2] = c->v.s[20] ^ 0x80000000u;
    ST32(c->r[6] + 292u, c->v.s[26]);
    { uint32_t ea = c->r[6] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14cu; ST32(ea, c->r[2]); }
    ST32(c->r[4] + 272u, c->v.s[2]);
    ST32(c->r[4] + 276u, c->v.s[4]);
L_bd6f64:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[2] = 0x3f800000u;
    ST32(c->r[4] + 288u, c->v.s[0]);
    ST32(c->r[4] + 292u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x244u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x80u;
    c->r[14] = 0xbd6fc4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4] + 0x110u;
    c->r[10] = c->r[6] + 0x50u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[14] = 0xbd705cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xb3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd70f4; }
    c->v.s[0] = LD32(c->r[6] + 588u);
    c->v.s[4] = LD32(c->r[6] + 592u);
    goto L_bd70fc;
L_bd70f4:;
    c->v.s[4] = 0x43340000u;
    c->v.s[0] = 0xc3340000u;
L_bd70fc:;
    { uint32_t ea = c->r[6] + 0x254u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd7128; }
    c->v.s[2] = 0x43340000u;
    vfp_cmp_f(c, c->v.f[22], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GE ? c->v.s[22] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { c->v.s[2] = c->v.s[4]; }
    goto L_bd7148;
L_bd7128:;
    c->v.s[2] = 0xc3340000u;
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    if (COND_GE) { goto L_bd7144; }
    c->v.s[2] = c->v.s[4];
    goto L_bd7148;
L_bd7144:;
    c->v.s[2] = 0x0u;
L_bd7148:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[1] = c->v.s[2];
    c->r[1] = c->r[10];
    c->r[3] = 0x0u;
    c->r[8] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[5]; c->r[14] = 0xbd716cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x249u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_bd7298; }
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xbd7188u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x20u;
    c->v.s[0] = LD32(c->r[6] + 128u);
    c->v.s[6] = LD32(c->r[13] + 112u);
    c->v.s[2] = LD32(c->r[6] + 132u);
    c->v.s[8] = LD32(c->r[13] + 116u);
    c->v.s[4] = LD32(c->r[6] + 136u);
    c->v.s[10] = LD32(c->r[13] + 120u);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[10];
    c->v.s[6] = c->r[1];
    c->v.s[8] = c->r[2];
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[13] + 0x60u;
    c->v.f[0] = c->v.f[0] - c->v.f[12];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] - c->v.f[8];
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xbd7294u; f_bf5adc(c);
    goto L_bd7328;
L_bd7298:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xbd72a8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_bd7328:;
    { uint32_t ea = c->r[9] + 0xb3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd7340; }
    c->v.s[0] = LD32(c->r[4] + 588u);
    c->v.s[2] = LD32(c->r[4] + 592u);
    goto L_bd7348;
L_bd7340:;
    c->v.s[2] = 0x43340000u;
    c->v.s[0] = 0xc3340000u;
L_bd7348:;
    { uint32_t ea = c->r[4] + 0x254u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd7378; }
    c->v.s[4] = 0x43340000u;
    vfp_cmp_f(c, c->v.f[22], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GE ? c->v.s[22] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_bd7390; }
    c->v.d[11] = c->v.d[1];
    goto L_bd7394;
L_bd7378:;
    c->v.s[4] = 0xc3340000u;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { c->v.d[11] = c->v.d[1]; }
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[4]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[5]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    goto L_bd7394;
L_bd7390:;
    c->v.d[11] = c->v.d[2];
L_bd7394:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->v.s[22];
    c->r[1] = c->r[8];
    c->r[2] = c->r[10];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[7]; c->r[14] = 0xbd73b4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x249u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_bd73d8(Cpu *restrict c) {
    FN_ENTER(0xbd73d8u);
L_bd73d8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xb8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_bd7478; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0xbd7424u; rt_dispatch(c);
    c->r[1] = c->r[0] + 0x38u;
    c->r[14] = c->r[0] + 0x2cu;
    c->r[2] = c->r[0] + 0x1cu;
    c->r[3] = c->r[0] + 0x14u;
    c->r[6] = c->r[0] + 0x10u;
    c->r[12] = c->r[0] + 0xcu;
    c->r[5] = c->r[0] + 0x8u;
    c->r[4] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x18u;
    goto L_bd74d8;
L_bd7478:;
    { uint32_t ea = c->r[1] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    c->r[1] = c->r[0] + 0x48u;
    c->r[14] = c->r[0] + 0x3cu;
    c->r[2] = c->r[0] + 0x2cu;
    c->r[3] = c->r[0] + 0x24u;
    c->r[6] = c->r[0] + 0x20u;
    c->r[12] = c->r[0] + 0x1cu;
    c->r[5] = c->r[0] + 0x18u;
    c->r[4] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x44u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x38u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x28u;
    c->r[0] = c->r[0] + 0x10u;
L_bd74d8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd78f4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[8];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_bd7b54; }
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_bd7560:;
    c->v.s[23] = c->r[9];
    c->v.s[21] = c->r[7];
    c->v.s[25] = c->r[10];
    c->v.s[0] = LD32(c->r[12]);
    c->v.s[18] = LD32(c->r[2]);
    c->v.s[20] = LD32(c->r[14]);
    c->v.f[22] = c->v.f[23] * c->v.f[23];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd75b0; }
    c->v.s[0] = c->v.s[22];
    c->r[7] = c->r[3];
    c->r[8] = c->r[1];
    c->r[14] = 0xbd75a8u; f_15efddc(c);
    c->r[1] = c->r[8];
    c->r[3] = c->r[7];
L_bd75b0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[27] = c->r[1];
    c->v.s[31] = c->r[5];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.s[29] = c->r[0];
    c->v.f[24] = c->v.f[29] * c->v.f[29];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[18] = sqrtf(c->v.f[24]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd75f8; }
    c->v.s[0] = c->v.s[24];
    c->r[5] = c->r[3];
    c->r[14] = 0xbd75f0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
    c->r[3] = c->r[5];
L_bd75f8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[19] = c->r[3];
    c->v.s[30] = c->r[6];
    c->v.s[17] = c->r[0];
    c->v.f[26] = c->v.f[17] * c->v.f[17];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[20] = sqrtf(c->v.f[26]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd7634; }
    c->v.s[0] = c->v.s[26];
    c->r[14] = 0xbd7630u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_bd7634:;
    c->v.f[0] = sqrtf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd764c; }
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xbd764cu; f_15efddc(c);
L_bd764c:;
    c->v.f[22] = c->v.f[16] / c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[24]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd7668; }
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0xbd7668u; f_15efddc(c);
L_bd7668:;
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.f[28] = c->v.f[23] * c->v.f[22];
    c->v.f[25] = c->v.f[25] * c->v.f[22];
    c->v.f[21] = c->v.f[21] * c->v.f[22];
    c->v.f[22] = sqrtf(c->v.f[26]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    c->v.f[24] = c->v.f[31] * c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[23] = c->v.f[27] * c->v.f[0];
    vfp_cmp_f(c, c->v.f[22], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd76a4; }
    c->v.s[0] = c->v.s[26];
    c->r[14] = 0xbd76a0u; f_15efddc(c);
    c->v.s[22] = c->v.s[0];
L_bd76a4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = c->r[13] + 0x70u;
    c->r[4] = c->r[0] + c->r[8];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4] + 0x150u;
    c->r[2] = c->r[4] + 0x50u;
    c->r[14] = 0xbd76c4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[16] / c->v.f[22];
    c->r[7] = 0x3f800000u;
    c->r[1] = c->r[4] + 0x90u;
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[19] * c->v.f[2];
    c->v.f[10] = c->v.f[17] * c->v.f[2];
    c->v.f[2] = c->v.f[30] * c->v.f[2];
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 48u, c->v.s[21]);
    ST32(c->r[13] + 64u, c->v.s[28]);
    ST32(c->r[13] + 80u, c->v.s[25]);
    ST32(c->r[13] + 52u, c->v.s[23]);
    ST32(c->r[13] + 68u, c->v.s[29]);
    ST32(c->r[13] + 84u, c->v.s[24]);
    ST32(c->r[13] + 56u, c->v.s[8]);
    ST32(c->r[13] + 72u, c->v.s[10]);
    ST32(c->r[13] + 88u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[0] * c->v.f[28];
    c->v.f[12] = c->v.f[0] * c->v.f[29];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[21]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.s[14] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[25]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[24]);
    c->v.s[4] = c->v.s[6] ^ 0x80000000u;
    c->v.s[2] = c->v.s[12] ^ 0x80000000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 96u, c->v.s[4]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[7]); }
    c->r[14] = 0xbd77f4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    c->v.s[4] = c->r[0];
    c->v.s[0] = LD32(c->r[13] + 164u);
    c->v.s[2] = LD32(c->r[13] + 168u);
    c->v.s[6] = LD32(c->r[13] + 16u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[7]); }
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[0] = c->v.f[0] / c->v.f[18];
    c->v.f[2] = c->v.f[2] / c->v.f[20];
    ST32(c->r[4] + 256u, c->v.s[4]);
    ST32(c->r[4] + 260u, c->v.s[0]);
    ST32(c->r[4] + 264u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->r[8] = c->r[8] + 0x260u;
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[0] + 0x230u;
    c->r[14] = c->r[0] + 0x25cu;
    c->r[2] = c->r[0] + 0x24cu;
    c->r[12] = c->r[0] + 0x23cu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x268u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x254u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x244u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x258u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x240u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10]; c->r[7] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_bd7560; }
    goto L_bd7b54;
L_bd78f4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_bd7b54; }
    c->r[2] = 0x0u;
L_bd7904:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[4] = c->r[0] + c->r[2];
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[4] + 0x150u;
    c->r[2] = c->r[4] + 0x50u;
    c->r[14] = 0xbd7928u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[9];
    c->v.s[8] = c->r[7];
    c->v.s[12] = c->r[8];
    c->v.s[1] = c->r[10];
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[1];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    c->v.f[4] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.s[10] = c->r[5];
    c->r[5] = 0x3f800000u;
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.s[12] = c->r[6];
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[14]);
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4] + 0x90u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[14]);
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 96u, c->v.s[2]);
    ST32(c->r[13] + 100u, c->v.s[4]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xbd7a78u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[2];
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = c->r[0] + 0x230u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x268u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x254u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x244u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x258u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x240u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10]; c->r[7] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    c->r[2] = c->r[2] + 0x260u;
    if (COND_NE) { goto L_bd7904; }
L_bd7b54:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
