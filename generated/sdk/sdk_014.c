#include "cpu.h"
#include "neon_rt.h"
void f_24f73cc(Cpu *c);
void f_283aa78(Cpu *c);
void f_283aad8(Cpu *c);
void f_283abec(Cpu *c);
void f_283ac04(Cpu *c);
void f_283b27c(Cpu *c);
void f_284286c(Cpu *c);
void f_2842878(Cpu *c);
void f_284289c(Cpu *c);
void f_28428a8(Cpu *c);
void f_28428e4(Cpu *c);
void f_28428f0(Cpu *c);
void f_2842944(Cpu *c);
void f_28429a4(Cpu *c);
void f_28429b0(Cpu *c);
void f_28429bc(Cpu *c);
void f_2842a04(Cpu *c);
void f_2842a10(Cpu *c);
void f_2842a28(Cpu *c);
void f_2842a70(Cpu *c);
void f_2842a7c(Cpu *c);
void f_2842a88(Cpu *c);
void f_2842a94(Cpu *c);
void f_2842aa0(Cpu *c);
void f_2842aac(Cpu *c);
void f_2842ab8(Cpu *c);
void f_2842ac4(Cpu *c);
void f_2842ad0(Cpu *c);
void f_2842adc(Cpu *c);
void f_2842ae8(Cpu *c);
void f_2842af4(Cpu *c);
void f_2842b00(Cpu *c);
void f_2842b0c(Cpu *c);
void f_24f1c80(Cpu *restrict c) {
    FN_ENTER(0x24f1c80u);
L_24f1c80:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x20cu;
    c->r[7] = c->r[0];
    c->r[10] = c->r[3];
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x76a280u;
    { uint32_t ea = 0x24f1cbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_24f1ce0; }
    c->r[0] = 0x86a0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[14] = 0x24f1cd0u; f_283b27c(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x76a260u;
    { uint32_t ea = 0x24f1ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
L_24f1ce0:;
    c->r[0] = 0x76a24cu;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = 0x24f1cf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_24f1d68; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LE) { goto L_24f1d68; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xfcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x10cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_24f1d74; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
L_24f1d4c:;
    (void)f_subs(c, c->r[0], sh_lsl(c->r[3], c->r[7]));
    if (COND_EQ) { goto L_24f1d7c; }
    c->r[5] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[7] = c->r[5];
    if (COND_LT) { goto L_24f1d4c; }
    goto L_24f1d80;
L_24f1d68:;
    c->r[0] = 0x76a1c8u;
    { uint32_t ea = 0x24f1d74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_24f1d98;
L_24f1d74:;
    c->r[5] = 0x0u;
    goto L_24f1d80;
L_24f1d7c:;
    c->r[5] = c->r[7];
L_24f1d80:;
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[3]); }
    if (COND_LE) { goto L_24f1da8; }
    c->r[0] = 0x76a1a0u;
    { uint32_t ea = 0x24f1d9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f1d98:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = ~0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_24f1da8:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0x98u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_24f1de8; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = clz32(c->r[3]);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] - 0x20u;
    c->r[2] = c->r[2] - 0x1cu;
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[2]); }
    goto L_24f1df8;
L_24f1de8:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[2]); }
L_24f1df8:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0xc830u;
    c->r[6] = 0x4fbu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x70000u;
    (void)f_subs(c, c->r[12], c->r[6]);
    if (COND_LT) { c->r[6] = c->r[12]; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f1e54; }
    (void)f_adds(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_24f1ed4; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 4);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 6);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    goto L_24f1ea8;
L_24f1e54:;
    (void)f_adds(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_24f1ed4; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[4] * c->r[0]; c->r[2] = r; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_GT) { { uint32_t r = c->r[4] * c->r[0] + c->r[3]; c->r[2] = r; } }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    c->r[0] = (c->r[0] << 3);
    c->r[2] = sdiv32(c->r[2], c->r[0]);
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[2] = c->r[2] - 0x1u; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LT) { c->r[2] = c->r[6]; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_LE) { c->r[2] = 0x2u; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[2]); }
L_24f1ea8:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x190u;
    c->r[2] = ~0x31u;
    c->r[0] = c->r[2] + sh_lsr(c->r[0], c->r[3]);
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x14u;
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[3] + (c->r[2] << 3);
    c->r[0] = c->r[4] - c->r[0] * c->r[2];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    goto L_24f1ee4;
L_24f1ed4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
L_24f1ee4:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f1f0c; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] - 0x88u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[11] - 0x98u; ST32(ea, c->r[0]); }
    c->r[14] = 0x24f1f08u; f_2842a70(c);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_24f1f0c:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = sh_lsl(c->r[5], c->r[0]);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[11] - 0xacu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[6] - c->r[0];
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_24f1f88; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f1f88; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[7] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[4] = 0x2u; }
    c->r[0] = (c->r[3] << 1) - c->r[0];
    (void)f_subs(c, c->r[4], (uint32_t)((int32_t)c->r[0] >> 6));
    if (COND_LE) { c->r[4] = (uint32_t)((int32_t)c->r[0] >> 6); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_GE) { goto L_24f1f88; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    c->r[14] = 0x24f1f7cu; f_2842a7c(c);
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[4]); }
L_24f1f88:;
    c->r[0] = 0x769f90u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = (c->r[8] << 2);
    c->r[5] = c->r[2] + c->r[9];
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x100u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x24f1facu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u - c->r[4];
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] & 0x3u;
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[11] - 0x104u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[6] * c->r[5] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - c->r[9];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[7] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = sdiv32(c->r[0], c->r[12]);
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_24f201c; }
    { uint32_t r = c->r[14] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_24f2028; }
    c->r[7] = 0x0u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_NE) { goto L_24f204c; }
    goto L_24f20a8;
L_24f201c:;
    c->r[7] = 0x0u;
    c->r[6] = 0x0u;
    goto L_24f20ac;
L_24f2028:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[3] = c->r[7];
    c->r[7] = c->r[7] & (uint32_t)((int32_t)c->r[7] >> 15);
    if (COND_LE) { c->r[3] = 0x0u; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_EQ) { goto L_24f20a8; }
L_24f204c:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[14] - c->r[5];
    c->r[4] = c->r[3];
    c->r[5] = c->r[0] + (c->r[5] << 1);
    c->r[5] = c->r[5] + 0x2u;
L_24f2060:;
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GE) { c->r[7] = c->r[3]; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    (void)f_subs(c, c->r[2], c->r[0]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    if (COND_GE) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[4]; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { c->r[3] = c->r[0]; }
    c->r[6] = f_subs(c, c->r[6], 0x2u);
    c->r[4] = c->r[3];
    if (COND_NE) { goto L_24f2060; }
L_24f20a8:;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
L_24f20ac:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[3] = c->r[9] + 0x400u;
    c->r[0] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[6]; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { goto L_24f2190; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_24f20f0; }
    { uint32_t r = c->r[14] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_24f20fc; }
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_NE) { goto L_24f2120; }
    goto L_24f217c;
L_24f20f0:;
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    goto L_24f2180;
L_24f20fc:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->r[0];
    c->r[1] = c->r[0] & (uint32_t)((int32_t)c->r[0] >> 15);
    if (COND_LE) { c->r[7] = 0x0u; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_EQ) { goto L_24f217c; }
L_24f2120:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[14] - c->r[5];
    c->r[4] = c->r[7];
    c->r[0] = c->r[0] + (c->r[5] << 1);
    c->r[5] = c->r[0] + 0x2u;
L_24f2134:;
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_GE) { c->r[1] = c->r[7]; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[0], c->r[2]);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    if (COND_GE) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_GT) { c->r[7] = c->r[4]; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LE) { c->r[7] = c->r[2]; }
    c->r[6] = f_subs(c, c->r[6], 0x2u);
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_24f2134; }
L_24f217c:;
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
L_24f2180:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[7]; }
L_24f2190:;
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] * c->r[8]; c->r[10] = r; }
    { uint32_t r = c->r[9] * c->r[0]; c->r[0] = r; }
    c->r[7] = sdiv32(c->r[0], c->r[12]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_24f21c8; }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_24f21e0; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    goto L_24f2200;
L_24f21c8:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
    goto L_24f2278;
L_24f21e0:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    c->r[0] = c->r[0] + (c->r[14] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[0];
    c->r[2] = c->r[0] & (uint32_t)((int32_t)c->r[0] >> 15);
    if (COND_LE) { c->r[3] = 0x0u; }
L_24f2200:;
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_24f226c; }
    c->r[7] = c->r[7] - c->r[6];
    c->r[0] = c->r[6] + c->r[14];
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6] + (c->r[0] << 1);
    c->r[6] = c->r[3];
    c->r[0] = c->r[0] + 0x2u;
L_24f2224:;
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_GE) { c->r[2] = c->r[3]; }
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    if (COND_GE) { c->r[2] = c->r[4]; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[6]; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_LE) { c->r[3] = c->r[4]; }
    c->r[7] = f_subs(c, c->r[7], 0x2u);
    c->r[6] = c->r[3];
    if (COND_NE) { goto L_24f2224; }
L_24f226c:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
L_24f2278:;
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[5] + (c->r[10] << 2);
    c->r[4] = 0x0u - c->r[2];
    (void)f_subs(c, c->r[0], c->r[4]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    if (COND_GT) { c->r[4] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    c->r[3] = (c->r[7] << 3);
    { uint32_t ea = c->r[5] + 0xb4u; ST32(ea, c->r[4]); }
    if (COND_GT) { c->r[4] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f22ec; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[1] = 0x0u;
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[6];
    c->r[14] = 0x24f22d4u; f_28428e4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_24f22f4; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_24f2368;
L_24f22ec:;
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_24f236c;
L_24f22f4:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_24f2334; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + 0x2u;
    c->r[0] = c->r[6];
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_LT) { c->r[4] = c->r[7]; }
    c->r[1] = c->r[4];
    c->r[14] = 0x24f231cu; f_2842a7c(c);
    c->r[0] = (c->r[4] << 3);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
L_24f2334:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x20u - c->r[0];
    c->r[1] = clz32(c->r[1]);
    c->r[2] = c->r[2] + (c->r[7] << 3);
    c->r[1] = c->r[2] - c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[7] << 3);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
L_24f2368:;
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
L_24f236c:;
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[11] - 0x9cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x108u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xc8u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] << 2);
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_24f2558; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = (c->r[8] << 1);
    c->r[0] = c->r[0] + (c->r[9] << 2);
    c->r[9] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[6] = (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[6]); }
L_24f23cc:;
    c->r[0] = c->r[5] + (c->r[1] << 2);
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[2]); }
    if (COND_EQ) { { uint32_t ea = c->r[14] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_24f2424; }
    c->r[0] = c->r[2];
    c->r[1] = c->r[9];
    c->r[2] = c->r[12];
L_24f2404:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + c->r[8]; c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[7] = (c->r[3] << 12) - c->r[4];
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); c->r[1] = c->r[1] + 0x4u; }
    c->r[4] = (uint32_t)((int32_t)c->r[3] >> 3);
    if (COND_NE) { goto L_24f2404; }
    goto L_24f2528;
L_24f2424:;
    c->r[5] = sdiv32(c->r[12], c->r[7]);
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + (c->r[1] << 2);
    if (COND_EQ) { goto L_24f2454; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x24f2454u; f_283abec(c);
L_24f2454:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_24f24f0; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f2480; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_24f2480:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_24f24f0; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5] - c->r[1];
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t r = c->r[3] * c->r[1]; c->r[2] = r; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[12] = c->r[5] + (c->r[2] << 1);
    { uint32_t r = c->r[3] * c->r[6]; c->r[2] = r; }
    c->r[3] = (c->r[1] << 2);
    { uint32_t r = c->r[7] * c->r[6]; c->r[1] = r; }
    c->r[7] = (c->r[7] << 3);
    c->r[14] = c->r[5] + (c->r[2] << 1);
    c->r[6] = (c->r[1] << 2);
    c->r[1] = 0x0u;
    c->r[5] = c->r[9];
L_24f24c4:;
    c->r[2] = c->r[12] + c->r[1];
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[14] + c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[5]; ST32(ea, c->r[2]); }
    c->r[5] = c->r[5] + c->r[7];
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    if (COND_NE) { goto L_24f24c4; }
L_24f24f0:;
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
L_24f2500:;
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] << 16);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 4) - c->r[4];
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    { uint32_t ea = c->r[9] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = (uint32_t)((int32_t)c->r[1] >> 3);
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_NE) { goto L_24f2500; }
L_24f2528:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = c->r[2] + 0x2u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { goto L_24f23cc; }
    goto L_24f2680;
L_24f2558:;
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[0] + (c->r[9] << 2);
    c->r[9] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[0]); }
L_24f257c:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[14] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_24f265c; }
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t r = c->r[8] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = sdiv32(c->r[0], c->r[6]);
    if (COND_EQ) { goto L_24f25c8; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x24f25c4u; f_283abec(c);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
L_24f25c8:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_24f265c; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f25f0; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_24f25f0:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_24f265c; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[3] + 0x1u;
    c->r[0] = c->r[5] - c->r[3];
    c->r[5] = (c->r[6] << 3);
    { uint32_t r = c->r[2] * c->r[3]; c->r[1] = r; }
    { uint32_t r = c->r[2] * c->r[7]; c->r[2] = r; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[6] * c->r[7]; c->r[7] = r; }
    c->r[6] = 0x0u;
    c->r[12] = c->r[10] + (c->r[1] << 1);
    c->r[2] = c->r[10] + (c->r[2] << 1);
    c->r[4] = (c->r[7] << 2);
    c->r[3] = (c->r[3] << 2);
    c->r[7] = c->r[9];
L_24f2630:;
    c->r[1] = c->r[12] + c->r[6];
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + c->r[7]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + c->r[1];
    if (COND_NE) { goto L_24f2630; }
L_24f265c:;
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] + 0x2u;
    c->r[9] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_24f257c; }
L_24f2680:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = sh_lsl(c->r[0], c->r[1]);
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_24f26cc; }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f26cc; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
    { uint32_t r = c->r[2] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_24f2740; }
    goto L_24f26f8;
L_24f26cc:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
    { uint32_t r = c->r[2] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_24f2740; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_24f2740; }
L_24f26f8:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f2740; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_LT) { goto L_24f2740; }
    (void)f_subs(c, c->r[1], 0x3u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_24f273c; }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1392u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[0] = 0x1u; }
L_24f273c:;
    c->r[6] = c->r[0] ^ 0x1u;
L_24f2740:;
    c->r[0] = c->r[7] + (c->r[3] << 1);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[10] = c->r[12] + 0x400u;
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = 0x0u;
    c->r[14] = c->r[11] - 0x54u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[3] * c->r[9]; c->r[7] = r; }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[11] - 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7697a4u;
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + (c->r[7] << 2); c->r[7] = v; }
    c->r[6] = c->r[3] + 0xc8u;
    { uint32_t ea = 0x24f2798u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0x3u;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[10] * c->r[2] + c->r[1]; c->r[2] = r; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[10] << 2);
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 2);
    c->r[5] = c->r[1] + c->r[0];
    c->r[0] = c->r[7] + c->r[12];
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[0]); }
L_24f27e8:;
    { uint32_t ea = c->r[14] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6];
    c->r[2] = 0x1000u;
    c->r[0] = c->r[7];
    c->r[14] = 0x24f27fcu; f_283ac04(c);
    c->r[0] = c->r[7] + 0x1000u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[8];
    c->r[14] = 0x24f280cu; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[14] = c->r[11] - 0x54u;
    c->r[6] = c->r[6] + 0x1000u;
    (void)f_subs(c, c->r[4], c->r[9]);
    c->r[5] = c->r[5] + c->r[0];
    if (COND_LT) { goto L_24f27e8; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f2934; }
    c->r[0] = 0x7696f4u;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x24f2848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[5] = c->r[1] + c->r[2];
    c->r[1] = c->r[10];
    c->r[2] = c->r[10];
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[1] = c->r[5] + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x54u;
    c->r[14] = 0x24f2878u; f_28429b0(c);
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[11] - 0x58u;
    c->r[1] = c->r[5];
    c->r[3] = 0x3d3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x400u;
    c->r[2] = c->r[6];
    c->r[14] = 0x24f28a0u; f_28429bc(c);
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[9] = c->r[2];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = ea; c->r[2] = v; }
    c->r[0] = 0x400u - c->r[0];
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[1] = 0x400u;
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x24f28e4u; f_2842a88(c);
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x3ffu;
    c->r[14] = c->r[11] - 0x54u;
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[1] = 0x599au;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    if (COND_GE) { c->r[2] = 0x3feu; }
    if (COND_GE) { { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[2]); } }
    c->r[3] = (c->r[0] << 1);
    c->r[1] = (c->r[0] >> 15);
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_GT) { c->r[1] = (uint32_t)((int32_t)c->r[3] >> 17); }
    (void)f_subs(c, c->r[0], 0x5u);
    c->r[3] = c->r[8];
    if (COND_GE) { c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]); }
    if (COND_GE) { c->r[1] = (c->r[1] >> 1); }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_GT) { c->r[1] = 0x0u; }
    goto L_24f294c;
L_24f2934:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[2]); }
    c->r[9] = c->r[0] + 0x6cu;
    c->r[3] = c->r[0] + 0x68u;
L_24f294c:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = f_subs(c, c->r[2], c->r[12]);
    c->r[0] = c->r[5];
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[7] = (c->r[3] << 1);
    c->r[3] = 0x199au;
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[7] = 0x199au;
    c->r[2] = 0xccdu;
    if (COND_GT) { c->r[7] = 0x3334u; }
    (void)f_subs(c, c->r[6], 0x19u);
    if (COND_LT) { c->r[7] = c->r[7] + c->r[2]; }
    (void)f_subs(c, c->r[6], 0x23u);
    c->r[6] = 0x3334u;
    if (COND_LT) { c->r[7] = c->r[7] + c->r[2]; }
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_LT) { goto L_24f29b8; }
    c->r[6] = 0x4667u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_GE) { c->r[6] = 0xe666u; }
    if (COND_LT) { c->r[6] = 0xf333u; }
    c->r[7] = c->r[7] + c->r[6];
L_24f29b8:;
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[7]; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[7], c->r[3]);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    if (COND_LT) { goto L_24f2a3c; }
    c->r[3] = f_subs(c, c->r[7], c->r[2]);
    c->r[7] = 0xccdu;
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[2]; }
    c->r[2] = 0x5556u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x55550000u;
    c->r[1] = c->r[1] + 0x600u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 10);
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[2]) >> 32);
    c->r[2] = c->r[2] + (c->r[2] >> 31);
    c->r[5] = c->r[2] - 0x1u;
    c->r[2] = 0xc00u;
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_GE) { c->r[5] = 0x7u; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_LE) { c->r[5] = 0x0u; }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[2] + (c->r[1] << 10);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
L_24f2a3c:;
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x400u);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[5]); }
    c->r[2] = (c->r[1] << 2);
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[1] = 0x0u - c->r[1];
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[1]); }
    if (COND_LE) { goto L_24f2c70; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = 0x1u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[10] + (c->r[1] << 2);
    c->r[7] = c->r[10] + 0xc8u;
    c->r[1] = c->r[1] + 0xc8u;
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x54u;
    c->r[4] = c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[1]); }
    goto L_24f2af4;
L_24f2ab0:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[4] + 0x1000u;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[7] = c->r[7] + c->r[6];
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x4u;
    c->r[5] = c->r[5] + c->r[0];
    c->r[0] = c->r[5];
L_24f2af4:;
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[12], 0xfu);
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[9] = c->r[0];
    if (COND_LE) { c->r[12] = 0xfu; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    c->r[14] = 0x24f2b14u; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[5]); }
    c->r[12] = f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_24f2b94; }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + 0x1000u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[12];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[9] + c->r[6];
    c->r[3] = c->r[2];
    c->r[14] = 0x24f2b80u; f_2842a04(c);
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0x54u;
    c->r[5] = c->r[9];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    goto L_24f2ba0;
L_24f2b94:;
    c->r[0] = c->r[4];
    c->r[5] = c->r[9];
    c->r[4] = c->r[12];
L_24f2ba0:;
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[8] - c->r[4];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + (c->r[4] << 2);
    c->r[2] = c->r[12];
    c->r[1] = c->r[1] + 0x1000u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[14]); }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    c->r[14] = 0x24f2c20u; f_2842a04(c);
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[5] + c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x24f2c3cu; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[8] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0x24f2c58u; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_LT) { goto L_24f2ab0; }
    goto L_24f2ec4;
L_24f2c70:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x400u - c->r[0];
    c->r[8] = 0xc8u;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[14];
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = c->r[11] - 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + c->r[6];
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] + (c->r[3] << 2);
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10c8u;
    c->r[1] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] - c->r[6];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[1]); }
    goto L_24f2d30;
L_24f2ce0:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1000u;
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = c->r[5] + 0x1000u;
    c->r[1] = c->r[1] + 0x1u;
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xf8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    c->r[8] = c->r[8] + c->r[6];
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x4u;
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f2d30:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0xfu);
    c->r[4] = c->r[10] + c->r[8];
    c->r[2] = c->r[6];
    if (COND_LE) { c->r[12] = 0xfu; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[10] + 0x68u; ST32(ea, c->r[12]); }
    c->r[14] = 0x24f2d54u; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xf4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0xf8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[4]); }
    c->r[9] = f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_24f2de0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x70u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + 0x1000u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2];
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x24f2dccu; f_2842a04(c);
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0x54u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    goto L_24f2de4;
L_24f2de0:;
    c->r[0] = c->r[7];
L_24f2de4:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u - c->r[0];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[12] + (c->r[9] << 2);
    { uint32_t ea = c->r[11] - 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[1] + 0x1000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->r[14] = 0x24f2e64u; f_2842a04(c);
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[1] = c->r[4] + c->r[6];
    c->r[14] = 0x24f2e78u; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + c->r[7];
    c->r[1] = c->r[1] + c->r[7];
    c->r[14] = 0x24f2e90u; f_2842944(c);
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[6];
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + c->r[5];
    c->r[1] = c->r[1] + 0x1000u;
    c->r[14] = 0x24f2eb0u; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[8];
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_LT) { goto L_24f2ce0; }
L_24f2ec4:;
    c->r[0] = 0x769060u;
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[9];
    { uint32_t ea = 0x24f2edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3333u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_24f2f04; }
    { uint32_t ea = c->r[7] + 0x6cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = 0x3334u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_24f2f70; }
L_24f2f04:;
    { uint32_t ea = c->r[7] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f2f2c; }
    c->v.s[0] = LD32(c->r[7] + 124u);
    c->v.d[16] = 0x3fd3333333333333ull;
    c->r[2] = 0x0u;
    c->v.df[17] = (double)c->v.f[0];
    vfp_cmp_d(c, c->v.df[17], c->v.df[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_24f2f70; }
L_24f2f2c:;
    c->v.s[0] = LD32(c->r[7] + 104u);
    c->v.d[16] = 0x3fe947ae147ae148ull;
    c->v.s[2] = c->r[4];
    c->v.d[17] = 0x3ff428f5c28f5c29ull;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->v.df[18] = (double)(int32_t)c->v.s[0];
    c->v.df[19] = (double)(int32_t)c->v.s[2];
    c->v.df[16] = c->v.df[18] * c->v.df[16];
    c->v.df[17] = c->v.df[18] * c->v.df[17];
    vfp_cmp_d(c, c->v.df[19], c->v.df[16]);
    vfp_mrs_flags(c);
    vfp_cmp_d(c, c->v.df[19], c->v.df[17]);
    if (COND_MI) { c->r[1] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x1u; }
    c->r[2] = c->r[0] | c->r[1];
L_24f2f70:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f3004; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x24f2f9cu; f_28428e4(c);
    c->r[9] = c->r[4] + 0x1u;
    c->r[0] = c->r[6];
    c->r[2] = 0x6u;
    c->r[8] = clz32(c->r[9]);
    c->r[4] = 0x1bu - c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0x24f2fb8u; f_28428f0(c);
    c->r[0] = 0x10u;
    c->r[2] = 0x1fu - c->r[8];
    c->r[1] = c->r[9] - sh_lsl(c->r[0], c->r[4]);
    c->r[0] = c->r[6];
    c->r[14] = 0x24f2fccu; f_28428a8(c);
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x3u;
    c->r[14] = 0x24f2fdcu; f_28428a8(c);
    c->r[0] = 0x677254u;
    { uint32_t ea = c->r[11] - 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x2u;
    c->r[2] = 0x24f2ff0u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x24f2ff4u; f_2842a94(c);
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_24f3044;
L_24f3004:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f3044; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_24f3044; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[14] = 0x24f3040u; f_28428e4(c);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
L_24f3044:;
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_24f358c; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_24f359c; }
    c->r[0] = 0x768eb0u;
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    c->r[3] = 0x0u;
    { uint32_t ea = 0x24f308cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] & 0x1u;
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[2]); }
    c->r[14] = c->r[2] + c->r[0];
    c->r[2] = c->r[14] + (c->r[12] << 1);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    if (COND_LT) { goto L_24f34fc; }
    c->r[1] = c->r[12] + (c->r[12] >> 31);
    c->r[2] = ~0x65u;
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] | (c->r[3] << 1);
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[3]); }
    c->r[9] = c->r[3] - 0x5u;
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[14] + 0x18u;
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[14] + 0x2u;
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[11] - 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] - 0x1u;
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] << 2);
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[11] - 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] << 20);
    { uint32_t ea = c->r[11] - 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(((int32_t)(c->r[3] << 15)) >> 16);
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] - 0x2u;
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x67716fu;
    c->r[0] = 0x24f313cu + c->r[0];
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[0]); }
L_24f3144:;
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[2]); }
    if (COND_LE) { goto L_24f31f0; }
    c->r[3] = 0x0u;
    c->r[0] = c->r[14];
    c->r[1] = c->r[12];
    c->r[4] = 0x0u;
L_24f3168:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[6] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[6] >> 12);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 12);
    c->r[5] = (c->r[3] >> 2);
    c->r[7] = c->r[6] - (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[3] = c->r[3] + c->r[4];
    c->r[3] = c->r[3] - (c->r[6] << 1);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); c->r[0] = c->r[0] + 0x2u; }
    c->r[4] = c->r[7];
    if (COND_NE) { goto L_24f3168; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[12], 0x1u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[14] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_24f32c4; }
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f3248; }
    c->r[0] = 0x0u;
    c->r[3] = 0x1u;
    c->r[1] = 0x0u;
    goto L_24f3260;
L_24f31f0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[14] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; ST16(ea, c->r[0]); }
    goto L_24f32c8;
L_24f3248:;
    { uint32_t ea = c->r[14] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[0] & (uint32_t)((int32_t)c->r[0] >> 15);
L_24f3260:;
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f32c4; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[1];
    c->r[2] = c->r[2] + (c->r[3] << 1);
    c->r[3] = c->r[12] - c->r[3];
L_24f327c:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GE) { c->r[0] = c->r[1]; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    if (COND_GE) { c->r[0] = c->r[6]; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[4]; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LE) { c->r[1] = c->r[6]; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->r[4] = c->r[1];
    if (COND_NE) { goto L_24f327c; }
L_24f32c4:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
L_24f32c8:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_24f3368; }
    c->r[1] = 0x1fu;
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[0] = clz32(c->r[0]);
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = f_subs(c, 0xeu, c->r[0]);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[14]; ST16(ea, c->r[1]); } }
    if (COND_NE) { (void)f_subs(c, c->r[12], 0x1u); }
    if (COND_EQ) { goto L_24f3368; }
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f332c; }
    { uint32_t ea = c->r[14] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[1] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[14] + 0x2u; ST16(ea, c->r[1]); }
L_24f332c:;
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f3368; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[12] - c->r[2];
L_24f3344:;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    c->r[3] = sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1] - 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x4u;
    if (COND_NE) { goto L_24f3344; }
L_24f3368:;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[12], 0x2u);
    c->r[0] = 0x0u;
    c->r[10] = 0x0u;
    if (COND_LT) { goto L_24f340c; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x0u;
    c->r[3] = c->r[14];
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
L_24f3394:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[1], c->r[5]);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[6] = 0x8u - c->r[4];
    c->r[7] = c->r[7] + 0x8000u;
    c->r[0] = c->r[0] + (c->r[7] >> 16);
    c->r[7] = c->r[6] + (c->r[7] >> 16);
    c->r[7] = c->r[4] + (c->r[7] >> 4);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); c->r[3] = c->r[3] + 0x2u; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    if (COND_LT) { goto L_24f3394; }
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[10] = 0x0u;
L_24f33e0:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[6] = 0x4u - c->r[3];
    c->r[2] = c->r[2] - 0x1u;
    c->r[7] = c->r[6] + c->r[7];
    c->r[3] = c->r[3] + (c->r[7] >> 3);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] - 0x2u; }
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    (void)f_subs(c, c->r[10], c->r[3]);
    if (COND_LE) { c->r[10] = c->r[3]; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_GT) { goto L_24f33e0; }
L_24f340c:;
    c->r[14] = 0x24f3410u; f_284286c(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] * c->r[0]; c->r[0] = r; }
    c->r[14] = 0x24f3420u; f_284286c(c);
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[9], 0xdu);
    c->r[5] = 0x10000u;
    if (COND_LT) { goto L_24f34a0; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = 0x0u;
    c->r[2] = 0xcu;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[11] - 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = sdiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = (c->r[1] << 1);
L_24f345c:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x8u; c->r[7] = v; }
    c->r[2] = c->r[2] + 0x4u;
    c->r[7] = c->r[5] + (c->r[7] << 16);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t r = c->r[7] * c->r[0]; c->r[6] = r; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[7] = r; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 15);
    (void)f_subs(c, c->r[7], 0x7fu);
    c->r[6] = c->r[7];
    if (COND_GE) { c->r[6] = 0x7fu; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = c->r[4];
    if (COND_GT) { c->r[7] = c->r[7] + c->r[6]; }
    (void)f_subs(c, c->r[2], c->r[9]);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[8] = c->r[7] + c->r[8];
    if (COND_LT) { goto L_24f345c; }
L_24f34a0:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[8] << 8);
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + c->r[2];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GT) { c->r[1] = c->r[6]; }
    c->r[6] = c->r[6] + 0x1u;
    if (COND_GT) { c->r[3] = c->r[0]; }
    (void)f_subs(c, c->r[6], c->r[10]);
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_24f3144; }
L_24f34fc:;
    c->r[0] = 0x1bu;
    (void)f_subs(c, c->r[3], 0xc8u);
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[3] * c->r[0]; c->r[4] = r; }
    if (COND_GT) { c->r[9] = 0x1u; }
    c->r[0] = c->r[4];
    c->r[14] = 0x24f351cu; f_284286c(c);
    (void)f_subs(c, c->r[0], 0x2au);
    c->r[2] = 0x0u;
    if (COND_LT) { goto L_24f3540; }
    c->r[0] = c->r[4];
    c->r[14] = 0x24f3530u; f_284286c(c);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffd60000u;
    c->r[0] = c->r[1] + (c->r[0] << 16);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
L_24f3540:;
    c->r[0] = 0xa7f0u;
    (void)f_subs(c, c->r[2], 0xa3u);
    c->r[1] = 0x1c4000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfdc60000u;
    if (COND_GE) { c->r[2] = 0xa3u; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x5810u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x2390000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { c->r[0] = 0x0u; }
    c->r[14] = 0x24f3570u; f_284286c(c);
    c->r[1] = 0x7689b4u;
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x24f3588u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    goto L_24f359c;
L_24f358c:;
    c->r[0] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_24f359c:;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24f35f4; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[1] - 0x1du;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_GT) { goto L_24f35fc; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[9]); }
    if (COND_EQ) { c->r[6] = c->r[9]; }
    goto L_24f35fc;
L_24f35f4:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x0u;
L_24f35fc:;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x768924u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = 0x24f3618u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] & 0x3u;
    c->r[2] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[3] * c->r[0] + c->r[2]; c->r[0] = r; }
    c->r[2] = 0x0u - c->r[0];
    c->r[2] = c->r[2] & 0x3u;
    c->r[3] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[0];
    c->r[0] = c->r[3] + (c->r[2] << 2);
    c->r[3] = c->r[0] & 0x1u;
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[2] << 1);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_24f3688; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_GT) { c->r[2] = 0x1u; }
L_24f3688:;
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[1] * c->r[5]; c->r[4] = r; }
    c->r[1] = c->r[0] & 0x1u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x768880u;
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x24f36bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_24f37f8; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12];
    c->r[14] = 0x24f3700u; f_24f73cc(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[9];
    c->r[14] = 0x24f3720u; f_2842aa0(c);
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = c->r[8];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x24f373cu; f_2842aac(c);
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24f37f8; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = (c->r[0] << 26);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 17);
    if (COND_EQ) { goto L_24f377c; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[1]); }
L_24f377c:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_24f37f8; }
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[4] - c->r[9];
    c->r[2] = (c->r[2] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[10] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[2] + (c->r[9] << 1);
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x2u;
L_24f37d4:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[3] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] - 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x4u;
    if (COND_NE) { goto L_24f37d4; }
L_24f37f8:;
    c->r[0] = c->r[14] - (c->r[4] << 1);
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] << 1);
    c->r[4] = c->r[12];
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[12];
    c->r[3] = c->r[6];
    c->r[14] = 0x24f3844u; f_24f73cc(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    c->r[14] = 0x24f3860u; f_2842aa0(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x2u);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { c->r[1] = 0x0u; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f3910; }
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_LT) { goto L_24f3910; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[8] - 0x2u;
    c->r[0] = c->r[0] + 0x8u;
L_24f38d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = (c->r[3] << 1);
    c->r[3] = c->r[3] + (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[3] = (c->r[3] >> 15);
    c->r[2] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { c->r[2] = c->r[3]; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LE) { c->r[2] = 0x1u; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); c->r[0] = c->r[0] + 0x4u; }
    if (COND_NE) { goto L_24f38d0; }
L_24f3910:;
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x24f392cu; f_2842aac(c);
    c->r[0] = 0x768604u;
    { uint32_t ea = 0x24f3938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[1] + c->r[0];
    c->r[1] = (c->r[8] << 1);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[11] - 0xf8u; ST32(ea, c->r[1]); }
    c->r[14] = 0x24f396cu; f_283aad8(c);
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f3a84; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
L_24f3990:;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f3cac; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[9] << 26);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[12] = (uint32_t)((int32_t)c->r[1] >> 17); }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LE) { goto L_24f3c58; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_24f3bdc; }
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[0] + c->r[2];
    c->r[1] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - c->r[6];
    { uint32_t r = c->r[10] * c->r[2]; c->r[2] = r; }
    c->r[7] = (c->r[2] << 2);
    c->r[1] = c->r[7] + (c->r[1] << 1);
    c->r[1] = c->r[1] | c->r[14];
    c->r[1] = c->r[1] + c->r[5];
    c->r[1] = c->r[1] + c->r[4];
    c->r[2] = c->r[0] + c->r[1];
    c->r[1] = c->r[7] + (c->r[6] << 1);
    c->r[6] = 0xd800u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[1] | c->r[14];
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[1] + c->r[5];
    c->r[1] = c->r[1] + c->r[4];
    c->r[7] = c->r[0] + c->r[1];
    c->r[1] = 0x0u;
L_24f3a3c:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[5] = v; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[6] - 0x400u;
    c->r[4] = c->r[5] - c->r[12];
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[0] = c->r[12];
    if (COND_GT) { c->r[5] = c->r[6]; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[6] = v; }
    if (COND_GT) { c->r[0] = 0x400u; }
    c->r[0] = c->r[5] - c->r[0];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[6] = c->r[6] - c->r[12];
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_GT) { c->r[6] = c->r[0]; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[1] = c->r[1] + (uint32_t)(int32_t)(int16_t)(c->r[6]);
    if (COND_NE) { goto L_24f3a3c; }
    goto L_24f3c58;
L_24f3a84:;
    { uint32_t ea = c->r[7] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f3990; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x100u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_24f3cac; }
    { uint32_t ea = c->r[7] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_LE) { c->r[8] = 0x2u; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_24f40e4; }
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    if (COND_LT) { goto L_24f40ec; }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[1] - (c->r[8] << 16);
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_24f3b34:;
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[2];
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[2]); }
L_24f3b50:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[8] = v; }
    c->r[2] = 0xf800u;
    c->r[4] = (uint32_t)((int32_t)c->r[14] >> 16);
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[9]);
    c->r[12] = c->r[12] + 0x1u;
    c->r[14] = c->r[14] + 0x20000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[8], 0x100u);
    if (COND_GE) { c->r[8] = 0x100u; }
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_LE) { c->r[8] = c->r[2]; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GT) { c->r[2] = 0x1u; }
    c->r[2] = sh_asr(c->r[8], c->r[2]);
    c->r[8] = c->r[0];
    { uint32_t r = c->r[2] * c->r[4] + c->r[3]; c->r[3] = r; }
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = c->r[10] + 0x2u; c->r[4] = v; }
    (void)f_subs(c, c->r[12], c->r[8]);
    c->r[5] = c->r[4] - c->r[5];
    c->r[9] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[6] = c->r[5] + c->r[6];
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[1] = r; }
    if (COND_LT) { goto L_24f3b50; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_24f3b34; }
    goto L_24f40ec;
L_24f3bdc:;
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xd800u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] - c->r[3];
    { uint32_t r = c->r[10] * c->r[1]; c->r[1] = r; }
    c->r[1] = (c->r[1] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 1);
    c->r[1] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[1] = 0x0u;
L_24f3c28:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[0] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[5] = c->r[7] - 0x400u;
    c->r[6] = c->r[0] - c->r[12];
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_GT) { c->r[0] = c->r[7]; }
    c->r[7] = c->r[12];
    if (COND_GT) { c->r[7] = 0x400u; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[7] = c->r[0] - c->r[7];
    c->r[1] = c->r[1] + (uint32_t)(int32_t)(int16_t)(c->r[7]);
    if (COND_NE) { goto L_24f3c28; }
L_24f3c58:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0xf800u;
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[4] = c->r[2] + 0x200u;
    c->r[0] = c->r[8] - c->r[0];
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[7] + 0xc4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GT) { c->r[4] = c->r[0]; }
    c->r[0] = 0x28fu;
    (void)f_subs(c, c->r[4], 0xc00u);
    if (COND_GE) { c->r[4] = 0xc00u; }
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[1] + (c->r[0] >> 15);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xc4u; ST16(ea, c->r[0]); }
L_24f3cac:;
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f3cd4; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x24f3cc8u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
L_24f3cd4:;
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    if (COND_LT) { goto L_24f4480; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_24f4450; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = clz32(c->r[3]);
    c->r[2] = c->r[0] + c->r[2];
    c->r[2] = c->r[2] - 0x1du;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_GT) { goto L_24f4450; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_LT) { goto L_24f4450; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_24f4450; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[0] = c->r[2] + (c->r[6] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    if (COND_NE) { goto L_24f3db4; }
    c->r[1] = c->r[11] - 0x54u;
    c->r[2] = c->r[1] + (c->r[6] << 1);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    c->r[2] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_GE) { goto L_24f3e64; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[8] - 0x1u;
    c->r[3] = (c->r[3] << 2);
    c->r[2] = c->r[2] - c->r[0];
    c->r[3] = c->r[3] + (c->r[0] << 1);
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + c->r[3];
    c->r[3] = c->r[3] + 0xcau;
L_24f3d80:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[0] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[7] = c->r[7] - 0x400u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[7]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    c->r[7] = c->r[0];
    if (COND_NE) { goto L_24f3d80; }
    goto L_24f3e64;
L_24f3db4:;
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + c->r[0];
    c->r[0] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[0] = c->r[1];
    c->r[7] = c->r[6] + 0x1u;
    if (COND_GT) { c->r[0] = c->r[6]; }
    (void)f_subs(c, c->r[7], c->r[8]);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[2] = c->r[11] - 0x54u;
    c->r[3] = c->r[2] + (c->r[6] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[4]); }
    if (COND_GE) { goto L_24f3e64; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] + (c->r[7] << 1);
    c->r[3] = (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] + (c->r[1] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 1);
    c->r[1] = c->r[0] + c->r[1];
    c->r[3] = c->r[0] + c->r[3];
    c->r[1] = c->r[1] + 0xcau;
    c->r[3] = c->r[3] + 0xcau;
L_24f3e1c:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[6] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[6] = c->r[7] + 0x1u;
    if (COND_LE) { c->r[7] = c->r[0] + c->r[7]; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + (c->r[7] << 1);
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[7] = c->r[7] - 0x400u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[7]; }
    (void)f_subs(c, c->r[8], c->r[6]);
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); c->r[2] = c->r[2] + 0x2u; }
    c->r[4] = c->r[0];
    if (COND_NE) { goto L_24f3e1c; }
L_24f3e64:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8] - 0x2u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { goto L_24f3ea8; }
    c->r[1] = c->r[11] - 0x54u;
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[8] - 0x1u;
L_24f3e80:;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[3] = c->r[3] - 0x400u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[2]; }
    (void)f_subs(c, c->r[1], c->r[7]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); }
    c->r[0] = c->r[0] - 0x2u;
    if (COND_GT) { goto L_24f3e80; }
L_24f3ea8:;
    c->r[0] = c->r[8];
    (void)f_subs(c, c->r[7], 0x2u);
    c->r[8] = c->r[7];
    c->r[3] = 0x0u;
    if (COND_LE) { c->r[8] = 0x2u; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_LE) { goto L_24f3f78; }
    c->r[0] = c->r[11] - 0x54u;
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    c->r[10] = 0x0u;
    c->r[12] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = (c->r[3] << 1);
    c->r[0] = c->r[3] + c->r[0];
    c->r[3] = 0x0u;
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] << 2);
    c->r[0] = c->r[0] + (c->r[8] << 1);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[2] + c->r[0];
L_24f3f20:;
    c->r[2] = c->r[12];
    c->r[7] = c->r[9];
    c->r[0] = c->r[8];
L_24f3f2c:;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[4] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LE) { c->r[6] = c->r[5]; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LE) { c->r[4] = c->r[5]; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[4] = c->r[4] - c->r[6];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { c->r[3] = c->r[3] + c->r[4]; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_24f3f2c; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] + c->r[14];
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { goto L_24f3f20; }
L_24f3f78:;
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[1] - c->r[8];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[0] = sdiv32(c->r[3], c->r[0]);
    (void)f_subs(c, c->r[0], 0x400u);
    if (COND_LE) { goto L_24f4444; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[9]); }
    c->r[10] = c->r[14];
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[14];
    c->r[3] = c->r[4];
    c->r[14] = 0x24f3fdcu; f_24f73cc(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[4];
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x24f3ffcu; f_2842aa0(c);
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[8];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x24f4018u; f_2842aac(c);
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    c->r[0] = 0xccdu;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_24f4430; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[9] << 26);
    c->r[2] = 0x0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 17);
    if (COND_EQ) { goto L_24f405c; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); }
    c->r[2] = 0x1u;
L_24f405c:;
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_24f40d8; }
    c->r[5] = c->r[3] - c->r[2];
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[3] = (c->r[3] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] * c->r[3]; c->r[3] = r; }
    c->r[2] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x2u;
L_24f40b4:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x2u);
    c->r[3] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] - 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x4u;
    if (COND_NE) { goto L_24f40b4; }
L_24f40d8:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_24f443c;
L_24f40e4:;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
L_24f40ec:;
    { uint32_t r = c->r[8] * c->r[5]; c->r[0] = r; }
    c->r[2] = c->r[8] - 0x1u;
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[5] = sdiv32(c->r[1], c->r[7]);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff320000u;
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[2] = c->r[8] + 0x1u;
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[2] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x20u;
    c->r[2] = (c->r[2] << 1);
    c->r[0] = sdiv32(c->r[2], c->r[0]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[7]); }
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_LT) { c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1); }
    c->r[0] = 0xfe32u;
    (void)f_adds(c, c->r[3], 0x20u);
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[3]); }
    if (COND_LE) { c->r[3] = ~0x1fu; }
    c->r[2] = c->r[0] - c->r[3];
    c->r[9] = (c->r[3] << 16);
    c->r[6] = c->r[2] - c->r[7];
    c->r[2] = c->r[1];
    c->r[7] = c->r[0] - c->r[7];
    c->r[0] = (c->r[5] << 16);
    c->r[1] = c->r[2] - (c->r[3] << 16);
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[0]); }
    c->r[12] = c->r[1] - (c->r[5] << 16);
    c->r[1] = c->r[2] - (c->r[5] << 16);
    { uint32_t ea = c->r[11] - 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + (c->r[8] << 1);
    c->r[5] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] >> 15);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 1);
L_24f4188:;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[0] = v; }
    c->r[14] = c->r[7];
    c->r[10] = c->r[1];
    c->r[6] = c->r[6] + c->r[3];
    c->r[12] = c->r[12] + c->r[9];
    c->r[1] = c->r[10] + c->r[9];
    c->r[7] = c->r[14] + c->r[3];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LT) { goto L_24f4188; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x20u);
    if (COND_LE) { c->r[0] = ~0x1fu; }
    (void)f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0xcdu;
    if (COND_LT) { goto L_24f42bc; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_24f42dc; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    c->r[12] = (c->r[0] << 16);
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (c->r[0] << 1);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff320000u;
    c->r[4] = c->r[0] + 0xcd0000u;
    goto L_24f4230;
L_24f4218:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] - c->r[12];
    c->r[5] = c->r[5] + 0x2u;
    c->r[14] = c->r[14] - c->r[0];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[9] = v; }
L_24f4230:;
    c->r[2] = c->r[9] + c->r[7];
    c->r[0] = c->r[9] + c->r[5];
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3];
    if (COND_LE) { c->r[0] = c->r[2] + c->r[0]; }
    c->r[0] = c->r[9] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = ~c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = ~0x0u; }
    { uint32_t r = c->r[0] * c->r[4] + c->r[10]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_LE) { goto L_24f428c; }
    c->r[0] = c->r[2] & (uint32_t)((int32_t)c->r[2] >> 31);
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = c->r[1] + c->r[5];
    c->r[0] = c->r[14] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
L_24f428c:;
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { goto L_24f4218; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_24f4380;
L_24f42bc:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_24f4414;
L_24f42dc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[7] = 0x1u;
    c->r[8] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff320000u;
    c->r[4] = c->r[0] + 0xcd0000u;
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_24f4328;
L_24f430c:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[12] - c->r[9];
    c->r[7] = c->r[7] + 0x1u;
    c->r[3] = c->r[3] + 0x2u;
    c->r[6] = c->r[6] - c->r[0];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f4328:;
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = ~c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = ~0x0u; }
    { uint32_t r = c->r[0] * c->r[4] + c->r[12]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_LE) { goto L_24f4360; }
    c->r[0] = c->r[2] & (uint32_t)((int32_t)c->r[2] >> 31);
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = c->r[1] + c->r[3];
    c->r[0] = c->r[6] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
L_24f4360:;
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_24f430c; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f4380:;
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_LT) { goto L_24f4414; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xff320000u;
    c->r[2] = c->r[2] - 0xff0000u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LE) { goto L_24f43cc; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 1);
    c->r[14] = 0x24f43b0u; f_283aad8(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    goto L_24f4414;
L_24f43cc:;
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1cdu;
    c->r[2] = c->r[2] + c->r[0];
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_24f4414; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[2];
    c->r[3] = 0x0u;
L_24f43f0:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = c->r[0] + 0xff00u;
    (void)f_subs(c, c->r[0], 0x100u);
    if (COND_LT) { c->r[2] = 0x0u; }
    (void)f_subs(c, c->r[3], c->r[12]);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[2]); c->r[4] = c->r[4] + 0x2u; }
    if (COND_LT) { goto L_24f43f0; }
    c->r[2] = c->r[8];
L_24f4414:;
    c->r[0] = c->r[2] + 0xcdu;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 6);
    goto L_24f3990;
L_24f4430:;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
L_24f443c:;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_24f4444:;
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_24f4450:;
    c->r[2] = clz32(c->r[3]);
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - 0x1du;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { goto L_24f447c; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x3u;
    c->r[14] = 0x24f4478u; f_28428e4(c);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[14] = v; }
L_24f447c:;
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
L_24f4480:;
    c->r[1] = 0x767aa8u;
    { uint32_t r = c->r[5] * c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x24f4494u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14];
    c->r[14] = 0x24f44d0u; f_2842ab8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u - c->r[1];
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] & 0x3u;
    c->r[6] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    c->r[2] = c->r[6] + (c->r[0] << 2);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f4530; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[10] << 4) - c->r[10];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_LT) { goto L_24f4530; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f45b4; }
L_24f4530:;
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[4] = 0x0u;
    if (COND_LT) { goto L_24f4f4c; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[8] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[1] = c->r[8] - 0x1u;
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_24f456c; }
    c->r[0] = 0x0u;
L_24f455c:;
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_24f455c; }
L_24f456c:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_24f4f4c; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] - c->r[0];
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] + 0x8u;
L_24f458c:;
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x10u;
    c->r[1] = f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_24f458c; }
    goto L_24f4f4c;
L_24f45b4:;
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x28u);
    if (COND_GE) { c->r[1] = 0xcu; }
    if (COND_GE) { { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[1]); } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x3cu); }
    if (COND_LT) { goto L_24f45e4; }
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_LT) { c->r[1] = 0x8u; }
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[1]); }
L_24f45e4:;
    c->r[0] = 0x0u - c->r[2];
    { uint32_t ea = c->r[11] - 0x104u; ST32(ea, c->r[2]); }
    c->r[12] = c->r[5];
    c->r[14] = c->r[9];
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    c->r[1] = c->r[0] & 0x1u;
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = 0x767918u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = 0x24f4624u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + (c->r[1] << 1);
    c->r[7] = c->r[0] + (c->r[12] << 1);
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[1] = c->r[5] - c->r[1];
    c->r[1] = sh_lsl(c->r[1], c->r[9]);
    c->r[3] = c->r[3] + (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] & 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[4] = c->r[5] - c->r[4];
    c->r[10] = sh_lsl(c->r[4], c->r[14]);
    c->r[4] = c->r[1] + (c->r[10] << 1);
    c->r[1] = 0x0u - c->r[4];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] & 0x3u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + (c->r[12] << 2);
    c->r[5] = 0x0u - c->r[1];
    c->r[5] = c->r[5] & 0x3u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[7] = c->r[5];
    c->r[5] = c->r[7] + (c->r[12] << 2);
    { uint32_t ea = c->r[11] - 0x110u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    c->r[2] = 0x0u;
    if (COND_LT) { goto L_24f4de8; }
    c->r[1] = c->r[6] - c->r[1];
    c->r[1] = sh_lsl(c->r[1], c->r[14]);
    c->r[1] = c->r[4] - (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[9] - c->r[1];
    c->r[1] = sh_lsl(c->r[1], c->r[14]);
    c->r[9] = c->r[3] - (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0xd800u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = c->r[3] + 0x1800u;
    c->r[1] = (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - (c->r[12] << 2);
    c->r[2] = 0x10000u;
    c->r[2] = c->r[2] + (c->r[14] << 16);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = 0x2000u - c->r[1];
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[1]; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[3] = 0x147cu;
    c->r[8] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[1] = (uint32_t)((int32_t)c->r[8] >> 16);
    c->r[8] = c->r[8] & 0xffff0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[11] - 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = (c->r[14] << 16); }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = c->r[1] - (c->r[14] << 1);
    { uint32_t ea = c->r[11] - 0x100u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    c->r[1] = c->r[14] + c->r[1];
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[1]); }
    goto L_24f48e4;
L_24f479c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_24f4850; }
    c->r[5] = 0x0u;
L_24f47a8:;
    c->r[0] = 0x1u;
    c->r[1] = sh_asr(c->r[7], c->r[5]);
    c->r[2] = sh_lsl(c->r[0], c->r[5]);
    c->r[0] = c->r[9];
    c->r[14] = 0x24f47bcu; f_2842ac4(c);
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[5] = c->r[5] + 0x1u;
    if (COND_GT) { c->r[6] = c->r[5]; }
    if (COND_GT) { c->r[10] = 0x0u; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_24f47a8; }
    goto L_24f4880;
L_24f47d8:;
    c->r[5] = 0x0u;
L_24f47dc:;
    c->r[0] = 0x1u;
    c->r[1] = sh_asr(c->r[7], c->r[5]);
    c->r[2] = sh_lsl(c->r[0], c->r[5]);
    c->r[0] = c->r[9];
    c->r[14] = 0x24f47f0u; f_2842ac4(c);
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
    c->r[0] = 0x0u;
L_24f47fc:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[0] = c->r[3] + c->r[0];
    if (COND_NE) { goto L_24f47fc; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = c->r[0];
    { uint32_t r = c->r[8] * c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[2] & 0x7fffu;
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[2] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 15);
    c->r[0] = (c->r[0] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LT) { c->r[6] = c->r[5]; }
    if (COND_LT) { c->r[10] = c->r[0]; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_24f47dc; }
    goto L_24f4880;
L_24f4850:;
    c->r[5] = 0x0u;
L_24f4854:;
    c->r[0] = 0x1u;
    c->r[1] = sh_asr(c->r[7], c->r[5]);
    c->r[2] = sh_lsl(c->r[0], c->r[5]);
    c->r[0] = c->r[9];
    c->r[14] = 0x24f4868u; f_2842ac4(c);
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[5] = c->r[5] + 0x1u;
    if (COND_GT) { c->r[6] = c->r[5]; }
    if (COND_GT) { c->r[10] = 0x0u; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_24f4854; }
L_24f4880:;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] - (c->r[6] << 1);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = (c->r[6] << 1); }
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_24f48c8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[2]); }
    if (COND_NE) { goto L_24f48c8; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[0]); }
L_24f48c8:;
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_24f4ad0; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[3];
L_24f48e4:;
    c->r[1] = c->r[0] + (c->r[2] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + 0x1u;
    c->r[0] = c->r[0] + (c->r[2] << 1);
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[2]); }
    c->r[7] = sh_lsl(c->r[2], c->r[0]);
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = (c->r[7] << 1);
    c->r[0] = c->r[2] + sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[1] = c->r[1] + (c->r[0] << 1);
    c->r[0] = c->r[9];
    c->r[14] = 0x24f4930u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[0] = 0x0u;
    if (COND_LT) { goto L_24f4964; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
L_24f494c:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[0] = c->r[3] + c->r[0];
    if (COND_NE) { goto L_24f494c; }
L_24f4964:;
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[6] = 0x0u;
    c->r[1] = c->r[1] & 0x7fffu;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[1] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[0] = (c->r[0] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[10] = (uint32_t)p; }
    if (COND_NE) { { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_24f4a20; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[9];
    c->r[2] = c->r[4];
    c->r[0] = c->r[5];
    c->r[14] = 0x24f49a8u; f_283aa78(c);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sh_asr(c->r[7], c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0x24f49bcu; f_2842ac4(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_24f49f0; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[7];
L_24f49d4:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[0] = c->r[3] + c->r[0];
    if (COND_NE) { goto L_24f49d4; }
    goto L_24f49f4;
L_24f49f0:;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[5] = v; }
L_24f49f4:;
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[6] = 0x0u;
    c->r[1] = c->r[1] & 0x7fffu;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[1] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[0] = (c->r[0] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LT) { c->r[6] = ~0x0u; }
    if (COND_LT) { c->r[10] = c->r[0]; }
L_24f4a20:;
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0];
    if (COND_NE) { c->r[4] = c->r[4] + 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24f4880; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_24f479c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_24f47d8; }
    c->r[5] = 0x0u;
L_24f4a58:;
    c->r[0] = 0x1u;
    c->r[1] = sh_asr(c->r[7], c->r[5]);
    c->r[2] = sh_lsl(c->r[0], c->r[5]);
    c->r[0] = c->r[9];
    c->r[14] = 0x24f4a6cu; f_2842ac4(c);
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
    c->r[0] = 0x0u;
L_24f4a78:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[0] = c->r[3] + c->r[0];
    if (COND_NE) { goto L_24f4a78; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    c->r[2] = c->r[2] & 0x7fffu;
    c->r[1] = c->r[1] - c->r[5];
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t r = c->r[8] * c->r[1]; c->r[1] = r; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[2] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 15);
    c->r[0] = (c->r[0] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LT) { c->r[6] = c->r[5]; }
    if (COND_LT) { c->r[10] = c->r[0]; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_24f4a58; }
    goto L_24f4880;
L_24f4ad0:;
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[10] = c->r[9];
    if (COND_NE) { c->r[10] = 0x0u; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LE) { goto L_24f4e1c; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (c->r[1] << 2);
    c->r[2] = ~0x1u;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[7]); }
    c->r[1] = ~c->r[0];
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[1]); }
    c->r[0] = ~c->r[0];
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[0]); }
    if (COND_GT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[0] + 0x4u;
    c->r[0] = 0x7673f4u;
    { uint32_t ea = 0x24f4b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[14] << 3);
    c->r[3] = c->r[0] + c->r[3];
    c->r[0] = c->r[0] + c->r[7];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[12] = (c->r[0] << 1);
    c->r[1] = (c->r[3] << 1);
    c->r[0] = c->r[10];
L_24f4b70:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[6] = v; }
    c->r[5] = c->r[7] + c->r[9];
    c->r[8] = c->r[0] + c->r[9];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_GE) { c->r[5] = c->r[0]; }
    c->r[3] = f_subs(c, c->r[6], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_LT) { c->r[8] = c->r[7]; }
    c->r[7] = f_subs(c, c->r[6], c->r[12]);
    c->r[0] = c->r[3] + c->r[5];
    if (COND_MI) { c->r[7] = 0x0u - c->r[7]; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[7] = c->r[7] + c->r[8];
    if (COND_NE) { goto L_24f4b70; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[10];
    (void)f_subs(c, c->r[3], c->r[1]);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GT) { c->r[2] = c->r[3]; }
    c->r[3] = ~0x1u;
    c->r[4] = c->r[3] - c->r[2];
    c->r[2] = 0x767360u;
    c->r[8] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x24f4be4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] | 0x3u;
    c->r[2] = c->r[2] + (c->r[14] << 3);
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] << 1);
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[1] | 0x2u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[1] = (c->r[2] << 1);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[1]); }
L_24f4c14:;
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[8] = c->r[8] + 0x4u; c->r[14] = v; }
    c->r[3] = c->r[2] + c->r[1];
    c->r[9] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GE) { c->r[3] = c->r[6]; }
    c->r[12] = f_subs(c, c->r[14], c->r[5]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_LT) { c->r[9] = c->r[2]; }
    c->r[2] = f_subs(c, c->r[14], c->r[1]);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[12] + c->r[3];
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[2] = c->r[2] + c->r[9];
    if (COND_NE) { goto L_24f4c14; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_GT) { c->r[4] = c->r[3]; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    (void)f_subs(c, c->r[2], c->r[6]);
    c->r[7] = 0x0u;
    if (COND_LT) { c->r[6] = c->r[2]; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = 0x0u;
    c->r[3] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    c->r[3] = c->r[3] + c->r[5];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[2] & c->r[0];
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] + c->r[5];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 1);
    c->r[2] = 0x76725cu;
    c->r[6] = c->r[0] | 0x1u;
    c->r[5] = c->r[3] + c->r[5];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x24f4ce8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[1] << 3);
    c->r[5] = c->r[5] + c->r[9];
    c->r[0] = c->r[2] + c->r[0];
    c->r[6] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[6] = v; }
    c->r[5] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[5] - 0x4u;
    c->r[5] = c->r[5] - (c->r[4] << 3);
    c->r[2] = c->r[2] - 0x4u;
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = (c->r[6] << 1);
    c->r[6] = c->r[4] + 0x2u;
    c->r[5] = c->r[8] + c->r[5];
    c->r[14] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + c->r[9];
    c->r[0] = c->r[0] + c->r[5];
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = c->r[8] + c->r[0];
    c->r[9] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] + c->r[3];
    c->r[3] = 0x0u;
    c->r[4] = c->r[0] + 0x4u;
L_24f4d6c:;
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x0u;
    c->r[0] = c->r[10] + c->r[5];
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[9] - (c->r[7] << 2); ST32(ea, c->r[2]); }
    c->r[2] = c->r[3] + c->r[5];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_GE) { c->r[5] = 0x1u; }
    if (COND_LT) { c->r[10] = c->r[2]; }
    { uint32_t ea = c->r[14] - (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] - (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[7] - 0x1u;
    c->r[2] = f_subs(c, c->r[5], c->r[12]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[3]; }
    c->r[3] = f_subs(c, c->r[5], c->r[1]);
    c->r[10] = c->r[2] + c->r[10];
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[3] = c->r[3] + c->r[0];
    if (COND_NE) { goto L_24f4d6c; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_24f4e3c;
L_24f4de8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x0u;
    c->r[9] = c->r[14];
    c->r[2] = c->r[12];
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    goto L_24f4e3c;
L_24f4e1c:;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
L_24f4e3c:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[2] - 0x2u;
    if (COND_GE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + (c->r[12] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x110u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_LT) { goto L_24f4eb8; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = ~c->r[6];
    c->r[2] = ~c->r[8];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[1]; }
    c->r[1] = ~0x1u;
    c->r[1] = c->r[1] - c->r[2];
    c->r[3] = c->r[3] - 0xcu;
    c->r[2] = c->r[3] - (c->r[2] << 2);
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
L_24f4e98:;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[3];
    if (COND_EQ) { c->r[0] = c->r[14]; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); c->r[2] = c->r[2] - 0x4u; }
    if (COND_GT) { goto L_24f4e98; }
L_24f4eb8:;
    c->r[0] = 0x767070u;
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], c->r[6]);
    { uint32_t ea = 0x24f4eccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_LE) { goto L_24f4f48; }
    c->r[0] = c->r[8] - 0x1u;
    c->r[1] = c->r[8] - c->r[6];
    c->r[0] = c->r[0] - c->r[6];
    { uint32_t r = c->r[1] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_24f4efc; }
    c->r[1] = 0x0u - c->r[1];
L_24f4ee8:;
    { uint32_t ea = c->r[4] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[4] + (c->r[6] << 2); ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] + 0x1u;
    if (COND_NE) { goto L_24f4ee8; }
L_24f4efc:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_24f4f48; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 2);
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + 0x8u;
L_24f4f18:;
    { uint32_t ea = c->r[4] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[8]);
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x10u;
    if (COND_LT) { goto L_24f4f18; }
L_24f4f48:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[4] = v; }
L_24f4f4c:;
    c->r[0] = 0x766fd4u;
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x24f4f68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + 0x54u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[10] = 0x0u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_GT) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x24f5000u; f_2842ad0(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = clz32(c->r[3]);
    c->r[6] = (c->r[1] << 3);
    if (COND_NE) { c->r[2] = 0x2u; }
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + c->r[3];
    c->r[0] = c->r[0] - 0x20u;
    if (COND_LT) { goto L_24f504c; }
    c->r[1] = c->r[2] | 0x1u;
    c->r[9] = 0x0u;
    c->r[1] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LS) { c->r[9] = 0x1u; }
L_24f504c:;
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[6] = c->r[6] - 0x1u; }
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_LE) { goto L_24f50ec; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x5u;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[8] - c->r[1];
    if (COND_NE) { c->r[7] = 0x4u; }
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + c->r[1];
    c->r[1] = 0x0u;
L_24f5090:;
    c->r[3] = c->r[2] + c->r[0];
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LS) { goto L_24f50a4; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    goto L_24f50dc;
L_24f50a4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[0] ^ c->r[1];
    c->r[0] = c->r[8];
    c->r[14] = 0x24f50b8u; f_28428e4(c);
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = clz32(c->r[2]);
    c->r[10] = c->r[1] | c->r[10];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] - 0x20u;
L_24f50dc:;
    c->r[5] = c->r[5] + 0x4u;
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[2] = c->r[7];
    if (COND_NE) { goto L_24f5090; }
L_24f50ec:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_24f515c; }
    c->r[2] = 0x766e30u;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x24f5114u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | (c->r[7] << 2);
    c->r[1] = c->r[10] + c->r[1];
    c->r[2] = c->r[2] + (c->r[3] << 3);
    c->r[3] = c->r[10] + (c->r[7] << 2);
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_24f5164; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[5];
    c->r[14] = 0x24f5148u; f_28428e4(c);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = (c->r[5] << 1);
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_GT) { goto L_24f516c; }
    goto L_24f521c;
L_24f515c:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
L_24f5164:;
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_LE) { goto L_24f521c; }
L_24f516c:;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[2] = c->r[8] - c->r[7];
    c->r[1] = c->r[8] - 0x1u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[7];
    if (COND_EQ) { goto L_24f51b8; }
    c->r[3] = 0x766da4u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x24f51a0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[6] << 3);
    c->r[2] = c->r[0] + c->r[2];
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + (c->r[7] << 2); ST32(ea, c->r[2]); }
    c->r[2] = c->r[7] + 0x1u;
L_24f51b8:;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_24f521c; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8] - c->r[2];
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x766d5cu;
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = 0x24f51e8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 3);
L_24f51e8:;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[7] = c->r[0] + c->r[7];
    c->r[7] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[0] + c->r[7];
    c->r[7] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x8u;
    if (COND_NE) { goto L_24f51e8; }
L_24f521c:;
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] - (c->r[7] << 2);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[6]); }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_24f531c; }
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f5274; }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    goto L_24f52fc;
L_24f5274:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f52f4; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LT) { goto L_24f52f4; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f52f4; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + (c->r[10] << 2);
    c->r[0] = (c->r[0] << 1);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LT) { goto L_24f52f4; }
    c->r[0] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[8] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8] + 0x58u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12];
    c->r[14] = 0x24f52ecu; f_2842adc(c);
    c->r[1] = c->r[0];
    goto L_24f52fc;
L_24f52f4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x2u; }
L_24f52fc:;
    c->r[0] = 0x674f37u;
    c->r[3] = 0x5u;
    { uint32_t ea = c->r[8] + 0x50u; ST32(ea, c->r[1]); }
    c->r[2] = 0x24f5310u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x24f5314u; f_2842a94(c);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
L_24f531c:;
    c->r[0] = 0x766c0cu;
    c->r[7] = (c->r[7] << 1);
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x24f5330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0x3u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[2] + c->r[1];
    c->r[2] = c->r[4] & 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + c->r[2];
    { uint32_t r = c->r[7] * c->r[10] + c->r[2]; c->r[3] = r; }
    { uint32_t ea = c->r[11] - 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[4]); }
    c->r[2] = c->r[3] & 0x1u;
    c->r[9] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[10] + c->r[9]; c->r[2] = r; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    c->r[14] = 0x24f539cu; f_283abec(c);
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8001u;
    { uint32_t ea = c->r[11] - 0xf0u; ST32(ea, c->r[9]); }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_24f5478; }
    c->r[3] = 0x766b60u;
    c->r[0] = 0x9u - c->r[7];
    c->r[1] = 0x200u;
    c->r[2] = 0x50000u;
    c->r[12] = c->r[1] | (c->r[0] << 10);
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = 0x24f53d8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_24f53d4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[6] = v; }
    c->r[4] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    c->r[6] = c->r[12] + (c->r[6] << 6);
    c->r[6] = c->r[6] - (c->r[4] << 6);
    c->r[4] = c->r[1] + 0x5u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t r = c->r[2] * c->r[4]; c->r[4] = r; }
    c->r[2] = c->r[2] + 0x10000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[6] = c->r[6] + (c->r[4] << 1);
    { uint32_t ea = c->r[9]; ST16(ea, c->r[6]); c->r[9] = c->r[9] + 0x2u; }
    if (COND_NE) { goto L_24f53d4; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[14] + 0x65u;
    c->r[12] = 0x0u;
L_24f5420:;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[1];
    c->r[1] = c->r[6];
L_24f542c:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[4] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[2] = c->r[4] - c->r[5];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[0]; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[0] = c->r[2];
    if (COND_NE) { goto L_24f542c; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[0] = c->r[2];
    (void)f_subs(c, c->r[12], c->r[10]);
    c->r[6] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { goto L_24f5420; }
    goto L_24f547c;
L_24f5478:;
    c->r[2] = c->r[14] + 0x65u;
L_24f547c:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x33u); }
    if (COND_LT) { goto L_24f5e58; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_24f5e58; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = 0x0u;
    c->r[9] = ~0x0u;
    c->r[7] = 0x0u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[6] - 0x2u;
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[14]); }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[0] + 0x4u;
    c->r[12] = c->r[0] - 0x2u;
    c->r[3] = c->r[0] + 0x2u;
    c->r[0] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[0] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[0];
    c->r[0] = c->r[6] - 0x4u;
    { uint32_t ea = c->r[11] - 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x1u;
    c->r[5] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[11] - 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x3u;
    { uint32_t ea = c->r[11] - 0x110u; ST32(ea, c->r[0]); }
L_24f5554:;
    { uint32_t r = c->r[7] * c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[6], 0x2u);
    { uint32_t ea = c->r[11] - 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST16(ea, c->r[7]); c->r[1] = ea; }
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_24f55d4; }
    c->r[0] = 0x1u;
    c->r[1] = c->r[3];
L_24f5598:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[2] = c->r[2] + 0x2u;
    c->r[7] = c->r[7] + 0x600u;
    c->r[4] = c->r[4] + 0x200u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_GT) { c->r[10] = c->r[0]; }
    (void)f_subs(c, c->r[7], c->r[3]);
    c->r[0] = c->r[0] + 0x1u;
    if (COND_LT) { c->r[3] = c->r[7]; }
    (void)f_subs(c, c->r[6], c->r[0]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] + 0x2u; }
    c->r[7] = c->r[3];
    if (COND_NE) { goto L_24f5598; }
L_24f55d4:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_24f5630; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + c->r[9];
    c->r[0] = c->r[12] + (c->r[10] << 1);
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[10] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[2] = c->r[10] + 0x1u;
L_24f55fc:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] - 0x2u; c->r[3] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[2] = c->r[2] - 0x1u;
    c->r[7] = c->r[7] + 0x800u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { c->r[3] = c->r[7]; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { c->r[3] = c->r[7]; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); c->r[0] = c->r[0] - 0x2u; }
    c->r[7] = c->r[3];
    if (COND_GT) { goto L_24f55fc; }
L_24f5630:;
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x104u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[14], 0x3u);
    c->r[4] = c->r[5];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[8]); }
    if (COND_LT) { goto L_24f5780; }
L_24f5654:;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[6] = c->r[1];
    c->r[5] = c->r[3];
    if (COND_GT) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GT) { c->r[5] = c->r[7]; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[3], c->r[7]);
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    if (COND_GT) { c->r[7] = c->r[3]; }
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[14] = c->r[7];
    if (COND_LE) { c->r[7] = c->r[0]; }
    if (COND_LE) { c->r[5] = c->r[6]; }
    if (COND_GT) { c->r[14] = c->r[0]; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_LE) { goto L_24f56d0; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GE) { goto L_24f56ec; }
    (void)f_subs(c, c->r[1], c->r[8]);
    c->r[0] = c->r[8];
    goto L_24f5704;
L_24f56d0:;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_GE) { goto L_24f56fc; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    (void)f_subs(c, c->r[0], c->r[8]);
    c->r[0] = c->r[8];
    if (COND_LT) { c->r[0] = c->r[14]; }
    goto L_24f5708;
L_24f56ec:;
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[0] = c->r[14];
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_24f5708;
L_24f56fc:;
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[0] = c->r[7];
L_24f5704:;
    if (COND_LT) { c->r[0] = c->r[1]; }
L_24f5708:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[0] - 0x400u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_GT) { goto L_24f5770; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LE) { goto L_24f5738; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GE) { goto L_24f574c; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_LT) { c->r[8] = c->r[1]; }
    goto L_24f5768;
L_24f5738:;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_GE) { goto L_24f575c; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_LT) { c->r[8] = c->r[14]; }
    goto L_24f5768;
L_24f574c:;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { c->r[14] = c->r[7]; }
    c->r[8] = c->r[14];
    goto L_24f5768;
L_24f575c:;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[7] = c->r[1]; }
    c->r[8] = c->r[7];
L_24f5768:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    c->r[9] = c->r[0] - 0x400u;
L_24f5770:;
    { uint32_t ea = c->r[2]; ST16(ea, c->r[9]); c->r[2] = c->r[2] + 0x2u; }
    c->r[4] = c->r[4] + 0x2u;
    c->r[12] = f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_24f5654; }
L_24f5780:;
    { uint32_t ea = c->r[11] - 0xecu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0xfc00u;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[2] = c->r[1];
    if (COND_GT) { c->r[2] = c->r[0]; }
    if (COND_GT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[7] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LE) { c->r[2] = c->r[0]; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    c->r[3] = c->r[2];
    if (COND_GT) { c->r[3] = c->r[0]; }
    if (COND_GT) { c->r[0] = c->r[2]; }
    c->r[2] = c->r[6] + (c->r[14] << 1);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[7] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LE) { c->r[3] = c->r[0]; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[6] + (c->r[2] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_24f5890; }
    { uint32_t ea = c->r[11] - 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
L_24f5874:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GT) { c->r[7] = c->r[3]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_NE) { goto L_24f5874; }
L_24f5890:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[4] + c->r[0];
    c->r[5] = c->r[5] + c->r[0];
    c->r[8] = c->r[8] + c->r[0];
    c->r[12] = c->r[12] + c->r[0];
    c->r[3] = c->r[3] + c->r[0];
    c->r[2] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[9] = c->r[9] + c->r[1];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_24f5554; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_NE) { goto L_24f5a04; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LE) { goto L_24f5e58; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    c->r[6] = 0x0u;
    c->r[1] = c->r[1] | (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - c->r[7];
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[3] = (c->r[7] << 1);
    c->r[2] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->r[8] = c->r[2] + (c->r[7] << 1);
L_24f5970:;
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[3] + c->r[6];
    c->r[4] = c->r[14] + c->r[5];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x1000u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[7]; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[2]); }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[2] = c->r[2] - 0x1000u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[7]; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[5] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[5] - c->r[2];
    c->r[5] = c->r[8] + c->r[6];
    c->r[6] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[4] = c->r[5] - c->r[4];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LE) { c->r[4] = c->r[12]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GT) { c->r[4] = c->r[4] + c->r[2]; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[2] = (c->r[4] >> 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_24f5970; }
    goto L_24f5a94;
L_24f5a04:;
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LE) { goto L_24f5e58; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[7] << 1);
    c->r[0] = c->r[0] - c->r[7];
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[6];
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] << 2);
    c->r[2] = c->r[2] + (c->r[7] << 1);
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
L_24f5a74:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[7] = v; }
    c->r[3] = c->r[7] - c->r[3];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LE) { c->r[3] = 0x0u; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] + 0x2u; }
    if (COND_NE) { goto L_24f5a74; }
L_24f5a94:;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_24f5e58; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 1);
    c->r[7] = c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[14] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[14] + c->r[3];
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[12];
L_24f5ae4:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[5] = v; }
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_GT) { c->r[5] = c->r[6]; }
    (void)f_subs(c, c->r[2], c->r[7]);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[5]); c->r[3] = c->r[3] + 0x2u; }
    if (COND_NE) { goto L_24f5ae4; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[7] = c->r[5];
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t r = c->r[7] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_24f5bbc; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4] - c->r[2];
    c->r[7] = c->r[2];
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f5b64; }
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[2] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] >> 1);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); }
    c->r[7] = c->r[2] + 0x1u;
L_24f5b64:;
    { uint32_t ea = c->r[11] - 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_24f5bbc; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4] - c->r[7];
    c->r[7] = c->r[2] + (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[2] + c->r[7];
    c->r[7] = c->r[7] + 0x2u;
L_24f5b98:;
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->r[6] = (c->r[6] >> 1);
    { uint32_t ea = c->r[7] - 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] >> 1);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); }
    c->r[7] = c->r[7] + 0x4u;
    if (COND_NE) { goto L_24f5b98; }
L_24f5bbc:;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[3] = c->r[2];
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[3] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_24f5d10; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 31);
    c->r[8] = c->r[2] + c->r[12];
    c->r[12] = 0xaaabu;
    c->r[0] = c->r[1] + (c->r[0] >> 30);
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x2aaa0000u;
    c->r[9] = (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[14] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[11] - 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[7] = c->r[0] + 0x2u;
L_24f5c28:;
    (void)f_subs(c, c->r[4], 0x7u);
    if (COND_GT) { goto L_24f5c44; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    goto L_24f5c64;
L_24f5c44:;
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0xcu);
    c->r[2] = c->r[0] + (c->r[4] << 1);
    c->r[0] = c->r[8] + c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    if (COND_GE) { c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]); }
    if (COND_GE) { c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1); }
    if (COND_GE) { { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); } }
L_24f5c64:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x1000u);
    c->r[0] = c->r[7];
    if (COND_GE) { c->r[1] = 0x1000u; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[10]; c->r[0] = r; }
    c->r[2] = sh_lsl(c->r[0], c->r[2]);
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_GT) { goto L_24f5cac; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 10);
    { uint32_t r = c->r[1] * c->r[2]; c->r[0] = r; }
    c->r[2] = (c->r[0] << 3);
    goto L_24f5ce0;
L_24f5cac:;
    (void)f_subs(c, c->r[2], 0x31u);
    if (COND_LT) { goto L_24f5cc8; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 7);
    { uint32_t r = c->r[1] * c->r[2]; c->r[0] = r; }
    c->r[2] = (uint32_t)(((int32_t)(c->r[0] << 3)) >> 3);
    goto L_24f5ce0;
L_24f5cc8:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[12]) >> 32);
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[2] = (c->r[0] << 4);
L_24f5ce0:;
    c->r[5] = c->r[2] + c->r[6];
    c->r[0] = (uint32_t)((int32_t)c->r[5] >> 6);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_GT) { goto L_24f5e4c; }
    { uint32_t ea = c->r[14] + (c->r[3] << 1); ST32(ea, c->r[1]); }
    c->r[4] = c->r[4] + 0x1u;
    c->r[3] = c->r[3] + 0x2u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_24f5c28; }
    goto L_24f5e58;
L_24f5d10:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x0u;
    c->r[0] = c->r[7] + (c->r[2] << 2);
    c->r[9] = c->r[7] + c->r[14];
    c->r[7] = 0x0u;
    c->r[4] = c->r[2];
    c->r[14] = c->r[9] + c->r[3];
    c->r[8] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[11] - 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 1);
    c->r[3] = c->r[0] + 0x2u;
L_24f5d44:;
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_GE) { goto L_24f5d70; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[6] = (c->r[2] << 1);
    c->r[2] = c->r[14] + c->r[7];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_24f5da8;
L_24f5d70:;
    { uint32_t ea = c->r[11] - 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0xcu);
    c->r[2] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[6] = v; }
    if (COND_LT) { goto L_24f5da8; }
    c->r[12] = c->r[5];
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[6] = (uint32_t)((int32_t)c->r[5] >> 1);
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
L_24f5da8:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1000u);
    c->r[0] = c->r[3];
    if (COND_GE) { c->r[6] = 0x1000u; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t r = c->r[0] * c->r[10]; c->r[0] = r; }
    c->r[0] = sh_lsl(c->r[0], c->r[1]);
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_GE) { goto L_24f5df0; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 10);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[6] = (c->r[0] << 3);
    goto L_24f5e28;
L_24f5df0:;
    (void)f_subs(c, c->r[0], 0x30u);
    if (COND_LE) { goto L_24f5e08; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 7);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[6] = (uint32_t)(((int32_t)(c->r[0] << 3)) >> 3);
    goto L_24f5e28;
L_24f5e08:;
    c->r[1] = 0xaaabu;
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2aaa0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[6] = (c->r[0] << 4);
L_24f5e28:;
    { uint32_t ea = c->r[8] + (c->r[7] << 1); ST32(ea, c->r[2]); }
    c->r[5] = c->r[6] + c->r[5];
    c->r[7] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { goto L_24f5d44; }
    goto L_24f5e58;
L_24f5e4c:;
    c->r[0] = (c->r[9] << 6) - c->r[6];
    c->r[5] = (c->r[9] << 6);
    { uint32_t ea = c->r[14] + (c->r[3] << 1); ST32(ea, c->r[0]); }
L_24f5e58:;
    c->r[0] = 0x7660bcu;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x24f5e80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_24f5ec8; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8u;
    (void)f_subs(c, c->r[2], 0x1au);
    if (COND_GT) { goto L_24f5eb4; }
    c->r[1] = 0x5556u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x55550000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[1]) >> 32);
    c->r[1] = c->r[1] + (c->r[1] >> 31);
L_24f5eb4:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x766074u;
    { uint32_t ea = 0x24f5ec8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
L_24f5ec8:;
    c->r[1] = 0x0u - c->r[2];
    c->r[1] = c->r[1] & 0x3u;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->r[1] = 0x766054u;
    { uint32_t ea = 0x24f5ee8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[2] + c->r[3];
    c->r[2] = c->r[9];
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[1]); }
    c->r[14] = 0x24f5efcu; f_28429a4(c);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 3);
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x24f5f10u; f_284289c(c);
    c->r[4] = c->r[0];
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_LE) { goto L_24f6090; }
    c->r[0] = 0x6u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
L_24f5f30:;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[11] - 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7] + 0x1u;
    c->r[0] = c->r[1] + (c->r[7] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t r = c->r[0] * c->r[10]; c->r[1] = r; }
    c->r[0] = 0x30u;
    c->r[2] = sh_lsl(c->r[1], c->r[9]);
    (void)f_subs(c, c->r[2], 0x30u);
    if (COND_GT) { c->r[0] = sh_lsl(c->r[1], c->r[9]); }
    c->r[1] = (c->r[2] << 3);
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[9] = c->r[0];
    if (COND_LT) { c->r[9] = (c->r[2] << 3); }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[2] - c->r[3];
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + (c->r[3] << 3);
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_GE) { goto L_24f6028; }
    c->r[0] = ~c->r[0];
    c->r[1] = ~c->r[1];
    c->r[8] = 0x0u;
    c->r[10] = 0x0u;
    c->r[2] = c->r[3];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[0]); }
L_24f5fb8:;
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_GE) { goto L_24f604c; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_LT) { c->r[1] = 0x1u; }
    c->r[14] = 0x24f5fe8u; f_28428e4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x24f5ff0u; f_284289c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_GE) { goto L_24f604c; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + c->r[9];
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = 0x1u;
    c->r[6] = c->r[6] + c->r[0];
    c->r[0] = c->r[4] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { goto L_24f5fb8; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[10];
    goto L_24f605c;
L_24f6028:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = 0x0u;
    goto L_24f6078;
L_24f604c:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[3] = c->r[3] + c->r[10];
    if (COND_EQ) { goto L_24f6070; }
L_24f605c:;
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LE) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
L_24f6070:;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
L_24f6078:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[1], c->r[8]);
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_24f5f30; }
L_24f6090:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[10], 0x2u);
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_24f6234; }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_24f61e0; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[8] = 0x0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[14] = v; }
L_24f60cc:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = sh_lsl(c->r[0], c->r[9]);
    c->r[0] = c->r[12] + (c->r[8] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], sh_lsl(c->r[0], c->r[9]));
    c->r[14] = (uint32_t)(uint16_t)(c->r[0]);
    if (COND_GE) { goto L_24f6148; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = sh_lsl(c->r[0], c->r[9]);
    c->r[0] = c->r[0] - c->r[2];
    c->r[9] = c->r[4] + (c->r[2] << 1);
    c->r[2] = c->r[3] + c->r[2];
    c->r[10] = c->r[4] + (c->r[2] << 1);
L_24f6108:;
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = c->r[10] + 0x2u; c->r[4] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = c->r[9] + 0x2u; c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[6], c->r[4]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    c->r[2] = f_adds(c, c->r[4], c->r[6]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[3] = c->r[3] + c->r[7];
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = c->r[3] + c->r[2];
    if (COND_MI) { c->r[4] = 0x0u - c->r[4]; }
    c->r[1] = c->r[6] + c->r[1];
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[1] = c->r[1] + c->r[4];
    if (COND_NE) { goto L_24f6108; }
L_24f6148:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[8], 0xdu);
    if (COND_NE) { goto L_24f60cc; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[2] = 0x5a82u;
    c->r[3] = 0xb504u;
    (void)f_subs(c, c->r[9], 0x2u);
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[7] = c->r[9] + 0x1u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[12] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[2] + (c->r[0] >> 15);
    c->r[2] = 0xdu;
    if (COND_LT) { c->r[2] = 0x5u; }
    c->r[2] = c->r[2] + sh_lsl(c->r[3], c->r[7]);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[2] = sh_lsl(c->r[3], c->r[7]);
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x0u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[0] = c->r[0] + (c->r[6] << 1);
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[1] = c->r[1] + (c->r[3] << 1);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x8cu; ST32(ea, c->r[2]); }
L_24f61e0:;
    { uint32_t ea = c->r[7] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x674076u;
    c->r[3] = 0x15u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4dd3u;
    c->r[2] = 0x24f6200u + c->r[2];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10620000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[1] = (c->r[0] >> 6);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->r[1] = 0x674030u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = 0x24f621cu + c->r[1];
    c->r[14] = 0x24f621cu; f_2842ae8(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_GT) { c->r[0] = c->r[6]; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[8]; }
    { uint32_t ea = c->r[7] + 0xbcu; ST32(ea, c->r[0]); }
L_24f6234:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = c->r[4] + 0x30u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { goto L_24f6708; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24f66e4; }
    c->r[12] = 0x500u;
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_NE) { goto L_24f6588; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xbcu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[12] = v; }
L_24f628c:;
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[12]);
    c->r[4] = 0x0u;
    c->r[1] = c->r[9] + (c->r[2] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[7] = c->r[1] - c->r[0];
    c->r[12] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[6] = sh_lsl(c->r[7], c->r[6]);
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_24f62ec; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + sh_lsl(c->r[0], c->r[4]);
    c->r[0] = sh_lsl(c->r[0], c->r[4]);
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 1);
    c->r[1] = c->r[4] + (c->r[1] << 1);
    c->r[4] = 0x0u;
L_24f62d8:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[7] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    if (COND_NE) { goto L_24f62d8; }
L_24f62ec:;
    c->r[0] = (uint32_t)((int32_t)c->r[4] >> 18);
    (void)f_subs(c, c->r[2], 0x8u);
    c->r[3] = c->r[0] + (uint32_t)(uint16_t)(c->r[3]);
    if (COND_NE) { goto L_24f628c; }
    c->r[0] = (c->r[3] << 16);
    c->r[1] = (uint32_t)(((int32_t)(c->r[3] << 16)) >> 19);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 31);
    c->r[8] = c->r[1] ^ (uint32_t)((int32_t)c->r[0] >> 31);
    (void)f_subs(c, c->r[8], 0x400u);
    c->r[2] = c->r[8];
    if (COND_GE) { c->r[2] = 0x400u; }
    (void)f_subs(c, c->r[14], 0x9u);
    if (COND_LT) { goto L_24f63a8; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = 0x8u;
L_24f632c:;
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[1] = c->r[9] + (c->r[6] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[1] - c->r[0];
    c->r[10] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[4] = sh_lsl(c->r[3], c->r[7]);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24f6388; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[12] + sh_lsl(c->r[0], c->r[7]);
    c->r[0] = sh_lsl(c->r[0], c->r[7]);
    c->r[7] = 0x0u;
    c->r[0] = c->r[3] + (c->r[0] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 1);
L_24f636c:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    if (COND_NE) { goto L_24f636c; }
    goto L_24f638c;
L_24f6388:;
    c->r[7] = 0x0u;
L_24f638c:;
    c->r[0] = (uint32_t)((int32_t)c->r[7] >> 18);
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 31);
    c->r[0] = c->r[0] ^ (uint32_t)((int32_t)c->r[7] >> 31);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GE) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[6], c->r[14]);
    if (COND_NE) { goto L_24f632c; }
L_24f63a8:;
    c->r[3] = 0x419u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[1] = 0x419u;
    c->r[12] = 0xf50eu;
    c->r[10] = 0x0u;
    c->r[4] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x0u;
    c->r[7] = 0x8001u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x100000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xeb9f0000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xe5770000u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x3d820000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x9f10000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    if (COND_LT) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[8], 0x400u);
    if (COND_LT) { c->r[1] = c->r[3] - c->r[8] * c->r[8]; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f647c; }
    c->r[6] = c->r[4];
    c->r[4] = 0x1fu;
    c->r[5] = clz32(c->r[1]);
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x10000u;
    c->r[5] = c->r[4] - c->r[5];
    c->r[4] = c->r[6];
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[5] = (c->r[5] << 26);
    c->r[6] = 0xfu - c->r[7];
    c->r[7] = f_subs(c, c->r[7], 0xfu);
    c->r[6] = sh_lsl(c->r[1], c->r[6]);
    if (COND_GT) { c->r[6] = sh_asr(c->r[1], c->r[7]); }
    c->r[1] = 0x40000000u;
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[1] + (c->r[6] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[14]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[6] = c->r[7] & (c->r[6] << 1);
    c->r[6] = c->r[6] + c->r[10];
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[6] = c->r[7] & (c->r[6] << 1);
    c->r[6] = c->r[6] + c->r[9];
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[1] = c->r[7] & (c->r[1] << 1);
    c->r[1] = c->r[1] + c->r[4];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 20);
    c->r[1] = c->r[5] + (c->r[1] << 16);
    c->r[1] = c->r[1] + 0xcc000000u;
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 16);
L_24f647c:;
    c->r[1] = c->r[3] - c->r[0] * c->r[0];
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[2], 0x400u);
    c->r[2] = 0x8000u;
    c->r[0] = (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xfa000000u;
    if (COND_GT) { c->r[1] = 0x419u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f6520; }
    c->r[3] = c->r[12];
    c->r[12] = c->r[9];
    c->r[9] = c->r[4];
    c->r[4] = 0x1fu;
    c->r[6] = clz32(c->r[1]);
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x10000u;
    c->r[6] = c->r[4] - c->r[6];
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[4] = 0xfu - c->r[5];
    c->r[5] = f_subs(c, c->r[5], 0xfu);
    c->r[4] = sh_lsl(c->r[1], c->r[4]);
    if (COND_GT) { c->r[4] = sh_asr(c->r[1], c->r[5]); }
    c->r[1] = 0x40000000u;
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[1] + (c->r[4] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[14]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[3] = c->r[5] & (c->r[3] << 1);
    c->r[3] = c->r[3] + c->r[10];
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[3] = c->r[5] & (c->r[3] << 1);
    c->r[3] = c->r[3] + c->r[12];
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[3] = (c->r[6] << 26);
    c->r[1] = c->r[5] & (c->r[1] << 1);
    c->r[1] = c->r[1] + c->r[9];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 20);
    c->r[1] = c->r[3] + (c->r[1] << 16);
    c->r[1] = c->r[1] + 0xcc000000u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
L_24f6520:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xf800u;
    c->r[12] = 0x100u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[1] + 0x400u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[0]; }
    c->r[0] = c->r[2] + (c->r[7] << 14);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (uint32_t)(((int32_t)(c->r[0] << 13)) >> 15);
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { c->r[1] = 0x5000000u; }
    if (COND_GE) { c->r[0] = c->r[1] + (c->r[0] << 16); }
    c->r[1] = 0x0u;
    if (COND_GE) { c->r[12] = (uint32_t)((int32_t)c->r[0] >> 16); }
    c->r[0] = c->r[2] + (c->r[3] << 14);
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 17);
    { uint32_t ea = c->r[2] + 0xb8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x40u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[2] + 0xb8u; ST16(ea, c->r[0]); }
L_24f6588:;
    c->r[14] = c->r[8] - 0x1u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_LT) { goto L_24f65e8; }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x2u - c->r[8];
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f65b4:;
    c->r[1] = c->r[14];
    c->r[7] = c->r[0];
    c->r[3] = c->r[8];
L_24f65c0:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[5] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t r = c->r[5] * c->r[3] + c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] + 0x2u;
    if (COND_NE) { goto L_24f65c0; }
    c->r[0] = c->r[7];
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_LT) { goto L_24f65b4; }
L_24f65e8:;
    { uint32_t r = c->r[14] * c->r[10]; c->r[0] = r; }
    c->r[0] = sdiv32(c->r[2], c->r[0]);
    c->r[0] = c->r[0] + 0x400u;
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[0] = 0xc05u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LE) { goto L_24f6624; }
    c->r[14] = 0xf800u;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[14] + 0x600u;
    goto L_24f664c;
L_24f6624:;
    c->r[0] = 0x5555u;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xf800u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd5550000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[0] = c->r[0] + (c->r[0] >> 31);
L_24f664c:;
    c->r[2] = 0xf3fbu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 6);
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[0] = 0x200u; }
    c->r[3] = c->r[1] - (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[2] = c->r[3] - (c->r[2] >> 2);
    c->r[2] = c->r[2] + c->r[12];
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[7] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f66c4; }
    c->v.s[0] = 0x3d4ccccdu;
    c->v.s[2] = LD32(c->r[7] + 128u);
    c->v.s[4] = 0x44000000u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[3] = c->v.s[0];
    (void)f_subs(c, c->r[3], 0x200u);
    c->r[2] = c->r[3];
    if (COND_GE) { c->r[2] = 0x200u; }
    (void)f_adds(c, c->r[3], 0x200u);
    if (COND_LT) { c->r[2] = c->r[14] + 0x600u; }
    c->r[0] = c->r[0] - c->r[2];
L_24f66c4:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[2] = 0xau;
    c->r[0] = c->r[0] + 0x80u;
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 8);
    (void)f_subs(c, c->r[3], 0xau);
    if (COND_LT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GT) { c->r[1] = c->r[2]; }
L_24f66e4:;
    c->r[0] = 0x673ba8u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[1]); }
    c->r[2] = 0x24f66f8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x24f66fcu; f_2842a94(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x24f6704u; f_284289c(c);
    c->r[4] = c->r[0];
L_24f6708:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_24f6770; }
    c->r[0] = 0xf800u;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x4fbu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[0] + 0x6c0u;
    { uint32_t r = c->r[10] * c->r[0] + c->r[6]; c->r[0] = r; }
    c->r[3] = c->r[0] - 0xa0u;
    c->r[0] = 0x3u - c->r[9];
    (void)f_subs(c, c->r[2], sh_lsr(c->r[1], c->r[0]));
    if (COND_GE) { c->r[2] = sh_lsr(c->r[1], c->r[0]); }
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[0] - c->r[9];
    { uint32_t ea = c->r[11] - 0xe0u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_24f677c; }
    { uint32_t ea = c->r[7] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] + sh_asr(c->r[0], c->r[1]);
    goto L_24f6784;
L_24f6770:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[5];
    goto L_24f6c98;
L_24f677c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xe4u; ST32(ea, c->r[0]); }
L_24f6784:;
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[1]; }
    { uint32_t ea = c->r[11] - 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[8] = sh_lsl(c->r[0], c->r[1]);
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_24f67f0; }
    (void)f_subs(c, c->r[7], c->r[14]);
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GT) { c->r[0] = c->r[14]; }
    c->r[0] = c->r[10] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + sh_lsl(c->r[0], c->r[1]);
L_24f67f0:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[3];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_24f6848; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.d[16] = 0x3fd999999999999aull;
    c->v.s[0] = LD32(c->r[0] + 136u);
    c->r[0] = c->r[3];
    c->v.df[17] = (double)c->v.f[0];
    vfp_cmp_d(c, c->v.df[17], c->v.df[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_24f6848; }
    c->v.s[2] = 0x3ecccccdu;
    c->r[0] = (c->r[8] << 3);
    c->v.s[4] = c->r[0];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[3] - c->r[0];
L_24f6848:;
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_24f68d0; }
    (void)f_subs(c, c->r[7], c->r[14]);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x6666u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    if (COND_GT) { c->r[7] = c->r[14]; }
    c->r[14] = c->r[5];
    (void)f_subs(c, c->r[12], 0x100u);
    c->r[5] = c->r[10] + (c->r[7] << 1);
    if (COND_GE) { c->r[12] = 0x100u; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[7] = sh_lsl(c->r[5], c->r[1]) - c->r[7];
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[7] = (c->r[7] << 19);
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    c->r[5] = sdiv32(c->r[5], c->r[4]);
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffe60000u;
    c->r[5] = c->r[5] + (c->r[12] << 16);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 15);
    c->r[3] = c->r[3] + (c->r[4] << 1);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[5] >> 16));
    c->r[5] = c->r[14];
    (void)f_subs(c, c->r[3], (uint32_t)((int32_t)c->r[7] >> 8));
    if (COND_GE) { c->r[3] = (uint32_t)((int32_t)c->r[7] >> 8); }
    c->r[0] = c->r[0] - c->r[3];
    goto L_24f68d4;
L_24f68d0:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_24f68d4:;
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x1392u;
    c->r[7] = 0x28fu;
    c->r[14] = c->r[9];
    c->r[9] = c->r[1];
    (void)f_subs(c, c->r[5], c->r[3]);
    c->r[5] = 0x10u;
    if (COND_EQ) { c->r[7] = 0x148u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[5] = c->r[4] - sh_lsl(c->r[5], c->r[1]);
    c->r[3] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[3] = c->r[3] - c->r[7];
    c->r[0] = c->r[0] + c->r[5];
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[3] = (c->r[3] << 16);
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 15);
    { uint32_t r = c->r[5] * c->r[7]; c->r[7] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[7] = c->r[0] + (c->r[3] << 1);
    if (COND_NE) { goto L_24f69a8; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_24f69a8; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0xbe19999au;
    c->v.s[4] = 0xbdb851ecu;
    c->v.s[8] = 0x0u;
    c->v.s[6] = 0x3f99999au;
    c->v.s[2] = LD32(c->r[0] + 124u);
    c->r[0] = (c->r[8] << 3);
    c->v.s[10] = c->r[0];
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[2] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[4] : c->v.s[10];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[2];
    c->r[7] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f69a8; }
    c->v.s[2] = 0x3f4ccccdu;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->r[7] = c->r[7] + c->r[0];
L_24f69a8:;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[2] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_24f69d8; }
    c->r[2] = c->r[7];
    goto L_24f69fc;
L_24f69d8:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[8] << 19);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = c->r[7] + (uint32_t)((int32_t)c->r[1] >> 10);
    c->r[1] = (uint32_t)((int32_t)c->r[7] >> 31);
    c->r[1] = c->r[7] + (c->r[1] >> 30);
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 2);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[1] >> 2); }
L_24f69fc:;
    { uint32_t ea = c->r[11] - 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10] + (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = sh_lsl(c->r[1], c->r[9]);
    { uint32_t r = c->r[10] * c->r[1]; c->r[1] = r; }
    c->r[1] = (c->r[1] << 19);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[1] = (uint32_t)((int32_t)c->r[2] >> 2);
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 10);
    (void)f_subs(c, c->r[7], (uint32_t)((int32_t)c->r[2] >> 2));
    if (COND_GT) { c->r[1] = (uint32_t)((int32_t)c->r[3] >> 10); }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f6ab0; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], 0xfa00u);
    if (COND_LT) { goto L_24f6a5c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f6ab8; }
L_24f6a5c:;
    c->r[0] = 0x7fffu;
    (void)f_subs(c, c->r[7], 0xfa00u);
    if (COND_GE) { goto L_24f6a74; }
    c->r[0] = c->r[7] - 0x7d00u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = 0x0u; }
L_24f6a74:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f6a8c; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x55c3u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[2]; }
L_24f6a8c:;
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + (c->r[0] << 1);
    c->r[1] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 15);
    goto L_24f6ab8;
L_24f6ab0:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
L_24f6ab8:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[12]);
    c->r[2] = 0xcccu;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { goto L_24f6b08; }
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { goto L_24f6b48; }
    c->r[0] = 0x3880u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[0] = c->r[0] + 0x3e80u;
    c->r[0] = c->r[0] - c->r[7];
    (void)f_subs(c, c->r[0], 0x7d00u);
    if (COND_GE) { c->r[0] = 0x7d00u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_24f6b1c; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[2] = 0xd01u;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[0] = (uint32_t)(((int32_t)(c->r[0] << 1)) >> 16);
    goto L_24f6b20;
L_24f6b08:;
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_24f6b48;
L_24f6b1c:;
    c->r[0] = 0x0u;
L_24f6b20:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[2] = (uint32_t)(((int32_t)(c->r[0] << 6)) >> 16);
    c->r[0] = (c->r[0] << 6);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[0] >> 16));
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 15);
L_24f6b48:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[3] << 1);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[1] = (c->r[3] << 1); }
    c->r[0] = c->r[1] + c->r[5];
    c->r[2] = c->r[2] + c->r[5];
    c->r[3] = 0x2u - c->r[7];
    c->r[1] = c->r[0] + 0x20u;
    c->r[6] = c->r[0] - c->r[6];
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x3fu;
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 6);
    (void)f_subs(c, c->r[2], (uint32_t)((int32_t)c->r[1] >> 6));
    if (COND_LE) { c->r[2] = (uint32_t)((int32_t)c->r[1] >> 6); }
    c->r[1] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[2]; }
    c->r[2] = 0x3c9u;
    c->r[8] = c->r[1] - c->r[7];
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[8];
    c->r[7] = (c->r[8] << 6);
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x21u;
    if (COND_NE) { c->r[4] = 0x2u; }
    if (COND_NE) { c->r[7] = 0x80u; }
    if (COND_NE) { c->r[6] = 0x0u; }
    (void)f_subs(c, c->r[1], c->r[2]);
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_GT) { goto L_24f6be8; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x150000u;
    c->r[0] = c->r[0] + (c->r[1] << 16);
    c->r[14] = 0x24f6be4u; f_2842878(c);
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
L_24f6be8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_24f6c74; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7] - c->r[1];
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[5] + 0xa4u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[5] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = sh_lsl(c->r[6], c->r[7]) - c->r[3];
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = (c->r[0] << 16);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[3] = c->r[3] - c->r[2];
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[7] >> 15);
    { uint32_t r = c->r[0] * c->r[3] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[5] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[5] + 0xacu; ST32(ea, c->r[0]); }
    if (COND_GE) { goto L_24f6c74; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 31);
    c->r[0] = c->r[1] + (c->r[0] >> 26);
    c->r[4] = c->r[8] - (uint32_t)((int32_t)c->r[0] >> 6);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[4] = 0x2u; }
L_24f6c74:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LT) { c->r[4] = c->r[0]; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0x24f6c98u; f_2842a7c(c);
L_24f6c98:;
    c->r[0] = 0x765298u;
    { uint32_t ea = 0x24f6ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u - c->r[1];
    c->r[2] = c->r[2] & 0x3u;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[1] + c->r[2];
    c->r[1] = 0x0u - c->r[5];
    c->r[1] = c->r[1] & 0x3u;
    c->r[1] = c->r[5] + c->r[1];
    c->r[6] = c->r[1] + c->r[2];
    c->r[1] = 0x0u - c->r[6];
    c->r[1] = c->r[1] & 0x3u;
    c->r[1] = c->r[6] + c->r[1];
    c->r[7] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x24f6ce4u; f_284289c(c);
    c->r[0] = (c->r[4] << 6) - c->r[0];
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[9], 0x2u);
    c->r[0] = c->r[0] - 0x1u;
    if (COND_LT) { goto L_24f6d34; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f6d38; }
    c->r[1] = 0x10u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] + (c->r[9] << 3);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { c->r[3] = 0x1u; }
    goto L_24f6d38;
L_24f6d34:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
L_24f6d38:;
    c->r[1] = c->r[6] + c->r[2];
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[11] - 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[7] + c->r[2];
    c->r[8] = c->r[5] + c->r[2];
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[6] = 0x8u; }
    c->r[12] = c->r[0] - c->r[6];
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f6dec; }
    c->r[1] = 0x7d00u;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[10] * c->r[1]; c->r[2] = r; }
    c->r[1] = 0xdu;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LT) { goto L_24f6dc8; }
    c->r[1] = 0xbb80u;
    { uint32_t r = c->r[10] * c->r[1]; c->r[2] = r; }
    c->r[1] = 0x10u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LT) { goto L_24f6dc8; }
    c->r[1] = 0xea60u;
    { uint32_t r = c->r[10] * c->r[1]; c->r[2] = r; }
    c->r[1] = 0x12u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LT) { goto L_24f6dc8; }
    c->r[1] = 0x3880u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t r = c->r[10] * c->r[1]; c->r[2] = r; }
    c->r[1] = 0x14u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LT) { c->r[1] = 0x13u; }
L_24f6dc8:;
    { uint32_t ea = c->r[3] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_24f6df8;
L_24f6dec:;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[2] - 0x1u;
L_24f6df8:;
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xa4u; ST32(ea, c->r[4]); }
    c->r[4] = (c->r[4] << 6);
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0xd8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    if (COND_NE) { c->r[1] = c->r[3]; }
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[11] - 0x54u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[11] - 0x8cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + 0xbcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[14] = 0x24f6e84u; f_2842a10(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f6eb0; }
    c->r[2] = c->r[1] - 0x1u;
    c->r[0] = c->r[3];
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
L_24f6eb0:;
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3);
    { uint32_t ea = c->r[11] - 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[11] - 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x24f6efcu; f_2842af4(c);
    c->r[0] = 0x76501cu;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[8], 0x2u);
    { uint32_t ea = 0x24f6f20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x8cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[2] - c->r[6];
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[10];
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + 0x4cu;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    c->r[4] = c->r[9];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[3];
    c->r[5] = 0x0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = c->r[2] + (c->r[1] << 1); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1u;
    c->r[2] = c->r[6];
    c->r[14] = 0x24f6fdcu; f_2842a28(c);
    { uint32_t ea = c->r[11] - 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f7004; }
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[7];
    if (COND_LT) { c->r[1] = 0x1u; }
    c->r[14] = 0x24f7004u; f_28428a8(c);
L_24f7004:;
    { uint32_t ea = c->r[11] - 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x20u;
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = c->r[4];
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x24f7054u; f_2842b00(c);
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[11] - 0xfcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { c->r[5] = 0x1u; }
    c->r[0] = c->r[0] & c->r[5];
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f70f4; }
    { uint32_t r = c->r[5] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[0] = c->r[5] - 0x1u;
    if (COND_EQ) { goto L_24f70b0; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x9000u;
    c->r[3] = c->r[1] + 0xc8u;
    c->r[1] = 0x0u;
L_24f709c:;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); c->r[3] = c->r[3] + 0x2u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_24f709c; }
    goto L_24f70b4;
L_24f70b0:;
    c->r[1] = 0x0u;
L_24f70b4:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_24f70f4; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5] - c->r[1];
    c->r[1] = c->r[2] + (c->r[1] << 1);
    c->r[2] = 0x9000u;
    c->r[1] = c->r[1] + 0xceu;
L_24f70d8:;
    { uint32_t ea = c->r[1] - 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x8u;
    c->r[0] = f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_24f70d8; }
L_24f70f4:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x6cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f7130; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + (c->r[8] << 1);
    c->r[14] = 0x24f712cu; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[6] = v; }
L_24f7130:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_24f718c; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_24f71b4; }
    { uint32_t ea = c->r[11] - 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[0] = c->r[0] + 0xc8u;
    c->r[1] = c->r[1] + (c->r[8] << 1);
    c->r[1] = c->r[1] + 0x1000u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[9]; c->r[1] = r; }
    c->r[1] = c->r[1] + 0xc8u;
L_24f7164:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + 0x2u; c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LT) { c->r[3] = c->r[2]; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] + 0x2u; }
    if (COND_NE) { goto L_24f7164; }
    goto L_24f71b4;
L_24f718c:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] << 1);
    c->r[2] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x24f71a4u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x24f71b4u; f_283aa78(c);
L_24f71b4:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24f7290; }
    { uint32_t ea = c->r[11] - 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[7] = 0x9000u;
    c->r[14] = 0x0u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = c->r[0] + (c->r[8] << 2);
    c->r[0] = c->r[0] + (c->r[8] << 1);
    c->r[1] = c->r[1] + 0x1000u;
    c->r[0] = c->r[0] + 0x1000u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[9]; c->r[1] = r; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[9]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0xf8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[1] + 0xc8u;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[8] - c->r[1];
    c->r[1] = c->r[0] + 0xc8u;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f7204:;
    { uint32_t ea = c->r[11] - 0xd0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = c->r[0];
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
L_24f7218:;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); c->r[0] = c->r[0] + 0x2u; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); c->r[2] = c->r[2] + 0x2u; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_24f7218; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GE) { goto L_24f7268; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[12];
L_24f7240:;
    c->r[5] = c->r[9] + c->r[0];
    c->r[0] = c->r[0] + 0x2u;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[6] = c->r[10] + c->r[5];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); }
    c->r[6] = c->r[4] + c->r[5];
    c->r[5] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    if (COND_NE) { goto L_24f7240; }
L_24f7268:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[14] + 0x1u;
    c->r[10] = c->r[10] + c->r[0];
    c->r[4] = c->r[4] + c->r[0];
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[14], c->r[0]);
    c->r[0] = c->r[10];
    if (COND_LT) { goto L_24f7204; }
    goto L_24f7350;
L_24f7290:;
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GE) { goto L_24f7350; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    c->r[6] = 0x9000u;
    c->r[0] = (c->r[0] << 2);
    c->r[4] = c->r[3];
    c->r[0] = c->r[0] + (c->r[3] << 1);
    c->r[0] = c->r[2] + c->r[0];
    c->r[14] = c->r[0] + 0xc8u;
    { uint32_t ea = c->r[11] - 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = c->r[0] + (c->r[8] << 2);
    c->r[1] = c->r[1] + 0x1000u;
    { uint32_t r = c->r[5] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[1] + (c->r[3] << 1);
    c->r[3] = c->r[8];
    c->r[0] = c->r[0] + (c->r[3] << 1);
    c->r[12] = c->r[3] - c->r[4];
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[0] + 0x1000u;
    c->r[8] = c->r[1] + 0xc8u;
    { uint32_t r = c->r[5] * c->r[0]; c->r[0] = r; }
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] + (c->r[4] << 1);
    c->r[0] = c->r[2] + c->r[0];
    c->r[4] = c->r[0] + 0xc8u;
L_24f730c:;
    c->r[0] = c->r[14];
    c->r[1] = c->r[8];
    c->r[3] = c->r[4];
    c->r[2] = c->r[12];
L_24f731c:;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); c->r[0] = c->r[0] + 0x2u; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[6]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[6]); c->r[3] = c->r[3] + 0x2u; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_24f731c; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[14] = c->r[14] + c->r[0];
    c->r[8] = c->r[8] + c->r[0];
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_24f730c; }
L_24f7350:;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_24f7374; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    goto L_24f7380;
L_24f7374:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
L_24f7380:;
    { uint32_t ea = c->r[11] - 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x24f7398u; f_2842b0c(c);
    c->r[0] = 0x764b98u;
    { uint32_t ea = 0x24f73a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[0] = ~0x2u; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
