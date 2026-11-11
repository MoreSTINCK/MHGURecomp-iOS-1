#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_742f7c(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fbb4(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a814c0(Cpu *c);
void f_a81a68(Cpu *c);
void f_a82674(Cpu *c);
void f_a83f20(Cpu *c);
void f_a841e8(Cpu *c);
void f_a857a8(Cpu *c);
void f_a857f4(Cpu *c);
void f_a85804(Cpu *c);
void f_a85814(Cpu *c);
void f_aafc90(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_abcd84(Cpu *restrict c) {
    FN_ENTER(0xabcd84u);
L_abcd84:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x228u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_ac009c; }
    { uint32_t ea = c->r[0] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_ac009c; }
    { uint32_t ea = c->r[5] + 0x65u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abd088; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abce4c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x171u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abce4c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xabce60u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_abceb4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xabceb0u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_abceb4:;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_abd074; }
    c->r[0] = c->r[4];
    c->r[14] = 0xabcee4u; f_a857a8(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabcf6cu; f_a85804(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabcff4u; f_a85814(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xbcu; ST32(ea, c->r[0]); }
L_abd074:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
L_abd088:;
    { uint32_t ea = c->r[0] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abd0ac; }
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
L_abd0ac:;
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abd0c0; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
L_abd0c0:;
    c->r[2] = 0xdb3fbcu;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0xabd0d0u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabd0f8u; f_a7ff38(c);
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0x38u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x80000u;
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_NE) { goto L_abd124; }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & 0xfffffu;
    c->r[1] = c->r[1] | (c->r[2] << 20);
L_abd124:;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[10] + 0x164u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] & 0x1fu;
    c->r[1] = c->r[2] | (c->r[1] << 5);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[2]); }
    c->r[3] = (c->r[1] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[3]); }
    c->v.s[6] = c->r[3];
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[6]); }
    c->v.s[2] = c->r[6];
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[5]); }
    c->v.s[8] = c->r[5];
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[14]); }
    c->v.s[12] = c->r[14];
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->v.f[18] = c->v.f[2] / c->v.f[0];
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    c->v.s[4] = c->r[2];
    c->v.f[2] = (float)c->v.s[4];
    c->v.f[4] = (float)(int32_t)c->v.s[6];
    c->v.f[6] = (float)(int32_t)c->v.s[8];
    c->v.s[8] = c->r[0];
    c->v.f[20] = c->v.f[6] / c->v.f[4];
    c->v.f[6] = (float)c->v.s[8];
    c->v.f[10] = c->v.f[18] * c->v.f[2];
    c->v.s[8] = vcvt_s32_f64((double)c->v.f[10]);
    c->v.f[10] = (float)(int32_t)c->v.s[12];
    c->v.s[12] = c->r[1];
    ST32(c->r[13] + 512u, c->v.s[8]);
    c->v.f[8] = (float)(int32_t)c->v.s[12];
    c->v.f[24] = c->v.f[10] / c->v.f[0];
    c->v.f[14] = c->v.f[20] * c->v.f[6];
    c->v.f[22] = c->v.f[8] / c->v.f[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[14]);
    ST32(c->r[13] + 516u, c->v.s[0]);
    c->v.f[2] = c->v.f[24] * c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[6];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 520u, c->v.s[2]);
    c->r[0] = c->v.s[0];
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = c->r[1];
    if (COND_GT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    c->r[0] = 0xfff8u;
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1f0000u;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t r = c->r[0] ^ c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abd28c; }
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = f_adds(c, c->r[12], 0x1u);
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abd28c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xabd2a0u; f_a83f20(c);
    c->r[0] = 0xcb5a46u;
    c->r[1] = 0x1u;
    c->r[2] = 0xabd2b0u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xabd2b4u; f_a7fbb4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x18u;
    c->r[2] = 0x0u;
    c->r[14] = 0xabd2c4u; f_a7ff38(c);
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abd34c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x253u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x149cu;
    c->r[2] = 0x14a0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abd34c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xabd360u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_abd3b8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xabd3b4u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abd3b8:;
    c->r[1] = c->r[0] + c->r[5];
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x149cu;
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); c->r[2] = ea; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_abd414; }
    c->v.s[0] = LD32(c->r[6] + 84u);
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 84u);
    c->v.s[2] = LD32(c->r[6] + 96u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_abd414:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabd444u; f_a814c0(c);
    c->r[0] = 0x1be4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_abd55c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abd4c8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abd4c8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_abd50c; }
    c->r[0] = 0xf81ad8u;
    c->r[1] = 0xf81ad8u;
    { uint32_t ea = 0xabd4e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xabd4e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_abd518;
L_abd50c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_abd518:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_abd538; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abd550;
L_abd538:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abd550:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abd55c:;
    c->r[0] = 0x1bf4u;
    c->r[10] = c->r[4];
    c->r[5] = 0x6000u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x377b0000u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_abd65c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abd5d8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abd5d8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_abd610; }
    c->r[0] = 0xf819c8u;
    c->r[1] = 0xf819c8u;
    { uint32_t ea = 0xabd5f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xabd5f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[5];
    goto L_abd618;
L_abd610:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_abd618:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_abd638; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abd650;
L_abd638:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abd650:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abd65c:;
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xdaedu;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_abd688; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abd6b8; }
L_abd688:;
    c->r[3] = 0xdaedu;
    c->r[2] = c->r[2] & 0xffff00ffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abd6b8:;
    c->r[0] = 0x2724u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[0] = 0xd8ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x3410u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abd778; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abd74c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abd74c:;
    c->r[1] = 0x3410u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4682u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x17790000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abd778:;
    c->r[1] = 0xf7bd88u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabd78cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_abd7b0; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_abd7b0; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_abd7d0;
L_abd7b0:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[2] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_abd7d0:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_abd7f4; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abd7f4:;
    c->r[1] = 0x100cu;
    c->r[2] = c->r[4];
    c->v.s[16] = 0x3f800000u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[2] - 0xeecu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0xfu;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = 0xf84370u;
    { uint32_t ea = 0xabd838u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xabd83cu; f_a841e8(c);
    c->r[1] = c->r[13] + 0x200u;
    c->r[0] = c->r[4];
    c->r[14] = 0xabd848u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x210u;
    c->r[3] = c->r[13] + 0x220u;
    c->r[0] = c->r[4];
    c->r[14] = 0xabd858u; f_aafc90(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xabd860u; f_a81a68(c);
    c->r[0] = 0xcb5497u;
    c->r[1] = 0x20u;
    c->r[2] = 0xabd870u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xabd874u; f_a7fbb4(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abd8e8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x253u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x149cu;
    c->r[2] = 0x14a0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abd8e8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xabd8fcu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_abd950; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xabd94cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_abd950:;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_EQ) { goto L_abdb4c; }
    c->v.s[0] = LD32(c->r[8] + 84u);
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    ST32(c->r[6], c->v.s[0]);
    c->v.s[0] = LD32(c->r[8] + 84u);
    c->v.s[2] = LD32(c->r[8] + 96u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = 0x40800000u;
    ST32(c->r[6] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[8] + 92u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[6] + 12u, c->v.s[0]);
    c->r[14] = 0xabd9b4u; f_a857f4(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
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
    c->r[1] = c->r[13] + 0x140u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1c0u;
    c->r[14] = 0xabdaccu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4cu; ST32(ea, c->r[0]); }
L_abdb4c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabdb6cu; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_abdba4; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abdba4:;
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xabdbb4u; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0xdaedu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_abdbe8; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abdc20; }
L_abdbe8:;
    c->r[3] = 0xdaedu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abdc20:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_abdd1c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abdc90; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abdc90:;
    c->r[2] = 0x6000u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x377b0000u;
    if (COND_EQ) { goto L_abdcd0; }
    c->r[0] = 0xf81308u;
    c->r[1] = 0xf81308u;
    { uint32_t ea = 0xabdcb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xabdcb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[2];
    goto L_abdcd8;
L_abdcd0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_abdcd8:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_abdcf8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abdd10;
L_abdcf8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abdd10:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abdd1c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3408u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_abddcc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abdda0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abdda0:;
    c->r[1] = 0x3408u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2681u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10ae0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abddcc:;
    c->r[1] = 0xf7b734u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabdde0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_abde04; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_abde04; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abde1c;
L_abde04:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abde1c:;
    { uint32_t ea = c->r[4] + 0xfe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_abde40; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abde40:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    c->r[1] = (c->r[0] >> 16) & 0x3fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x140u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 320u, c->v.s[4]);
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 324u, c->v.s[4]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 328u, c->v.s[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 332u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabdee4u; f_a7fc58(c);
    c->r[10] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x220u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[10];
    c->r[14] = 0xabdef8u; f_aafc90(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abdf6c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x253u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x149cu;
    c->r[2] = 0x14a0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abdf6c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xabdf80u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_abdfd4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xabdfd0u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abdfd4:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_abe024; }
    c->v.s[0] = LD32(c->r[6] + 84u);
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 84u);
    c->v.s[2] = LD32(c->r[6] + 136u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    ST32(c->r[0] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_abe024:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_abec9c; }
    { uint32_t ea = c->r[4] + 0xd94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabe04cu; f_a85814(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xabe058u; f_a857f4(c);
    c->v.s[18] = 0x0u;
    c->v.s[2] = LD32(c->r[7] + 28u);
    c->v.s[0] = LD32(c->r[7] + 12u);
    c->v.s[4] = LD32(c->r[7] + 44u);
    c->v.s[20] = LD32(c->r[6] + 84u);
    c->v.s[6] = LD32(c->r[7] + 60u);
    c->r[8] = c->r[0];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[18]);
    c->v.s[22] = c->v.s[18];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[20]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_abe09c; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[22] = c->v.f[2] / c->v.f[0];
L_abe09c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = LD32(c->r[7] + 8u);
    c->v.s[30] = LD32(c->r[7] + 24u);
    c->v.s[26] = LD32(c->r[7] + 40u);
    c->v.s[28] = LD32(c->r[7] + 56u);
    { uint32_t ea = c->r[0] + 0x5c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0xabe0c0u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[3] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[3] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_abe114; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xabe110u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_abe114:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + c->r[5];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd94u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_abec50; }
    c->v.f[0] = c->v.f[30] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[18]);
    c->v.s[2] = c->v.s[20] ^ 0x80000000u;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->v.f[0] = c->v.f[28] + c->v.f[0];
    c->v.f[18] = c->v.f[22] * c->v.f[0];
    c->r[14] = 0xabe178u; f_15efe30(c);
    c->r[2] = 0x0u;
    c->v.s[0] = c->v.s[16];
    c->v.s[10] = c->v.s[16];
    c->v.s[2] = c->v.s[16];
    c->r[1] = 0x3f800000u;
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x198u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 328u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 360u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 392u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 424u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x140u;
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[1]); }
    goto L_abe248;
L_abe230:;
    c->r[1] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = LD32(c->r[1] + 16u);
    c->v.s[10] = LD32(c->r[1] + 20u);
    c->v.s[18] = LD32(c->r[1] + 24u);
    c->v.s[0] = LD32(c->r[1] + 28u);
L_abe248:;
    c->v.s[6] = LD32(c->r[8] + 20u);
    c->v.s[12] = LD32(c->r[8] + 4u);
    c->v.s[9] = LD32(c->r[8] + 36u);
    c->v.s[4] = LD32(c->r[8] + 16u);
    c->v.s[8] = LD32(c->r[8]);
    c->v.s[1] = LD32(c->r[8] + 12u);
    c->v.s[3] = LD32(c->r[8] + 24u);
    c->v.s[5] = LD32(c->r[8] + 28u);
    c->v.s[14] = LD32(c->r[8] + 8u);
    c->v.s[7] = LD32(c->r[8] + 32u);
    c->r[1] = c->r[10] + c->r[0];
    c->v.f[6] = c->v.f[10] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[8] + 48u);
    c->v.f[4] = c->v.f[4] * c->v.f[10];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[9]);
    c->v.s[9] = LD32(c->r[8] + 44u);
    c->v.f[8] = c->v.f[10] * c->v.f[3];
    c->v.f[10] = c->v.f[10] * c->v.f[5];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[1]);
    c->v.s[3] = LD32(c->r[8] + 40u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[8] + 60u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[7] * c->v.f[18]);
    c->v.s[7] = LD32(c->r[8] + 52u);
    c->v.s[5] = LD32(c->r[8] + 56u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[18] * c->v.f[9]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[3]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[5]);
    ST32(c->r[1], c->v.s[4]);
    ST32(c->r[1] + 4u, c->v.s[6]);
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    ST32(c->r[1] + 8u, c->v.s[8]);
    ST32(c->r[1] + 12u, c->v.s[10]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_abe30c; }
    c->v.f[0] = c->v.f[16] / c->v.f[10];
    c->v.f[2] = c->v.f[0] * c->v.f[4];
    c->v.f[4] = c->v.f[0] * c->v.f[6];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    ST32(c->r[1], c->v.s[2]);
    ST32(c->r[1] + 4u, c->v.s[4]);
    ST32(c->r[1] + 8u, c->v.s[6]);
    ST32(c->r[1] + 12u, c->v.s[0]);
L_abe30c:;
    (void)f_subs(c, c->r[0], 0x70u);
    if (COND_NE) { goto L_abe230; }
    c->v.s[0] = LD32(c->r[7] + 40u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_abe734; }
    c->v.s[18] = LD32(c->r[13] + 256u);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[22] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 212u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[20] = LD32(c->r[13] + 264u);
    c->v.s[8] = LD32(c->r[13] + 216u);
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[8] = c->v.f[8] - c->v.f[20];
    c->v.f[4] = c->v.f[4] - c->v.f[20];
    c->v.f[10] = c->v.f[10] - c->v.f[22];
    c->v.f[6] = c->v.f[6] - c->v.f[18];
    c->v.f[2] = c->v.f[2] - c->v.f[22];
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[28] = c->v.f[10] * c->v.f[4];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[26] = c->v.f[6] * c->v.f[2];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe39c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe39cu; f_15efddc(c);
L_abe39c:;
    c->v.s[16] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe3c0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe3c0:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[28]);
    ST32(c->r[13] + 96u, c->v.s[28]);
    ST32(c->r[13] + 100u, c->v.s[24]);
    ST32(c->r[13] + 104u, c->v.s[26]);
    c->v.s[22] = LD32(c->r[13] + 228u);
    c->v.s[18] = LD32(c->r[13] + 232u);
    c->v.s[2] = LD32(c->r[13] + 288u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 296u);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[10] = LD32(c->r[13] + 292u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[26]);
    c->v.s[20] = LD32(c->r[13] + 224u);
    c->v.f[12] = c->v.f[2] - c->v.f[20];
    c->v.f[2] = c->v.f[4] - c->v.f[18];
    c->v.f[4] = c->v.f[6] - c->v.f[18];
    c->v.f[6] = c->v.f[8] - c->v.f[22];
    c->v.f[8] = c->v.f[10] - c->v.f[22];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[28] = c->v.f[6] * c->v.f[4];
    c->v.f[24] = c->v.f[2] * c->v.f[12];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[13] + 108u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[26] = c->v.f[0] * c->v.f[8];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe458; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe458u; f_15efddc(c);
L_abe458:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe478; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe478:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 112u, c->v.s[28]);
    ST32(c->r[13] + 116u, c->v.s[24]);
    ST32(c->r[13] + 120u, c->v.s[26]);
    c->v.s[20] = LD32(c->r[13] + 192u);
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[22] = LD32(c->r[13] + 196u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[10] = LD32(c->r[13] + 228u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.s[18] = LD32(c->r[13] + 200u);
    c->v.f[12] = c->v.f[2] - c->v.f[20];
    c->v.f[2] = c->v.f[4] - c->v.f[18];
    c->v.f[4] = c->v.f[6] - c->v.f[18];
    c->v.f[6] = c->v.f[8] - c->v.f[22];
    c->v.f[8] = c->v.f[10] - c->v.f[22];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[28] = c->v.f[6] * c->v.f[4];
    c->v.f[24] = c->v.f[2] * c->v.f[12];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[13] + 124u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[26] = c->v.f[0] * c->v.f[8];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe510; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe510u; f_15efddc(c);
L_abe510:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe530; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe530:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 128u, c->v.s[28]);
    ST32(c->r[13] + 132u, c->v.s[24]);
    ST32(c->r[13] + 136u, c->v.s[26]);
    c->v.s[2] = LD32(c->r[13] + 260u);
    c->v.s[22] = LD32(c->r[13] + 292u);
    c->v.s[10] = LD32(c->r[13] + 276u);
    c->v.s[4] = LD32(c->r[13] + 264u);
    c->v.s[20] = LD32(c->r[13] + 296u);
    c->v.s[8] = LD32(c->r[13] + 280u);
    c->v.s[6] = LD32(c->r[13] + 272u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.s[18] = LD32(c->r[13] + 288u);
    c->v.f[8] = c->v.f[8] - c->v.f[20];
    c->v.f[4] = c->v.f[4] - c->v.f[20];
    c->v.f[10] = c->v.f[10] - c->v.f[22];
    c->v.f[2] = c->v.f[2] - c->v.f[22];
    c->v.f[6] = c->v.f[6] - c->v.f[18];
    c->v.f[28] = c->v.f[10] * c->v.f[4];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[26] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 140u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 256u);
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe5c8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe5c8u; f_15efddc(c);
L_abe5c8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe5e8; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe5e8:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[28]);
    ST32(c->r[13] + 144u, c->v.s[28]);
    ST32(c->r[13] + 148u, c->v.s[24]);
    ST32(c->r[13] + 152u, c->v.s[26]);
    c->v.s[22] = LD32(c->r[13] + 196u);
    c->v.s[18] = LD32(c->r[13] + 200u);
    c->v.s[2] = LD32(c->r[13] + 256u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.s[6] = LD32(c->r[13] + 264u);
    c->v.s[8] = LD32(c->r[13] + 228u);
    c->v.s[10] = LD32(c->r[13] + 260u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[26]);
    c->v.s[20] = LD32(c->r[13] + 192u);
    c->v.f[12] = c->v.f[2] - c->v.f[20];
    c->v.f[2] = c->v.f[4] - c->v.f[18];
    c->v.f[4] = c->v.f[6] - c->v.f[18];
    c->v.f[6] = c->v.f[8] - c->v.f[22];
    c->v.f[8] = c->v.f[10] - c->v.f[22];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[28] = c->v.f[6] * c->v.f[4];
    c->v.f[24] = c->v.f[2] * c->v.f[12];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[26] = c->v.f[0] * c->v.f[8];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe680; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe680u; f_15efddc(c);
L_abe680:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe6a0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe6a0:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 160u, c->v.s[28]);
    ST32(c->r[13] + 164u, c->v.s[24]);
    ST32(c->r[13] + 168u, c->v.s[26]);
    c->v.s[24] = LD32(c->r[13] + 272u);
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.s[8] = LD32(c->r[13] + 248u);
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[28] = LD32(c->r[13] + 276u);
    c->v.s[10] = LD32(c->r[13] + 244u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.s[26] = LD32(c->r[13] + 280u);
    c->v.f[6] = c->v.f[6] - c->v.f[24];
    c->v.f[2] = c->v.f[2] - c->v.f[28];
    c->v.f[10] = c->v.f[10] - c->v.f[28];
    c->v.f[4] = c->v.f[4] - c->v.f[26];
    c->v.f[8] = c->v.f[8] - c->v.f[26];
    c->v.f[22] = c->v.f[6] * c->v.f[2];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[20] = c->v.f[10] * c->v.f[4];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[2]);
    ST32(c->r[13] + 172u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.f[0] = c->v.f[0] - c->v.f[24];
    c->v.f[18] = c->v.f[8] * c->v.f[0];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[10] * c->v.f[0]);
    goto L_abeb24;
L_abe734:;
    c->v.s[20] = LD32(c->r[13] + 192u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 256u);
    c->v.s[22] = LD32(c->r[13] + 196u);
    c->v.s[18] = LD32(c->r[13] + 200u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.s[6] = LD32(c->r[13] + 264u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[10] = LD32(c->r[13] + 260u);
    c->v.f[12] = c->v.f[2] - c->v.f[20];
    c->v.f[2] = c->v.f[4] - c->v.f[18];
    c->v.f[4] = c->v.f[6] - c->v.f[18];
    c->v.f[6] = c->v.f[8] - c->v.f[22];
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[8] = c->v.f[10] - c->v.f[22];
    c->v.f[24] = c->v.f[2] * c->v.f[12];
    c->v.f[28] = c->v.f[6] * c->v.f[4];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[26] = c->v.f[0] * c->v.f[8];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe7ac; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe7acu; f_15efddc(c);
L_abe7ac:;
    c->v.s[16] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe7d0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe7d0:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 96u, c->v.s[28]);
    ST32(c->r[13] + 100u, c->v.s[24]);
    ST32(c->r[13] + 104u, c->v.s[26]);
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[22] = LD32(c->r[13] + 292u);
    c->v.s[10] = LD32(c->r[13] + 244u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.s[20] = LD32(c->r[13] + 296u);
    c->v.s[8] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.s[18] = LD32(c->r[13] + 288u);
    c->v.f[8] = c->v.f[8] - c->v.f[20];
    c->v.f[4] = c->v.f[4] - c->v.f[20];
    c->v.f[10] = c->v.f[10] - c->v.f[22];
    c->v.f[2] = c->v.f[2] - c->v.f[22];
    c->v.f[6] = c->v.f[6] - c->v.f[18];
    c->v.f[28] = c->v.f[10] * c->v.f[4];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[26] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 108u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe868; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe868u; f_15efddc(c);
L_abe868:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe888; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe888:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[28]);
    ST32(c->r[13] + 112u, c->v.s[28]);
    ST32(c->r[13] + 116u, c->v.s[24]);
    ST32(c->r[13] + 120u, c->v.s[26]);
    c->v.s[18] = LD32(c->r[13] + 224u);
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[22] = LD32(c->r[13] + 228u);
    c->v.s[10] = LD32(c->r[13] + 212u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[8] = LD32(c->r[13] + 216u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[26]);
    c->v.s[20] = LD32(c->r[13] + 232u);
    c->v.f[10] = c->v.f[10] - c->v.f[22];
    c->v.f[6] = c->v.f[6] - c->v.f[18];
    c->v.f[2] = c->v.f[2] - c->v.f[22];
    c->v.f[4] = c->v.f[4] - c->v.f[20];
    c->v.f[8] = c->v.f[8] - c->v.f[20];
    c->v.f[26] = c->v.f[6] * c->v.f[2];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[28] = c->v.f[10] * c->v.f[4];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[8] * c->v.f[2]);
    ST32(c->r[13] + 124u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe920; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe920u; f_15efddc(c);
L_abe920:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe940; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe940:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[28]);
    ST32(c->r[13] + 128u, c->v.s[28]);
    ST32(c->r[13] + 132u, c->v.s[24]);
    ST32(c->r[13] + 136u, c->v.s[26]);
    c->v.s[22] = LD32(c->r[13] + 260u);
    c->v.s[18] = LD32(c->r[13] + 264u);
    c->v.s[2] = LD32(c->r[13] + 288u);
    c->v.s[4] = LD32(c->r[13] + 280u);
    c->v.s[6] = LD32(c->r[13] + 296u);
    c->v.s[8] = LD32(c->r[13] + 276u);
    c->v.s[10] = LD32(c->r[13] + 292u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[26]);
    c->v.s[20] = LD32(c->r[13] + 256u);
    c->v.f[12] = c->v.f[2] - c->v.f[20];
    c->v.f[2] = c->v.f[4] - c->v.f[18];
    c->v.f[4] = c->v.f[6] - c->v.f[18];
    c->v.f[6] = c->v.f[8] - c->v.f[22];
    c->v.f[8] = c->v.f[10] - c->v.f[22];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[28] = c->v.f[6] * c->v.f[4];
    c->v.f[24] = c->v.f[2] * c->v.f[12];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[13] + 140u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 272u);
    c->v.f[0] = c->v.f[0] - c->v.f[20];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[26] = c->v.f[0] * c->v.f[8];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abe9d8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabe9d8u; f_15efddc(c);
L_abe9d8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abe9f8; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abe9f8:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 144u, c->v.s[28]);
    ST32(c->r[13] + 148u, c->v.s[24]);
    ST32(c->r[13] + 152u, c->v.s[26]);
    c->v.s[2] = LD32(c->r[13] + 196u);
    c->v.s[22] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 228u);
    c->v.s[4] = LD32(c->r[13] + 200u);
    c->v.s[20] = LD32(c->r[13] + 264u);
    c->v.s[8] = LD32(c->r[13] + 232u);
    c->v.s[6] = LD32(c->r[13] + 224u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.s[18] = LD32(c->r[13] + 256u);
    c->v.f[8] = c->v.f[8] - c->v.f[20];
    c->v.f[4] = c->v.f[4] - c->v.f[20];
    c->v.f[10] = c->v.f[10] - c->v.f[22];
    c->v.f[2] = c->v.f[2] - c->v.f[22];
    c->v.f[6] = c->v.f[6] - c->v.f[18];
    c->v.f[28] = c->v.f[10] * c->v.f[4];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[26] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 156u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[2] = c->v.f[24] * c->v.f[24];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abea90; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabea90u; f_15efddc(c);
L_abea90:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abeab0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[26] = c->v.f[0] * c->v.f[26];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
L_abeab0:;
    c->v.f[0] = c->v.f[22] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[28]);
    ST32(c->r[13] + 160u, c->v.s[28]);
    ST32(c->r[13] + 164u, c->v.s[24]);
    ST32(c->r[13] + 168u, c->v.s[26]);
    c->v.s[24] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 272u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[6] = LD32(c->r[13] + 280u);
    c->v.s[28] = LD32(c->r[13] + 212u);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[10] = LD32(c->r[13] + 276u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[26]);
    c->v.s[26] = LD32(c->r[13] + 216u);
    c->v.f[12] = c->v.f[2] - c->v.f[24];
    c->v.f[2] = c->v.f[4] - c->v.f[26];
    c->v.f[4] = c->v.f[6] - c->v.f[26];
    c->v.f[6] = c->v.f[8] - c->v.f[28];
    c->v.f[8] = c->v.f[10] - c->v.f[28];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.f[18] = c->v.f[2] * c->v.f[12];
    c->v.f[20] = c->v.f[6] * c->v.f[4];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[2] * c->v.f[8]);
    ST32(c->r[13] + 172u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.f[0] = c->v.f[0] - c->v.f[24];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[22] = c->v.f[0] * c->v.f[8];
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[6] * c->v.f[12]);
L_abeb24:;
    c->v.f[2] = c->v.f[18] * c->v.f[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_abeb48; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xabeb48u; f_15efddc(c);
L_abeb48:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_abeb68; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[22] = c->v.f[0] * c->v.f[22];
    c->v.f[18] = c->v.f[0] * c->v.f[18];
    c->v.f[20] = c->v.f[0] * c->v.f[20];
L_abeb68:;
    c->v.f[0] = c->v.f[28] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[20]);
    ST32(c->r[13] + 176u, c->v.s[20]);
    c->v.f[2] = c->v.f[26] * c->v.f[22];
    ST32(c->r[13] + 180u, c->v.s[18]);
    c->r[0] = c->r[13] + 0x60u;
    ST32(c->r[13] + 184u, c->v.s[22]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 188u, c->v.s[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; ST32(ea, c->r[0]); }
L_abec50:;
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffbffu;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf7a0c4u;
    { uint32_t ea = 0xabec68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xabec78u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x6172u;
    c->r[0] = 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6d550000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabec98u; f_742f7c(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
L_abec9c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabecb0u; f_a81a68(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xabecc0u; f_a7a7ac(c);
    c->v.s[16] = 0x0u;
    { uint32_t ea = c->r[6] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = 0x3f800000u;
L_abeccc:;
    c->r[5] = c->r[5] + 0x1u;
    c->v.s[0] = c->r[5];
    (void)f_subs(c, c->r[5], c->r[0]);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[16] = c->v.f[16] + c->v.f[0];
    if (COND_LS) { goto L_abeccc; }
    c->r[1] = 0x369cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xc974u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abee74; }
    c->r[3] = 0x34a0u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_abeda8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abed80; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x693u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_abed80:;
    c->r[2] = 0x34a0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2694u;
    c->r[0] = 0x36a0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbb6b0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abeda8:;
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1c8cu;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_abf6d8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abee30; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x351u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_abee30:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_abf68c; }
    c->r[1] = 0xf80170u;
    c->r[2] = 0xf80170u;
    { uint32_t ea = 0xabee48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabee4cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[1] = 0x7000u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x931b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_abf694;
L_abee74:;
    c->r[3] = 0x3498u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_abef0c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abeee8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x693u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_abeee8:;
    c->r[2] = 0x3498u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x36a0u;
    c->r[1] = 0x693u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abef0c:;
    c->r[0] = 0x149cu;
    c->v.s[20] = 0x3e800000u;
    c->r[10] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1be8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1c90u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1c8cu;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf7a5b8u;
    { uint32_t ea = 0xabef5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[8] = c->r[0] + 0x30c00u;
    c->r[0] = 0xf80048u;
    { uint32_t ea = 0xabef70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf80040u;
    { uint32_t ea = 0xabef7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf80030u;
    { uint32_t ea = 0xabef88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf80028u;
    { uint32_t ea = 0xabef94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_abef94:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_abefb0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xabefb0u; f_a83f20(c);
L_abefb0:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abf014; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x253u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abf014:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xabf028u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_abf07c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xabf078u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_abf07c:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_abf0d8; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xabf0bcu; f_15efe30(c);
    c->r[0] = c->r[10] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    ST32(c->r[7] + 12u, c->v.s[0]);
L_abf0d8:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_abf1e8; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf160; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x33cu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abf160:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_abf19c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_abf1a8;
L_abf19c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_abf1a8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_abf1c4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abf1dc;
L_abf1c4:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf1dc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf1e8:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_abf2dc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf254; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x351u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abf254:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abf290; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x7000u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x931b0000u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_abf29c;
L_abf290:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_abf29c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_abf2b8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abf2d0;
L_abf2b8:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf2d0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf2dc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_abf30c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_abf30c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abf324;
L_abf30c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abf324:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_abf348; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abf348:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0xdaedu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_abf394; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abf3c8; }
L_abf394:;
    c->r[3] = 0xdaedu;
    c->r[2] = c->r[2] & 0xffff00ffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = 0xaedu;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf3c8:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x66u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_abf478; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_abf50c; }
    c->r[2] = 0x3420u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abf634; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf45c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abf45c:;
    c->r[1] = 0x3420u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe684u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7c920000u;
    goto L_abf620;
L_abf478:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_abf598; }
    c->r[2] = 0x3430u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abf634; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf4f0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abf4f0:;
    c->r[1] = 0x3430u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xa686u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7a350000u;
    goto L_abf620;
L_abf50c:;
    c->r[2] = 0x3418u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abf634; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf57c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abf57c:;
    c->r[1] = 0x3418u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x9683u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44bb0000u;
    goto L_abf620;
L_abf598:;
    c->r[2] = 0x3428u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abf634; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf608; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abf608:;
    c->r[1] = 0x3428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2685u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20790000u;
L_abf620:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abf634:;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0x140u;
    c->r[14] = 0xabf668u; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x220u;
    c->r[14] = 0xabf678u; f_aafc90(c);
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LS) { goto L_abef94; }
    goto L_ac0070;
L_abf68c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_abf694:;
    c->r[2] = 0x1c90u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_abf6b4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abf6cc;
L_abf6b4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf6cc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abf6d8:;
    c->r[1] = 0xf79e28u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabf6ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_abf70c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_abf70c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abf724;
L_abf70c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abf724:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_abf748; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abf748:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[20] = 0x3e800000u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = 0x149cu;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1be8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[8] = c->r[0] + 0x30c00u;
    c->r[0] = 0xf7f810u;
    { uint32_t ea = 0xabf7a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf7f808u;
    { uint32_t ea = 0xabf7b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_abf7b4:;
    c->r[0] = c->r[10] & 0x1u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabf7e4u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abf848; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x253u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abf848:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x94cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xabf85cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_abf8b0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xabf8acu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_abf8b0:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_abf910; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xabf8f0u; f_15efe30(c);
    c->r[10] = c->r[10] + 0x1u;
    c->v.s[0] = c->r[10];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    ST32(c->r[7] + 12u, c->v.s[0]);
    goto L_abf914;
L_abf910:;
    c->r[10] = c->r[10] + 0x1u;
L_abf914:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[13] + 0x60u;
    c->r[0] = c->r[1];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] & 0x1u;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_abfa28; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abf9a0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[8] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[8] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[8] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_abf9a0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_abf9dc; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_abf9e8;
L_abf9dc:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_abf9e8:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_abfa04; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abfa1c;
L_abfa04:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abfa1c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abfa28:;
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0xdaedu;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_abfa54; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abfa88; }
L_abfa54:;
    c->r[3] = 0xdaedu;
    c->r[2] = c->r[2] & 0xffff00ffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = 0xaedu;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abfa88:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x66u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_abfb38; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_abfbcc; }
    c->r[2] = 0x3420u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abfcf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abfb1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abfb1c:;
    c->r[1] = 0x3420u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe684u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7c920000u;
    goto L_abfce4;
L_abfb38:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_abfc5c; }
    c->r[2] = 0x3430u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abfcf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abfbb0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abfbb0:;
    c->r[1] = 0x3430u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xa686u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7a350000u;
    goto L_abfce4;
L_abfbcc:;
    c->r[2] = 0x3418u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abfcf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abfc3c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abfc3c:;
    c->r[1] = 0x3418u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x9683u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44bb0000u;
    goto L_abfce4;
L_abfc5c:;
    c->r[2] = 0x3428u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_abfcf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abfccc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abfccc:;
    c->r[1] = 0x3428u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2685u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20790000u;
L_abfce4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abfcf8:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xabfd28u; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[13] + 0x140u;
    c->r[14] = 0xabfd38u; f_aafc90(c);
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LS) { goto L_abf7b4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xabfd54u; f_a7b778(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xabfd60u; f_a7a7ac(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xabfd78u; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_abfe84; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abfdec; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x33cu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abfdec:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abfe38; }
    c->r[0] = 0xf7f1b4u;
    c->r[1] = 0xf7f1b4u;
    { uint32_t ea = 0xabfe04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xabfe08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_abfe44;
L_abfe38:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_abfe44:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_abfe60; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abfe78;
L_abfe60:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abfe78:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_abfe84:;
    c->r[1] = 0xf7967cu;
    { uint32_t ea = c->r[4] + 0xf34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabfe98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_abfecc; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_abfecc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abfee4;
L_abfecc:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abfee4:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_abff08; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abff08:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x3438u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_abffd0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abffa4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abffa4:;
    c->r[1] = 0x3438u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1687u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7e0d0000u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abffd0:;
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0xdaedu;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_abfffc; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ac002c; }
L_abfffc:;
    c->r[3] = 0xdaedu;
    c->r[2] = c->r[2] & 0xffff00ffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ac002c:;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[1] = c->r[13] + 0x140u;
    c->r[0] = c->r[4];
    c->r[14] = 0xac0060u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x220u;
    c->r[0] = c->r[4];
    c->r[14] = 0xac0070u; f_aafc90(c);
L_ac0070:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xac007cu; f_a7b778(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xc171u;
    c->r[0] = 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff20000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xac009cu; f_742f7c(c);
L_ac009c:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
