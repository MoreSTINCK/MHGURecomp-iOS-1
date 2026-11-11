#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_4332ac(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7fbb4(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a814c0(Cpu *c);
void f_a81a68(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a83f74(Cpu *c);
void f_b6367c(Cpu *restrict c) {
    FN_ENTER(0xb6367cu);
L_b6367c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x130u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[0];
    c->r[0] = 0xed5704u;
    c->r[6] = c->r[2];
    c->r[9] = c->r[1];
    { uint32_t ea = 0xb636acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x22du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b636c8; }
L_b636b8:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_b636c8:;
    { uint32_t ea = c->r[9] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b636b8; }
    { uint32_t ea = c->r[1] + 0x11u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b636b8; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x85u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b636b8; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[9];
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb63718u; f_a7ff38(c);
    c->r[4] = c->r[9];
    c->r[1] = 0x63u;
    c->r[7] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xed648cu;
    c->r[2] = c->r[6] + 0x40u;
    { uint32_t ea = 0xb63744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f000000u;
    c->r[1] = 0xbf000000u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0xb637c4u; f_229d48(c);
    c->r[6] = c->r[13] + 0xb0u;
    c->r[2] = c->r[13] + 0xf0u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[6];
    c->r[14] = 0xb637d8u; f_229d48(c);
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb637e4u; f_4332ac(c);
    c->v.s[0] = LD32(c->r[10] + 80u);
    { uint32_t ea = c->r[4] - 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[16] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] - 0x110u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b63864; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x287u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x163cu;
    c->r[2] = 0x1640u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b63864:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb63878u; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b638cc; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[6];
    c->r[14] = 0xb638c8u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b638cc:;
    c->r[1] = c->r[0] + c->r[6];
    c->r[8] = c->r[9];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x163cu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_b63a88; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->v.s[2] = LD32(c->r[10] + 80u);
    c->v.f[2] = (float)c->v.s[2];
    ST32(c->r[0] + 128u, c->v.s[2]);
    ST32(c->r[0] + 132u, c->v.s[2]);
    ST32(c->r[0] + 136u, c->v.s[0]);
    ST32(c->r[0] + 140u, c->v.s[0]);
    c->v.s[2] = 0x3f000000u;
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[10] + 140u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0] + 156u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[1]); }
L_b63a88:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xc11697u;
    c->r[2] = 0xb63aa4u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xb63aa8u; f_a7fbb4(c);
    c->r[0] = 0x3b94u;
    c->r[7] = c->r[9];
    c->r[2] = 0x3990u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    c->r[0] = 0xc47cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_b63b58; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b63b34; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b63b34:;
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b98u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b63b58:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    c->r[1] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xb63b94u; f_a7fc58(c);
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xb63bb4u; f_a814c0(c);
    c->r[0] = 0x1eecu;
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b63cbc; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b63c30; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x39du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b63c30:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b63c70; }
    c->r[1] = 0xedb370u;
    c->r[2] = 0xedb370u;
    { uint32_t ea = 0xb63c48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb63c4cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[1] = 0xc000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfa060000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b63c78;
L_b63c70:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
L_b63c78:;
    c->r[2] = 0x1ef0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b63c98; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b63cb0;
L_b63c98:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63cb0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63cbc:;
    c->r[0] = 0x1bf4u;
    c->r[6] = c->r[9];
    c->r[4] = 0x38u;
    c->r[5] = 0x6000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x377b0000u;
    { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b63d80; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b63d48; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x33eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b63d48:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b63d8c; }
    c->r[1] = 0xedb258u;
    c->r[2] = 0xedb258u;
    { uint32_t ea = 0xb63d60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb63d64u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[5];
    goto L_b63d94;
L_b63d80:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b63dd8;
L_b63d8c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b63d94:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b63db4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b63dcc;
L_b63db4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63dcc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63dd8:;
    c->r[2] = 0xfff8u;
    c->r[5] = 0x6u;
    c->r[3] = 0x8045u;
    c->r[7] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffe00000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa0970000u;
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b63e24; }
    c->r[1] = c->r[1] & c->r[5];
    c->r[2] = f_adds(c, c->r[4], 0x1u);
    c->r[0] = c->r[0] & c->r[7];
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63e24:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b63ea4; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b63e94; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b63e94:;
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63ea4:;
    c->r[2] = 0x100cu;
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] - 0xeecu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b63ee0; }
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[9];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    goto L_b63eec;
L_b63ee0:;
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[3] + 0x10cu; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
L_b63eec:;
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b63f10; }
    c->r[2] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b63f10:;
    c->r[7] = 0xed55f0u;
    { uint32_t ea = c->r[9] + 0xe2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0xb63f24u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_b63f38; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_b63f4c; }
L_b63f38:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b63f4c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0xafeu;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x85f0000u;
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { c->r[5] = c->r[7] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[5] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b63f80; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b63fb4; }
L_b63f80:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] | 0x3u;
    c->r[7] = (c->r[7] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xafeu;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b63fb4:;
    c->r[2] = 0x0u;
    c->r[4] = 0x38u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[12]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64000; }
    c->r[2] = ~0x0u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x800000u;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64000:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb64008u; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x4u;
    c->r[2] = 0xcu;
    c->r[14] = 0xb64018u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64044; }
    c->r[1] = 0x17bdb44u;
    c->r[1] = 0xb6402cu + c->r[1];
    c->r[1] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[4] = 0x38u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
L_b64044:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb6404cu; f_a82760(c);
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xb64070u; f_a814c0(c);
    c->r[1] = 0x1f04u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0xafeu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x85f0000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b64184; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b640f8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9] + 0xecu;
    c->r[6] = 0x3a0u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[2]); }
L_b640f8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b64138; }
    c->r[2] = 0xedaea8u;
    c->r[3] = 0xedaea8u;
    { uint32_t ea = 0xb64110u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb64114u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4d7e0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_b64140;
L_b64138:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_b64140:;
    c->r[2] = 0x1f08u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b64160; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b64178;
L_b64160:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64178:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64184:;
    c->r[1] = 0x1f0cu;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b64288; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b641fc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9] + 0xecu;
    c->r[6] = 0x3a1u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[2]); }
L_b641fc:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b6423c; }
    c->r[2] = 0xedada4u;
    c->r[3] = 0xedada4u;
    { uint32_t ea = 0xb64214u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb64218u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3e770000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_b64244;
L_b6423c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_b64244:;
    c->r[2] = 0x1f10u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b64264; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b6427c;
L_b64264:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b6427c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64288:;
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b64384; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b642f8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x39du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b642f8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64338; }
    c->r[1] = 0xedaca8u;
    c->r[2] = 0xedaca8u;
    { uint32_t ea = 0xb64310u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb64314u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = 0xc000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfa060000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b64340;
L_b64338:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_b64340:;
    c->r[2] = 0x1ef0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b64360; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b64378;
L_b64360:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64378:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64384:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64428; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x8045u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0970000u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b643f8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b643f8:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b64438; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_b6443c;
L_b64428:;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[5] = 0x8045u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0970000u;
    goto L_b64444;
L_b64438:;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
L_b6443c:;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64444:;
    c->r[2] = 0xfff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64484; }
    c->r[2] = 0x6u;
    c->r[3] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[4], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64484:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b644fc; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b644f0; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
L_b644f0:;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b644fc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b64528; }
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    goto L_b64530;
L_b64528:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_b64530:;
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b64554; }
    c->r[2] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b64554:;
    c->r[7] = 0xed4facu;
    { uint32_t ea = c->r[9] + 0xe2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0xb64568u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_b6457c; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b64590; }
L_b6457c:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b64590:;
    { uint32_t ea = c->r[10] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_HI) { goto L_b64664; }
    c->r[5] = 0xc33210u;
    c->r[7] = 0x3c2cu;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    c->r[7] = 0xc3e4u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[5] = 0xb645bcu + c->r[5];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[12];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[7] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_b64714; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b6463c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x745u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
L_b6463c:;
    { uint32_t ea = c->r[7] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0xe000u;
    c->r[3] = 0x3c30u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xfbf40000u;
    c->r[2] = c->r[12] ^ c->r[2];
    { uint32_t ea = c->r[9] + c->r[3]; ST32(ea, c->r[2]); }
    goto L_b6470c;
L_b64664:;
    c->r[3] = 0x3c2cu;
    c->r[2] = c->r[9];
    c->r[6] = 0x3a28u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[3] = 0xc3e4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b64714; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b646f4; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[7] = 0x745u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b646f4:;
    c->r[7] = 0x3a28u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x3c30u;
    c->r[3] = 0x745u;
    { uint32_t ea = c->r[9] + c->r[2]; ST32(ea, c->r[3]); }
L_b6470c:;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64714:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[14]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_NE) { goto L_b6473c; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b64764; }
L_b6473c:;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[14]); }
    c->r[7] = c->r[7] & 0xffff00ffu;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xafeu;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64764:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b6479c; }
    c->r[2] = ~0x0u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x800000u;
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b6479c:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb647a4u; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x4u;
    c->r[2] = 0xcu;
    c->r[14] = 0xb647b4u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b647d8; }
    c->r[1] = 0x17bd3a8u;
    c->r[1] = 0xb647c8u + c->r[1];
    c->r[1] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_b647d8:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb647e0u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3990u;
    c->r[4] = 0x38u;
    c->r[5] = 0x8045u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0970000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b64894; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64870; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b64870:;
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b98u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64894:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xb648b8u; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0xafeu;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x85f0000u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b649c0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64934; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x39du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b64934:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64974; }
    c->r[1] = 0xeda66cu;
    c->r[2] = 0xeda66cu;
    { uint32_t ea = 0xb6494cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb64950u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0xc000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfa060000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b6497c;
L_b64974:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b6497c:;
    c->r[2] = 0x1ef0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b6499c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b649b4;
L_b6499c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b649b4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b649c0:;
    c->r[0] = 0x1f14u;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b64a78; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64a38; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x3a2u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b64a38:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64a84; }
    c->r[1] = 0xeda568u;
    c->r[2] = 0xeda568u;
    { uint32_t ea = 0xb64a50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb64a54u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0xf000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x23230000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b64a8c;
L_b64a78:;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    goto L_b64ac0;
L_b64a84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b64a8c:;
    c->r[2] = 0x1f18u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b64aa8; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    goto L_b64ab8;
L_b64aa8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64ab8:;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64ac0:;
    c->r[2] = 0xfff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64b00; }
    c->r[2] = 0x6u;
    c->r[3] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[4], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64b00:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b64b78; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64b6c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
L_b64b6c:;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64b78:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b64bb4; }
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    goto L_b64bbc;
L_b64bb4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_b64bbc:;
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b64be4; }
    c->r[2] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b64be4:;
    c->r[7] = 0xed491cu;
    { uint32_t ea = c->r[9] + 0xe2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0xb64bf8u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_b64c0c; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b64c20; }
L_b64c0c:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b64c20:;
    c->r[3] = 0xd0c928u;
    { uint32_t ea = c->r[10] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0xb64c34u + c->r[3];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[12]);
    if (COND_EQ) { c->r[6] = (c->r[5] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[2]); }
    if (COND_NE) { goto L_b64c58; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b64c8c; }
L_b64c58:;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[12]); }
    c->r[5] = c->r[5] & 0xffff00ffu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[5] | (c->r[1] << 8);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xafeu;
    c->r[1] = c->r[1] | (c->r[2] << 16);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64c8c:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64cc4; }
    c->r[2] = ~0x0u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x800000u;
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64cc4:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb64cccu; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x4u;
    c->r[2] = 0xcu;
    c->r[14] = 0xb64cdcu; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64d00; }
    c->r[1] = 0x17bce80u;
    c->r[1] = 0xb64cf0u + c->r[1];
    c->r[1] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_b64d00:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb64d08u; f_a82760(c);
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xb64d2cu; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0xafeu;
    c->r[4] = 0x38u;
    c->r[5] = 0x8045u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x85f0000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0970000u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b64e44; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64db8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x39du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b64db8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64df8; }
    c->r[1] = 0xeda1e8u;
    c->r[2] = 0xeda1e8u;
    { uint32_t ea = 0xb64dd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb64dd4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0xc000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfa060000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b64e00;
L_b64df8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b64e00:;
    c->r[2] = 0x1ef0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b64e20; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b64e38;
L_b64e20:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64e38:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b64e44:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b64ef8; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64eb8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[7] = 0x3a2u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b64eb8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b64f04; }
    c->r[1] = 0xeda0e8u;
    c->r[2] = 0xeda0e8u;
    { uint32_t ea = 0xb64ed0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb64ed4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0xf000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x23230000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b64f0c;
L_b64ef8:;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    goto L_b64f40;
L_b64f04:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b64f0c:;
    c->r[2] = 0x1f18u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b64f28; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    goto L_b64f38;
L_b64f28:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64f38:;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64f40:;
    c->r[2] = 0xfff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64f80; }
    c->r[2] = 0x6u;
    c->r[3] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[4], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64f80:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b64ff8; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b64fec; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
L_b64fec:;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b64ff8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b65038; }
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    goto L_b65040;
L_b65038:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_b65040:;
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b65064; }
    c->r[2] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b65064:;
    c->r[7] = 0xed449cu;
    { uint32_t ea = c->r[9] + 0xe2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0xb65078u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_b6508c; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b650a0; }
L_b6508c:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b650a0:;
    c->r[3] = 0xd0c4b4u;
    { uint32_t ea = c->r[10] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0xb650b4u + c->r[3];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[12]);
    if (COND_EQ) { c->r[6] = (c->r[5] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[2]); }
    if (COND_NE) { goto L_b650d8; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b6510c; }
L_b650d8:;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[12]); }
    c->r[5] = c->r[5] & 0xffff00ffu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[5] | (c->r[1] << 8);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xafeu;
    c->r[1] = c->r[1] | (c->r[2] << 16);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b6510c:;
    c->r[2] = 0x0u;
    c->r[5] = 0x8045u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0970000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b6514c; }
    c->r[2] = ~0x0u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x800000u;
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b6514c:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb65154u; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x4u;
    c->r[2] = 0xcu;
    c->r[14] = 0xb65164u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b65198; }
    c->r[1] = 0x17bc9f8u;
    c->r[1] = 0xb65178u + c->r[1];
    c->r[1] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[5] = 0x8045u;
    c->r[4] = 0x38u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa0970000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
L_b65198:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb651a0u; f_a82760(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xb651a8u; f_a81a68(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb651b8u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x65u;
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b6528c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b65254; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65254:;
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b98u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b6529c;
L_b6528c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
L_b6529c:;
    c->r[2] = 0xfff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b652e0; }
    c->r[2] = 0x6u;
    c->r[3] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = f_adds(c, c->r[4], 0x1u);
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b652e0:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b65360; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b65350; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65350:;
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65360:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b6538c; }
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
    goto L_b65394;
L_b6538c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_b65394:;
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b653b8; }
    c->r[2] = c->r[2] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b653b8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x304u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x300u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0xed4140u;
    { uint32_t ea = 0xb653d4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], 0x3u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_b653f0; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { c->r[6] = 0x15e4u; }
    if (COND_EQ) { c->r[6] = 0x15ecu; }
    { uint32_t ea = c->r[9] + c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_b65408;
L_b653f0:;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_b65404; }
    c->r[6] = 0x15dcu;
    { uint32_t ea = c->r[9] + c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_b65408;
L_b65404:;
    { uint32_t ea = c->r[9] + 0xfbcu; uint32_t v = LD32(ea); c->r[5] = v; }
L_b65408:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_b65420; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_b65434; }
L_b65420:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0x1fffu) | ((c->r[3] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[2]); }
L_b65434:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b6553c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b654a8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[7] = 0x39du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b654a8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b654e8; }
    c->r[0] = 0xed9af8u;
    c->r[1] = 0xed9af8u;
    { uint32_t ea = 0xb654c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb654c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xc000u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfa060000u;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_b654f0;
L_b654e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
L_b654f0:;
    c->r[2] = 0x1ef0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b65518; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b65530;
L_b65518:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65530:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b6553c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x280u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b6563c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b655b0; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[7] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b655b0:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b655f0; }
    c->r[0] = 0xed99f0u;
    c->r[1] = 0xed99f0u;
    { uint32_t ea = 0xb655c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb655ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x6000u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x377b0000u;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_b655f8;
L_b655f0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
L_b655f8:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b65618; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b65630;
L_b65618:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65630:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b6563c:;
    c->r[2] = 0x1d7cu;
    c->r[6] = c->r[9];
    c->r[14] = 0xafeu;
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x85f0000u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b65748; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b656bc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[7] = 0x36fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b656bc:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b656f8; }
    c->r[0] = 0xed98e4u;
    c->r[1] = 0xed98e4u;
    { uint32_t ea = 0xb656d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb656d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x61000u;
    c->r[0] = c->r[0] | 0xf0000000u;
    goto L_b65700;
L_b656f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b65700:;
    c->r[2] = 0x1d80u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b65724; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b6573c;
L_b65724:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b6573c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65748:;
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b65844; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b657b8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[7] = 0x3a2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b657b8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b657f8; }
    c->r[0] = 0xed97e8u;
    c->r[1] = 0xed97e8u;
    { uint32_t ea = 0xb657d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb657d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xf000u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x23230000u;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_b65800;
L_b657f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_b65800:;
    c->r[2] = 0x1f18u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b65820; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b65838;
L_b65820:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65838:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65844:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + 0x1d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 4u; c->r[3] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = c->r[3] & 0xff00u;
    if (COND_EQ) { goto L_b658b4; }
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[7] ^ 0x900u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b65880; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b65900; }
L_b65880:;
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[14]); }
    c->r[3] = (c->r[3] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xafeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x90000u;
    goto L_b658f4;
L_b658b4:;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[7] ^ 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b658cc; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b65900; }
L_b658cc:;
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[14]); }
    c->r[3] = (c->r[3] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xafeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x80000u;
L_b658f4:;
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65900:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b6593c; }
    c->r[2] = ~0x0u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x800000u;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b6593c:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb65944u; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x4u;
    c->r[2] = 0xcu;
    c->r[14] = 0xb65954u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b65978; }
    c->r[1] = 0x17bc208u;
    c->r[1] = 0xb65968u + c->r[1];
    c->r[1] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[0] = c->r[0] + 24u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_b65978:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb65980u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b65a50; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b659fc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x39du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b659fc:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1ef0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b65a3c; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b65a44;
L_b65a3c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65a44:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65a50:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b65b0c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b65ac0; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b65ac0:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b65af8; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b65b00;
L_b65af8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65b00:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65b0c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b65bcc; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b65b78; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x36fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b65b78:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1d80u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b65bb8; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b65bc0;
L_b65bb8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65bc0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65bcc:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b65c88; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b65c38; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x3a2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b65c38:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1f18u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b65c74; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_b65c7c;
L_b65c74:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65c7c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_b65c88:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b636b8; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b65d04; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x732u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b65d04:;
    c->r[1] = 0x3990u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x732u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b98u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_b636b8;
}
