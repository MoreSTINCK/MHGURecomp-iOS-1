#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_4332ac(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a814c0(Cpu *c);
void f_a82674(Cpu *c);
void f_a841e8(Cpu *c);
void f_a857b4(Cpu *c);
void f_a857c4(Cpu *c);
void f_a857e4(Cpu *c);
void f_a85804(Cpu *c);
void f_a85814(Cpu *c);
void f_aaf6d8(Cpu *c);
void f_aafc90(Cpu *c);
void f_adca10(Cpu *c);
void f_add07c(Cpu *restrict c) {
    FN_ENTER(0xadd07cu);
L_add07c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x3e8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adfaf4; }
    c->r[1] = 0xf5bcf4u;
    c->r[2] = 0xbb99u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x430000u;
    { uint32_t ea = 0xadd0bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_adfaf4; }
    { uint32_t ea = c->r[0] + 0x2a8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_adfaf4; }
    { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_adfaf4; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xadd108u; f_a7a7ac(c);
    c->r[1] = 0xd93f70u;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = 0xadd11cu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xadd124u; f_a7ff38(c);
    c->r[0] = (c->r[9] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_add14c; }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xfffffu;
    c->r[0] = c->r[0] | (c->r[1] << 20);
L_add14c:;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[4] - 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3d8u; ST32(ea, c->r[0]); }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[4] - 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3dcu; ST32(ea, c->r[1]); }
    c->v.s[8] = c->r[1];
    { uint32_t ea = c->r[4] - 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3e0u; ST32(ea, c->r[2]); }
    c->v.s[4] = c->r[2];
    { uint32_t ea = c->r[4] - 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3e4u; ST32(ea, c->r[3]); }
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[4] - 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[7] = (c->r[7] >> 16);
    c->v.s[2] = c->r[7];
    c->v.s[6] = c->r[5];
    { uint32_t ea = c->r[13] + 0x3d0u; ST32(ea, c->r[5]); }
    c->v.f[26] = (float)(int32_t)c->v.s[0];
    c->v.f[24] = (float)(int32_t)c->v.s[2];
    c->v.f[28] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = (float)(int32_t)c->v.s[6];
    c->v.f[20] = (float)(int32_t)c->v.s[8];
    c->v.f[2] = (float)(int32_t)c->v.s[10];
    { uint32_t ea = c->r[13] + 0x3d4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xe60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_add1f4; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[8] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_add1f4:;
    c->r[1] = 0x100cu;
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] - 0xeecu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xf5c2f4u;
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    { uint32_t ea = 0xadd220u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_add240; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_add254; }
L_add240:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_add254:;
    ST32(c->r[13] + 24u, c->v.s[2]);
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->r[4] = c->r[8];
    c->r[1] = 0xfff8u;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[1];
    c->r[1] = 0x38u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[2] ^ c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_add2a8; }
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = 0x0u;
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_add2a8:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    c->r[14] = 0xadd2b4u; f_a857b4(c);
    c->v.s[17] = LD32(c->r[0]);
    c->v.s[19] = LD32(c->r[0] + 4u);
    c->v.s[30] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[8];
    c->r[14] = 0xadd2c8u; f_a85804(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xadd350u; f_a857c4(c);
    c->v.s[16] = LD32(c->r[0]);
    c->v.s[23] = LD32(c->r[0] + 4u);
    c->v.s[25] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[8];
    c->r[14] = 0xadd364u; f_a85814(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x390u;
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3c8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x350u;
    c->r[14] = 0xadd3f8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->v.s[19];
    c->v.s[1] = c->v.s[17];
    c->v.s[14] = c->v.s[30];
    c->v.s[4] = LD32(c->r[13] + 860u);
    c->v.s[6] = LD32(c->r[13] + 876u);
    c->v.s[2] = LD32(c->r[13] + 892u);
    c->v.s[0] = LD32(c->r[13] + 908u);
    c->v.s[12] = c->v.s[19];
    c->v.s[10] = c->v.s[17];
    c->v.s[18] = 0x0u;
    c->v.s[8] = LD32(c->r[0] + 144u);
    c->v.s[7] = LD32(c->r[0] + 136u);
    c->v.s[3] = LD32(c->r[0] + 140u);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[23] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[16] * c->v.f[8]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[25] * c->v.f[8]);
    c->v.s[8] = c->v.s[30];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[23] * c->v.f[7]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[16] * c->v.f[7]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[7]);
    c->v.s[7] = c->v.s[18];
    c->v.f[9] = c->v.f[5] * c->v.f[6];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.f[9] = c->v.f[0] + c->v.f[9];
    vfp_cmp_f(c, c->v.f[9], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_add480; }
    goto L_add478;
L_add478:;
    c->v.s[7] = 0x3f800000u;
    c->v.f[7] = c->v.f[7] / c->v.f[9];
L_add480:;
    c->v.s[27] = LD32(c->r[13] + 856u);
    c->v.s[29] = LD32(c->r[13] + 872u);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[25] * c->v.f[3]);
    c->v.s[25] = LD32(c->r[13] + 888u);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[23] * c->v.f[3]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[16] * c->v.f[3]);
    c->v.s[23] = LD32(c->r[13] + 904u);
    c->v.f[3] = c->v.f[5] * c->v.f[29];
    c->v.f[5] = c->v.f[12] * c->v.f[6];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[27]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[14] * c->v.f[25]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[14] = c->v.s[18];
    c->v.f[1] = c->v.f[23] + c->v.f[3];
    c->v.f[3] = c->v.f[0] + c->v.f[5];
    vfp_cmp_f(c, c->v.f[3], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_add4d4; }
    c->v.s[14] = 0x3f800000u;
    c->v.f[14] = c->v.f[14] / c->v.f[3];
L_add4d4:;
    c->v.f[12] = c->v.f[12] * c->v.f[29];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[27]);
    c->v.s[21] = c->v.s[18];
    c->v.f[6] = c->v.f[6] * c->v.f[19];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[17]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[25]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[22] = c->v.f[7] * c->v.f[1];
    c->v.f[2] = c->v.f[23] + c->v.f[12];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[31] = c->v.f[14] * c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_add514; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[21] = c->v.f[2] / c->v.f[0];
L_add514:;
    c->r[0] = c->r[8];
    c->r[14] = 0xadd51cu; f_a857e4(c);
    c->r[0] = c->r[13] + 0x1c0u;
    c->r[1] = c->r[13] + 0x390u;
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0xadd52cu; f_4332ac(c);
    c->v.f[2] = c->v.f[19] * c->v.f[29];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[27]);
    c->v.s[8] = LD32(c->r[13] + 472u);
    c->v.s[4] = LD32(c->r[13] + 456u);
    c->v.s[0] = 0xbf800000u;
    c->v.s[10] = LD32(c->r[13] + 476u);
    c->v.s[6] = LD32(c->r[13] + 460u);
    c->v.s[1] = LD32(c->r[13] + 492u);
    c->v.s[14] = LD32(c->r[13] + 504u);
    c->v.f[12] = c->v.f[22] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[25]);
    c->v.s[30] = 0x3f800000u;
    c->v.f[8] = c->v.f[8] * c->v.f[18];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[18]);
    c->r[0] = c->v.s[12];
    c->v.s[12] = LD32(c->r[13] + 488u);
    c->v.f[10] = c->v.f[10] * c->v.f[18];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[18]);
    c->r[0] = c->r[0] & (uint32_t)((int32_t)c->r[0] >> 31);
    c->v.s[4] = c->r[0];
    c->v.f[2] = c->v.f[23] + c->v.f[2];
    c->v.f[8] = c->v.f[12] + c->v.f[8];
    c->v.f[12] = c->v.f[31] + c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[2]);
    c->r[0] = c->v.s[12];
    c->v.f[2] = c->v.f[4] + c->v.f[30];
    c->v.s[4] = LD32(c->r[13] + 508u);
    c->v.f[6] = c->v.f[14] + c->v.f[8];
    c->r[2] = c->v.s[2];
    c->r[0] = c->r[0] & (uint32_t)((int32_t)c->r[0] >> 31);
    c->r[1] = c->v.s[0];
    c->v.f[0] = c->v.f[1] + c->v.f[10];
    c->r[10] = c->r[2] & ~(uint32_t)((int32_t)c->r[2] >> 31);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[17] = c->r[10];
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    c->v.s[4] = c->v.s[6] ^ 0x80000000u;
    c->r[1] = c->r[1] & (uint32_t)((int32_t)c->r[1] >> 31);
    c->v.s[8] = LD32(c->r[2] + 112u);
    c->v.s[2] = LD32(c->r[2] + 108u);
    c->v.s[6] = c->r[1];
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    c->v.f[10] = c->v.f[17] - c->v.f[8];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[4] = c->v.f[6] + c->v.f[30];
    c->v.s[6] = c->r[0];
    c->r[0] = c->v.s[4];
    c->v.f[4] = c->v.f[6] + c->v.f[30];
    c->v.f[6] = c->v.f[16] - c->v.f[17];
    c->v.f[10] = c->v.f[16] * c->v.f[10];
    c->v.f[8] = c->v.f[17] * c->v.f[8];
    c->r[1] = c->v.s[4];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[17];
    c->r[0] = c->r[0] & ~(uint32_t)((int32_t)c->r[0] >> 31);
    c->v.s[6] = 0x3727c5acu;
    c->v.f[2] = c->v.f[2] / c->v.f[4];
    c->r[7] = c->r[1] & ~(uint32_t)((int32_t)c->r[1] >> 31);
    c->v.f[12] = c->v.f[0] - c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.s[16] = c->r[7];
    c->v.f[4] = c->v.f[16] + c->v.f[6];
    c->v.f[8] = c->v.f[12] * c->v.f[8];
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.s[8] = c->r[0];
    c->v.f[6] = c->v.f[8] - c->v.f[16];
    ST32(c->r[2] + 120u, c->v.s[2]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[6]);
    vfp_mrs_flags(c);
    c->v.s[19] = COND_GE ? c->v.s[4] : c->v.s[8];
    ST32(c->r[2] + 124u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_add670; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[8] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_add670:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xf5be80u;
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    { uint32_t ea = 0xadd694u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_add6b4; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_add6c8; }
L_add6b4:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_add6c8:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_add73c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x2bdu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x17ecu;
    c->r[2] = 0x17f0u;
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_add73c:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xaf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xadd750u; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_add7a4; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xadd7a0u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_add7a4:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x17ecu;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_addacc; }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[7]); }
    ST32(c->r[0] + 164u, c->v.s[19]);
    c->v.f[0] = c->v.f[17] - c->v.f[16];
    c->v.f[2] = c->v.f[19] - c->v.f[17];
    c->r[1] = (uint32_t)(uint16_t)(c->r[9]);
    c->v.s[8] = 0x3f072053u;
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[2]); }
    c->v.f[0] = c->v.f[30] / c->v.f[0];
    c->v.f[2] = c->v.f[30] / c->v.f[2];
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 188u, c->v.s[0]);
    ST32(c->r[0] + 192u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x1eu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[3] = (c->r[2] >> 16) & 0x3fffu;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[0] = c->r[2];
    c->v.s[2] = c->r[3];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[6] = c->r[1];
    c->v.f[0] = c->v.f[30] / c->v.f[0];
    c->v.f[2] = c->v.f[30] / c->v.f[2];
    c->v.f[4] = c->v.f[30] / c->v.f[4];
    ST32(c->r[0] + 128u, c->v.s[0]);
    c->v.f[0] = (float)(int32_t)c->v.s[6];
    ST32(c->r[0] + 132u, c->v.s[2]);
    ST32(c->r[0] + 136u, c->v.s[4]);
    c->v.s[4] = 0x0u;
    c->v.f[0] = c->v.f[30] / c->v.f[0];
    ST32(c->r[0] + 140u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = (c->r[1] >> 16) & 0x3fffu;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[2];
    c->r[1] = 0x0u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[30] / c->v.f[0];
    c->v.f[2] = c->v.f[30] / c->v.f[2];
    c->v.f[6] = c->v.f[0] * c->v.f[4];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 448u, c->v.s[6]);
    ST32(c->r[13] + 452u, c->v.s[4]);
    c->v.s[4] = 0xbdafdb90u;
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 464u, c->v.s[8]);
    c->v.s[8] = 0xbd243351u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 468u, c->v.s[4]);
    c->v.s[4] = 0x3f093cffu;
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 480u, c->v.s[8]);
    c->v.s[8] = 0xbf2ba249u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 484u, c->v.s[4]);
    c->v.s[4] = 0xbe38448du;
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 496u, c->v.s[8]);
    c->v.s[8] = 0xbed6bdf5u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 500u, c->v.s[4]);
    c->v.s[4] = 0xbf1db4bbu;
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 512u, c->v.s[8]);
    c->v.s[8] = 0x3ee1830eu;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 516u, c->v.s[4]);
    c->v.s[4] = 0xbf23afa7u;
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 528u, c->v.s[8]);
    c->v.s[8] = 0xbf41d085u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 532u, c->v.s[4]);
    c->v.s[4] = 0x3eb2dbe8u;
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 544u, c->v.s[8]);
    c->v.s[8] = 0x3f131a3bu;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    ST32(c->r[13] + 548u, c->v.s[4]);
    c->v.s[4] = 0x3f2f95c4u;
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 560u, c->v.s[0]);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    ST32(c->r[13] + 564u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[1]); }
    ST32(c->r[0], c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1f0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1f4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1fcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x21cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x230u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x234u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
L_addacc:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = (c->r[0] >> 16) & 0x3fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[2];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    if (COND_EQ) { goto L_addbb0; }
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.s[2] = LD32(c->r[5] + 388u);
    c->v.s[4] = LD32(c->r[5] + 392u);
    c->v.s[6] = LD32(c->r[5] + 396u);
    c->r[2] = c->r[13] + 0x1c0u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[3] = c->r[5] + 0xb0u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[2] + 0x4u;
L_addb24:;
    c->v.s[8] = LD32(c->r[3] - 4u);
    c->v.s[10] = LD32(c->r[3]);
    c->r[7] = c->r[7] + 0x1u;
    c->r[3] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[7], c->r[1]);
    c->v.f[8] = c->v.f[8] * c->v.f[2];
    c->v.f[10] = c->v.f[2] * c->v.f[10];
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    c->v.f[14] = c->v.f[10] * c->v.f[4];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[12] = c->v.f[8] * c->v.f[4];
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    ST32(c->r[2] - 4u, c->v.s[12]);
    ST32(c->r[2], c->v.s[14]);
    ST32(c->r[0] - 4u, c->v.s[8]);
    ST32(c->r[0], c->v.s[10]);
    c->r[0] = c->r[0] + 0x10u;
    c->r[2] = c->r[2] + 0x10u;
    if (COND_CC) { goto L_addb24; }
    goto L_addbb4;
L_addbb0:;
    c->r[1] = 0x0u;
L_addbb4:;
    c->v.s[16] = LD32(c->r[13] + 32u);
    c->v.s[30] = LD32(c->r[13] + 24u);
    c->r[0] = c->r[8];
    c->r[14] = 0xaddbc4u; f_aaf6d8(c);
    c->r[1] = 0x2714u;
    c->r[0] = c->r[8];
    c->r[3] = 0x2510u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd8fcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_addc78; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_addc50; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x4a2u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_addc50:;
    c->r[2] = 0x2510u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2718u;
    c->r[1] = 0x4a2u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_addc78:;
    c->v.s[0] = LD32(c->r[5] + 404u);
    c->v.s[2] = LD32(c->r[5] + 412u);
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0xaddc94u; f_adca10(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xdaedu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_addcc8; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_addcf4; }
L_addcc8:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_addcf4:;
    c->r[0] = 0x1be4u;
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_addde4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_addd6c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_addd6c:;
    c->r[0] = 0xf61234u;
    c->r[1] = 0xf61234u;
    c->r[3] = 0x4000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = 0xaddd84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaddd88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1be8u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_adddc0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adddd8;
L_adddc0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adddd8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_addde4:;
    c->r[0] = 0x1bf4u;
    c->r[6] = c->r[8];
    c->r[14] = 0x6000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x377b0000u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_addedc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adde60; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_adde60:;
    c->r[0] = 0xf61148u;
    c->r[1] = 0xf61148u;
    { uint32_t ea = 0xadde70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xadde74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[14];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_addeb8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_added0;
L_addeb8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_added0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_addedc:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[0] = 0x2724u;
    c->r[14] = c->r[8];
    c->r[2] = 0x44a0u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[14] = ea; c->r[1] = v; }
    c->r[0] = 0xd8ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_addf94; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_addf6c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_addf6c:;
    c->r[1] = 0x44a0u;
    c->r[2] = 0xd894u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80a10000u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_addf94:;
    { uint32_t ea = c->r[5] + 0x1aau; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = 0x4694u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[2] = 0xe892u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x7b7e0000u;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x893u;
    if (COND_NE) { c->r[2] = 0x3893u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x91bf0000u; }
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_ade064; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade03c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[5] = 0x892u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ade03c:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xe000u;
    c->r[1] = 0x4698u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7b7e0000u;
    c->r[0] = c->r[2] ^ c->r[0];
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ade064:;
    c->v.f[18] = c->v.f[26] / c->v.f[24];
    c->v.f[20] = c->v.f[20] / c->v.f[24];
    c->v.f[22] = c->v.f[28] / c->v.f[16];
    c->v.f[24] = c->v.f[30] / c->v.f[16];
    c->r[1] = 0xf5b484u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xade090u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ade0a4; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ade0bc; }
L_ade0a4:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_ade0bc:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5];
    c->r[14] = 0xade0e4u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[13] + 0x390u;
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 920u, c->v.s[0]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xade150u; f_a7fc58(c);
    c->r[7] = c->r[13] + 0x3d8u;
    c->r[10] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[2] = c->r[7];
    c->r[3] = c->r[10];
    c->r[14] = 0xade168u; f_aafc90(c);
    c->r[0] = 0xf63a24u;
    c->v.s[16] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = 0xade184u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0xade18cu; f_a841e8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5];
    c->r[14] = 0xade1b4u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.s[0] = c->r[1];
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[4] = c->v.f[24] * c->v.f[2];
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 920u, c->v.s[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xade21cu; f_a7fc58(c);
    c->r[0] = c->r[8];
    c->r[2] = c->r[7];
    c->r[3] = c->r[10];
    c->r[14] = 0xade22cu; f_aafc90(c);
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[8];
    c->r[1] = 0xfu;
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0xade244u; f_a841e8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5];
    c->r[14] = 0xade26cu; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.s[0] = c->r[1];
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[4] = c->v.f[24] * c->v.f[2];
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 920u, c->v.s[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xade2d8u; f_a7fc58(c);
    c->r[0] = c->r[8];
    c->r[2] = c->r[7];
    c->r[3] = c->r[10];
    c->r[14] = 0xade2e8u; f_aafc90(c);
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[8];
    c->r[1] = 0xfu;
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0xade300u; f_a841e8(c);
    { uint32_t ea = c->r[5] + 0x1a8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0xf000u;
    c->r[10] = 0xf899u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x12820000u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x12820000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ade97c; }
    { uint32_t ea = c->r[5] + 0x1acu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ade97c; }
    { uint32_t ea = c->r[5] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ade97c; }
    c->v.s[0] = LD32(c->r[5] + 404u);
    c->v.s[2] = LD32(c->r[5] + 412u);
    c->r[2] = c->r[13] + 0x30u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0xade350u; f_adca10(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0xdaedu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_ade384; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ade3b0; }
L_ade384:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ade3b0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ade4b8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade42c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_ade42c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ade46c; }
    c->r[1] = 0xf60b74u;
    c->r[2] = 0xf60b74u;
    { uint32_t ea = 0xade444u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xade448u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ade474;
L_ade46c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_ade474:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ade494; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ade4ac;
L_ade494:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ade4ac:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ade4b8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_EQ) { goto L_ade5ac; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade52c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_ade52c:;
    c->r[0] = 0xf60a74u;
    c->r[1] = 0xf60a74u;
    c->r[3] = 0x6000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x377b0000u;
    { uint32_t ea = 0xade544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xade548u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ade588; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ade5a0;
L_ade588:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ade5a0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ade5ac:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4500u;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ade650; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade628; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ade628:;
    c->r[1] = 0x4500u;
    c->r[2] = 0x78a0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb43f0000u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ade650:;
    c->r[2] = 0x46ccu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[2] = 0x44c8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { goto L_ade6f4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade6d0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x899u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ade6d0:;
    c->r[2] = 0x44c8u;
    c->r[3] = 0x899u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x46d0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_ade6f4:;
    { uint32_t ea = c->r[5] + 0x1aau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = 0x789bu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x89860000u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = c->r[10];
    if (COND_NE) { c->r[2] = c->r[3]; }
    c->r[3] = 0x89bu;
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_ade7ac; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade78c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x899u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ade78c:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[2] ^ c->r[9];
    c->r[2] = 0x46d0u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ade7ac:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x46f4u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[2] = 0xe89eu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3c0b0000u;
    { uint32_t ea = c->r[5] + 0x1a9u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x89fu;
    if (COND_NE) { c->r[2] = 0xc89fu; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x70a60000u; }
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_ade87c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ade858; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[5] = 0x89eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ade858:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] ^ 0xbe000u;
    c->r[1] = 0x46f8u;
    c->r[0] = c->r[0] ^ 0x3c000000u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ade87c:;
    c->r[1] = 0xf5ac84u;
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xade890u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ade8a4; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ade8bc; }
L_ade8a4:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_ade8bc:;
    { uint32_t ea = c->r[5] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xade8e4u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x390u;
    c->r[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 920u, c->v.s[0]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xade950u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x3d8u;
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0xade960u; f_aafc90(c);
    c->r[0] = 0xf63230u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xade978u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xade97cu; f_a841e8(c);
L_ade97c:;
    { uint32_t ea = c->r[5] + 0x1abu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_adf580; }
    { uint32_t ea = c->r[5] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf580; }
    c->v.s[0] = LD32(c->r[5] + 404u);
    c->v.s[2] = LD32(c->r[5] + 408u);
    c->r[2] = c->r[13] + 0x1c0u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0xade9b0u; f_adca10(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0xdaedu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_ade9e4; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_adea10; }
L_ade9e4:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adea10:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_adeb04; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adea8c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_adea8c:;
    c->r[0] = 0xf60514u;
    c->r[1] = 0xf60514u;
    c->r[3] = 0x6000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x377b0000u;
    { uint32_t ea = 0xadeaa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xadeaa8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_adeae0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adeaf8;
L_adeae0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_adeaf8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_adeb04:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_adebf8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adeb70; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_adeb70:;
    c->r[0] = 0xf60430u;
    c->r[1] = 0xf60430u;
    c->r[3] = 0x4000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = 0xadeb88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xadeb8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1be8u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_adebd4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adebec;
L_adebd4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_adebec:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_adebf8:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_adec98; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adec74; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_adec74:;
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adec98:;
    c->r[1] = 0xf5a868u;
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xadecacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_adecc0; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_adecd8; }
L_adecc0:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_adecd8:;
    { uint32_t ea = c->r[5] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[1] = c->r[5];
    c->r[14] = 0xaded00u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x390u;
    c->r[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 920u, c->v.s[0]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xaded68u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x3d8u;
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0xaded78u; f_aafc90(c);
    c->r[0] = 0xf62e14u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xaded90u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xaded94u; f_a841e8(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0xdaedu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_adedc8; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_adedf0; }
L_adedc8:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[6]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adedf0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_adef00; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adee6c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_adee6c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adeeac; }
    c->r[1] = 0xf60134u;
    c->r[2] = 0xf60134u;
    { uint32_t ea = 0xadee84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xadee88u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_adeeb4;
L_adeeac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_adeeb4:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_adeedc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adeef4;
L_adeedc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_adeef4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_adef00:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x44c0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_adefa4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adef7c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_adef7c:;
    c->r[1] = 0x44c0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1898u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x72970000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adefa4:;
    c->r[1] = 0xf5a55cu;
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xadefb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_adefcc; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_adefe4; }
L_adefcc:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_adefe4:;
    { uint32_t ea = c->r[12] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[1] = c->r[5];
    c->r[14] = 0xadf00cu; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x390u;
    c->r[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 920u, c->v.s[0]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xadf074u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x3d8u;
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0xadf084u; f_aafc90(c);
    c->r[0] = 0xf62b08u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xadf09cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xadf0a0u; f_a841e8(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0xdaedu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_adf0d4; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_adf0fc; }
L_adf0d4:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[6]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adf0fc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[14] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_adf208; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf17c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_adf17c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf1bc; }
    c->r[1] = 0xf5fe24u;
    c->r[2] = 0xf5fe24u;
    { uint32_t ea = 0xadf194u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xadf198u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_adf1c4;
L_adf1bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_adf1c4:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_adf1e4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adf1fc;
L_adf1e4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adf1fc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adf208:;
    { uint32_t ea = c->r[14] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_adf314; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf278; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_adf278:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf2b8; }
    c->r[1] = 0xf5fd28u;
    c->r[2] = 0xf5fd28u;
    { uint32_t ea = 0xadf290u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xadf294u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x377b0000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_adf2c0;
L_adf2b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_adf2c0:;
    c->r[2] = 0x1bf8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_adf2f0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adf308;
L_adf2f0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adf308:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adf314:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4508u;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_adf3b8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf390; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_adf390:;
    c->r[1] = 0x4508u;
    c->r[2] = 0x58a1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xdc0c0000u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_adf3b8:;
    { uint32_t ea = c->r[14] + 0x1aau; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = 0x46ccu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[2] = 0x989au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x56a00000u;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x89eu;
    if (COND_NE) { c->r[2] = 0x289cu; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x68970000u; }
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_adf480; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf460; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[5] = 0x899u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_adf460:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] ^ c->r[9];
    c->r[1] = 0x46d0u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adf480:;
    c->r[1] = 0xf5a080u;
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xadf494u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_adf4a8; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_adf4c0; }
L_adf4a8:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_adf4c0:;
    { uint32_t ea = c->r[14] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xadf4e8u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[1] = c->r[13] + 0x390u;
    c->r[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = floorf(c->v.f[4]);
    c->v.f[6] = floorf(c->v.f[6]);
    c->v.f[0] = ceilf(c->v.f[0]);
    c->v.f[2] = ceilf(c->v.f[2]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 912u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 916u, c->v.s[4]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 920u, c->v.s[0]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 924u, c->v.s[0]);
    c->r[14] = 0xadf554u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x3d8u;
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0xadf564u; f_aafc90(c);
    c->r[0] = 0xf6262cu;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xadf57cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xadf580u; f_a841e8(c);
L_adf580:;
    { uint32_t ea = c->r[5] + 0x1acu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0xdaedu;
    c->r[6] = c->r[5];
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf768; }
L_adf5a0:;
    { uint32_t ea = c->r[6] + 0x1abu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_adfae8; }
    { uint32_t ea = c->r[6] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adfae8; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_adf5e0; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_adf60c; }
L_adf5e0:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[14]); }
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adf60c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x44b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_adf6b4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf68c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_adf68c:;
    c->r[1] = 0x44b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2897u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x27df0000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adf6b4:;
    { uint32_t ea = c->r[6] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_adf99c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf724; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_adf724:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf948; }
    c->r[1] = 0xf5f87cu;
    c->r[2] = 0xf5f87cu;
    { uint32_t ea = 0xadf73cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xadf740u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_adf950;
L_adf768:;
    { uint32_t ea = c->r[6] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf5a0; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x1a8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[14]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_adf7a0; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_adf7cc; }
L_adf7a0:;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[14]); }
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xaedu;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_adf7cc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf890; }
    { uint32_t ea = c->r[6] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x6000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x377b0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_adfb58; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf850; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_adf850:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adfb04; }
    c->r[1] = 0xf5f750u;
    c->r[2] = 0xf5f750u;
    { uint32_t ea = 0xadf868u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xadf86cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_adfb0c;
L_adf890:;
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_adfeac; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adf904; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_adf904:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adfe60; }
    c->r[1] = 0xf5f69cu;
    c->r[2] = 0xf5f69cu;
    { uint32_t ea = 0xadf91cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xadf920u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_adfe68;
L_adf948:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
L_adf950:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_adf978; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adf990;
L_adf978:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adf990:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adf99c:;
    c->r[1] = 0xf59b64u;
    { uint32_t ea = c->r[8] + 0xe44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xadf9b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_adf9c4; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_adf9dc; }
L_adf9c4:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_adf9dc:;
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_adf9fc; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
L_adf9fc:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xadfa14u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x40400000u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[1];
    c->r[1] = 0x5556u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x55550000u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[2] = c->v.s[2];
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[1]) >> 32);
    c->v.f[4] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[0] / c->v.f[6];
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[4];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->v.s[0] = vcvt_s32_f64(ceil((double)c->v.f[0]));
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x3d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    c->v.f[0] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] / c->v.f[6];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->v.s[0] = vcvt_s32_f64(ceil((double)c->v.f[0]));
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->r[1] = c->r[13] + 0x3d8u;
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xadfad8u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x390u;
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0xadfae8u; f_aafc90(c);
L_adfae8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0xadfaf4u; f_a7b778(c);
L_adfaf4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_adfb04:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
L_adfb0c:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_adfb34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adfb4c;
L_adfb34:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adfb4c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adfb58:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_adfc48; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adfbcc; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_adfbcc:;
    c->r[0] = 0xf5f3dcu;
    c->r[1] = 0xf5f3dcu;
    { uint32_t ea = 0xadfbdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xadfbe0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[6];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_adfc24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adfc3c;
L_adfc24:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adfc3c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adfc48:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x44b0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_adfcf8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adfccc; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_adfccc:;
    c->r[1] = 0x44b0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xa896u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x19da0000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_adfcf8:;
    c->r[1] = 0xf59808u;
    { uint32_t ea = c->r[8] + 0xe44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xadfd0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_adfd20; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_adfd38; }
L_adfd20:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_adfd38:;
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_adf5a0; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_adf5a0; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xadfd78u; f_a814c0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x40400000u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[1];
    c->r[1] = 0x5556u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x55550000u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[2] = c->v.s[2];
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[1]) >> 32);
    c->v.f[4] = c->v.f[20] * c->v.f[2];
    c->v.f[0] = c->v.f[0] / c->v.f[6];
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[4];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->v.s[0] = vcvt_s32_f64(ceil((double)c->v.f[0]));
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x3d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    c->v.f[0] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] / c->v.f[6];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->v.s[0] = vcvt_s32_f64(ceil((double)c->v.f[0]));
    { uint32_t ea = c->r[13] + 0x398u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] + (c->r[0] << 1);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->r[1] = c->r[13] + 0x3d8u;
    { uint32_t ea = c->r[13] + 0x39cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xadfe3cu; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x390u;
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0xadfe4cu; f_aafc90(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_ae024c;
L_adfe60:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
L_adfe68:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_adfe88; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adfea0;
L_adfe88:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adfea0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adfeac:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_adffac; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_adff20; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x33eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_adff20:;
    c->r[0] = 0xf5f080u;
    c->r[1] = 0xf5f080u;
    c->r[3] = 0x6000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x377b0000u;
    { uint32_t ea = 0xadff38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xadff3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_adff88; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_adffa0;
L_adff88:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adffa0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_adffac:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4500u;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae0050; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae0028; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae0028:;
    c->r[1] = 0x4500u;
    c->r[2] = 0x78a0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb43f0000u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae0050:;
    { uint32_t ea = c->r[6] + 0x1aau; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = 0x46ccu;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x789bu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x89860000u;
    if (COND_NE) { c->r[10] = c->r[1]; }
    c->r[1] = 0x89bu;
    c->r[1] = c->r[10] & c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_ae0108; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae00e8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x899u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae00e8:;
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] ^ c->r[9];
    c->r[2] = 0x46d0u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae0108:;
    c->r[3] = 0x44f0u;
    c->r[2] = 0x46f4u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae01ac; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae0188; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x89eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae0188:;
    c->r[2] = 0x44f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x46f8u;
    c->r[1] = 0x89eu;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae01ac:;
    c->r[1] = 0xf59354u;
    { uint32_t ea = c->r[8] + 0xe44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae01c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae01d4; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae01ec; }
L_ae01d4:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_ae01ec:;
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_ae020c; }
    { uint32_t ea = c->r[2] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_ae020c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xae0220u; f_a814c0(c);
    c->r[5] = c->r[13] + 0x3d8u;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xae0230u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x3d0u;
    c->r[0] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0xae0240u; f_aafc90(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_ae024c:;
    c->r[14] = 0xdaedu;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x316a0000u;
    goto L_adf5a0;
}
