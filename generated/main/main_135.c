#include "cpu.h"
#include "neon_rt.h"
void f_9af9b0(Cpu *c);
void f_9afacc(Cpu *c);
void f_9b18f0(Cpu *c);
void f_9b1ab0(Cpu *c);
void f_9b1b98(Cpu *c);
void f_9b1c84(Cpu *c);
void f_9b1d70(Cpu *c);
void f_9b1e70(Cpu *c);
void f_9b1f5c(Cpu *c);
void f_9b204c(Cpu *c);
void f_9b2138(Cpu *c);
void f_9b2238(Cpu *c);
void f_9b2328(Cpu *c);
void f_9b2474(Cpu *c);
void f_9b25e8(Cpu *c);
void f_9b2724(Cpu *c);
void f_9b281c(Cpu *c);
void f_9b2918(Cpu *c);
void f_9b2a24(Cpu *c);
void f_9b2b34(Cpu *c);
void f_9b2c34(Cpu *c);
void f_9b2d44(Cpu *c);
void f_9b364c(Cpu *c);
void f_9b4148(Cpu *c);
void f_9b4304(Cpu *c);
void f_9b44fc(Cpu *c);
void f_9b48fc(Cpu *c);
void f_9b4a20(Cpu *c);
void f_9b4b80(Cpu *c);
void f_9b4ce0(Cpu *c);
void f_9b4e24(Cpu *c);
void f_9b4f30(Cpu *c);
void f_9b5060(Cpu *c);
void f_9b51c4(Cpu *c);
void f_9b5388(Cpu *c);
void f_9b5554(Cpu *c);
void f_9b56d8(Cpu *c);
void f_9b5828(Cpu *c);
void f_9b5930(Cpu *c);
void f_9b5a60(Cpu *c);
void f_9b5b88(Cpu *c);
void f_9b5c84(Cpu *c);
void f_9b5d7c(Cpu *c);
void f_9b5e94(Cpu *c);
void f_9b6054(Cpu *c);
void f_9b62bc(Cpu *c);
void f_9b6480(Cpu *c);
void f_9b658c(Cpu *c);
void f_9b66c8(Cpu *c);
void f_9b6808(Cpu *c);
void f_9b6a14(Cpu *c);
void f_9b6c14(Cpu *c);
void f_9b6d1c(Cpu *c);
void f_9b716c(Cpu *c);
void f_9b7214(Cpu *c);
void f_9bb3ec(Cpu *c);
void f_9bb408(Cpu *c);
void f_9bb7b8(Cpu *c);
void f_9c8c8c(Cpu *c);
void f_9c8cbc(Cpu *c);
void f_9c9288(Cpu *c);
void f_a33974(Cpu *c);
void f_a3dd3c(Cpu *c);
void f_a3dec8(Cpu *c);
void f_a3df48(Cpu *c);
void f_a41928(Cpu *c);
void f_a41980(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15f0088(Cpu *c);
void f_a33974(Cpu *restrict c) {
    FN_ENTER(0xa33974u);
L_a33974:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x150u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[2];
    c->r[8] = c->r[3];
    c->r[9] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a339fc; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa339b8u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd1de82u;
    c->r[1] = 0xa339c8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa339ccu; f_a3dec8(c);
    { uint32_t ea = c->r[5] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_a33a80; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
L_a339e0:;
    { uint32_t ea = c->r[1] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_a33a24; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_a339e0; }
    goto L_a33a80;
L_a339fc:;
    c->r[0] = 0xd1de42u;
    c->r[1] = 0xa33a08u + c->r[0];
    c->r[0] = 0xd3a62eu;
    c->r[2] = 0xa33a10u + c->r[0];
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_a3dec8(c);
L_a33a24:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_a33a80; }
    c->r[0] = c->r[1] + (c->r[7] << 3);
    c->r[1] = ~0x80000001u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a33a74; }
    c->r[0] = 0xd3a7deu;
    c->r[2] = c->r[7];
    c->r[1] = 0xa33a50u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa33a54u; f_15f0088(c);
    c->r[0] = 0xd289c3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa33a64u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa33a68u; f_a3dec8(c);
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a33a74:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_a33b74; }
    goto L_a379bc;
L_a33a80:;
    { uint32_t ea = c->r[5] + 0x100u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GE) { goto L_a33a94; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_a33b0c;
L_a33a94:;
    c->r[0] = 0x10059a4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa33aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[10] = (c->r[4] << 4);
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0xa33ac0u; rt_dispatch(c);
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[0];
    c->r[14] = 0xa33ad0u; f_15efd7c(c);
    { uint32_t ea = c->r[5] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 3);
    c->r[0] = c->r[7];
    c->r[14] = 0xa33ae4u; f_15efdd0(c);
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa33afcu; rt_dispatch(c);
    c->r[0] = (c->r[4] << 1);
    { uint32_t ea = c->r[5] + 0x108u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a33b0c:;
    { uint32_t ea = c->r[7] + (c->r[0] << 3); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x80000001u;
    { uint32_t ea = c->r[5] + 0x104u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[5] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a33b74; }
    c->r[0] = 0xd3a6d2u;
    c->r[2] = c->r[7];
    c->r[1] = 0xa33b5cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa33b60u; f_15f0088(c);
    c->r[0] = 0xd288b7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa33b70u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa33b74u; f_a3dec8(c);
L_a33b74:;
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_a379bc; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x148u;
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xa33b9cu; f_9bb3ec(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa33bb0u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa33bb8u; f_9bb408(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a379b4; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd362b3u;
    c->r[0] = 0xa33bdcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd3a5edu;
    c->r[0] = 0xa33be8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd39c08u;
    c->r[0] = 0xa33bf4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd3628fu;
    c->r[0] = 0xa33c00u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd1dc3eu;
    c->r[0] = 0xa33c0cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd1e4dbu;
    c->r[0] = 0xa33c18u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd2880cu;
    c->r[0] = 0xa33c24u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_a33c24:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a379a8; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_a33c4c; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_a33c58; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a33c58; }
    goto L_a379a8;
L_a33c4c:;
    c->r[1] = c->r[0] & 0x5000000u;
    (void)f_subs(c, c->r[1], 0x1000000u);
    if (COND_EQ) { goto L_a379a8; }
L_a33c58:;
    c->r[1] = 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a33cd8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xa33c74u; f_a3dd3c(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xa33c84u; f_a3dec8(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xa33c8cu; f_9afacc(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa33c9cu; f_a3dec8(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xa33ca4u; f_9b716c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa33cb4u; f_15f0088(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0xa33cc4u; f_a3dec8(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xa33cccu; f_9b716c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_a37994; }
L_a33cd8:;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    goto L_a33d3c;
L_a33ce4:;
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = 0xd3a585u;
    c->r[1] = 0xa33cf4u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa33d00u; f_15f0088(c);
    c->r[0] = 0xd3496eu;
    c->r[1] = 0xa33d0cu + c->r[0];
    goto L_a33d28;
L_a33d0c:;
    c->r[0] = 0xd1e3d7u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xa33d1cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa33d20u; f_15f0088(c);
    c->r[0] = 0xd3494eu;
    c->r[1] = 0xa33d2cu + c->r[0];
L_a33d28:;
    c->r[0] = c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0xa33d34u; f_a3dec8(c);
L_a33d34:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_a3797c;
L_a33d3c:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa33d44u; f_9afacc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa33d50u; f_a3dd3c(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a33d74; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0xa33d6cu; f_a3dec8(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_a33d78;
L_a33d74:;
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[8]); }
L_a33d78:;
    c->r[0] = ~0x0u;
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[0], 0x48u);
    if (COND_HI) { goto L_a34904; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xa33d94u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa33ebcu: goto L_a33ebc; case 0xa33f20u: goto L_a33f20; case 0xa33f4cu: goto L_a33f4c; case 0xa33fdcu: goto L_a33fdc; case 0xa34098u: goto L_a34098; case 0xa34108u: goto L_a34108; case 0xa341d8u: goto L_a341d8; case 0xa341fcu: goto L_a341fc; case 0xa34224u: goto L_a34224; case 0xa3424cu: goto L_a3424c; case 0xa34274u: goto L_a34274; case 0xa342a0u: goto L_a342a0; case 0xa342c8u: goto L_a342c8; case 0xa342f0u: goto L_a342f0; case 0xa34318u: goto L_a34318; case 0xa34344u: goto L_a34344; case 0xa34370u: goto L_a34370; case 0xa34398u: goto L_a34398; case 0xa34438u: goto L_a34438; case 0xa3448cu: goto L_a3448c; case 0xa344e0u: goto L_a344e0; case 0xa3457cu: goto L_a3457c; case 0xa34848u: goto L_a34848; case 0xa34904u: goto L_a34904; case 0xa34994u: goto L_a34994; case 0xa34be8u: goto L_a34be8; case 0xa34c54u: goto L_a34c54; case 0xa34d68u: goto L_a34d68; case 0xa34e88u: goto L_a34e88; case 0xa34fb0u: goto L_a34fb0; case 0xa35074u: goto L_a35074; case 0xa35164u: goto L_a35164; case 0xa352e0u: goto L_a352e0; case 0xa3545cu: goto L_a3545c; case 0xa357d0u: goto L_a357d0; case 0xa35944u: goto L_a35944; case 0xa35b18u: goto L_a35b18; case 0xa35cacu: goto L_a35cac; case 0xa35e38u: goto L_a35e38; case 0xa35f54u: goto L_a35f54; case 0xa35fb4u: goto L_a35fb4; case 0xa36020u: goto L_a36020; case 0xa360b8u: goto L_a360b8; case 0xa363e8u: goto L_a363e8; case 0xa36878u: goto L_a36878; case 0xa36cc8u: goto L_a36cc8; case 0xa36dc8u: goto L_a36dc8; case 0xa36e6cu: goto L_a36e6c; case 0xa37020u: goto L_a37020; case 0xa37148u: goto L_a37148; case 0xa372d4u: goto L_a372d4; case 0xa37460u: goto L_a37460; case 0xa374a4u: goto L_a374a4; case 0xa37568u: goto L_a37568; case 0xa375d8u: goto L_a375d8; case 0xa37650u: goto L_a37650; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a33ebc:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa33ec4u; f_9b25e8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a3416c; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa33ed8u; f_15efd88(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a3416c; }
    c->r[0] = 0x1004c94u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa33ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0xa33f04u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x1u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[7] + 0x8u;
    c->r[14] = 0xa33f1cu; f_15efd94(c);
    goto L_a34170;
L_a33f20:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa33f28u; f_9b18f0(c);
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    if (COND_EQ) { c->r[3] = 0x1u; }
    if (COND_NE) { c->r[3] = 0x0u; }
    c->r[14] = 0xa33f48u; f_a33974(c);
    goto L_a3797c;
L_a33f4c:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa33f58u; f_9b7214(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2feaau;
    c->r[7] = 0xa33f68u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa33f78u; f_15f0088(c);
    c->r[0] = 0xd34a34u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa33f88u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa33f8cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa33fa4u; f_15f0088(c);
    c->r[0] = 0xd34a0au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa33fb4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa33fb8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa33fd0u; f_15f0088(c);
    c->r[0] = 0xd349e4u;
    c->r[1] = 0xa33fdcu + c->r[0];
    goto L_a37970;
L_a33fdc:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa33fe8u; f_9b7214(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2fe1au;
    c->r[7] = 0xa33ff8u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34008u; f_15f0088(c);
    c->r[0] = 0xd349a4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34018u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3401cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34034u; f_15f0088(c);
    c->r[0] = 0xd3497au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34044u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34048u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34060u; f_15f0088(c);
    c->r[0] = 0xd34950u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34070u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34074u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3408cu; f_15f0088(c);
    c->r[0] = 0xd39fbau;
    c->r[1] = 0xa34098u + c->r[0];
    goto L_a37970;
L_a34098:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa340a4u; f_9b4304(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a37710; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa340bcu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd3a0f3u;
    c->r[1] = 0xa340ccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa340d0u; f_a3dec8(c);
    { uint32_t ea = c->r[5] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_a3776c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x108u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
L_a340ec:;
    { uint32_t ea = c->r[7] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_a37764; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { goto L_a340ec; }
    goto L_a37768;
L_a34108:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34114u; f_9b7214(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2fceeu;
    c->r[4] = 0xa34124u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[4];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34134u; f_15f0088(c);
    c->r[0] = 0xd34878u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34144u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34148u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34160u; f_15f0088(c);
    c->r[0] = 0xd34852u;
    c->r[1] = 0xa3416cu + c->r[0];
    goto L_a37970;
L_a3416c:;
    c->r[7] = 0x0u;
L_a34170:;
    c->r[0] = 0xd1cbf2u;
    c->r[2] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[2] = 0xa34184u + c->r[0]; }
    c->r[0] = 0xd344eeu;
    c->r[1] = 0xa3418cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34190u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a3797c; }
L_a3419c:;
    c->r[0] = ldrex32(c, c->r[7]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[7], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a3419c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a3797c; }
    c->r[0] = 0x10049c4u;
    { uint32_t ea = 0xa341c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa341d4u; rt_dispatch(c);
    goto L_a3797c;
L_a341d8:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa341e0u; f_9b1ab0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a3773c; }
    c->r[0] = 0xd34486u;
    c->r[1] = 0xa341f4u + c->r[0];
    c->r[0] = 0xd39e47u;
    c->r[2] = 0xa341fcu + c->r[0];
    goto L_a3774c;
L_a341fc:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa34204u; f_9b1b98(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd3a01au;
    c->r[1] = 0xa34214u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34218u; f_15f0088(c);
    c->r[0] = 0xd34456u;
    c->r[1] = 0xa34224u + c->r[0];
    goto L_a37970;
L_a34224:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa3422cu; f_9b1c84(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd39ff2u;
    c->r[1] = 0xa3423cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34240u; f_15f0088(c);
    c->r[0] = 0xd3442eu;
    c->r[1] = 0xa3424cu + c->r[0];
    goto L_a37970;
L_a3424c:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa34254u; f_9b1d70(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd39fcau;
    c->r[1] = 0xa34264u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34268u; f_15f0088(c);
    c->r[0] = 0xd34406u;
    c->r[1] = 0xa34274u + c->r[0];
    goto L_a37970;
L_a34274:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa3427cu; f_9b1e70(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd39dbdu;
    c->r[3] = c->r[1];
    c->r[1] = 0xa34290u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34294u; f_15f0088(c);
    c->r[0] = 0xd343dau;
    c->r[1] = 0xa342a0u + c->r[0];
    goto L_a37970;
L_a342a0:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa342a8u; f_9b1f5c(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd1de3bu;
    c->r[1] = 0xa342b8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa342bcu; f_15f0088(c);
    c->r[0] = 0xd343b2u;
    c->r[1] = 0xa342c8u + c->r[0];
    goto L_a37970;
L_a342c8:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa342d0u; f_9b204c(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd1de13u;
    c->r[1] = 0xa342e0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa342e4u; f_15f0088(c);
    c->r[0] = 0xd3438au;
    c->r[1] = 0xa342f0u + c->r[0];
    goto L_a37970;
L_a342f0:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa342f8u; f_9b2138(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd1ddebu;
    c->r[1] = 0xa34308u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa3430cu; f_15f0088(c);
    c->r[0] = 0xd34362u;
    c->r[1] = 0xa34318u + c->r[0];
    goto L_a37970;
L_a34318:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa34320u; f_9b2238(c);
    c->r[2] = c->r[0];
    c->r[0] = 0xd39d14u;
    c->r[3] = c->r[1];
    c->r[1] = 0xa34334u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34338u; f_15f0088(c);
    c->r[0] = 0xd34336u;
    c->r[1] = 0xa34344u + c->r[0];
    goto L_a37970;
L_a34344:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa3434cu; f_9b2328(c);
    c->v.df[16] = (double)c->v.f[0];
    c->r[0] = 0xd2fab6u;
    c->r[1] = 0xa3435cu + c->r[0];
    c->r[0] = c->r[5];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34364u; f_15f0088(c);
    c->r[0] = 0xd3430au;
    c->r[1] = 0xa34370u + c->r[0];
    goto L_a37970;
L_a34370:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa34378u; f_9b2474(c);
    c->r[0] = 0xd39eedu;
    { uint64_t v = c->v.d[0]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[1] = 0xa34388u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa3438cu; f_15f0088(c);
    c->r[0] = 0xd342e2u;
    c->r[1] = 0xa34398u + c->r[0];
    goto L_a37970;
L_a34398:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa343a4u; f_9b2724(c);
    c->r[0] = 0xd1dd3fu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = 0xa343b4u + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa343bcu; f_15f0088(c);
    c->r[0] = 0xd39c8eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa343ccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa343d0u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = (c->r[0] >> 8) & 0xffu;
    c->r[0] = c->r[5];
    c->r[14] = 0xa343e4u; f_15f0088(c);
    c->r[0] = 0xd39c68u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa343f4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa343f8u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x32u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa34408u; f_15f0088(c);
    c->r[0] = 0xd390b9u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34418u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3441cu; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x33u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa3442cu; f_15f0088(c);
    c->r[0] = 0xd3985bu;
    c->r[1] = 0xa34438u + c->r[0];
    goto L_a37970;
L_a34438:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34444u; f_9b281c(c);
    c->r[0] = 0xd1dc9fu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0xa34454u + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa3445cu; f_15f0088(c);
    c->r[0] = 0xd34550u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3446cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34470u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa34480u; f_15f0088(c);
    c->r[0] = 0xd34532u;
    c->r[1] = 0xa3448cu + c->r[0];
    goto L_a37970;
L_a3448c:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34498u; f_9b2918(c);
    c->r[0] = 0xd1dc4bu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0xa344a8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa344b0u; f_15f0088(c);
    c->r[0] = 0xd39b92u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa344c0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa344c4u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa344d4u; f_15f0088(c);
    c->r[0] = 0xd39b74u;
    c->r[1] = 0xa344e0u + c->r[0];
    goto L_a37970;
L_a344e0:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa344ecu; f_9b2a24(c);
    c->r[0] = 0xd1dbf7u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xa344fcu + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa34504u; f_15f0088(c);
    c->r[0] = 0xd39b42u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34514u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34518u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa34528u; f_15f0088(c);
    c->r[0] = 0xd39b20u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34538u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3453cu; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa3454cu; f_15f0088(c);
    c->r[0] = 0xd39afeu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3455cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34560u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xa34570u; f_15f0088(c);
    c->r[0] = 0xd38f55u;
    c->r[1] = 0xa3457cu + c->r[0];
    goto L_a37970;
L_a3457c:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34588u; f_9b364c(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2f87au;
    c->r[7] = 0xa34598u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa345a8u; f_15f0088(c);
    c->r[0] = 0xd39afeu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa345b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa345bcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa345d4u; f_15f0088(c);
    c->r[0] = 0xd39ad6u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa345e4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa345e8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34600u; f_15f0088(c);
    c->r[0] = 0xd39aaeu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34610u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34614u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3462cu; f_15f0088(c);
    c->r[0] = 0xd39a86u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3463cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34640u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34658u; f_15f0088(c);
    c->r[0] = 0xd39a5eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34668u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3466cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34684u; f_15f0088(c);
    c->r[0] = 0xd39a36u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34694u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34698u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa346b0u; f_15f0088(c);
    c->r[0] = 0xd39a0eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa346c0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa346c4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa346dcu; f_15f0088(c);
    c->r[0] = 0xd399e6u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa346ecu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa346f0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34708u; f_15f0088(c);
    c->r[0] = 0xd399beu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34718u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3471cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34734u; f_15f0088(c);
    c->r[0] = 0xd39996u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34744u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34748u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34760u; f_15f0088(c);
    c->r[0] = 0xd3996eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34770u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34774u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 92u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3478cu; f_15f0088(c);
    c->r[0] = 0xd39946u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3479cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa347a0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa347b8u; f_15f0088(c);
    c->r[0] = 0xd3991eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa347c8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa347ccu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 100u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa347e4u; f_15f0088(c);
    c->r[0] = 0xd398f6u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa347f4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa347f8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 104u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34810u; f_15f0088(c);
    c->r[0] = 0xd398ceu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34820u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34824u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 108u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3483cu; f_15f0088(c);
    c->r[0] = 0xd398aau;
    c->r[1] = 0xa34848u + c->r[0];
    goto L_a37970;
L_a34848:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34854u; f_9b4148(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2f5aeu;
    c->r[7] = 0xa34864u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34874u; f_15f0088(c);
    c->r[0] = 0xd34138u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34884u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34888u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa348a0u; f_15f0088(c);
    c->r[0] = 0xd3410eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa348b0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa348b4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa348ccu; f_15f0088(c);
    c->r[0] = 0xd340e4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa348dcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa348e0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa348f8u; f_15f0088(c);
    c->r[0] = 0xd3974eu;
    c->r[1] = 0xa34904u + c->r[0];
    goto L_a37970;
L_a34904:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[14] = 0xa3490cu; f_9af9b0(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa34920u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34930u; f_a3dec8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa34948u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a33d34; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_a34958:;
    { uint32_t ea = c->r[4] - 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[9];
    c->r[14] = 0xa34964u; f_a3dec8(c);
    c->r[4] = c->r[4] + 0x8u;
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_a34958; }
    goto L_a33d34;
L_a34994:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa349a0u; f_9b44fc(c);
    c->r[0] = 0x1005fccu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa349b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[3];
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a349cc; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xa349ccu; f_9c9288(c);
L_a349cc:;
    c->r[0] = 0x1005fa8u;
    c->r[1] = 0x76cu;
    { uint32_t ea = 0xa349dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + c->r[1];
    c->r[0] = 0xd1d707u;
    c->r[1] = 0xa349ecu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa349f0u; f_15f0088(c);
    c->r[0] = 0xd39694u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34a00u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34a04u; f_a3dec8(c);
    c->r[0] = 0x1005f68u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa34a18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[3];
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a34a30; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xa34a30u; f_9c9288(c);
L_a34a30:;
    c->r[0] = 0x1005f44u;
    c->r[1] = 0xd1d6afu;
    { uint32_t ea = 0xa34a40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa34a44u + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa34a50u; f_15f0088(c);
    c->r[0] = 0xd39639u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34a60u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34a64u; f_a3dec8(c);
    c->r[0] = 0x1005f08u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa34a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[3];
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a34a90; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xa34a90u; f_9c9288(c);
L_a34a90:;
    c->r[0] = 0x1005ee8u;
    { uint32_t ea = 0xa34a9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd1d64bu;
    c->r[1] = 0xa34aa8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34aacu; f_15f0088(c);
    c->r[0] = 0xd395e3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34abcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34ac0u; f_a3dec8(c);
    c->r[0] = 0x1005eacu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa34ad4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[3];
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a34aec; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xa34aecu; f_9c9288(c);
L_a34aec:;
    c->r[0] = 0x1005e8cu;
    { uint32_t ea = 0xa34af8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd1d5efu;
    c->r[1] = 0xa34b04u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34b08u; f_15f0088(c);
    c->r[0] = 0xd3958bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34b18u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34b1cu; f_a3dec8(c);
    c->r[0] = 0x1005e50u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa34b30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[3];
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a34b48; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xa34b48u; f_9c9288(c);
L_a34b48:;
    c->r[0] = 0x1005e30u;
    { uint32_t ea = 0xa34b54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd1d593u;
    c->r[1] = 0xa34b60u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34b64u; f_15f0088(c);
    c->r[0] = 0xd39534u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34b74u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34b78u; f_a3dec8(c);
    c->r[0] = 0x1005df4u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa34b8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] ^ c->r[3];
    c->r[0] = c->r[0] ^ c->r[2];
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a34ba4; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xa34ba4u; f_9c9288(c);
L_a34ba4:;
    c->r[0] = 0x1005dd4u;
    { uint32_t ea = 0xa34bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xd1d537u;
    c->r[1] = 0xa34bbcu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa34bc0u; f_15f0088(c);
    c->r[0] = 0xd394e3u;
    c->r[1] = 0xa34bccu + c->r[0];
    goto L_a37970;
L_a34be8:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa34bf0u; f_9b48fc(c);
    c->v.df[16] = (double)c->v.f[0];
    c->r[0] = 0xd2f20eu;
    c->v.s[16] = c->v.s[1];
    c->r[4] = 0xa34c04u + c->r[0];
    c->r[0] = c->r[5];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[1] = c->r[4];
    c->r[14] = 0xa34c10u; f_15f0088(c);
    c->r[0] = 0xd3943eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34c20u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34c24u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34c38u; f_15f0088(c);
    c->r[0] = 0xd3941du;
    c->r[1] = 0xa34c44u + c->r[0];
    goto L_a37970;
L_a34c54:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34c60u; f_9b4a20(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd39609u;
    c->r[7] = 0xa34c70u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34c80u; f_15f0088(c);
    c->r[0] = 0xd393d4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34c90u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34c94u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34cacu; f_15f0088(c);
    c->r[0] = 0xd393abu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34cbcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34cc0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34cd8u; f_15f0088(c);
    c->r[0] = 0xd3940eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34ce8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34cecu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34d04u; f_15f0088(c);
    c->r[0] = 0xd393e5u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34d14u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34d18u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34d30u; f_15f0088(c);
    c->r[0] = 0xd393beu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34d40u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34d44u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34d5cu; f_15f0088(c);
    c->r[0] = 0xd3939bu;
    c->r[1] = 0xa34d68u + c->r[0];
    goto L_a37970;
L_a34d68:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34d74u; f_9b4b80(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd394f5u;
    c->r[7] = 0xa34d84u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34d94u; f_15f0088(c);
    c->r[0] = 0xd392c0u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34da4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34da8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34dc0u; f_15f0088(c);
    c->r[0] = 0xd39297u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34dd0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34dd4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34decu; f_15f0088(c);
    c->r[0] = 0xd392fau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34dfcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34e00u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34e18u; f_15f0088(c);
    c->r[0] = 0xd39242u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34e28u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34e2cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34e44u; f_15f0088(c);
    c->r[0] = 0xd39219u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34e54u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34e58u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34e70u; f_15f0088(c);
    c->r[0] = 0xd3928cu;
    c->r[1] = 0xa34e7cu + c->r[0];
    goto L_a37970;
L_a34e88:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa34e94u; f_9b4ce0(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd393d5u;
    c->r[7] = 0xa34ea4u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34eb4u; f_15f0088(c);
    c->r[0] = 0xd33af8u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34ec4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34ec8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34ee0u; f_15f0088(c);
    c->r[0] = 0xd33aceu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34ef0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34ef4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34f0cu; f_15f0088(c);
    c->r[0] = 0xd33aa4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34f1cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34f20u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34f38u; f_15f0088(c);
    c->r[0] = 0xd391b1u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34f48u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34f4cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34f64u; f_15f0088(c);
    c->r[0] = 0xd3918au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34f74u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34f78u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa34f90u; f_15f0088(c);
    c->r[0] = 0xd39167u;
    c->r[1] = 0xa34f9cu + c->r[0];
    goto L_a37970;
L_a34fb0:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa34fb8u; f_9b4e24(c);
    c->v.df[16] = (double)c->v.f[0];
    c->r[0] = 0xd392a5u;
    c->v.s[16] = c->v.s[1];
    c->v.s[18] = c->v.s[2];
    c->v.s[20] = c->v.s[3];
    c->r[7] = 0xa34fd4u + c->r[0];
    c->r[0] = c->r[5];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[1] = c->r[7];
    c->r[14] = 0xa34fe0u; f_15f0088(c);
    c->r[0] = 0xd3917bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa34ff0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa34ff4u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35008u; f_15f0088(c);
    c->r[0] = 0xd39156u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35018u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3501cu; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[18];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35030u; f_15f0088(c);
    c->r[0] = 0xd39131u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35040u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35044u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[20];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35058u; f_15f0088(c);
    c->r[0] = 0xd39110u;
    c->r[1] = 0xa35064u + c->r[0];
    goto L_a37970;
L_a35074:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa3507cu; f_9b4f30(c);
    c->v.df[16] = (double)c->v.f[0];
    c->r[0] = 0xd391e1u;
    c->v.s[16] = c->v.s[1];
    c->v.s[18] = c->v.s[2];
    c->v.s[20] = c->v.s[3];
    c->r[7] = 0xa35098u + c->r[0];
    c->r[0] = c->r[5];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[1] = c->r[7];
    c->r[14] = 0xa350a4u; f_15f0088(c);
    c->r[0] = 0xd33908u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa350b4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa350b8u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa350ccu; f_15f0088(c);
    c->r[0] = 0xd338e2u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa350dcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa350e0u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[18];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa350f4u; f_15f0088(c);
    c->r[0] = 0xd338bcu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35104u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35108u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[20];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3511cu; f_15f0088(c);
    c->r[0] = 0xd38f32u;
    c->r[1] = 0xa35128u + c->r[0];
    goto L_a37970;
L_a35164:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35170u; f_9b5060(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd390f9u;
    c->r[7] = 0xa35180u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35190u; f_15f0088(c);
    c->r[0] = 0xd38ec4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa351a0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa351a4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa351bcu; f_15f0088(c);
    c->r[0] = 0xd38e9bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa351ccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa351d0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa351e8u; f_15f0088(c);
    c->r[0] = 0xd38efeu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa351f8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa351fcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35214u; f_15f0088(c);
    c->r[0] = 0xd38e46u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35224u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35228u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35240u; f_15f0088(c);
    c->r[0] = 0xd38e1du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35250u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35254u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3526cu; f_15f0088(c);
    c->r[0] = 0xd38e8cu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3527cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35280u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35298u; f_15f0088(c);
    c->r[0] = 0xd38db6u;
    c->r[1] = 0xa352a4u + c->r[0];
    goto L_a37970;
L_a352e0:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa352ecu; f_9b51c4(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd38f7du;
    c->r[7] = 0xa352fcu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3530cu; f_15f0088(c);
    c->r[0] = 0xd38e5du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3531cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35320u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35338u; f_15f0088(c);
    c->r[0] = 0xd38e36u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35348u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3534cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35364u; f_15f0088(c);
    c->r[0] = 0xd38e0fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35374u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35378u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35390u; f_15f0088(c);
    c->r[0] = 0xd38de8u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa353a0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa353a4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa353bcu; f_15f0088(c);
    c->r[0] = 0xd38dc1u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa353ccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa353d0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa353e8u; f_15f0088(c);
    c->r[0] = 0xd38d9eu;
    c->r[1] = 0xa353f4u + c->r[0];
    goto L_a37970;
L_a3545c:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35468u; f_9b5388(c);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->r[0] = 0xd38e01u;
    c->r[7] = 0xa35478u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35488u; f_15f0088(c);
    c->r[0] = 0xd33524u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35498u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3549cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 116u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa354b4u; f_15f0088(c);
    c->r[0] = 0xd334fau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa354c4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa354c8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 120u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa354e0u; f_15f0088(c);
    c->r[0] = 0xd334d0u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa354f0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa354f4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3550cu; f_15f0088(c);
    c->r[0] = 0xd38b9au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3551cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35520u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35538u; f_15f0088(c);
    c->r[0] = 0xd38b72u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35548u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3554cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35564u; f_15f0088(c);
    c->r[0] = 0xd38b4au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35574u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35578u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35590u; f_15f0088(c);
    c->r[0] = 0xd38b22u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa355a0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa355a4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa355bcu; f_15f0088(c);
    c->r[0] = 0xd38afau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa355ccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa355d0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa355e8u; f_15f0088(c);
    c->r[0] = 0xd38ad2u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa355f8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa355fcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35614u; f_15f0088(c);
    c->r[0] = 0xd38aaau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35624u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35628u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35640u; f_15f0088(c);
    c->r[0] = 0xd38a82u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35650u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35654u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3566cu; f_15f0088(c);
    c->r[0] = 0xd38a5au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3567cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35680u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35698u; f_15f0088(c);
    c->r[0] = 0xd38a32u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa356a8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa356acu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa356c4u; f_15f0088(c);
    c->r[0] = 0xd38a0au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa356d4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa356d8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 92u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa356f0u; f_15f0088(c);
    c->r[0] = 0xd389e2u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35700u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35704u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3571cu; f_15f0088(c);
    c->r[0] = 0xd389bau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3572cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35730u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 100u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35748u; f_15f0088(c);
    c->r[0] = 0xd38992u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35758u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3575cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 104u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35774u; f_15f0088(c);
    c->r[0] = 0xd3896au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35784u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35788u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 108u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa357a0u; f_15f0088(c);
    c->r[0] = 0xd38946u;
    c->r[1] = 0xa357acu + c->r[0];
    goto L_a37970;
L_a357d0:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa357dcu; f_9b5554(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd38a8du;
    c->r[7] = 0xa357ecu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa357fcu; f_15f0088(c);
    c->r[0] = 0xd38858u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3580cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35810u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35828u; f_15f0088(c);
    c->r[0] = 0xd3882fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35838u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3583cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35854u; f_15f0088(c);
    c->r[0] = 0xd38892u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35864u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35868u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35880u; f_15f0088(c);
    c->r[0] = 0xd387dau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35890u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35894u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa358acu; f_15f0088(c);
    c->r[0] = 0xd387b1u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa358bcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa358c0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa358d8u; f_15f0088(c);
    c->r[0] = 0xd38820u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa358e8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa358ecu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35904u; f_15f0088(c);
    c->r[0] = 0xd3874au;
    c->r[1] = 0xa35910u + c->r[0];
    goto L_a37970;
L_a35944:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35950u; f_9b56d8(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd38919u;
    c->r[7] = 0xa35960u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35970u; f_15f0088(c);
    c->r[0] = 0xd386e4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35980u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35984u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3599cu; f_15f0088(c);
    c->r[0] = 0xd386bbu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa359acu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa359b0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa359c8u; f_15f0088(c);
    c->r[0] = 0xd3871eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa359d8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa359dcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa359f4u; f_15f0088(c);
    c->r[0] = 0xd38666u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35a04u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35a08u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35a20u; f_15f0088(c);
    c->r[0] = 0xd3863du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35a30u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35a34u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35a4cu; f_15f0088(c);
    c->r[0] = 0xd386acu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35a5cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35a60u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35a78u; f_15f0088(c);
    c->r[0] = 0xd385e8u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35a88u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35a8cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35aa4u; f_15f0088(c);
    c->r[0] = 0xd385bfu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35ab4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35ab8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35ad0u; f_15f0088(c);
    c->r[0] = 0xd386bbu;
    c->r[1] = 0xa35adcu + c->r[0];
    goto L_a37970;
L_a35b18:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35b24u; f_9b5828(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2e2deu;
    c->r[7] = 0xa35b34u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35b44u; f_15f0088(c);
    c->r[0] = 0xd38510u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35b54u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35b58u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35b70u; f_15f0088(c);
    c->r[0] = 0xd384e7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35b80u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35b84u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35b9cu; f_15f0088(c);
    c->r[0] = 0xd3854au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35bacu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35bb0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35bc8u; f_15f0088(c);
    c->r[0] = 0xd38492u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35bd8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35bdcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35bf4u; f_15f0088(c);
    c->r[0] = 0xd38469u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35c04u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35c08u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35c20u; f_15f0088(c);
    c->r[0] = 0xd384d8u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35c30u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35c34u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35c4cu; f_15f0088(c);
    c->r[0] = 0xd3853eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35c5cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35c60u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35c78u; f_15f0088(c);
    c->r[0] = 0xd38519u;
    c->r[1] = 0xa35c84u + c->r[0];
    goto L_a37970;
L_a35cac:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35cb8u; f_9b5930(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2e14au;
    c->r[7] = 0xa35cc8u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35cd8u; f_15f0088(c);
    c->r[0] = 0xd32cd4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35ce8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35cecu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35d04u; f_15f0088(c);
    c->r[0] = 0xd32caau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35d14u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35d18u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35d30u; f_15f0088(c);
    c->r[0] = 0xd32c80u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35d40u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35d44u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35d5cu; f_15f0088(c);
    c->r[0] = 0xd38434u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35d6cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35d70u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35d88u; f_15f0088(c);
    c->r[0] = 0xd3840bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35d98u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35d9cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35db4u; f_15f0088(c);
    c->r[0] = 0xd383e2u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35dc4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35dc8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35de0u; f_15f0088(c);
    c->r[0] = 0xd3826au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35df0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35df4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35e0cu; f_15f0088(c);
    c->r[0] = 0xd38391u;
    c->r[1] = 0xa35e18u + c->r[0];
    goto L_a37970;
L_a35e38:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35e44u; f_9b5a60(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2dfbeu;
    c->r[7] = 0xa35e54u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35e64u; f_15f0088(c);
    c->r[0] = 0xd32b48u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35e74u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35e78u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35e90u; f_15f0088(c);
    c->r[0] = 0xd32b1eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35ea0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35ea4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35ebcu; f_15f0088(c);
    c->r[0] = 0xd32af4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35eccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35ed0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35ee8u; f_15f0088(c);
    c->r[0] = 0xd382b4u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35ef8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35efcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35f14u; f_15f0088(c);
    c->r[0] = 0xd3828bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35f24u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35f28u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35f40u; f_15f0088(c);
    c->r[0] = 0xd38266u;
    c->r[1] = 0xa35f4cu + c->r[0];
    goto L_a37970;
L_a35f54:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35f60u; f_9b5b88(c);
    c->r[0] = 0xd1c183u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0xa35f70u + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa35f78u; f_15f0088(c);
    c->r[0] = 0xd3822du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35f88u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35f8cu; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa35f9cu; f_15f0088(c);
    c->r[0] = 0xd380b2u;
    c->r[1] = 0xa35fa8u + c->r[0];
    goto L_a37970;
L_a35fb4:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa35fc0u; f_9b5c84(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2de42u;
    c->r[4] = 0xa35fd0u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[4];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa35fe0u; f_15f0088(c);
    c->r[0] = 0xd381c5u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa35ff0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa35ff4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3600cu; f_15f0088(c);
    c->r[0] = 0xd38042u;
    c->r[1] = 0xa36018u + c->r[0];
    goto L_a37970;
L_a36020:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa3602cu; f_9b5d7c(c);
    c->r[0] = 0xd1c0b7u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[4] = 0xa3603cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa36044u; f_15f0088(c);
    c->r[0] = 0xd38161u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36054u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36058u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x32u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa36068u; f_15f0088(c);
    c->r[0] = 0xd37fe6u;
    c->r[1] = 0xa36074u + c->r[0];
    goto L_a37970;
L_a360b8:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa360c4u; f_9b5e94(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2dd3eu;
    c->r[7] = 0xa360d4u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa360e4u; f_15f0088(c);
    c->r[0] = 0xd37f70u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa360f4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa360f8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36110u; f_15f0088(c);
    c->r[0] = 0xd37f47u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36120u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36124u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3613cu; f_15f0088(c);
    c->r[0] = 0xd37f1eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3614cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36150u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36168u; f_15f0088(c);
    c->r[0] = 0xd37ef5u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36178u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3617cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36194u; f_15f0088(c);
    c->r[0] = 0xd37eccu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa361a4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa361a8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa361c0u; f_15f0088(c);
    c->r[0] = 0xd37ea3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa361d0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa361d4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa361ecu; f_15f0088(c);
    c->r[0] = 0xd37e7au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa361fcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36200u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 92u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36218u; f_15f0088(c);
    c->r[0] = 0xd37e51u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36228u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3622cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36244u; f_15f0088(c);
    c->r[0] = 0xd37e28u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36254u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36258u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36270u; f_15f0088(c);
    c->r[0] = 0xd37dffu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36280u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36284u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3629cu; f_15f0088(c);
    c->r[0] = 0xd37dd6u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa362acu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa362b0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 100u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa362c8u; f_15f0088(c);
    c->r[0] = 0xd37dadu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa362d8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa362dcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa362f4u; f_15f0088(c);
    c->r[0] = 0xd37d84u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36304u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36308u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 104u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36320u; f_15f0088(c);
    c->r[0] = 0xd37d5bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36330u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36334u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3634cu; f_15f0088(c);
    c->r[0] = 0xd37d32u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3635cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36360u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 108u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36378u; f_15f0088(c);
    c->r[0] = 0xd37d0du;
    c->r[1] = 0xa36384u + c->r[0];
    goto L_a37970;
L_a363e8:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa363f4u; f_9b6054(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd37e75u;
    c->r[7] = 0xa36404u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36414u; f_15f0088(c);
    c->r[0] = 0xd37ce7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36424u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36428u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36440u; f_15f0088(c);
    c->r[0] = 0xd37cbfu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36450u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36454u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3646cu; f_15f0088(c);
    c->r[0] = 0xd37c97u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3647cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36480u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36498u; f_15f0088(c);
    c->r[0] = 0xd37c6fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa364a8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa364acu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa364c4u; f_15f0088(c);
    c->r[0] = 0xd37c47u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa364d4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa364d8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa364f0u; f_15f0088(c);
    c->r[0] = 0xd37c1fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36500u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36504u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3651cu; f_15f0088(c);
    c->r[0] = 0xd37bf7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3652cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36530u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36548u; f_15f0088(c);
    c->r[0] = 0xd37bcfu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36558u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3655cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36574u; f_15f0088(c);
    c->r[0] = 0xd37ba7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36584u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36588u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa365a0u; f_15f0088(c);
    c->r[0] = 0xd37b7fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa365b0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa365b4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa365ccu; f_15f0088(c);
    c->r[0] = 0xd37b57u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa365dcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa365e0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 92u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa365f8u; f_15f0088(c);
    c->r[0] = 0xd37b2fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36608u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3660cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36624u; f_15f0088(c);
    c->r[0] = 0xd37b07u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36634u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36638u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 100u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36650u; f_15f0088(c);
    c->r[0] = 0xd37adfu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36660u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36664u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 104u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3667cu; f_15f0088(c);
    c->r[0] = 0xd37ab7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3668cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36690u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 108u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa366a8u; f_15f0088(c);
    c->r[0] = 0xd37a8fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa366b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa366bcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa366d4u; f_15f0088(c);
    c->r[0] = 0xd37a67u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa366e4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa366e8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 116u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36700u; f_15f0088(c);
    c->r[0] = 0xd37a3fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36710u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36714u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 120u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3672cu; f_15f0088(c);
    c->r[0] = 0xd37a17u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3673cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36740u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 124u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36758u; f_15f0088(c);
    c->r[0] = 0xd379efu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36768u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3676cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36784u; f_15f0088(c);
    c->r[0] = 0xd379c7u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36794u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36798u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 132u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa367b0u; f_15f0088(c);
    c->r[0] = 0xd3799fu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa367c0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa367c4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 136u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa367dcu; f_15f0088(c);
    c->r[0] = 0xd37977u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa367ecu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa367f0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 140u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36808u; f_15f0088(c);
    c->r[0] = 0xd37953u;
    c->r[1] = 0xa36814u + c->r[0];
    goto L_a37970;
L_a36878:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa36884u; f_9b62bc(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd379e1u;
    c->r[4] = c->r[10];
    c->r[10] = 0xa36898u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[10];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa368a8u; f_15f0088(c);
    c->r[0] = 0xd37853u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa368b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa368bcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa368d4u; f_15f0088(c);
    c->r[0] = 0xd3782bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa368e4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa368e8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36900u; f_15f0088(c);
    c->r[0] = 0xd37803u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36910u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36914u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3692cu; f_15f0088(c);
    c->r[0] = 0xd377dbu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3693cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36940u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36958u; f_15f0088(c);
    c->r[0] = 0xd377b3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36968u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3696cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36984u; f_15f0088(c);
    c->r[0] = 0xd3778bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36994u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36998u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa369b0u; f_15f0088(c);
    c->r[0] = 0xd37763u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa369c0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa369c4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa369dcu; f_15f0088(c);
    c->r[0] = 0xd3773bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa369ecu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa369f0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36a08u; f_15f0088(c);
    c->r[0] = 0xd37713u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36a18u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36a1cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36a34u; f_15f0088(c);
    c->r[0] = 0xd376ebu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36a44u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36a48u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36a60u; f_15f0088(c);
    c->r[0] = 0xd376c3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36a70u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36a74u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 92u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36a8cu; f_15f0088(c);
    c->r[0] = 0xd3769bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36a9cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36aa0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36ab8u; f_15f0088(c);
    c->r[0] = 0xd37673u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36ac8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36accu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 100u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36ae4u; f_15f0088(c);
    c->r[0] = 0xd3764bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36af4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36af8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 104u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36b10u; f_15f0088(c);
    c->r[0] = 0xd37623u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36b20u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36b24u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 108u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36b3cu; f_15f0088(c);
    c->r[0] = 0xd375fbu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36b4cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36b50u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36b68u; f_15f0088(c);
    c->r[0] = 0xd375d3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36b78u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36b7cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 116u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36b94u; f_15f0088(c);
    c->r[0] = 0xd375abu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36ba4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36ba8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 120u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36bc0u; f_15f0088(c);
    c->r[0] = 0xd37583u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36bd0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36bd4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 124u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36becu; f_15f0088(c);
    c->r[0] = 0xd3755bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36bfcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36c00u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36c18u; f_15f0088(c);
    c->r[0] = 0xd37533u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36c28u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36c2cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 132u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36c44u; f_15f0088(c);
    c->r[0] = 0xd3750bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36c54u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36c58u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 136u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36c70u; f_15f0088(c);
    c->r[0] = 0xd374e3u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36c80u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36c84u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 140u);
    c->r[1] = c->r[10];
    c->r[0] = c->r[5];
    c->r[10] = c->r[4];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36ca0u; f_15f0088(c);
    c->r[0] = 0xd374bbu;
    c->r[1] = 0xa36cacu + c->r[0];
    goto L_a37970;
L_a36cc8:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa36cd4u; f_9b6480(c);
    c->r[0] = 0xd1b40fu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xa36ce4u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa36ce8u; f_15f0088(c);
    c->r[0] = 0xd1ab52u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36cf8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36cfcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = 0xd3756du;
    c->r[7] = 0xa36d0cu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36d1cu; f_15f0088(c);
    c->r[0] = 0xd374bau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36d2cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36d30u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36d48u; f_15f0088(c);
    c->r[0] = 0xd3749cu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36d58u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36d5cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36d74u; f_15f0088(c);
    c->r[0] = 0xd3747au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36d84u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36d88u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a377f0; }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x75u;
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x72u;
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[0]); }
    goto L_a37820;
L_a36dc8:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa36dd4u; f_9b658c(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0xd1b30fu;
    c->r[1] = 0xa36de4u + c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0xa36decu; f_15f0088(c);
    c->r[0] = 0xd1aa4eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36dfcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36e00u; f_a3dec8(c);
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_EQ) { goto L_a33ce4; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_EQ) { goto L_a33d0c; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { goto L_a3797c; }
    c->r[0] = 0xd37402u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xa36e2cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa36e30u; f_15f0088(c);
    c->r[0] = 0xd3183eu;
    c->r[1] = 0xa36e3cu + c->r[0];
    goto L_a37970;
L_a36e6c:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa36e78u; f_9b364c(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2cf8au;
    c->r[7] = 0xa36e88u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36e98u; f_15f0088(c);
    c->r[0] = 0xd3720eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36ea8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36eacu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36ec4u; f_15f0088(c);
    c->r[0] = 0xd371e6u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36ed4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36ed8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36ef0u; f_15f0088(c);
    c->r[0] = 0xd371beu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36f00u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36f04u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36f1cu; f_15f0088(c);
    c->r[0] = 0xd3719au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36f2cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36f30u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36f48u; f_15f0088(c);
    c->r[0] = 0xd37172u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36f58u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36f5cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36f74u; f_15f0088(c);
    c->r[0] = 0xd3714au;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36f84u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36f88u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 80u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36fa0u; f_15f0088(c);
    c->r[0] = 0xd37126u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36fb0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36fb4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36fccu; f_15f0088(c);
    c->r[0] = 0xd370feu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa36fdcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa36fe0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 88u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa36ff8u; f_15f0088(c);
    c->r[0] = 0xd370dau;
    c->r[1] = 0xa37004u + c->r[0];
    goto L_a37970;
L_a37020:;
    c->r[4] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[4];
    c->r[14] = 0xa37030u; f_9b66c8(c);
    c->r[0] = c->r[13] + 0x130u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa3703cu; f_9c8c8c(c);
    c->r[0] = c->r[13] + 0x140u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa37048u; f_9c8cbc(c);
    c->v.s[0] = LD32(c->r[13] + 304u);
    c->r[0] = 0xd3721du;
    c->v.s[16] = LD32(c->r[13] + 80u);
    c->r[7] = 0xa3705cu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3706cu; f_15f0088(c);
    c->r[0] = 0xd371b5u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3707cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37080u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 308u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37098u; f_15f0088(c);
    c->r[0] = 0xd37191u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa370a8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa370acu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 320u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa370c4u; f_15f0088(c);
    c->r[0] = 0xd3716du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa370d4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa370d8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 324u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa370f0u; f_15f0088(c);
    c->r[0] = 0xd37147u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37100u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37104u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37118u; f_15f0088(c);
    c->r[0] = 0xd314cdu;
    c->r[1] = 0xa37124u + c->r[0];
    goto L_a37970;
L_a37148:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa37154u; f_9b6808(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd3710du;
    c->v.s[18] = LD32(c->r[13] + 60u);
    c->v.s[16] = LD32(c->r[13] + 76u);
    c->r[7] = 0xa3716cu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3717cu; f_15f0088(c);
    c->r[0] = 0xd370c1u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3718cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37190u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa371a8u; f_15f0088(c);
    c->r[0] = 0xd3709du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa371b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa371bcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa371d4u; f_15f0088(c);
    c->r[0] = 0xd37079u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa371e4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa371e8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 64u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37200u; f_15f0088(c);
    c->r[0] = 0xd37021u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37210u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37214u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 68u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3722cu; f_15f0088(c);
    c->r[0] = 0xd36ffdu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3723cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37240u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 72u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37258u; f_15f0088(c);
    c->r[0] = 0xd36ffdu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37268u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3726cu; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[18];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37280u; f_15f0088(c);
    c->r[0] = 0xd36fb1u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37290u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37294u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa372a8u; f_15f0088(c);
    c->r[0] = 0xd36f93u;
    c->r[1] = 0xa372b4u + c->r[0];
    goto L_a37970;
L_a372d4:;
    c->r[4] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[4];
    c->r[14] = 0xa372e4u; f_9b6a14(c);
    c->v.s[16] = LD32(c->r[13] + 112u);
    c->v.s[18] = LD32(c->r[13] + 116u);
    c->v.s[20] = LD32(c->r[13] + 120u);
    c->r[0] = c->r[13] + 0x130u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa372fcu; f_a41928(c);
    c->r[0] = c->r[13] + 0x140u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa37308u; f_a41980(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[0] = 0xd36f61u;
    c->r[7] = 0xa37318u + c->r[0];
    c->r[0] = c->r[5];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[1] = c->r[7];
    c->r[14] = 0xa37324u; f_15f0088(c);
    c->r[0] = 0xd36f19u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37334u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37338u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[18];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3734cu; f_15f0088(c);
    c->r[0] = 0xd36ef9u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3735cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37360u; f_a3dec8(c);
    c->v.df[16] = (double)c->v.f[20];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37374u; f_15f0088(c);
    c->r[0] = 0xd36ed9u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37384u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37388u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 304u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa373a0u; f_15f0088(c);
    c->r[0] = 0xd36e81u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa373b0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa373b4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 308u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa373ccu; f_15f0088(c);
    c->r[0] = 0xd36e5du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa373dcu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa373e0u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 312u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa373f8u; f_15f0088(c);
    c->r[0] = 0xd36e5du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37408u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3740cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 320u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37424u; f_15f0088(c);
    c->r[0] = 0xd36e0du;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37434u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37438u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 324u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37450u; f_15f0088(c);
    c->r[0] = 0xd36debu;
    c->r[1] = 0xa3745cu + c->r[0];
    goto L_a37970;
L_a37460:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa37468u; f_9b6c14(c);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->r[0] = 0xd36dfdu;
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = 0xa3747cu + c->r[0];
    c->r[0] = c->r[5];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37484u; f_15f0088(c);
    c->r[0] = 0xd36ce4u;
    c->r[1] = 0xa37490u + c->r[0];
    goto L_a37970;
L_a374a4:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa374b0u; f_9b6d1c(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd36db9u;
    c->r[7] = 0xa374c0u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa374d0u; f_15f0088(c);
    c->r[0] = 0xd314dcu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa374e0u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa374e4u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa374fcu; f_15f0088(c);
    c->r[0] = 0xd314b2u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3750cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37510u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37528u; f_15f0088(c);
    c->r[0] = 0xd31488u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37538u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3753cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37554u; f_15f0088(c);
    c->r[0] = 0xd36b9eu;
    c->r[1] = 0xa37560u + c->r[0];
    goto L_a37970;
L_a37568:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa37574u; f_9b2b34(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2c88eu;
    c->r[4] = 0xa37584u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[4];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37594u; f_15f0088(c);
    c->r[0] = 0xd31418u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa375a4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa375a8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa375c0u; f_15f0088(c);
    c->r[0] = 0xd313f2u;
    c->r[1] = 0xa375ccu + c->r[0];
    goto L_a37970;
L_a375d8:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa375e4u; f_9b2c34(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2c81eu;
    c->r[4] = 0xa375f4u + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[4];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37604u; f_15f0088(c);
    c->r[0] = 0xd36a3eu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37614u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37618u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37630u; f_15f0088(c);
    c->r[0] = 0xd36a18u;
    c->r[1] = 0xa3763cu + c->r[0];
    goto L_a37970;
L_a37650:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa3765cu; f_9b2d44(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[0] = 0xd2c7a6u;
    c->r[7] = 0xa3766cu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    c->r[1] = c->r[7];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa3767cu; f_15f0088(c);
    c->r[0] = 0xd369cau;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3768cu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37690u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa376a8u; f_15f0088(c);
    c->r[0] = 0xd369a0u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa376b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa376bcu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa376d4u; f_15f0088(c);
    c->r[0] = 0xd36976u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa376e4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa376e8u; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37700u; f_15f0088(c);
    c->r[0] = 0xd35dc5u;
    c->r[1] = 0xa3770cu + c->r[0];
    goto L_a37970;
L_a37710:;
    c->r[0] = 0xd36aa3u;
    c->r[1] = 0xa3771cu + c->r[0];
    c->r[0] = 0xd3691au;
    c->r[2] = 0xa37724u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37728u; f_a3dec8(c);
    c->r[0] = 0xd36a83u;
    c->r[1] = 0xa37734u + c->r[0];
    c->r[0] = 0xd36b37u;
    c->r[2] = 0xa3773cu + c->r[0];
    goto L_a37788;
L_a3773c:;
    c->r[0] = 0xd30f32u;
    c->r[1] = 0xa37748u + c->r[0];
    c->r[0] = 0xd36b1du;
    c->r[2] = 0xa37750u + c->r[0];
L_a3774c:;
    c->r[0] = c->r[9];
    goto L_a37978;
L_a37764:;
    c->r[2] = c->r[3];
L_a37768:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
L_a3776c:;
    c->r[0] = 0xd1a97bu;
    c->r[1] = 0xa37778u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa3777cu; f_15f0088(c);
    c->r[0] = 0xd36a2bu;
    c->r[2] = c->r[5];
    c->r[1] = 0xa3778cu + c->r[0];
L_a37788:;
    c->r[0] = c->r[9];
    c->r[14] = 0xa37790u; f_a3dec8(c);
    c->r[0] = 0xd1a953u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[4] = 0xa377a0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa377a8u; f_15f0088(c);
    c->r[0] = 0xd36a11u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa377b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa377bcu; f_a3dec8(c);
    c->r[0] = 0xd36a03u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xa377ccu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa377d0u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa377e0u; f_15f0088(c);
    c->r[0] = 0xd24b34u;
    c->r[1] = 0xa377ecu + c->r[0];
    goto L_a37970;
L_a377f0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x73u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x66u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
L_a37820:;
    c->r[0] = 0xd369d8u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37830u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa37834u; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x51u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a37878; }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x75u;
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x72u;
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[0]); }
    goto L_a378a8;
L_a37878:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x73u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x66u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
L_a378a8:;
    c->r[0] = 0xd36957u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa378b8u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa378bcu; f_a3dec8(c);
    { uint32_t ea = c->r[13] + 0x52u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a37908; }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x75u;
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x72u;
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[0]); }
    goto L_a37938;
L_a37908:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x73u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6cu;
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x66u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
L_a37938:;
    c->r[0] = 0xd368d0u;
    c->r[2] = c->r[5];
    c->r[1] = 0xa37948u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xa3794cu; f_a3dec8(c);
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->r[0] = 0xd3691du;
    c->r[1] = 0xa3795cu + c->r[0];
    c->r[0] = c->r[5];
    c->v.df[16] = (double)c->v.f[0];
    { uint64_t v = c->v.d[16]; c->r[2] = (uint32_t)v; c->r[3] = (uint32_t)(v >> 32); }
    c->r[14] = 0xa37968u; f_15f0088(c);
    c->r[0] = 0xd368b1u;
    c->r[1] = 0xa37974u + c->r[0];
L_a37970:;
    c->r[0] = c->r[9];
    c->r[2] = c->r[5];
L_a37978:;
    c->r[14] = 0xa3797cu; f_a3dec8(c);
L_a3797c:;
    c->r[0] = c->r[9];
    c->r[14] = 0xa37984u; f_a3df48(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_a33d3c; }
L_a37994:;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a379a8; }
    c->r[0] = c->r[9];
    c->r[14] = 0xa379a8u; f_a3df48(c);
L_a379a8:;
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_a33c24; }
L_a379b4:;
    c->r[0] = c->r[13] + 0x148u;
    c->r[14] = 0xa379bcu; f_9bb7b8(c);
L_a379bc:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
