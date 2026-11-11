#include "cpu.h"
#include "neon_rt.h"
void f_283aad8(Cpu *c);
void f_283abec(Cpu *c);
void f_283ac04(Cpu *c);
void f_2842950(Cpu *c);
void f_2842968(Cpu *c);
void f_2842a4c(Cpu *c);
void f_2842a58(Cpu *c);
void f_2842a64(Cpu *c);
void f_24f0ec8(Cpu *restrict c) {
    FN_ENTER(0x24f0ec8u);
L_24f0ec8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x30u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x76b048u;
    c->r[10] = 0x8000u;
    c->r[12] = (c->r[3] << 1);
    c->r[4] = 0x0u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0x24f0ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u - c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[6] = c->r[6] & 0x3u;
    c->r[7] = c->r[7] + c->r[6];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = sdiv32(c->r[2], c->r[0]);
    c->r[8] = (c->r[0] << 2);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] << 1);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
L_24f0f48:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_24f0fc4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[0] = c->r[2];
    if (COND_LT) { goto L_24f0fa8; }
L_24f0f80:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[9] = c->r[9] + 0x4u; c->r[4] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[5] = c->r[4] + c->r[14];
    c->r[7] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[4] = (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); c->r[1] = c->r[1] + 0x4u; }
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    { uint32_t r = c->r[3] * c->r[4]; c->r[4] = r; }
    c->r[14] = c->r[4] + (uint32_t)((int32_t)c->r[7] >> 15);
    if (COND_NE) { goto L_24f0f80; }
L_24f0fa8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[14]); }
    c->r[4] = c->r[1];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_24f10e0;
L_24f0fc4:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f1054; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_24f10bc; }
L_24f0fe0:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[10];
    c->r[8] = 0x7fffu;
    c->r[7] = c->r[0] + c->r[14];
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[4] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[7] = c->r[7] + 0x800u;
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[7] >> 12);
    { uint32_t r = c->r[3] * c->r[4]; c->r[4] = r; }
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_GT) { c->r[5] = (uint32_t)((int32_t)c->r[7] >> 12); }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_GE) { c->r[5] = c->r[8]; }
    c->r[7] = c->r[7] + (uint32_t)(int32_t)(int16_t)(c->r[5]);
    (void)f_subs(c, c->r[7], 0x8000u);
    if (COND_GE) { goto L_24f1034; }
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_LE) { c->r[7] = c->r[10]; }
    c->r[8] = c->r[7];
L_24f1034:;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[8]); c->r[1] = c->r[1] + c->r[12]; }
    c->r[14] = c->r[4] + (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[9] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_24f0fe0; }
    goto L_24f10bc;
L_24f1054:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_24f10bc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u;
L_24f1064:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[9] = c->r[9] + 0x4u; c->r[0] = v; }
    c->r[3] = 0x7fffu;
    c->r[0] = c->r[0] + c->r[14];
    c->r[7] = c->r[0] + 0x800u;
    c->r[6] = (uint32_t)((int32_t)c->r[7] >> 12);
    (void)f_subs(c, c->r[6], c->r[10]);
    c->r[6] = c->r[10];
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[7] >> 12); }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_GE) { c->r[6] = c->r[3]; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[7] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + c->r[12];
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); }
    c->r[7] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    c->r[14] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 15);
    if (COND_NE) { goto L_24f1064; }
L_24f10bc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[14]); }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f11cc; }
L_24f10e0:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0x7fffu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f1178; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_24f11d8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = 0x0u;
    c->r[14] = c->r[9];
L_24f110c:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[10];
    c->r[0] = c->r[0] + 0x800u;
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 12);
    (void)f_subs(c, c->r[7], c->r[10]);
    c->r[7] = 0x7fffu;
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[0] >> 12); }
    c->r[0] = c->r[1] + c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_GE) { c->r[6] = c->r[7]; }
    c->r[4] = c->r[5] + (uint32_t)(int32_t)(int16_t)(c->r[6]);
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_GE) { goto L_24f1150; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_LE) { c->r[4] = c->r[10]; }
    c->r[7] = c->r[4];
L_24f1150:;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); }
    c->r[8] = c->r[8] + c->r[12];
    c->r[14] = f_subs(c, c->r[14], 0x1u);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + c->r[0];
    if (COND_NE) { goto L_24f110c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_24f11d8;
L_24f1178:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_24f11d8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[5] = c->r[9];
L_24f1190:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + c->r[8]; c->r[7] = v; }
    c->r[6] = c->r[7] + 0x800u;
    c->r[7] = (uint32_t)((int32_t)c->r[6] >> 12);
    (void)f_subs(c, c->r[7], c->r[10]);
    c->r[7] = c->r[10];
    if (COND_GT) { c->r[7] = (uint32_t)((int32_t)c->r[6] >> 12); }
    c->r[6] = c->r[1] + c->r[3];
    c->r[3] = c->r[3] + c->r[12];
    (void)f_subs(c, c->r[7], c->r[14]);
    if (COND_GE) { c->r[7] = c->r[14]; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[6]; ST16(ea, c->r[7]); }
    if (COND_NE) { goto L_24f1190; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_24f11d8;
L_24f11cc:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_24f11d8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_24f0f48; }
    c->r[0] = 0x76ad40u;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x24f11fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_24f120c(Cpu *restrict c) {
    FN_ENTER(0x24f120cu);
L_24f120c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x54u;
    c->r[9] = c->r[2];
    c->r[2] = 0x76ad08u;
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = 0x24f1234u + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x0u - c->r[5];
    c->r[4] = c->r[2] & 0x3u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[5] + c->r[4];
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = sh_lsl(c->r[12], c->r[3]);
    c->r[2] = c->r[8] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[2] = c->r[2] - c->r[3]; }
    if (COND_EQ) { c->r[12] = sh_lsl(c->r[12], c->r[3]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    c->r[2] = sh_lsl(c->r[2], c->r[3]);
    c->r[3] = c->r[2];
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_24f13fc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_24f13fc; }
    c->r[3] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[6] = (c->r[6] << 2);
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    c->r[2] = c->r[8];
    c->r[3] = c->r[10];
    c->r[5] = c->r[12];
    c->r[14] = 0x24f12e4u; f_2842a4c(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x3u;
    c->r[2] = c->r[6];
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = c->r[1] & (c->r[0] << 1);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[1] + c->r[0];
    c->r[1] = c->r[8];
    c->r[0] = c->r[7];
    c->r[14] = 0x24f130cu; f_283ac04(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_24f1728; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = (c->r[5] << 2);
    c->r[4] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x38u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
L_24f1344:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[14] = 0x24f1378u; f_2842a58(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->r[7] = c->r[7] + 0x4u;
    c->r[4] = c->r[4] + c->r[0];
    if (COND_NE) { goto L_24f1344; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[5];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_24f1728; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
L_24f13b0:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[4];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x24f13e8u; f_2842a58(c);
    c->r[4] = c->r[4] + c->r[7];
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->r[8] = c->r[8] + 0x4u;
    if (COND_NE) { goto L_24f13b0; }
    goto L_24f1728;
L_24f13fc:;
    (void)f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[3], 0x1u); }
    if (COND_EQ) { goto L_24f1528; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LE) { goto L_24f16b4; }
    c->r[3] = c->r[0] + 0x38u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[12] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
L_24f1448:;
    c->r[3] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[2] = r; }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[10] + (c->r[2] << 1);
    c->r[2] = c->r[8];
    c->r[14] = 0x24f1478u; f_2842a4c(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = 0x0u;
    c->r[10] = c->r[4];
L_24f1494:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[9];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x24f14ccu; f_2842a58(c);
    c->r[9] = c->r[9] + c->r[8];
    c->r[5] = c->r[5] + 0x4u;
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_24f1494; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_24f1448; }
    goto L_24f1728;
L_24f1528:;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    c->r[2] = c->r[8];
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[12]); }
    c->r[5] = c->r[0];
    c->r[14] = 0x24f1560u; f_2842a4c(c);
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[6] << 1);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[10] + (c->r[0] << 1);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = c->r[5];
    c->r[4] = c->r[2] + (c->r[7] << 2);
    c->r[2] = c->r[4];
    c->r[14] = 0x24f15b0u; f_2842a4c(c);
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_24f1648; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f15e8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_24f15e8:;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_24f1648; }
    c->r[0] = c->r[3] - c->r[2];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2] + c->r[7];
    c->r[1] = c->r[9] + (c->r[1] << 2);
    c->r[1] = c->r[1] + 0x4u;
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[2] = c->r[6] + c->r[2];
    c->r[2] = c->r[2] + 0x4u;
L_24f1610:;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    c->r[3] = c->r[7] + c->r[3];
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x8u;
    c->r[3] = c->r[7] + c->r[3];
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x8u;
    if (COND_NE) { goto L_24f1610; }
L_24f1648:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_24f1728; }
    c->r[4] = (c->r[5] << 2);
    c->r[7] = c->r[0] + 0x38u;
    c->r[5] = 0x0u;
    c->r[6] = c->r[9];
L_24f166c:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[5];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x24f169cu; f_2842a58(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + c->r[4];
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->r[8] = c->r[8] + 0x4u;
    if (COND_NE) { goto L_24f166c; }
    goto L_24f1728;
L_24f16b4:;
    c->r[3] = (c->r[6] << 1);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[6] << 1);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
L_24f16cc:;
    c->r[3] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    c->r[2] = c->r[8];
    c->r[3] = c->r[10];
    c->r[14] = 0x24f16ecu; f_2842a4c(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[10] + c->r[3];
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { goto L_24f16cc; }
L_24f1728:;
    c->r[0] = 0x76a804u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x24f1738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_24f1748(Cpu *restrict c) {
    FN_ENTER(0x24f1748u);
L_24f1748:;
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[11] + 0x8u;
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2717u;
    c->r[0] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_24f17e0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x24f1788u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x24f17b4u: goto L_24f17b4; case 0x24f1844u: goto L_24f1844; case 0x24f186cu: goto L_24f186c; case 0x24f18a0u: goto L_24f18a0; case 0x24f18d4u: goto L_24f18d4; case 0x24f18f4u: goto L_24f18f4; case 0x24f1910u: goto L_24f1910; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_24f17b4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    goto L_24f19e4;
L_24f17e0:;
    c->r[0] = 0xfbbu;
    c->r[0] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_24f1910; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x24f17fcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x24f181cu: goto L_24f181c; case 0x24f1910u: goto L_24f1910; case 0x24f1918u: goto L_24f1918; case 0x24f1998u: goto L_24f1998; case 0x24f19b8u: goto L_24f19b8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_24f181c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    goto L_24f19d4;
L_24f1844:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_24f19e4;
L_24f186c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_24f19e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_24f19e4;
L_24f18a0:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_24f19e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_24f19e4;
L_24f18d4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f19e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_24f19d4;
L_24f18f4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_24f19e4;
L_24f1910:;
    c->r[0] = ~0x4u;
    goto L_24f19e4;
L_24f1918:;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[8] = 0x2030u;
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[0] = c->r[8] + (c->r[1] << 2);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[0] + (c->r[5] << 4);
    c->r[1] = c->r[0] + 0x30u;
    c->r[0] = c->r[4] + 0x24u;
    c->r[14] = 0x24f193cu; f_283abec(c);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_24f1988; }
    c->r[0] = c->r[8] + (c->r[6] << 2);
    c->r[2] = 0x0u;
    c->r[3] = 0x9000u;
    { uint32_t r = c->r[7] * c->r[0]; c->r[1] = r; }
    c->r[0] = c->r[1] + (c->r[5] << 2);
    c->r[1] = c->r[1] + (c->r[5] << 3);
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[4] + c->r[1];
    c->r[0] = c->r[0] + 0x54u;
    c->r[1] = c->r[1] + 0x54u;
L_24f196c:;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); c->r[0] = c->r[0] + 0x2u; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], (c->r[7] << 1));
    if (COND_LT) { goto L_24f196c; }
L_24f1988:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_24f19e4;
L_24f1998:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_24f19d4;
L_24f19b8:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f19e0; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
L_24f19d4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    goto L_24f19e4;
L_24f19e0:;
    c->r[0] = ~0x0u;
L_24f19e4:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->r[13] = c->r[13] + 0x8u;
    return;
}
void f_24f19f4(Cpu *restrict c) {
    FN_ENTER(0x24f19f4u);
L_24f19f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0xbb80u;
    c->r[1] = 0x3c0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x24f1a10u; f_2842950(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = (c->r[1] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[0] = c->r[0] + 0x1000u;
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[0] + 0xc8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_24f1a34(Cpu *restrict c) {
    FN_ENTER(0x24f1a34u);
L_24f1a34:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[2];
    c->r[8] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = 0xbb80u;
    c->r[1] = 0x3c0u;
    c->r[2] = 0x0u;
    c->r[9] = c->r[3];
    c->r[14] = 0x24f1a5cu; f_2842950(c);
    c->r[6] = c->r[0];
    c->r[7] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_HI) { goto L_24f1b0c; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = ~0x6u;
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_24f1b0c; }
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = (c->r[0] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[0] = c->r[0] + 0x1000u;
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[1] = c->r[0] + 0xc8u;
    c->r[0] = c->r[4];
    c->r[14] = 0x24f1aa0u; f_283aad8(c);
    c->r[0] = 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[1] = 0xfbcu;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x24f1b00u; f_2842a64(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x24f1b08u; f_2842968(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_24f1b0c:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_24f1b14(Cpu *restrict c) {
    FN_ENTER(0x24f1b14u);
L_24f1b14:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_24f1b88; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_24f1b88; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24f1c70; }
    c->r[0] = (c->r[3] << 1);
L_24f1b68:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = c->r[6] + c->r[0]; c->r[1] = v; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[2] = (c->r[1] << 12) - c->r[7];
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    { uint32_t ea = c->r[8]; ST32(ea, c->r[2]); c->r[8] = c->r[8] + 0x4u; }
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 3);
    if (COND_NE) { goto L_24f1b68; }
    goto L_24f1c70;
L_24f1b88:;
    c->r[9] = sdiv32(c->r[4], c->r[5]);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_24f1ba8; }
    c->r[1] = (c->r[4] << 2);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[14] = 0x24f1ba4u; f_283abec(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
L_24f1ba8:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_24f1c3c; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f1bc8; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_24f1bc8:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_24f1c3c; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[1] = r; }
    c->r[12] = c->r[0] + 0x1u;
    { uint32_t r = c->r[5] * c->r[12]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] - c->r[0];
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[9] = (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[3] * c->r[12]; c->r[0] = r; }
    c->r[3] = (c->r[5] << 3);
    c->r[5] = c->r[8];
    c->r[14] = (c->r[0] << 1);
L_24f1c08:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[12] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + c->r[3];
    if (COND_NE) { goto L_24f1c08; }
L_24f1c3c:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[12] = c->r[3];
    if (COND_LT) { goto L_24f1c70; }
L_24f1c4c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[1] = (c->r[0] << 16);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 4) - c->r[7];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); c->r[8] = c->r[8] + 0x4u; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 3);
    if (COND_NE) { goto L_24f1c4c; }
L_24f1c70:;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[7]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
