#include "cpu.h"
#include "neon_rt.h"
void f_2617d2c(Cpu *c);
void f_261f29c(Cpu *c);
void f_261f47c(Cpu *c);
void f_261f860(Cpu *c);
void f_261fa78(Cpu *c);
void f_261fd3c(Cpu *c);
void f_262105c(Cpu *c);
void f_2622558(Cpu *c);
void f_262645c(Cpu *c);
void f_2629af8(Cpu *c);
void f_262a384(Cpu *c);
void f_283aa78(Cpu *c);
void f_283aad8(Cpu *c);
void f_283ab44(Cpu *c);
void f_283abec(Cpu *c);
void f_283ac04(Cpu *c);
void f_283ad18(Cpu *c);
void f_283afb8(Cpu *c);
void f_283b024(Cpu *c);
void f_283b8dc(Cpu *c);
void f_283baf8(Cpu *c);
void f_283ce3c(Cpu *c);
void f_283ce54(Cpu *c);
void f_2842494(Cpu *c);
void f_284ca60(Cpu *c);
void f_284ca78(Cpu *c);
void f_284cae4(Cpu *c);
void f_284cafc(Cpu *c);
void f_284cb2c(Cpu *c);
void f_284cb38(Cpu *c);
void f_284cb5c(Cpu *c);
void f_284cb68(Cpu *c);
void f_284cb74(Cpu *c);
void f_284cba4(Cpu *c);
void f_284cbb0(Cpu *c);
void f_284cbc8(Cpu *c);
void f_284cbe0(Cpu *c);
void f_284cbec(Cpu *c);
void f_284cc1c(Cpu *c);
void f_284cc58(Cpu *c);
void f_284ccb8(Cpu *c);
void f_284cd18(Cpu *c);
void f_284cd84(Cpu *c);
void f_284cd9c(Cpu *c);
void f_284cdf0(Cpu *c);
void f_284cdfc(Cpu *c);
void f_284ce20(Cpu *c);
void f_284ce44(Cpu *c);
void f_284ce5c(Cpu *c);
void f_284ce68(Cpu *c);
void f_284cec8(Cpu *c);
void f_284ced4(Cpu *c);
void f_284cf04(Cpu *c);
void f_284cf34(Cpu *c);
void f_284cf40(Cpu *c);
void f_284cf4c(Cpu *c);
void f_284cf64(Cpu *c);
void f_284cf70(Cpu *c);
void f_284cf7c(Cpu *c);
void f_284cfa0(Cpu *c);
void f_284cfac(Cpu *c);
void f_284cff4(Cpu *c);
void f_284d000(Cpu *c);
void f_284d018(Cpu *c);
void f_284d024(Cpu *c);
void f_284d03c(Cpu *c);
void f_284d048(Cpu *c);
void f_284d054(Cpu *c);
void f_284d060(Cpu *c);
void f_284d06c(Cpu *c);
void f_284d078(Cpu *c);
void f_284d084(Cpu *c);
void f_284d090(Cpu *c);
void f_284d09c(Cpu *c);
void f_284d0a8(Cpu *c);
void f_284d0b4(Cpu *c);
void f_284d0c0(Cpu *c);
void f_284d0cc(Cpu *c);
void f_284d0d8(Cpu *c);
void f_284d0e4(Cpu *c);
void f_284d0f0(Cpu *c);
void f_284d0fc(Cpu *c);
void f_284d108(Cpu *c);
void f_284d114(Cpu *c);
void f_284d120(Cpu *c);
void f_284d12c(Cpu *c);
void f_284d138(Cpu *c);
void f_284d144(Cpu *c);
void f_284d150(Cpu *c);
void f_284d15c(Cpu *c);
void f_284d168(Cpu *c);
void f_284d174(Cpu *c);
void f_284d180(Cpu *c);
void f_284d18c(Cpu *c);
void f_284d198(Cpu *c);
void f_284d1a4(Cpu *c);
void f_284d1b0(Cpu *c);
void f_261da74(Cpu *restrict c) {
    FN_ENTER(0x261da74u);
L_261da74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_261dab4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
L_261da98:;
    { uint32_t ea = c->r[14] - 0x4u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[2] = v; }
    c->r[3] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] ^ 0x1u;
    { uint32_t ea = c->r[12] + c->r[2]; ST8(ea, c->r[1]); }
    if (COND_GT) { goto L_261da98; }
L_261dab4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_261dac4(Cpu *restrict c) {
    FN_ENTER(0x261dac4u);
L_261dac4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14] - 0x8u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[12] - c->r[3];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_261db10; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[12] + 0x1u;
    c->r[2] = c->r[2] - c->r[3];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + c->r[3];
L_261daf8:;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); c->r[3] = c->r[3] + 0x1u; }
    if (COND_GT) { goto L_261daf8; }
L_261db10:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_261db18(Cpu *restrict c) {
    FN_ENTER(0x261db18u);
L_261db18:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] - 0x4u;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[3] - 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] - c->r[3];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { return; }
    c->r[1] = c->r[2] + 0x1u;
    c->r[0] = c->r[12] + c->r[3];
    c->r[1] = c->r[1] - c->r[3];
L_261db54:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[2] & 0xfeu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); c->r[0] = c->r[0] + 0x1u; }
    if (COND_GT) { goto L_261db54; }
    return;
}
void f_261db70(Cpu *restrict c) {
    FN_ENTER(0x261db70u);
L_261db70:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_261dbb4; }
    c->r[3] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_261db98:;
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_261dbbc; }
    c->r[3] = c->r[3] - 0x1u;
    c->r[1] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_GT) { goto L_261db98; }
L_261dbb4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x261dbbcu; f_2617d2c(c);
L_261dbbc:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261dbb4; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_261dc20; }
    c->r[6] = c->r[0] + c->r[1];
    c->r[1] = 0x63e7f8u;
    { uint32_t ea = 0x261dbfcu + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
L_261dbf8:;
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x261dc14u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CC) { goto L_261dbf8; }
L_261dc20:;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261dc2c(Cpu *restrict c) {
    FN_ENTER(0x261dc2cu);
L_261dc2c:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[12] + 0x6cu; ST32(ea, c->r[0]); }
    return;
}
void f_261dc54(Cpu *restrict c) {
    FN_ENTER(0x261dc54u);
L_261dc54:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[0] = c->r[0] - c->r[3];
    c->r[2] = c->r[4] + 0xcu;
    c->r[14] = 0x261dcacu; f_261f47c(c);
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[2];
    { uint32_t ea = c->r[12] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = c->r[4] + 0x14u;
    c->r[14] = 0x261dce0u; f_261f47c(c);
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261dcf8; }
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    goto L_261dd20;
L_261dcf8:;
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[1];
    { uint32_t ea = c->r[4] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = 0x0u - c->r[2];
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[2]); }
L_261dd20:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[3] = 0x2000u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 14);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = (c->r[0] >> 14);
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = ~0xfc000000u;
    c->r[1] = c->r[1] + (c->r[0] << 16);
    (void)f_adds(c, c->r[1], 0xf8000002u);
    if (COND_LS) { c->r[0] = (c->r[0] << 16); }
    if (COND_LS) { c->r[1] = 0x8000u; }
    if (COND_LS) { c->r[0] = c->r[1] & (c->r[0] >> 16); }
    if (COND_LS) { c->r[0] = c->r[0] | 0x4000u; }
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x1618u;
    c->r[0] = 0x261dd74u + c->r[0];
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x17ecu;
    c->r[0] = 0x261dd80u + c->r[0];
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1820u;
    c->r[0] = 0x261dd8cu + c->r[0];
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261dd9c(Cpu *restrict c) {
    FN_ENTER(0x261dd9cu);
L_261dd9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[3] & 0x1u;
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_261ddd0; }
    { uint32_t ea = c->r[12] + 0xf5u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x1u;
    c->r[14] = c->r[14] | (c->r[2] << 8);
L_261ddd0:;
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_261dde4; }
    { uint32_t ea = c->r[12] + 0xf5u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x2u;
    c->r[14] = c->r[14] | (c->r[2] << 8);
L_261dde4:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_261ddf0(Cpu *restrict c) {
    FN_ENTER(0x261ddf0u);
L_261ddf0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2] + 0x104u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_261de50; }
    c->r[5] = c->r[4] + 0x1u;
    c->r[6] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[3] = c->r[12];
L_261de2c:;
    { uint32_t ea = c->r[3] + 0x7u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_261de4c; }
    c->r[5] = c->r[5] - 0x1u;
    c->r[3] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_GT) { goto L_261de2c; }
    goto L_261de50;
L_261de4c:;
    c->r[1] = c->r[3];
L_261de50:;
    { uint32_t ea = c->r[2] + 0x101u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_EQ) { c->r[1] = c->r[4] + 0x1u; }
    c->r[3] = c->r[2] + (c->r[6] << 2);
    { uint32_t ea = c->r[3] + 0x10cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[2] + 0x104u; ST32(ea, c->r[1]); } }
    if (COND_EQ) { c->r[1] = c->r[12] + (c->r[4] << 3); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2du);
    { uint32_t ea = c->r[0] + 0x3au; ST8(ea, c->r[2]); }
    if (COND_EQ) { goto L_261df18; }
    c->r[12] = 0x16eu;
L_261dea4:;
    c->r[4] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[4], 0x41u);
    if (COND_EQ) { goto L_261dec8; }
    (void)f_subs(c, c->r[4], 0x40u);
    if (COND_NE) { goto L_261ded8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x1u;
    goto L_261df00;
L_261dec8:;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 1);
    c->r[2] = c->r[2] + 0x1u;
    goto L_261df00;
L_261ded8:;
    c->r[2] = c->r[2] & 0xf8u;
    (void)f_subs(c, c->r[2], 0xb8u);
    if (COND_EQ) { goto L_261def8; }
    (void)f_subs(c, c->r[2], 0xb0u);
    if (COND_NE) { c->r[2] = c->r[3]; }
    if (COND_EQ) { c->r[2] = c->r[3] + c->r[4]; }
    if (COND_EQ) { c->r[2] = c->r[2] - 0xafu; }
    goto L_261df00;
L_261def8:;
    c->r[2] = c->r[3] + (c->r[4] << 1);
    c->r[2] = c->r[2] - c->r[12];
L_261df00:;
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2du);
    { uint32_t ea = c->r[0] + 0x3au; ST8(ea, c->r[2]); }
    if (COND_NE) { goto L_261dea4; }
L_261df18:;
    c->r[0] = 0xffffu;
    c->r[0] = c->r[0] - c->r[14];
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_261df2c(Cpu *restrict c) {
    FN_ENTER(0x261df2cu);
L_261df2c:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] - 8u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[2]); }
    return;
}
void f_261df48(Cpu *restrict c) {
    FN_ENTER(0x261df48u);
L_261df48:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] - 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_261df80; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_261df90; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { return; }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x6cu; ST32(ea, c->r[0]); }
    return;
L_261df80:;
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x20000u;
    { uint32_t ea = c->r[1] + 0x6cu; ST32(ea, c->r[0]); }
    return;
L_261df90:;
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10000u;
    { uint32_t ea = c->r[1] + 0x6cu; ST32(ea, c->r[0]); }
    return;
}
void f_261dfa0(Cpu *restrict c) {
    FN_ENTER(0x261dfa0u);
L_261dfa0:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] - 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3] - 0x8u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x100u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261dff8; }
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_EQ) { goto L_261dfe8; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { return; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0xfffffffeu) | ((c->r[0] << 0) & 0x1u);
    goto L_261dff4;
L_261dfe8:;
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] >> 1);
    c->r[2] = (c->r[2] & 0xfffffffdu) | ((c->r[0] << 1) & 0x2u);
L_261dff4:;
    { uint32_t ea = c->r[1] + 0x70u; ST32(ea, c->r[2]); }
L_261dff8:;
    return;
}
void f_261dffc(Cpu *restrict c) {
    FN_ENTER(0x261dffcu);
L_261dffc:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] - (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_261e018(Cpu *restrict c) {
    FN_ENTER(0x261e018u);
L_261e018:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] - (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_261e034(Cpu *restrict c) {
    FN_ENTER(0x261e034u);
L_261e034:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] - (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_261e050(Cpu *restrict c) {
    FN_ENTER(0x261e050u);
L_261e050:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0xcu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_261e060(Cpu *restrict c) {
    FN_ENTER(0x261e060u);
L_261e060:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0xcu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_261e070(Cpu *restrict c) {
    FN_ENTER(0x261e070u);
L_261e070:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_261f860(c);
}
void f_261e080(Cpu *restrict c) {
    FN_ENTER(0x261e080u);
L_261e080:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    __attribute__((musttail)) return f_261f860(c);
}
void f_261e098(Cpu *restrict c) {
    FN_ENTER(0x261e098u);
L_261e098:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    __attribute__((musttail)) return f_261f860(c);
}
void f_261e0b0(Cpu *restrict c) {
    FN_ENTER(0x261e0b0u);
L_261e0b0:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_261fa78(c);
}
void f_261e0c0(Cpu *restrict c) {
    FN_ENTER(0x261e0c0u);
L_261e0c0:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    __attribute__((musttail)) return f_261fa78(c);
}
void f_261e0d8(Cpu *restrict c) {
    FN_ENTER(0x261e0d8u);
L_261e0d8:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    __attribute__((musttail)) return f_261fa78(c);
}
void f_261e0f0(Cpu *restrict c) {
    FN_ENTER(0x261e0f0u);
L_261e0f0:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_261fd3c(c);
}
void f_261e100(Cpu *restrict c) {
    FN_ENTER(0x261e100u);
L_261e100:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    __attribute__((musttail)) return f_261fd3c(c);
}
void f_261e118(Cpu *restrict c) {
    FN_ENTER(0x261e118u);
L_261e118:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    __attribute__((musttail)) return f_261fd3c(c);
}
void f_261e130(Cpu *restrict c) {
    FN_ENTER(0x261e130u);
L_261e130:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x3au; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    (void)f_subs(c, c->r[3], 0xb0u);
    if (COND_CC) { goto L_261e1b0; }
    c->r[14] = c->r[3] - 0xb0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[6] = c->r[14];
    if (COND_NE) { goto L_261e174; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[6] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[6]); c->r[2] = c->r[2] + 0x4u; }
    c->r[6] = c->r[3] - 0xb1u;
L_261e174:;
    c->r[12] = c->r[3] - 0xafu;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_261e1a8; }
    c->r[3] = c->r[6] + 0x2u;
L_261e184:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[3] = c->r[3] - 0x2u;
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] + 0x8u;
    if (COND_GT) { goto L_261e184; }
L_261e1a8:;
    c->r[4] = c->r[4] + (c->r[12] << 2);
    c->r[5] = c->r[5] + c->r[12];
L_261e1b0:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); ST32(ea + 4, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261e1b8(Cpu *restrict c) {
    FN_ENTER(0x261e1b8u);
L_261e1b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x3au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    (void)f_subs(c, c->r[1], 0xb8u);
    if (COND_CC) { goto L_261e210; }
    c->r[14] = c->r[1] - 0xb7u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[12] = (c->r[14] << 1);
    c->r[1] = c->r[14];
L_261e1e4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[4] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[6] = c->r[7] | (c->r[6] << 8);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); c->r[5] = c->r[5] + 0x4u; }
    if (COND_GT) { goto L_261e1e4; }
    c->r[2] = c->r[2] + (c->r[14] << 2);
    c->r[3] = c->r[3] + c->r[12];
L_261e210:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261e218(Cpu *restrict c) {
    FN_ENTER(0x261e218u);
L_261e218:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[2] - 0x4u;
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { (void)f_subs(c, c->r[8], c->r[1]); }
    if (COND_NE) { goto L_261e298; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] - c->r[1];
    { uint32_t ea = c->r[3] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] - c->r[0];
    c->r[0] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x261e290u; rt_dispatch(c);
    c->r[7] = c->r[0];
    goto L_261e398;
L_261e298:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[1] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261e304; }
    { uint32_t ea = c->r[10] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261e324; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_261e348; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = 0xeu;
    c->r[14] = 0x261e2fcu; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x16u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    goto L_261e35c;
L_261e304:;
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->r[2] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x261e314u; rt_dispatch(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0xc4u;
    goto L_261e33c;
L_261e324:;
    c->r[0] = c->r[10];
    c->r[2] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x261e330u; rt_dispatch(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0xa8u;
L_261e33c:;
    c->r[14] = 0x261e340u; f_284cff4(c);
    c->r[7] = c->r[0];
    goto L_261e398;
L_261e348:;
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = 0xeu;
    c->r[14] = 0x261e358u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
L_261e35c:;
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = 0xeu;
    c->r[14] = 0x261e36cu; f_284cbb0(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0xa8u;
    c->r[2] = c->r[7];
    c->r[14] = 0x261e380u; f_284cff4(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0xc4u;
    c->r[2] = c->r[6];
    c->r[14] = 0x261e394u; f_284cff4(c);
    c->r[7] = c->r[0] + c->r[7];
L_261e398:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261e3ec; }
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x261e3b4u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_261e3d4; }
    c->r[2] = f_subs(c, c->r[7], c->r[0]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[7] = c->r[0]; }
    goto L_261e3ec;
L_261e3d4:;
    c->r[2] = 0x0u - c->r[7];
    c->r[3] = f_subs(c, c->r[2], c->r[0]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    c->r[7] = 0x0u - c->r[2];
L_261e3ec:;
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261e434; }
    c->r[1] = c->r[0] & 0x3u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[1] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[1] = 0x0u - c->r[1]; }
    c->r[1] = c->r[1] + c->r[7];
    c->r[2] = c->r[1] ^ c->r[7];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { c->r[6] = 0x0u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[1]; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261e460; }
    goto L_261e484;
L_261e434:;
    c->r[0] = c->r[0] & 0x3u;
    c->r[1] = c->r[7];
    c->r[3] = c->r[10];
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x261e450u; f_284d000(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_261e484; }
L_261e460:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_261e478; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { c->r[6] = c->r[0]; }
    goto L_261e484;
L_261e478:;
    c->r[0] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GT) { c->r[6] = c->r[0]; }
L_261e484:;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] - c->r[2];
    c->r[0] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x261e4bcu; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[6] - c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[2] = c->r[9];
    c->pc = c->r[7]; c->r[14] = 0x261e4d4u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[9]); } }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261e4f0(Cpu *restrict c) {
    FN_ENTER(0x261e4f0u);
L_261e4f0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x261e520u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261e588; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x261e550u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_261e570; }
    c->r[2] = f_subs(c, c->r[6], c->r[0]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[6] = c->r[0]; }
    goto L_261e588;
L_261e570:;
    c->r[2] = 0x0u - c->r[6];
    c->r[3] = f_subs(c, c->r[2], c->r[0]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    c->r[6] = 0x0u - c->r[2];
L_261e588:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_261e5a4; }
    c->r[1] = c->r[4] + 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    goto L_261e650;
L_261e5a4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[14] = 0x261e5ecu; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[14] = 0x261e610u; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_261e650:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[0] - c->r[2];
    c->r[1] = c->r[1] - c->r[5];
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x261e68cu; rt_dispatch(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] ^ c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x92u; uint32_t v = LD8(ea); c->r[0] = v; }
    if (COND_LT) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[6]; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261e6f4; }
    c->r[0] = c->r[2] & 0x3u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[0] ^ c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[7] = 0x0u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[0]; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261e730; }
    goto L_261e758;
L_261e6f4:;
    c->r[2] = c->r[2] & 0x3u;
    { uint32_t ea = c->r[10] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = f_subs(c, c->r[1], c->r[8]);
    { uint32_t ea = c->r[10] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + (c->r[2] << 2);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    c->r[3] = c->r[4];
    if (COND_GT) { c->r[1] = c->r[8]; }
    c->r[14] = 0x261e720u; f_284d000(c);
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = c->r[0];
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_261e758; }
L_261e730:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { goto L_261e74c; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { c->r[7] = c->r[0]; }
    goto L_261e758;
L_261e74c:;
    c->r[0] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GT) { c->r[7] = c->r[0]; }
L_261e758:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[0];
    c->r[1] = c->r[1] - c->r[6];
    c->r[0] = c->r[4];
    c->pc = c->r[12]; c->r[14] = 0x261e794u; rt_dispatch(c);
    c->r[3] = c->r[7] - c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[9];
    c->pc = c->r[7]; c->r[14] = 0x261e7acu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); } }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261e7d0(Cpu *restrict c) {
    FN_ENTER(0x261e7d0u);
L_261e7d0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_261e7e8; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[2] = c->r[1] + 0x10u;
    c->r[2] = c->r[2] & 0xffffffe0u;
    goto L_261e7f8;
L_261e7e8:;
    c->r[2] = 0x10u - c->r[0];
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] & 0xffffffe0u;
    c->r[2] = 0x0u - c->r[1];
L_261e7f8:;
    c->r[1] = c->r[2] ^ c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[2];
    if (COND_LT) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1];
    return;
}
void f_261e818(Cpu *restrict c) {
    FN_ENTER(0x261e818u);
L_261e818:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_261e82c; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[2] = c->r[2] & 0xffffffc0u;
    goto L_261e838;
L_261e82c:;
    c->r[1] = c->r[1] - c->r[0];
    c->r[1] = c->r[1] & 0xffffffc0u;
    c->r[2] = 0x0u - c->r[1];
L_261e838:;
    c->r[1] = c->r[2] ^ c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[2];
    if (COND_LT) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1];
    return;
}
void f_261e858(Cpu *restrict c) {
    FN_ENTER(0x261e858u);
L_261e858:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_261e870; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[2] = c->r[1] + 0x3fu;
    c->r[2] = c->r[2] & 0xffffffc0u;
    goto L_261e880;
L_261e870:;
    c->r[2] = 0x3fu - c->r[0];
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] & 0xffffffc0u;
    c->r[2] = 0x0u - c->r[1];
L_261e880:;
    c->r[1] = c->r[2] ^ c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[2];
    if (COND_LT) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1];
    return;
}
void f_261e8a0(Cpu *restrict c) {
    FN_ENTER(0x261e8a0u);
L_261e8a0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_261e8b8; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[2] = c->r[1] + 0x20u;
    c->r[2] = c->r[2] & 0xffffffc0u;
    goto L_261e8c8;
L_261e8b8:;
    c->r[2] = 0x20u - c->r[0];
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] & 0xffffffc0u;
    c->r[2] = 0x0u - c->r[1];
L_261e8c8:;
    c->r[1] = c->r[2] ^ c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[2];
    if (COND_LT) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1];
    return;
}
void f_261e8e8(Cpu *restrict c) {
    FN_ENTER(0x261e8e8u);
L_261e8e8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_261e900; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[1] = 0x20u;
    c->r[2] = (c->r[2] & 0xffffffc0u) | ((c->r[1] << 0) & 0x3fu);
    goto L_261e910;
L_261e900:;
    c->r[1] = c->r[1] - c->r[0];
    c->r[2] = 0x20u;
    c->r[1] = (c->r[1] & 0xffffffc0u) | ((c->r[2] << 0) & 0x3fu);
    c->r[2] = 0x0u - c->r[1];
L_261e910:;
    c->r[3] = c->r[2] ^ c->r[0];
    c->r[1] = ~0x1fu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { c->r[1] = 0x20u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1];
    return;
}
void f_261e938(Cpu *restrict c) {
    FN_ENTER(0x261e938u);
L_261e938:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[1] = 0x0u - c->r[1]; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[1] = c->r[2] ^ c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[2];
    if (COND_LT) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1];
    return;
}
void f_261e964(Cpu *restrict c) {
    FN_ENTER(0x261e964u);
L_261e964:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[3] + 0x86u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x88u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_LT) { goto L_261e9a4; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[1] = c->r[1] + c->r[14];
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = c->r[1] & c->r[12];
    c->r[1] = c->r[1] + c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_261e9c4; }
    goto L_261e9dc;
L_261e9a4:;
    c->r[1] = c->r[1] - c->r[0];
    c->r[1] = c->r[1] + c->r[14];
    c->r[1] = c->r[1] - c->r[2];
    c->r[1] = c->r[1] & c->r[12];
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = 0x0u - c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261e9dc; }
L_261e9c4:;
    c->r[3] = c->r[1] ^ c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_261e9dc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    c->r[1] = c->r[2];
L_261e9dc:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_261e9e4(Cpu *restrict c) {
    FN_ENTER(0x261e9e4u);
L_261e9e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5] + 0x86u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    if (COND_LT) { goto L_261ea38; }
    c->r[1] = c->r[1] + c->r[4];
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x1eu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x261ea1cu; f_284cba4(c);
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[2] = 0x1eu;
    c->r[14] = 0x261ea2cu; f_284cbb0(c);
    { uint32_t ea = c->r[5] + 0x86u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    goto L_261ea6c;
L_261ea38:;
    c->r[1] = c->r[1] - c->r[4];
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x1eu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x261ea50u; f_284cba4(c);
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[2] = 0x1eu;
    c->r[14] = 0x261ea60u; f_284cbb0(c);
    { uint32_t ea = c->r[5] + 0x86u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = 0x0u - c->r[0];
L_261ea6c:;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_261ea90; }
    c->r[2] = c->r[0] ^ c->r[4];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_261ea90; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
L_261ea90:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_261ea94(Cpu *restrict c) {
    FN_ENTER(0x261ea94u);
L_261ea94:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x1e0u;
    c->r[6] = c->r[3];
    c->r[7] = 0x0u;
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4000u;
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xeu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x12u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x16cu;
    c->r[0] = 0x261eb00u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x184u;
    c->r[0] = 0x261eb0cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x101u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_261eb94; }
L_261eb24:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[0] = c->r[0] + 0x58u;
    c->r[14] = 0x261eb38u; f_283b024(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_261eba0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    if (COND_CS) { goto L_261eb88; }
    c->r[0] = 0x63d890u;
    c->r[6] = c->r[13];
    { uint32_t ea = 0x261eb64u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_261eb60:;
    c->r[0] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x261eb7cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_CC) { goto L_261eb60; }
L_261eb88:;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    goto L_261eba0;
L_261eb94:;
    { uint32_t ea = c->r[6] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_261ebac; }
L_261eba0:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_261ebac:;
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261ebfc; }
    c->r[0] = 0xd4u;
    c->r[0] = 0x261ebc4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd8u;
    c->r[0] = 0x261ebd0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_261ebd0:;
    { uint32_t ea = c->r[6] + 0x100u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_261eb24; }
    { uint32_t ea = c->r[6] + 0x90u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261eb24; }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0xe0u;
    c->r[14] = 0x261ebf4u; f_284cff4(c);
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[0]); }
    goto L_261eb24;
L_261ebfc:;
    c->r[0] = 0xa8u;
    c->r[2] = 0x10u;
    c->r[0] = 0x261ec0cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd8u;
    c->r[0] = 0x261ec18u + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x261ec24u; f_284cbb0(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_LE) { goto L_261eba0; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x1u;
    c->r[2] = 0x10u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x10000u;
    c->r[14] = 0x261ec44u; f_284cbb0(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_LT) { goto L_261eba0; }
    goto L_261ebd0;
}
void f_261ec6c(Cpu *restrict c) {
    FN_ENTER(0x261ec6cu);
L_261ec6c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[12] + (c->r[2] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    return;
}
void f_261ecb4(Cpu *restrict c) {
    FN_ENTER(0x261ecb4u);
L_261ecb4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261ecd4u; f_261f29c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284cbb0(c);
}
void f_261ecf0(Cpu *restrict c) {
    FN_ENTER(0x261ecf0u);
L_261ecf0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261ed0cu; f_261f29c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284cbb0(c);
}
void f_261ed24(Cpu *restrict c) {
    FN_ENTER(0x261ed24u);
L_261ed24:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_261ed9c; }
    c->r[12] = (c->r[0] << 2);
    c->r[14] = 0x261ed40u + 0x4u;
    { uint32_t ea = c->r[12] + c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[14]; switch (c->pc) { case 0x261ed64u: goto L_261ed64; case 0x261eda4u: goto L_261eda4; case 0x261edb8u: goto L_261edb8; case 0x261edd0u: goto L_261edd0; case 0x261ede8u: goto L_261ede8; case 0x261ee00u: goto L_261ee00; case 0x261ee10u: goto L_261ee10; case 0x261ee24u: goto L_261ee24; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_261ed64:;
    { uint32_t ea = c->r[3] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[3] + 0x88u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x86u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    if (COND_LT) { goto L_261ee3c; }
    c->r[2] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] - c->r[3];
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[0] + c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261ee5c; }
    goto L_261eeec;
L_261ed9c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_261eda4:;
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_284d018(c);
L_261edb8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_261ee78; }
    c->r[0] = c->r[1] + c->r[2];
    c->r[2] = c->r[0] + 0x20u;
    c->r[2] = c->r[2] & 0xffffffc0u;
    goto L_261eed4;
L_261edd0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_261ee80; }
    c->r[2] = c->r[2] + c->r[1];
    c->r[0] = 0x20u;
    c->r[2] = (c->r[2] & 0xffffffc0u) | ((c->r[0] << 0) & 0x3fu);
    goto L_261ee90;
L_261ede8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_261eeac; }
    c->r[0] = c->r[1] + c->r[2];
    c->r[2] = c->r[0] + 0x10u;
    c->r[2] = c->r[2] & 0xffffffe0u;
    goto L_261eed4;
L_261ee00:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[2] = 0x0u - c->r[2]; }
    c->r[2] = c->r[2] + c->r[1];
    goto L_261eed4;
L_261ee10:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_261eebc; }
    c->r[2] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] & 0xffffffc0u;
    goto L_261eed4;
L_261ee24:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_261eec4; }
    c->r[0] = c->r[1] + c->r[2];
    c->r[2] = c->r[0] + 0x3fu;
    c->r[2] = c->r[2] & 0xffffffc0u;
    goto L_261eed4;
L_261ee3c:;
    c->r[2] = c->r[2] - c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] - c->r[3];
    c->r[0] = c->r[0] & c->r[12];
    c->r[0] = c->r[3] + c->r[0];
    c->r[0] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261eeec; }
L_261ee5c:;
    c->r[2] = c->r[0] ^ c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { goto L_261eeec; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_261ee78:;
    c->r[0] = 0x20u - c->r[1];
    goto L_261eec8;
L_261ee80:;
    c->r[0] = c->r[2] - c->r[1];
    c->r[2] = 0x20u;
    c->r[0] = (c->r[0] & 0xffffffc0u) | ((c->r[2] << 0) & 0x3fu);
    c->r[2] = 0x0u - c->r[0];
L_261ee90:;
    c->r[3] = c->r[2] ^ c->r[1];
    c->r[0] = ~0x1fu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { c->r[0] = 0x20u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { c->r[0] = c->r[2]; }
    goto L_261eee4;
L_261eeac:;
    c->r[0] = 0x10u - c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] & 0xffffffe0u;
    goto L_261eed0;
L_261eebc:;
    c->r[0] = c->r[2] - c->r[1];
    goto L_261eecc;
L_261eec4:;
    c->r[0] = 0x3fu - c->r[1];
L_261eec8:;
    c->r[0] = c->r[0] + c->r[2];
L_261eecc:;
    c->r[0] = c->r[0] & 0xffffffc0u;
L_261eed0:;
    c->r[2] = 0x0u - c->r[0];
L_261eed4:;
    c->r[0] = c->r[2] ^ c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[2];
    if (COND_LT) { c->r[0] = 0x0u; }
L_261eee4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[2]; }
L_261eeec:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_261eef0(Cpu *restrict c) {
    FN_ENTER(0x261eef0u);
L_261eef0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x34u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261ef20; }
    c->r[0] = c->r[7] + 0x14u;
    c->r[1] = c->r[7] + 0xcu;
    c->r[3] = c->r[7] + 0x4u;
    c->r[12] = 0x2u;
    goto L_261ef30;
L_261ef20:;
    c->r[0] = c->r[7] + 0x10u;
    c->r[1] = c->r[7] + 0x8u;
    c->r[12] = 0x1u;
    c->r[3] = c->r[7];
L_261ef30:;
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_261f294; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
L_261ef5c:;
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + (c->r[8] << 1);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
L_261ef74:;
    c->r[4] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_GT) { goto L_261ef90; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & c->r[12]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    c->r[6] = c->r[4];
    if (COND_EQ) { goto L_261ef74; }
L_261ef90:;
    c->r[10] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_GT) { goto L_261f284; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
L_261efa0:;
    c->r[2] = c->r[10];
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_261efc0; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[8] << 1);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[4] = v; }
    goto L_261efc4;
L_261efc0:;
    c->r[4] = c->r[2] + 0x1u;
L_261efc4:;
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = c->r[4];
L_261efcc:;
    { uint32_t ea = c->r[6] + c->r[10]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261f008; }
    (void)f_subs(c, c->r[10], c->r[3]);
    if (COND_NE) { goto L_261eff8; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[8] << 1);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_NE) { goto L_261efcc; }
    goto L_261f004;
L_261eff8:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_NE) { goto L_261efcc; }
L_261f004:;
    c->r[10] = c->r[2];
L_261f008:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_GE) { goto L_261f058; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[6] - c->r[5];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[3] - c->r[14];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] - c->r[6];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[14];
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    goto L_261f08c;
L_261f058:;
    c->r[5] = c->r[5] - c->r[6];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[14] - c->r[3];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[14] - c->r[2];
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
L_261f08c:;
    c->r[3] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[6] - c->r[5];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261f188; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x8000u);
    if (COND_LT) { (void)f_subs(c, c->r[2], 0x8000u); }
    if (COND_LT) { goto L_261f1c8; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_EQ) { goto L_261f270; }
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_261f0d0:;
    { uint32_t ea = c->r[14] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LE) { goto L_261f134; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_261f13c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261f104; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x261f100u; f_284cba4(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_261f104:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x261f120u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = 0x0u;
    goto L_261f140;
L_261f134:;
    c->r[0] = c->r[0] + c->r[6];
    goto L_261f144;
L_261f13c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_261f140:;
    c->r[0] = c->r[0] + c->r[1];
L_261f144:;
    { uint32_t ea = c->r[9] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_261f174; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[8] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_NE) { goto L_261f0d0; }
    goto L_261f270;
L_261f174:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_NE) { goto L_261f0d0; }
    goto L_261f270;
L_261f184:;
    c->r[4] = c->r[4] + 0x1u;
L_261f188:;
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_EQ) { goto L_261f270; }
L_261f190:;
    { uint32_t ea = c->r[9] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[9] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_261f184; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[8] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_NE) { goto L_261f190; }
    goto L_261f270;
L_261f1c8:;
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_EQ) { goto L_261f270; }
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_261f1d8:;
    { uint32_t ea = c->r[14] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LE) { goto L_261f224; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_261f22c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[3]; c->r[0] = r; }
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_GE) { c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]); }
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_261f230;
L_261f224:;
    c->r[0] = c->r[0] + c->r[6];
    goto L_261f234;
L_261f22c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_261f230:;
    c->r[0] = c->r[0] + c->r[1];
L_261f234:;
    { uint32_t ea = c->r[9] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[8] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_261f264; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[8] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_NE) { goto L_261f1d8; }
    goto L_261f270;
L_261f264:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_NE) { goto L_261f1d8; }
L_261f270:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_261efa0; }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD16(ea); c->r[2] = v; }
L_261f284:;
    c->r[8] = c->r[8] + 0x1u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_LT) { goto L_261ef5c; }
L_261f294:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261f29c(Cpu *restrict c) {
    FN_ENTER(0x261f29cu);
L_261f29c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = 0xffffu;
    c->r[6] = c->r[2];
    { uint32_t r = c->r[4] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_261f350; }
    { uint32_t r = c->r[5] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_261f358; }
    { uint32_t ea = c->r[6] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = c->r[0];
    c->r[14] = 0x261f2d4u; f_284cbb0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = c->r[0];
    c->r[14] = 0x261f2e8u; f_284cbb0(c);
    c->r[6] = c->r[0];
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[8] = 0x8000u;
    c->r[1] = c->r[7];
    c->r[2] = 0x10u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = (c->r[0] << 2);
    c->r[14] = 0x261f30cu; f_284cbb0(c);
    c->r[5] = c->r[0];
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[1] = c->r[6];
    c->r[2] = 0x10u;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = (c->r[0] << 2);
    c->r[14] = 0x261f32cu; f_284cbb0(c);
    c->r[1] = c->r[0] + c->r[5];
    c->r[0] = 0x10000u;
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_GE) { goto L_261f354; }
    c->r[0] = (c->r[1] << 14);
    c->r[14] = 0x261f344u; f_284d024(c);
    c->r[0] = c->r[0] + 0x2000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_261f350:;
    { uint32_t ea = c->r[6] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_261f354:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_261f358:;
    { uint32_t ea = c->r[6] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_261f360(Cpu *restrict c) {
    FN_ENTER(0x261f360u);
L_261f360:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[12] + (c->r[2] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    return;
}
void f_261f38c(Cpu *restrict c) {
    FN_ENTER(0x261f38cu);
L_261f38c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[8] = c->r[3];
    c->r[4] = c->r[2];
    c->r[9] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[6], 0x4000u);
    if (COND_NE) { goto L_261f40c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261f3f0; }
    c->r[0] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f3d0u; f_284cbb0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); }
L_261f3f0:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_261f478; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f408u; f_284cbb0(c);
    goto L_261f458;
L_261f40c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261f440; }
    c->r[0] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x261f420u; f_284cd9c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); }
L_261f440:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_261f478; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x261f458u; f_284cd9c(c);
L_261f458:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); }
L_261f478:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_261f47c(Cpu *restrict c) {
    FN_ENTER(0x261f47cu);
L_261f47c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[5] = c->r[1];
    c->r[8] = c->r[2];
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[5];
    if (COND_MI) { c->r[2] = 0x0u - c->r[5]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261f4d4; }
    c->r[3] = 0x0u;
    c->r[2] = 0x0u;
L_261f4bc:;
    c->r[7] = (c->r[1] >> 1);
    (void)f_subs(c, c->r[3], (c->r[1] >> 1));
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[7];
    if (COND_NE) { goto L_261f4bc; }
    goto L_261f4d8;
L_261f4d4:;
    c->r[2] = 0x0u;
L_261f4d8:;
    c->r[4] = 0x1eu - c->r[2];
    c->r[2] = 0x1eu;
    c->r[6] = sh_lsl(c->r[0], c->r[4]);
    c->r[0] = c->r[6];
    c->r[1] = c->r[6];
    c->r[14] = 0x261f4f0u; f_284cbb0(c);
    c->r[5] = sh_lsl(c->r[5], c->r[4]);
    c->r[7] = c->r[0];
    c->r[2] = 0x1eu;
    c->r[0] = c->r[5];
    c->r[1] = c->r[5];
    c->r[14] = 0x261f508u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x261f510u; f_284d024(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_261f558; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = 0x1eu;
    c->r[14] = 0x261f52cu; f_284cba4(c);
    c->r[0] = c->r[0] + 0x8000u;
    c->r[1] = c->r[7];
    c->r[2] = 0x1eu;
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x261f548u; f_284cba4(c);
    c->r[0] = c->r[0] + 0x8000u;
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_261f558:;
    c->r[0] = 0x4000u;
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_261f56c(Cpu *restrict c) {
    FN_ENTER(0x261f56cu);
L_261f56c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f590u; f_284cbb0(c);
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f5a4u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261f5ac(Cpu *restrict c) {
    FN_ENTER(0x261f5acu);
L_261f5ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f5d0u; f_284cbb0(c);
    { uint32_t ea = c->r[5] + 0x16u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f5e4u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261f5ec(Cpu *restrict c) {
    FN_ENTER(0x261f5ecu);
L_261f5ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[7] = c->r[0];
    c->r[10] = c->r[1];
    c->r[8] = c->r[2];
    c->r[9] = c->r[3];
    { uint32_t ea = c->r[7] + 0x3au; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[7] + 0x2cu;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { c->r[0] = c->r[7] + 0x30u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
    if (COND_EQ) { c->r[0] = c->r[0] + 0x4u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] - c->r[0];
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x261f658u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[4] = c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x4000u);
    if (COND_NE) { goto L_261f6a4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261f688; }
    c->r[0] = c->r[4];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f684u; f_284cbb0(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_261f688:;
    { uint32_t ea = c->r[7] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261f6d4; }
    c->r[0] = c->r[4];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f6a0u; f_284cbb0(c);
    goto L_261f6d0;
L_261f6a4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261f6b8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x261f6b4u; f_284cd9c(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_261f6b8:;
    { uint32_t ea = c->r[7] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261f6d4; }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x261f6d0u; f_284cd9c(c);
L_261f6d0:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_261f6d4:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261f6e4(Cpu *restrict c) {
    FN_ENTER(0x261f6e4u);
L_261f6e4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[0];
    c->r[9] = c->r[1];
    c->r[7] = c->r[2];
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[1] - (c->r[5] << 3);
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_261f74c; }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261f738u; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x10u;
    c->r[14] = 0x261f748u; f_284cbb0(c);
    c->r[4] = c->r[0];
L_261f74c:;
    c->r[2] = c->r[4] - c->r[7];
    (void)f_subs(c, c->r[2], 0xfu);
    if (COND_HI) { goto L_261f80c; }
    c->r[10] = (c->r[5] << 1);
    c->r[0] = ~0x1u;
    c->r[7] = (c->r[2] << 4);
    c->r[5] = 0x0u;
    c->r[1] = c->r[0] & (uint32_t)((int32_t)c->r[10] >> 1);
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_LT) { goto L_261f7dc; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[10] >> 1);
    c->r[5] = 0x0u;
L_261f780:;
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0xfffffff0u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_LT) { c->r[5] = c->r[1]; }
    c->r[1] = c->r[0] & (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_GT) { goto L_261f780; }
    goto L_261f7dc;
L_261f7a8:;
    c->r[1] = c->r[1] & 0xfu;
    c->r[2] = 0x8u;
    c->r[0] = c->r[0] + (c->r[5] << 2);
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { c->r[2] = 0x7u; }
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = (c->r[1] << 6);
    c->r[3] = sh_asr(c->r[1], c->r[8]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[9]; c->r[14] = 0x261f7d8u; rt_dispatch(c);
    c->r[5] = c->r[5] + 0x2u;
L_261f7dc:;
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_GE) { goto L_261f80c; }
L_261f7e4:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfffffff0u;
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_EQ) { goto L_261f7a8; }
    if (COND_GT) { goto L_261f80c; }
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_LT) { goto L_261f7e4; }
L_261f80c:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261f814(Cpu *restrict c) {
    FN_ENTER(0x261f814u);
L_261f814:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[6] = c->r[0];
    c->r[5] = c->r[2];
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261f838u; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x10u;
    c->r[14] = 0x261f848u; f_284cba4(c);
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_261f860(Cpu *restrict c) {
    FN_ENTER(0x261f860u);
L_261f860:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[9] = c->r[0];
    c->r[4] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[1] - (c->r[5] << 2);
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[1] - (c->r[10] << 2);
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_261f8d8; }
    { uint32_t ea = c->r[9] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261f8c4u; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x261f8d4u; f_284cbb0(c);
    c->r[7] = c->r[0];
L_261f8d8:;
    c->r[0] = c->r[7] - c->r[4];
    c->r[2] = 0x0u;
    c->r[1] = (c->r[0] << 4);
L_261f8e4:;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_GE) { goto L_261fa70; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7];
    c->r[3] = c->r[3] & 0xfffffff0u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_261f910; }
    c->r[2] = c->r[2] + 0x1u;
    if (COND_LE) { goto L_261f8e4; }
    goto L_261fa70;
L_261f910:;
    c->r[1] = c->r[7] & 0xfu;
    c->r[2] = 0x8u;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { c->r[2] = 0x7u; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_261fa70; }
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[10] + c->r[5];
    c->r[1] = (c->r[1] << 6);
    c->r[8] = sh_asr(c->r[1], c->r[8]);
    goto L_261f944;
L_261f940:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
L_261f944:;
    c->r[0] = c->r[0] + (c->r[7] << 2);
    c->r[5] = ~0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
L_261f950:;
    c->r[1] = c->r[2] + c->r[5];
    c->r[5] = c->r[5] + 0x2u;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_261f950; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261f9e4; }
    c->r[0] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f97cu; f_284cbb0(c);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_261f998; }
    c->r[1] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    goto L_261f99c;
L_261f998:;
    c->r[1] = 0x0u;
L_261f99c:;
    c->r[3] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    goto L_261f9d8;
L_261f9a8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[2] + c->r[3]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
L_261f9d8:;
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_LE) { goto L_261f9a8; }
L_261f9e4:;
    { uint32_t ea = c->r[9] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261fa64; }
    c->r[0] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x261f9fcu; f_284cbb0(c);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_261fa18; }
    c->r[1] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    goto L_261fa1c;
L_261fa18:;
    c->r[1] = 0x0u;
L_261fa1c:;
    c->r[3] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    goto L_261fa58;
L_261fa28:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | 0x2u;
    { uint32_t ea = c->r[2] + c->r[3]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
L_261fa58:;
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_LE) { goto L_261fa28; }
L_261fa64:;
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_GT) { goto L_261f940; }
L_261fa70:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261fa78(Cpu *restrict c) {
    FN_ENTER(0x261fa78u);
L_261fa78:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[4] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[1] - (c->r[9] << 2);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261fd34; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_261fb00; }
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261faecu; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x10u;
    c->r[14] = 0x261fafcu; f_284cbb0(c);
    c->r[10] = c->r[0];
L_261fb00:;
    c->r[0] = c->r[10] - c->r[8];
    c->r[1] = 0x0u;
    c->r[0] = (c->r[0] << 4);
L_261fb0c:;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_GE) { goto L_261fd34; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[8];
    c->r[2] = c->r[2] & 0xfffffff0u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_261fb38; }
    c->r[1] = c->r[1] + 0x1u;
    if (COND_LE) { goto L_261fb0c; }
    goto L_261fd34;
L_261fb38:;
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
L_261fb40:;
    c->r[2] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { goto L_261fb40; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    (void)f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_261fb84; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 16);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_261fb84:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x261fba0u; rt_dispatch(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[7];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GE) { goto L_261fc14; }
    c->r[10] = c->r[6];
L_261fbb8:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261fc14; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x261fbecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_261fc14; }
    c->r[0] = c->r[10] + 0x1u;
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { goto L_261fbb8; }
    goto L_261fc14;
L_261fc0c:;
    c->r[6] = c->r[6] - 0x1u;
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
L_261fc14:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LE) { goto L_261fc58; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7] - 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261fc58; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x261fc50u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_261fc0c; }
L_261fc58:;
    c->r[0] = c->r[8] & 0xfu;
    c->r[1] = 0x8u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { c->r[1] = 0x7u; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 6);
    c->r[8] = sh_asr(c->r[0], c->r[1]);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261fcd8; }
    c->r[0] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x261fc90u; f_284cbb0(c);
    c->r[12] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_GT) { goto L_261fcd8; }
    c->r[3] = c->r[6];
L_261fca4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[7]); }
    c->r[1] = c->r[3] + 0x1u;
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[12]);
    c->r[3] = c->r[2];
    if (COND_LE) { goto L_261fca4; }
L_261fcd8:;
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261fd34; }
    c->r[0] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x261fcf0u; f_284cbb0(c);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { goto L_261fd34; }
L_261fd00:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x2u;
    { uint32_t ea = c->r[3] + c->r[2]; ST8(ea, c->r[7]); }
    c->r[2] = c->r[6] + 0x1u;
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[6] = c->r[2];
    if (COND_LE) { goto L_261fd00; }
L_261fd34:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261fd3c(Cpu *restrict c) {
    FN_ENTER(0x261fd3cu);
L_261fd3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    c->r[10] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] - (c->r[6] << 2);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261ff10; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_261fdc0; }
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261fdacu; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x261fdbcu; f_284cbb0(c);
    c->r[7] = c->r[0];
L_261fdc0:;
    c->r[0] = c->r[7] - c->r[10];
    c->r[1] = 0x0u;
    c->r[0] = (c->r[0] << 4);
L_261fdcc:;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GE) { goto L_261ff10; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffffff0u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_261fdf8; }
    c->r[1] = c->r[1] + 0x1u;
    if (COND_LE) { goto L_261fdcc; }
    goto L_261ff10;
L_261fdf8:;
    c->r[0] = c->r[2] & 0xfu;
    c->r[1] = 0x8u;
    c->r[2] = 0xeu;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { c->r[1] = 0x7u; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 6);
    c->r[6] = sh_asr(c->r[0], c->r[8]);
    c->r[0] = c->r[6];
    c->r[14] = 0x261fe24u; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = 0xeu;
    c->r[14] = 0x261fe38u; f_284cbb0(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x261fe58u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_261ff10; }
L_261fe74:;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261ff04; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x261fea4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_261ff04; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261fed8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[8];
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + c->r[6]; ST8(ea, c->r[1]); }
L_261fed8:;
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261ff04; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[10];
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + c->r[6]; ST8(ea, c->r[1]); }
L_261ff04:;
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GT) { goto L_261fe74; }
L_261ff10:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_261ff18(Cpu *restrict c) {
    FN_ENTER(0x261ff18u);
L_261ff18:;
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_EQ) { goto L_261ff54; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261ff64; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { return; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = sh_asr(c->r[0], c->r[1]);
    return;
L_261ff54:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2];
    c->r[2] = 0x10u;
    __attribute__((musttail)) return f_284cbb0(c);
L_261ff64:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t r = c->r[3] * c->r[2]; c->r[1] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_LT) { goto L_261ff88; }
    c->r[1] = c->r[3] + c->r[1];
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    return;
L_261ff88:;
    c->r[1] = c->r[3] - c->r[1];
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    c->r[0] = 0x0u - c->r[0];
    return;
}
void f_261ff98(Cpu *restrict c) {
    FN_ENTER(0x261ff98u);
L_261ff98:;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x32u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_261ffe8; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = __builtin_bswap32(c->r[0]);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = __builtin_bswap32(c->r[1]);
    c->r[1] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    return;
L_261ffe8:;
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[2] << 1);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = (c->r[1] >> 8);
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = (c->r[2] << 1);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8);
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = (c->r[1] << 1);
    c->r[1] = c->r[0] - (c->r[2] << 1);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    return;
}
void f_2620020(Cpu *restrict c) {
    FN_ENTER(0x2620020u);
L_2620020:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[2];
    c->r[6] = 0x19cu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x174u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2620100; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_2620108; }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[6] = 0x138u;
    { uint32_t ea = c->r[4] + c->r[6]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST16(ea, c->r[3]); }
    c->r[3] = 0x16eu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[2] = 0x188u;
    { uint32_t ea = c->r[1] + 0x22u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_26200b8; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[1] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
L_26200b8:;
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[1] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[14] = 0x26200e8u; f_284ced4(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1a5u; ST8(ea, c->r[0]); }
L_2620100:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2620108:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2620114(Cpu *restrict c) {
    FN_ENTER(0x2620114u);
L_2620114:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_262013c; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[2] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
L_262013c:;
    c->r[2] = (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x180u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x184u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[2] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    return;
}
void f_2620164(Cpu *restrict c) {
    FN_ENTER(0x2620164u);
L_2620164:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    c->r[12] = 0x3u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = (c->r[14] << 2);
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[12] | (c->r[14] << 2);
    c->r[14] = 0xfffcu;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] + c->r[0];
    c->r[4] = c->r[14] + 0x40000u;
    c->r[2] = c->r[2] & c->r[4];
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[2] + 0x4u;
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + c->r[2];
    c->r[2] = c->r[0] + 0x3u;
    { uint32_t ea = c->r[3] + 0xau; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[7] = c->r[2] | 0x3u;
    c->r[2] = c->r[2] & 0xfffffffcu;
    { uint32_t ea = c->r[1] + 0x80u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CC) { c->r[0] = c->r[6]; }
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[6] = 0x803u;
    c->r[3] = c->r[0] + 0x8u;
    if (COND_CC) { c->r[5] = c->r[4]; }
    c->r[2] = c->r[3] + c->r[7];
    c->r[7] = c->r[12] + (c->r[5] << 1);
    c->r[2] = c->r[2] & 0xfffffffcu;
    c->r[7] = c->r[7] & c->r[14];
    { uint32_t ea = c->r[1] + 0x84u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[1] + 0x88u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + c->r[7];
    c->r[7] = 0x903u;
    { uint32_t ea = c->r[1] + 0x8cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0x90u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0x94u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0x98u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0x9cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0xa0u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x603u;
    c->r[0] = c->r[0] + 0xbu;
    c->r[0] = c->r[0] & 0xfffffffcu;
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[2] & 0xfffffffcu;
    c->r[7] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[1] + 0xc4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[7] & 0xfffffffcu;
    c->r[12] = c->r[7] + (c->r[3] << 5);
    { uint32_t ea = c->r[1] + 0xc8u; ST32(ea, c->r[7]); }
    c->r[6] = c->r[12] + c->r[6];
    { uint32_t ea = c->r[1] + 0xccu; ST32(ea, c->r[12]); }
    c->r[6] = c->r[6] & 0xfffffffcu;
    c->r[5] = c->r[6] + 0x83u;
    { uint32_t ea = c->r[1] + 0xd0u; ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] & 0xfffffffcu;
    c->r[4] = c->r[5] + 0x83u;
    { uint32_t ea = c->r[1] + 0xd4u; ST32(ea, c->r[5]); }
    c->r[4] = c->r[4] & 0xfffffffcu;
    c->r[3] = c->r[4] + 0x83u;
    { uint32_t ea = c->r[1] + 0xd8u; ST32(ea, c->r[4]); }
    c->r[3] = c->r[3] & 0xfffffffcu;
    c->r[0] = c->r[3] + 0x83u;
    { uint32_t ea = c->r[1] + 0xdcu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26202ec(Cpu *restrict c) {
    FN_ENTER(0x26202ecu);
L_26202ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[3] = c->r[0];
    c->r[0] = 0x174u;
    c->r[8] = c->r[2];
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[9] = ea; c->r[0] = v; }
    c->r[2] = c->r[0] & 0x3u;
    c->r[0] = 0x19cu;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_NE) { goto L_26208d0; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26208cc; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[10] + 0x148u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x170u; ST32(ea, c->r[2]); }
    c->r[2] = 0x48u;
    { uint32_t ea = c->r[1] + 0x1eu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[14] = 0x262038cu; f_284cd9c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[10] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = c->r[4];
    c->r[14] = 0x26203a0u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x148u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26203b4u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[10] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26203c8u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x160u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[7];
    c->r[2] = 0x48u;
    { uint32_t ea = c->r[10] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26203dcu; f_284cd9c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[10] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = c->r[4];
    c->r[14] = 0x26203f0u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2620404u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[10] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2620418u; f_284cbb0(c);
    { uint32_t ea = c->r[10] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[10] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[10] + 0x264u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x16eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2620480; }
    c->r[2] = c->r[2] + 0x8000u;
    c->r[0] = c->r[0] + 0x8000u;
    c->r[2] = c->r[2] & 0xffff0000u;
    c->r[0] = c->r[0] & 0xffff0000u;
L_2620480:;
    c->r[12] = c->r[10];
    c->r[14] = c->r[10];
    c->r[1] = 0x138u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[12] + 0x24cu; ST32(ea, c->r[0]); c->r[12] = ea; }
    { uint32_t ea = c->r[14] + 0x268u; ST32(ea, c->r[2]); c->r[14] = ea; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[7] = c->r[0] | (c->r[3] << 16);
    c->r[4] = (c->r[3] << 16);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26204dc; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26204e0; }
    c->r[1] = 0x0u;
    c->r[6] = 0x1u;
L_26204c4:;
    c->r[5] = (c->r[7] >> 1);
    { uint32_t sc = ((c->r[7] >> 0) & 1); uint32_t r = c->r[6] & (c->r[7] >> 1); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[7] = c->r[5];
    if (COND_EQ) { goto L_26204c4; }
    goto L_26204e0;
L_26204dc:;
    c->r[1] = 0x20u;
L_26204e0:;
    c->r[7] = f_subs(c, c->r[1], 0x1u);
    c->r[6] = 0x0u;
    if (COND_LE) { c->r[7] = c->r[6]; }
    c->r[1] = sh_asr(c->r[4], c->r[7]);
    c->r[0] = sh_asr(c->r[0], c->r[7]);
    (void)f_subs(c, c->r[0], 0x2000000u);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 6);
    if (COND_LT) { c->r[1] = sh_asr(c->r[4], c->r[7]); }
    if (COND_LT) { c->r[0] = (c->r[0] << 6); }
    c->r[4] = c->r[10] + 0x250u;
    (void)f_subs(c, c->r[0], 0x8000u);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[12]); }
    if (COND_GE) { goto L_2620574; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2620598; }
    c->r[7] = c->r[1] - 0x1u;
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_NE) { goto L_2620598; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_2620568; }
    c->r[7] = ~0x0u;
    c->r[6] = 0x1u;
L_2620548:;
    c->r[5] = (c->r[1] >> 1);
    { uint32_t sc = ((c->r[1] >> 0) & 1); uint32_t r = c->r[6] & (c->r[1] >> 1); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[5];
    if (COND_EQ) { goto L_2620548; }
    (void)f_adds(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_26208d8; }
    c->r[7] = c->r[7] + 0x1u;
L_2620568:;
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[10] + 0x25cu; ST32(ea, c->r[7]); }
    goto L_262059c;
L_2620574:;
    c->r[2] = 0x10u;
    c->r[5] = c->r[14];
    c->r[14] = 0x2620580u; f_284cba4(c);
    { uint32_t ea = c->r[10] + 0x258u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x268u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = 0x2u;
    goto L_262059c;
L_2620598:;
    c->r[5] = c->r[14];
L_262059c:;
    c->r[1] = c->r[2] | (c->r[3] << 16);
    c->r[3] = (c->r[3] << 16);
    { uint32_t ea = c->r[10] + 0x260u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26205dc; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26205e0; }
    c->r[0] = 0x0u;
    c->r[7] = 0x1u;
L_26205c4:;
    c->r[6] = (c->r[1] >> 1);
    { uint32_t sc = ((c->r[1] >> 0) & 1); uint32_t r = c->r[7] & (c->r[1] >> 1); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[6];
    if (COND_EQ) { goto L_26205c4; }
    goto L_26205e0;
L_26205dc:;
    c->r[0] = 0x20u;
L_26205e0:;
    c->r[7] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = 0x0u;
    if (COND_LE) { c->r[7] = c->r[6]; }
    c->r[1] = sh_asr(c->r[3], c->r[7]);
    c->r[0] = sh_asr(c->r[2], c->r[7]);
    (void)f_subs(c, c->r[0], 0x2000000u);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 6);
    if (COND_LT) { c->r[1] = sh_asr(c->r[3], c->r[7]); }
    if (COND_LT) { c->r[0] = (c->r[0] << 6); }
    c->r[3] = c->r[10] + 0x26cu;
    (void)f_subs(c, c->r[0], 0x8000u);
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[6]); }
    if (COND_GE) { goto L_262066c; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2620680; }
    c->r[3] = c->r[1] - 0x1u;
    { uint32_t r = c->r[3] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { goto L_2620680; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0x0u;
    if (COND_NE) { goto L_2620664; }
    c->r[3] = ~0x0u;
    c->r[7] = 0x1u;
L_2620644:;
    c->r[6] = (c->r[1] >> 1);
    { uint32_t sc = ((c->r[1] >> 0) & 1); uint32_t r = c->r[7] & (c->r[1] >> 1); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[6];
    if (COND_EQ) { goto L_2620644; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_26208e4; }
    c->r[3] = c->r[3] + 0x1u;
L_2620664:;
    { uint32_t ea = c->r[10] + 0x278u; ST32(ea, c->r[3]); }
    goto L_2620680;
L_262066c:;
    c->r[2] = 0x10u;
    c->r[14] = 0x2620674u; f_284cba4(c);
    { uint32_t ea = c->r[10] + 0x274u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[10] + 0x268u; uint32_t v = LD32(ea); c->r[2] = v; }
L_2620680:;
    { uint32_t ea = c->r[10] + 0x27cu; ST32(ea, c->r[0]); }
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[10] + 0x24cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GE) { goto L_26206d8; }
    c->r[3] = c->r[10] + 0x26cu;
    { uint32_t ea = c->r[10] + 0x298u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[10] + 0x264u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x294u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x290u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x28cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x288u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = 0x10u;
    c->r[14] = 0x26206ccu; f_284cba4(c);
    { uint32_t ea = c->r[10] + 0x280u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    goto L_2620720;
L_26206d8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x260u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = c->r[10] + 0x248u;
    c->r[0] = c->r[0] + 0x118u;
    { uint32_t ea = c->r[10] + 0x298u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x294u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[10] + 0x290u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x28cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x288u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x280u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[2] = 0x10u;
    c->r[14] = 0x262071cu; f_284cba4(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_2620720:;
    { uint32_t ea = c->r[10] + 0x284u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x140u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x262073cu; f_284d03c(c);
    { uint32_t ea = c->r[10] + 0x1a5u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26208ac; }
    c->r[0] = 0x2u;
    c->r[3] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[10] + 0x1ecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[10] + 0x1e8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x44u;
    { uint32_t ea = c->r[10] + 0x1d4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x204u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[3]); }
    c->r[0] = 0x1feu;
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x206u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = 0x200u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = 0x202u;
    c->r[2] = 0x80u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = 0x1fcu;
    { uint32_t ea = c->r[10] + 0x1e0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x1e4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x207u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x1f8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x1f4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x1f0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x2acu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26208ac; }
    { uint32_t ea = c->r[10] + 0x2a9u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[10] + 0x1a8u;
    { uint32_t ea = c->r[10] + 0x1a6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2620830; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x1b8u;
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x2b4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x2b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x1a8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x184u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[6]; ST16(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[10] + 0x1a6u; ST8(ea, c->r[7]); }
    goto L_2620834;
L_2620830:;
    { uint32_t ea = c->r[10] + 0x2b8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2620834:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x17cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] + c->r[6];
    { uint32_t ea = c->r[10] + 0x1b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x240u; ST32(ea, c->r[7]); }
    c->r[7] = 0x2120u;
    { uint32_t ea = c->r[2] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x244u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[10] + 0x1acu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x23cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2b0u;
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[10] + 0xe0u;
    c->r[14] = 0x26208a0u; f_284cf40(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x1a5u; ST8(ea, c->r[4]); }
    if (COND_NE) { goto L_26208d0; }
L_26208ac:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x1a4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[0]); }
L_26208cc:;
    c->r[0] = 0x0u;
L_26208d0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26208d8:;
    c->r[5] = c->r[14];
    c->r[0] = 0x1u;
    goto L_262059c;
L_26208e4:;
    c->r[0] = 0x1u;
    goto L_2620680;
}
void f_26208ec(Cpu *restrict c) {
    FN_ENTER(0x26208ecu);
L_26208ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_NE) { goto L_2620950; }
    { uint32_t ea = c->r[0] + 0x14cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { goto L_2620964; }
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2620970; }
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2620970; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x10000u);
    if (COND_NE) { goto L_2620970; }
    { uint32_t ea = c->r[0] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2620970; }
    c->r[3] = 0x10000u;
    c->r[2] = 0x0u;
    goto L_26209b4;
L_2620950:;
    { uint32_t ea = c->r[0] + 0x14cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0xffdfu;
    c->r[2] = c->r[1] - c->r[2];
    (void)f_subs(c, c->r[2], 0x42u);
    if (COND_HI) { goto L_26209cc; }
L_2620964:;
    c->r[2] = c->r[12] + 0x21u;
    (void)f_subs(c, c->r[2], 0x42u);
    if (COND_HI) { goto L_26209cc; }
L_2620970:;
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x21u;
    (void)f_subs(c, c->r[2], 0x42u);
    if (COND_HI) { goto L_26209cc; }
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + 0x21u;
    (void)f_subs(c, c->r[3], 0x42u);
    if (COND_HI) { goto L_26209cc; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xffdfu;
    c->r[5] = c->r[3] - c->r[5];
    (void)f_subs(c, c->r[5], 0x42u);
    if (COND_HI) { goto L_26209cc; }
    { uint32_t ea = c->r[0] + 0x15cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + 0x21u;
    (void)f_subs(c, c->r[5], 0x43u);
    if (COND_CS) { goto L_26209cc; }
L_26209b4:;
    c->r[14] = 0x1u;
    c->r[4] = 0x10000u;
    { uint32_t ea = c->r[0] + 0x16cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x2a0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x2a4u; ST32(ea, c->r[4]); }
    goto L_2620a24;
L_26209cc:;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[2] = c->r[12];
    c->r[3] = c->r[1];
    c->r[14] = 0x0u;
    if (COND_MI) { c->r[2] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0] + 0x16cu; ST8(ea, c->r[14]); }
    if (COND_MI) { c->r[3] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LT) { c->r[3] = c->r[2]; }
    { uint32_t ea = c->r[0] + 0x2a0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    if (COND_MI) { c->r[4] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_MI) { c->r[5] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_LT) { c->r[5] = c->r[4]; }
    { uint32_t ea = c->r[0] + 0x2a4u; ST32(ea, c->r[5]); }
L_2620a24:;
    { uint32_t ea = c->r[0] + 0x29cu; ST8(ea, c->r[14]); }
    { uint32_t r = c->r[1] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    c->r[14] = 0x0u;
    c->r[4] = 0x0u;
    if (COND_EQ) { goto L_2620a50; }
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2620a50; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { c->r[12] = 0x1u; }
    c->r[4] = c->r[12];
L_2620a50:;
    (void)f_adds(c, c->r[1], c->r[3]);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[2] = c->r[2] | 0x2u; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { c->r[2] = c->r[4]; }
    { uint32_t ea = c->r[0] + 0x29du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2c8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x2ccu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2620a74(Cpu *restrict c) {
    FN_ENTER(0x2620a74u);
L_2620a74:;
    c->r[1] = 0x2u;
    c->r[2] = 0x204u;
    c->r[3] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x1e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x44u;
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x206u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1feu;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x200u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x202u;
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1fcu;
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x207u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    return;
}
void f_2620af4(Cpu *restrict c) {
    FN_ENTER(0x2620af4u);
L_2620af4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2acu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2620bec; }
    c->r[1] = 0x1u;
    c->r[3] = c->r[4] + 0x1a8u;
    { uint32_t ea = c->r[4] + 0x2a9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1a6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2620b70; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1b8u;
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[14]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1a6u; ST8(ea, c->r[1]); }
L_2620b70:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[14] + c->r[2];
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x240u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2120u;
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2b0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[12] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = c->r[1] + c->r[2];
    c->r[0] = c->r[4] + 0xe0u;
    c->r[14] = 0x2620be0u; f_284cf40(c);
    { uint32_t ea = c->r[4] + 0x1a5u; ST8(ea, c->r[5]); }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_2620bec:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2620bf8(Cpu *restrict c) {
    FN_ENTER(0x2620bf8u);
L_2620bf8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2620c28; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2620ce4; }
L_2620c28:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2620c40; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2620d44; }
L_2620c40:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620c50u; f_284cbb0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620c64u; f_284cbb0(c);
    c->r[8] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620c78u; f_284cbb0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620c8cu; f_284cbb0(c);
    c->r[9] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620ca0u; f_284cbb0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620cb4u; f_284cbb0(c);
    c->r[10] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620cc8u; f_284cbb0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620cdcu; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[7];
    goto L_2620d90;
L_2620ce4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2620cfc; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2620da0; }
L_2620cfc:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620d0cu; f_284cbb0(c);
    c->r[7] = c->r[6];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    c->r[14] = 0x2620d24u; f_284cbb0(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620d38u; f_284cbb0(c);
    c->r[10] = c->r[0];
L_2620d3c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2620d84;
L_2620d44:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620d54u; f_284cbb0(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620d68u; f_284cbb0(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620d7cu; f_284cbb0(c);
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[0];
L_2620d84:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620d90u; f_284cbb0(c);
L_2620d90:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2620da0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0xcu; c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2620db0u; f_284cbb0(c);
    c->r[8] = c->r[0];
    c->r[10] = 0x0u;
    c->r[7] = c->r[6];
    c->r[9] = 0x0u;
    goto L_2620d3c;
}
void f_2620dc4(Cpu *restrict c) {
    FN_ENTER(0x2620dc4u);
L_2620dc4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_2620dfc; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[4] + (c->r[12] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[3] = c->r[4] - c->r[3];
L_2620dfc:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x26u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] + (c->r[3] << 2); ST32(ea, c->r[14]); }
    c->r[6] = 0x10u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[6] + (c->r[3] << 2);
    { uint32_t ea = c->r[7] + c->r[10]; ST32(ea, c->r[14]); }
    c->r[7] = 0x14u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[14]); }
    c->r[4] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[4]; ST32(ea, c->r[14]); }
    c->r[5] = c->r[9] - c->r[8];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + (c->r[3] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + c->r[10]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[6] + c->r[4]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + c->r[5];
    c->r[5] = 0x8u;
    c->r[6] = c->r[6] + (c->r[6] >> 31);
    c->r[5] = c->r[5] + (c->r[3] << 2);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[7] + c->r[5]; ST32(ea, c->r[6]); }
    c->r[7] = 0xcu;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[14]; ST32(ea, c->r[6]); }
    c->r[4] = 0x18u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[7] + c->r[4]; ST32(ea, c->r[6]); }
    c->r[7] = 0x1cu;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + c->r[5]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x26u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + c->r[12];
    { uint32_t ea = c->r[5] + c->r[14]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[4]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2620ef4(Cpu *restrict c) {
    FN_ENTER(0x2620ef4u);
L_2620ef4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2620f34; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[4] << 1);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] - 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[12] = c->r[6] - c->r[5];
L_2620f34:;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x26u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + (c->r[12] << 2); ST32(ea, c->r[0]); }
    c->r[6] = 0x10u;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[6] + (c->r[12] << 2);
    { uint32_t ea = c->r[7] + c->r[8]; ST32(ea, c->r[0]); }
    c->r[7] = 0x14u;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + (c->r[12] << 2);
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[4] = 0x4u;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] + (c->r[12] << 2);
    { uint32_t ea = c->r[5] + c->r[4]; ST32(ea, c->r[0]); }
    c->r[5] = c->r[10] - c->r[9];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + (c->r[12] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[8]; ST32(ea, c->r[5]); }
    c->r[8] = 0x8u;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = c->r[8] + (c->r[12] << 2);
    { uint32_t ea = c->r[3] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] + c->r[5];
    c->r[4] = c->r[4] + (c->r[4] >> 31);
    c->r[5] = (uint32_t)((int32_t)c->r[4] >> 1);
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[5]); }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = c->r[0] + (c->r[12] << 2);
    { uint32_t ea = c->r[7] + c->r[9]; ST32(ea, c->r[5]); }
    c->r[7] = 0x18u;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + (c->r[12] << 2);
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[5]); }
    c->r[4] = 0x1cu;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + (c->r[12] << 2);
    { uint32_t ea = c->r[0] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x26u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[3] + c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[12] << 2);
    c->r[3] = c->r[3] + (c->r[12] << 2);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[2] + (c->r[12] << 2);
    c->r[2] = c->r[0] + (c->r[12] << 2);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2621054u; f_262105c(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262105c(Cpu *restrict c) {
    FN_ENTER(0x262105cu);
L_262105c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[8] = c->r[0];
    c->r[6] = c->r[3];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[8] + 0x260u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x254u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x250u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_26210e4; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_2621108; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2621184; }
    c->r[3] = c->r[10];
L_26210a8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[0] = v; }
    c->r[3] = c->r[3] - 0x1u;
    { uint32_t r = c->r[0] * c->r[12]; c->r[5] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_26210c8; }
    c->r[0] = c->r[5] + c->r[1];
    c->r[5] = sdiv32(c->r[0], c->r[2]);
    goto L_26210d4;
L_26210c8:;
    c->r[0] = c->r[1] - c->r[5];
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    c->r[5] = 0x0u - c->r[0];
L_26210d4:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); c->r[7] = c->r[7] + 0x4u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_26210a8; }
    goto L_2621184;
L_26210e4:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2621184; }
    { uint32_t ea = c->r[8] + 0x25cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[10] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2621138; }
    c->r[3] = c->r[10];
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_2621154; }
    goto L_2621184;
L_2621108:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2621184; }
    { uint32_t ea = c->r[8] + 0x258u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = c->r[10];
L_2621118:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621128u; f_284cbb0(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_2621118; }
    goto L_2621184;
L_2621138:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[12] + c->r[1]; c->r[3] = r; }
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); c->r[7] = c->r[7] + 0x4u; }
    c->r[3] = c->r[10] - 0x1u;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_EQ) { goto L_2621184; }
L_2621154:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    { uint32_t r = c->r[5] * c->r[12] + c->r[1]; c->r[5] = r; }
    c->r[5] = sh_asr(c->r[5], c->r[2]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + 0x8u;
    { uint32_t r = c->r[5] * c->r[12] + c->r[1]; c->r[5] = r; }
    c->r[5] = sh_asr(c->r[5], c->r[2]);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    c->r[7] = c->r[7] + 0x8u;
    if (COND_NE) { goto L_2621154; }
L_2621184:;
    { uint32_t ea = c->r[8] + 0x27cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x270u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2621218; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_26211e0; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2621288; }
    { uint32_t ea = c->r[8] + 0x274u; uint32_t v = LD32(ea); c->r[6] = v; }
L_26211b4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x26211c4u; f_284cbb0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); c->r[4] = c->r[4] + 0x4u; }
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_26211b4; }
    goto L_2621288;
L_26211d4:;
    c->r[3] = c->r[3] + c->r[1];
    c->r[3] = sdiv32(c->r[3], c->r[2]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); c->r[4] = c->r[4] + 0x4u; }
L_26211e0:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2621288; }
L_26211e8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[6] = v; }
    c->r[10] = c->r[10] - 0x1u;
    { uint32_t r = c->r[6] * c->r[0]; c->r[3] = r; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_26211d4; }
    c->r[3] = c->r[1] - c->r[3];
    c->r[3] = sdiv32(c->r[3], c->r[2]);
    c->r[3] = 0x0u - c->r[3];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); c->r[4] = c->r[4] + 0x4u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_26211e8; }
    goto L_2621288;
L_2621218:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2621288; }
    { uint32_t ea = c->r[8] + 0x278u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[10] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262123c; }
    c->r[3] = c->r[10];
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_2621258; }
    goto L_2621288;
L_262123c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[0] + c->r[1]; c->r[3] = r; }
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); c->r[4] = c->r[4] + 0x4u; }
    c->r[3] = c->r[10] - 0x1u;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_EQ) { goto L_2621288; }
L_2621258:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    { uint32_t r = c->r[6] * c->r[0] + c->r[1]; c->r[6] = r; }
    c->r[6] = sh_asr(c->r[6], c->r[2]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + 0x8u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[1]; c->r[6] = r; }
    c->r[6] = sh_asr(c->r[6], c->r[2]);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[4] = c->r[4] + 0x8u;
    if (COND_NE) { goto L_2621258; }
L_2621288:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2621290(Cpu *restrict c) {
    FN_ENTER(0x2621290u);
L_2621290:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[12] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26212d8; }
    { uint32_t ea = c->r[12] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[12] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[5] + (c->r[4] << 1);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + 0x9u;
    c->r[4] = c->r[5] - c->r[6];
    goto L_26212dc;
L_26212d8:;
    c->r[4] = 0x8u;
L_26212dc:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x26212e8u; f_262105c(c);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26212f0(Cpu *restrict c) {
    FN_ENTER(0x26212f0u);
L_26212f0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x3cu;
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2621d70; }
    { uint32_t ea = c->r[1] + 0x198u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2621d70; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1a0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262139c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x10000u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], (uint32_t)((int32_t)c->r[0] >> 16));
    if (COND_EQ) { goto L_2621388; }
    c->r[1] = (c->r[1] << 16);
    c->r[2] = 0x10u;
    c->r[14] = 0x2621384u; f_284cba4(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_2621388:;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], (uint32_t)((int32_t)c->r[6] >> 16));
    if (COND_NE) { goto L_26213cc; }
    c->r[6] = 0x10000u;
    goto L_2621438;
L_262139c:;
    { uint32_t ea = c->r[1] + 0x14cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GE) { goto L_26213e4; }
    (void)f_subs(c, c->r[3], 0x10000u);
    if (COND_LT) { goto L_26213f4; }
    c->r[2] = (c->r[3] >> 16);
    goto L_26213f0;
L_26213cc:;
    c->r[1] = (c->r[0] << 16);
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x26213dcu; f_284cba4(c);
    c->r[6] = c->r[0];
    goto L_2621438;
L_26213e4:;
    (void)f_subs(c, c->r[2], 0x10000u);
    if (COND_LT) { goto L_26213f4; }
    c->r[2] = (c->r[2] >> 16);
L_26213f0:;
    c->r[0] = sdiv32(c->r[0], c->r[2]);
L_26213f4:;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_2621428; }
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_LT) { goto L_2621438; }
    c->r[0] = (c->r[1] >> 16);
    goto L_2621434;
L_2621428:;
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_LT) { goto L_2621438; }
    c->r[0] = (c->r[0] >> 16);
L_2621434:;
    c->r[6] = sdiv32(c->r[6], c->r[0]);
L_2621438:;
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2621458; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x9u;
    goto L_262145c;
L_2621458:;
    c->r[0] = 0x8u;
L_262145c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_26214f0; }
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2621d08; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[1] = c->r[0] - 0x1u;
    if (COND_EQ) { goto L_26214a4; }
    c->r[3] = 0x0u;
    c->r[7] = 0xffffu;
L_262148c:;
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[3]); c->r[8] = c->r[8] + 0x4u; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[3]); c->r[10] = c->r[10] + 0x4u; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t r = c->r[2] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262148c; }
L_26214a4:;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_2621d08; }
    c->r[1] = 0x0u;
    c->r[2] = 0xffffu;
L_26214b8:;
    c->r[0] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[1]); }
    c->r[10] = c->r[10] + 0x10u;
    c->r[8] = c->r[8] + 0x10u;
    { uint32_t r = c->r[0] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26214b8; }
    goto L_2621d08;
L_26214f0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[2], 0x10000u);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x10000u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[3] = 0x1u;
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40000u;
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x1u); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_262160c; }
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2621a3c; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_26217c0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u - c->r[0];
L_2621564:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[0] + 0x4000u;
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_2621598; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x7fffu;
    if (COND_GT) { c->r[1] = 0x8000u; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26215ac;
L_2621598:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x26215a4u; f_284cbb0(c);
    c->r[3] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40000u;
L_26215ac:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CS) { goto L_26215e4; }
    c->r[0] = c->r[6] + 0x4000u;
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_HI) { goto L_26215e4; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26215fc;
L_26215e4:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x26215f4u; f_284cbb0(c);
    c->r[3] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40000u;
L_26215fc:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    c->r[5] = f_adds(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_2621564; }
    goto L_2621a3c;
L_262160c:;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[9]); }
    if (COND_EQ) { goto L_2621834; }
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2621cdc; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40000u;
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_2621a60; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u - c->r[0];
L_2621668:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[7] + 0x4000u;
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_HI) { goto L_262169c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[7] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26216b0;
L_262169c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x26216acu; f_284cbb0(c);
    c->r[5] = c->r[0];
L_26216b0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[6] + 0x4000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_26216f4; }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_26216f4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_262170c;
L_26216f4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621704u; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_262170c:;
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621748; }
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_HI) { goto L_2621748; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[7] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621764;
L_2621748:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621758u; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[5] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_2621764:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CS) { goto L_262179c; }
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_HI) { goto L_262179c; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26217ac;
L_262179c:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x26217acu; f_284cbb0(c);
L_26217ac:;
    c->r[0] = c->r[0] + c->r[5];
    c->r[9] = f_adds(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    if (COND_NE) { goto L_2621668; }
    goto L_2621cdc;
L_26217c0:;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CS) { goto L_2621a00; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u - c->r[0];
L_26217d0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x26217e4u; f_284cbb0(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    c->r[0] = c->r[5] + 0x4000u;
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_HI) { goto L_2621814; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[5] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621824;
L_2621814:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621824u; f_284cbb0(c);
L_2621824:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    c->r[4] = f_adds(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_26217d0; }
    goto L_2621a3c;
L_2621834:;
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2621cdc; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40000u;
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_2621b90; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u - c->r[0];
L_2621888:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2621898u; f_284cba4(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x26218acu; f_284cba4(c);
    c->r[4] = c->r[6] + 0x4000u;
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_HI) { goto L_26218dc; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26218f0;
L_26218dc:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x26218ecu; f_284cbb0(c);
    c->r[7] = c->r[0];
L_26218f0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[9] + 0x4000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621934; }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_2621934; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[9] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_262194c;
L_2621934:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621944u; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_262194c:;
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621988; }
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_HI) { goto L_2621988; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26219a4;
L_2621988:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621998u; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[6] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_26219a4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CS) { goto L_26219dc; }
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_HI) { goto L_26219dc; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[9] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26219ec;
L_26219dc:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x26219ecu; f_284cbb0(c);
L_26219ec:;
    c->r[0] = c->r[0] + c->r[6];
    c->r[5] = f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    if (COND_NE) { goto L_2621888; }
    goto L_2621cdc;
L_2621a00:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u - c->r[0];
L_2621a08:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2621a1cu; f_284cbb0(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    c->r[0] = c->r[5];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2621a30u; f_284cbb0(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    c->r[4] = f_adds(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_2621a08; }
L_2621a3c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[14] = 0x2621a54u; f_283ac04(c);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    goto L_2621d00;
L_2621a60:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u - c->r[0];
L_2621a68:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x10u;
    c->r[0] = c->r[7];
    c->r[14] = 0x2621a80u; f_284cbb0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[9] = c->r[6] + 0x4000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621ac4; }
    (void)f_subs(c, c->r[9], 0x8000u);
    if (COND_HI) { goto L_2621ac4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621adc;
L_2621ac4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621ad4u; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_2621adc:;
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621b1c; }
    c->r[0] = c->r[7] + 0x4000u;
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_HI) { goto L_2621b1c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[7] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621b38;
L_2621b1c:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621b2cu; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[5] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_2621b38:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621b6c; }
    (void)f_subs(c, c->r[9], 0x8000u);
    if (COND_HI) { goto L_2621b6c; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621b7c;
L_2621b6c:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621b7cu; f_284cbb0(c);
L_2621b7c:;
    c->r[0] = c->r[0] + c->r[5];
    c->r[4] = f_adds(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    if (COND_NE) { goto L_2621a68; }
    goto L_2621cdc;
L_2621b90:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u - c->r[0];
L_2621b98:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2621ba8u; f_284cba4(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2621bbcu; f_284cba4(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621bd0u; f_284cbb0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[9] = c->r[6] + 0x4000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621c14; }
    (void)f_subs(c, c->r[9], 0x8000u);
    if (COND_HI) { goto L_2621c14; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621c2c;
L_2621c14:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621c24u; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_2621c2c:;
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621c6c; }
    c->r[0] = c->r[7] + 0x4000u;
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_HI) { goto L_2621c6c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[7] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621c88;
L_2621c6c:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621c7cu; f_284cbb0(c);
    c->r[2] = 0x1u;
    c->r[7] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
L_2621c88:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_2621cbc; }
    (void)f_subs(c, c->r[9], 0x8000u);
    if (COND_HI) { goto L_2621cbc; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[6] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2621ccc;
L_2621cbc:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621cccu; f_284cbb0(c);
L_2621ccc:;
    c->r[0] = c->r[0] + c->r[7];
    c->r[4] = f_adds(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    if (COND_NE) { goto L_2621b98; }
L_2621cdc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[0] << 2);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[14] = 0x2621cf8u; f_283ac04(c);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2621d00:;
    c->r[2] = c->r[5];
    c->r[14] = 0x2621d08u; f_283ac04(c);
L_2621d08:;
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2621d2c; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x2u;
    c->r[1] = c->r[1] + 0x1u;
    goto L_2621d34;
L_2621d2c:;
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
L_2621d34:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] ^ c->r[3];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { goto L_2621d70; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_2621d70:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2621d78(Cpu *restrict c) {
    FN_ENTER(0x2621d78u);
L_2621d78:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = c->r[3];
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[0];
    { uint32_t r = c->r[4] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10]; c->r[6] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { goto L_2621de4; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2621e28; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[8] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[1] - c->r[0];
    goto L_2621ff4;
L_2621de4:;
    { uint32_t r = c->r[3] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_2621e30; }
    { uint32_t ea = c->r[9] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_2621e60; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2621e88; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2621ec8; }
    { uint32_t ea = c->r[9] + 0x250u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x25cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[7] = sh_asr(c->r[0], c->r[7]);
    goto L_2621ec8;
L_2621e28:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2621e30:;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2621eac; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x24u;
    c->r[4] = c->r[1] + (c->r[0] << 2);
    goto L_2621eb0;
L_2621e60:;
    { uint32_t ea = c->r[9] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    c->r[7] = c->r[14];
    c->r[14] = 0x2621e74u; f_284cbb0(c);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[7];
    c->r[7] = c->r[0];
    goto L_2621ec8;
L_2621e88:;
    { uint32_t ea = c->r[9] + 0x250u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t r = c->r[2] * c->r[1]; c->r[2] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_LT) { goto L_2621ebc; }
    c->r[1] = c->r[7] + c->r[2];
    c->r[7] = sdiv32(c->r[1], c->r[0]);
    goto L_2621ec8;
L_2621eac:;
    c->r[4] = 0x0u;
L_2621eb0:;
    c->r[0] = c->r[12];
    c->r[1] = c->r[6];
    goto L_26220a0;
L_2621ebc:;
    c->r[1] = c->r[7] - c->r[2];
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    c->r[7] = 0x0u - c->r[0];
L_2621ec8:;
    { uint32_t ea = c->r[9] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_2621f14; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2621f40; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2621f78; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[9] + 0x26cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x278u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = c->r[5];
    c->r[5] = sh_asr(c->r[0], c->r[2]);
    goto L_2621f78;
L_2621f14:;
    { uint32_t ea = c->r[9] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3];
    c->r[2] = 0x10u;
    c->r[9] = c->r[12];
    c->r[5] = c->r[14];
    c->r[14] = 0x2621f2cu; f_284cbb0(c);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[5];
    c->r[12] = c->r[9];
    c->r[5] = c->r[0];
    goto L_2621f78;
L_2621f40:;
    { uint32_t ea = c->r[9] + 0x26cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1);
    if (COND_LT) { goto L_2621f68; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[5] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2621f78;
L_2621f68:;
    c->r[1] = c->r[2] - c->r[1];
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u - c->r[0];
L_2621f78:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2621fcc; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2621fcc; }
    c->r[9] = c->r[1];
    c->r[0] = c->r[7];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    c->r[14] = 0x2621facu; f_284cbb0(c);
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x10u;
    c->r[14] = 0x2621fc0u; f_284cbb0(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = c->r[0];
L_2621fcc:;
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2621fe4; }
    { uint32_t r = c->r[4] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2621ff4; }
L_2621fe4:;
    c->r[5] = c->r[5] + 0x20u;
    c->r[7] = c->r[7] + 0x20u;
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[7] = c->r[7] & 0xffffffc0u;
L_2621ff4:;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262202c; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + 0x9u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2622034; }
    c->r[1] = c->r[0];
    goto L_2622050;
L_262202c:;
    c->r[4] = 0x0u;
    goto L_2622094;
L_2622034:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); c->r[6] = c->r[6] + 0x4u; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); c->r[8] = c->r[8] + 0x4u; }
    c->r[1] = c->r[0] - 0x1u;
L_2622050:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[2] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[8] + 0x8u;
    if (COND_NE) { goto L_2622050; }
    c->r[4] = (c->r[0] << 2);
L_2622094:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[12];
L_26220a0:;
    c->r[2] = c->r[4];
    c->r[14] = 0x26220a8u; f_283ac04(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x26220b8u; f_283ac04(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26220c0(Cpu *restrict c) {
    FN_ENTER(0x26220c0u);
L_26220c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[9] = c->r[2];
    c->r[10] = c->r[1];
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[10] + 0x208u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = 0x7fu;
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[1]); }
    c->r[1] = 0xb0u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x1d4u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_2622144; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[12] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = c->r[0] - c->r[1];
    goto L_2622148;
L_2622144:;
    c->r[4] = 0x0u;
L_2622148:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_26221dc; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[1]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x28u; ST8(ea, c->r[0]); }
L_26221dc:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_2622298; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[2] = c->r[4];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5];
    c->r[5] = c->r[14];
    c->r[14] = 0x2622208u; f_2622558(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = c->r[5];
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2622298; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
L_2622298:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2622318; }
    { uint32_t r = c->r[5] | c->r[8]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_2622318; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_2622318; }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x602u;
    c->r[3] = 0x9655u;
    c->r[12] = c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[6] + 0x4eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[0] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[2] = c->r[12];
    c->r[0] = c->r[13] + 0x10u;
    if (COND_NE) { c->r[2] = c->r[0]; }
    if (COND_NE) { c->r[8] = 0x3u; }
L_2622318:;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_2622550; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); }
    if (COND_EQ) { goto L_2622434; }
    c->r[0] = 0x138u;
    { uint32_t ea = c->r[10] + 0x140u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 10);
    c->r[14] = 0x262235cu; f_284cba4(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_2622434; }
    c->r[0] = c->r[9] + 0x20000u;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], 0x40000u);
    if (COND_HI) { goto L_2622400; }
L_2622378:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4000u;
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_26223a4; }
    { uint32_t r = c->r[0] * c->r[9]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x7fffu;
    if (COND_GT) { c->r[1] = 0x8000u; }
    { uint32_t r = c->r[0] * c->r[9] + c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26223b0;
L_26223a4:;
    c->r[1] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x26223b0u; f_284cbb0(c);
L_26223b0:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4000u;
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_26223e0; }
    { uint32_t r = c->r[0] * c->r[9]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x7fffu;
    if (COND_GT) { c->r[1] = 0x8000u; }
    { uint32_t r = c->r[0] * c->r[9] + c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26223ec;
L_26223e0:;
    c->r[1] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x26223ecu; f_284cbb0(c);
L_26223ec:;
    c->r[4] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2622378; }
    goto L_2622434;
L_2622400:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x2622410u; f_284cbb0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    c->r[1] = c->r[9];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[0] = v; }
    c->r[14] = 0x2622424u; f_284cbb0(c);
    c->r[4] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2622400; }
L_2622434:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x2a9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1a6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262247c; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x2b4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1b8u;
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x2b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1a8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x1a6u; ST8(ea, c->r[0]); }
L_262247c:;
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x180u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1b4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x17cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[10] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x240u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2120u;
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x244u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[10] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x23cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2b0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[2] = 0x2f8u;
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x2bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x2c8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x2ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0x2fau;
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7] + 0x4du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2622550; }
    { uint32_t ea = c->r[7] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[10] + 0x1a8u;
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0xe0u;
    c->r[14] = 0x2622550u; f_284cf40(c);
L_2622550:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2622558(Cpu *restrict c) {
    FN_ENTER(0x2622558u);
L_2622558:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[1];
    c->r[6] = c->r[2];
    c->r[0] = 0x8u;
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x20u;
    c->r[2] = c->r[2] & 0xffffffc0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[1] = 0xcu;
    c->r[7] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[2] + 0x20u;
    c->r[5] = c->r[5] & 0xffffffc0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = c->r[1] - c->r[0];
    c->r[0] = 0x138u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD16(ea); c->r[8] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26225d8u; f_284cd9c(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x200u;
    c->r[1] = 0x20u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[1] = c->r[1] & 0xffffffc0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = (uint32_t)((int32_t)c->r[0] >> 10); }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[0] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x20u;
    c->r[9] = c->r[9] & 0xffffffc0u;
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_2622684; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_2622684; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] - c->r[0];
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2622648; }
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_2622660; }
    goto L_2622684;
L_2622648:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); c->r[1] = c->r[1] + 0x4u; }
    c->r[2] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_EQ) { goto L_2622684; }
L_2622660:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x8u;
    if (COND_NE) { goto L_2622660; }
L_2622684:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[5] = c->r[2] + (c->r[6] << 2);
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26226acu; f_284cd9c(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x200u;
    c->r[1] = 0x20u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[1] = c->r[1] & 0xffffffc0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = (uint32_t)((int32_t)c->r[0] >> 10); }
    c->r[0] = c->r[1] + c->r[9];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26226dc(Cpu *restrict c) {
    FN_ENTER(0x26226dcu);
L_26226dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[7] = rev16_32(c->r[12]);
    c->r[4] = (c->r[12] >> 8);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t sc = ((c->r[12] >> 7) & 1); uint32_t r = c->r[7] & (c->r[12] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_262272c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[6] = v; }
    goto L_2622744;
L_262272c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[7] = rev16_32(c->r[7]);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    c->r[7] = 0x4u;
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[6] = rev16_32(c->r[2]);
L_2622744:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[6]); }
    c->r[3] = c->r[5] + (c->r[7] << 1);
    { uint32_t r = c->r[4] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2622784; }
    { uint32_t r = c->r[4] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26227b0; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26227f8; }
    c->r[0] = 0x10000u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    goto L_2622864;
L_2622784:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[4] = v; }
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[5] = 0x0u;
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x198u; ST8(ea, c->r[5]); }
    goto L_2622864;
L_26227b0:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x4u;
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x198u; ST8(ea, c->r[4]); }
    goto L_2622864;
L_26227f8:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x8u;
    c->r[5] = (c->r[4] >> 8);
    c->r[4] = c->r[5] | (c->r[4] << 8);
    c->r[4] = (c->r[4] << 16);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 14);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x198u; ST8(ea, c->r[2]); }
L_2622864:;
    c->r[0] = (c->r[12] >> 13) & 0x1u;
    { uint32_t ea = c->r[14]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2622878(Cpu *restrict c) {
    FN_ENTER(0x2622878u);
L_2622878:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x10u;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[3];
    c->r[3] = c->r[12];
    c->r[14] = 0x26228bcu; f_284d048(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_26228c4(Cpu *restrict c) {
    FN_ENTER(0x26228c4u);
L_26228c4:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_262290c; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u - c->r[3];
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[12] = c->r[2] + 0x1u;
L_26228ec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    c->r[2] = c->r[2] + c->r[12];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); c->r[0] = c->r[0] + 0x2u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[12];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); c->r[1] = c->r[1] + 0x2u; }
    if (COND_NE) { goto L_26228ec; }
L_262290c:;
    return;
}
void f_2622910(Cpu *restrict c) {
    FN_ENTER(0x2622910u);
L_2622910:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2622948; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[2] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[4] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[14]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[4] - c->r[2];
L_2622948:;
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x114u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x118u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x11cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x120u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x120u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x128u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x124u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x130u; ST32(ea, c->r[2]); }
    c->r[2] = 0x134u;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_26229d0(Cpu *restrict c) {
    FN_ENTER(0x26229d0u);
L_26229d0:;
    c->r[12] = 0x2cu;
    { uint32_t r = c->r[1] * c->r[12] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = 0x108u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    return;
}
void f_2622a60(Cpu *restrict c) {
    FN_ENTER(0x2622a60u);
L_2622a60:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[2];
    c->r[8] = c->r[3];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x22u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12u; ST16(ea, c->r[1]); }
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_LS) { goto L_2622ae8; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = c->r[0] + (c->r[10] << 2);
    c->r[0] = c->r[6];
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x2622ac0u; f_284cdf0(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2622c84; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[8] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    goto L_2622b64;
L_2622ae8:;
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[13] + 0xeu; ST16(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[4] = c->r[0] - 0x4u;
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x2622b10u; f_284cdf0(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2622c84; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[3] = 0x2u;
    c->r[0] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[8] + 0x12u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xeu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] - c->r[7];
    c->r[0] = c->r[4] + (c->r[0] << 1);
    c->r[2] = c->r[0] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2622b4cu; f_284cdf0(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2622c84; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8);
    c->r[0] = c->r[1] | (c->r[0] << 8);
L_2622b64:;
    { uint32_t ea = c->r[8] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2622bd4; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x22u; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[10]);
    if (COND_LS) { goto L_2622c14; }
    c->r[1] = c->r[13] + 0x8u;
    c->r[2] = c->r[0] + (c->r[10] << 2);
    c->r[0] = c->r[6];
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x2622bacu; f_284cdf0(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2622c84; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[8] + 0x26u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    goto L_2622c08;
L_2622bd4:;
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x48u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[0] + 0x46u;
    if (COND_EQ) { c->r[1] = c->r[9] + 0x6u; }
    if (COND_EQ) { c->r[0] = c->r[9] + 0x4u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[8] + 0x26u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2au; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
L_2622c08:;
    { uint32_t ea = c->r[8] + 0x24u; ST16(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2622c14:;
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[13] + 0x6u; ST16(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x8u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[4] = c->r[0] - 0x4u;
    c->r[0] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x2622c3cu; f_284cdf0(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2622c84; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[3] = 0x2u;
    c->r[0] = rev16_32(c->r[0]);
    { uint32_t ea = c->r[8] + 0x26u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] - c->r[7];
    c->r[0] = c->r[4] + (c->r[0] << 1);
    c->r[2] = c->r[0] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2622c78u; f_284cdf0(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2622c8c; }
L_2622c84:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2622c8c:;
    { uint32_t ea = c->r[13] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8);
    c->r[0] = c->r[1] | (c->r[0] << 8);
    goto L_2622c08;
}
void f_2622c9c(Cpu *restrict c) {
    FN_ENTER(0x2622c9cu);
L_2622c9c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x48u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[3];
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x1cu;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x2622cd8u; f_284cd84(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2622d58; }
    { uint32_t ea = c->r[6] + 0x2eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2622d00; }
    { uint32_t ea = c->r[13] + 0x2eu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_2622d0c;
L_2622d00:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x42u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
L_2622d0c:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0xcu;
    c->r[0] = 0x1u;
    c->r[2] = c->r[13] + 0x14u;
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x18u;
    c->r[0] = c->r[5];
    c->r[14] = 0x2622d34u; f_262105c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8000u;
    c->r[0] = c->r[1] + (c->r[0] << 10);
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 10);
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_2622d58:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2622d60(Cpu *restrict c) {
    FN_ENTER(0x2622d60u);
L_2622d60:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[3] = rev16_32(c->r[12]);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[1] + 0x14u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[1] + 0x16u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[1] + 0x18u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0xau;
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[1] + 0x1au; ST16(ea, c->r[3]); }
    c->r[3] = revsh32(c->r[12]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_2622de4; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[3] = (c->r[3] << 1);
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[14] = v; }
    c->r[2] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    c->r[3] = __builtin_bswap32(c->r[14]);
    c->r[12] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = (c->r[14] >> 8);
    c->r[3] = c->r[3] | (c->r[14] << 8);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    goto L_2622df4;
L_2622de4:;
    c->r[3] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[3]); }
L_2622df4:;
    { uint32_t ea = c->r[1] + 0x8u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    return;
}
void f_2622e04(Cpu *restrict c) {
    FN_ENTER(0x2622e04u);
L_2622e04:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[3] = rev16_32(c->r[12]);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[2] + 0x14u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[2] + 0x16u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[2] + 0x18u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0xau;
    c->r[3] = rev16_32(c->r[3]);
    { uint32_t ea = c->r[2] + 0x1au; ST16(ea, c->r[3]); }
    c->r[3] = revsh32(c->r[12]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_2622e88; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->r[3] = (c->r[3] << 1);
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[14] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    c->r[3] = __builtin_bswap32(c->r[14]);
    c->r[12] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = (c->r[14] >> 8);
    c->r[3] = c->r[3] | (c->r[14] << 8);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    goto L_2622e98;
L_2622e88:;
    c->r[3] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
L_2622e98:;
    { uint32_t ea = c->r[2] + 0x8u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    return;
}
void f_2622eac(Cpu *restrict c) {
    FN_ENTER(0x2622eacu);
L_2622eac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[0];
    c->r[5] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[8] + 0x24cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { c->r[10] = c->r[10] + 0x8u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2622f0c; }
    { uint32_t r = c->r[6] | c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x268u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { c->r[3] = 0x10000u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); } }
    if (COND_EQ) { (void)f_subs(c, c->r[9], c->r[2]); }
    if (COND_NE) { goto L_2622f0c; }
    c->r[0] = 0x10000u;
    goto L_2622f50;
L_2622f0c:;
    c->r[2] = 0x10u;
    c->r[14] = 0x2622f14u; f_284cba4(c);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[8] + 0x24cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2622f28u; f_284cba4(c);
    { uint32_t ea = c->r[8] + 0x268u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x2622f3cu; f_284cba4(c);
    { uint32_t ea = c->r[8] + 0x268u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x2622f50u; f_284cba4(c);
L_2622f50:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[6] | c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_2623114; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_2623240; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_2622f9c:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[6] = c->r[9] + 0x4000u;
    if (COND_CS) { goto L_2622fec; }
    (void)f_subs(c, c->r[6], 0x8000u);
    if (COND_HI) { goto L_2622fec; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[9] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[10] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2623000;
L_2622fec:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x2622ffcu; f_284cbb0(c);
    c->r[10] = c->r[0];
L_2623000:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[4] = c->r[8] + 0x4000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_2623040; }
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_HI) { goto L_2623040; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[8] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2623050;
L_2623040:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x2623050u; f_284cbb0(c);
L_2623050:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_2623098; }
    (void)f_subs(c, c->r[6], 0x8000u);
    if (COND_HI) { goto L_2623098; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[9] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_26230ac;
L_2623098:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x26230a8u; f_284cbb0(c);
    c->r[6] = c->r[0];
L_26230ac:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x40000u;
    c->r[10] = c->r[10] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_26230f0; }
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_HI) { goto L_26230f0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x7fffu;
    if (COND_GT) { c->r[0] = 0x8000u; }
    { uint32_t r = c->r[8] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2623100;
L_26230f0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x2623100u; f_284cbb0(c);
L_2623100:;
    c->r[0] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    if (COND_NE) { goto L_2622f9c; }
    goto L_2623240;
L_2623114:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_NE) { (void)f_subs(c, c->r[10], 0x0u); }
    if (COND_EQ) { goto L_26231ac; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[4] = c->r[10];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40000u;
    c->r[0] = c->r[0] + 0x20000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_2623190; }
L_2623140:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] - 0x1u;
    c->r[1] = c->r[0] + 0x4000u;
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_2623174; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x7fffu;
    if (COND_GT) { c->r[1] = 0x8000u; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2623180;
L_2623174:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2623180u; f_284cbb0(c);
L_2623180:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_2623140; }
    goto L_26231ac;
L_2623190:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x26231a0u; f_284cbb0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_2623190; }
L_26231ac:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_NE) { (void)f_subs(c, c->r[10], 0x0u); }
    if (COND_EQ) { goto L_2623240; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40000u;
    c->r[0] = c->r[0] + 0x20000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_2623224; }
L_26231d4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] - 0x1u;
    c->r[1] = c->r[0] + 0x4000u;
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_HI) { goto L_2623208; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x7fffu;
    if (COND_GT) { c->r[1] = 0x8000u; }
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    goto L_2623214;
L_2623208:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2623214u; f_284cbb0(c);
L_2623214:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_26231d4; }
    goto L_2623240;
L_2623224:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x2623234u; f_284cbb0(c);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_2623224; }
L_2623240:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2623248(Cpu *restrict c) {
    FN_ENTER(0x2623248u);
L_2623248:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    c->r[4] = c->r[0];
    c->r[8] = c->r[2];
    c->r[9] = c->r[1];
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x22u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[14] = 0x2623278u; f_284cafc(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26232b4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0xau;
    c->r[14] = 0x2623294u; f_284cafc(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26232b4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x26232b0u; f_284cafc(c);
    goto L_26232e0;
L_26232b4:;
    c->r[0] = c->r[4];
    c->r[1] = ~0x4000u;
    c->r[14] = 0x26232c0u; f_284ca78(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26232ec; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x26232dcu; f_284cafc(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
L_26232e0:;
    c->r[0] = 0xffffu;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26232ec:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[9];
    c->r[0] = c->r[4];
    c->r[14] = 0x262330cu; f_284ce5c(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x2623320u; f_284cafc(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { c->r[0] = c->r[1] - 0xe000u; }
    if (COND_NE) { c->r[0] = (c->r[0] >> 8); }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x18u); }
    if (COND_LS) { goto L_26234c0; }
    c->r[2] = c->r[1] - 0xfb00u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_CS) { c->r[2] = 0xa720u; }
    if (COND_CS) { c->r[2] = c->r[1] - c->r[2]; }
    if (COND_CS) { (void)f_subs(c, c->r[2], 0xe0u); }
    if (COND_CC) { goto L_26234b8; }
    c->r[7] = c->r[1];
    c->r[2] = 0x2c60u;
    c->r[7] = c->r[7] & 0xffffffe0u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_26234b8; }
    c->r[3] = c->r[1];
    c->r[3] = c->r[3] & 0xffffff00u;
    (void)f_subs(c, c->r[3], 0x1e00u);
    if (COND_NE) { c->r[2] = c->r[1]; }
    if (COND_NE) { c->r[2] = c->r[2] & 0xffffff80u; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x1d00u); }
    if (COND_EQ) { goto L_26234b8; }
    c->r[6] = c->r[1] - 0x250u;
    (void)f_subs(c, c->r[6], 0x60u);
    if (COND_CS) { c->r[6] = c->r[1] - 0x180u; }
    if (COND_CS) { (void)f_subs(c, c->r[6], 0xd0u); }
    if (COND_CC) { goto L_26234b8; }
    (void)f_subs(c, c->r[2], 0x100u);
    if (COND_EQ) { goto L_26234b8; }
    c->r[6] = c->r[1] - 0x20u;
    (void)f_subs(c, c->r[6], 0x60u);
    if (COND_CC) { goto L_26234b8; }
    (void)f_subs(c, c->r[2], 0x80u);
    if (COND_NE) { c->r[0] = 0x2u; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x2c80u); }
    if (COND_EQ) { goto L_26234b8; }
    c->r[6] = c->r[1] - 0x370u;
    (void)f_subs(c, c->r[6], 0x90u);
    if (COND_CC) { goto L_26234b8; }
    (void)f_subs(c, c->r[3], 0x1f00u);
    if (COND_EQ) { goto L_26234b8; }
    c->r[0] = 0xa640u;
    c->r[6] = c->r[1] - c->r[0];
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[6], 0x60u);
    if (COND_CC) { goto L_26234b8; }
    c->r[6] = 0x2de0u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x400u); }
    if (COND_EQ) { goto L_26234b8; }
    c->r[7] = c->r[1] - 0x500u;
    (void)f_subs(c, c->r[7], 0x30u);
    if (COND_CC) { goto L_26234b8; }
    c->r[7] = c->r[1] - 0x590u;
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[7], 0x70u);
    if (COND_CS) { c->r[7] = 0xfb1du; }
    if (COND_CS) { c->r[7] = c->r[1] - c->r[7]; }
    if (COND_CS) { (void)f_subs(c, c->r[7], 0x33u); }
    if (COND_CC) { goto L_26234b8; }
    c->r[0] = 0xfe70u;
    c->r[7] = c->r[1] - c->r[0];
    c->r[0] = 0x5u;
    (void)f_subs(c, c->r[7], 0x90u);
    if (COND_CS) { c->r[7] = 0xfb50u; }
    if (COND_CS) { c->r[7] = c->r[1] - c->r[7]; }
    if (COND_CS) { (void)f_subs(c, c->r[7], 0x2b0u); }
    if (COND_CC) { goto L_26234b8; }
    (void)f_subs(c, c->r[3], 0x600u);
    if (COND_EQ) { goto L_26234b8; }
    c->r[7] = c->r[1] - 0x750u;
    (void)f_subs(c, c->r[7], 0x30u);
    if (COND_CS) { c->r[7] = c->r[1] - 0xac00u; }
    if (COND_CS) { c->r[6] = 0x2bb0u; }
    if (COND_CS) { c->r[0] = 0x6u; }
    if (COND_CS) { (void)f_subs(c, c->r[7], c->r[6]); }
    if (COND_CC) { goto L_26234b8; }
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[3], 0xf900u);
    if (COND_EQ) { goto L_26234b8; }
    c->r[3] = c->r[1] - 0x4e00u;
    (void)f_subs(c, c->r[3], 0x5200u);
    if (COND_CS) { c->r[3] = c->r[1] - 0x3400u; }
    if (COND_CS) { (void)f_subs(c, c->r[3], 0x19c0u); }
    if (COND_CC) { goto L_26234b8; }
    c->r[3] = c->r[1] - 0x2e80u;
    c->r[3] = (c->r[3] >> 1);
    (void)f_subs(c, c->r[3], 0xabu);
    if (COND_CS) { c->r[1] = c->r[1] - 0x31c0u; }
    if (COND_CS) { (void)f_subs(c, c->r[1], 0x30u); }
    if (COND_CC) { goto L_26234b8; }
    c->r[0] = c->r[2] - 0x900u;
    (void)f_subs(c, c->r[0], 0x580u);
    if (COND_CS) { goto L_2623628; }
    c->r[1] = 0x578798u;
    c->r[1] = 0x26234b8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] >> 5); uint32_t v = LD32(ea); c->r[0] = v; }
L_26234b8:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26234c0:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x28c10000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x2cu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[12] = c->r[0] & 0x800u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[10] = r; }
    c->r[1] = c->r[1] + (c->r[12] >> 11);
    if (COND_EQ) { c->r[1] = (c->r[12] >> 11); }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[9] = r; }
    c->r[0] = c->r[0] & 0x2000u;
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x1100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t r = c->r[2] & c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[14] = r; }
    c->r[2] = c->r[2] & 0x80000000u;
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = c->r[3] & 0x8u;
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    { uint32_t r = c->r[0] | c->r[2]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_EQ) { c->r[0] = (c->r[12] >> 9); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[0] = 0x6u; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { c->r[0] = 0x7u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { c->r[0] = 0x8u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[0] = 0x9u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[0] = 0xau; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[0] = 0x13u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[0] = 0xfu; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[0] = 0xeu; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[0] = 0xbu; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = 0xcu; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[0] = 0xdu; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[0] = 0x11u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[0] = 0x10u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[0] = 0x12u; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2623628:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1780u);
    if (COND_EQ) { c->r[0] = 0x12u; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2623640(Cpu *restrict c) {
    FN_ENTER(0x2623640u);
L_2623640:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xfcu;
    c->r[10] = c->r[0];
    c->r[9] = c->r[1];
    c->r[6] = 0x0u;
    c->r[1] = 0x2cu;
    c->r[5] = c->r[3];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x7fu;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x42u; ST8(ea, c->r[0]); }
    c->r[0] = 0xbb0u;
    { uint32_t ea = c->r[11] - 0x44u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x70u;
    c->r[14] = 0x26236a0u; f_283ab44(c);
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x32u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_HI) { c->r[6] = c->r[4]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26236ec; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = __builtin_bswap32(c->r[1]);
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[8] = c->r[0] - c->r[4];
    goto L_2623718;
L_26236ec:;
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[6] << 1);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8);
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = (c->r[0] >> 8);
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[4] = (c->r[2] << 1);
    c->r[0] = (c->r[1] << 1);
    c->r[8] = c->r[0] - (c->r[2] << 1);
L_2623718:;
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2623738; }
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x2623734u; f_284cb74(c);
    goto L_2623964;
L_2623738:;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2623768; }
    c->r[5] = c->r[1];
    c->r[3] = c->r[11] - 0x70u;
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[14] = 0x2623764u; f_284cd84(c);
    goto L_262378c;
L_2623768:;
    { uint32_t ea = c->r[1] + 0x26u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[11] - 0x4au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x5eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x60u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x4cu; ST16(ea, c->r[0]); }
L_262378c:;
    c->r[0] = c->r[9] + 0x10cu;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2623850; }
    { uint32_t ea = c->r[7] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[3] = c->r[8];
    c->r[2] = c->r[0] + c->r[4];
    c->r[0] = c->r[10];
    c->r[14] = 0x26237b4u; f_284cec8(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2623954; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = rev16_32(c->r[0]);
    c->r[3] = revsh32(c->r[0]);
    { uint32_t ea = c->r[11] - 0x40u; ST16(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[11] - 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[11] - 0x2au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[11] - 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = rev16_32(c->r[2]);
    { uint32_t ea = c->r[11] - 0x26u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0xau;
    if (COND_LT) { goto L_26239cc; }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[3] << 1);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[0] >> 8);
    c->r[2] = c->r[2] | (c->r[0] << 8);
    c->r[0] = __builtin_bswap32(c->r[0]);
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[11] - 0x38u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    goto L_2623854;
L_2623850:;
    c->r[4] = 0x0u;
L_2623854:;
    c->r[0] = 0x134u;
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2623898; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + 0x128u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[3] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] - c->r[7];
    goto L_26238b4;
L_2623898:;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
L_26238b4:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[9];
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x114u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[9] + 0x114u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x128u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[7] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[9] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[9] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    c->r[3] = c->r[13] + 0x68u;
    { uint32_t ea = c->r[9] + 0x130u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x7cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[14] = 0x2623948u; f_284d054(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2623970; }
L_2623954:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[4];
L_262395c:;
    c->r[14] = 0x2623960u; f_284cb74(c);
    c->r[6] = 0x0u;
L_2623964:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2623970:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[11] - 0x70u;
    c->r[1] = c->r[7] + 0x14u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    c->r[2] = c->r[8];
    c->r[14] = 0x2623988u; f_284d060(c);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2623a54; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[4] + (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + 0x9u;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[7] = c->r[7] - c->r[4];
    goto L_2623a58;
L_26239cc:;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x38u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x80u; ST32(ea, c->r[2]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2623b18; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    c->r[0] = 0x190u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_2623b24; }
    c->r[8] = c->r[5];
    c->r[0] = c->r[8] + 0x20u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x14u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xcu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x110u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    goto L_2623cdc;
L_2623a54:;
    c->r[7] = 0x8u;
L_2623a58:;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2623a64u; f_262105c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2623abc; }
    { uint32_t ea = c->r[9] + 0x12cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x128u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7] + (c->r[2] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x9u;
    c->r[4] = c->r[2] - c->r[3];
    c->r[7] = (c->r[4] << 2);
    c->r[2] = c->r[7];
    c->r[14] = 0x2623aa0u; f_283ac04(c);
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    c->r[14] = 0x2623ab0u; f_283ac04(c);
    { uint32_t ea = c->r[9] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x2623abcu; f_283aad8(c);
L_2623abc:;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_26243ac; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26243ac; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26243ac; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26240b0; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26243ac; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_262437c; }
    goto L_26243ac;
L_2623b18:;
    c->r[0] = 0x197u;
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    goto L_2623954;
L_2623b24:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0x40u;
    c->r[3] = c->r[5];
    c->r[2] = c->r[0] + 0x14u;
    c->r[0] = c->r[9];
    c->r[14] = 0x2623b3cu; f_284d06c(c);
    c->r[0] = 0x8u;
    c->r[7] = c->r[9];
    c->r[5] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    c->r[1] = c->r[1] & 0xffffffc0u;
    { uint32_t ea = c->r[0] + c->r[5]; ST32(ea, c->r[1]); }
    c->r[0] = 0xcu;
    c->r[2] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[1] + 0x20u;
    c->r[8] = c->r[8] & 0xffffffc0u;
    { uint32_t ea = c->r[0] + c->r[5]; ST32(ea, c->r[8]); }
    c->r[0] = 0x138u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] - c->r[12];
    c->r[14] = 0x2623bb8u; f_284cd9c(c);
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x200u;
    c->r[1] = 0x20u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[1] = c->r[1] & 0xffffffc0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = (uint32_t)((int32_t)c->r[0] >> 10); }
    c->r[0] = c->r[1] + c->r[8];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[1] + 0x20u;
    c->r[8] = c->r[8] & 0xffffffc0u;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[8]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[7] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[7] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] - c->r[1];
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[14] = 0x2623c1cu; f_284cd9c(c);
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x200u;
    c->r[1] = 0x20u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 10);
    c->r[1] = c->r[1] & 0xffffffc0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = (uint32_t)((int32_t)c->r[0] >> 10); }
    c->r[0] = c->r[1] + c->r[8];
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + 0x20u; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x14u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xcu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_2623cdc:;
    c->r[0] = c->r[8] + 0x8u;
    c->r[5] = 0x0u;
    c->r[4] = c->r[13] + 0x7cu;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x4u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x134u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_2623d08:;
    c->r[0] = c->r[11] - 0x88u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[11] - 0x80u;
    c->r[2] = c->r[11] - 0x84u;
    c->r[3] = c->r[11] - 0x86u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x8au;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[11] - 0x81u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x2623d38u; f_284d048(c);
    { uint32_t ea = c->r[11] - 0x86u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = (c->r[7] >> 8) & 0x1u;
    { uint32_t r = c->r[7] & 0xc8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2623d68; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[13] + 0x68u;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x2623d64u; f_284d078(c);
    goto L_2623d7c;
L_2623d68:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[13] + 0x68u;
    c->r[12] = c->r[13] + 0x68u;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
L_2623d7c:;
    c->r[0] = (c->r[7] >> 9) & 0x1u;
    c->r[3] = c->r[8];
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[3] + 0x28u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x4cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x88u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x8au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x84u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[9];
    c->r[3] = c->r[5];
    c->r[14] = 0x2623dc8u; f_284d084(c);
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2624098; }
    { uint32_t ea = c->r[9] + 0x4cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[9] + 0x4cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_2623ea0; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2623e14; }
    { uint32_t ea = c->r[9] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    goto L_2623e18;
L_2623e14:;
    c->r[1] = 0x0u;
L_2623e18:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0xcu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x28u; ST8(ea, c->r[1]); }
L_2623ea0:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = c->r[13] + 0x7cu;
    if (COND_EQ) { goto L_2623f0c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x1u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2623f08; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2623f08; }
    { uint32_t ea = c->r[9] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u - c->r[7];
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
L_2623ee4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[7] = f_adds(c, c->r[7], 0x1u);
    c->r[4] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[4]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[4]); c->r[2] = c->r[2] + 0x2u; }
    if (COND_NE) { goto L_2623ee4; }
    c->r[4] = c->r[13] + 0x7cu;
L_2623f08:;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_2623f0c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[11] - 0x81u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2623d08; }
    { uint32_t ea = c->r[10] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2120u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x90u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x8cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[9] + 0x98u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x2c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2d4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x2e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[3];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x114u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[12];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[14];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[4];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + (c->r[3] << 1);
    { uint32_t ea = c->r[9] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[4] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + (c->r[3] << 1);
    { uint32_t ea = c->r[9] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x124u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[9] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[3];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    c->r[2] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26240cc; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    goto L_26240d0;
L_2624098:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x26240a4u; f_284cb74(c);
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_2624304;
L_26240b0:;
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262437c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    goto L_26243ac;
L_26240cc:;
    c->r[0] = 0x0u;
L_26240d0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x18eu;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x2624198u; f_284d090(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26241f8; }
    { uint32_t ea = c->r[9] + 0x12cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x128u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7] + (c->r[2] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x9u;
    c->r[4] = c->r[2] - c->r[3];
    c->r[7] = (c->r[4] << 2);
    c->r[2] = c->r[7];
    c->r[14] = 0x26241d8u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26241ecu; f_283ac04(c);
    { uint32_t ea = c->r[9] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x26241f8u; f_283aad8(c);
L_26241f8:;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262426c; }
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262426c; }
    { uint32_t ea = c->r[10] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262426c; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262426c; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262426c; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2624280; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_2624280; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_26242ac; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x4du; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_EQ) { goto L_2624280; }
    goto L_2624310;
L_262426c:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2624310; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_26242ac; }
L_2624280:;
    c->r[2] = c->r[9] + 0x2ecu;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0x2624290u; f_284cf34(c);
    { uint32_t ea = c->r[9] + 0x2e8u; ST32(ea, c->r[0]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[10] + 0x4du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    { uint32_t ea = c->r[10] + 0x4du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x44u;
    goto L_26242c8;
L_26242ac:;
    { uint32_t ea = c->r[11] - 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 3); uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x2u;
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
L_26242c8:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x26242ecu; f_284d09c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2624360; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2624304u; f_284cb74(c);
L_2624304:;
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
    goto L_262436c;
L_2624310:;
    c->r[4] = 0x0u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x2624340u; f_284d09c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2624360; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2624358u; f_284cb74(c);
    c->r[0] = 0x0u;
    goto L_262436c;
L_2624360:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[0] = 0x1u;
L_262436c:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2623964; }
    goto L_2624534;
L_262437c:;
    c->r[2] = c->r[9] + 0x2ecu;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0x262438cu; f_284cf34(c);
    { uint32_t ea = c->r[9] + 0x2e8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x44u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x4du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    { uint32_t ea = c->r[10] + 0x4du; ST8(ea, c->r[0]); }
L_26243ac:;
    { uint32_t ea = c->r[9] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2624414; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x26243fcu; f_284d09c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_262446c; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    goto L_262395c;
L_2624414:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[14] = 0x2624428u; f_284d0a8(c);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x2624454u; f_284d09c(c);
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_2624494; }
    c->r[0] = c->r[10];
    goto L_262395c;
L_262446c:;
    c->r[0] = c->r[11] - 0x44u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_2624484; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x2c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_2624484:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[14] = 0x2624494u; f_284d0a8(c);
L_2624494:;
    c->r[0] = 0x18eu;
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[14] = 0x26244ccu; f_284d090(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = 0x190u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    if (COND_EQ) { goto L_2624524; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    goto L_2624528;
L_2624524:;
    c->r[0] = 0x0u;
L_2624528:;
    { uint32_t ea = c->r[9] + 0x194u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[9] + 0x194u; ST32(ea, c->r[0]); }
L_2624534:;
    { uint32_t ea = c->r[9] + 0x214u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2624564; }
    { uint32_t ea = c->r[9] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[2] | c->r[0];
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[3], c->r[1]);
    c->r[0] = c->r[0] & 0xffffff00u;
    if (COND_HI) { c->r[1] = c->r[3]; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[9] + 0x178u; ST32(ea, c->r[0]); }
L_2624564:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2624578; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2624578u; f_284cb74(c);
L_2624578:;
    c->r[6] = c->r[4];
    goto L_2623964;
}
void f_2624580(Cpu *restrict c) {
    FN_ENTER(0x2624580u);
L_2624580:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_26247c8; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26247c8; }
    c->r[0] = 0x134u;
    c->r[14] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[14] + c->r[0]; ST16(ea, c->r[6]); c->r[14] = ea; }
    c->r[0] = 0x1a3u;
    if (COND_LT) { goto L_26247c0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_GT) { goto L_26247c0; }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[8]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[1] = rev16_32(c->r[7]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_2624634; }
    c->r[1] = __builtin_bswap32(c->r[7]);
    c->r[0] = c->r[0] + 0x2u;
    c->r[6] = 0x1u - c->r[6];
    c->r[5] = c->r[5] + 0x2u;
    c->r[7] = (c->r[1] >> 16);
    c->r[1] = c->r[8] + 0x2u;
L_2624614:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = f_adds(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[7]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[7] = v; }
    c->r[7] = __builtin_bswap32(c->r[7]);
    c->r[7] = (c->r[7] >> 16);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_NE) { goto L_2624614; }
L_2624634:;
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[0] = 0x1a2u;
    c->r[1] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_HI) { goto L_26247c0; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[8];
L_262467c:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[2] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26246a0; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_CC) { goto L_262467c; }
    goto L_26246dc;
L_26246a0:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[7] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26246d0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x26246bcu; f_283ad18(c);
    c->r[5] = c->r[5] + c->r[6];
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_CC) { goto L_262467c; }
    goto L_26246dc;
L_26246d0:;
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_CC) { goto L_262467c; }
L_26246dc:;
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_CS) { goto L_262474c; }
    c->r[2] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + c->r[9];
    c->r[6] = 0x0u;
L_26246f8:;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[7] = c->r[5] & 0x10u;
    { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2624728; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_2624738; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + 0x2u;
    c->r[7] = c->r[5] | (c->r[7] << 8);
    c->r[6] = c->r[6] + (uint32_t)(int32_t)(int16_t)(c->r[7]);
    goto L_2624738;
L_2624728:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[6] - c->r[5]; }
    if (COND_NE) { c->r[6] = c->r[5] + c->r[6]; }
L_2624738:;
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); c->r[3] = c->r[3] + 0x4u; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_26246f8; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
L_262474c:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_CS) { goto L_26247c0; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[8] + c->r[9];
    c->r[3] = c->r[3] - 0x1u;
    c->r[6] = 0x0u;
L_2624768:;
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[0] & 0x20u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2624798; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_26247a8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[1] + 0x2u;
    c->r[5] = c->r[4] | (c->r[5] << 8);
    c->r[6] = c->r[6] + (uint32_t)(int32_t)(int16_t)(c->r[5]);
    goto L_26247a8;
L_2624798:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[4] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[6] - c->r[4]; }
    if (COND_NE) { c->r[6] = c->r[4] + c->r[6]; }
L_26247a8:;
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); c->r[7] = c->r[7] + 0x4u; }
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_2624768; }
L_26247c0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26247c8:;
    c->r[1] = 0x134u;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2624810(Cpu *restrict c) {
    FN_ENTER(0x2624810u);
L_2624810:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2624874; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6] + (c->r[2] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x9u;
    c->r[5] = c->r[2] - c->r[3];
    c->r[6] = (c->r[5] << 2);
    c->r[2] = c->r[6];
    c->r[14] = 0x2624858u; f_283ac04(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[14] = 0x2624868u; f_283ac04(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x2624874u; f_283aad8(c);
L_2624874:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2624878(Cpu *restrict c) {
    FN_ENTER(0x2624878u);
L_2624878:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[2] + (c->r[2] << 1);
    c->r[5] = 0x2120u;
    c->r[6] = c->r[1] + 0x1cu;
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t r = c->r[2] * c->r[3] + c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6] + (c->r[12] << 5);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[3] + 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[3] + 0xc8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[3] + 0xccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[3] + 0xd0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[3] + 0xd4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[3] + 0xd8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[3] + 0xe0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[3] + 0xe4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[3] + 0xdcu; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[3] + 0xe8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5] + 0xecu; ST16(ea, c->r[6]); c->r[5] = ea; }
    if (COND_EQ) { goto L_2624998; }
    c->r[2] = c->r[1] + (c->r[12] << 5);
    { uint32_t ea = c->r[2] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2c0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2c4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2d0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2d4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2d8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2dcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x2e0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1] + 0x2e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2624998:;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[6]); }
    c->r[0] = c->r[3] + 0xe4u;
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26249c0(Cpu *restrict c) {
    FN_ENTER(0x26249c0u);
L_26249c0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x68u;
    c->r[4] = c->r[0];
    c->r[0] = 0x52e4c0u;
    c->r[5] = c->r[1];
    c->r[12] = c->r[11] - 0x2cu;
    c->r[8] = c->r[13] + 0x18u;
    c->r[0] = 0x26249e8u + c->r[0];
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x2cu;
    c->r[14] = 0x2624a08u; f_283ab44(c);
    c->r[0] = 0x18eu;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x190u;
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x194u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4eu; ST8(ea, c->r[7]); }
    c->r[0] = 0x2120u;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xe0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xe8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xf0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[5] + 0xfcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[5] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[5] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] + c->r[6];
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[5] + 0x104u; ST32(ea, c->r[2]); }
    c->r[2] = 0x108u;
    { uint32_t ea = c->r[6] + c->r[2]; ST16(ea, c->r[7]); c->r[6] = ea; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[5] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x130u; ST32(ea, c->r[1]); }
    c->r[1] = 0x134u;
    { uint32_t ea = c->r[5] + c->r[1]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2d4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x2e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2124u;
    { uint32_t ea = c->r[5] + 0x2e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_2624bfc; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x2624bf0u; f_284cf04(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2624cbc; }
L_2624bfc:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 1) & 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2624c1c; }
    { uint32_t ea = c->r[5] + 0x218u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[7] = c->r[0] ^ 0x1u; }
L_2624c1c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[9];
    c->r[3] = c->r[8];
    c->r[14] = 0x2624c30u; f_284cd84(c);
    c->r[0] = 0x1u;
    c->r[6] = 0x0u;
    c->r[1] = 0x2u;
    c->r[3] = c->r[11] - 0x28u;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[5] + 0x198u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[11] - 0x38u;
    c->r[1] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x2624c68u; f_284d084(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2624cbc; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2624c9c; }
    { uint32_t ea = c->r[5] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x9u;
    c->r[6] = c->r[1] - c->r[0];
L_2624c9c:;
    { uint32_t ea = c->r[5] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5] + 0x148u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x2624cb8u; f_284cf4c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2624cbc:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2624cc8(Cpu *restrict c) {
    FN_ENTER(0x2624cc8u);
L_2624cc8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[6] = 0x6c0au;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x10000u;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[2]); }
    c->r[0] = 0x1bau;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[6] - c->r[3];
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 10);
    c->r[3] = c->r[2] - (uint32_t)((int32_t)c->r[3] >> 10);
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2a8u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x140u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[6] + 0x8000u;
    c->r[5] = (c->r[5] >> 16);
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[5] = 0x1bcu;
    { uint32_t ea = c->r[4] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8000u;
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + c->r[5]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[6]); }
    c->r[6] = 0x40u;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1ecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x44u;
    { uint32_t ea = c->r[10] + 0x1d4u; ST32(ea, c->r[0]); c->r[10] = ea; }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x30u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x32u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x2au; ST16(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[9] = c->r[10] + 0x34u;
    { uint32_t ea = c->r[10] + 0x2cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x80u;
    { uint32_t ea = c->r[10] + 0x2eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x33u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 16u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); c->r[9] = c->r[9] + 16u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 16u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); c->r[9] = c->r[9] + 16u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); }
    c->r[9] = c->r[12] + c->r[14];
    { uint32_t ea = c->r[10] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2624e98; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_2624e50; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2624ec0; }
    { uint32_t ea = c->r[10] + 0xbcu; uint32_t v = LD32(ea); c->r[6] = v; }
L_2624e20:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = revsh32(c->r[0]);
    c->r[0] = c->r[6];
    c->r[14] = 0x2624e34u; f_284cbb0(c);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); c->r[9] = c->r[9] + 0x4u; }
    c->r[8] = f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_2624e20; }
    goto L_2624ec0;
L_2624e44:;
    c->r[3] = c->r[3] + c->r[1];
    c->r[3] = sdiv32(c->r[3], c->r[2]);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[3]); c->r[9] = c->r[9] + 0x4u; }
L_2624e50:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2624ec0; }
L_2624e58:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[6] = v; }
    c->r[8] = c->r[8] - 0x1u;
    c->r[5] = (c->r[6] >> 8);
    c->r[3] = revsh32(c->r[6]);
    c->r[6] = c->r[5] | (c->r[6] << 8);
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    c->r[6] = (c->r[6] << 16);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_2624e44; }
    c->r[3] = c->r[1] - c->r[3];
    c->r[3] = sdiv32(c->r[3], c->r[2]);
    c->r[3] = 0x0u - c->r[3];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[3]); c->r[9] = c->r[9] + 0x4u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_2624e58; }
    goto L_2624ec0;
L_2624e98:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2624ec0; }
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
L_2624ea4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[3] = v; }
    c->r[8] = f_subs(c, c->r[8], 0x1u);
    c->r[3] = revsh32(c->r[3]);
    { uint32_t r = c->r[3] * c->r[0] + c->r[1]; c->r[3] = r; }
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[3]); c->r[9] = c->r[9] + 0x4u; }
    if (COND_NE) { goto L_2624ea4; }
L_2624ec0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2a9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1a6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2624f0c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1b8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1a6u; ST8(ea, c->r[1]); }
    goto L_2624f10;
L_2624f0c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2624f10:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x2120u;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[4];
    c->r[8] = c->r[10] - 0x2cu;
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = 0x108u;
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[3]; ST16(ea, c->r[1]); c->r[7] = ea; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[2]); }
    c->r[2] = 0x134u;
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2d4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x2e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[7] = (c->r[1] << 2);
    c->r[1] = c->r[7];
    c->r[14] = 0x26250ccu; f_283abec(c);
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x26250d8u; f_283abec(c);
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x26250e4u; f_283abec(c);
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x26250f0u; f_283abec(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2a9u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xe0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_2625124; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_262515c; }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[4] + 0x1b4u; ST32(ea, c->r[3]); }
L_2625124:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x240u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x244u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[1]); }
L_262515c:;
    c->r[1] = 0x2b0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[8];
    c->r[2] = c->r[1] + c->r[2];
    c->r[14] = 0x2625188u; f_284cf40(c);
    { uint32_t ea = c->r[4] + 0x1a4u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x218u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26251b4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; c->r[5] = c->r[5] + 16u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); c->r[10] = c->r[10] + 16u; }
    { uint32_t ea = c->r[5]; c->r[5] = c->r[5] + 16u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); c->r[10] = c->r[10] + 16u; }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
L_26251b4:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26251bc(Cpu *restrict c) {
    FN_ENTER(0x26251bcu);
L_26251bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26251e0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26251e0u; f_284cb74(c);
L_26251e0:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26251ecu; f_284cb74(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284cb74(c);
}
void f_26251fc(Cpu *restrict c) {
    FN_ENTER(0x26251fcu);
L_26251fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x14cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x144u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_2625230; }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = 0x1u; }
L_2625230:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[1] + 0x148u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2625264; }
    c->r[4] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)((int32_t)c->r[12] >> 16);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_EQ) { c->r[4] = 0x7fffu; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_LE) { goto L_2625284; }
L_2625264:;
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_NE) { goto L_2625284; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[14], c->r[5]);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] & (c->r[2] >> 10);
L_2625284:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2625288(Cpu *restrict c) {
    FN_ENTER(0x2625288u);
L_2625288:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x150u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26252dc; }
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x26252b4u; f_284cd9c(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x26252d0u; f_284cd9c(c);
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
L_26252dc:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2625324; }
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x26252f8u; f_284cd9c(c);
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2625314u; f_284cd9c(c);
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    goto L_2625328;
L_2625324:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2625328:;
    c->r[2] = c->r[5] + 0x2000u;
    c->r[1] = 0x0u;
    c->r[5] = c->r[0];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 14);
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[3]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_MI) { c->r[5] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_GT) { c->r[5] = c->r[1]; }
    (void)f_subs(c, c->r[5], 0x10000u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[1] = c->r[5];
    c->r[2] = 0x10u;
    c->r[14] = 0x26253acu; f_284cba4(c);
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26253c0u; f_284cba4(c);
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26253d4u; f_284cba4(c);
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26253e8u; f_284cba4(c);
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[4] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26253fcu; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2625404(Cpu *restrict c) {
    FN_ENTER(0x2625404u);
L_2625404:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xa4u;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2626428; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[4] = 0x4u;
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_262546c; }
    c->r[1] = 0x8u;
    c->r[4] = 0x8u;
    { uint32_t r = c->r[3] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_262546c; }
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = c->r[0] ^ 0x2u;
    if (COND_NE) { c->r[3] = 0x2u; }
    c->r[4] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
L_262546c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_2625530; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[4] = c->r[0];
    c->r[10] = 0x2000u;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x40u);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    if (COND_HI) { goto L_26254ac; }
    c->r[10] = (c->r[0] << 7);
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_CC) { c->r[10] = 0x800u; }
L_26254ac:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[5] = 0x2130u;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2625588; }
L_26254c4:;
    c->r[0] = 0x2424u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xffffu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[0] = c->r[0] + c->r[2];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[9] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[8] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2625650; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2625638; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_262566c;
L_2625530:;
    c->r[1] = 0x24u;
    c->r[5] = 0x24u;
    c->r[14] = 0x262553cu; f_284cbc8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2626428; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x22u; ST16(ea, c->r[1]); }
    goto L_2626428;
L_2625588:;
    c->r[0] = c->r[4];
    c->r[1] = 0x24f0u;
    c->r[14] = 0x2625594u; f_284cb38(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2626428; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2626428; }
    c->r[7] = 0x2404u;
    c->r[8] = 0x0u;
    c->r[5] = 0x2130u;
    c->r[6] = 0x240cu;
    c->r[1] = 0x32u;
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 3);
    c->r[0] = c->r[4];
    c->r[14] = 0x26255f4u; f_284cb38(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2625620; }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2625620:;
    c->r[1] = 0x2424u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26254c4;
L_2625638:;
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0xc00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26262d4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1au);
    if (COND_HI) { goto L_262566c; }
L_2625650:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[9] = c->r[9] - 0x1u; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_GT) { c->r[0] = c->r[0] + 0x1u; }
L_262566c:;
    c->r[6] = c->r[8] - c->r[1];
    c->r[7] = c->r[0] - c->r[9];
    { uint32_t r = c->r[7] * c->r[6]; c->r[0] = r; }
    c->r[5] = c->r[0] + 0x27u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x2625688u; f_284cb38(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2625778; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x26256a0u; f_283abec(c);
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST16(ea, c->r[9]); }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[4] + 0xau; ST16(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1au; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x2428u;
    { uint32_t ea = c->r[4] + 0xeu; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[3] + c->r[1]; ST32(ea, c->r[4]); c->r[3] = ea; }
    c->r[1] = 0x2400u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[3] + c->r[1]; ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = 0x240cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GE) { goto L_262579c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x2404u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = c->r[2] + c->r[1];
    if (COND_EQ) { goto L_2625750; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x2625750u; f_284cb74(c);
L_2625750:;
    c->r[1] = (c->r[4] << 3);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[4]); }
    c->r[14] = 0x2625760u; f_284cb38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2626294; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26257a8;
L_2625778:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->r[0] = 0x2428u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_2626428;
L_262579c:;
    c->r[0] = 0x2404u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
L_26257a8:;
    c->r[0] = c->r[0] + (c->r[4] << 2);
    c->r[1] = 0x2408u;
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); c->r[2] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_26258b0; }
    c->r[2] = c->r[1];
    c->r[7] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
L_26257e8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_HI) { goto L_2625890; }
    c->r[4] = (c->r[4] << 2);
    c->r[5] = 0x2625800u + 0x4u;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->pc = c->r[4] + c->r[5]; switch (c->pc) { case 0x2625814u: goto L_2625814; case 0x262583cu: goto L_262583c; case 0x2625864u: goto L_2625864; case 0x2625898u: goto L_2625898; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2625814:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[5] = v; }
    c->r[4] = f_subs(c, c->r[5], c->r[7]);
    if (COND_MI) { c->r[4] = 0x0u - c->r[4]; }
    c->r[7] = c->r[4] + c->r[12];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[4] = v; }
    c->r[2] = f_subs(c, c->r[4], c->r[2]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[12] = c->r[7] + c->r[2];
    c->r[7] = c->r[5];
    c->r[2] = c->r[4];
L_262583c:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[5] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[6] = v; }
    c->r[4] = f_subs(c, c->r[5], c->r[7]);
    if (COND_MI) { c->r[4] = 0x0u - c->r[4]; }
    c->r[2] = f_subs(c, c->r[6], c->r[2]);
    c->r[7] = c->r[4] + c->r[12];
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[12] = c->r[7] + c->r[2];
    c->r[7] = c->r[5];
    c->r[2] = c->r[6];
L_2625864:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[4] = v; }
    c->r[5] = f_subs(c, c->r[4], c->r[7]);
    if (COND_MI) { c->r[5] = 0x0u - c->r[5]; }
    c->r[7] = c->r[5] + c->r[12];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[5] = v; }
    c->r[2] = f_subs(c, c->r[5], c->r[2]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[12] = c->r[7] + c->r[2];
    c->r[7] = c->r[4];
    c->r[2] = c->r[5];
    goto L_26258a0;
L_2625890:;
    (void)f_subs(c, c->r[4], 0x80u);
    if (COND_NE) { goto L_26258a0; }
L_2625898:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[2] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[7] = v; }
L_26258a0:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_26257e8; }
    goto L_26258b4;
L_26258b0:;
    c->r[12] = 0x0u;
L_26258b4:;
    c->r[0] = c->r[9] + 0x20u;
    c->r[1] = (uint32_t)((int32_t)c->r[12] >> 16);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[12] >> 31);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] + (c->r[0] >> 23);
    c->r[1] = 0x1u;
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 9);
    c->r[0] = 0x2410u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[3] + c->r[0]; ST32(ea, c->r[2]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0xcu;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - 0x410u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_2625920;
L_2625914:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_2625920:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2625958; }
    { uint32_t ea = c->r[8] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_2625958; }
    (void)f_subs(c, c->r[3], 0x8000u);
    if (COND_GT) { goto L_26262c0; }
    c->r[3] = c->r[3] + 0x2000u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_GE) { goto L_2625984; }
    goto L_26261b8;
L_2625958:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_262597c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[2] << 1);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_262597c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_26261b8; }
L_2625984:;
    c->r[5] = c->r[2] - 0x1u;
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
L_262599c:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[1] = 0x404u;
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x26259b0u; f_283abec(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[0] = sdiv32(c->r[0], c->r[4]);
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[3]); }
    c->r[8] = c->r[0] + 0x8000u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] & 0xffff0000u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[1]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_2625a10; }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    c->r[9] = c->r[0] + c->r[1];
    c->r[9] = c->r[9] & 0xffff0000u;
    goto L_2625a14;
L_2625a10:;
    c->r[9] = c->r[3] + c->r[8];
L_2625a14:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x242cu;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = (uint32_t)((int32_t)c->r[9] >> 16);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2625fd0; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[9]); }
L_2625a4c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_2625b00; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x2625a6cu + 0xcu;
    c->r[0] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[12];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2625a88u: goto L_2625a88; case 0x2625b08u: goto L_2625b08; case 0x2625b28u: goto L_2625b28; case 0x2625d14u: goto L_2625d14; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2625a88:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_GT) { c->r[0] = c->r[4]; }
    if (COND_LT) { c->r[1] = c->r[4]; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[10] = v; }
    if (COND_LT) { c->r[0] = c->r[8]; }
    (void)f_subs(c, c->r[1], c->r[9]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    if (COND_GT) { goto L_2625f9c; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_2625f9c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[6];
    c->r[2] = c->r[8];
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2625ae4u; f_262645c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[12] = 0x242cu;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[10]); }
    if (COND_NE) { goto L_2625fa4; }
    goto L_2625914;
L_2625b00:;
    (void)f_subs(c, c->r[1], 0x80u);
    if (COND_NE) { goto L_2625fa4; }
L_2625b08:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    goto L_2625fa4;
L_2625b28:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[7] + 0x6u;
    (void)f_adds(c, c->r[7], 0x5u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2625f94; }
L_2625b78:;
    c->r[8] = c->r[4] - 0x6u;
    c->r[14] = c->r[6];
    c->r[3] = c->r[6] + (c->r[8] << 2);
    { uint32_t ea = c->r[3] + c->r[12]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[0] = c->r[2];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_GT) { c->r[0] = c->r[7]; }
    if (COND_LT) { c->r[0] = c->r[2]; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[9], c->r[0]);
    c->r[10] = c->r[9];
    if (COND_GT) { c->r[6] = c->r[9]; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LT) { c->r[5] = c->r[7]; }
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_LT) { c->r[5] = c->r[9]; }
    c->r[9] = c->r[12];
    if (COND_LT) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[5], c->r[9]);
    if (COND_GT) { goto L_2625cbc; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_2625cbc; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6] + c->r[0];
    c->r[0] = c->r[1] + c->r[6];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[9] = c->r[0] + (uint32_t)((int32_t)c->r[5] >> 1);
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[2] + c->r[7];
    c->r[0] = c->r[7] + c->r[10];
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 1);
    c->r[12] = c->r[5] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[6] = c->r[6] - (uint32_t)((int32_t)c->r[9] >> 1);
    c->r[7] = c->r[7] - (uint32_t)((int32_t)c->r[12] >> 1);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_MI) { c->r[7] = 0x0u - c->r[7]; }
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[14] = c->r[7];
    if (COND_GT) { c->r[14] = c->r[6]; }
    if (COND_GT) { c->r[6] = c->r[7]; }
    c->r[7] = (c->r[8] << 2);
    (void)f_subs(c, c->r[7], 0xbcu);
    if (COND_GT) { goto L_2625cd8; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[7] = c->r[14] + (uint32_t)((int32_t)c->r[6] >> 3);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LT) { goto L_2625cd8; }
    c->r[7] = (uint32_t)((int32_t)c->r[12] >> 1);
    c->r[12] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[9] >> 1);
    c->r[4] = c->r[4] + 0x6u;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[3] + 0x20u;
    c->r[12] = 0x242cu;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2625b78; }
    goto L_2625d0c;
L_2625cbc:;
    c->r[4] = c->r[8];
    c->r[8] = c->r[10];
    c->r[6] = c->r[14];
    c->r[12] = 0x242cu;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2625b78; }
    goto L_2625d0c;
L_2625cd8:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x2625cecu; f_262645c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[8];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = c->r[10];
    c->r[12] = 0x242cu;
    if (COND_EQ) { goto L_2625914; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2625b78; }
L_2625d0c:;
    c->r[7] = c->r[4];
    goto L_2625fa4;
L_2625d14:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[7] + 0x8u;
    (void)f_adds(c, c->r[7], 0x7u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0xcu;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = c->r[3] + 0xcu;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2625f94; }
L_2625d74:;
    c->r[5] = c->r[4] - 0x8u;
    c->r[10] = c->r[6] + (c->r[5] << 2);
    { uint32_t ea = c->r[10] + c->r[12]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[0] = c->r[7];
    c->r[3] = c->r[7];
    if (COND_GT) { c->r[0] = c->r[1]; }
    if (COND_LT) { c->r[0] = c->r[7]; }
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[2] = c->r[0];
    if (COND_GT) { c->r[2] = c->r[6]; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[3] = c->r[1]; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    if (COND_LT) { c->r[3] = c->r[6]; }
    (void)f_subs(c, c->r[8], c->r[2]);
    c->r[0] = c->r[2];
    if (COND_GT) { c->r[0] = c->r[8]; }
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { c->r[3] = c->r[8]; }
    (void)f_subs(c, c->r[3], c->r[9]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    if (COND_GT) { goto L_2625ee0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_2625ee0; }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[4]); }
    c->r[9] = c->r[1] + c->r[6];
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[14]); }
    c->r[2] = c->r[14] + c->r[0];
    c->r[8] = c->r[0] + c->r[4];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[8] >> 1);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] - (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = c->r[7] + c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[11] - 0x54u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[9] >> 1);
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    c->r[14] = 0x2625e4cu; f_284d0b4(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = (uint32_t)((int32_t)c->r[8] >> 1);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)((int32_t)c->r[9] >> 1);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] - (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[2] = c->r[6] + c->r[8];
    c->r[9] = c->r[2];
    c->r[4] = c->r[1] + (uint32_t)((int32_t)c->r[9] >> 1);
    c->r[1] = c->r[6] - (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[14] = 0x2625e88u; f_284d0b4(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[5]; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_2625eac; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[10] - c->r[0];
    (void)f_subs(c, c->r[0], 0xbdu);
    if (COND_LT) { goto L_2625ef4; }
L_2625eac:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x2625ec8u; f_262645c(c);
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[12] = 0x242cu;
    if (COND_NE) { goto L_2625f84; }
    goto L_2625914;
L_2625ee0:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[5];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2625d74; }
    goto L_2625f8c;
L_2625ef4:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[14] = c->r[10] + 0x2cu;
    c->r[12] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[9] >> 1);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[10] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[12] = 0x242cu;
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[4] + 0x8u;
L_2625f84:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2625d74; }
L_2625f8c:;
    c->r[7] = c->r[4];
    goto L_2625fa4;
L_2625f94:;
    c->r[7] = c->r[4];
    goto L_2625fa4;
L_2625f9c:;
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[10]); }
L_2625fa4:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { goto L_2625a4c; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_2625fd4;
L_2625fd0:;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
L_2625fd4:;
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[9] >> 16);
    c->r[10] = c->r[0] - (uint32_t)((int32_t)c->r[3] >> 16);
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_LT) { goto L_2626190; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2626190; }
    (void)f_subs(c, c->r[10], 0xffu);
    if (COND_HI) { goto L_2626190; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[0] = (c->r[6] << 3);
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_2626110; }
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[9] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[8] = 0x1u;
    c->r[0] = 0x1u - c->r[0];
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[9]; c->r[0] = r; }
    c->r[5] = c->r[0] + 0x24u;
L_2626048:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2626054u; f_283abec(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2000u;
    c->r[12] = 0x0u;
    c->r[0] = c->r[0] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26260b8; }
L_2626070:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[1] = c->r[12]; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GE) { goto L_26260ac; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[4] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_26260ac:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2626070; }
L_26260b8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_26260c0:;
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26260e8; }
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 8);
    (void)f_subs(c, c->r[3], 0xffu);
    c->r[3] = 0xffu;
    if (COND_LT) { c->r[3] = (uint32_t)((int32_t)c->r[2] >> 8); }
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[3]); }
L_26260e8:;
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[0] = c->r[2] + c->r[0];
    if (COND_NE) { goto L_26260c0; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[5] = c->r[5] + c->r[6];
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_2626048; }
    goto L_2626190;
L_2626110:;
    c->r[8] = 0x1u;
L_2626114:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2626120u; f_283abec(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2000u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2626184; }
L_262613c:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[1] = c->r[5]; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GE) { goto L_2626178; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[4] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_2626178:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262613c; }
L_2626184:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_2626114; }
L_2626190:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_262599c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_26261b8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26261e0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_26261fc;
L_26261e0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[8];
    c->r[0] = c->r[5];
    c->r[14] = 0x26261f4u; f_284d0c0(c);
    c->r[8] = c->r[0];
    c->r[4] = 0x0u;
L_26261fc:;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2626224; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26262ec; }
L_2626224:;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262625c; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_26262ec; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1au);
    if (COND_HI) { goto L_26262ec; }
    c->r[1] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xc00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[1] = 0x1u; }
L_262625c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26262ec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_26262ec; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_26262dc; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_26262ec; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0x2626290u; f_284cfac(c);
    goto L_26262ec;
L_2626294:;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x26262bcu; f_284cb2c(c);
    goto L_2626428;
L_26262c0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x20cu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    goto L_2626428;
L_26262d4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_262566c;
L_26262dc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[8];
    c->r[0] = c->r[5];
    c->r[14] = 0x26262ecu; f_284cfa0(c);
L_26262ec:;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262630c; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2626318; }
    c->r[0] = c->r[8];
    c->r[14] = 0x2626308u; f_284d0cc(c);
    goto L_2626314;
L_262630c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x2626314u; f_284d0d8(c);
L_2626314:;
    c->r[8] = c->r[0];
L_2626318:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2626348; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2626358; }
    { uint32_t r = c->r[0] & 0xc0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2626434; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    goto L_2626364;
L_2626348:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[2] = 0x1u;
    goto L_2626368;
L_2626358:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x2u;
L_2626364:;
    c->r[0] = c->r[5];
L_2626368:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x2626370u; f_284cf70(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[5];
L_2626378:;
    { uint32_t ea = c->r[0] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262638c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2626408;
L_262638c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_26263b4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_26263c0; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    goto L_26263dc;
L_26263b4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    goto L_26263ec;
L_26263c0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x19u);
    if (COND_HI) { c->r[1] = 0x3u; }
    if (COND_HI) { c->r[2] = 0x3u; }
    if (COND_LS) { c->r[1] = 0x2u; }
    if (COND_LS) { c->r[2] = 0x2u; }
    c->r[0] = c->r[5];
L_26263dc:;
    c->r[3] = c->r[8];
    c->r[14] = 0x26263e4u; f_284cf7c(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[5];
L_26263ec:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2626408; }
    c->r[1] = c->r[8];
    c->r[14] = 0x2626400u; f_284cb2c(c);
    c->r[8] = 0x0u;
    goto L_2626428;
L_2626408:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_2626428; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_284d0c0(c);
L_2626428:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2626434:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_2626378; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[8];
    c->r[14] = 0x2626450u; f_284d0e4(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2626378;
}
void f_262645c(Cpu *restrict c) {
    FN_ENTER(0x262645cu);
L_262645c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x3cu;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[2];
    c->r[5] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_26279d4; }
    c->r[8] = c->r[1];
    c->r[0] = 0x1u;
    c->r[4] = c->r[7];
    c->r[2] = c->r[5];
    if (COND_GT) { c->r[8] = c->r[3]; }
    if (COND_GT) { c->r[3] = c->r[1]; }
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[1] = 0x2420u;
    if (COND_GT) { c->r[0] = ~0x0u; }
    if (COND_GT) { c->r[4] = c->r[6]; }
    c->r[10] = c->r[3] - c->r[8];
    if (COND_GT) { c->r[6] = c->r[7]; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); c->r[2] = ea; }
    c->r[1] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_26264e4; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_26264f4; }
    c->r[0] = c->r[8];
    c->r[2] = c->r[3] - 0x1u;
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xffff0000u;
    goto L_2626504;
L_26264e4:;
    c->r[0] = c->r[8];
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[2] = c->r[0];
    goto L_2626504;
L_26264f4:;
    c->r[2] = c->r[3];
    c->r[0] = c->r[8] - 0x1u;
    c->r[2] = c->r[2] & 0xffff0000u;
    c->r[0] = c->r[0] & 0xffff0000u;
L_2626504:;
    c->r[5] = c->r[1] ^ c->r[4];
    c->r[1] = 0x0u;
    c->r[9] = c->r[6] - c->r[4];
    (void)f_subs(c, c->r[1], (c->r[5] >> 16));
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[2]); }
    if (COND_NE) { goto L_2626574; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2400u;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[14] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[14], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    c->r[0] = 0x241cu;
    c->r[7] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - (uint32_t)((int32_t)c->r[7] >> 17);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_26279d4; }
    c->r[3] = c->r[3] + c->r[8];
    c->r[12] = (uint32_t)((int32_t)c->r[7] >> 17);
    (void)f_subs(c, c->r[9], 0x10000u);
    c->r[7] = (c->r[3] >> 1) & 0xffffu;
    c->r[7] = 0x10000u - c->r[7];
    if (COND_LT) { goto L_26266e4; }
    c->r[5] = c->r[7];
    goto L_26266fc;
L_2626574:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[8]);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_262663c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x2410u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_26265bc; }
    c->r[0] = 0x2418u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GT) { c->r[6] = c->r[0]; }
    c->r[0] = 0x2414u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { c->r[4] = c->r[0]; }
L_26265bc:;
    c->r[0] = 0x2400u;
    c->r[12] = c->r[2];
    c->r[7] = c->r[4] + 0x10000u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[14] = v; }
    c->r[7] = c->r[7] & 0xffff0000u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[4] = c->r[7];
    if (COND_GT) { c->r[4] = c->r[6]; }
    (void)f_subs(c, c->r[14], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = 0x241cu;
    c->r[10] = c->r[2];
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[5] = v; }
    c->r[3] = c->r[4] + c->r[1];
    c->r[2] = c->r[5] - (uint32_t)((int32_t)c->r[3] >> 17);
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_HI) { goto L_2626938; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 17);
    c->r[3] = c->r[4] - c->r[1];
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[3], 0x10000u);
    c->r[5] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = 0x10000u - c->r[5];
    if (COND_LT) { goto L_26268c4; }
    c->r[8] = c->r[2];
    goto L_26268dc;
L_262663c:;
    (void)f_subs(c, c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_2626754; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x262665cu; f_284cba4(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[0];
    c->r[0] = 0x2410u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_26267f0; }
    c->r[0] = 0x2414u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1];
    (void)f_subs(c, c->r[1], c->r[4]);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GE) { goto L_26266b4; }
    c->r[0] = c->r[2] - c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = 0x10u;
    c->r[14] = 0x26266a4u; f_284cbb0(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4];
    c->r[8] = c->r[1] - c->r[0];
L_26266b4:;
    c->r[0] = 0x2418u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_LE) { goto L_2626a54; }
    c->r[4] = c->r[3];
    c->r[1] = c->r[10];
    c->r[2] = 0x10u;
    c->r[0] = c->r[7] - c->r[4];
    c->r[14] = 0x26266d8u; f_284cbb0(c);
    c->r[12] = c->r[7];
    c->r[1] = c->r[0] + c->r[8];
    goto L_2626a5c;
L_26266e4:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[5], (c->r[7] >> 16));
    c->r[5] = c->r[9];
    if (COND_EQ) { { uint32_t r = c->r[7] * c->r[9]; c->r[7] = r; } }
    if (COND_EQ) { c->r[7] = c->r[7] + 0x8000u; }
    if (COND_EQ) { c->r[5] = (c->r[7] >> 16); }
L_26266fc:;
    c->r[7] = c->r[14] + 0x1u;
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 17);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[14] << 4);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6];
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[7] + c->r[2]; ST16(ea, c->r[3]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x2000u;
    if (COND_LE) { c->r[5] = 0x0u - c->r[5]; }
    if (COND_LE) { c->r[9] = 0x0u - c->r[9]; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2626754:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[2] = 0x10u;
    c->r[14] = 0x2626764u; f_284cba4(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[0], (c->r[5] >> 16));
    if (COND_NE) { goto L_26267fc; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    if (COND_LT) { goto L_2626b00; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[6] = c->r[8] + 0x10000u;
    c->r[2] = 0x10u;
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[6] & 0xffff0000u;
    c->r[0] = c->r[6] - c->r[8];
    c->r[1] = c->r[10];
    c->r[14] = 0x26267a8u; f_284cbb0(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x2400u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[8] = v; }
    c->r[3] = c->r[1] + c->r[4];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[8], 0x200u);
    if (COND_GE) { goto L_26272e8; }
    c->r[0] = 0x241cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[3] + c->r[4];
    c->r[14] = c->r[0] - (uint32_t)((int32_t)c->r[5] >> 17);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[14], 0xffu);
    if (COND_LS) { goto L_2626d38; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_26272e8;
L_26267f0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_2626a5c;
L_26267fc:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_26279d0; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[2] = 0x10u;
    c->r[14] = 0x2626818u; f_284cba4(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2410u;
    c->r[1] = c->r[6] + 0x40000000u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x80000000u);
    c->r[1] = 0x0u;
    if (COND_HI) { c->r[1] = 0x1u; }
    c->r[6] = sh_asr(c->r[6], c->r[1]);
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_2626b8c; }
    c->r[0] = 0x2414u;
    c->r[2] = c->r[4];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[2], c->r[4]);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_GE) { goto L_262688c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] - c->r[4];
    c->r[2] = 0x10u;
    c->r[14] = 0x262687cu; f_284cbb0(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[1] - c->r[0];
    c->r[1] = c->r[4];
L_262688c:;
    c->r[0] = 0x2418u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_LE) { goto L_2626d5c; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[0] = c->r[9] - c->r[4];
    c->r[14] = 0x26268b0u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[8];
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    goto L_2626d68;
L_26268c4:;
    c->r[5] = 0x0u;
    c->r[8] = c->r[3];
    (void)f_subs(c, c->r[5], (c->r[2] >> 16));
    if (COND_EQ) { { uint32_t r = c->r[3] * c->r[2]; c->r[5] = r; } }
    if (COND_EQ) { c->r[5] = c->r[5] + 0x8000u; }
    if (COND_EQ) { c->r[8] = (c->r[5] >> 16); }
L_26268dc:;
    c->r[5] = c->r[14] + 0x1u;
    c->r[14] = (c->r[14] << 4);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = (c->r[2] >> 16);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[5] + c->r[14]; ST16(ea, c->r[6]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[6] = 0x2000u;
    if (COND_LE) { c->r[8] = 0x0u - c->r[8]; }
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[5]); }
L_2626938:;
    c->r[3] = c->r[4] + 0x10000u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GE) { goto L_2626a00; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = ~c->r[6];
    c->r[7] = ~c->r[7];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GT) { c->r[7] = c->r[3]; }
    c->r[3] = 0xfffeu;
    c->r[7] = c->r[3] - (c->r[7] << 1);
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[14] = (c->r[1] >> 16);
    c->r[8] = 0x10000u - c->r[3];
L_262696c:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - (uint32_t)((int32_t)c->r[7] >> 17);
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_HI) { goto L_26269e4; }
    c->r[2] = c->r[5] + 0x1u;
    c->r[6] = (uint32_t)((int32_t)c->r[7] >> 17);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[5] << 4);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[14]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = c->r[8];
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    if (COND_GT) { c->r[2] = 0x10000u; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + (c->r[3] << 2);
    c->r[1] = 0x2000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
L_26269e4:;
    c->r[2] = c->r[4] + 0x20000u;
    c->r[3] = c->r[4] + 0x10000u;
    c->r[7] = c->r[7] + 0x20000u;
    (void)f_subs(c, c->r[2], c->r[9]);
    c->r[4] = c->r[3];
    if (COND_LT) { goto L_262696c; }
    goto L_2626a04;
L_2626a00:;
    c->r[3] = c->r[4];
L_2626a04:;
    c->r[1] = c->r[9];
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LE) { goto L_26279d0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[3] + c->r[9];
    c->r[0] = c->r[0] - (uint32_t)((int32_t)c->r[6] >> 17);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_26279d0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[9] - c->r[3];
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 17);
    (void)f_subs(c, c->r[2], 0x10000u);
    c->r[3] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[5] = 0x10000u - c->r[3];
    if (COND_LT) { goto L_2627204; }
    c->r[3] = c->r[5];
    goto L_262721c;
L_2626a54:;
    c->r[12] = c->r[2];
    c->r[4] = c->r[3];
L_2626a5c:;
    c->r[5] = c->r[4] + 0x10000u;
    c->r[2] = c->r[1];
    c->r[14] = c->r[12];
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    c->r[5] = c->r[5] & 0xffff0000u;
    (void)f_subs(c, c->r[5], c->r[12]);
    if (COND_GT) { goto L_2626a98; }
    c->r[0] = c->r[5] - c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = 0x10u;
    c->r[14] = 0x2626a8cu; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[0] + c->r[8];
    c->r[14] = c->r[5];
L_2626a98:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2400u;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[6], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    c->r[3] = 0x241cu;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[4] = c->r[14] + c->r[1];
    c->r[3] = c->r[3] - (uint32_t)((int32_t)c->r[4] >> 17);
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_HI) { goto L_2626c04; }
    c->r[8] = c->r[2] + c->r[8];
    c->r[9] = (uint32_t)((int32_t)c->r[4] >> 17);
    c->r[5] = c->r[14] - c->r[1];
    c->r[4] = (c->r[8] >> 1) & 0xffffu;
    (void)f_subs(c, c->r[5], 0x10000u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[4] = 0x10000u - c->r[4];
    if (COND_LT) { goto L_2626b94; }
    c->r[7] = c->r[4];
    goto L_2626bac;
L_2626b00:;
    c->r[10] = c->r[8] - 0x1u;
    c->r[9] = c->r[8];
    c->r[2] = 0x10u;
    c->r[6] = c->r[10];
    c->r[6] = c->r[6] & 0xffff0000u;
    c->r[0] = c->r[6] - c->r[8];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x2626b24u; f_284cbb0(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x2400u;
    c->r[14] = c->r[5];
    c->r[1] = c->r[4];
    c->r[12] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[14] = ea; c->r[4] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], 0x200u);
    if (COND_GE) { goto L_2627614; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    c->r[0] = 0x241cu;
    c->r[2] = c->r[12] + c->r[1];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] - (uint32_t)((int32_t)c->r[2] >> 17);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[10], 0xffu);
    if (COND_HI) { goto L_2627610; }
    c->r[9] = c->r[6] + c->r[9];
    c->r[1] = (uint32_t)((int32_t)c->r[2] >> 17);
    (void)f_subs(c, c->r[3], 0x10000u);
    c->r[2] = (c->r[9] >> 1) & 0xffffu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[5] = 0x10000u - c->r[2];
    if (COND_LT) { goto L_2627594; }
    c->r[2] = c->r[5];
    goto L_26275ac;
L_2626b8c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2626d6c;
L_2626b94:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[7], (c->r[4] >> 16));
    c->r[7] = c->r[5];
    if (COND_EQ) { { uint32_t r = c->r[4] * c->r[5]; c->r[4] = r; } }
    if (COND_EQ) { c->r[4] = c->r[4] + 0x8000u; }
    if (COND_EQ) { c->r[7] = (c->r[4] >> 16); }
L_2626bac:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[6] + 0x1u;
    c->r[9] = (c->r[6] << 4);
    c->r[6] = (uint32_t)((int32_t)c->r[8] >> 17);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[1];
    c->r[3] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[9]; ST16(ea, c->r[6]); c->r[4] = ea; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LE) { c->r[7] = 0x0u - c->r[7]; }
    if (COND_LE) { c->r[5] = 0x0u - c->r[5]; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = 0x2000u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[4]); }
L_2626c04:;
    c->r[3] = c->r[14] + 0x10000u;
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_GE) { goto L_2626cdc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = 0x10000u;
    c->r[5] = c->r[10] + (c->r[2] << 1);
    c->r[9] = (c->r[10] << 1);
    c->r[6] = c->r[3] + (c->r[14] << 1);
L_2626c24:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - (uint32_t)((int32_t)c->r[6] >> 17);
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_HI) { goto L_2626cb8; }
    c->r[3] = c->r[4] + 0x1u;
    c->r[12] = c->r[10];
    c->r[1] = (uint32_t)((int32_t)c->r[6] >> 17);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[4] << 4);
    c->r[4] = (uint32_t)((int32_t)c->r[5] >> 17);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8] + c->r[3]; ST16(ea, c->r[4]); c->r[8] = ea; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[5] >> 1) & 0xffffu;
    c->r[3] = 0x10000u - c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x2000u;
    if (COND_GT) { c->r[1] = 0x10000u; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + (c->r[7] << 2);
    c->r[10] = c->r[12];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2626cb8:;
    c->r[1] = c->r[14] + 0x20000u;
    c->r[7] = c->r[14] + 0x10000u;
    c->r[2] = c->r[2] + c->r[10];
    c->r[5] = c->r[5] + c->r[9];
    c->r[6] = c->r[6] + 0x20000u;
    (void)f_subs(c, c->r[1], c->r[12]);
    c->r[14] = c->r[7];
    if (COND_LT) { goto L_2626c24; }
    goto L_2626ce4;
L_2626cdc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[14];
L_2626ce4:;
    (void)f_subs(c, c->r[12], c->r[7]);
    if (COND_LE) { goto L_26279d0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[7] + c->r[12];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - (uint32_t)((int32_t)c->r[6] >> 17);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_26279d0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[12] - c->r[7];
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 17);
    (void)f_subs(c, c->r[7], 0x10000u);
    c->r[2] = c->r[2] + c->r[1];
    c->r[1] = (c->r[2] >> 1) & 0xffffu;
    c->r[4] = 0x10000u - c->r[1];
    if (COND_LT) { goto L_26278fc; }
    c->r[5] = c->r[4];
    goto L_2627914;
L_2626d38:;
    c->r[2] = (uint32_t)((int32_t)c->r[5] >> 17);
    c->r[4] = c->r[6] + c->r[9];
    (void)f_subs(c, c->r[1], 0x10000u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[5] = (c->r[4] >> 1) & 0xffffu;
    c->r[9] = 0x10000u - c->r[5];
    if (COND_LT) { goto L_2627270; }
    c->r[12] = c->r[9];
    goto L_2627288;
L_2626d5c:;
    c->r[0] = c->r[2];
    c->r[6] = c->r[7];
    c->r[4] = c->r[1];
L_2626d68:;
    c->r[9] = 0x0u;
L_2626d6c:;
    c->r[7] = c->r[4] + 0x10000u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[2] = 0x10u;
    c->r[7] = c->r[7] & 0xffff0000u;
    if (COND_LE) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[0] = c->r[7] - c->r[4];
    if (COND_GT) { c->r[9] = 0x1u; }
    c->r[14] = 0x2626d98u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    if (COND_GT) { c->r[0] = 0x10000u; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    if (COND_GT) { c->r[0] = 0x10000u; }
    c->r[10] = c->r[8] + c->r[0];
    c->r[10] = c->r[10] & 0xffff0000u;
    c->r[0] = c->r[10] - c->r[8];
    c->r[14] = 0x2626dccu; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { (void)f_subs(c, c->r[14], c->r[2]); }
    if (COND_LE) { goto L_2626e5c; }
    c->r[5] = c->r[4];
    c->r[3] = c->r[8];
L_2626de8:;
    (void)f_subs(c, c->r[2], c->r[5]);
    c->r[4] = c->r[5];
    if (COND_EQ) { { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[3], c->r[0]); }
    if (COND_EQ) { goto L_26279d0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2400u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    c->r[0] = 0x241cu;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[2];
    c->r[2] = c->r[4] + c->r[6];
    c->r[0] = c->r[0] - (uint32_t)((int32_t)c->r[2] >> 17);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_26279d0; }
    c->r[12] = (uint32_t)((int32_t)c->r[2] >> 17);
    c->r[2] = c->r[6] - c->r[4];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], 0x10000u);
    c->r[6] = c->r[3] + c->r[6];
    c->r[5] = (c->r[6] >> 1) & 0xffffu;
    c->r[4] = 0x10000u - c->r[5];
    if (COND_LT) { goto L_2627968; }
    c->r[5] = c->r[4];
    goto L_2627980;
L_2626e5c:;
    c->r[0] = 0x241cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[8];
    c->r[0] = 0x0u - c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x2400u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_2626e90:;
    c->r[3] = c->r[7];
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_2626fb0; }
    c->r[7] = 0x0u - c->r[14];
L_2626ea8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[14];
    c->r[1] = 0x0u;
    c->r[5] = c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x200u);
    if (COND_GE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { goto L_26270f8; }
    (void)f_subs(c, c->r[12], 0x200u);
    if (COND_GE) { goto L_262740c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 17);
    (void)f_subs(c, c->r[10], 0xffu);
    if (COND_HI) { goto L_2626f8c; }
    c->r[6] = c->r[8] + c->r[5];
    c->r[14] = (uint32_t)((int32_t)c->r[0] >> 17);
    c->r[0] = c->r[3] - c->r[4];
    c->r[9] = c->r[4];
    c->r[2] = (c->r[6] >> 1) & 0xffffu;
    (void)f_subs(c, c->r[0], 0x10000u);
    c->r[2] = 0x10000u - c->r[2];
    if (COND_LT) { goto L_2626f18; }
    c->r[4] = c->r[2];
    goto L_2626f30;
L_2626f18:;
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], (c->r[2] >> 16));
    if (COND_EQ) { { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; } }
    if (COND_EQ) { c->r[2] = c->r[2] + 0x8000u; }
    if (COND_EQ) { c->r[4] = (c->r[2] >> 16); }
L_2626f30:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[12] + 0x1u;
    c->r[12] = (c->r[12] << 4);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 17);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + c->r[12]; ST16(ea, c->r[6]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LE) { c->r[4] = 0x0u - c->r[4]; }
    if (COND_LE) { c->r[0] = c->r[9] + c->r[7]; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[10] << 2);
    c->r[1] = 0x2000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_2626f8c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[3] + c->r[6];
    c->r[7] = c->r[7] - c->r[6];
    c->r[8] = c->r[5];
    c->r[4] = c->r[3];
    (void)f_subs(c, c->r[14], c->r[2]);
    c->r[10] = c->r[5] + c->r[0];
    if (COND_LE) { goto L_2626ea8; }
    goto L_2627584;
L_2626fb0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x200u);
    if (COND_GE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_LT) { goto L_2627104; }
    c->r[7] = 0x0u - c->r[14];
L_2626fd0:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262740c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + c->r[14];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 17);
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_2627094; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 17);
    c->r[2] = c->r[8] + c->r[10];
    c->r[3] = c->r[14] - c->r[4];
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[4] = (c->r[2] >> 1) & 0xffffu;
    (void)f_subs(c, c->r[3], 0x10000u);
    c->r[5] = 0x10000u - c->r[4];
    if (COND_LT) { goto L_262701c; }
    c->r[4] = c->r[5];
    goto L_2627034;
L_262701c:;
    c->r[0] = 0x0u;
    c->r[4] = c->r[3];
    (void)f_subs(c, c->r[0], (c->r[5] >> 16));
    if (COND_EQ) { { uint32_t r = c->r[5] * c->r[3]; c->r[4] = r; } }
    if (COND_EQ) { c->r[4] = c->r[4] + 0x8000u; }
    if (COND_EQ) { c->r[4] = (c->r[4] >> 16); }
L_2627034:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[12] + 0x1u;
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 17);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[12] << 4);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[2]); c->r[5] = ea; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[6] + (c->r[1] << 2);
    c->r[1] = 0x2000u;
    if (COND_LE) { c->r[4] = 0x0u - c->r[4]; }
    if (COND_LE) { c->r[3] = c->r[9] + c->r[7]; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2627094:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[14] + c->r[6];
    c->r[4] = c->r[14];
    c->r[7] = c->r[7] - c->r[6];
    c->r[8] = c->r[10];
    c->r[14] = c->r[0];
    c->r[2] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[12], 0x200u);
    if (COND_GE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GE) { goto L_2626fd0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[2];
    c->r[14] = c->r[0];
    c->r[4] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262710c; }
    goto L_262740c;
L_26270f8:;
    c->r[14] = c->r[3];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[5];
L_2627104:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_262740c; }
L_262710c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 17);
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_26271c4; }
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 17);
    c->r[0] = c->r[3] - c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x10000u);
    c->r[3] = c->r[3] + c->r[8];
    c->r[4] = (c->r[3] >> 1) & 0xffffu;
    c->r[5] = 0x10000u - c->r[4];
    if (COND_LT) { goto L_262714c; }
    c->r[4] = c->r[5];
    goto L_2627164;
L_262714c:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[4], (c->r[5] >> 16));
    c->r[4] = c->r[0];
    if (COND_EQ) { { uint32_t r = c->r[5] * c->r[0]; c->r[4] = r; } }
    if (COND_EQ) { c->r[4] = c->r[4] + 0x8000u; }
    if (COND_EQ) { c->r[4] = (c->r[4] >> 16); }
L_2627164:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[12] + 0x1u;
    c->r[7] = (c->r[12] << 4);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 17);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[7]; ST16(ea, c->r[3]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LE) { c->r[4] = 0x0u - c->r[4]; }
    if (COND_LE) { c->r[0] = 0x0u - c->r[0]; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + (c->r[1] << 2);
    c->r[1] = 0x2000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
L_26271c4:;
    c->r[7] = c->r[3] + 0x10000u;
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[4] = c->r[5];
    if (COND_GT) { c->r[9] = 0x1u; }
    c->r[1] = c->r[3] + c->r[0];
    c->r[8] = c->r[3];
    if (COND_LE) { goto L_2626e90; }
    (void)f_subs(c, c->r[14], c->r[2]);
    c->r[8] = c->r[3];
    c->r[4] = c->r[5];
    if (COND_LE) { goto L_2626e90; }
    goto L_2626de8;
L_2627204:;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[3], (c->r[5] >> 16));
    c->r[3] = c->r[2];
    if (COND_EQ) { { uint32_t r = c->r[2] * c->r[5]; c->r[3] = r; } }
    if (COND_EQ) { c->r[3] = c->r[3] + 0x8000u; }
    if (COND_EQ) { c->r[3] = (c->r[3] >> 16); }
L_262721c:;
    c->r[5] = c->r[7] + 0x1u;
    c->r[1] = (c->r[7] << 4);
    c->r[7] = (c->r[4] >> 16);
    { uint32_t ea = c->r[12]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4];
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[5] + c->r[1]; ST16(ea, c->r[7]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x2000u;
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    goto L_26279d0;
L_2627270:;
    c->r[5] = 0x0u;
    c->r[12] = c->r[1];
    (void)f_subs(c, c->r[5], (c->r[9] >> 16));
    if (COND_EQ) { { uint32_t r = c->r[1] * c->r[9]; c->r[5] = r; } }
    if (COND_EQ) { c->r[5] = c->r[5] + 0x8000u; }
    if (COND_EQ) { c->r[12] = (c->r[5] >> 16); }
L_2627288:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[8] + 0x1u;
    c->r[9] = (c->r[8] << 4);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 17);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[8];
    c->r[5] = c->r[8] + (c->r[14] << 2);
    { uint32_t ea = c->r[2] + c->r[9]; ST16(ea, c->r[4]); c->r[2] = ea; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[4] = c->r[1];
    if (COND_LE) { c->r[12] = 0x0u - c->r[12]; }
    if (COND_LE) { c->r[4] = 0x0u - c->r[4]; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[4]); }
    c->r[4] = 0x2000u;
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    c->r[5] = c->r[8];
L_26272e8:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[2] = c->r[6] + 0x10000u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_GE) { goto L_26273f8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x241cu;
    (void)f_subs(c, c->r[10], 0x10000u);
    c->r[12] = c->r[5] + c->r[0];
    c->r[0] = 0x0u - c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2627418; }
    c->r[0] = ~0x1u;
    c->r[2] = ~c->r[7];
    c->r[8] = (c->r[10] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = ~c->r[1];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - (c->r[2] << 1);
    c->r[2] = 0x10000u;
    c->r[1] = (c->r[1] << 1);
    c->r[1] = (c->r[1] & 0xfffe0000u) | ((c->r[2] << 0) & 0x1ffffu);
L_2627348:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x200u);
    if (COND_GE) { goto L_262740c; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[10] + c->r[0];
    c->r[4] = c->r[4] - (uint32_t)((int32_t)c->r[5] >> 17);
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_HI) { goto L_26273d0; }
    c->r[7] = c->r[2] + 0x1u;
    c->r[10] = (uint32_t)((int32_t)c->r[5] >> 17);
    c->r[2] = (c->r[2] << 4);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[7]); }
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 17);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[7]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = (c->r[1] >> 1) & 0xffffu;
    c->r[7] = 0x10000u - c->r[7];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LE) { c->r[7] = 0x0u - c->r[7]; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_GT) { c->r[2] = c->r[10]; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[14] + (c->r[4] << 2);
    c->r[4] = 0x2000u;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
L_26273d0:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[6] + 0x20000u;
    c->r[4] = c->r[6] + 0x10000u;
    c->r[3] = c->r[3] + c->r[10];
    c->r[0] = c->r[0] + c->r[8];
    c->r[1] = c->r[1] + 0x20000u;
    (void)f_subs(c, c->r[2], c->r[14]);
    c->r[6] = c->r[4];
    if (COND_LT) { goto L_2627348; }
    goto L_2627520;
L_26273f8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[6];
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_GE) { goto L_26279d4; }
    goto L_262752c;
L_262740c:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2627418:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = ~c->r[7];
    c->r[8] = (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    c->r[0] = ~c->r[0];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[0]; }
    c->r[0] = c->r[10] + (c->r[1] << 1);
    c->r[0] = c->r[0] - 0x2u;
    c->r[1] = c->r[0] - (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[7] = (c->r[0] << 1);
    c->r[0] = 0x10000u;
    c->r[7] = (c->r[7] & 0xfffe0000u) | ((c->r[0] << 0) & 0x1ffffu);
    c->r[0] = 0x0u;
L_2627458:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[2] - (uint32_t)((int32_t)c->r[1] >> 17);
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_HI) { goto L_26274fc; }
    c->r[2] = (c->r[7] >> 1) & 0xffffu;
    c->r[12] = c->r[10];
    c->r[14] = (uint32_t)((int32_t)c->r[1] >> 17);
    c->r[8] = 0x10000u - c->r[2];
    (void)f_subs(c, c->r[0], (c->r[8] >> 16));
    if (COND_EQ) { { uint32_t r = c->r[8] * c->r[12]; c->r[2] = r; } }
    c->r[8] = (c->r[5] << 4);
    if (COND_EQ) { c->r[2] = c->r[2] + 0x8000u; }
    if (COND_EQ) { c->r[10] = (c->r[2] >> 16); }
    c->r[2] = c->r[5] + 0x1u;
    c->r[5] = (uint32_t)((int32_t)c->r[7] >> 17);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2] + c->r[8]; ST16(ea, c->r[5]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { c->r[10] = 0x0u - c->r[10]; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[12];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_GT) { c->r[5] = c->r[12]; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[9] + (c->r[4] << 2);
    c->r[4] = 0x2000u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
L_26274fc:;
    c->r[2] = c->r[6] + 0x20000u;
    c->r[4] = c->r[6] + 0x10000u;
    c->r[3] = c->r[3] + c->r[10];
    c->r[1] = c->r[1] + c->r[8];
    c->r[7] = c->r[7] + 0x20000u;
    (void)f_subs(c, c->r[2], c->r[14]);
    c->r[6] = c->r[4];
    if (COND_LT) { goto L_2627458; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
L_2627520:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_GE) { goto L_26279d4; }
L_262752c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    c->r[0] = 0x241cu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[3] + c->r[6];
    c->r[1] = c->r[0] - (uint32_t)((int32_t)c->r[2] >> 17);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_26279d4; }
    c->r[14] = (uint32_t)((int32_t)c->r[2] >> 17);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[6] - c->r[3];
    (void)f_subs(c, c->r[3], 0x10000u);
    c->r[5] = c->r[4] + c->r[2];
    c->r[2] = (c->r[5] >> 1) & 0xffffu;
    c->r[4] = 0x10000u - c->r[2];
    if (COND_LT) { goto L_26279dc; }
    c->r[2] = c->r[4];
    goto L_26279f4;
L_2627584:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[14] - c->r[6];
    c->r[3] = c->r[10] - c->r[0];
    goto L_2626de8;
L_2627594:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[5] >> 16));
    c->r[2] = c->r[3];
    if (COND_EQ) { { uint32_t r = c->r[3] * c->r[5]; c->r[2] = r; } }
    if (COND_EQ) { c->r[2] = c->r[2] + 0x8000u; }
    if (COND_EQ) { c->r[2] = (c->r[2] >> 16); }
L_26275ac:;
    c->r[5] = c->r[4] + 0x1u;
    c->r[4] = (c->r[4] << 4);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[5]); }
    c->r[5] = (uint32_t)((int32_t)c->r[9] >> 17);
    c->r[9] = c->r[3];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + c->r[4]; ST16(ea, c->r[5]); c->r[1] = ea; }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[9];
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[4] = 0x2000u;
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3];
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5] + (c->r[10] << 2);
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_2627610:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
L_2627614:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] - 0x10000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LE) { goto L_2627774; }
    c->r[0] = 0x241cu;
    c->r[9] = c->r[5] + c->r[0];
    c->r[0] = 0x0u - c->r[8];
    (void)f_subs(c, c->r[0], 0x10000u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_26277dc; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[3] << 1) - c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[12] = (c->r[8] << 1);
    c->r[3] = 0x0u;
    c->r[2] = ~c->r[1];
    c->r[1] = ~c->r[7];
    (void)f_subs(c, c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_GT) { c->r[1] = c->r[2]; }
    c->r[1] = c->r[0] - (c->r[1] << 1);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfffe0000u;
    c->r[0] = c->r[0] & (c->r[10] << 1);
    c->r[7] = c->r[0] - 0x10000u;
    c->r[0] = 0x0u;
L_2627684:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[1] - 0x2u;
    c->r[4] = c->r[4] - (uint32_t)((int32_t)c->r[5] >> 17);
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_HI) { goto L_2627724; }
    c->r[10] = c->r[2] + 0x1u;
    c->r[8] = c->r[14];
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 17);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[10]); }
    c->r[10] = (c->r[2] << 4);
    c->r[2] = (uint32_t)((int32_t)c->r[7] >> 17);
    c->r[14] = c->r[12];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[12] = c->r[9];
    { uint32_t ea = c->r[12] + c->r[10]; ST16(ea, c->r[2]); c->r[12] = ea; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[12] + 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = (c->r[7] >> 1) & 0xffffu;
    c->r[5] = 0x10000u - c->r[5];
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = c->r[10];
    if (COND_LE) { c->r[5] = 0x0u - c->r[5]; }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_GT) { c->r[2] = c->r[5]; }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[9] + (c->r[4] << 2);
    c->r[4] = 0x2000u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    c->r[12] = c->r[14];
    c->r[14] = c->r[8];
    c->r[8] = c->r[10];
L_2627724:;
    c->r[4] = c->r[6] - 0x10000u;
    c->r[2] = c->r[6] - 0x20000u;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[3] - c->r[8];
    c->r[1] = c->r[1] - c->r[12];
    c->r[7] = c->r[7] - 0x20000u;
    (void)f_subs(c, c->r[2], c->r[6]);
    c->r[6] = c->r[4];
    if (COND_GT) { goto L_2627684; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = c->r[0] + c->r[3];
    c->r[12] = c->r[0] - 0x1u;
    c->r[0] = 0x1u;
    goto L_2627778;
L_2627774:;
    c->r[4] = c->r[6];
L_2627778:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_LE) { goto L_26279d4; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    c->r[0] = 0x241cu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[12] + c->r[3];
    c->r[1] = c->r[0] - (uint32_t)((int32_t)c->r[2] >> 17);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_HI) { goto L_26279d4; }
    c->r[8] = (uint32_t)((int32_t)c->r[2] >> 17);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] - c->r[12];
    (void)f_subs(c, c->r[3], 0x10000u);
    c->r[5] = c->r[4] + c->r[2];
    c->r[2] = (c->r[5] >> 1) & 0xffffu;
    c->r[4] = 0x10000u - c->r[2];
    if (COND_LT) { goto L_2627a18; }
    c->r[2] = c->r[4];
    goto L_2627a30;
L_26277dc:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~c->r[7];
    c->r[0] = ~c->r[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    c->r[0] = ~0x1u;
    c->r[0] = c->r[0] + (c->r[3] << 1);
    c->r[0] = c->r[0] - c->r[8];
    c->r[7] = c->r[0] - (c->r[1] << 1);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfffe0000u;
    c->r[0] = c->r[0] & (c->r[10] << 1);
    c->r[10] = (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[0] - 0x10000u;
    c->r[0] = 0x0u;
L_262781c:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x200u);
    if (COND_GE) { goto L_26279d4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[2] - (uint32_t)((int32_t)c->r[7] >> 17);
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_HI) { goto L_26278cc; }
    c->r[2] = (uint32_t)((int32_t)c->r[7] >> 17);
    c->r[10] = c->r[14];
    c->r[3] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 1) & 0xffffu;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = 0x10000u - c->r[2];
    (void)f_subs(c, c->r[0], (c->r[8] >> 16));
    c->r[2] = c->r[14];
    if (COND_EQ) { { uint32_t r = c->r[8] * c->r[14]; c->r[2] = r; } }
    c->r[8] = (c->r[5] << 4);
    c->r[5] = (uint32_t)((int32_t)c->r[1] >> 17);
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[3] + c->r[8]; ST16(ea, c->r[5]); c->r[3] = ea; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[2] = c->r[2] + 0x8000u; }
    if (COND_EQ) { c->r[2] = (c->r[2] >> 16); }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[8];
    if (COND_GT) { c->r[2] = c->r[14]; }
    c->r[14] = c->r[10];
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[9] + (c->r[4] << 2);
    c->r[4] = 0x2000u;
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
L_26278cc:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6] - 0x20000u;
    c->r[4] = c->r[6] - 0x10000u;
    c->r[12] = c->r[12] - c->r[8];
    c->r[7] = c->r[7] - c->r[10];
    c->r[1] = c->r[1] - 0x20000u;
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { goto L_262781c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1u;
    goto L_2627778;
L_26278fc:;
    c->r[1] = 0x0u;
    c->r[5] = c->r[7];
    (void)f_subs(c, c->r[1], (c->r[4] >> 16));
    if (COND_EQ) { { uint32_t r = c->r[4] * c->r[7]; c->r[1] = r; } }
    if (COND_EQ) { c->r[1] = c->r[1] + 0x8000u; }
    if (COND_EQ) { c->r[5] = (c->r[1] >> 16); }
L_2627914:;
    c->r[1] = c->r[3] + 0x1u;
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 17);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[3] << 4);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4];
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[3] + c->r[1]; ST16(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x2000u;
    if (COND_LE) { c->r[5] = 0x0u - c->r[5]; }
    if (COND_LE) { c->r[7] = 0x0u - c->r[7]; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    goto L_26279d0;
L_2627968:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[5], (c->r[4] >> 16));
    c->r[5] = c->r[2];
    if (COND_EQ) { { uint32_t r = c->r[4] * c->r[2]; c->r[5] = r; } }
    if (COND_EQ) { c->r[5] = c->r[5] + 0x8000u; }
    if (COND_EQ) { c->r[5] = (c->r[5] >> 16); }
L_2627980:;
    c->r[4] = c->r[7] + 0x1u;
    c->r[3] = (uint32_t)((int32_t)c->r[6] >> 17);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[7] << 4);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[4];
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[6] + c->r[1]; ST16(ea, c->r[3]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x2000u;
    if (COND_LE) { c->r[5] = 0x0u - c->r[5]; }
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
L_26279d0:;
    c->r[0] = 0x1u;
L_26279d4:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26279dc:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[4] >> 16));
    c->r[2] = c->r[3];
    if (COND_EQ) { { uint32_t r = c->r[4] * c->r[3]; c->r[2] = r; } }
    if (COND_EQ) { c->r[2] = c->r[2] + 0x8000u; }
    if (COND_EQ) { c->r[2] = (c->r[2] >> 16); }
L_26279f4:;
    c->r[4] = c->r[7] + 0x1u;
    c->r[7] = (c->r[7] << 4);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 17);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[7]; ST16(ea, c->r[5]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[14]); }
    goto L_2627a50;
L_2627a18:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[4] >> 16));
    c->r[2] = c->r[3];
    if (COND_EQ) { { uint32_t r = c->r[4] * c->r[3]; c->r[2] = r; } }
    if (COND_EQ) { c->r[2] = c->r[2] + 0x8000u; }
    if (COND_EQ) { c->r[2] = (c->r[2] >> 16); }
L_2627a30:;
    c->r[4] = c->r[7] + 0x1u;
    c->r[7] = (c->r[7] << 4);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 17);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[7]; ST16(ea, c->r[5]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[8]); }
L_2627a50:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LE) { c->r[2] = 0x0u - c->r[2]; }
    if (COND_LE) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[3]); }
    c->r[2] = 0x2000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2627a88(Cpu *restrict c) {
    FN_ENTER(0x2627a88u);
L_2627a88:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[3], 0x8u);
    if (COND_NE) { goto L_2627ac8; }
    { uint32_t ea = c->r[1] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    c->r[3] = 0x404u;
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2627ad4; }
    c->r[10] = 0xfu;
    c->r[12] = 0x4u;
    goto L_2627ae8;
L_2627ac8:;
    c->r[0] = c->r[1];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2627ad4:;
    c->r[3] = 0x202u;
    c->r[12] = 0x2u;
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[10] = r; }
    if (COND_EQ) { c->r[12] = 0x8u; }
    if (COND_NE) { c->r[10] = 0x3fu; }
L_2627ae8:;
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2627b54; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_LE) { goto L_2627b5c; }
    c->r[7] = c->r[1] + 0x24u;
    c->r[6] = 0x0u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[10]);
L_2627b0c:;
    c->r[2] = 0x0u;
L_2627b10:;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_HI) { goto L_2627b30; }
    c->r[2] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_LT) { goto L_2627b10; }
    goto L_2627b34;
L_2627b30:;
    c->r[2] = c->r[3];
L_2627b34:;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_NE) { goto L_2627b74; }
    c->r[2] = c->r[7] + c->r[3];
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_LT) { goto L_2627b0c; }
    goto L_2627b74;
L_2627b54:;
    c->r[6] = 0x0u;
    goto L_2627b74;
L_2627b5c:;
    c->r[6] = 0x0u;
L_2627b60:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { goto L_2627b74; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_LT) { goto L_2627b60; }
L_2627b74:;
    c->r[7] = c->r[9] - 0x1u;
    (void)f_subs(c, c->r[9], c->r[6]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    if (COND_LE) { goto L_2627bf4; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_LE) { goto L_2627bd8; }
    { uint32_t r = c->r[7] * c->r[14] + c->r[1]; c->r[2] = r; }
    c->r[8] = 0x0u - c->r[14];
    c->r[3] = (uint32_t)(uint8_t)(c->r[10]);
    c->r[4] = c->r[2] + 0x24u;
L_2627b9c:;
    c->r[2] = 0x0u;
L_2627ba0:;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_HI) { goto L_2627bb8; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_LT) { goto L_2627ba0; }
L_2627bb8:;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_NE) { goto L_2627bf4; }
    c->r[10] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[4] = c->r[4] + c->r[8];
    c->r[7] = c->r[10];
    if (COND_GT) { goto L_2627b9c; }
    goto L_2627bf8;
L_2627bd8:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { goto L_2627bf4; }
    c->r[10] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[7] = c->r[10];
    if (COND_GT) { goto L_2627bd8; }
    goto L_2627bf8;
L_2627bf4:;
    c->r[10] = c->r[7];
L_2627bf8:;
    c->r[2] = 0x1u - c->r[6];
    { uint32_t r = c->r[6] * c->r[14]; c->r[5] = r; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    c->r[8] = c->r[2] + c->r[10];
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_2627c78; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_2627cf4; }
    c->r[1] = c->r[1] + c->r[5];
    c->r[9] = 0x0u;
    c->r[7] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = (uint32_t)(uint8_t)(c->r[1]);
L_2627c38:;
    c->r[1] = c->r[7];
    c->r[3] = 0x0u;
L_2627c40:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_HI) { goto L_2627c5c; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + c->r[14];
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_LT) { goto L_2627c40; }
L_2627c5c:;
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_NE) { goto L_2627c7c; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_LT) { goto L_2627c38; }
    goto L_2627c7c;
L_2627c78:;
    c->r[9] = 0x0u;
L_2627c7c:;
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_2627ce8; }
    c->r[1] = c->r[5] + c->r[2];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[7] = c->r[1] + 0x23u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = (uint32_t)(uint8_t)(c->r[1]);
L_2627ca0:;
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2627ce0; }
    c->r[0] = c->r[3] - 0x1u;
    c->r[4] = 0x0u;
    c->r[1] = c->r[7];
L_2627cb8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_HI) { goto L_2627cd4; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[1] + c->r[14];
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_LT) { goto L_2627cb8; }
L_2627cd4:;
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_EQ) { goto L_2627ca0; }
L_2627ce0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_2627d28;
L_2627ce8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_2627d10;
L_2627cf4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = 0x0u;
L_2627cfc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_2627d10; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_LT) { goto L_2627cfc; }
L_2627d10:;
    c->r[3] = c->r[2] + 0x1u;
L_2627d14:;
    c->r[3] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2627d28; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2627d14; }
L_2627d28:;
    c->r[5] = c->r[3] - c->r[9];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { c->r[5] = 0x0u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[5], c->r[14]); }
    if (COND_NE) { goto L_2627d54; }
    (void)f_subs(c, c->r[12], 0x8u);
    if (COND_CC) { goto L_2627d54; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_EQ) { goto L_2627ed4; }
L_2627d54:;
    (void)f_subs(c, c->r[12], 0x4u);
    if (COND_NE) { goto L_2627d68; }
    c->r[0] = c->r[5] + 0x1u;
    c->r[14] = (c->r[0] >> 1);
    goto L_2627d74;
L_2627d68:;
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_EQ) { c->r[0] = c->r[5] + 0x3u; }
    if (COND_EQ) { c->r[14] = (c->r[0] >> 2); }
L_2627d74:;
    { uint32_t r = c->r[14] * c->r[8]; c->r[0] = r; }
    c->r[4] = c->r[0] + 0x24u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0x2627d88u; f_284cbc8(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2627ed0; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[9];
    { uint32_t ea = c->r[3] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[6];
    { uint32_t ea = c->r[3] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x18u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x1au; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x22u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_2627ee0; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[1] = (c->r[1] >> 1);
    { uint32_t ea = c->r[3] + 0x1cu; ST16(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[3] + 0x20u; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_26282a0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5] & ~0x80000001u;
    c->r[4] = c->r[8] - 0x1u;
    c->r[14] = c->r[5] & 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t r = c->r[0] * c->r[6] + c->r[1]; c->r[0] = r; }
    c->r[0] = c->r[0] + c->r[9];
    c->r[6] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x24u;
    if (COND_EQ) { goto L_2628100; }
    c->r[1] = c->r[2] - 0x1u;
    c->r[3] = 0x1u;
    c->r[8] = c->r[3] + (c->r[1] >> 1);
    c->r[9] = (c->r[1] >> 1);
    c->r[1] = 0x2u;
    c->r[12] = c->r[1] + (c->r[9] << 1);
L_2627e64:;
    c->r[5] = c->r[4];
    c->r[10] = c->r[7] + c->r[9];
    c->r[3] = 0x0u;
    c->r[1] = c->r[7];
L_2627e74:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[4] = v; }
    c->r[3] = c->r[3] + 0x2u;
    (void)f_subs(c, c->r[3], c->r[2]);
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[4] & 0xf0u;
    c->r[0] = c->r[4] | (c->r[0] >> 4);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); c->r[1] = c->r[1] + 0x1u; }
    if (COND_LT) { goto L_2627e74; }
    c->r[7] = c->r[7] + c->r[8];
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_2627eb4; }
    { uint32_t ea = c->r[6] + c->r[12]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xf0u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    c->r[7] = c->r[10] + 0x2u;
L_2627eb4:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + c->r[1];
    if (COND_NE) { goto L_2627e64; }
    goto L_26282a0;
L_2627ed0:;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
L_2627ed4:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2627ee0:;
    c->r[0] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_2627f6c; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_26282a0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[1] + 0x1cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x20u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_26282a0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3];
    { uint32_t r = c->r[3] * c->r[6] + c->r[0]; c->r[0] = r; }
    c->r[7] = c->r[1] + 0x24u;
    c->r[0] = c->r[0] + c->r[9];
    c->r[9] = c->r[10] - c->r[6];
    c->r[4] = c->r[0] + 0x24u;
    { uint32_t r = c->r[8] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_2628128; }
    c->r[6] = 0x0u - c->r[0];
    c->r[10] = c->r[2];
L_2627f44:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x2627f54u; f_283aa78(c);
    c->r[4] = c->r[4] + c->r[10];
    c->r[7] = c->r[7] + c->r[5];
    c->r[6] = f_adds(c, c->r[6], 0x1u);
    c->r[8] = c->r[8] - 0x1u;
    if (COND_NE) { goto L_2627f44; }
    goto L_262812c;
L_2627f6c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x3u;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[1] = (c->r[1] >> 2);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; ST16(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[3] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x22u; ST16(ea, c->r[7]); }
    if (COND_EQ) { goto L_26282a0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] & ~0x80000003u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t r = c->r[0] * c->r[6] + c->r[1]; c->r[0] = r; }
    c->r[0] = c->r[0] + c->r[9];
    c->r[9] = c->r[0] + 0x24u;
    c->r[0] = c->r[5] - c->r[3];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[0] + 0x24u;
    if (COND_EQ) { goto L_26281b4; }
    c->r[6] = c->r[3] - 0x1u;
    c->r[5] = 0x1u;
    c->r[7] = c->r[8] - 0x1u;
    c->r[4] = 0x30u;
    c->r[0] = c->r[5] + (c->r[6] >> 2);
    c->r[5] = 0xcu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 2);
    c->r[6] = 0x4u;
    c->r[1] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_2628004:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[12] = 0x0u;
    c->r[7] = c->r[14];
    c->r[0] = c->r[14] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_262801c:;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[8] = v; }
    c->r[12] = c->r[12] + 0x4u;
    (void)f_subs(c, c->r[12], c->r[3]);
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[8] & 0xc0u;
    c->r[6] = c->r[4] & (c->r[10] >> 2);
    c->r[1] = c->r[5] & (c->r[1] >> 4);
    c->r[2] = c->r[6] | c->r[2];
    c->r[1] = c->r[2] | c->r[1];
    c->r[0] = c->r[1] | (c->r[0] >> 6);
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); c->r[7] = c->r[7] + 0x1u; }
    if (COND_LT) { goto L_262801c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[14] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_26280a8; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_26280b8; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_26280e0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[4] & (c->r[7] >> 2);
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] & 0xc0u;
    c->r[12] = c->r[12] | c->r[7];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[5] & (c->r[7] >> 4);
    goto L_26280d0;
L_26280a8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0xffffffc0u;
    goto L_26280d4;
L_26280b8:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[4] & (c->r[7] >> 2);
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0xc0u;
L_26280d0:;
    c->r[7] = c->r[12] | c->r[7];
L_26280d4:;
    { uint32_t ea = c->r[14]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[0] + 0x2u;
L_26280e0:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + c->r[7];
    c->r[7] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2628004; }
    goto L_26282a0;
L_2628100:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_26282a0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[8] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2628240; }
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_2628264; }
    goto L_26282a0;
L_2628128:;
    c->r[10] = c->r[2];
L_262812c:;
    (void)f_subs(c, c->r[9], 0x3u);
    c->r[9] = c->r[10];
    if (COND_CC) { goto L_26282a0; }
    c->r[10] = c->r[5] + (c->r[5] << 1);
    c->r[0] = (c->r[5] << 1);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_2628144:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x2628154u; f_283aa78(c);
    c->r[6] = c->r[7] + c->r[5];
    c->r[4] = c->r[4] + c->r[9];
    c->r[2] = c->r[5];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x262816cu; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + c->r[9];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x2628184u; f_283aa78(c);
    c->r[4] = c->r[4] + c->r[9];
    c->r[0] = c->r[7] + c->r[10];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x2628198u; f_283aa78(c);
    c->r[0] = c->r[6] + c->r[5];
    c->r[4] = c->r[4] + c->r[9];
    c->r[8] = f_subs(c, c->r[8], 0x4u);
    c->r[0] = c->r[0] + c->r[5];
    c->r[7] = c->r[0] + c->r[5];
    if (COND_NE) { goto L_2628144; }
    goto L_26282a0;
L_26281b4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[6] - 0x1u;
    c->r[7] = 0xcu;
    c->r[6] = 0x30u;
    c->r[3] = c->r[3] - c->r[10];
L_26281c8:;
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_EQ) { goto L_26281ec; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_EQ) { goto L_2628210; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_2628228; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0xffffffc0u;
    goto L_2628224;
L_26281ec:;
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[6] & (c->r[1] >> 2);
    c->r[0] = c->r[0] & 0xc0u;
    c->r[2] = c->r[7] & (c->r[2] >> 4);
    c->r[0] = c->r[1] | c->r[0];
    c->r[5] = c->r[0] | c->r[2];
    goto L_2628224;
L_2628210:;
    { uint32_t ea = c->r[9] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[6] & (c->r[1] >> 2);
    c->r[0] = c->r[0] & 0xc0u;
    c->r[5] = c->r[1] | c->r[0];
L_2628224:;
    { uint32_t ea = c->r[14]; ST8(ea, c->r[5]); c->r[14] = c->r[14] + 0x1u; }
L_2628228:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + c->r[0];
    if (COND_NE) { goto L_26281c8; }
    goto L_26282a0;
L_2628240:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[2] + 0x25u;
    c->r[0] = c->r[0] & 0xf0u;
    { uint32_t ea = c->r[2] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[8] - 0x2u;
    c->r[6] = c->r[6] + c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_26282a0; }
L_2628264:;
    c->r[2] = ~c->r[1];
L_2628268:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = f_adds(c, c->r[2], 0x2u);
    c->r[0] = c->r[0] & 0xf0u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    c->r[7] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + c->r[0];
    if (COND_NE) { goto L_2628268; }
L_26282a0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x26282acu; f_284cb2c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_26282b8(Cpu *restrict c) {
    FN_ENTER(0x26282b8u);
L_26282b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2628300; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x26282d8u; f_284cb38(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2628300; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x26282f4u; f_283ac04(c);
    c->r[0] = 0x0u;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_2628300:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2628308(Cpu *restrict c) {
    FN_ENTER(0x2628308u);
L_2628308:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[8] = 0x0u;
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_2628390; }
    c->r[0] = c->r[10] | 0x400000u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[7] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7fcfu;
    if (COND_NE) { goto L_262836c; }
    { uint32_t r = c->r[7] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x7fc9u;
    if (COND_EQ) { c->r[0] = (c->r[7] << 30); }
    if (COND_EQ) { c->r[1] = 0x7fcdu; }
    if (COND_EQ) { c->r[0] = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 31); }
L_262836c:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[14] = 0x2628380u; f_284ce20(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_262839c; }
L_262838c:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[10]); }
L_2628390:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_262839c:;
    { uint32_t ea = c->r[5] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_2628540; }
    { uint32_t ea = c->r[4] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2628540; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[3] = c->r[7];
    c->r[14] = 0x26283c8u; f_284ce44(c);
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262838c; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_2628540; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2628404; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[12];
    c->r[14] = 0x2628400u; f_284d0f0(c);
    c->r[12] = c->r[0];
L_2628404:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2628424; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2628430; }
    c->r[0] = c->r[12];
    c->r[14] = 0x2628420u; f_284d0cc(c);
    goto L_262842c;
L_2628424:;
    c->r[0] = c->r[12];
    c->r[14] = 0x262842cu; f_284d0d8(c);
L_262842c:;
    c->r[12] = c->r[0];
L_2628430:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2628460; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2628474; }
    { uint32_t r = c->r[0] & 0xc0u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2628648; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x52u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[12];
    goto L_2628484;
L_2628460:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[12];
    c->r[2] = 0x1u;
    goto L_2628484;
L_2628474:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[12];
    c->r[2] = 0x2u;
L_2628484:;
    c->r[14] = 0x2628488u; f_284cf70(c);
L_2628488:;
    c->r[12] = c->r[0];
L_262848c:;
    { uint32_t ea = c->r[4] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_26284a0; }
    c->r[8] = c->r[12];
    goto L_262850c;
L_26284a0:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_26284c4; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_26284cc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    goto L_26284e4;
L_26284c4:;
    c->r[8] = 0x0u;
    goto L_26284f0;
L_26284cc:;
    (void)f_subs(c, c->r[0], 0x19u);
    c->r[0] = c->r[4];
    if (COND_HI) { c->r[1] = 0x3u; }
    if (COND_HI) { c->r[2] = 0x3u; }
    if (COND_LS) { c->r[1] = 0x2u; }
    if (COND_LS) { c->r[2] = 0x2u; }
L_26284e4:;
    c->r[3] = c->r[12];
    c->r[14] = 0x26284ecu; f_284cf7c(c);
    c->r[8] = c->r[0];
L_26284f0:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262850c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0x2628508u; f_284cb2c(c);
    goto L_2628638;
L_262850c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2628524; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1fcu; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2628538; }
L_2628524:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[8];
    c->r[14] = 0x2628538u; f_284d0fc(c);
L_2628538:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_262838c; }
L_2628540:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2628558u; f_284cb68(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2628638; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x2628580u; f_284d108(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x2628594u; f_284cb2c(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2628640; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_262838c; }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[8] = c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_2628620; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2628614; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x26285e4u; f_284cdfc(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[0] = 0x0u - c->r[0];
    c->r[14] = 0x26285f8u; f_284cbb0(c);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2628614u; f_284cbb0(c);
L_2628614:;
    { uint32_t ea = c->r[8] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0xau; ST16(ea, c->r[0]); }
L_2628620:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[8];
    c->r[14] = 0x2628634u; f_284d0fc(c);
    goto L_262838c;
L_2628638:;
    c->r[8] = 0x0u;
    goto L_262838c;
L_2628640:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_262838c;
L_2628648:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262848c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x52u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[12];
    c->r[14] = 0x2628664u; f_284d0e4(c);
    goto L_2628488;
}
void f_2628668(Cpu *restrict c) {
    FN_ENTER(0x2628668u);
L_2628668:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x34u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[1];
    c->r[10] = c->r[5] + 0x30u;
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[4] << 2);
    c->r[2] = (c->r[6] << 2);
    c->r[3] = (c->r[9] << 2);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] << 2);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x26286b4u; f_284ca60(c);
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26286ec; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x26286d8u; f_284ca60(c);
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[0]); }
    goto L_26287c4;
L_26286ec:;
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    c->r[2] = ~0x4u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[4] | 0x4000000u;
    if (COND_EQ) { c->r[2] = ~0x8u; }
    if (COND_EQ) { { uint32_t r = c->r[4] & 0x8u; c->nf = r >> 31; c->zf = r == 0; } }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_262874c; }
    c->r[2] = ~0x10u;
    { uint32_t r = c->r[4] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[2] = ~0x20u; }
    if (COND_EQ) { { uint32_t r = c->r[4] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_262874c; }
    c->r[2] = ~0x40u;
    { uint32_t r = c->r[4] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[2] = ~0x80u; }
    if (COND_EQ) { { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_262874c; }
    c->r[2] = ~0x100u;
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2628754; }
L_262874c:;
    c->r[0] = c->r[2] & c->r[0];
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
L_2628754:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0x2628760u; f_284d114(c);
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2628794; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_26287d0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x2628794u; f_284cb2c(c);
L_2628794:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x26287b0u; f_284ca60(c);
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[10]); }
L_26287c4:;
    c->r[0] = c->r[2];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26287d0:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + c->r[9];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[14] = 0x26287ecu; f_284d120(c);
    c->r[8] = c->r[0];
    c->r[10] = 0x1u;
    c->r[7] = c->r[5];
    c->r[1] = c->r[8] - (uint32_t)((int32_t)c->r[9] >> 2);
    c->r[0] = c->r[10] - (uint32_t)((int32_t)c->r[9] >> 2);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[5] = c->r[0] - c->r[1];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[0] = c->r[0] - 0x1u;
    c->r[14] = 0x262881cu; f_284d120(c);
    c->r[0] = c->r[5] + c->r[0];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[5] = (c->r[0] >> 1);
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[14] = 0x2628838u; f_284d120(c);
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[6] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x4u;
    c->r[14] = 0x2628854u; f_284d120(c);
    c->r[1] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[10] = c->r[7];
    c->r[9] = c->r[1] - c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[9]);
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[5] = c->r[0] + 0x24u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x262887cu; f_284cbc8(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2628930; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xau; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x1au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xeu; ST16(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[2] + 0x22u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26288e0; }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628b44; }
L_26288e0:;
    c->r[0] = (c->r[0] << 14);
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 14);
L_26288f0:;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[14] = 0x2628904u; f_284d120(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4] - c->r[0];
    c->r[0] = 0xffffu;
    { uint32_t r = c->r[2] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    c->r[10] = c->r[1] + 0x24u;
    if (COND_EQ) { goto L_262896c; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[7] = c->r[2];
    { uint32_t r = c->r[0] * c->r[1] + c->r[10]; c->r[10] = r; }
    goto L_2628970;
L_2628930:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0x262893cu; f_284cb2c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[14] = 0x2628954u; f_284ca60(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1] + 0x110u; ST32(ea, c->r[0]); }
    goto L_26287c4;
L_262896c:;
    c->r[7] = 0x0u;
L_2628970:;
    { uint32_t ea = c->r[6] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2628a74; }
    c->r[1] = 0x633a5cu;
    c->r[9] = c->r[6] + 0x24u;
    c->r[0] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x2628994u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
L_2628990:;
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x4u;
    c->r[14] = 0x26289a0u; f_284d120(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[7];
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    { uint32_t ea = c->r[3] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_26289cc; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[12] = c->r[0];
    c->r[10] = c->r[10] + c->r[1];
L_26289cc:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2628a54; }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_26289e4:;
    c->r[3] = c->r[1] & 0x7u;
    { uint32_t ea = c->r[9] + (c->r[1] >> 3); uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[3] & c->r[2];
    { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2628a40; }
    c->r[1] = c->r[1] + c->r[7];
    c->r[3] = (c->r[1] >> 2) - c->r[8];
    c->r[1] = (c->r[3] << 16);
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10] + (uint32_t)((int32_t)c->r[1] >> 17); uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(((int32_t)(c->r[3] << 16)) >> 17);
    if (COND_NE) { goto L_2628a2c; }
    c->r[3] = c->r[2] & 0xf0u;
    (void)f_subs(c, c->r[3], 0xf0u);
    if (COND_EQ) { goto L_2628a40; }
    c->r[2] = c->r[2] + 0x10u;
    goto L_2628a3c;
L_2628a2c:;
    c->r[3] = c->r[2] & 0xfu;
    (void)f_subs(c, c->r[3], 0xfu);
    if (COND_EQ) { goto L_2628a40; }
    c->r[2] = c->r[2] + 0x1u;
L_2628a3c:;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[2]); }
L_2628a40:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_26289e4; }
L_2628a54:;
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[12];
    c->r[9] = c->r[9] + c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_2628990; }
L_2628a74:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[6];
    c->r[0] = c->r[5];
    c->r[14] = 0x2628a84u; f_284cb2c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[14] = 0x2628a9cu; f_284ca60(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2628b3c; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26287c4; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2628b2c; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x2628af0u; f_284cdfc(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    c->r[0] = 0x0u - c->r[0];
    c->r[14] = 0x2628b04u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2628b28u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
L_2628b2c:;
    { uint32_t ea = c->r[2] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2] + 0xau; ST16(ea, c->r[0]); }
    goto L_26287c4;
L_2628b3c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_26287c4;
L_2628b44:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 2);
    goto L_26288f0;
}
void f_2628b68(Cpu *restrict c) {
    FN_ENTER(0x2628b68u);
L_2628b68:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2628ba8; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_2628bb0; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628bc0; }
L_2628ba0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2628ba8:;
    c->r[0] = 0x12fu;
    goto L_2628bb4;
L_2628bb0:;
    c->r[0] = 0x130u;
L_2628bb4:;
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2628bc0:;
    { uint32_t ea = c->r[9] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2628ba0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628c3c; }
    c->r[2] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[3] | (c->r[1] << 8);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628ba0; }
    c->r[3] = c->r[2] + 0x2u;
    c->r[2] = 0x0u;
L_2628bf8:;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[3] + 0x6u;
    c->r[7] = c->r[6] | (c->r[7] << 8);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2628cd8; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] | (c->r[7] << 8);
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[7], c->r[1]);
    c->r[0] = c->r[0] + c->r[3];
    c->r[3] = c->r[0] - 0x6u;
    c->r[0] = 0x0u;
    if (COND_CC) { goto L_2628bf8; }
    goto L_2628ba0;
L_2628c3c:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x2628c58u; f_284cdf0(c);
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[8] = c->r[1] | (c->r[0] << 8);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2628cdc; }
    c->r[7] = c->r[7] + 0x4u;
    c->r[6] = 0x0u;
    c->r[10] = c->r[13] + 0xau;
L_2628c78:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[7];
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x2628c90u; f_284cdf0(c);
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[0] = c->r[3] | (c->r[0] << 8);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628cc4; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[6], c->r[8]);
    if (COND_CC) { goto L_2628c78; }
    goto L_2628cdc;
L_2628cc4:;
    c->r[3] = c->r[0] - 0x6u;
    c->r[2] = c->r[7] + 0x6u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[14] = 0x2628cd8u; f_284cec8(c);
L_2628cd8:;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_2628cdc:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2628ce8(Cpu *restrict c) {
    FN_ENTER(0x2628ce8u);
L_2628ce8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628d18; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[14] = 0x2628d10u; f_284cb74(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_2628d18:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2628d1c(Cpu *restrict c) {
    FN_ENTER(0x2628d1cu);
L_2628d1c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[0];
    c->r[0] = 0x0u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x2628d50u; f_284cae4(c);
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2628d6c; }
L_2628d60:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2628d6c:;
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_2628dac; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x2628d88u; f_284cae4(c);
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_2628d60; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_2628db8; }
    c->r[6] = 0x0u;
    goto L_2628d60;
L_2628dac:;
    c->r[6] = 0x12eu;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[6]); }
    goto L_2628d60;
L_2628db8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2628e20; }
    { uint32_t ea = c->r[6] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_2628e10; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2628dfc; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x2628de8u; f_284cf64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2628e10; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2628e30; }
L_2628dfc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x2628e08u; f_284ccb8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2628e2c; }
L_2628e10:;
    c->r[0] = 0x1b9u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    goto L_2628d60;
L_2628e20:;
    c->r[6] = 0x12fu;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[6]); }
    goto L_2628d60;
L_2628e2c:;
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2628e30:;
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2628f0c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2628e64; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x2628e58u; f_284d12c(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2628f6c; }
L_2628e64:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
    c->r[1] = c->r[2] | (c->r[1] << 8);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2628d60; }
    c->r[12] = c->r[0] + 0x8u;
    c->r[3] = 0x0u;
L_2628e84:;
    c->r[14] = c->r[1] - 0x1u;
L_2628e88:;
    c->r[0] = c->r[3] + c->r[14];
    c->r[1] = (c->r[0] >> 1) & 0x7fffu;
    c->r[7] = c->r[12] + (c->r[1] << 2);
    { uint32_t ea = c->r[7] + (c->r[1] << 1); uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 8);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_2628efc; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[2] = c->r[6] | (c->r[2] << 8);
    if (COND_NE) { goto L_2628ec0; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_HI) { goto L_2628efc; }
L_2628ec0:;
    (void)f_subs(c, c->r[2], c->r[5]);
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    if (COND_CC) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { c->r[6] = 0x1u; }
    if (COND_CC) { goto L_2628ee8; }
    c->r[3] = c->r[6] & c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_2628f14; }
L_2628ee8:;
    c->r[3] = c->r[1] + 0x1u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_LT) { goto L_2628e88; }
    goto L_2628d60;
L_2628efc:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { goto L_2628e84; }
    goto L_2628d60;
L_2628f0c:;
    c->r[6] = 0x0u;
    goto L_2628d60;
L_2628f14:;
    (void)f_subs(c, c->r[0], c->r[9]);
    c->r[6] = 0x0u;
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[5]); }
    if (COND_NE) { goto L_2628d60; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[2] = c->r[5];
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = c->r[7];
    c->r[14] = 0x2628f50u; f_284cd9c(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2628f64u; f_284cd9c(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    goto L_2628d60;
L_2628f6c:;
    c->r[6] = 0x0u;
    goto L_2628d60;
}
void f_2628f74(Cpu *restrict c) {
    FN_ENTER(0x2628f74u);
L_2628f74:;
    c->r[2] = 0x0u;
    c->r[3] = 0x60000u;
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[3]); }
    c->r[3] = 0xf0000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x60u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    return;
}
void f_2628ffc(Cpu *restrict c) {
    FN_ENTER(0x2628ffcu);
L_2628ffc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629020; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629020u; f_284cb74(c);
L_2629020:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629034; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629034u; f_284cb74(c);
L_2629034:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629048; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629048u; f_284cb74(c);
L_2629048:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262905c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x262905cu; f_284cb74(c);
L_262905c:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629070; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629070u; f_284cb74(c);
L_2629070:;
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629084; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629084u; f_284cb74(c);
L_2629084:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_262908c(Cpu *restrict c) {
    FN_ENTER(0x262908cu);
L_262908c:;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_262909c(Cpu *restrict c) {
    FN_ENTER(0x262909cu);
L_262909c:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_26290ac(Cpu *restrict c) {
    FN_ENTER(0x26290acu);
L_26290ac:;
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    return;
}
void f_26290b4(Cpu *restrict c) {
    FN_ENTER(0x26290b4u);
L_26290b4:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x60u; uint32_t v = LD16(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_26290dc; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_HI) { c->r[0] = c->r[1] + (c->r[1] << 1); }
    if (COND_HI) { c->r[0] = c->r[3] + (c->r[0] << 1); }
L_26290dc:;
    return;
}
void f_26290e0(Cpu *restrict c) {
    FN_ENTER(0x26290e0u);
L_26290e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2629174; }
L_26290f4:;
    c->r[12] = 0x0u;
    c->r[14] = 0xffffu;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2629198; }
    c->r[3] = 0x0u;
L_2629120:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] << 1);
    c->r[5] = c->r[5] + (uint32_t)(uint16_t)(c->r[3]);
    c->r[5] = (c->r[5] << 1);
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_HI) { goto L_2629188; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_CC) { goto L_2629120; }
    goto L_2629194;
L_2629174:;
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[12] = 0x209u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_2629198; }
    goto L_26290f4;
L_2629188:;
    c->r[0] = 0xffffu;
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
L_2629194:;
    c->r[12] = 0x0u;
L_2629198:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26291a0(Cpu *restrict c) {
    FN_ENTER(0x26291a0u);
L_26291a0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[6] = 0x0u;
    c->r[0] = 0xffffu;
    c->r[1] = 0x4au;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x18u;
    c->r[14] = 0x26291e0u; f_283abec(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_26291f4(Cpu *restrict c) {
    FN_ENTER(0x26291f4u);
L_26291f4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[1] = 0x70u;
    c->r[5] = c->r[0];
    c->r[14] = 0x2629208u; f_284cb38(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_2629258; }
    c->r[6] = 0x0u;
    c->r[0] = 0xffffu;
    c->r[1] = 0x4au;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x18u;
    c->r[14] = 0x2629244u; f_283abec(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_2629258:;
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2629264(Cpu *restrict c) {
    FN_ENTER(0x2629264u);
L_2629264:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26292c0; }
    c->r[6] = 0x0u;
L_2629288:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26292ac; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[2];
    c->r[14] = 0x26292a4u; f_284cb74(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
L_26292ac:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_2629288; }
L_26292c0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26292d0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26292d0u; f_284cb74(c);
L_26292d0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26292e4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26292e4u; f_284cb74(c);
L_26292e4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26292f8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x26292f8u; f_284cb74(c);
L_26292f8:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262930c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x262930cu; f_284cb74(c);
L_262930c:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2629348; }
    c->r[6] = 0x0u;
    c->r[7] = 0x74u;
L_2629320:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[1] * c->r[7] + c->r[0]; c->r[1] = r; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629334u; f_284d138(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_2629320; }
L_2629348:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262935c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x262935cu; f_284cb74(c);
L_262935c:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629374; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_284cb74(c);
L_2629374:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_2629378(Cpu *restrict c) {
    FN_ENTER(0x2629378u);
L_2629378:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x262938cu; f_284cd18(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_284cb74(c);
}
void f_262939c(Cpu *restrict c) {
    FN_ENTER(0x262939cu);
L_262939c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_26293a4(Cpu *restrict c) {
    FN_ENTER(0x26293a4u);
L_26293a4:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x512783u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x26293b8u + c->r[1]; }
    return;
}
void f_26293bc(Cpu *restrict c) {
    FN_ENTER(0x26293bcu);
L_26293bc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_26293c4(Cpu *restrict c) {
    FN_ENTER(0x26293c4u);
L_26293c4:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    return;
}
void f_26293cc(Cpu *restrict c) {
    FN_ENTER(0x26293ccu);
L_26293cc:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[1]); }
    if (COND_LS) { goto L_26293f0; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x74u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
L_26293f0:;
    return;
}
void f_26293f4(Cpu *restrict c) {
    FN_ENTER(0x26293f4u);
L_26293f4:;
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD16(ea); c->r[0] = v; }
    return;
}
void f_26293fc(Cpu *restrict c) {
    FN_ENTER(0x26293fcu);
L_26293fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x60u; uint32_t v = LD16(ea); c->r[12] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[12], 0x0u); }
    if (COND_EQ) { goto L_262944c; }
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = 0x0u;
L_2629424:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[0] = c->r[14] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_2629450; }
    if (COND_LS) { c->r[3] = c->r[3] + 0x1u; }
    c->r[0] = 0x0u;
    if (COND_LS) { c->r[2] = (uint32_t)(uint16_t)(c->r[3]); }
    if (COND_LS) { (void)f_subs(c, c->r[2], c->r[12]); }
    if (COND_CC) { goto L_2629424; }
L_262944c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_2629450:;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_2629458(Cpu *restrict c) {
    FN_ENTER(0x2629458u);
L_2629458:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[6] = c->r[0];
    c->r[8] = c->r[1];
    c->r[1] = 0x401u;
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[6] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2629480u; f_284cb38(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2629508; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[7];
    c->r[3] = 0x200u;
    c->r[14] = 0x26294a0u; f_284cbec(c);
    (void)f_subs(c, c->r[0], 0x200u);
    if (COND_NE) { goto L_262980c; }
    c->r[0] = 0x0u;
    c->r[10] = c->r[7];
    c->r[1] = c->r[7];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[10] + 0x200u; ST8(ea, c->r[0]); c->r[10] = ea; }
    c->r[0] = 0x51267bu;
    c->r[0] = 0x26294c8u + c->r[0];
    c->r[14] = 0x26294c8u; f_283b8dc(c);
    c->r[5] = 0x1f9u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26294f8; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x26294e4u; f_283ce54(c);
    c->r[1] = 0xfff8u;
    c->r[5] = 0x1beu;
    c->r[1] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_CC) { goto L_26297b0; }
L_26294f8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x2629504u; f_284cb74(c);
    goto L_262981c;
L_2629508:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
L_2629510:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    if (COND_NE) { goto L_262981c; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26295e0; }
    c->r[9] = 0x0u;
    c->r[10] = 0x0u;
L_2629530:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x74u;
    { uint32_t r = c->r[9] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[6];
    c->r[14] = 0x2629544u; f_284d144(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x201u;
    c->r[14] = 0x2629558u; f_284cb38(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_26295b0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[3] = 0x200u;
    c->r[14] = 0x2629578u; f_284cbec(c);
    (void)f_subs(c, c->r[0], 0x200u);
    if (COND_NE) { goto L_2629828; }
    c->r[0] = 0x74u;
    c->r[1] = c->r[7];
    c->r[3] = c->r[5];
    { uint32_t r = c->r[9] * c->r[0] + c->r[8]; c->r[2] = r; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x200u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x26295a0u; f_262a384(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x26295acu; f_284cb74(c);
    goto L_26295bc;
L_26295b0:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_262981c; }
L_26295bc:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = (uint32_t)(uint16_t)(c->r[10]);
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_CC) { goto L_2629530; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    goto L_26295e4;
L_26295e0:;
    c->r[0] = 0x1u;
L_26295e4:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_26296f0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26296f0; }
    c->r[9] = 0x0u;
L_26295fc:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[9]);
    c->r[2] = 0x74u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[7] = r; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD16(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26296dc; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[4];
    c->r[14] = 0x262962cu; f_284cb38(c);
    c->r[8] = c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); c->r[8] = ea; }
    if (COND_EQ) { goto L_2629834; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + 0x68u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[7] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2629658u; f_284cbe0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26296dc; }
    c->r[7] = 0x0u;
L_2629668:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[13] + 0xeu;
    c->r[3] = 0x6u;
    c->r[14] = 0x2629680u; f_284cbec(c);
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_2629818; }
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[0] = (c->r[0] << 1);
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[7]);
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[2] | (c->r[1] << 8);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[1]); c->r[10] = ea; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 8);
    { uint32_t ea = c->r[10] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 8);
    c->r[1] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t ea = c->r[10] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_2629668; }
L_26296dc:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[9]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_26295fc; }
L_26296f0:;
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262981c; }
    c->r[1] = (c->r[0] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0x262970cu; f_284cb38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_262981c; }
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + 0x68u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2629738u; f_284cbe0(c);
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262981c; }
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0xau;
L_262974c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[3] = 0x4u;
    c->r[14] = 0x2629764u; f_284cbec(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_2629818; }
    { uint32_t ea = c->r[13] + 0xau; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[7] = c->r[7] + 0x1u;
    c->r[0] = (c->r[0] << 2);
    c->r[1] = c->r[2] | (c->r[1] << 8);
    { uint32_t ea = c->r[5] + c->r[0]; ST16(ea, c->r[1]); c->r[5] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 8);
    c->r[1] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[0]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_262974c; }
    goto L_262981c;
L_26297b0:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = 0x200u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_CC) { goto L_26297e8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = c->r[10];
    c->r[3] = 0x200u;
    c->r[14] = 0x26297d4u; f_284cbec(c);
    (void)f_subs(c, c->r[0], 0x200u);
    if (COND_NE) { goto L_262980c; }
    c->r[0] = 0x0u;
    c->r[2] = 0x400u;
    { uint32_t ea = c->r[7] + 0x400u; ST8(ea, c->r[0]); }
L_26297e8:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x26297f8u; f_2629af8(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x2629808u; f_284cb74(c);
    goto L_2629510;
L_262980c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
L_2629814:;
    c->r[14] = 0x2629818u; f_284cb74(c);
L_2629818:;
    c->r[5] = 0x6au;
L_262981c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2629828:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    goto L_2629814;
L_2629834:;
    c->r[5] = 0x0u;
    goto L_262981c;
}
void f_2629840(Cpu *restrict c) {
    FN_ENTER(0x2629840u);
L_2629840:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[9] = c->r[0];
    c->r[0] = 0x5122d7u;
    c->r[6] = c->r[2];
    c->r[2] = 0x4u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x262986cu + c->r[0];
    c->r[14] = 0x262986cu; f_283b8dc(c);
    c->r[7] = 0x1f9u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26298c8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x2629888u; f_283ce54(c);
    c->r[1] = 0xfff8u;
    c->r[7] = 0x1beu;
    c->r[1] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_26298c8; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[5] = 0x200u;
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[0], 0x6u);
    c->r[0] = c->r[9];
    if (COND_HI) { c->r[5] = 0x400u; }
    c->r[2] = c->r[5];
    c->r[14] = 0x26298bcu; f_2629af8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_26298d4; }
L_26298c8:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26298d4:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2629954; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[7] = c->r[4] + c->r[5];
    c->r[8] = 0x0u;
    c->r[5] = 0x74u;
    c->r[6] = 0x0u;
L_26298f8:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t r = c->r[8] * c->r[5] + c->r[0]; c->r[0] = r; }
    c->r[14] = 0x2629908u; f_284d144(c);
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[7];
    { uint32_t r = c->r[8] * c->r[5] + c->r[0]; c->r[2] = r; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2629920u; f_262a384(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x200u;
    c->r[8] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_CC) { goto L_26298f8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_2629960; }
    goto L_2629a40;
L_2629954:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_2629a40; }
L_2629960:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2629a40; }
    c->r[8] = 0x0u;
L_262996c:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[2] = 0x74u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[6] = r; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[7] + 0x60u; uint32_t v = LD16(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2629a2c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[10];
    c->r[14] = 0x262999cu; f_284cb38(c);
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[0]); c->r[1] = ea; }
    if (COND_EQ) { goto L_2629aec; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[6] + 0x68u; ST16(ea, c->r[2]); }
    if (COND_EQ) { goto L_2629a2c; }
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x0u;
    goto L_26299d8;
L_26299d0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x6u;
L_26299d8:;
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[6] = (c->r[6] << 1);
    c->r[6] = c->r[6] + (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = c->r[3] + 0x1u;
    c->r[5] = c->r[5] | (c->r[4] << 8);
    c->r[6] = (c->r[6] << 1);
    { uint32_t ea = c->r[0] + c->r[6]; ST16(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = c->r[5] | (c->r[6] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = c->r[5] | (c->r[6] << 8);
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[6]); }
    c->r[6] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_26299d0; }
L_2629a2c:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[8]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_262996c; }
L_2629a40:;
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_26298c8; }
    c->r[1] = (c->r[0] << 2);
    c->r[0] = c->r[10];
    c->r[14] = 0x2629a5cu; f_284cb38(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_26298c8; }
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[3] = ~0x10000u;
    c->r[7] = 0x1bfu;
    { uint32_t ea = c->r[9] + 0x68u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_HI) { goto L_26298c8; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_26298c8; }
    c->r[1] = c->r[3] + c->r[1];
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    goto L_2629aac;
L_2629aa4:;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x4u;
L_2629aac:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = (c->r[3] << 2);
    c->r[6] = c->r[5] | (c->r[6] << 8);
    { uint32_t ea = c->r[0] + c->r[3]; ST16(ea, c->r[6]); c->r[0] = ea; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[3] = c->r[6] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_2629aa4; }
    goto L_26298c8;
L_2629aec:;
    c->r[7] = 0x0u;
    goto L_26298c8;
}
void f_2629af8(Cpu *restrict c) {
    FN_ENTER(0x2629af8u);
L_2629af8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x6cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x51201fu;
    c->r[7] = c->r[2];
    c->r[2] = 0x4u;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2629b24u + c->r[0];
    c->r[14] = 0x2629b24u; f_283b8dc(c);
    c->r[2] = 0x1f9u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2629b3c; }
L_2629b30:;
    c->r[0] = c->r[2];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2629b3c:;
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[6]); }
    c->r[14] = 0x2629b50u; f_283ce54(c);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[1] + 0x1u;
    if (COND_NE) { goto L_2629b7c; }
    c->r[0] = 0x1u;
    c->r[8] = c->r[4];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); c->r[8] = ea; }
    goto L_2629bbc;
L_2629b7c:;
    c->r[1] = c->r[11] - 0x20u;
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x2629b8cu; f_283ce54(c);
    c->r[1] = ~0x0u;
    c->r[8] = c->r[4];
    c->r[2] = 0x1bdu;
    c->r[1] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); c->r[8] = ea; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_2629b30; }
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[1] = c->r[1] & (c->r[0] << 2);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x1u;
L_2629bbc:;
    c->r[0] = c->r[5];
    c->r[14] = 0x2629bc4u; f_284cb38(c);
    c->r[2] = 0xc9u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_2629b30; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    goto L_2629c08;
L_2629bf4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x1u;
L_2629c08:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[1] = 0xau;
    c->r[2] = c->r[0] - c->r[6];
    c->r[0] = c->r[6];
    c->r[14] = 0x2629c20u; f_283afb8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2629c64; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[7] - c->r[6];
    c->r[1] = c->r[4] + 0x1u;
    c->r[14] = 0x2629c3cu; f_284cb38(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2629c70; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x2629c58u; f_283baf8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[0]); }
    goto L_2629c78;
L_2629c64:;
    c->r[7] = c->r[6];
    c->r[5] = 0x0u;
    goto L_2629c7c;
L_2629c70:;
    c->r[7] = c->r[6];
    c->r[5] = 0x0u;
L_2629c78:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2629c7c:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[10]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_CC) { goto L_2629bf4; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    c->r[4] = c->r[11] - 0x20u;
    c->r[0] = c->r[7] + 0x1u;
    c->r[2] = 0x0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x2629ca4u; f_283ce54(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x14u; ST16(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[14] = 0x2629cc4u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = c->r[0] + 0x1u;
    c->r[0] = c->r[6] - c->r[8];
    c->r[10] = f_adds(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_262a2d0; }
    c->r[0] = 0x511e54u;
    c->r[0] = 0x2629cf4u + c->r[0];
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e53u;
    c->r[0] = 0x2629d00u + c->r[0];
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e54u;
    c->r[0] = 0x2629d0cu + c->r[0];
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e55u;
    c->r[0] = 0x2629d18u + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e54u;
    c->r[0] = 0x2629d24u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e55u;
    c->r[0] = 0x2629d30u + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e56u;
    c->r[0] = 0x2629d3cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e57u;
    c->r[0] = 0x2629d48u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e58u;
    c->r[0] = 0x2629d54u + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e59u;
    c->r[0] = 0x2629d60u + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e5au;
    c->r[0] = 0x2629d6cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e5bu;
    c->r[0] = 0x2629d78u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e5au;
    c->r[0] = 0x2629d84u + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e5eu;
    c->r[0] = 0x2629d90u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e60u;
    c->r[0] = 0x2629d9cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e64u;
    c->r[0] = 0x2629da8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e66u;
    c->r[0] = 0x2629db4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e6au;
    c->r[0] = 0x2629dc0u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e6cu;
    c->r[0] = 0x2629dccu + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511e72u;
    c->r[0] = 0x2629dd8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_2629dd8:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xau;
    c->r[14] = 0x2629de8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2629fdc; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629e00u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a04c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629e18u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a0bc; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xau;
    c->r[14] = 0x2629e30u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a0e0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629e48u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a11c; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629e60u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a158; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629e78u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a170; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629e90u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a188; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629ea8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a1a0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629ec0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a1b8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x2629ed8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a1d0; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xau;
    c->r[14] = 0x2629ef0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a1e8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xfu;
    c->r[14] = 0x2629f08u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a200; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x2629f20u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a218; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xfu;
    c->r[14] = 0x2629f38u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a230; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x2629f50u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a248; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xfu;
    c->r[14] = 0x2629f68u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a260; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x2629f80u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a278; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x11u;
    c->r[14] = 0x2629f98u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a290; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x2629fb0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a2a8; }
    c->r[0] = c->r[8];
    c->r[1] = 0xau;
    c->r[2] = c->r[10];
    c->r[14] = 0x2629fc8u; f_283afb8(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[8] = c->r[0] + 0x1u; }
    goto L_262a2c4;
L_2629fdc:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2629ff0; }
    c->r[0] = c->r[9];
    c->r[14] = 0x2629ff0u; f_284cb74(c);
L_2629ff0:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[8] + 0xau;
    c->r[1] = 0xau;
    c->r[2] = c->r[0] - c->r[6];
    c->r[0] = c->r[6];
    c->r[14] = 0x262a008u; f_283afb8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_262a0d4; }
    c->r[4] = c->r[7] - c->r[6];
    c->r[0] = c->r[9];
    c->r[1] = c->r[4] + 0x1u;
    c->r[14] = 0x262a024u; f_284cb38(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_262a0f8; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x262a040u; f_283baf8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[0]); }
    goto L_262a100;
L_262a04c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262a060; }
    c->r[0] = c->r[9];
    c->r[14] = 0x262a060u; f_284cb74(c);
L_262a060:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[8] + 0xcu;
    c->r[1] = 0xau;
    c->r[2] = c->r[0] - c->r[6];
    c->r[0] = c->r[6];
    c->r[14] = 0x262a078u; f_283afb8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_262a110; }
    c->r[4] = c->r[7] - c->r[6];
    c->r[0] = c->r[9];
    c->r[1] = c->r[4] + 0x1u;
    c->r[14] = 0x262a094u; f_284cb38(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_262a134; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    c->r[14] = 0x262a0b0u; f_283baf8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[0]); }
    goto L_262a13c;
L_262a0bc:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a0ccu; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a0d4:;
    c->r[7] = c->r[6];
    c->r[5] = 0x0u;
    goto L_262a104;
L_262a0e0:;
    c->r[0] = c->r[8] + 0xau;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a0f0u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a0f8:;
    c->r[7] = c->r[6];
    c->r[5] = 0x0u;
L_262a100:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262a104:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    goto L_262a148;
L_262a110:;
    c->r[7] = c->r[6];
    c->r[5] = 0x0u;
    goto L_262a140;
L_262a11c:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a12cu; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a134:;
    c->r[7] = c->r[6];
    c->r[5] = 0x0u;
L_262a13c:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262a140:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
L_262a148:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = c->r[7] + 0x1u;
    goto L_262a2c4;
L_262a158:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a168u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a170:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a180u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a188:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a198u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a1a0:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a1b0u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a1b8:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a1c8u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a1d0:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a1e0u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a1e8:;
    c->r[0] = c->r[8] + 0xau;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a1f8u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a200:;
    c->r[0] = c->r[8] + 0xfu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a210u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a218:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a228u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a230:;
    c->r[0] = c->r[8] + 0xfu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a240u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a248:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a258u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a260:;
    c->r[0] = c->r[8] + 0xfu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a270u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a278:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a288u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a290:;
    c->r[0] = c->r[8] + 0x11u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a2a0u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    goto L_262a2bc;
L_262a2a8:;
    c->r[0] = c->r[8] + 0x10u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a2b8u; f_283ce54(c);
    { uint32_t ea = c->r[4] + 0x60u; ST16(ea, c->r[0]); }
L_262a2bc:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x1u;
L_262a2c4:;
    c->r[0] = c->r[6] - c->r[8];
    c->r[10] = f_adds(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_2629dd8; }
L_262a2d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_LS) { c->r[1] = 0x200u; }
    if (COND_LS) { c->r[1] = c->r[1] + (c->r[0] << 9); }
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a31c; }
    c->r[1] = 0x74u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[9];
    c->r[14] = 0x262a300u; f_284cb38(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0xc9u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[2] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x6au; ST16(ea, c->r[0]); } }
    goto L_2629b30;
L_262a31c:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1bbu;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6au; ST16(ea, c->r[0]); }
    goto L_2629b30;
}
void f_262a384(Cpu *restrict c) {
    FN_ENTER(0x262a384u);
L_262a384:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x64u;
    c->r[4] = c->r[3];
    c->r[9] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[1] = 0xau;
    c->r[2] = 0x200u;
    c->r[0] = c->r[4];
    c->r[14] = 0x262a3b0u; f_283afb8(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_262a408; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[7] - c->r[4];
    c->r[1] = c->r[6] + 0x1u;
    c->r[14] = 0x262a3d4u; f_284cb38(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_262a408; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0x262a3f8u; f_283baf8(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + c->r[6]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
L_262a408:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[0] + 0x1u;
    c->r[0] = c->r[4] + 0x200u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[0] - c->r[6];
    c->r[0] = c->r[6];
    c->r[14] = 0x262a42cu; f_283afb8(c);
    c->r[7] = c->r[0];
    c->r[5] = c->r[4];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_262a478; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[7] - c->r[6];
    c->r[1] = c->r[5] + 0x1u;
    c->r[14] = 0x262a450u; f_284cb38(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_262a484; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x262a46cu; f_283baf8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[5]; ST8(ea, c->r[0]); }
    goto L_262a48c;
L_262a478:;
    c->r[7] = c->r[6];
    c->r[4] = 0x0u;
    goto L_262a490;
L_262a484:;
    c->r[7] = c->r[6];
    c->r[4] = 0x0u;
L_262a48c:;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
L_262a490:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[11] - 0x20u;
    c->r[0] = c->r[7] + 0x1u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x262a4b0u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[14] = 0x262a4c8u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[14] = 0x262a4e0u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x10u; ST16(ea, c->r[0]); }
    (void)f_subs(c, c->r[10], 0x4u);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x1u;
    if (COND_CC) { goto L_262a510; }
    c->r[1] = c->r[11] - 0x20u;
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[14] = 0x262a504u; f_283ce54(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x1u;
L_262a510:;
    c->r[4] = c->r[5] - c->r[8];
    { uint32_t ea = c->r[9] + 0x12u; ST16(ea, c->r[7]); }
    c->r[10] = f_adds(c, c->r[4], 0x200u);
    if (COND_EQ) { goto L_262ae18; }
    c->r[0] = 0x51172fu;
    c->r[7] = 0x262a52cu + c->r[0];
    c->r[0] = 0x51172du;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[7]); }
    c->r[0] = 0x262a538u + c->r[0];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511733u;
    c->r[0] = 0x262a544u + c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511738u;
    c->r[0] = 0x262a550u + c->r[0];
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173au;
    c->r[0] = 0x262a55cu + c->r[0];
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173cu;
    c->r[0] = 0x262a568u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173eu;
    c->r[0] = 0x262a574u + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511742u;
    c->r[0] = 0x262a580u + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511744u;
    c->r[0] = 0x262a58cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173eu;
    c->r[0] = 0x262a598u + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173au;
    c->r[0] = 0x262a5a4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173bu;
    c->r[0] = 0x262a5b0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173cu;
    c->r[0] = 0x262a5bcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51173eu;
    c->r[0] = 0x262a5c8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511740u;
    c->r[0] = 0x262a5d4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511742u;
    c->r[0] = 0x262a5e0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511744u;
    c->r[0] = 0x262a5ecu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511746u;
    c->r[0] = 0x262a5f8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x511749u;
    c->r[0] = 0x262a604u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x51174cu;
    c->r[0] = 0x262a610u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x511753u;
    c->r[0] = 0x262a61cu + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    goto L_262aa60;
L_262a620:;
    c->r[0] = c->r[8] + 0xfu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a630u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x2cu; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262a638:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a648u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x30u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262a650:;
    c->r[0] = c->r[8] + 0x5u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a660u; f_283ce3c(c);
    { uint32_t ea = c->r[9] + 0x34u; ST8(ea, c->r[0]); }
    goto L_262ac90;
L_262a668:;
    c->r[0] = c->r[8] + 0x7u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a678u; f_283ce3c(c);
    { uint32_t ea = c->r[9] + 0x3cu; ST8(ea, c->r[0]); }
    goto L_262ac90;
L_262a680:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0xau;
    c->r[14] = 0x262a690u; f_283ce3c(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[0] << 16);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2eu);
    if (COND_NE) { goto L_262a968; }
    c->r[4] = c->r[6] + 0x1u;
    c->r[1] = 0xau;
    c->r[0] = c->r[4];
    c->r[14] = 0x262a6b4u; f_2842494(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[4]; }
    (void)f_subs(c, c->r[4], c->r[0]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x5u;
    c->r[2] = 0xcccdu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffd00000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xcccc0000u;
    c->r[1] = c->r[3] + (c->r[1] << 16);
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 3);
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x851fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = c->r[3] + (c->r[1] << 16);
    c->r[1] = c->r[1] + 0x2du;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x3u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 5);
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1f4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd00000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x4dd3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10620000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 6);
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1388u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd00000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x1759u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd1b70000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x5u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 13);
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0xc350u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd00000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x5ac5u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa7c0000u;
    c->r[1] = (c->r[1] >> 5);
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x6u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 7);
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0xa120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd70000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0xde83u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x431b0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x7u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 18);
    if (COND_CS) { goto L_262a96c; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b40u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1c0000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0xca6bu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6b5f0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[5] = c->r[5] + (c->r[2] >> 22);
    goto L_262a96c;
L_262a7f4:;
    c->r[0] = c->r[8] + 0xcu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0xau;
    c->r[14] = 0x262a804u; f_283ce3c(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[0] << 16);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2eu);
    if (COND_NE) { goto L_262a98c; }
    c->r[4] = c->r[6] + 0x1u;
    c->r[1] = 0xau;
    c->r[0] = c->r[4];
    c->r[14] = 0x262a828u; f_2842494(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[4]; }
    (void)f_subs(c, c->r[4], c->r[0]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x5u;
    c->r[2] = 0xcccdu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffd00000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xcccc0000u;
    c->r[1] = c->r[3] + (c->r[1] << 16);
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 3);
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x851fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = c->r[3] + (c->r[1] << 16);
    c->r[1] = c->r[1] + 0x2du;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x3u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 5);
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1f4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd00000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x4dd3u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10620000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 6);
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1388u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd00000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x1759u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd1b70000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x5u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 13);
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0xc350u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd00000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x5ac5u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa7c0000u;
    c->r[1] = (c->r[1] >> 5);
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x6u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 7);
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0xa120u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffd70000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0xde83u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x431b0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[6] + 0x7u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[5] = c->r[5] + (c->r[2] >> 18);
    if (COND_CS) { goto L_262a990; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x4b40u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1c0000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0xca6bu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6b5f0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[5] = c->r[5] + (c->r[2] >> 22);
    goto L_262a990;
L_262a968:;
    c->r[0] = c->r[6];
L_262a96c:;
    { uint32_t ea = c->r[9] + 0x38u; ST32(ea, c->r[5]); }
    goto L_262a994;
L_262a974:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a984u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x6au; ST16(ea, c->r[0]); }
    goto L_262ac90;
L_262a98c:;
    c->r[0] = c->r[6];
L_262a990:;
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[5]); }
L_262a994:;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[0] + 0x1u;
    goto L_262ae0c;
L_262a9a0:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a9b0u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x44u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262a9b8:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a9c8u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x48u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262a9d0:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a9e0u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262a9e8:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262a9f8u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x50u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262aa00:;
    c->r[0] = c->r[8] + 0xeu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262aa10u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262aa18:;
    c->r[0] = c->r[8] + 0xeu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262aa28u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x58u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262aa30:;
    c->r[0] = c->r[8] + 0x12u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262aa40u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x5cu; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262aa48:;
    c->r[0] = c->r[8] + 0x11u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262aa58u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x60u; ST16(ea, c->r[0]); }
    goto L_262ac90;
L_262aa60:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[2] = 0x9u;
    c->r[14] = 0x262aa70u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262ac7c; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x11u;
    c->r[14] = 0x262aa88u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262ac9c; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x262aaa0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262ad0c; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262aab8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262ad78; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262aad0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262ad9c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262aae8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262add8; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xfu;
    c->r[14] = 0x262ab00u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a620; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262ab18u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a638; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x5u;
    c->r[14] = 0x262ab30u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a650; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x7u;
    c->r[14] = 0x262ab48u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a668; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x262ab60u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a680; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xcu;
    c->r[14] = 0x262ab78u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a7f4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262ab90u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a974; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262aba8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a9a0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262abc0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a9b8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262abd8u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a9d0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xdu;
    c->r[14] = 0x262abf0u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262a9e8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x262ac08u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262aa00; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0xeu;
    c->r[14] = 0x262ac20u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262aa18; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x12u;
    c->r[14] = 0x262ac38u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262aa30; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x11u;
    c->r[14] = 0x262ac50u; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262aa48; }
    c->r[0] = c->r[8];
    c->r[1] = 0xau;
    c->r[2] = c->r[10];
    c->r[14] = 0x262ac68u; f_283afb8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[8] = c->r[0] + 0x1u; }
    goto L_262ae0c;
L_262ac7c:;
    c->r[0] = c->r[8] + 0x9u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262ac8cu; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x14u; ST16(ea, c->r[0]); }
L_262ac90:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x1u;
    goto L_262ae0c;
L_262ac9c:;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262acb0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x262acb0u; f_284cb74(c);
L_262acb0:;
    c->r[0] = 0x1efu;
    c->r[7] = c->r[8] + 0x11u;
    c->r[1] = 0xau;
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x262acc8u; f_283afb8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_262ad90; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - c->r[7];
    c->r[1] = c->r[5] + 0x1u;
    c->r[14] = 0x262ace4u; f_284cb38(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_262adb4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x262ad00u; f_283baf8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[5]; ST8(ea, c->r[0]); }
    goto L_262adbc;
L_262ad0c:;
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262ad20; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x262ad20u; f_284cb74(c);
L_262ad20:;
    c->r[7] = c->r[8] + 0x10u;
    c->r[2] = c->r[4] + 0x1f0u;
    c->r[1] = 0xau;
    c->r[0] = c->r[7];
    c->r[14] = 0x262ad34u; f_283afb8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_262adcc; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - c->r[7];
    c->r[1] = c->r[5] + 0x1u;
    c->r[14] = 0x262ad50u; f_284cb38(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_262adf0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x262ad6cu; f_283baf8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[5]; ST8(ea, c->r[0]); }
    goto L_262adf8;
L_262ad78:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262ad88u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x20u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262ad90:;
    c->r[6] = c->r[7];
    c->r[4] = 0x0u;
    goto L_262adc0;
L_262ad9c:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262adacu; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x24u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262adb4:;
    c->r[6] = c->r[7];
    c->r[4] = 0x0u;
L_262adbc:;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
L_262adc0:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[4]); }
    goto L_262ae04;
L_262adcc:;
    c->r[6] = c->r[7];
    c->r[4] = 0x0u;
    goto L_262adfc;
L_262add8:;
    c->r[0] = c->r[8] + 0xdu;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = 0x0u;
    c->r[14] = 0x262ade8u; f_283ce54(c);
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[0]); }
    goto L_262ac90;
L_262adf0:;
    c->r[6] = c->r[7];
    c->r[4] = 0x0u;
L_262adf8:;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
L_262adfc:;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x1cu; ST32(ea, c->r[4]); }
L_262ae04:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[6] + 0x1u;
L_262ae0c:;
    c->r[4] = c->r[5] - c->r[8];
    c->r[10] = f_adds(c, c->r[4], 0x200u);
    if (COND_NE) { goto L_262aa60; }
L_262ae18:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262ae74(Cpu *restrict c) {
    FN_ENTER(0x262ae74u);
L_262ae74:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4cu;
    c->r[5] = 0x0u;
    c->r[3] = 0x2120u;
    c->r[4] = 0x134u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[12]);
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[6] = c->r[3] + c->r[6];
    if (COND_EQ) { goto L_262aed8; }
    c->r[1] = c->r[6] + (c->r[4] << 1);
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + 0x1u;
L_262aed8:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[4]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_262af0c; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[1] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = 0x1u; }
L_262af0c:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[5] = (c->r[5] << 16);
    c->r[1] = c->r[3] + c->r[7];
    c->r[7] = c->r[3] + c->r[14];
    (void)f_subs(c, c->r[5], 0x20000u);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    if (COND_LE) { goto L_262afec; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[0];
    c->r[3] = c->r[3] + c->r[9];
    { uint32_t ea = c->r[8] + 0x2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_NE) { goto L_262b024; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262b060; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[3];
    c->r[1] = 0x0u;
    c->r[10] = 0x0u;
    c->r[8] = 0x0u;
L_262af80:;
    c->r[3] = c->r[7] + (c->r[1] << 1);
    c->r[2] = c->r[9] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_262afdc; }
    c->r[5] = c->r[0] + c->r[3];
L_262afa0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262afbc; }
    c->r[5] = c->r[5] + 0x3u;
    c->r[3] = c->r[4] + 0x2u;
    c->r[10] = c->r[10] + 0x3u;
    goto L_262afc4;
L_262afbc:;
    c->r[10] = c->r[10] + 0x1u;
    c->r[5] = c->r[5] + 0x1u;
L_262afc4:;
    c->r[3] = c->r[3] + 0x1u;
    c->r[8] = c->r[8] + 0x1u;
    c->r[4] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LE) { goto L_262afa0; }
L_262afdc:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_NE) { goto L_262af80; }
    goto L_262b068;
L_262afec:;
    c->r[1] = 0x3cu;
    c->r[4] = 0x3cu;
    c->r[5] = c->r[0];
    c->r[14] = 0x262affcu; f_284cbc8(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_262b058; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[4]); }
    c->r[10] = 0x0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_262b1f0;
L_262b024:;
    c->r[1] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x262b048u; f_284d150(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[4];
    goto L_262b074;
L_262b058:;
    c->r[9] = 0x0u;
    goto L_262b67c;
L_262b060:;
    c->r[8] = 0x0u;
    c->r[10] = 0x0u;
L_262b068:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[10]); }
L_262b074:;
    c->r[5] = c->r[8] + 0x3fu;
    c->r[7] = c->r[0];
    c->r[5] = c->r[5] & 0xfffffffcu;
    c->r[6] = c->r[5] + (c->r[10] << 2);
    c->r[4] = c->r[6] + (c->r[10] << 2);
    c->r[1] = c->r[4];
    c->r[14] = 0x262b090u; f_284cbc8(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_262b114; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[9] + 0x3cu;
    c->r[3] = c->r[9] + c->r[5];
    c->r[2] = c->r[9] + c->r[6];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x28u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x26u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x38u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[7];
    { uint32_t ea = c->r[9] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262b11c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x262b110u; f_284d15c(c);
    goto L_262b148;
L_262b114:;
    c->r[9] = 0x0u;
    goto L_262b67c;
L_262b11c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x262b148u; f_284d168(c);
L_262b148:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[8];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_262b1b8; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x2u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { goto L_262b1d0; }
    c->r[7] = c->r[2] + 0x4u;
    c->r[6] = c->r[3] + 0x4u;
    c->r[4] = c->r[10] - 0x1u;
    c->r[3] = c->r[1];
    c->r[2] = c->r[0];
L_262b184:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[5]; }
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[5]; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[5]; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[5]; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_262b184; }
    goto L_262b1d8;
L_262b1b8:;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[10]); }
    goto L_262b1ec;
L_262b1d0:;
    c->r[2] = c->r[0];
    c->r[3] = c->r[1];
L_262b1d8:;
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8];
L_262b1ec:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_262b1f0:;
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[12]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262b25c; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262b324; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262b42c; }
    c->r[1] = 0xfffcu;
    c->r[6] = c->r[9];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[1] & (c->r[12] << 2);
    c->r[0] = c->r[1] & (c->r[0] << 2);
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[3];
    c->r[1] = (c->r[1] << 10);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); c->r[6] = ea; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_262b524;
L_262b25c:;
    c->r[1] = c->r[0] + 0x3u;
    c->r[3] = c->r[0] + 0x2u;
    c->r[5] = c->r[7];
    c->r[6] = c->r[9];
    (void)f_subs(c, c->r[10], 0x1u);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] - c->r[2];
    c->r[2] = (c->r[2] << 10);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); c->r[6] = ea; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] & (c->r[0] << 10);
    c->r[1] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] & (c->r[3] << 10);
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] - c->r[1];
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[1];
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_262b524; }
    c->r[2] = 0x0u;
L_262b2f4:;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - c->r[0];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - c->r[1];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LT) { goto L_262b2f4; }
    goto L_262b524;
L_262b324:;
    c->r[1] = 0xfffcu;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[8] = c->r[2];
    c->r[6] = c->r[9];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = c->r[1] & (c->r[12] << 2);
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = (c->r[2] << 10);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); c->r[6] = ea; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[14] = 0x262b38cu; f_284cd9c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[14] = 0x262b3acu; f_284cd9c(c);
    c->r[7] = c->r[6] - 0x14u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[2] = 0x0u - c->r[2];
    c->r[1] = 0x0u - c->r[1];
    c->r[3] = c->r[3] - c->r[0];
    c->r[7] = c->r[7] - c->r[0];
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_262b524; }
    c->r[1] = 0x0u;
L_262b3ec:;
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    c->r[2] = 0x0u - c->r[7];
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_LT) { goto L_262b3ec; }
    goto L_262b524;
L_262b42c:;
    c->r[1] = 0xfffcu;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[9];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[0] = c->r[1] & (c->r[0] << 2);
    c->r[1] = c->r[1] & (c->r[12] << 2);
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = (c->r[2] << 10);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); c->r[6] = ea; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[14] = 0x262b490u; f_284cd9c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 16);
    c->r[14] = 0x262b4b0u; f_284cd9c(c);
    c->r[7] = c->r[6] - 0x14u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[7] = c->r[0] - c->r[7];
    c->r[3] = c->r[0] - c->r[3];
    { uint32_t ea = c->r[6] - 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] - 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] - 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_262b524; }
    c->r[1] = 0x0u;
L_262b4e8:;
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u - c->r[3];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_LT) { goto L_262b4e8; }
L_262b524:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262b554; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262b560; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_262b57c; }
    goto L_262b67c;
L_262b554:;
    c->r[1] = c->r[1] + 0x8000u;
    c->r[1] = (c->r[1] >> 16);
    goto L_262b564;
L_262b560:;
    c->r[1] = 0x0u;
L_262b564:;
    c->r[0] = c->r[0] + 0x8000u;
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[9] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x1au; ST16(ea, c->r[1]); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_262b67c; }
L_262b57c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262b67c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x20000u);
    if (COND_LE) { goto L_262b5cc; }
    c->r[2] = c->r[11] - 0x20u;
    c->r[3] = c->r[11] - 0x24u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x262b5acu; f_284d174(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_EQ) { goto L_262b67c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x262b5c4u; f_284cb2c(c);
    c->r[9] = c->r[6];
    goto L_262b67c;
L_262b5cc:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + 0x8000u;
    (void)f_subs(c, c->r[1], (uint32_t)((int32_t)c->r[0] >> 16));
    if (COND_EQ) { goto L_262b67c; }
    c->r[4] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x2cu;
    c->r[14] = 0x262b624u; f_284cdfc(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[4]; c->r[1] = r; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[2] * c->r[4] + c->r[7]; c->r[2] = r; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[3] * c->r[4] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[9] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] + 0x8000u; }
    if (COND_NE) { c->r[1] = c->r[2] + (c->r[1] >> 16); }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x18u; ST16(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x8000u; }
    if (COND_NE) { c->r[0] = c->r[1] + (c->r[0] >> 16); }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x1au; ST16(ea, c->r[0]); } }
L_262b67c:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262b688(Cpu *restrict c) {
    FN_ENTER(0x262b688u);
L_262b688:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262b71c; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[10] = 0x0u;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_262b6b0:;
    c->r[4] = c->r[3] + (c->r[10] << 1);
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[4] = c->r[2] + (c->r[10] << 1);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_GE) { goto L_262b70c; }
    c->r[5] = c->r[8] + c->r[4];
L_262b6d0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262b6ec; }
    c->r[5] = c->r[5] + 0x3u;
    c->r[4] = c->r[6] + 0x2u;
    c->r[1] = c->r[1] + 0x3u;
    goto L_262b6f4;
L_262b6ec:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[5] = c->r[5] + 0x1u;
L_262b6f4:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[6] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_LE) { goto L_262b6d0; }
L_262b70c:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[9]);
    if (COND_NE) { goto L_262b6b0; }
    goto L_262b724;
L_262b71c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_262b724:;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262b734(Cpu *restrict c) {
    FN_ENTER(0x262b734u);
L_262b734:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0x1u;
    { uint32_t r = c->r[7] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262b780; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262b77c; }
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { goto L_262b788; }
    goto L_262b884;
L_262b77c:;
    c->r[0] = 0x0u;
L_262b780:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262b884; }
L_262b788:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_262b890; }
    c->r[14] = 0x0u;
    c->r[4] = 0x0u;
    c->r[12] = 0x0u;
L_262b7a4:;
    c->r[0] = c->r[2] + (c->r[14] << 1);
    c->r[1] = c->r[3] + (c->r[14] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_262b874; }
    c->r[1] = c->r[10] + (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[9] = r; }
    if (COND_EQ) { goto L_262b7e0; }
    c->r[0] = 0x1u;
    goto L_262b7ec;
L_262b7e0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[0] = v; }
    c->r[6] = 0x2u;
    c->r[0] = c->r[0] & 0x1u;
L_262b7ec:;
    c->r[6] = c->r[5] + c->r[6];
    c->r[5] = c->r[12] + 0x1u;
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_GT) { goto L_262b840; }
L_262b804:;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[0] = v; }
    { uint32_t r = c->r[7] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[0] & 0x1u;
    if (COND_EQ) { goto L_262b828; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262b830; }
    c->r[4] = c->r[4] + 0x1u;
    goto L_262b82c;
L_262b828:;
    c->r[4] = c->r[4] + 0x2u;
L_262b82c:;
    c->r[5] = c->r[5] + 0x1u;
L_262b830:;
    c->r[7] = c->r[6] + 0x1u;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    (void)f_subs(c, c->r[6], c->r[8]);
    if (COND_LE) { goto L_262b804; }
L_262b840:;
    c->r[12] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_262b85c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262b86c; }
    c->r[4] = c->r[4] + 0x1u;
    goto L_262b870;
L_262b85c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[12] = c->r[5]; }
    if (COND_EQ) { c->r[4] = c->r[4] + 0x2u; }
    c->r[12] = c->r[12] + 0x1u;
L_262b86c:;
    c->r[4] = c->r[4] + 0x2u;
L_262b870:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_262b874:;
    c->r[14] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[5]);
    if (COND_NE) { goto L_262b7a4; }
    goto L_262b99c;
L_262b884:;
    c->r[12] = 0x0u;
    c->r[4] = 0x0u;
    goto L_262b99c;
L_262b890:;
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_262b8a0:;
    c->r[0] = c->r[2] + (c->r[6] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[3] + (c->r[6] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_262b990; }
    c->r[0] = c->r[10] + (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[10] + c->r[7]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_262b8e0; }
    c->r[10] = 0x1u;
    goto L_262b8ec;
L_262b8e0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    c->r[9] = 0x2u;
    c->r[10] = c->r[1] & 0x1u;
L_262b8ec:;
    c->r[8] = c->r[8] + c->r[9];
    c->r[14] = c->r[5] & 0x1u;
    c->r[5] = c->r[12] + 0x1u;
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_GT) { goto L_262b944; }
L_262b908:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[3] = v; }
    c->r[1] = c->r[10];
    { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[10] = c->r[3] & 0x1u;
    if (COND_EQ) { goto L_262b92c; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_262b934; }
    c->r[4] = c->r[4] + 0x1u;
    goto L_262b930;
L_262b92c:;
    c->r[4] = c->r[4] + 0x2u;
L_262b930:;
    c->r[5] = c->r[5] + 0x1u;
L_262b934:;
    c->r[1] = c->r[8] + 0x1u;
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_LE) { goto L_262b908; }
L_262b944:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { goto L_262b968; }
    c->r[12] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262b970; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { c->r[4] = c->r[4] + 0x1u; }
    if (COND_EQ) { c->r[4] = c->r[4] + 0x2u; }
    goto L_262b984;
L_262b968:;
    c->r[12] = c->r[5];
    goto L_262b984;
L_262b970:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { c->r[12] = c->r[5]; }
    if (COND_EQ) { c->r[4] = c->r[4] + 0x2u; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[4] = c->r[4] + 0x2u;
L_262b984:;
    { uint32_t ea = c->r[13]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_262b990:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_262b8a0; }
L_262b99c:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262b9b4(Cpu *restrict c) {
    FN_ENTER(0x262b9b4u);
L_262b9b4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[9] = c->r[2];
    c->r[4] = c->r[3];
    c->r[8] = c->r[1];
    c->r[6] = c->r[9] + 0x3fu;
    c->r[6] = c->r[6] & 0xfffffffcu;
    c->r[5] = c->r[6] + (c->r[4] << 2);
    c->r[7] = c->r[5] + (c->r[4] << 2);
    c->r[1] = c->r[7];
    c->r[14] = 0x262b9e0u; f_284cbc8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262ba18; }
    c->r[1] = c->r[0] + 0x3cu;
    c->r[2] = c->r[0] + c->r[6];
    c->r[3] = c->r[0] + c->r[5];
    c->r[12] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x26u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_262ba18:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_262ba20(Cpu *restrict c) {
    FN_ENTER(0x262ba20u);
L_262ba20:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x28u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262ba8c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262ba84; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    goto L_262ba8c;
L_262ba84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_262ba8c:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[2]); }
    if (COND_LT) { goto L_262bce4; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_262baac:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_262bcd0; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[8] = c->r[2] + 0x1u;
    c->r[12] = c->r[0] + (c->r[2] << 2);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[1] + (c->r[2] << 2);
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[7] + 0x24u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[6]); c->r[4] = c->r[4] + 0x1u; }
    c->r[7] = (c->r[7] << 10);
    c->r[3] = (c->r[3] << 10);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); c->r[5] = c->r[5] + 0x4u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); c->r[1] = c->r[1] + 0x4u; }
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[3], c->r[0]);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    if (COND_GT) { goto L_262bcd0; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = c->r[14] + 0x4u;
    c->r[14] = c->r[12] + 0x4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[2] + 0x1u;
    goto L_262bb5c;
L_262bb50:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[6];
    goto L_262bcbc;
L_262bb5c:;
    c->r[7] = c->r[1];
    c->r[2] = c->r[14];
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = c->r[7] + 0x1u; c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[10] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[12] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_262bba8; }
    c->r[6] = 0x1u;
    c->r[9] = c->r[12];
    c->r[1] = c->r[7];
    c->r[14] = c->r[5];
    c->r[12] = c->r[10];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[3];
    goto L_262bc94;
L_262bba8:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4];
    c->r[4] = c->r[14] + 0x8u;
    c->r[2] = c->r[9] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_262bc18; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[6];
    c->r[6] = 0x2u;
    c->r[4] = (c->r[12] << 10);
    c->r[14] = c->r[5];
    c->r[1] = c->r[1] + 0x2u;
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[7]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[4]); c->r[14] = c->r[14] + 0x4u; }
    c->r[4] = (c->r[10] << 10);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[4]); c->r[10] = c->r[10] + 0x4u; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    goto L_262bc94;
L_262bc18:;
    c->r[3] = c->r[1] + 0x3u;
    c->r[8] = c->r[8] + 0x2u;
    c->r[14] = c->r[14] + 0xcu;
    c->r[9] = c->r[9] + 0xcu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_262bb50; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    c->r[3] = c->r[7];
    c->r[7] = c->r[14];
    c->r[14] = c->r[5] + 0x8u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[6];
    c->r[6] = 0x3u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[12] << 10);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[10] << 10);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[0] << 10);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[3] << 10);
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    c->r[10] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
L_262bc94:;
    c->r[0] = (c->r[9] << 10);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    c->r[5] = c->r[5] + (c->r[6] << 2);
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] << 10);
    c->r[14] = c->r[7];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
L_262bcbc:;
    c->r[0] = c->r[8] + 0x1u;
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LE) { goto L_262bb5c; }
L_262bcd0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_262baac; }
L_262bce4:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262bd04; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_262bd04:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262bd0c(Cpu *restrict c) {
    FN_ENTER(0x262bd0cu);
L_262bd0c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x40u;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262bd64; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262bd60; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[8] = 0x1u; }
    goto L_262bd64;
L_262bd60:;
    c->r[8] = 0x0u;
L_262bd64:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[4]); }
    if (COND_LT) { goto L_262c1b0; }
    c->r[0] = 0x0u;
    c->r[4] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[6] = 0x0u;
    c->r[9] = 0x0u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
L_262bdb4:;
    c->r[0] = c->r[2] + (c->r[6] << 1);
    c->r[1] = (c->r[6] << 1);
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD16(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_262c1a4; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[2] = c->r[2] + (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[7] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + (c->r[0] << 2);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[6] + 0x24u; ST16(ea, c->r[4]); }
    if (COND_NE) { goto L_262be24; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[4] = 0x1u;
    c->r[4] = c->r[4] & ~c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
L_262be24:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[5] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_262be7c; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->r[8] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[4]); c->r[1] = c->r[1] + 0x1u; }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[5] << 10);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[6] << 10);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    goto L_262bf18;
L_262be7c:;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->r[8] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[4] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[12] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[5]); c->r[1] = c->r[1] + 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_262bed0; }
    c->r[0] = (c->r[12] << 10);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] << 10);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    goto L_262bf18;
L_262bed0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfc00u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[12];
    c->r[9] = c->r[6];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[12] + c->r[0];
    c->r[0] = c->r[1] & (c->r[0] << 9);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[6] + c->r[0];
    c->r[0] = c->r[1] & (c->r[0] << 9);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_262bf18:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[12] + 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LE) { goto L_262bf3c; }
    c->r[6] = c->r[4];
    goto L_262c004;
L_262bf3c:;
    c->r[0] = c->r[9];
    c->r[12] = c->r[10];
L_262bf44:;
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[6] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[9] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[10] = v; }
    { uint32_t r = c->r[4] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262bf84; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_262bfe4; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[5]); }
    c->r[5] = (c->r[10] << 10);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[5]); c->r[14] = c->r[14] + 0x4u; }
    c->r[5] = (c->r[9] << 10);
    goto L_262bfdc;
L_262bf84:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[5]); c->r[4] = c->r[4] + 0x1u; }
    c->r[5] = (c->r[0] << 10);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[4]); }
    c->r[4] = (c->r[12] << 10);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[4]); }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); c->r[4] = c->r[4] + 0x4u; }
    if (COND_EQ) { goto L_262bfc0; }
    c->r[0] = (c->r[10] << 10);
    c->r[5] = (c->r[9] << 10);
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    goto L_262bfd4;
L_262bfc0:;
    c->r[5] = c->r[10] + c->r[12];
    c->r[0] = c->r[9] + c->r[0];
    c->r[5] = (c->r[5] << 9);
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = (c->r[0] << 9);
L_262bfd4:;
    c->r[14] = c->r[14] + 0x8u;
    c->r[0] = 0x2u;
L_262bfdc:;
    c->r[1] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_262bfe4:;
    c->r[0] = c->r[8] + 0x1u;
    c->r[12] = c->r[10];
    c->r[4] = c->r[6];
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    c->r[0] = c->r[9];
    if (COND_LE) { goto L_262bf44; }
L_262c004:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] | c->r[8]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_262c04c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262c064; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[0] + 0x1u;
    if (COND_EQ) { goto L_262c090; }
    c->r[3] = 0x1u;
    c->r[12] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); c->r[14] = c->r[14] + 0x4u; }
    goto L_262c0c4;
L_262c04c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = c->r[1];
    goto L_262c1a4;
L_262c064:;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    if (COND_EQ) { goto L_262c0dc; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[1];
    goto L_262c128;
L_262c090:;
    c->r[3] = 0x2u;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    c->r[0] = (c->r[10] << 10);
    c->r[3] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[9] << 10);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); c->r[12] = c->r[12] + 0x8u; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = c->r[14] + 0x8u;
L_262c0c4:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_262c188;
L_262c0dc:;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    c->r[0] = (c->r[10] << 10);
    c->r[7] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[9] << 10);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[10] + c->r[4];
    c->r[0] = (c->r[0] << 9);
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = c->r[14] + 0x8u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[9] + c->r[12];
    c->r[0] = (c->r[0] << 9);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
L_262c128:;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x1u; }
    c->r[0] = (c->r[4] << 10);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] << 10);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + 0x4u; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262c168; }
    c->r[0] = (c->r[5] << 10);
    c->r[12] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 10);
    goto L_262c184;
L_262c168:;
    c->r[0] = c->r[5] + c->r[4];
    c->r[0] = (c->r[0] << 9);
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[12];
    c->r[12] = c->r[7] + 0x8u;
    c->r[0] = (c->r[0] << 9);
L_262c184:;
    c->r[14] = c->r[14] + 0x8u;
L_262c188:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] - 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] - 0x4u; ST32(ea, c->r[7]); }
L_262c1a4:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_262bdb4; }
L_262c1b0:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_262c1cc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_262c1cc:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262c1d4(Cpu *restrict c) {
    FN_ENTER(0x262c1d4u);
L_262c1d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x8cu;
    c->r[7] = c->r[0];
    c->r[8] = c->r[1];
    c->r[10] = c->r[3];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x50u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x262c228u; f_284cdfc(c);
    c->r[0] = c->r[5] + c->r[4];
    { uint32_t r = c->r[0] * c->r[6]; c->r[4] = r; }
    { uint32_t ea = c->r[7] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262c270; }
    c->r[0] = c->r[4] + 0x8000u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (uint32_t)((int32_t)c->r[0] >> 16));
    if (COND_EQ) { goto L_262cf3c; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    goto L_262c29c;
L_262c270:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    c->r[14] = 0x262c284u; f_284cbb0(c);
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x10u;
    c->r[14] = 0x262c298u; f_284cbb0(c);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
L_262c29c:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[9]); }
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[8] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[8] + 0x3fu;
    c->r[4] = c->r[4] & 0xfffffffcu;
    c->r[6] = c->r[4] + (c->r[10] << 2);
    c->r[5] = c->r[6] + (c->r[10] << 2);
    c->r[1] = c->r[5];
    c->r[14] = 0x262c2dcu; f_284cbc8(c);
    c->r[12] = c->r[0];
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_262cf34; }
    c->r[1] = c->r[12] + 0x3cu;
    c->r[2] = c->r[12] + c->r[4];
    c->r[0] = c->r[12] + c->r[6];
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[12] + 0x24u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[12] + 0x28u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[12] + 0x26u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[12] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[12] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x2au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12] + 0x2au; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_262cf44; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[0]); }
L_262c37c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[10] = c->r[10] + 0x1u; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x7fu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262d00c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); c->r[1] = c->r[1] + 0x1u; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); c->r[2] = c->r[2] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); c->r[2] = c->r[2] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262c448; }
    c->r[4] = 0x0u;
    c->r[0] = 0x0u;
L_262c3dc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262c448; }
    { uint32_t ea = c->r[10] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262c448; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x262c418u; f_284cbb0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] - c->r[8];
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c430u; f_284cbb0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_LT) { goto L_262c3dc; }
L_262c448:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[2] = 0xffffu;
    if (COND_LT) { c->r[5] = c->r[2]; }
    if (COND_GT) { c->r[5] = 0x1u; }
    c->r[14] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262c478; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[14] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
L_262c478:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[14]);
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_262c4b0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xffffu;
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_262c4b0:;
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    goto L_262ce58;
L_262c4dc:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] - 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[1] = c->r[1] - c->r[0];
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[14] = 0x262c510u; f_284cbb0(c);
    c->r[1] = c->r[5] - c->r[8];
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[0];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x262c52cu; f_284cbb0(c);
    c->r[1] = c->r[4] - c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_262cbd8; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x1u;
    goto L_262cc34;
L_262c560:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] - 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] - 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x2cu;
    c->r[14] = 0x262c5d8u; f_284cdfc(c);
    c->r[0] = c->r[11] - 0x34u;
    c->r[14] = 0x262c5e0u; f_284cdfc(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c5f0u; f_284cbb0(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c604u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] - c->r[0];
    c->r[2] = 0x10u;
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[8]; c->r[4] = r; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = c->r[4];
    if (COND_MI) { c->r[0] = 0x0u - c->r[4]; }
    (void)f_subs(c, c->r[0], 0x4000u);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[4] = 0x0u; }
    c->r[14] = 0x262c638u; f_284cbb0(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c64cu; f_284cbb0(c);
    c->r[0] = c->r[6] - c->r[0];
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[1], 0x4000u);
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_262c68c; }
    if (COND_NE) { goto L_262cc9c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_262cc9c; }
L_262c68c:;
    c->r[2] = 0x1u;
    c->r[14] = c->r[8];
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x1u; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[6] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->r[3] = 0x0u - c->r[14];
    c->r[2] = 0x0u - c->r[2];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[12];
    goto L_262cca8;
L_262c700:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[3] - 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] - 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x2cu;
    c->r[14] = 0x262c758u; f_284cdfc(c);
    c->r[0] = c->r[11] - 0x34u;
    c->r[14] = 0x262c760u; f_284cdfc(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c770u; f_284cbb0(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c784u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] - c->r[0];
    c->r[2] = 0x10u;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[8] = r; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[0] = c->r[8];
    if (COND_MI) { c->r[0] = 0x0u - c->r[8]; }
    (void)f_subs(c, c->r[0], 0x4000u);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[8] = 0x0u; }
    c->r[14] = 0x262c7b8u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[14] = 0x262c7ccu; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    c->r[14] = c->r[4];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[1], 0x4000u);
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_262c814; }
    if (COND_NE) { goto L_262c880; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_262c880; }
L_262c814:;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); c->r[1] = c->r[1] + 0x1u; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    c->r[14] = 0x0u - c->r[2];
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[6] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = 0x0u - c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_262c880:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    if (COND_GT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GT) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262c928; }
    c->r[0] = c->r[2] & c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_262c928; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x2u;
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + c->r[4];
    c->r[4] = c->r[2] + 0x4u;
    goto L_262cb88;
L_262c928:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[14]); }
    c->r[5] = c->r[1];
    c->r[14] = 0x262c940u; f_284cbb0(c);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    c->r[2] = 0x10u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[4]); }
    c->r[6] = c->r[1];
    c->r[14] = 0x262c960u; f_284cbb0(c);
    c->r[8] = c->r[7] - c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = c->r[0] - c->r[5];
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[14] = 0x262c97cu; f_284cbb0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6];
    c->r[2] = 0x10u;
    c->r[1] = c->r[0] - c->r[5];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[14] = 0x262c99cu; f_284cbb0(c);
    c->r[1] = c->r[7] - c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x262c9acu; f_284cba4(c);
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2u;
    c->r[7] = 0x0u - c->r[0];
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x262c9d8u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x262c9f8u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x262ca10u; f_284cbb0(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x10u;
    c->r[14] = 0x262ca28u; f_284cbb0(c);
    c->r[4] = c->r[4] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x262ca3cu; f_284cbb0(c);
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[7];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x262ca58u; f_284cbb0(c);
    c->r[4] = c->r[4] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x10u;
    c->r[14] = 0x262ca6cu; f_284cbb0(c);
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->r[3] = c->r[6];
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[1]); c->r[7] = ea; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = 0x0u - c->r[1];
    c->r[0] = c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_262cb10; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
L_262cb10:;
    c->r[0] = c->r[3] + 0xcu;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[5];
    c->r[5] = c->r[3];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[4] = c->r[6] + 0xcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x262cb48u; f_284cbb0(c);
    c->r[0] = c->r[0] + c->r[7];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x262cb64u; f_284cbb0(c);
    c->r[1] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x5u;
    c->r[12] = 0x3u;
    c->r[2] = c->r[4];
L_262cb88:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[12] + c->r[8];
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    goto L_262ce58;
L_262cbd8:;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x1u;
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[3]; ST8(ea, c->r[14]); c->r[3] = c->r[3] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t r = c->r[12] * c->r[6] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[12] * c->r[8] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u - c->r[12];
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x1u;
    c->r[8] = c->r[8] + 0x1u;
L_262cc34:;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[14]); c->r[3] = c->r[3] + 0x1u; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    goto L_262ce58;
L_262cc9c:;
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_262cca8:;
    c->r[2] = 0x3u;
    c->r[12] = c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = 0x0u;
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_GT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GT) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[3] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262cd88; }
    c->r[0] = c->r[2] & c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_262cd88; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[14];
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] - c->r[1];
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_262ce18;
L_262cd88:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[14];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_262cdd4; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[6];
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
L_262cdd4:;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[14] = 0x0u - c->r[0];
L_262ce18:;
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0xcu;
    c->r[3] = c->r[3] + 0xcu;
    c->r[1] = c->r[1] + 0x1u;
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x3u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
L_262ce58:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
L_262ce5c:;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_GE) { goto L_262ce94; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262ce94; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_262c560; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_262c700; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_262ce5c; }
    goto L_262c4dc;
L_262ce94:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_262cec0; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LT) { goto L_262c37c; }
    goto L_262cf20;
L_262cec0:;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x1u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); c->r[3] = c->r[3] + 0x1u; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] * c->r[6] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[3];
    c->r[2] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LT) { goto L_262c37c; }
L_262cf20:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[12] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_262cf50;
L_262cf34:;
    c->r[12] = 0x0u;
    goto L_262d154;
L_262cf3c:;
    c->r[12] = c->r[8];
    goto L_262d154;
L_262cf44:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = 0x0u;
    c->r[8] = 0x0u;
L_262cf50:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x80u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[12] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[12] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[6] + 0x8000u; }
    if (COND_NE) { c->r[0] = c->r[0] + (c->r[1] >> 16); }
    if (COND_NE) { { uint32_t ea = c->r[12] + 0x18u; ST16(ea, c->r[0]); } }
    { uint32_t ea = c->r[9] + 0x1au; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[2] + 0x8000u; }
    if (COND_NE) { c->r[0] = c->r[0] + (c->r[1] >> 16); }
    if (COND_NE) { { uint32_t ea = c->r[12] + 0x1au; ST16(ea, c->r[0]); } }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_262d014; }
    { uint32_t ea = c->r[12] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x2u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { goto L_262d02c; }
    c->r[7] = c->r[2] + 0x4u;
    c->r[6] = c->r[3] + 0x4u;
    c->r[5] = c->r[10] - 0x1u;
    c->r[3] = c->r[1];
    c->r[2] = c->r[0];
L_262cfd8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[4]; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[4]; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[4]; }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[4]; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_262cfd8; }
    goto L_262d034;
L_262d00c:;
    c->r[12] = 0x0u;
    goto L_262d154;
L_262d014:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[0]); }
    goto L_262d048;
L_262d02c:;
    c->r[2] = c->r[0];
    c->r[3] = c->r[1];
L_262d034:;
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
L_262d048:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[10], c->r[14]);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GE) { (void)f_subs(c, c->r[8], c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); }
    if (COND_GE) { goto L_262d154; }
    c->r[7] = c->r[8] + 0x3fu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[7] = c->r[7] & 0xfffffffcu;
    c->r[5] = c->r[7] + (c->r[10] << 2);
    c->r[6] = c->r[5] + (c->r[10] << 2);
    c->r[1] = c->r[6];
    c->r[14] = 0x262d084u; f_284cbc8(c);
    c->r[4] = c->r[0];
    c->r[2] = c->r[8];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_262d150; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4] + 0x3cu;
    c->r[6] = c->r[4] + c->r[7];
    c->r[1] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x26u; ST16(ea, c->r[10]); }
    c->r[8] = (c->r[10] << 2);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x262d0d4u; f_283aa78(c);
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[8];
    c->r[14] = 0x262d0e4u; f_283ac04(c);
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[14] = 0x262d0f4u; f_283ac04(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x262d148u; f_284cb2c(c);
    c->r[12] = c->r[4];
    goto L_262d154;
L_262d150:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
L_262d154:;
    c->r[0] = c->r[12];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262d160(Cpu *restrict c) {
    FN_ENTER(0x262d160u);
L_262d160:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[1];
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_262d35c; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LE) { goto L_262d1e0; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->r[2] = c->r[7];
L_262d198:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fu;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_CC) { goto L_262d1c0; }
    if (COND_EQ) { goto L_262d1d0; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_EQ) { c->r[8] = c->r[8] + 0x3u; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_262d198; }
    goto L_262d1e4;
L_262d1c0:;
    c->r[8] = c->r[8] + 0x1u;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_262d198; }
    goto L_262d1e4;
L_262d1d0:;
    c->r[8] = c->r[8] + 0x2u;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_262d198; }
    goto L_262d1e4;
L_262d1e0:;
    c->r[8] = 0x0u;
L_262d1e4:;
    c->r[9] = c->r[7] + 0x3fu;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[9] = c->r[9] & 0xfffffffcu;
    c->r[10] = c->r[9] + (c->r[8] << 2);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[10] + (c->r[8] << 2);
    c->r[1] = c->r[6];
    c->r[14] = 0x262d204u; f_284cbc8(c);
    c->r[5] = c->r[0];
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_262d35c; }
    c->r[0] = (c->r[8] << 2);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] + c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST16(ea, c->r[7]); }
    c->r[0] = c->r[5] + 0x3cu;
    c->r[7] = c->r[5] + c->r[9];
    { uint32_t ea = c->r[5] + 0x26u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2au; ST16(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262d2e4; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[14] = 0x262d2b8u; f_283aa78(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_262d33c; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    c->r[14] = 0x262d2d4u; f_283ac04(c);
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_262d348; }
    goto L_262d358;
L_262d2e4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262d2f4; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[14] = 0x262d2f4u; f_283aa78(c);
L_262d2f4:;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_262d318; }
    c->r[0] = c->r[7];
    c->r[2] = c->r[8];
    c->r[14] = 0x262d314u; f_283ac04(c);
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
L_262d318:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_262d358; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262d35c; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[8];
    goto L_262d354;
L_262d33c:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_262d358; }
L_262d348:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = c->r[7];
L_262d354:;
    c->r[14] = 0x262d358u; f_283ac04(c);
L_262d358:;
    c->r[3] = c->r[5];
L_262d35c:;
    c->r[0] = c->r[3];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262d368(Cpu *restrict c) {
    FN_ENTER(0x262d368u);
L_262d368:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2];
    c->r[4] = c->r[0];
    c->r[2] = c->r[3];
    c->r[14] = 0x262d384u; f_284d180(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d3c0; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262d3c0; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); } }
    c->r[1] = c->r[0];
L_262d3c0:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_262d3c8(Cpu *restrict c) {
    FN_ENTER(0x262d3c8u);
L_262d3c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    c->r[14] = 0x262d3e0u; f_284cae4(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d47c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x262d3f8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d47c; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262d434; }
    { uint32_t ea = c->r[0] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_262d434; }
    { uint32_t ea = c->r[7] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d434; }
    c->r[0] = c->r[5];
    c->r[14] = 0x262d434u; f_284cc1c(c);
L_262d434:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x262d444u; f_284d180(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d47c; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_262d47c; }
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = c->r[1] | 0x2u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); } }
L_262d47c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_262d484(Cpu *restrict c) {
    FN_ENTER(0x262d484u);
L_262d484:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[9] = c->r[2];
    c->r[2] = 0x0u;
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5] | 0x4000u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x262d4b4u; f_284cae4(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d4d0; }
L_262d4c8:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_262d4d0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x262d4d8u; f_284cb5c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d4ec; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_262d4ec:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d64c; }
L_262d504:;
    { uint32_t ea = c->r[5] + 0x8u; ST16(ea, c->r[7]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & ~(c->r[1] >> 1);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262d534; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x262d530u; f_284d18c(c);
    goto L_262d540;
L_262d534:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x262d540u; f_284d198(c);
L_262d540:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d4c8; }
    c->r[0] = 0x134u;
    c->r[1] = 0x2120u;
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_262d590; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
L_262d590:;
    c->r[14] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[2] + c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_262d5d8; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[6] = 0x8u;
    c->r[12] = 0x0u;
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[10] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[12] & (c->r[6] << 10);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[12] & (c->r[7] << 10);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
L_262d5d8:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262d6c0; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262d710; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_262d760; }
    c->r[7] = 0x0u;
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[6] = 0x0u;
L_262d604:;
    c->r[0] = c->r[8] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GE) { goto L_262d76c; }
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[12] - c->r[5];
    { uint32_t ea = c->r[2] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] - c->r[5];
    { uint32_t ea = c->r[1] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_LT) { goto L_262d604; }
    goto L_262d4c8;
L_262d64c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x262d674u; f_284cc58(c);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x262d680u; f_284cb74(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x262d6a8u; f_284ce68(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d4c8; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_262d504;
L_262d6c0:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_262d760; }
    c->r[5] = 0x0u;
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[6] = 0x0u;
L_262d6d4:;
    c->r[0] = c->r[8] + (c->r[5] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GE) { goto L_262d76c; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[2] + (c->r[5] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[9]);
    if (COND_LT) { goto L_262d6d4; }
    goto L_262d4c8;
L_262d710:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_262d760; }
    c->r[5] = 0x0u;
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[6] = 0x0u;
L_262d724:;
    c->r[0] = c->r[8] + (c->r[5] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GE) { goto L_262d76c; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = 0x0u - c->r[7];
    { uint32_t ea = c->r[2] + (c->r[5] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[9]);
    if (COND_LT) { goto L_262d724; }
    goto L_262d4c8;
L_262d760:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_262d76c:;
    c->r[0] = 0x1a2u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_262d77c(Cpu *restrict c) {
    FN_ENTER(0x262d77cu);
L_262d77c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d840; }
L_262d7a8:;
    { uint32_t ea = c->r[5] + 0x8u; ST16(ea, c->r[8]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & ~(c->r[1] >> 1);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262d7d8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x262d7d4u; f_284d18c(c);
    goto L_262d7e4;
L_262d7d8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x262d7e4u; f_284d198(c);
L_262d7e4:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d89c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x262d800u; f_284d1a4(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262d834; }
    c->r[0] = c->r[5];
    c->r[14] = 0x262d818u; f_284d1b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_262d830; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262d8b4; }
L_262d830:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_262d834:;
    c->r[0] = c->r[0] | 0x10000000u;
L_262d838:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    goto L_262d89c;
L_262d840:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = 0x262d864u; f_284cc58(c);
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x262d870u; f_284cb74(c);
    c->r[6] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x262d890u; f_284ce68(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262d8a8; }
L_262d89c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_262d8a8:;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_262d7a8;
L_262d8b4:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xefffffffu;
    goto L_262d838;
}
