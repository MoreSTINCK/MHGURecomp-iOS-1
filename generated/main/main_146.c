#include "cpu.h"
#include "neon_rt.h"
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80998(Cpu *c);
void f_a814c0(Cpu *c);
void f_a82674(Cpu *c);
void f_a85690(Cpu *c);
void f_a857a8(Cpu *c);
void f_a857b4(Cpu *c);
void f_a857c4(Cpu *c);
void f_a85824(Cpu *c);
void f_aaf6d8(Cpu *c);
void f_aafa6c(Cpu *c);
void f_aafc90(Cpu *c);
void f_aaffe0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_ab9094(Cpu *restrict c) {
    FN_ENTER(0xab9094u);
L_ab9094:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[1] = 0xfff8u;
    c->r[7] = 0x38u;
    c->r[10] = c->r[2];
    c->r[2] = 0x6u;
    c->v.s[16] = c->v.s[0];
    c->r[3] = ~0x0u;
    c->r[8] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x80000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[1] = c->r[0] & c->r[1];
    { uint32_t r = c->r[1] ^ c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab9110; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[7], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ab9110:;
    c->r[1] = 0xdb7f68u;
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = 0xab9124u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xab912cu; f_a7ff38(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_ab9148; }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xfffffu;
    c->r[0] = c->r[0] | (c->r[1] << 20);
L_ab9148:;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + 0x164u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[9] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x8fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t r = c->r[0] & 0x6u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ab95c4; }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_abb9a4; }
    { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xab9194u; f_a7a7ac(c);
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ab9224; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x29bu;
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
    c->r[1] = 0x16dcu;
    c->r[2] = 0x16e0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ab9224:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xab9238u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ab928c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xab9288u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab928c:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16dcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_ab92fc; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ab92fc:;
    { uint32_t ea = c->r[7] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xab9320u; f_a814c0(c);
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    c->r[2] = c->r[5] - c->r[2];
    c->v.s[4] = c->r[2];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[2] = c->r[0];
    c->v.s[6] = c->r[1];
    c->r[3] = c->r[7] - c->r[3];
    c->v.s[0] = c->r[3];
    c->v.f[22] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = (float)(int32_t)c->v.s[2];
    c->v.f[24] = (float)(int32_t)c->v.s[4];
    c->v.f[20] = (float)(int32_t)c->v.s[6];
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ab93d4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x170u;
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
    { uint32_t ea = c->r[4] + 0xd88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ab93d4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xab93e8u; f_a6a438(c);
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
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ab943c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xab9438u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab943c:;
    c->r[1] = c->r[0] + c->r[6];
    c->r[7] = 0xdaedu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd84u; ST32(ea, c->r[0]); }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_ab9510; }
    c->v.f[2] = c->v.f[22] / c->v.f[18];
    c->v.f[4] = c->v.f[24] / c->v.f[20];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x3f000000u;
    c->v.s[8] = 0x3f800000u;
    c->v.f[10] = c->v.f[8] / c->v.f[20];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.s[6] = c->r[1];
    c->r[1] = 0x0u;
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[4] = c->v.f[4] / c->v.f[20];
    c->v.f[6] = c->v.f[6] / c->v.f[18];
    c->v.f[4] = c->v.f[4] / c->v.f[0];
    c->v.f[6] = c->v.f[6] / c->v.f[2];
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[6] = c->v.f[6] + c->v.f[8];
    ST32(c->r[13] + 128u, c->v.s[4]);
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 132u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    ST32(c->r[0], c->v.s[4]);
    c->v.f[4] = c->v.f[8] / c->v.f[24];
    c->v.f[6] = c->v.f[8] / c->v.f[22];
    c->v.f[8] = c->v.f[8] / c->v.f[18];
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 8u, c->v.s[0]);
    ST32(c->r[0] + 12u, c->v.s[2]);
    ST32(c->r[0] + 16u, c->v.s[20]);
    ST32(c->r[0] + 20u, c->v.s[18]);
    ST32(c->r[0] + 24u, c->v.s[10]);
    ST32(c->r[0] + 28u, c->v.s[8]);
    ST32(c->r[0] + 32u, c->v.s[4]);
    ST32(c->r[0] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ab9510:;
    c->r[1] = 0x1f64u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_EQ) { goto L_ab96b0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab9584; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x3acu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_ab9584:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ab9664; }
    c->r[1] = 0xf85a1cu;
    c->r[2] = 0xf85a1cu;
    { uint32_t ea = 0xab959cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xab95a0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    c->r[1] = 0x6000u;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x75920000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_ab966c;
L_ab95c4:;
    c->r[1] = c->r[4];
    c->r[2] = 0x42acu;
    c->r[3] = 0x40b8u;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ab9ac8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab964c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x817u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab964c:;
    c->r[2] = 0x40b8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x42c0u;
    c->r[2] = 0x817u;
    goto L_ab9ab8;
L_ab9664:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_ab966c:;
    c->r[2] = 0x1f68u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ab968c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ab96a4;
L_ab968c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ab96a4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ab96b0:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ab96d8; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ab96d8:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xf7fe10u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    { uint32_t ea = 0xab9704u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_ab9724; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ab9738; }
L_ab9724:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ab9738:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_ab975c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ab9784; }
L_ab975c:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ab9784:;
    c->r[1] = c->r[4];
    c->r[2] = 0x4074u;
    c->r[3] = 0x3e80u;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ab9830; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab980c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x7d0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab980c:;
    c->r[2] = 0x3e80u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4088u;
    c->r[2] = 0x7d0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ab9830:;
    c->r[3] = 0x40b0u;
    c->r[2] = 0x2724u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ab98d8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab98b0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab98b0:;
    c->r[2] = 0x40b0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4816u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4fb60000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ab98d8:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xab9908u; f_aafc90(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xab9914u; f_a7b778(c);
    c->r[1] = 0x1d9cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ab9a14; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab998c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[5] = 0x373u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_ab998c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ab99c8; }
    c->r[2] = 0xf85614u;
    c->r[3] = 0xf85614u;
    { uint32_t ea = 0xab99a4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xab99a8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x21000u;
    c->r[1] = c->r[0] | 0x1e400000u;
    goto L_ab99d0;
L_ab99c8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_ab99d0:;
    c->r[2] = 0x1da0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ab99f0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ab9a08;
L_ab99f0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ab9a08:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ab9a14:;
    c->r[0] = 0x42bcu;
    c->r[1] = c->r[4];
    c->r[3] = 0x40c0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xbd54u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ab9ac8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab9aa0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[6] = 0x817u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab9aa0:;
    c->r[2] = 0x40c0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x2818u;
    c->r[1] = 0x42c0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa770000u;
L_ab9ab8:;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ab9ac8:;
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x430cu;
    c->r[1] = c->r[4];
    c->r[3] = 0x823u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[5] = v; }
    c->r[2] = 0xf821u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf7750000u;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x4000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = 0x8822u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x1a5f0000u; }
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_ab9b9c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab9b70; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x821u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab9b70:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0xf000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf7750000u;
    c->r[1] = c->r[2] ^ c->r[1];
    c->r[2] = 0x4310u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_ab9b9c:;
    c->r[1] = 0x42fcu;
    c->r[2] = c->r[4];
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0x83fu;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[1] = 0xa81fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x50b10000u;
    if (COND_NE) { c->r[1] = 0x4820u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x9ca70000u; }
    c->r[3] = c->r[1] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_ab9c68; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab9c40; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x81fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ab9c40:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0xa000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x50b10000u;
    c->r[0] = c->r[1] ^ c->r[0];
    c->r[1] = 0x4300u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ab9c68:;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[5]); }
    c->r[3] = (c->r[0] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[22] = LD32(c->r[10] + 72u);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_ab9dc4; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ab9d4c; }
    c->r[0] = c->r[4];
    c->r[14] = 0xab9cc0u; f_a857b4(c);
    c->v.s[20] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[10] + 20u);
    c->v.s[28] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[10] + 16u);
    c->v.s[19] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[10] + 24u);
    c->v.f[2] = c->v.f[2] - c->v.f[20];
    c->v.f[6] = c->v.f[0] - c->v.f[28];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ab9d08; }
    c->r[14] = 0xab9d04u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_ab9d08:;
    c->v.s[0] = LD32(c->r[10] + 84u);
    c->v.s[24] = 0x0u;
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_ab9dd4; }
    c->v.s[2] = LD32(c->r[10] + 80u);
    vfp_cmp_f(c, c->v.f[18], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ab9dd0; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_ab9dd4; }
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = c->v.f[0] - c->v.f[18];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[24] = c->v.f[0] * c->v.f[16];
    goto L_ab9dd4;
L_ab9d4c:;
    c->v.s[2] = 0x3f000000u;
    c->v.s[0] = c->r[7];
    c->v.s[4] = c->r[6];
    c->v.f[6] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.s[0] = LD32(c->r[10] + 100u);
    c->v.f[2] = fabsf(c->v.f[2]);
    c->v.f[4] = fabsf(c->v.f[6]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ab9d80; }
    c->v.s[16] = 0x0u;
    goto L_ab9d90;
L_ab9d80:;
    c->v.s[6] = LD32(c->r[10] + 92u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[16] = 0x0u; }
L_ab9d90:;
    c->v.s[6] = LD32(c->r[10] + 88u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba244; }
    c->v.s[8] = LD32(c->r[10] + 92u);
    vfp_cmp_f(c, c->v.f[8], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_aba240; }
    c->v.f[6] = c->v.f[8] - c->v.f[6];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[16] = c->v.f[16] * c->v.f[4];
    goto L_aba244;
L_ab9dc4:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    goto L_aba35c;
L_ab9dd0:;
    c->v.s[24] = c->v.s[16];
L_ab9dd4:;
    c->r[0] = c->r[4];
    c->r[14] = 0xab9ddcu; f_a857c4(c);
    c->v.s[0] = LD32(c->r[10] + 16u);
    c->v.s[2] = LD32(c->r[10] + 20u);
    c->v.s[4] = LD32(c->r[10] + 24u);
    c->v.s[30] = LD32(c->r[0] + 4u);
    c->v.s[16] = LD32(c->r[0] + 8u);
    c->v.f[26] = c->v.f[20] - c->v.f[2];
    c->v.f[17] = c->v.f[28] - c->v.f[0];
    c->v.f[19] = c->v.f[19] - c->v.f[4];
    c->v.s[20] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ab9e24; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xab9e24u; f_15efddc(c);
L_ab9e24:;
    c->v.s[28] = 0x34000000u;
    c->v.s[21] = c->v.s[16] ^ 0x80000000u;
    c->v.s[25] = c->v.s[30] ^ 0x80000000u;
    c->v.s[23] = c->v.s[20] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ab9e54; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_ab9e54:;
    c->r[0] = c->r[4];
    c->r[14] = 0xab9e5cu; f_a857a8(c);
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_EQ ? c->v.s[25] : c->v.s[26];
    c->v.s[2] = COND_EQ ? c->v.s[23] : c->v.s[17];
    c->v.s[26] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    c->v.f[4] = c->v.f[0] * c->v.f[25];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[23]);
    c->v.s[0] = COND_EQ ? c->v.s[21] : c->v.s[19];
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.s[0] = 0x3f000000u;
    c->v.f[2] = fabsf(c->v.f[4]);
    if (COND_NE) { vfp_cmp_f(c, c->v.f[4], 0.0f); }
    c->v.f[2] = c->v.f[2] + c->v.f[26];
    if (COND_NE) { vfp_mrs_flags(c); }
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    if (COND_NE) { goto L_ab9f44; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[12] = c->r[10];
    c->v.s[14] = c->r[14];
    c->v.s[1] = c->r[12];
    c->v.s[6] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7] + 16u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.f[8] = c->v.f[30] + c->v.f[6];
    c->v.f[6] = c->v.f[20] + c->v.f[4];
    c->v.f[4] = c->v.f[16] + c->v.f[10];
    c->v.s[10] = c->r[3];
    c->v.f[12] = c->v.f[12] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + c->v.f[12];
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ab9f88; }
    c->v.s[12] = 0x3f800000u;
    c->v.f[10] = c->v.f[12] / c->v.f[10];
    goto L_ab9f8c;
L_ab9f44:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[12] = c->r[10];
    c->v.s[14] = c->r[14];
    c->v.s[1] = c->r[12];
    c->v.s[10] = LD32(c->r[7] + 20u);
    c->v.s[8] = LD32(c->r[7] + 16u);
    c->v.s[6] = LD32(c->r[7] + 24u);
    c->v.f[12] = c->v.f[12] * c->v.f[10];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[14] = c->r[3];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[12] = c->v.f[14] + c->v.f[12];
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_ab9ff4; }
    c->v.f[12] = c->v.f[26] / c->v.f[12];
    goto L_ab9ff8;
L_ab9f88:;
    c->v.s[10] = 0x0u;
L_ab9f8c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf800000u;
    c->v.s[12] = c->r[7];
    c->v.s[14] = c->r[2];
    c->v.s[1] = c->r[14];
    c->v.f[12] = c->v.f[12] * c->v.f[8];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.s[14] = c->r[12];
    c->v.s[3] = c->r[5];
    c->v.s[6] = c->r[1];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.s[14] = c->r[6];
    c->v.f[4] = c->v.f[6] + c->v.f[12];
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    c->v.f[6] = -(float)(c->v.f[4] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    goto L_aba07c;
L_ab9ff4:;
    c->v.s[12] = 0x0u;
L_ab9ff8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[3] = 0x0u;
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf800000u;
    vfp_mrs_flags(c);
    c->v.s[14] = c->r[7];
    c->v.s[1] = c->r[2];
    c->v.s[3] = c->r[14];
    c->v.f[14] = c->v.f[14] * c->v.f[10];
    c->v.f[10] = c->v.f[1] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[8]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.s[1] = c->r[12];
    c->v.s[5] = c->r[5];
    c->v.s[8] = c->r[1];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[6]);
    c->v.s[1] = c->r[6];
    c->v.f[6] = c->v.f[8] + c->v.f[14];
    c->v.f[8] = c->v.f[1] + c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[12];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    if (COND_PL) { goto L_aba078; }
    c->v.s[8] = c->v.s[8] ^ 0x80000000u;
    goto L_aba07c;
L_aba078:;
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
L_aba07c:;
    c->v.f[22] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[8] + c->v.f[26];
    c->v.f[4] = c->v.f[6] + c->v.f[26];
    c->v.s[6] = 0xbf800000u;
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    if (COND_PL) { c->r[1] = c->v.s[2]; }
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[3] = c->v.s[0]; }
    c->v.s[0] = 0x40000000u;
    c->v.s[4] = c->r[1];
    c->v.s[2] = c->r[3];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    if (COND_GT) { c->r[3] = 0x40000000u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = 0x40000000u; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_aba0e8; }
    c->v.f[22] = c->v.f[24] * c->v.f[22];
L_aba0e8:;
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[6] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aba1c4; }
    c->v.s[16] = LD32(c->r[10] + 128u);
    c->v.s[18] = LD32(c->r[10] + 132u);
    c->v.s[20] = LD32(c->r[10] + 136u);
    c->r[0] = c->r[4];
    c->r[14] = 0xaba110u; f_a85824(c);
    c->v.s[0] = LD32(c->r[10] + 16u);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[2] = LD32(c->r[10] + 20u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[4] = LD32(c->r[10] + 24u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->v.f[30] = c->v.f[8] - c->v.f[2];
    c->v.f[17] = c->v.f[6] - c->v.f[0];
    c->v.f[19] = c->v.f[10] - c->v.f[4];
    c->v.f[2] = c->v.f[30] * c->v.f[30];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_aba158; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xaba158u; f_15efddc(c);
L_aba158:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    c->r[1] = c->r[6] & 0xff0000u;
    c->r[0] = c->r[6] & 0xff00u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_aba17c; }
    c->v.f[0] = c->v.f[26] / c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_aba17c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = c->v.s[20];
    c->v.s[1] = c->v.s[16];
    c->v.s[2] = c->v.s[18];
    c->r[2] = 0x0u;
    ST32(c->r[13] + 144u, c->v.s[17]);
    ST32(c->r[13] + 148u, c->v.s[30]);
    ST32(c->r[13] + 152u, c->v.s[19]);
    c->r[3] = c->r[10] + 0x70u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x90u;
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[14] = 0xaba1b8u; f_aaffe0(c);
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_aba1c4:;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_aba1d4; }
    c->v.s[16] = c->v.s[24];
    goto L_aba35c;
L_aba1d4:;
    c->v.s[18] = LD32(c->r[10] + 144u);
    c->v.s[16] = LD32(c->r[10] + 148u);
    c->r[2] = c->r[10] + 0x10u;
    c->r[0] = c->r[13] + 0x90u;
    c->r[1] = c->r[4];
    c->r[14] = 0xaba1ecu; f_a85690(c);
    c->v.s[0] = LD32(c->r[13] + 156u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_aba208; }
    c->v.s[16] = 0x0u;
    goto L_aba354;
L_aba208:;
    c->r[3] = c->r[4] + 0xc4u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->r[0] = c->r[2] - c->r[0];
    c->r[1] = c->r[3] - c->r[1];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[2] = c->r[1];
    c->v.s[4] = c->r[0];
    vfp_mrs_flags(c);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    if (COND_PL) { goto L_aba284; }
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    goto L_aba29c;
L_aba240:;
    c->v.s[16] = 0x0u;
L_aba244:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    c->v.s[4] = LD32(c->r[10] + 96u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba35c; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_aba27c; }
    c->v.f[4] = c->v.f[0] - c->v.f[4];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    goto L_aba35c;
L_aba27c:;
    c->v.s[16] = 0x0u;
    goto L_aba35c;
L_aba284:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba298; }
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    goto L_aba29c;
L_aba298:;
    c->v.s[0] = 0x0u;
L_aba29c:;
    c->v.s[4] = LD32(c->r[13] + 148u);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_aba2b4; }
    c->v.s[2] = c->v.s[4] ^ 0x80000000u;
    goto L_aba2cc;
L_aba2b4:;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba2c8; }
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    goto L_aba2cc;
L_aba2c8:;
    c->v.s[2] = 0x0u;
L_aba2cc:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_aba2e8; }
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->v.s[4] = c->v.s[26];
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba34c; }
L_aba2e8:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba310; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_aba318; }
    c->v.f[0] = c->v.f[0] / c->v.f[18];
    c->v.s[4] = 0x3f800000u;
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    goto L_aba31c;
L_aba310:;
    c->v.s[4] = 0x3f800000u;
    goto L_aba31c;
L_aba318:;
    c->v.s[4] = 0x0u;
L_aba31c:;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_aba34c; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_aba348; }
    c->v.f[2] = c->v.f[2] / c->v.f[18];
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    goto L_aba34c;
L_aba348:;
    c->v.s[4] = 0x0u;
L_aba34c:;
    c->v.f[0] = c->v.f[26] - c->v.f[16];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[4]);
L_aba354:;
    c->v.f[22] = c->v.f[22] * c->v.f[16];
    c->v.f[16] = c->v.f[24] * c->v.f[16];
L_aba35c:;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[7] << 2);
    c->r[1] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[0] + 0x20cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0xaba3b4u; f_a80998(c);
    { uint32_t ea = c->r[10] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aba454; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xaba3e0u; f_a814c0(c);
    c->r[1] = 0xf7f120u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaba3f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_aba408; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aba420; }
L_aba408:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aba420:;
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0xdaedu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_aba45c; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_aba460;
L_aba454:;
    c->r[10] = c->r[4] + 0x1d8u;
    goto L_aba724;
L_aba45c:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_aba460:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aba484; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aba484:;
    c->r[1] = 0x1be4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe5fcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[7] << 2);
    { uint32_t ea = c->r[1] + 0x20cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_aba5ac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aba514; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[12] = c->r[7];
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[12];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_aba514:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aba554; }
    c->r[2] = 0xf84a8cu;
    c->r[3] = 0xf84a8cu;
    { uint32_t ea = 0xaba52cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaba530u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_aba55c;
L_aba554:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_aba55c:;
    c->r[2] = 0x1be8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_aba588; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_aba5a0;
L_aba588:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_aba5a0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_aba5ac:;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_aba5d4; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aba5fc; }
L_aba5d4:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aba5fc:;
    c->r[1] = 0x2724u;
    c->r[0] = c->r[4];
    c->r[3] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_aba6b4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aba690; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = c->r[7];
    c->r[7] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    c->r[7] = c->r[6];
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
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_aba690:;
    c->r[2] = 0x2520u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2728u;
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aba6b4:;
    c->r[6] = c->r[13] + 0x90u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xaba6c4u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x78u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0xaba6d4u; f_aafc90(c);
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aba6f8; }
    { uint32_t ea = c->r[3] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_aba6f8:;
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aba710; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_aba710:;
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaba724u; f_a814c0(c);
L_aba724:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0xc81au;
    c->r[3] = 0x7b0bu;
    c->r[14] = 0x281cu;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xddf80000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x85240000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x63e30000u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (c->r[7] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_CS) { c->r[0] = 0xfu; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] & 0xff00u;
    if (COND_EQ) { goto L_aba944; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_aba784; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aba7b4; }
L_aba784:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    c->r[1] = 0xb0bu;
    c->r[6] = (c->r[6] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aba7b4:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x42ecu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = 0xfffcu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x40e8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_aba870; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aba84c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x81du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_aba84c:;
    c->r[0] = 0x40e8u;
    c->r[1] = 0x81du;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42f0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aba870:;
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x42dcu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abab10; }
    c->r[1] = 0x40d8u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = 0x38u;
    c->r[5] = 0xfff8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1f0000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_ababbc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aba914; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x81bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_aba914:;
    c->r[0] = 0x40d8u;
    c->r[1] = 0x81bu;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_ababbc;
L_aba944:;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_aba95c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aba984; }
L_aba95c:;
    c->r[6] = c->r[6] & 0xffff00ffu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[3]); }
    c->r[1] = 0xb0bu;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aba984:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x42ecu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = 0xfffcu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x40f0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_abaa44; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abaa1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x81du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abaa1c:;
    c->r[0] = 0x40f0u;
    c->r[1] = 0x581eu;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x39310000u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42f0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abaa44:;
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x42dcu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abac44; }
    c->r[1] = 0x40d8u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = 0x38u;
    c->r[5] = 0xfff8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1f0000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_abacf0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abaae8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x81bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abaae8:;
    c->r[0] = 0x40d8u;
    c->r[1] = 0x81bu;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_abacf0;
L_abab10:;
    c->r[1] = 0x40e0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_ababa8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abab88; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x81bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abab88:;
    c->r[0] = 0x40e0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ababa8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = 0x38u;
    c->r[5] = 0xfff8u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1f0000u;
L_ababbc:;
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_ababfc; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_abaf20; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9] + 44u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[13] + 108u, c->v.s[0]);
    goto L_abad5c;
L_ababfc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[9] + 32u);
    c->v.s[2] = LD32(c->r[9] + 36u);
    c->v.s[4] = LD32(c->r[9] + 40u);
    c->v.s[6] = LD32(c->r[9] + 44u);
    c->v.s[8] = 0x3f800000u;
    c->v.s[10] = c->r[0];
    c->v.f[10] = (float)c->v.s[10];
    c->v.f[8] = c->v.f[8] / c->v.f[10];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    c->v.f[0] = c->v.f[8] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    ST32(c->r[13] + 104u, c->v.s[0]);
    ST32(c->r[13] + 108u, c->v.s[2]);
    goto L_abae70;
L_abac44:;
    c->r[1] = 0x40e0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_abacdc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abacbc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x81bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abacbc:;
    c->r[0] = 0x40e0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abacdc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = 0x38u;
    c->r[5] = 0xfff8u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x1f0000u;
L_abacf0:;
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_abae00; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_abaf20; }
    c->r[0] = 0xf86138u;
    c->v.s[6] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[9] + 36u);
    c->v.s[2] = LD32(c->r[9] + 40u);
    c->v.s[4] = LD32(c->r[9] + 32u);
    c->v.f[6] = c->v.f[6] - c->v.f[16];
    { uint32_t ea = 0xabad28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[10]);
    ST32(c->r[13] + 96u, c->v.s[4]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    ST32(c->r[13] + 104u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
L_abad5c:;
    c->r[3] = 0x40d0u;
    c->r[0] = 0x42ccu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_abaf20; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abade8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x819u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abade8:;
    c->r[0] = 0x40d0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x42d0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[12]); }
    goto L_abaf14;
L_abae00:;
    c->r[0] = 0xf8603cu;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[9] + 32u);
    c->v.s[2] = LD32(c->r[9] + 36u);
    c->v.s[4] = LD32(c->r[9] + 40u);
    c->v.s[6] = 0x3f800000u;
    c->v.f[1] = c->v.f[6] - c->v.f[16];
    { uint32_t ea = 0xabae24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[1];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[14] = LD32(c->r[0] + 8u);
    c->v.f[8] = (float)c->v.s[8];
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[6] / c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[14]);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
L_abae70:;
    c->r[3] = 0x40c8u;
    c->r[1] = 0x42ccu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { goto L_abaf20; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abaefc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x819u;
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
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abaefc:;
    c->r[1] = 0x40c8u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x42d0u;
    c->r[1] = 0x819u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
L_abaf14:;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_abaf20:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_abaf48; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abaf48:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[9] + 0x42u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_HI) { goto L_abb090; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xabaf84u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xabafb4u: goto L_abafb4; case 0xabafc4u: goto L_abafc4; case 0xabafd4u: goto L_abafd4; case 0xabafe4u: goto L_abafe4; case 0xabaff4u: goto L_abaff4; case 0xabb004u: goto L_abb004; case 0xabb014u: goto L_abb014; case 0xabb024u: goto L_abb024; case 0xabb034u: goto L_abb034; case 0xabb044u: goto L_abb044; case 0xabb054u: goto L_abb054; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_abafb4:;
    c->r[2] = 0xf7e550u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabafc4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abafc4:;
    c->r[2] = 0xf7e540u;
    { uint32_t ea = c->r[4] + 0xe44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabafd4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abafd4:;
    c->r[2] = 0xf7e530u;
    { uint32_t ea = c->r[4] + 0xe74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabafe4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abafe4:;
    c->r[2] = 0xf7e520u;
    { uint32_t ea = c->r[4] + 0xefcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabaff4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abaff4:;
    c->r[2] = 0xf7e510u;
    { uint32_t ea = c->r[4] + 0xe64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb004u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abb004:;
    c->r[2] = 0xf7e500u;
    { uint32_t ea = c->r[4] + 0xf24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb014u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abb014:;
    c->r[2] = 0xf7e4f0u;
    { uint32_t ea = c->r[4] + 0xf84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb024u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abb024:;
    c->r[2] = 0xf7e4e0u;
    { uint32_t ea = c->r[4] + 0xf7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb034u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abb034:;
    c->r[2] = 0xf7e4d0u;
    { uint32_t ea = c->r[4] + 0xe5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb044u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abb044:;
    c->r[2] = 0xf7e4c0u;
    { uint32_t ea = c->r[4] + 0xe7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb054u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_abb060;
L_abb054:;
    c->r[2] = 0xf7e4b0u;
    { uint32_t ea = c->r[4] + 0xf04u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xabb064u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
L_abb060:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_abb07c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_abb090; }
L_abb07c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_abb090:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x42u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] & c->r[5];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_abb0e4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = f_adds(c, c->r[6], 0x100000u);
    c->r[3] = 0x0u;
    c->r[3] = c->r[3] + 0x0u + c->cf;
    c->r[2] = c->r[2] ^ c->r[7];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_abb120; }
    c->r[2] = ~0x0u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[1] | 0x39u;
    c->r[1] = c->r[1] | 0x180000u;
    goto L_abb118;
L_abb0e4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[2] ^ c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abb120; }
    c->r[2] = 0x6u;
    c->r[3] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = f_adds(c, c->r[6], 0x1u);
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[0] = c->r[0] | c->r[2];
L_abb118:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_abb120:;
    c->r[3] = c->r[13] + 0x90u;
    c->v.s[18] = c->r[12];
    c->v.s[8] = c->r[5];
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->v.s[0] = c->r[0];
    c->v.s[4] = c->r[1];
    c->r[6] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[3] - c->r[1];
    c->v.s[2] = c->r[6];
    c->v.s[6] = c->r[7];
    c->v.f[24] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = (float)(int32_t)c->v.s[2];
    c->v.f[28] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = (float)(int32_t)c->v.s[6];
    c->v.s[16] = c->r[0];
    c->v.s[2] = c->r[14];
    c->v.f[26] = (float)(int32_t)c->v.s[8];
    c->r[0] = 0x0u;
    c->v.s[6] = c->v.s[24];
    c->v.f[30] = (float)(int32_t)c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[0] = c->v.s[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[2] = c->v.f[6] / c->v.f[26];
    c->v.f[0] = c->v.f[0] / c->v.f[30];
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.s[2] = c->r[2];
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[17] = (float)(int32_t)c->v.s[0];
    c->v.f[19] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abb21c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x1edu;
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
    c->r[1] = 0x116cu;
    c->r[2] = 0x1170u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abb21c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xabb230u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[10] & (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[7] = c->r[1] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_abb27c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xabb278u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abb27c:;
    c->r[1] = c->r[0] + c->r[7];
    c->v.s[20] = 0x3f000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x116cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_abb30c; }
    c->v.f[4] = c->v.f[28] + c->v.f[20];
    c->v.f[6] = c->v.f[24] + c->v.f[20];
    c->v.s[0] = 0xbf000000u;
    c->r[1] = 0x0u;
    c->v.f[2] = c->v.f[17] + c->v.f[0];
    c->v.f[0] = c->v.f[19] + c->v.f[0];
    c->v.f[6] = c->v.f[6] / c->v.f[26];
    c->v.f[4] = c->v.f[4] / c->v.f[30];
    c->v.f[2] = c->v.f[2] / c->v.f[30];
    c->v.f[0] = c->v.f[0] / c->v.f[26];
    ST32(c->r[13] + 64u, c->v.s[6]);
    ST32(c->r[13] + 68u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    ST32(c->r[0], c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 8u, c->v.s[0]);
    ST32(c->r[0] + 12u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    goto L_abb310;
L_abb30c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abb310:;
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_abb380; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2aeu;
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
    c->r[1] = 0x1774u;
    c->r[2] = 0x1778u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_abb380:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xab8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xabb394u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = c->r[10] & (c->r[6] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_abb3e0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xabb3dcu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_abb3e0:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1774u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_abb46c; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[10] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xabb418u; f_15efe30(c);
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 12u, c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
L_abb46c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xabb484u; f_aaf6d8(c);
    { uint32_t ea = c->r[9] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_abb554; }
    c->r[2] = 0x1be4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_abb66c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abb504; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_abb504:;
    c->r[2] = 0xf83aa4u;
    c->r[3] = 0xf83aa4u;
    { uint32_t ea = 0xabb514u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabb518u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x4000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_abb63c; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_abb64c;
L_abb554:;
    c->r[1] = 0x1be4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xe5fcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0x20cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_abb66c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abb5e0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_abb5e0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abb620; }
    c->r[2] = 0xf839c0u;
    c->r[3] = 0xf839c0u;
    { uint32_t ea = 0xabb5f8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabb5fcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_abb628;
L_abb620:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_abb628:;
    c->r[2] = 0x1be8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_abb648; }
L_abb63c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abb660;
L_abb648:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_abb64c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_abb660:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_abb66c:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1178u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc00u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc04u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1174u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abb750; }
    c->r[2] = 0x1c8cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_abb848; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abb710; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x351u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_abb710:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abb7fc; }
    c->r[2] = 0xf83890u;
    c->r[3] = 0xf83890u;
    { uint32_t ea = 0xabb728u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xabb72cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x931b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_abb804;
L_abb750:;
    c->r[1] = 0x1c8cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_abb8f8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_abb7c4; }
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
L_abb7c4:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1c90u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_abb8e4; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    goto L_abb8ec;
L_abb7fc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_abb804:;
    c->r[2] = 0x1c90u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_abb824; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_abb83c;
L_abb824:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_abb83c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_abb848:;
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_abb880; }
    c->r[0] = 0xf7dcacu;
    c->r[1] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x78u;
    { uint32_t ea = 0xabb868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x30u;
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); c->v.s[3] = LD32(ea + 12u); }
    c->r[0] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    goto L_abb998;
L_abb880:;
    c->v.s[0] = LD32(c->r[9] + 104u);
    c->v.s[4] = 0x3f800000u;
    c->r[3] = c->r[4] + 0xc8u;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->v.f[2] = c->v.f[4] / c->v.f[0];
    c->r[1] = c->r[2] - c->r[1];
    c->r[0] = c->r[3] - c->r[0];
    (void)f_subs(c, c->r[1], c->r[0]);
    c->v.f[0] = c->v.f[2] * c->v.f[20];
    if (COND_LE) { goto L_abb8c8; }
    c->v.s[6] = c->r[0];
    c->v.s[8] = c->r[1];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[8] = c->v.f[8] / c->v.f[6];
    c->v.s[6] = c->v.s[4];
    goto L_abb924;
L_abb8c8:;
    if (COND_GE) { goto L_abb91c; }
    c->v.s[6] = c->r[1];
    c->v.s[8] = c->r[0];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[6] = c->v.f[8] / c->v.f[6];
    goto L_abb920;
L_abb8e4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_abb8ec:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_abb8f8:;
    c->r[5] = c->r[13] + 0x90u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xabb908u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x78u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0xabb918u; f_aafc90(c);
    goto L_abb9a4;
L_abb91c:;
    c->v.s[6] = c->v.s[4];
L_abb920:;
    c->v.s[8] = c->v.s[4];
L_abb924:;
    c->v.f[10] = c->v.f[20] - c->v.f[16];
    c->v.f[12] = c->v.f[20] - c->v.f[18];
    c->v.s[4] = 0xbf800000u;
    c->r[0] = 0xf7dbc4u;
    c->v.f[3] = c->v.f[0] + c->v.f[20];
    c->r[1] = c->r[13] + 0x90u;
    c->r[3] = c->r[13] + 0x78u;
    c->v.f[14] = c->v.f[8] + c->v.f[4];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    { uint32_t ea = 0xabb950u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[10] * c->v.f[8];
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[10] = c->v.f[0] * c->v.f[14];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[6] = c->v.f[20] - c->v.f[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->v.f[12] = c->v.f[8] - c->v.f[10];
    c->v.f[14] = c->v.f[2] - c->v.f[4];
    c->v.f[8] = c->v.f[8] + c->v.f[10];
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    c->v.f[2] = c->v.f[3] + c->v.f[8];
    c->v.f[0] = c->v.f[6] + c->v.f[12];
    c->v.f[1] = c->v.f[6] + c->v.f[14];
    c->v.f[3] = c->v.f[3] + c->v.f[4];
L_abb998:;
    c->r[0] = c->r[4];
    c->r[2] = c->r[1];
    c->r[14] = 0xabb9a4u; f_aafa6c(c);
L_abb9a4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
